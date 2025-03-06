class Cfg3DEN {
    class Attributes {
        class Default;
        class TitleWide: Default {
            class Controls {
                class Title;
            };
        };
        class GVAR(subTitle): TitleWide {
            class Controls: Controls {
                class Title: Title {
                    style = 2;
                    colorText[] = {1, 1, 1, 0.4};
                };
            };
        };
    };
};
