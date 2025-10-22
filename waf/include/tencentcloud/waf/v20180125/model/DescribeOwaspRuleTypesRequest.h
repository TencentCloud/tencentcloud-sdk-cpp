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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEOWASPRULETYPESREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEOWASPRULETYPESREQUEST_H_

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
                * DescribeOwaspRuleTypes请求参数结构体
                */
                class DescribeOwaspRuleTypesRequest : public AbstractModel
                {
                public:
                    DescribeOwaspRuleTypesRequest();
                    ~DescribeOwaspRuleTypesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询域名
                     * @return Domain 查询域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置查询域名
                     * @param _domain 查询域名
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
                     * 获取分页页数，默认为0
                     * @return Offset 分页页数，默认为0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页页数，默认为0
                     * @param _offset 分页页数，默认为0
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取每页容量，默认为10
                     * @return Limit 每页容量，默认为10
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页容量，默认为10
                     * @param _limit 每页容量，默认为10
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取筛选条件，支持 RuleId：规则ID、CveID：CVE编号、Desc：描述
                     * @return Filters 筛选条件，支持 RuleId：规则ID、CveID：CVE编号、Desc：描述
                     * 
                     */
                    std::vector<FiltersItemNew> GetFilters() const;

                    /**
                     * 设置筛选条件，支持 RuleId：规则ID、CveID：CVE编号、Desc：描述
                     * @param _filters 筛选条件，支持 RuleId：规则ID、CveID：CVE编号、Desc：描述
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
                     * 查询域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 分页页数，默认为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页容量，默认为10
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 筛选条件，支持 RuleId：规则ID、CveID：CVE编号、Desc：描述
                     */
                    std::vector<FiltersItemNew> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEOWASPRULETYPESREQUEST_H_
