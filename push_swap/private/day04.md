# push_swap - day 04.

## push_swap 기능 구현
- sa (v)
- sb (v)
- ss (v)
- pa (v)
- pb (v)
- ra
- rb
- rr
- rra
- rrb
- rrr

## pop && destroy 기능 수정
- 원래 pop의 기능은 노드를 삭제하고 아무것도 리턴하지 않았지만 기능 구현을 조금 수월하게 하기 위해 스택의 제일 위에있는 노드를 리턴하게 바꾸어 주었다.
- 기능에서 node의 데이터를 이용해서 push를 하고 free를 하게 바꾸어주었다.
- destroy에서도 아무것도 없을때 free해주는 기능과 기존의 pop만 반복문에서 도는 과정을 pop후 free하게 바꾸어 주었다.
  
  ## 마무리
  - 왜 이렇게 늦게 일어날까..?
  - 아침형인간... 운동하고 공부를 적절히 병행할수있도록 하자