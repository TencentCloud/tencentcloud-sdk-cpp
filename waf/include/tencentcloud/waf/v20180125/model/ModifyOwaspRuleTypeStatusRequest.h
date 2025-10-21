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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYOWASPRULETYPESTATUSREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYOWASPRULETYPESTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * ModifyOwaspRuleTypeStatus请求参数结构体
                */
                class ModifyOwaspRuleTypeStatusRequest : public AbstractModel
                {
                public:
                    ModifyOwaspRuleTypeStatusRequest();
                    ~ModifyOwaspRuleTypeStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取规则类型ID列表
                     * @return TypeIDs 规则类型ID列表
                     * 
                     */
                    std::vector<std::string> GetTypeIDs() const;

                    /**
                     * 设置规则类型ID列表
                     * @param _typeIDs 规则类型ID列表
                     * 
                     */
                    void SetTypeIDs(const std::vector<std::string>& _typeIDs);

                    /**
                     * 判断参数 TypeIDs 是否已赋值
                     * @return TypeIDs 是否已赋值
                     * 
                     */
                    bool TypeIDsHasBeenSet() const;

                    /**
                     * 获取规则类型的开关状态，0：关闭、1：开启
                     * @return RuleTypeStatus 规则类型的开关状态，0：关闭、1：开启
                     * 
                     */
                    int64_t GetRuleTypeStatus() const;

                    /**
                     * 设置规则类型的开关状态，0：关闭、1：开启
                     * @param _ruleTypeStatus 规则类型的开关状态，0：关闭、1：开启
                     * 
                     */
                    void SetRuleTypeStatus(const int64_t& _ruleTypeStatus);

                    /**
                     * 判断参数 RuleTypeStatus 是否已赋值
                     * @return RuleTypeStatus 是否已赋值
                     * 
                     */
                    bool RuleTypeStatusHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 规则类型ID列表
                     */
                    std::vector<std::string> m_typeIDs;
                    bool m_typeIDsHasBeenSet;

                    /**
                     * 规则类型的开关状态，0：关闭、1：开启
                     */
                    int64_t m_ruleTypeStatus;
                    bool m_ruleTypeStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYOWASPRULETYPESTATUSREQUEST_H_
