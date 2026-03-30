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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBERESOURCEPOOLPACKSREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBERESOURCEPOOLPACKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeResourcePoolPacks请求参数结构体
                */
                class DescribeResourcePoolPacksRequest : public AbstractModel
                {
                public:
                    DescribeResourcePoolPacksRequest();
                    ~DescribeResourcePoolPacksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取返回数量，默认值为10，最小值为10，最大值为100。
                     * @return MaxResults 返回数量，默认值为10，最小值为10，最大值为100。
                     * 
                     */
                    int64_t GetMaxResults() const;

                    /**
                     * 设置返回数量，默认值为10，最小值为10，最大值为100。
                     * @param _maxResults 返回数量，默认值为10，最小值为10，最大值为100。
                     * 
                     */
                    void SetMaxResults(const int64_t& _maxResults);

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     * 
                     */
                    bool MaxResultsHasBeenSet() const;

                    /**
                     * 获取分页标记，用于获取下一页数据。
                     * @return NextToken 分页标记，用于获取下一页数据。
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置分页标记，用于获取下一页数据。
                     * @param _nextToken 分页标记，用于获取下一页数据。
                     * 
                     */
                    void SetNextToken(const std::string& _nextToken);

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                    /**
                     * 获取<li><strong>dedicated-resource-pack-id</strong></li>
<p style="padding-left: 30px;">按照【<strong>实例资源池ID</strong>】进行过滤。形如：rpp-rn99mzt2。</p><p style="padding-left: 30px;">类型：String</p><p style="padding-left: 30px;">必选：否</p>
<li><strong>zone</strong></li>
<p style="padding-left: 30px;">按照【<strong>可用区</strong>】进行过滤。形如：ap-guangzhou-6。</p><p style="padding-left: 30px;">类型：String</p><p style="padding-left: 30px;">必选：否</p><p style="padding-left: 30px;">可选项：<a href="https://cloud.tencent.com/document/product/213/6091">可用区列表</a></p>
<li><strong>instance-family</strong></li>
<p style="padding-left: 30px;">按照【<strong>实例类型</strong>】进行过滤。形如：SA9。</p><p style="padding-left: 30px;">类型：String</p><p style="padding-left: 30px;">必选：否</p>
<li><strong>instance-type</strong></li>
<p style="padding-left: 30px;">按照【<strong>实例规格</strong>】进行过滤。形如：SA9.96XLARGE1152。</p><p style="padding-left: 30px;">类型：String</p><p style="padding-left: 30px;">必选：否</p>
<li><strong>status</strong></li>
<p style="padding-left: 30px;">按照【<strong>实例资源池状态</strong>】进行过滤。</p><p style="padding-left: 30px;">类型：String</p><p style="padding-left: 30px;">必选：否</p><p style="padding-left: 30px;">可选项：CREATING (创建中) | ACTIVE (运行中) | RETIRED (已过期)</p>
每次请求的`Filters`的上限为10。
                     * @return Filters <li><strong>dedicated-resource-pack-id</strong></li>
<p style="padding-left: 30px;">按照【<strong>实例资源池ID</strong>】进行过滤。形如：rpp-rn99mzt2。</p><p style="padding-left: 30px;">类型：String</p><p style="padding-left: 30px;">必选：否</p>
<li><strong>zone</strong></li>
<p style="padding-left: 30px;">按照【<strong>可用区</strong>】进行过滤。形如：ap-guangzhou-6。</p><p style="padding-left: 30px;">类型：String</p><p style="padding-left: 30px;">必选：否</p><p style="padding-left: 30px;">可选项：<a href="https://cloud.tencent.com/document/product/213/6091">可用区列表</a></p>
<li><strong>instance-family</strong></li>
<p style="padding-left: 30px;">按照【<strong>实例类型</strong>】进行过滤。形如：SA9。</p><p style="padding-left: 30px;">类型：String</p><p style="padding-left: 30px;">必选：否</p>
<li><strong>instance-type</strong></li>
<p style="padding-left: 30px;">按照【<strong>实例规格</strong>】进行过滤。形如：SA9.96XLARGE1152。</p><p style="padding-left: 30px;">类型：String</p><p style="padding-left: 30px;">必选：否</p>
<li><strong>status</strong></li>
<p style="padding-left: 30px;">按照【<strong>实例资源池状态</strong>】进行过滤。</p><p style="padding-left: 30px;">类型：String</p><p style="padding-left: 30px;">必选：否</p><p style="padding-left: 30px;">可选项：CREATING (创建中) | ACTIVE (运行中) | RETIRED (已过期)</p>
每次请求的`Filters`的上限为10。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<li><strong>dedicated-resource-pack-id</strong></li>
<p style="padding-left: 30px;">按照【<strong>实例资源池ID</strong>】进行过滤。形如：rpp-rn99mzt2。</p><p style="padding-left: 30px;">类型：String</p><p style="padding-left: 30px;">必选：否</p>
<li><strong>zone</strong></li>
<p style="padding-left: 30px;">按照【<strong>可用区</strong>】进行过滤。形如：ap-guangzhou-6。</p><p style="padding-left: 30px;">类型：String</p><p style="padding-left: 30px;">必选：否</p><p style="padding-left: 30px;">可选项：<a href="https://cloud.tencent.com/document/product/213/6091">可用区列表</a></p>
<li><strong>instance-family</strong></li>
<p style="padding-left: 30px;">按照【<strong>实例类型</strong>】进行过滤。形如：SA9。</p><p style="padding-left: 30px;">类型：String</p><p style="padding-left: 30px;">必选：否</p>
<li><strong>instance-type</strong></li>
<p style="padding-left: 30px;">按照【<strong>实例规格</strong>】进行过滤。形如：SA9.96XLARGE1152。</p><p style="padding-left: 30px;">类型：String</p><p style="padding-left: 30px;">必选：否</p>
<li><strong>status</strong></li>
<p style="padding-left: 30px;">按照【<strong>实例资源池状态</strong>】进行过滤。</p><p style="padding-left: 30px;">类型：String</p><p style="padding-left: 30px;">必选：否</p><p style="padding-left: 30px;">可选项：CREATING (创建中) | ACTIVE (运行中) | RETIRED (已过期)</p>
每次请求的`Filters`的上限为10。
                     * @param _filters <li><strong>dedicated-resource-pack-id</strong></li>
<p style="padding-left: 30px;">按照【<strong>实例资源池ID</strong>】进行过滤。形如：rpp-rn99mzt2。</p><p style="padding-left: 30px;">类型：String</p><p style="padding-left: 30px;">必选：否</p>
<li><strong>zone</strong></li>
<p style="padding-left: 30px;">按照【<strong>可用区</strong>】进行过滤。形如：ap-guangzhou-6。</p><p style="padding-left: 30px;">类型：String</p><p style="padding-left: 30px;">必选：否</p><p style="padding-left: 30px;">可选项：<a href="https://cloud.tencent.com/document/product/213/6091">可用区列表</a></p>
<li><strong>instance-family</strong></li>
<p style="padding-left: 30px;">按照【<strong>实例类型</strong>】进行过滤。形如：SA9。</p><p style="padding-left: 30px;">类型：String</p><p style="padding-left: 30px;">必选：否</p>
<li><strong>instance-type</strong></li>
<p style="padding-left: 30px;">按照【<strong>实例规格</strong>】进行过滤。形如：SA9.96XLARGE1152。</p><p style="padding-left: 30px;">类型：String</p><p style="padding-left: 30px;">必选：否</p>
<li><strong>status</strong></li>
<p style="padding-left: 30px;">按照【<strong>实例资源池状态</strong>】进行过滤。</p><p style="padding-left: 30px;">类型：String</p><p style="padding-left: 30px;">必选：否</p><p style="padding-left: 30px;">可选项：CREATING (创建中) | ACTIVE (运行中) | RETIRED (已过期)</p>
每次请求的`Filters`的上限为10。
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 返回数量，默认值为10，最小值为10，最大值为100。
                     */
                    int64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * 分页标记，用于获取下一页数据。
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * <li><strong>dedicated-resource-pack-id</strong></li>
<p style="padding-left: 30px;">按照【<strong>实例资源池ID</strong>】进行过滤。形如：rpp-rn99mzt2。</p><p style="padding-left: 30px;">类型：String</p><p style="padding-left: 30px;">必选：否</p>
<li><strong>zone</strong></li>
<p style="padding-left: 30px;">按照【<strong>可用区</strong>】进行过滤。形如：ap-guangzhou-6。</p><p style="padding-left: 30px;">类型：String</p><p style="padding-left: 30px;">必选：否</p><p style="padding-left: 30px;">可选项：<a href="https://cloud.tencent.com/document/product/213/6091">可用区列表</a></p>
<li><strong>instance-family</strong></li>
<p style="padding-left: 30px;">按照【<strong>实例类型</strong>】进行过滤。形如：SA9。</p><p style="padding-left: 30px;">类型：String</p><p style="padding-left: 30px;">必选：否</p>
<li><strong>instance-type</strong></li>
<p style="padding-left: 30px;">按照【<strong>实例规格</strong>】进行过滤。形如：SA9.96XLARGE1152。</p><p style="padding-left: 30px;">类型：String</p><p style="padding-left: 30px;">必选：否</p>
<li><strong>status</strong></li>
<p style="padding-left: 30px;">按照【<strong>实例资源池状态</strong>】进行过滤。</p><p style="padding-left: 30px;">类型：String</p><p style="padding-left: 30px;">必选：否</p><p style="padding-left: 30px;">可选项：CREATING (创建中) | ACTIVE (运行中) | RETIRED (已过期)</p>
每次请求的`Filters`的上限为10。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBERESOURCEPOOLPACKSREQUEST_H_
