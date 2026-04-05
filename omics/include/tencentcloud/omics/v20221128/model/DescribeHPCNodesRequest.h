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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_DESCRIBEHPCNODESREQUEST_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_DESCRIBEHPCNODESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/omics/v20221128/model/Filter.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * DescribeHPCNodes请求参数结构体
                */
                class DescribeHPCNodesRequest : public AbstractModel
                {
                public:
                    DescribeHPCNodesRequest();
                    ~DescribeHPCNodesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID。
                     * @return ClusterId 集群ID。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID。
                     * @param _clusterId 集群ID。
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取返回数量，默认为20，最大值为100。
                     * @return Limit 返回数量，默认为20，最大值为100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。
                     * @param _limit 返回数量，默认为20，最大值为100。
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
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
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
                     * 获取过滤器，支持过滤字段：
- ClusterId：集群ID
- QueueId：队列ID
- NodeId：节点ID
- Name：名称
- Role：角色
- Type：类型
- Zone：可用区
- InstanceState：实例状态
- InstanceType：实例机型
- InstanceFamily：实例机型族
- InstanceChargeType：实例计费类型
- Tag：标签，Value格式为tagKey:tagValue
                     * @return Filters 过滤器，支持过滤字段：
- ClusterId：集群ID
- QueueId：队列ID
- NodeId：节点ID
- Name：名称
- Role：角色
- Type：类型
- Zone：可用区
- InstanceState：实例状态
- InstanceType：实例机型
- InstanceFamily：实例机型族
- InstanceChargeType：实例计费类型
- Tag：标签，Value格式为tagKey:tagValue
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤器，支持过滤字段：
- ClusterId：集群ID
- QueueId：队列ID
- NodeId：节点ID
- Name：名称
- Role：角色
- Type：类型
- Zone：可用区
- InstanceState：实例状态
- InstanceType：实例机型
- InstanceFamily：实例机型族
- InstanceChargeType：实例计费类型
- Tag：标签，Value格式为tagKey:tagValue
                     * @param _filters 过滤器，支持过滤字段：
- ClusterId：集群ID
- QueueId：队列ID
- NodeId：节点ID
- Name：名称
- Role：角色
- Type：类型
- Zone：可用区
- InstanceState：实例状态
- InstanceType：实例机型
- InstanceFamily：实例机型族
- InstanceChargeType：实例计费类型
- Tag：标签，Value格式为tagKey:tagValue
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
                     * 集群ID。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 过滤器，支持过滤字段：
- ClusterId：集群ID
- QueueId：队列ID
- NodeId：节点ID
- Name：名称
- Role：角色
- Type：类型
- Zone：可用区
- InstanceState：实例状态
- InstanceType：实例机型
- InstanceFamily：实例机型族
- InstanceChargeType：实例计费类型
- Tag：标签，Value格式为tagKey:tagValue
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_DESCRIBEHPCNODESREQUEST_H_
