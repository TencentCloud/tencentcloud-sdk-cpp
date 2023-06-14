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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBESCHEDULINGDOMAINLISTREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBESCHEDULINGDOMAINLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeSchedulingDomainList请求参数结构体
                */
                class DescribeSchedulingDomainListRequest : public AbstractModel
                {
                public:
                    DescribeSchedulingDomainListRequest();
                    ~DescribeSchedulingDomainListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取一页条数，填0表示不分页
                     * @return Limit 一页条数，填0表示不分页
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置一页条数，填0表示不分页
                     * @param _limit 一页条数，填0表示不分页
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
                     * 获取页起始偏移，取值为(页码-1)*一页条数
                     * @return Offset 页起始偏移，取值为(页码-1)*一页条数
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置页起始偏移，取值为(页码-1)*一页条数
                     * @param _offset 页起始偏移，取值为(页码-1)*一页条数
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
                     * 获取可选，筛选特定的域名
                     * @return Domain 可选，筛选特定的域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置可选，筛选特定的域名
                     * @param _domain 可选，筛选特定的域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                private:

                    /**
                     * 一页条数，填0表示不分页
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 页起始偏移，取值为(页码-1)*一页条数
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 可选，筛选特定的域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBESCHEDULINGDOMAINLISTREQUEST_H_
