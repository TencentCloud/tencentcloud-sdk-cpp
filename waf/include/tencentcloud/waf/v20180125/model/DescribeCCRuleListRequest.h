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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBECCRULELISTREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBECCRULELISTREQUEST_H_

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
                * DescribeCCRuleList请求参数结构体
                */
                class DescribeCCRuleListRequest : public AbstractModel
                {
                public:
                    DescribeCCRuleListRequest();
                    ~DescribeCCRuleListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要查询的API所属的域名
                     * @return Domain 需要查询的API所属的域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置需要查询的API所属的域名
                     * @param _domain 需要查询的API所属的域名
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
                     * 获取偏移
                     * @return Offset 偏移
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移
                     * @param _offset 偏移
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
                     * 获取容量
                     * @return Limit 容量
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置容量
                     * @param _limit 容量
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
                     * 获取目前支持根据ts_version排序
                     * @return By 目前支持根据ts_version排序
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置目前支持根据ts_version排序
                     * @param _by 目前支持根据ts_version排序
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
                     * 获取过滤数组,name可以是如下的值： RuleID,ParamName,Url,Action,Method,Source,Status
                     * @return Filters 过滤数组,name可以是如下的值： RuleID,ParamName,Url,Action,Method,Source,Status
                     * 
                     */
                    std::vector<FiltersItemNew> GetFilters() const;

                    /**
                     * 设置过滤数组,name可以是如下的值： RuleID,ParamName,Url,Action,Method,Source,Status
                     * @param _filters 过滤数组,name可以是如下的值： RuleID,ParamName,Url,Action,Method,Source,Status
                     * 
                     */
                    void SetFilters(const std::vector<FiltersItemNew>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取asc或者desc
                     * @return Order asc或者desc
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置asc或者desc
                     * @param _order asc或者desc
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * 需要查询的API所属的域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 偏移
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 容量
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 目前支持根据ts_version排序
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * 过滤数组,name可以是如下的值： RuleID,ParamName,Url,Action,Method,Source,Status
                     */
                    std::vector<FiltersItemNew> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * asc或者desc
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBECCRULELISTREQUEST_H_
