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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEENTERPRISESECURITYGROUPRULERESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEENTERPRISESECURITYGROUPRULERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/SecurityGroupRule.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeEnterpriseSecurityGroupRule返回参数结构体
                */
                class DescribeEnterpriseSecurityGroupRuleResponse : public AbstractModel
                {
                public:
                    DescribeEnterpriseSecurityGroupRuleResponse();
                    ~DescribeEnterpriseSecurityGroupRuleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取分页查询时，显示的当前页的页码。
                     * @return PageNo 分页查询时，显示的当前页的页码。
                     * 
                     */
                    std::string GetPageNo() const;

                    /**
                     * 判断参数 PageNo 是否已赋值
                     * @return PageNo 是否已赋值
                     * 
                     */
                    bool PageNoHasBeenSet() const;

                    /**
                     * 获取分页查询时，显示的每页数据的最大条数。
                     * @return PageSize 分页查询时，显示的每页数据的最大条数。
                     * 
                     */
                    std::string GetPageSize() const;

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取访问控制策略列表
                     * @return Rules 访问控制策略列表
                     * 
                     */
                    std::vector<SecurityGroupRule> GetRules() const;

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取访问控制策略的总数量。
                     * @return TotalCount 访问控制策略的总数量。
                     * 
                     */
                    std::string GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 分页查询时，显示的当前页的页码。
                     */
                    std::string m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * 分页查询时，显示的每页数据的最大条数。
                     */
                    std::string m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 访问控制策略列表
                     */
                    std::vector<SecurityGroupRule> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * 访问控制策略的总数量。
                     */
                    std::string m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEENTERPRISESECURITYGROUPRULERESPONSE_H_
