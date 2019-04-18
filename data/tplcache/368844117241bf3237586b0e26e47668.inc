<li class="navitem"><a class="nav-a " href="{dede:field name='typeurl'/}" target=""><span data-title="{dede:field name='typename'/}">{dede:field name='typename'/}</span><i
                class="fa fa-angle-down"></i></a>
            <ul class="subnav">

              {dede:channel type='son' noself='yes' }
              <li><a href="[field:typelink/]" target="_self"><span
                    data-title="[field:typename/]">[field:typename/]</span><i class="fa fa-angle-right"></i></a></li>
              {/dede:channel}

            </ul>
          </li>