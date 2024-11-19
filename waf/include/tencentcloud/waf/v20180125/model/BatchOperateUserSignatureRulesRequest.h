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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_BATCHOPERATEUSERSIGNATURERULESREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_BATCHOPERATEUSERSIGNATURERULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/FiltersItemNew.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * BatchOperateUserSignatureRules请求参数结构体
                */
                class BatchOperateUserSignatureRulesRequest : public AbstractModel
                {
                public:
                    BatchOperateUserSignatureRulesRequest();
                    ~BatchOperateUserSignatureRulesRequest() = default;
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
                     * 获取0:关闭，1:开启，2:仅观察
                     * @return Status 0:关闭，1:开启，2:仅观察
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置0:关闭，1:开启，2:仅观察
                     * @param _status 0:关闭，1:开启，2:仅观察
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
                     * 获取如果SelectedAll为true，则表示反选的规则，否则表示手动选择的规则ID
                     * @return RuleIds 如果SelectedAll为true，则表示反选的规则，否则表示手动选择的规则ID
                     * 
                     */
                    std::vector<std::string> GetRuleIds() const;

                    /**
                     * 设置如果SelectedAll为true，则表示反选的规则，否则表示手动选择的规则ID
                     * @param _ruleIds 如果SelectedAll为true，则表示反选的规则，否则表示手动选择的规则ID
                     * 
                     */
                    void SetRuleIds(const std::vector<std::string>& _ruleIds);

                    /**
                     * 判断参数 RuleIds 是否已赋值
                     * @return RuleIds 是否已赋值
                     * 
                     */
                    bool RuleIdsHasBeenSet() const;

                    /**
                     * 获取仅观察原因
                     * @return Reason 仅观察原因
                     * 
                     */
                    int64_t GetReason() const;

                    /**
                     * 设置仅观察原因
                     * @param _reason 仅观察原因
                     * 
                     */
                    void SetReason(const int64_t& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取是否全选
                     * @return SelectedAll 是否全选
                     * 
                     */
                    bool GetSelectedAll() const;

                    /**
                     * 设置是否全选
                     * @param _selectedAll 是否全选
                     * 
                     */
                    void SetSelectedAll(const bool& _selectedAll);

                    /**
                     * 判断参数 SelectedAll 是否已赋值
                     * @return SelectedAll 是否已赋值
                     * 
                     */
                    bool SelectedAllHasBeenSet() const;

                    /**
                     * 获取过滤
                     * @return Filters 过滤
                     * 
                     */
                    std::vector<FiltersItemNew> GetFilters() const;

                    /**
                     * 设置过滤
                     * @param _filters 过滤
                     * 
                     */
                    void SetFilters(const std::vector<FiltersItemNew>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 0:关闭，1:开启，2:仅观察
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 如果SelectedAll为true，则表示反选的规则，否则表示手动选择的规则ID
                     */
                    std::vector<std::string> m_ruleIds;
                    bool m_ruleIdsHasBeenSet;

                    /**
                     * 仅观察原因
                     */
                    int64_t m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * 是否全选
                     */
                    bool m_selectedAll;
                    bool m_selectedAllHasBeenSet;

                    /**
                     * 过滤
                     */
                    std::vector<FiltersItemNew> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_BATCHOPERATEUSERSIGNATURERULESREQUEST_H_
