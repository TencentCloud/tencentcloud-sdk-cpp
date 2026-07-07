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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_MODIFYLOADBALANCERMODIFICATIONPROTECTIONREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_MODIFYLOADBALANCERMODIFICATIONPROTECTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * ModifyLoadBalancerModificationProtection请求参数结构体
                */
                class ModifyLoadBalancerModificationProtectionRequest : public AbstractModel
                {
                public:
                    ModifyLoadBalancerModificationProtectionRequest();
                    ~ModifyLoadBalancerModificationProtectionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。
                     * @return LoadBalancerId 负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。
                     * @param _loadBalancerId 负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取是否只预检此次请求。取值：
- true：仅执行预检，不实际操作资源。检查参数完整性、请求格式及业务限制，通过返回 DryRunOperation，不通过返回对应错误。
- false（默认）：执行正常请求，检查通过后直接操作资源。
                     * @return DryRun 是否只预检此次请求。取值：
- true：仅执行预检，不实际操作资源。检查参数完整性、请求格式及业务限制，通过返回 DryRunOperation，不通过返回对应错误。
- false（默认）：执行正常请求，检查通过后直接操作资源。
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置是否只预检此次请求。取值：
- true：仅执行预检，不实际操作资源。检查参数完整性、请求格式及业务限制，通过返回 DryRunOperation，不通过返回对应错误。
- false（默认）：执行正常请求，检查通过后直接操作资源。
                     * @param _dryRun 是否只预检此次请求。取值：
- true：仅执行预检，不实际操作资源。检查参数完整性、请求格式及业务限制，通过返回 DryRunOperation，不通过返回对应错误。
- false（默认）：执行正常请求，检查通过后直接操作资源。
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                    /**
                     * 获取是否开启修改保护。开启后，可防止实例被意外修改或删除。\n- true：开启修改保护\n- false：关闭修改保护
                     * @return ModificationProtectionEnabled 是否开启修改保护。开启后，可防止实例被意外修改或删除。\n- true：开启修改保护\n- false：关闭修改保护
                     * 
                     */
                    bool GetModificationProtectionEnabled() const;

                    /**
                     * 设置是否开启修改保护。开启后，可防止实例被意外修改或删除。\n- true：开启修改保护\n- false：关闭修改保护
                     * @param _modificationProtectionEnabled 是否开启修改保护。开启后，可防止实例被意外修改或删除。\n- true：开启修改保护\n- false：关闭修改保护
                     * 
                     */
                    void SetModificationProtectionEnabled(const bool& _modificationProtectionEnabled);

                    /**
                     * 判断参数 ModificationProtectionEnabled 是否已赋值
                     * @return ModificationProtectionEnabled 是否已赋值
                     * 
                     */
                    bool ModificationProtectionEnabledHasBeenSet() const;

                    /**
                     * 获取开启修改保护的原因说明。
长度为 1~255 个字符，必须是中文和无害字符串中的字符， 可包含中文、字母、数字、短划线（-）、正斜线（/）、半角句号（.）、下划线（_）。
                     * @return Reason 开启修改保护的原因说明。
长度为 1~255 个字符，必须是中文和无害字符串中的字符， 可包含中文、字母、数字、短划线（-）、正斜线（/）、半角句号（.）、下划线（_）。
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置开启修改保护的原因说明。
长度为 1~255 个字符，必须是中文和无害字符串中的字符， 可包含中文、字母、数字、短划线（-）、正斜线（/）、半角句号（.）、下划线（_）。
                     * @param _reason 开启修改保护的原因说明。
长度为 1~255 个字符，必须是中文和无害字符串中的字符， 可包含中文、字母、数字、短划线（-）、正斜线（/）、半角句号（.）、下划线（_）。
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * 负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 是否只预检此次请求。取值：
- true：仅执行预检，不实际操作资源。检查参数完整性、请求格式及业务限制，通过返回 DryRunOperation，不通过返回对应错误。
- false（默认）：执行正常请求，检查通过后直接操作资源。
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * 是否开启修改保护。开启后，可防止实例被意外修改或删除。\n- true：开启修改保护\n- false：关闭修改保护
                     */
                    bool m_modificationProtectionEnabled;
                    bool m_modificationProtectionEnabledHasBeenSet;

                    /**
                     * 开启修改保护的原因说明。
长度为 1~255 个字符，必须是中文和无害字符串中的字符， 可包含中文、字母、数字、短划线（-）、正斜线（/）、半角句号（.）、下划线（_）。
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_MODIFYLOADBALANCERMODIFICATIONPROTECTIONREQUEST_H_
