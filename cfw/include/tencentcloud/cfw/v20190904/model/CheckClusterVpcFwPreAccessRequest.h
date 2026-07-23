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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_CHECKCLUSTERVPCFWPREACCESSREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_CHECKCLUSTERVPCFWPREACCESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/CcnSwitchInfo.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * CheckClusterVpcFwPreAccess请求参数结构体
                */
                class CheckClusterVpcFwPreAccessRequest : public AbstractModel
                {
                public:
                    CheckClusterVpcFwPreAccessRequest();
                    ~CheckClusterVpcFwPreAccessRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>CCN 开关配置，长度为 1 的数组 JSON 字符串，结构与 ModifyClusterVpcFwSwitch 的 CcnSwitch 完全一致。SwitchMode 必须为 1（自动接入），RoutingMode 必须为 1（策略路由）。</p>
                     * @return CcnSwitch <p>CCN 开关配置，长度为 1 的数组 JSON 字符串，结构与 ModifyClusterVpcFwSwitch 的 CcnSwitch 完全一致。SwitchMode 必须为 1（自动接入），RoutingMode 必须为 1（策略路由）。</p>
                     * 
                     */
                    std::vector<CcnSwitchInfo> GetCcnSwitch() const;

                    /**
                     * 设置<p>CCN 开关配置，长度为 1 的数组 JSON 字符串，结构与 ModifyClusterVpcFwSwitch 的 CcnSwitch 完全一致。SwitchMode 必须为 1（自动接入），RoutingMode 必须为 1（策略路由）。</p>
                     * @param _ccnSwitch <p>CCN 开关配置，长度为 1 的数组 JSON 字符串，结构与 ModifyClusterVpcFwSwitch 的 CcnSwitch 完全一致。SwitchMode 必须为 1（自动接入），RoutingMode 必须为 1（策略路由）。</p>
                     * 
                     */
                    void SetCcnSwitch(const std::vector<CcnSwitchInfo>& _ccnSwitch);

                    /**
                     * 判断参数 CcnSwitch 是否已赋值
                     * @return CcnSwitch 是否已赋值
                     * 
                     */
                    bool CcnSwitchHasBeenSet() const;

                    /**
                     * 获取<p>预接入检查模式</p><p>枚举值：</p><ul><li>open： 开启开关时预接入检查</li><li>modify： 编辑变更开关时预接入检查</li></ul>
                     * @return CheckMode <p>预接入检查模式</p><p>枚举值：</p><ul><li>open： 开启开关时预接入检查</li><li>modify： 编辑变更开关时预接入检查</li></ul>
                     * 
                     */
                    std::string GetCheckMode() const;

                    /**
                     * 设置<p>预接入检查模式</p><p>枚举值：</p><ul><li>open： 开启开关时预接入检查</li><li>modify： 编辑变更开关时预接入检查</li></ul>
                     * @param _checkMode <p>预接入检查模式</p><p>枚举值：</p><ul><li>open： 开启开关时预接入检查</li><li>modify： 编辑变更开关时预接入检查</li></ul>
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
                     * <p>CCN 开关配置，长度为 1 的数组 JSON 字符串，结构与 ModifyClusterVpcFwSwitch 的 CcnSwitch 完全一致。SwitchMode 必须为 1（自动接入），RoutingMode 必须为 1（策略路由）。</p>
                     */
                    std::vector<CcnSwitchInfo> m_ccnSwitch;
                    bool m_ccnSwitchHasBeenSet;

                    /**
                     * <p>预接入检查模式</p><p>枚举值：</p><ul><li>open： 开启开关时预接入检查</li><li>modify： 编辑变更开关时预接入检查</li></ul>
                     */
                    std::string m_checkMode;
                    bool m_checkModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CHECKCLUSTERVPCFWPREACCESSREQUEST_H_
