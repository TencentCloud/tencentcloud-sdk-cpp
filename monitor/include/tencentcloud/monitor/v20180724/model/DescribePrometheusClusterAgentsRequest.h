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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSCLUSTERAGENTSREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSCLUSTERAGENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribePrometheusClusterAgents请求参数结构体
                */
                class DescribePrometheusClusterAgentsRequest : public AbstractModel
                {
                public:
                    DescribePrometheusClusterAgentsRequest();
                    ~DescribePrometheusClusterAgentsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

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
                     * 获取用于通过集群id过滤被绑定集群
                     * @return ClusterIds 用于通过集群id过滤被绑定集群
                     * 
                     */
                    std::vector<std::string> GetClusterIds() const;

                    /**
                     * 设置用于通过集群id过滤被绑定集群
                     * @param _clusterIds 用于通过集群id过滤被绑定集群
                     * 
                     */
                    void SetClusterIds(const std::vector<std::string>& _clusterIds);

                    /**
                     * 判断参数 ClusterIds 是否已赋值
                     * @return ClusterIds 是否已赋值
                     * 
                     */
                    bool ClusterIdsHasBeenSet() const;

                    /**
                     * 获取用于通过集群类型过滤被绑定集群
                     * @return ClusterTypes 用于通过集群类型过滤被绑定集群
                     * 
                     */
                    std::vector<std::string> GetClusterTypes() const;

                    /**
                     * 设置用于通过集群类型过滤被绑定集群
                     * @param _clusterTypes 用于通过集群类型过滤被绑定集群
                     * 
                     */
                    void SetClusterTypes(const std::vector<std::string>& _clusterTypes);

                    /**
                     * 判断参数 ClusterTypes 是否已赋值
                     * @return ClusterTypes 是否已赋值
                     * 
                     */
                    bool ClusterTypesHasBeenSet() const;

                    /**
                     * 获取用于通过名称搜索被绑定集群
                     * @return ClusterName 用于通过名称搜索被绑定集群
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置用于通过名称搜索被绑定集群
                     * @param _clusterName 用于通过名称搜索被绑定集群
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                private:

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 用于通过集群id过滤被绑定集群
                     */
                    std::vector<std::string> m_clusterIds;
                    bool m_clusterIdsHasBeenSet;

                    /**
                     * 用于通过集群类型过滤被绑定集群
                     */
                    std::vector<std::string> m_clusterTypes;
                    bool m_clusterTypesHasBeenSet;

                    /**
                     * 用于通过名称搜索被绑定集群
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSCLUSTERAGENTSREQUEST_H_
