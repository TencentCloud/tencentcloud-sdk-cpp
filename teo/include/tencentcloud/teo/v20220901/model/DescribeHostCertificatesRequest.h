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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEHOSTCERTIFICATESREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEHOSTCERTIFICATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/AdvancedFilter.h>
#include <tencentcloud/teo/v20220901/model/Sort.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeHostCertificates请求参数结构体
                */
                class DescribeHostCertificatesRequest : public AbstractModel
                {
                public:
                    DescribeHostCertificatesRequest();
                    ~DescribeHostCertificatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件，Filters.Values的上限为20。详细的过滤条件如下：
<li>zone-id<br>   按照【<strong>站点ID</strong>】进行过滤。站点ID形如：zone-xxx。<br>   类型：String<br>   必选：是<li>host<br>   按照【<strong>域名名称</strong>】进行过滤。<br>   类型：String<br>   必选：否<li>cert-id<br>   按照【<strong>证书ID</strong>】进行过滤。<br>   类型：String<br>   必选：否<li>cert-alias<br>   按照【<strong>证书名称</strong>】进行过滤。<br>   类型：String<br>   必选：否<li>cert-type<br>   按照【<strong>证书类型</strong>】进行过滤。<br>   类型：String<br>   必选：否
                     * @return Filters 过滤条件，Filters.Values的上限为20。详细的过滤条件如下：
<li>zone-id<br>   按照【<strong>站点ID</strong>】进行过滤。站点ID形如：zone-xxx。<br>   类型：String<br>   必选：是<li>host<br>   按照【<strong>域名名称</strong>】进行过滤。<br>   类型：String<br>   必选：否<li>cert-id<br>   按照【<strong>证书ID</strong>】进行过滤。<br>   类型：String<br>   必选：否<li>cert-alias<br>   按照【<strong>证书名称</strong>】进行过滤。<br>   类型：String<br>   必选：否<li>cert-type<br>   按照【<strong>证书类型</strong>】进行过滤。<br>   类型：String<br>   必选：否
                     */
                    std::vector<AdvancedFilter> GetFilters() const;

                    /**
                     * 设置过滤条件，Filters.Values的上限为20。详细的过滤条件如下：
<li>zone-id<br>   按照【<strong>站点ID</strong>】进行过滤。站点ID形如：zone-xxx。<br>   类型：String<br>   必选：是<li>host<br>   按照【<strong>域名名称</strong>】进行过滤。<br>   类型：String<br>   必选：否<li>cert-id<br>   按照【<strong>证书ID</strong>】进行过滤。<br>   类型：String<br>   必选：否<li>cert-alias<br>   按照【<strong>证书名称</strong>】进行过滤。<br>   类型：String<br>   必选：否<li>cert-type<br>   按照【<strong>证书类型</strong>】进行过滤。<br>   类型：String<br>   必选：否
                     * @param Filters 过滤条件，Filters.Values的上限为20。详细的过滤条件如下：
<li>zone-id<br>   按照【<strong>站点ID</strong>】进行过滤。站点ID形如：zone-xxx。<br>   类型：String<br>   必选：是<li>host<br>   按照【<strong>域名名称</strong>】进行过滤。<br>   类型：String<br>   必选：否<li>cert-id<br>   按照【<strong>证书ID</strong>】进行过滤。<br>   类型：String<br>   必选：否<li>cert-alias<br>   按照【<strong>证书名称</strong>】进行过滤。<br>   类型：String<br>   必选：否<li>cert-type<br>   按照【<strong>证书类型</strong>】进行过滤。<br>   类型：String<br>   必选：否
                     */
                    void SetFilters(const std::vector<AdvancedFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取分页查询偏移量，默认为 0。
                     * @return Offset 分页查询偏移量，默认为 0。
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页查询偏移量，默认为 0。
                     * @param Offset 分页查询偏移量，默认为 0。
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页查询限制数目，默认为 100，最大可设置为 1000。
                     * @return Limit 分页查询限制数目，默认为 100，最大可设置为 1000。
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页查询限制数目，默认为 100，最大可设置为 1000。
                     * @param Limit 分页查询限制数目，默认为 100，最大可设置为 1000。
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取排序方式。详细排序条件如下：
<li>create-time：域名创建时间；</li>
<li>cert-expire-time：证书过期时间；</li>
<li>cert-deploy-time：证书部署时间。</li>
                     * @return Sort 排序方式。详细排序条件如下：
<li>create-time：域名创建时间；</li>
<li>cert-expire-time：证书过期时间；</li>
<li>cert-deploy-time：证书部署时间。</li>
                     */
                    Sort GetSort() const;

                    /**
                     * 设置排序方式。详细排序条件如下：
<li>create-time：域名创建时间；</li>
<li>cert-expire-time：证书过期时间；</li>
<li>cert-deploy-time：证书部署时间。</li>
                     * @param Sort 排序方式。详细排序条件如下：
<li>create-time：域名创建时间；</li>
<li>cert-expire-time：证书过期时间；</li>
<li>cert-deploy-time：证书部署时间。</li>
                     */
                    void SetSort(const Sort& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     */
                    bool SortHasBeenSet() const;

                private:

                    /**
                     * 过滤条件，Filters.Values的上限为20。详细的过滤条件如下：
<li>zone-id<br>   按照【<strong>站点ID</strong>】进行过滤。站点ID形如：zone-xxx。<br>   类型：String<br>   必选：是<li>host<br>   按照【<strong>域名名称</strong>】进行过滤。<br>   类型：String<br>   必选：否<li>cert-id<br>   按照【<strong>证书ID</strong>】进行过滤。<br>   类型：String<br>   必选：否<li>cert-alias<br>   按照【<strong>证书名称</strong>】进行过滤。<br>   类型：String<br>   必选：否<li>cert-type<br>   按照【<strong>证书类型</strong>】进行过滤。<br>   类型：String<br>   必选：否
                     */
                    std::vector<AdvancedFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 分页查询偏移量，默认为 0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页查询限制数目，默认为 100，最大可设置为 1000。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序方式。详细排序条件如下：
<li>create-time：域名创建时间；</li>
<li>cert-expire-time：证书过期时间；</li>
<li>cert-deploy-time：证书部署时间。</li>
                     */
                    Sort m_sort;
                    bool m_sortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEHOSTCERTIFICATESREQUEST_H_
