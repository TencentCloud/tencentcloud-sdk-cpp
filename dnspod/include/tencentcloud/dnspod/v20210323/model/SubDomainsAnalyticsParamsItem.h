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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_SUBDOMAINSANALYTICSPARAMSITEM_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_SUBDOMAINSANALYTICSPARAMSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 批量导出子域名解析量查询条件
                */
                class SubDomainsAnalyticsParamsItem : public AbstractModel
                {
                public:
                    SubDomainsAnalyticsParamsItem();
                    ~SubDomainsAnalyticsParamsItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取要查询解析量的主域名。
                     * @return Domain 要查询解析量的主域名。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置要查询解析量的主域名。
                     * @param _domain 要查询解析量的主域名。
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
                     * 获取要查询解析量的子域名主机头。
                     * @return SubDomain 要查询解析量的子域名主机头。
                     * 
                     */
                    std::string GetSubDomain() const;

                    /**
                     * 设置要查询解析量的子域名主机头。
                     * @param _subDomain 要查询解析量的子域名主机头。
                     * 
                     */
                    void SetSubDomain(const std::string& _subDomain);

                    /**
                     * 判断参数 SubDomain 是否已赋值
                     * @return SubDomain 是否已赋值
                     * 
                     */
                    bool SubDomainHasBeenSet() const;

                    /**
                     * 获取查询子域名列表的偏移量。没有指定查询的 Subdomain 参数时，根据分页参数返回每页子域名解析量。
                     * @return Offset 查询子域名列表的偏移量。没有指定查询的 Subdomain 参数时，根据分页参数返回每页子域名解析量。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置查询子域名列表的偏移量。没有指定查询的 Subdomain 参数时，根据分页参数返回每页子域名解析量。
                     * @param _offset 查询子域名列表的偏移量。没有指定查询的 Subdomain 参数时，根据分页参数返回每页子域名解析量。
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
                     * 获取查询子域名列表的每页条数。没有指定查询的 Subdomain 参数时，根据分页参数返回每页子域名解析量。
                     * @return Limit 查询子域名列表的每页条数。没有指定查询的 Subdomain 参数时，根据分页参数返回每页子域名解析量。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置查询子域名列表的每页条数。没有指定查询的 Subdomain 参数时，根据分页参数返回每页子域名解析量。
                     * @param _limit 查询子域名列表的每页条数。没有指定查询的 Subdomain 参数时，根据分页参数返回每页子域名解析量。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 要查询解析量的主域名。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 要查询解析量的子域名主机头。
                     */
                    std::string m_subDomain;
                    bool m_subDomainHasBeenSet;

                    /**
                     * 查询子域名列表的偏移量。没有指定查询的 Subdomain 参数时，根据分页参数返回每页子域名解析量。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 查询子域名列表的每页条数。没有指定查询的 Subdomain 参数时，根据分页参数返回每页子域名解析量。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_SUBDOMAINSANALYTICSPARAMSITEM_H_
