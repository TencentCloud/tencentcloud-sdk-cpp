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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEUSERSIGNATURERULEV2REQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEUSERSIGNATURERULEV2REQUEST_H_

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
                * DescribeUserSignatureRuleV2请求参数结构体
                */
                class DescribeUserSignatureRuleV2Request : public AbstractModel
                {
                public:
                    DescribeUserSignatureRuleV2Request();
                    ~DescribeUserSignatureRuleV2Request() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要查询的域名
                     * @return Domain 需要查询的域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置需要查询的域名
                     * @param _domain 需要查询的域名
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
                     * 获取分页
                     * @return Offset 分页
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页
                     * @param _offset 分页
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
                     * 获取每页容量
                     * @return Limit 每页容量
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页容量
                     * @param _limit 每页容量
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
                     * 获取排序字段，支持 signature_id, modify_time
                     * @return By 排序字段，支持 signature_id, modify_time
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序字段，支持 signature_id, modify_time
                     * @param _by 排序字段，支持 signature_id, modify_time
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                    /**
                     * 获取排序方式
                     * @return Order 排序方式
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序方式
                     * @param _order 排序方式
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取筛选条件，支持 MainClassName，SubClassID ,CveID, Status, ID;  ID为规则id
                     * @return Filters 筛选条件，支持 MainClassName，SubClassID ,CveID, Status, ID;  ID为规则id
                     * 
                     */
                    std::vector<FiltersItemNew> GetFilters() const;

                    /**
                     * 设置筛选条件，支持 MainClassName，SubClassID ,CveID, Status, ID;  ID为规则id
                     * @param _filters 筛选条件，支持 MainClassName，SubClassID ,CveID, Status, ID;  ID为规则id
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
                     * 需要查询的域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 分页
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页容量
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序字段，支持 signature_id, modify_time
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * 排序方式
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 筛选条件，支持 MainClassName，SubClassID ,CveID, Status, ID;  ID为规则id
                     */
                    std::vector<FiltersItemNew> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEUSERSIGNATURERULEV2REQUEST_H_
