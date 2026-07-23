/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_CHECKCLUSTERNATFWPREACCESSREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_CHECKCLUSTERNATFWPREACCESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/NatCcnSwitchConfig.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * CheckClusterNatFwPreAccess请求参数结构体
                */
                class CheckClusterNatFwPreAccessRequest : public AbstractModel
                {
                public:
                    CheckClusterNatFwPreAccessRequest();
                    ~CheckClusterNatFwPreAccessRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>NAT CCN 开关配置 JSON 字符串，与 OpenClusterNatFwSwitch 的 NatCcnSwitch 完全一致。SwitchMode 必须为 1（自动接入），RoutingMode 必须为 1（策略路由）。</p>
                     * @return NatCcnSwitch <p>NAT CCN 开关配置 JSON 字符串，与 OpenClusterNatFwSwitch 的 NatCcnSwitch 完全一致。SwitchMode 必须为 1（自动接入），RoutingMode 必须为 1（策略路由）。</p>
                     * 
                     */
                    NatCcnSwitchConfig GetNatCcnSwitch() const;

                    /**
                     * 设置<p>NAT CCN 开关配置 JSON 字符串，与 OpenClusterNatFwSwitch 的 NatCcnSwitch 完全一致。SwitchMode 必须为 1（自动接入），RoutingMode 必须为 1（策略路由）。</p>
                     * @param _natCcnSwitch <p>NAT CCN 开关配置 JSON 字符串，与 OpenClusterNatFwSwitch 的 NatCcnSwitch 完全一致。SwitchMode 必须为 1（自动接入），RoutingMode 必须为 1（策略路由）。</p>
                     * 
                     */
                    void SetNatCcnSwitch(const NatCcnSwitchConfig& _natCcnSwitch);

                    /**
                     * 判断参数 NatCcnSwitch 是否已赋值
                     * @return NatCcnSwitch 是否已赋值
                     * 
                     */
                    bool NatCcnSwitchHasBeenSet() const;

                    /**
                     * 获取<p>预接入模式</p><p>枚举值：</p><ul><li>open： 开启防火墙前预接入检查</li><li>modify： 编辑修改防火墙开关时预接入检查</li></ul>
                     * @return CheckMode <p>预接入模式</p><p>枚举值：</p><ul><li>open： 开启防火墙前预接入检查</li><li>modify： 编辑修改防火墙开关时预接入检查</li></ul>
                     * 
                     */
                    std::string GetCheckMode() const;

                    /**
                     * 设置<p>预接入模式</p><p>枚举值：</p><ul><li>open： 开启防火墙前预接入检查</li><li>modify： 编辑修改防火墙开关时预接入检查</li></ul>
                     * @param _checkMode <p>预接入模式</p><p>枚举值：</p><ul><li>open： 开启防火墙前预接入检查</li><li>modify： 编辑修改防火墙开关时预接入检查</li></ul>
                     * 
                     */
                    void SetCheckMode(const std::string& _checkMode);

                    /**
                     * 判断参数 CheckMode 是否已赋值
                     * @return CheckMode 是否已赋值
                     * 
                     */
                    bool CheckModeHasBeenSet() const;

                private:

                    /**
                     * <p>NAT CCN 开关配置 JSON 字符串，与 OpenClusterNatFwSwitch 的 NatCcnSwitch 完全一致。SwitchMode 必须为 1（自动接入），RoutingMode 必须为 1（策略路由）。</p>
                     */
                    NatCcnSwitchConfig m_natCcnSwitch;
                    bool m_natCcnSwitchHasBeenSet;

                    /**
                     * <p>预接入模式</p><p>枚举值：</p><ul><li>open： 开启防火墙前预接入检查</li><li>modify： 编辑修改防火墙开关时预接入检查</li></ul>
                     */
                    std::string m_checkMode;
                    bool m_checkModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CHECKCLUSTERNATFWPREACCESSREQUEST_H_
