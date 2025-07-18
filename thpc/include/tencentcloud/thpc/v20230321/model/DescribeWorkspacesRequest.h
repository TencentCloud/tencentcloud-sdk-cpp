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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_DESCRIBEWORKSPACESREQUEST_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_DESCRIBEWORKSPACESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/thpc/v20230321/model/Filter.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * DescribeWorkspaces请求参数结构体
                */
                class DescribeWorkspacesRequest : public AbstractModel
                {
                public:
                    DescribeWorkspacesRequest();
                    ~DescribeWorkspacesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID列表。通过该参数可以指定需要查询信息的集群列表。<br>如果您不指定该参数，则返回Limit数量以内的集群信息。
                     * @return SpaceIds 集群ID列表。通过该参数可以指定需要查询信息的集群列表。<br>如果您不指定该参数，则返回Limit数量以内的集群信息。
                     * 
                     */
                    std::vector<std::string> GetSpaceIds() const;

                    /**
                     * 设置集群ID列表。通过该参数可以指定需要查询信息的集群列表。<br>如果您不指定该参数，则返回Limit数量以内的集群信息。
                     * @param _spaceIds 集群ID列表。通过该参数可以指定需要查询信息的集群列表。<br>如果您不指定该参数，则返回Limit数量以内的集群信息。
                     * 
                     */
                    void SetSpaceIds(const std::vector<std::string>& _spaceIds);

                    /**
                     * 判断参数 SpaceIds 是否已赋值
                     * @return SpaceIds 是否已赋值
                     * 
                     */
                    bool SpaceIdsHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * @return Offset 偏移量，默认为0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * @param _offset 偏移量，默认为0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
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
                     * 获取返回数量，默认为20，最大值为100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * @return Limit 返回数量，默认为20，最大值为100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * @param _limit 返回数量，默认为20，最大值为100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
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
                     * 获取<ul>   <li>     <strong>zone</strong>     <p style="padding-left: 30px;">按照【<strong>可用区</strong>】进行过滤</p>     <p style="padding-left: 30px;">类型：String</p>     <p style="padding-left: 30px;">必选：否</p></li>     <li>     <strong>space-id</strong>     <p style="padding-left: 30px;">按照【<strong>工作空间实例ID</strong>】进行过滤</p>     <p style="padding-left: 30px;">类型：String</p>     <p style="padding-left: 30px;">必选：否</p></li>     <li>     <strong>cvm-instance-id</strong>     <p style="padding-left: 30px;">按照【<strong>CVM实例ID</strong>】进行过滤</p>     <p style="padding-left: 30px;">类型：String</p>     <p style="padding-left: 30px;">必选：否</p></li>     <li>     <strong>space-state</strong>     <p style="padding-left: 30px;">按照【<strong>工作空间状态</strong>】进行过滤</p>     <p style="padding-left: 30px;">类型：String</p>     <p style="padding-left: 30px;">必选：否</p></li>     <li>     <strong>space-name</strong>     <p style="padding-left: 30px;">按照【<strong>工作空间别名</strong>】进行过滤</p>     <p style="padding-left: 30px;">类型：String</p>     <p style="padding-left: 30px;">必选：否</p></li>     <li>     <strong>space-charge-type</strong>     <p style="padding-left: 30px;">按照【<strong>工作空间实例付费模式</strong>】进行过滤</p>     <p style="padding-left: 30px;">类型：String</p>     <p style="padding-left: 30px;">必选：否</p></li>     <li>     <strong>tag-key</strong>     <p style="padding-left: 30px;">按照【<strong>标签键</strong>】进行过滤</p>     <p style="padding-left: 30px;">类型：String</p>     <p style="padding-left: 30px;">必选：否</p></li>     <li>     <strong>tag-value</strong>     <p style="padding-left: 30px;">按照【<strong>标签值</strong>】进行过滤</p>     <p style="padding-left: 30px;">类型：String</p>     <p style="padding-left: 30px;">必选：否</p></li> </ul> <p style="padding-left: 30px;">每次请求的`Filters`的上限为10，`Filter.Values`的上限为5。</p>
                     * @return Filters <ul>   <li>     <strong>zone</strong>     <p style="padding-left: 30px;">按照【<strong>可用区</strong>】进行过滤</p>     <p style="padding-left: 30px;">类型：String</p>     <p style="padding-left: 30px;">必选：否</p></li>     <li>     <strong>space-id</strong>     <p style="padding-left: 30px;">按照【<strong>工作空间实例ID</strong>】进行过滤</p>     <p style="padding-left: 30px;">类型：String</p>     <p style="padding-left: 30px;">必选：否</p></li>     <li>     <strong>cvm-instance-id</strong>     <p style="padding-left: 30px;">按照【<strong>CVM实例ID</strong>】进行过滤</p>     <p style="padding-left: 30px;">类型：String</p>     <p style="padding-left: 30px;">必选：否</p></li>     <li>     <strong>space-state</strong>     <p style="padding-left: 30px;">按照【<strong>工作空间状态</strong>】进行过滤</p>     <p style="padding-left: 30px;">类型：String</p>     <p style="padding-left: 30px;">必选：否</p></li>     <li>     <strong>space-name</strong>     <p style="padding-left: 30px;">按照【<strong>工作空间别名</strong>】进行过滤</p>     <p style="padding-left: 30px;">类型：String</p>     <p style="padding-left: 30px;">必选：否</p></li>     <li>     <strong>space-charge-type</strong>     <p style="padding-left: 30px;">按照【<strong>工作空间实例付费模式</strong>】进行过滤</p>     <p style="padding-left: 30px;">类型：String</p>     <p style="padding-left: 30px;">必选：否</p></li>     <li>     <strong>tag-key</strong>     <p style="padding-left: 30px;">按照【<strong>标签键</strong>】进行过滤</p>     <p style="padding-left: 30px;">类型：String</p>     <p style="padding-left: 30px;">必选：否</p></li>     <li>     <strong>tag-value</strong>     <p style="padding-left: 30px;">按照【<strong>标签值</strong>】进行过滤</p>     <p style="padding-left: 30px;">类型：String</p>     <p style="padding-left: 30px;">必选：否</p></li> </ul> <p style="padding-left: 30px;">每次请求的`Filters`的上限为10，`Filter.Values`的上限为5。</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<ul>   <li>     <strong>zone</strong>     <p style="padding-left: 30px;">按照【<strong>可用区</strong>】进行过滤</p>     <p style="padding-left: 30px;">类型：String</p>     <p style="padding-left: 30px;">必选：否</p></li>     <li>     <strong>space-id</strong>     <p style="padding-left: 30px;">按照【<strong>工作空间实例ID</strong>】进行过滤</p>     <p style="padding-left: 30px;">类型：String</p>     <p style="padding-left: 30px;">必选：否</p></li>     <li>     <strong>cvm-instance-id</strong>     <p style="padding-left: 30px;">按照【<strong>CVM实例ID</strong>】进行过滤</p>     <p style="padding-left: 30px;">类型：String</p>     <p style="padding-left: 30px;">必选：否</p></li>     <li>     <strong>space-state</strong>     <p style="padding-left: 30px;">按照【<strong>工作空间状态</strong>】进行过滤</p>     <p style="padding-left: 30px;">类型：String</p>     <p style="padding-left: 30px;">必选：否</p></li>     <li>     <strong>space-name</strong>     <p style="padding-left: 30px;">按照【<strong>工作空间别名</strong>】进行过滤</p>     <p style="padding-left: 30px;">类型：String</p>     <p style="padding-left: 30px;">必选：否</p></li>     <li>     <strong>space-charge-type</strong>     <p style="padding-left: 30px;">按照【<strong>工作空间实例付费模式</strong>】进行过滤</p>     <p style="padding-left: 30px;">类型：String</p>     <p style="padding-left: 30px;">必选：否</p></li>     <li>     <strong>tag-key</strong>     <p style="padding-left: 30px;">按照【<strong>标签键</strong>】进行过滤</p>     <p style="padding-left: 30px;">类型：String</p>     <p style="padding-left: 30px;">必选：否</p></li>     <li>     <strong>tag-value</strong>     <p style="padding-left: 30px;">按照【<strong>标签值</strong>】进行过滤</p>     <p style="padding-left: 30px;">类型：String</p>     <p style="padding-left: 30px;">必选：否</p></li> </ul> <p style="padding-left: 30px;">每次请求的`Filters`的上限为10，`Filter.Values`的上限为5。</p>
                     * @param _filters <ul>   <li>     <strong>zone</strong>     <p style="padding-left: 30px;">按照【<strong>可用区</strong>】进行过滤</p>     <p style="padding-left: 30px;">类型：String</p>     <p style="padding-left: 30px;">必选：否</p></li>     <li>     <strong>space-id</strong>     <p style="padding-left: 30px;">按照【<strong>工作空间实例ID</strong>】进行过滤</p>     <p style="padding-left: 30px;">类型：String</p>     <p style="padding-left: 30px;">必选：否</p></li>     <li>     <strong>cvm-instance-id</strong>     <p style="padding-left: 30px;">按照【<strong>CVM实例ID</strong>】进行过滤</p>     <p style="padding-left: 30px;">类型：String</p>     <p style="padding-left: 30px;">必选：否</p></li>     <li>     <strong>space-state</strong>     <p style="padding-left: 30px;">按照【<strong>工作空间状态</strong>】进行过滤</p>     <p style="padding-left: 30px;">类型：String</p>     <p style="padding-left: 30px;">必选：否</p></li>     <li>     <strong>space-name</strong>     <p style="padding-left: 30px;">按照【<strong>工作空间别名</strong>】进行过滤</p>     <p style="padding-left: 30px;">类型：String</p>     <p style="padding-left: 30px;">必选：否</p></li>     <li>     <strong>space-charge-type</strong>     <p style="padding-left: 30px;">按照【<strong>工作空间实例付费模式</strong>】进行过滤</p>     <p style="padding-left: 30px;">类型：String</p>     <p style="padding-left: 30px;">必选：否</p></li>     <li>     <strong>tag-key</strong>     <p style="padding-left: 30px;">按照【<strong>标签键</strong>】进行过滤</p>     <p style="padding-left: 30px;">类型：String</p>     <p style="padding-left: 30px;">必选：否</p></li>     <li>     <strong>tag-value</strong>     <p style="padding-left: 30px;">按照【<strong>标签值</strong>】进行过滤</p>     <p style="padding-left: 30px;">类型：String</p>     <p style="padding-left: 30px;">必选：否</p></li> </ul> <p style="padding-left: 30px;">每次请求的`Filters`的上限为10，`Filter.Values`的上限为5。</p>
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
                     * 集群ID列表。通过该参数可以指定需要查询信息的集群列表。<br>如果您不指定该参数，则返回Limit数量以内的集群信息。
                     */
                    std::vector<std::string> m_spaceIds;
                    bool m_spaceIdsHasBeenSet;

                    /**
                     * 偏移量，默认为0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <ul>   <li>     <strong>zone</strong>     <p style="padding-left: 30px;">按照【<strong>可用区</strong>】进行过滤</p>     <p style="padding-left: 30px;">类型：String</p>     <p style="padding-left: 30px;">必选：否</p></li>     <li>     <strong>space-id</strong>     <p style="padding-left: 30px;">按照【<strong>工作空间实例ID</strong>】进行过滤</p>     <p style="padding-left: 30px;">类型：String</p>     <p style="padding-left: 30px;">必选：否</p></li>     <li>     <strong>cvm-instance-id</strong>     <p style="padding-left: 30px;">按照【<strong>CVM实例ID</strong>】进行过滤</p>     <p style="padding-left: 30px;">类型：String</p>     <p style="padding-left: 30px;">必选：否</p></li>     <li>     <strong>space-state</strong>     <p style="padding-left: 30px;">按照【<strong>工作空间状态</strong>】进行过滤</p>     <p style="padding-left: 30px;">类型：String</p>     <p style="padding-left: 30px;">必选：否</p></li>     <li>     <strong>space-name</strong>     <p style="padding-left: 30px;">按照【<strong>工作空间别名</strong>】进行过滤</p>     <p style="padding-left: 30px;">类型：String</p>     <p style="padding-left: 30px;">必选：否</p></li>     <li>     <strong>space-charge-type</strong>     <p style="padding-left: 30px;">按照【<strong>工作空间实例付费模式</strong>】进行过滤</p>     <p style="padding-left: 30px;">类型：String</p>     <p style="padding-left: 30px;">必选：否</p></li>     <li>     <strong>tag-key</strong>     <p style="padding-left: 30px;">按照【<strong>标签键</strong>】进行过滤</p>     <p style="padding-left: 30px;">类型：String</p>     <p style="padding-left: 30px;">必选：否</p></li>     <li>     <strong>tag-value</strong>     <p style="padding-left: 30px;">按照【<strong>标签值</strong>】进行过滤</p>     <p style="padding-left: 30px;">类型：String</p>     <p style="padding-left: 30px;">必选：否</p></li> </ul> <p style="padding-left: 30px;">每次请求的`Filters`的上限为10，`Filter.Values`的上限为5。</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_DESCRIBEWORKSPACESREQUEST_H_
