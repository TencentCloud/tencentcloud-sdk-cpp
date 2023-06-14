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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DELETECLUSTERASGROUPSREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DELETECLUSTERASGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DeleteClusterAsGroups请求参数结构体
                */
                class DeleteClusterAsGroupsRequest : public AbstractModel
                {
                public:
                    DeleteClusterAsGroupsRequest();
                    ~DeleteClusterAsGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID，通过[DescribeClusters](https://cloud.tencent.com/document/api/457/31862)接口获取。
                     * @return ClusterId 集群ID，通过[DescribeClusters](https://cloud.tencent.com/document/api/457/31862)接口获取。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID，通过[DescribeClusters](https://cloud.tencent.com/document/api/457/31862)接口获取。
                     * @param _clusterId 集群ID，通过[DescribeClusters](https://cloud.tencent.com/document/api/457/31862)接口获取。
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
                     * 获取集群伸缩组ID的列表
                     * @return AutoScalingGroupIds 集群伸缩组ID的列表
                     * 
                     */
                    std::vector<std::string> GetAutoScalingGroupIds() const;

                    /**
                     * 设置集群伸缩组ID的列表
                     * @param _autoScalingGroupIds 集群伸缩组ID的列表
                     * 
                     */
                    void SetAutoScalingGroupIds(const std::vector<std::string>& _autoScalingGroupIds);

                    /**
                     * 判断参数 AutoScalingGroupIds 是否已赋值
                     * @return AutoScalingGroupIds 是否已赋值
                     * 
                     */
                    bool AutoScalingGroupIdsHasBeenSet() const;

                    /**
                     * 获取是否保留伸缩组中的节点(默认值： false(不保留))
                     * @return KeepInstance 是否保留伸缩组中的节点(默认值： false(不保留))
                     * 
                     */
                    bool GetKeepInstance() const;

                    /**
                     * 设置是否保留伸缩组中的节点(默认值： false(不保留))
                     * @param _keepInstance 是否保留伸缩组中的节点(默认值： false(不保留))
                     * 
                     */
                    void SetKeepInstance(const bool& _keepInstance);

                    /**
                     * 判断参数 KeepInstance 是否已赋值
                     * @return KeepInstance 是否已赋值
                     * 
                     */
                    bool KeepInstanceHasBeenSet() const;

                private:

                    /**
                     * 集群ID，通过[DescribeClusters](https://cloud.tencent.com/document/api/457/31862)接口获取。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群伸缩组ID的列表
                     */
                    std::vector<std::string> m_autoScalingGroupIds;
                    bool m_autoScalingGroupIdsHasBeenSet;

                    /**
                     * 是否保留伸缩组中的节点(默认值： false(不保留))
                     */
                    bool m_keepInstance;
                    bool m_keepInstanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DELETECLUSTERASGROUPSREQUEST_H_
