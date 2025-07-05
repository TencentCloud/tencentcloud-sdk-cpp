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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYNODEPOOLDESIREDCAPACITYABOUTASGREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYNODEPOOLDESIREDCAPACITYABOUTASGREQUEST_H_

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
                * ModifyNodePoolDesiredCapacityAboutAsg请求参数结构体
                */
                class ModifyNodePoolDesiredCapacityAboutAsgRequest : public AbstractModel
                {
                public:
                    ModifyNodePoolDesiredCapacityAboutAsgRequest();
                    ~ModifyNodePoolDesiredCapacityAboutAsgRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群id
                     * @return ClusterId 集群id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群id
                     * @param _clusterId 集群id
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
                     * 获取节点池id
                     * @return NodePoolId 节点池id
                     * 
                     */
                    std::string GetNodePoolId() const;

                    /**
                     * 设置节点池id
                     * @param _nodePoolId 节点池id
                     * 
                     */
                    void SetNodePoolId(const std::string& _nodePoolId);

                    /**
                     * 判断参数 NodePoolId 是否已赋值
                     * @return NodePoolId 是否已赋值
                     * 
                     */
                    bool NodePoolIdHasBeenSet() const;

                    /**
                     * 获取节点池所关联的伸缩组的期望实例数
                     * @return DesiredCapacity 节点池所关联的伸缩组的期望实例数
                     * 
                     */
                    int64_t GetDesiredCapacity() const;

                    /**
                     * 设置节点池所关联的伸缩组的期望实例数
                     * @param _desiredCapacity 节点池所关联的伸缩组的期望实例数
                     * 
                     */
                    void SetDesiredCapacity(const int64_t& _desiredCapacity);

                    /**
                     * 判断参数 DesiredCapacity 是否已赋值
                     * @return DesiredCapacity 是否已赋值
                     * 
                     */
                    bool DesiredCapacityHasBeenSet() const;

                private:

                    /**
                     * 集群id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 节点池id
                     */
                    std::string m_nodePoolId;
                    bool m_nodePoolIdHasBeenSet;

                    /**
                     * 节点池所关联的伸缩组的期望实例数
                     */
                    int64_t m_desiredCapacity;
                    bool m_desiredCapacityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYNODEPOOLDESIREDCAPACITYABOUTASGREQUEST_H_
