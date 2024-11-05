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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEFINDDOMAINLISTREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEFINDDOMAINLISTREQUEST_H_

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
                * DescribeFindDomainList请求参数结构体
                */
                class DescribeFindDomainListRequest : public AbstractModel
                {
                public:
                    DescribeFindDomainListRequest();
                    ~DescribeFindDomainListRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取过滤条件
                     * @return Key 过滤条件
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置过滤条件
                     * @param _key 过滤条件
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取是否接入waf；传"1"返回接入域名的详情，传"0"返回未接入域名的详情，传""返回接入和未接入域名的详情
                     * @return IsWafDomain 是否接入waf；传"1"返回接入域名的详情，传"0"返回未接入域名的详情，传""返回接入和未接入域名的详情
                     * 
                     */
                    std::string GetIsWafDomain() const;

                    /**
                     * 设置是否接入waf；传"1"返回接入域名的详情，传"0"返回未接入域名的详情，传""返回接入和未接入域名的详情
                     * @param _isWafDomain 是否接入waf；传"1"返回接入域名的详情，传"0"返回未接入域名的详情，传""返回接入和未接入域名的详情
                     * 
                     */
                    void SetIsWafDomain(const std::string& _isWafDomain);

                    /**
                     * 判断参数 IsWafDomain 是否已赋值
                     * @return IsWafDomain 是否已赋值
                     * 
                     */
                    bool IsWafDomainHasBeenSet() const;

                    /**
                     * 获取排序参数
                     * @return By 排序参数
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序参数
                     * @param _by 排序参数
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

                private:

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
                     * 过滤条件
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 是否接入waf；传"1"返回接入域名的详情，传"0"返回未接入域名的详情，传""返回接入和未接入域名的详情
                     */
                    std::string m_isWafDomain;
                    bool m_isWafDomainHasBeenSet;

                    /**
                     * 排序参数
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * 排序方式
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEFINDDOMAINLISTREQUEST_H_
