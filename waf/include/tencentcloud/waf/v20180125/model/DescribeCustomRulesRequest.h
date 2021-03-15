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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBECUSTOMRULESREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBECUSTOMRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/DescribeCustomRulesPagingInfo.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeCustomRules请求参数结构体
                */
                class DescribeCustomRulesRequest : public AbstractModel
                {
                public:
                    DescribeCustomRulesRequest();
                    ~DescribeCustomRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名
                     * @return Domain 域名
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param Domain 域名
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取分页参数
                     * @return Paging 分页参数
                     */
                    DescribeCustomRulesPagingInfo GetPaging() const;

                    /**
                     * 设置分页参数
                     * @param Paging 分页参数
                     */
                    void SetPaging(const DescribeCustomRulesPagingInfo& _paging);

                    /**
                     * 判断参数 Paging 是否已赋值
                     * @return Paging 是否已赋值
                     */
                    bool PagingHasBeenSet() const;

                    /**
                     * 获取clb-waf或者sparta-waf
                     * @return Edition clb-waf或者sparta-waf
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置clb-waf或者sparta-waf
                     * @param Edition clb-waf或者sparta-waf
                     */
                    void SetEdition(const std::string& _edition);

                    /**
                     * 判断参数 Edition 是否已赋值
                     * @return Edition 是否已赋值
                     */
                    bool EditionHasBeenSet() const;

                    /**
                     * 获取过滤参数：动作类型：0放行，1阻断，2人机识别，3观察，4重定向
                     * @return ActionType 过滤参数：动作类型：0放行，1阻断，2人机识别，3观察，4重定向
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置过滤参数：动作类型：0放行，1阻断，2人机识别，3观察，4重定向
                     * @param ActionType 过滤参数：动作类型：0放行，1阻断，2人机识别，3观察，4重定向
                     */
                    void SetActionType(const std::string& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取过滤参数：规则名称过滤条件
                     * @return Search 过滤参数：规则名称过滤条件
                     */
                    std::string GetSearch() const;

                    /**
                     * 设置过滤参数：规则名称过滤条件
                     * @param Search 过滤参数：规则名称过滤条件
                     */
                    void SetSearch(const std::string& _search);

                    /**
                     * 判断参数 Search 是否已赋值
                     * @return Search 是否已赋值
                     */
                    bool SearchHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 分页参数
                     */
                    DescribeCustomRulesPagingInfo m_paging;
                    bool m_pagingHasBeenSet;

                    /**
                     * clb-waf或者sparta-waf
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * 过滤参数：动作类型：0放行，1阻断，2人机识别，3观察，4重定向
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * 过滤参数：规则名称过滤条件
                     */
                    std::string m_search;
                    bool m_searchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBECUSTOMRULESREQUEST_H_
