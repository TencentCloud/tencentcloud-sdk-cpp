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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DELETECLUSTERVIRTUALNODEREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DELETECLUSTERVIRTUALNODEREQUEST_H_

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
                * DeleteClusterVirtualNode请求参数结构体
                */
                class DeleteClusterVirtualNodeRequest : public AbstractModel
                {
                public:
                    DeleteClusterVirtualNodeRequest();
                    ~DeleteClusterVirtualNodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
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
                     * 获取虚拟节点列表
                     * @return NodeNames 虚拟节点列表
                     * 
                     */
                    std::vector<std::string> GetNodeNames() const;

                    /**
                     * 设置虚拟节点列表
                     * @param _nodeNames 虚拟节点列表
                     * 
                     */
                    void SetNodeNames(const std::vector<std::string>& _nodeNames);

                    /**
                     * 判断参数 NodeNames 是否已赋值
                     * @return NodeNames 是否已赋值
                     * 
                     */
                    bool NodeNamesHasBeenSet() const;

                    /**
                     * 获取是否强制删除：如果虚拟节点上有运行中Pod，则非强制删除状态下不会进行删除
                     * @return Force 是否强制删除：如果虚拟节点上有运行中Pod，则非强制删除状态下不会进行删除
                     * 
                     */
                    bool GetForce() const;

                    /**
                     * 设置是否强制删除：如果虚拟节点上有运行中Pod，则非强制删除状态下不会进行删除
                     * @param _force 是否强制删除：如果虚拟节点上有运行中Pod，则非强制删除状态下不会进行删除
                     * 
                     */
                    void SetForce(const bool& _force);

                    /**
                     * 判断参数 Force 是否已赋值
                     * @return Force 是否已赋值
                     * 
                     */
                    bool ForceHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 虚拟节点列表
                     */
                    std::vector<std::string> m_nodeNames;
                    bool m_nodeNamesHasBeenSet;

                    /**
                     * 是否强制删除：如果虚拟节点上有运行中Pod，则非强制删除状态下不会进行删除
                     */
                    bool m_force;
                    bool m_forceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DELETECLUSTERVIRTUALNODEREQUEST_H_
