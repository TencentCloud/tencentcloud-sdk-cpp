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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBERATELIMITSV2REQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBERATELIMITSV2REQUEST_H_

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
                * DescribeRateLimitsV2请求参数结构体
                */
                class DescribeRateLimitsV2Request : public AbstractModel
                {
                public:
                    DescribeRateLimitsV2Request();
                    ~DescribeRateLimitsV2Request() = default;
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
                     * 获取限流规则ID
                     * @return Id 限流规则ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置限流规则ID
                     * @param _id 限流规则ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取规则名
                     * @return Name 规则名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置规则名
                     * @param _name 规则名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取限流接口名
                     * @return Method 限流接口名
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置限流接口名
                     * @param _method 限流接口名
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取限流对象，可选API、Domain
                     * @return LimitObject 限流对象，可选API、Domain
                     * 
                     */
                    std::string GetLimitObject() const;

                    /**
                     * 设置限流对象，可选API、Domain
                     * @param _limitObject 限流对象，可选API、Domain
                     * 
                     */
                    void SetLimitObject(const std::string& _limitObject);

                    /**
                     * 判断参数 LimitObject 是否已赋值
                     * @return LimitObject 是否已赋值
                     * 
                     */
                    bool LimitObjectHasBeenSet() const;

                    /**
                     * 获取规则开关，0表示关闭，1表示开启
                     * @return Status 规则开关，0表示关闭，1表示开启
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置规则开关，0表示关闭，1表示开启
                     * @param _status 规则开关，0表示关闭，1表示开启
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取排序方式，可选desc、asc
                     * @return Order 排序方式，可选desc、asc
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序方式，可选desc、asc
                     * @param _order 排序方式，可选desc、asc
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
                     * 获取排序字段，可选Priority、Timestamp、ID
                     * @return By 排序字段，可选Priority、Timestamp、ID
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序字段，可选Priority、Timestamp、ID
                     * @param _by 排序字段，可选Priority、Timestamp、ID
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
                     * 获取分页的起始位置
                     * @return Offset 分页的起始位置
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页的起始位置
                     * @param _offset 分页的起始位置
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取每页行数
                     * @return Limit 每页行数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页行数
                     * @param _limit 每页行数
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取过滤器
                     * @return Filters 过滤器
                     * 
                     */
                    std::vector<FiltersItemNew> GetFilters() const;

                    /**
                     * 设置过滤器
                     * @param _filters 过滤器
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
                     * 限流规则ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 规则名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 限流接口名
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 限流对象，可选API、Domain
                     */
                    std::string m_limitObject;
                    bool m_limitObjectHasBeenSet;

                    /**
                     * 规则开关，0表示关闭，1表示开启
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 排序方式，可选desc、asc
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序字段，可选Priority、Timestamp、ID
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * 分页的起始位置
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页行数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 过滤器
                     */
                    std::vector<FiltersItemNew> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBERATELIMITSV2REQUEST_H_
