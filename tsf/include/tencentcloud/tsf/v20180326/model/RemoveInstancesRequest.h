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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_REMOVEINSTANCESREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_REMOVEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * RemoveInstances请求参数结构体
                */
                class RemoveInstancesRequest : public AbstractModel
                {
                public:
                    RemoveInstancesRequest();
                    ~RemoveInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群 ID。调用[DescribeSimpleClusters](https://cloud.tencent.com/document/api/649/36047)查询已创建的集群或通过[CreateCluster](https://cloud.tencent.com/document/api/649/36049)接口创建新的集群。
                     * @return ClusterId 集群 ID。调用[DescribeSimpleClusters](https://cloud.tencent.com/document/api/649/36047)查询已创建的集群或通过[CreateCluster](https://cloud.tencent.com/document/api/649/36049)接口创建新的集群。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群 ID。调用[DescribeSimpleClusters](https://cloud.tencent.com/document/api/649/36047)查询已创建的集群或通过[CreateCluster](https://cloud.tencent.com/document/api/649/36049)接口创建新的集群。
                     * @param _clusterId 集群 ID。调用[DescribeSimpleClusters](https://cloud.tencent.com/document/api/649/36047)查询已创建的集群或通过[CreateCluster](https://cloud.tencent.com/document/api/649/36049)接口创建新的集群。
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
                     * 获取云主机 ID 列表
                     * @return InstanceIdList 云主机 ID 列表
                     * 
                     */
                    std::vector<std::string> GetInstanceIdList() const;

                    /**
                     * 设置云主机 ID 列表
                     * @param _instanceIdList 云主机 ID 列表
                     * 
                     */
                    void SetInstanceIdList(const std::vector<std::string>& _instanceIdList);

                    /**
                     * 判断参数 InstanceIdList 是否已赋值
                     * @return InstanceIdList 是否已赋值
                     * 
                     */
                    bool InstanceIdListHasBeenSet() const;

                private:

                    /**
                     * 集群 ID。调用[DescribeSimpleClusters](https://cloud.tencent.com/document/api/649/36047)查询已创建的集群或通过[CreateCluster](https://cloud.tencent.com/document/api/649/36049)接口创建新的集群。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 云主机 ID 列表
                     */
                    std::vector<std::string> m_instanceIdList;
                    bool m_instanceIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_REMOVEINSTANCESREQUEST_H_
