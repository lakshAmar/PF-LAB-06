#include <stdio.h>

int basicAttack(int d, int h) {
    printf("Basic Attack! %d damage dealt.\n", d);
    return h - d;
}

int powerStrike(int d, int h) {
    int dmg = (int)(d * 2.5);
    printf("Power Strike! %d damage dealt.\n", dmg);
    return h - dmg;
}

int heal(int d, int h) {
    printf("Healed! +20 HP.\n");
    return h + 20;
}

int poisonAttack(int d, int h) {
    int dmg = d / 2;
    printf("Poison! %d damage dealt.\n", dmg);
    printf("Target is poisoned!\n");
    return h - dmg;
}

int main() {
    int hp = 100, dmg = 25;
    int ch, t;
    int (*act)(int, int);

    printf("--- Battle Start ---\n");
    printf("HP: %d  DMG: %d\n\n", hp, dmg);

    for (t = 1; t <= 3; t++) {
        printf("Turn %d [HP: %d]\n", t, hp);
        printf("1-Basic  2-Power  3-Heal  4-Poison\n");
        printf("Pick: ");
        scanf("%d", &ch);

        if (ch == 1) act = basicAttack;
        else if (ch == 2) act = powerStrike;
        else if (ch == 3) act = heal;
        else if (ch == 4) act = poisonAttack;
        else {
            printf("Bad input, skip.\n\n");
            continue;
        }

        hp = act(dmg, hp);
        printf("HP now: %d\n\n", hp);
    }

    printf("--- Battle Over ---\n");
    printf("Final HP: %d\n", hp);

    return 0;
}
