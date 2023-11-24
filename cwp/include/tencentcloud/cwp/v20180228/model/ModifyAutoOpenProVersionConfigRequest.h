/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYAUTOOPENPROVERSIONCONFIGREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYAUTOOPENPROVERSIONCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyAutoOpenProVersionConfig请求参数结构体
                */
                class ModifyAutoOpenProVersionConfigRequest : public AbstractModel
                {
                public:
                    ModifyAutoOpenProVersionConfigRequest();
                    ~ModifyAutoOpenProVersionConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设置自动开通状态。
<li>CLOSE：关闭</li>
<li>OPEN：打开</li>
                     * @return Status 设置自动开通状态。
<li>CLOSE：关闭</li>
<li>OPEN：打开</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置设置自动开通状态。
<li>CLOSE：关闭</li>
<li>OPEN：打开</li>
                     * @param _status 设置自动开通状态。
<li>CLOSE：关闭</li>
<li>OPEN：打开</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取自动加购/扩容授权开关,默认 1, 0关闭, 1开启
                     * @return AutoRepurchaseSwitch 自动加购/扩容授权开关,默认 1, 0关闭, 1开启
                     * 
                     */
                    uint64_t GetAutoRepurchaseSwitch() const;

                    /**
                     * 设置自动加购/扩容授权开关,默认 1, 0关闭, 1开启
                     * @param _autoRepurchaseSwitch 自动加购/扩容授权开关,默认 1, 0关闭, 1开启
                     * 
                     */
                    void SetAutoRepurchaseSwitch(const uint64_t& _autoRepurchaseSwitch);

                    /**
                     * 判断参数 AutoRepurchaseSwitch 是否已赋值
                     * @return AutoRepurchaseSwitch 是否已赋值
                     * 
                     */
                    bool AutoRepurchaseSwitchHasBeenSet() const;

                    /**
                     * 获取自动加购的订单是否自动续费,默认0 ,0关闭, 1开启
                     * @return AutoRepurchaseRenewSwitch 自动加购的订单是否自动续费,默认0 ,0关闭, 1开启
                     * 
                     */
                    uint64_t GetAutoRepurchaseRenewSwitch() const;

                    /**
                     * 设置自动加购的订单是否自动续费,默认0 ,0关闭, 1开启
                     * @param _autoRepurchaseRenewSwitch 自动加购的订单是否自动续费,默认0 ,0关闭, 1开启
                     * 
                     */
                    void SetAutoRepurchaseRenewSwitch(const uint64_t& _autoRepurchaseRenewSwitch);

                    /**
                     * 判断参数 AutoRepurchaseRenewSwitch 是否已赋值
                     * @return AutoRepurchaseRenewSwitch 是否已赋值
                     * 
                     */
                    bool AutoRepurchaseRenewSwitchHasBeenSet() const;

                    /**
                     * 获取手动购买的订单是否自动续费,默认0, 0关闭 ,1 开启
                     * @return RepurchaseRenewSwitch 手动购买的订单是否自动续费,默认0, 0关闭 ,1 开启
                     * 
                     */
                    uint64_t GetRepurchaseRenewSwitch() const;

                    /**
                     * 设置手动购买的订单是否自动续费,默认0, 0关闭 ,1 开启
                     * @param _repurchaseRenewSwitch 手动购买的订单是否自动续费,默认0, 0关闭 ,1 开启
                     * 
                     */
                    void SetRepurchaseRenewSwitch(const uint64_t& _repurchaseRenewSwitch);

                    /**
                     * 判断参数 RepurchaseRenewSwitch 是否已赋值
                     * @return RepurchaseRenewSwitch 是否已赋值
                     * 
                     */
                    bool RepurchaseRenewSwitchHasBeenSet() const;

                private:

                    /**
                     * 设置自动开通状态。
<li>CLOSE：关闭</li>
<li>OPEN：打开</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 自动加购/扩容授权开关,默认 1, 0关闭, 1开启
                     */
                    uint64_t m_autoRepurchaseSwitch;
                    bool m_autoRepurchaseSwitchHasBeenSet;

                    /**
                     * 自动加购的订单是否自动续费,默认0 ,0关闭, 1开启
                     */
                    uint64_t m_autoRepurchaseRenewSwitch;
                    bool m_autoRepurchaseRenewSwitchHasBeenSet;

                    /**
                     * 手动购买的订单是否自动续费,默认0, 0关闭 ,1 开启
                     */
                    uint64_t m_repurchaseRenewSwitch;
                    bool m_repurchaseRenewSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYAUTOOPENPROVERSIONCONFIGREQUEST_H_
