/// week08_05_pacman_part1_part1 _arc_open_close
/// File-Preference �r�Ω�j
void setup(){
  size(400, 500);
}
int x = 200, y = 250 ; ///�y��
float m = 0, dm= 0.03; ///�L�ڤj�p vs. ���ܶq
void draw(){
  background(0);
  fill(255, 255, 0); ///���⪺
  /// ellipse(x, y, 30, 30); ///�p���F
  arc(x, y, 30, 30, m, PI*2-m); ///�p���F
  m += dm ;
  if(m > 1 || m < 0) dm = -dm;
}
