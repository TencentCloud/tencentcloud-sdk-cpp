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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYOWASPRULESTATUSREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYOWASPRULESTATUSREQUEST_H_

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
                * ModifyOwaspRuleStatus请求参数结构体
                */
                class ModifyOwaspRuleStatusRequest : public AbstractModel
                {
                public:
                    ModifyOwaspRuleStatusRequest();
                    ~ModifyOwaspRuleStatusRequest() = default;
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
                     * 获取规则开关，0：关闭、1：开启、2：只观察
                     * @return RuleStatus 规则开关，0：关闭、1：开启、2：只观察
                     * 
                     */
                    int64_t GetRuleStatus() const;

                    /**
                     * 设置规则开关，0：关闭、1：开启、2：只观察
                     * @param _ruleStatus 规则开关，0：关闭、1：开启、2：只观察
                     * 
                     */
                    void SetRuleStatus(const int64_t& _ruleStatus);

                    /**
                     * 判断参数 RuleStatus 是否已赋值
                     * @return RuleStatus 是否已赋值
                     * 
                     */
                    bool RuleStatusHasBeenSet() const;

                    /**
                     * 获取是否全选
                     * @return SelectAll 是否全选
                     * 
                     */
                    bool GetSelectAll() const;

                    /**
                     * 设置是否全选
                     * @param _selectAll 是否全选
                     * 
                     */
                    void SetSelectAll(const bool& _selectAll);

                    /**
                     * 判断参数 SelectAll 是否已赋值
                     * @return SelectAll 是否已赋值
                     * 
                     */
                    bool SelectAllHasBeenSet() const;

                    /**
                     * 获取规则ID列表
                     * @return RuleIDs 规则ID列表
                     * 
                     */
                    std::vector<std::string> GetRuleIDs() const;

                    /**
                     * 设置规则ID列表
                     * @param _ruleIDs 规则ID列表
                     * 
                     */
                    void SetRuleIDs(const std::vector<std::string>& _ruleIDs);

                    /**
                     * 判断参数 RuleIDs 是否已赋值
                     * @return RuleIDs 是否已赋值
                     * 
                     */
                    bool RuleIDsHasBeenSet() const;

                    /**
                     * 获取如果反转需要传入类型
                     * @return TypeId 如果反转需要传入类型
                     * 
                     */
                    uint64_t GetTypeId() const;

                    /**
                     * 设置如果反转需要传入类型
                     * @param _typeId 如果反转需要传入类型
                     * 
                     */
                    void SetTypeId(const uint64_t& _typeId);

                    /**
                     * 判断参数 TypeId 是否已赋值
                     * @return TypeId 是否已赋值
                     * 
                     */
                    bool TypeIdHasBeenSet() const;

                    /**
                     * 获取修改原因 0：无(兼容记录为空) 1：业务自身特性误报避免 2：规则误报上报 3：核心业务规则灰度 4：其它
                     * @return Reason 修改原因 0：无(兼容记录为空) 1：业务自身特性误报避免 2：规则误报上报 3：核心业务规则灰度 4：其它
                     * 
                     */
                    int64_t GetReason() const;

                    /**
                     * 设置修改原因 0：无(兼容记录为空) 1：业务自身特性误报避免 2：规则误报上报 3：核心业务规则灰度 4：其它
                     * @param _reason 修改原因 0：无(兼容记录为空) 1：业务自身特性误报避免 2：规则误报上报 3：核心业务规则灰度 4：其它
                     * 
                     */
                    void SetReason(const int64_t& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 规则开关，0：关闭、1：开启、2：只观察
                     */
                    int64_t m_ruleStatus;
                    bool m_ruleStatusHasBeenSet;

                    /**
                     * 是否全选
                     */
                    bool m_selectAll;
                    bool m_selectAllHasBeenSet;

                    /**
                     * 规则ID列表
                     */
                    std::vector<std::string> m_ruleIDs;
                    bool m_ruleIDsHasBeenSet;

                    /**
                     * 如果反转需要传入类型
                     */
                    uint64_t m_typeId;
                    bool m_typeIdHasBeenSet;

                    /**
                     * 修改原因 0：无(兼容记录为空) 1：业务自身特性误报避免 2：规则误报上报 3：核心业务规则灰度 4：其它
                     */
                    int64_t m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYOWASPRULESTATUSREQUEST_H_
