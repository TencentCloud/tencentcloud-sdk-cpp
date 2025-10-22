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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DRAINCLUSTERVIRTUALNODEREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DRAINCLUSTERVIRTUALNODEREQUEST_H_

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
                * DrainClusterVirtualNode请求参数结构体
                */
                class DrainClusterVirtualNodeRequest : public AbstractModel
                {
                public:
                    DrainClusterVirtualNodeRequest();
                    ~DrainClusterVirtualNodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID，通过DescribeClusters接口获取
                     * @return ClusterId 集群ID，通过DescribeClusters接口获取
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID，通过DescribeClusters接口获取
                     * @param _clusterId 集群ID，通过DescribeClusters接口获取
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
                     * 获取节点ID
                     * @return NodeName 节点ID
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置节点ID
                     * @param _nodeName 节点ID
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                private:

                    /**
                     * 集群ID，通过DescribeClusters接口获取
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 节点ID
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DRAINCLUSTERVIRTUALNODEREQUEST_H_
