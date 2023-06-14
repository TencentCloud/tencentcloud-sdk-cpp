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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERVIRTUALNODEREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERVIRTUALNODEREQUEST_H_

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
                * DescribeClusterVirtualNode请求参数结构体
                */
                class DescribeClusterVirtualNodeRequest : public AbstractModel
                {
                public:
                    DescribeClusterVirtualNodeRequest();
                    ~DescribeClusterVirtualNodeRequest() = default;
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
                     * 获取节点池ID
                     * @return NodePoolId 节点池ID
                     * 
                     */
                    std::string GetNodePoolId() const;

                    /**
                     * 设置节点池ID
                     * @param _nodePoolId 节点池ID
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
                     * 获取节点名称
                     * @return NodeNames 节点名称
                     * 
                     */
                    std::vector<std::string> GetNodeNames() const;

                    /**
                     * 设置节点名称
                     * @param _nodeNames 节点名称
                     * 
                     */
                    void SetNodeNames(const std::vector<std::string>& _nodeNames);

                    /**
                     * 判断参数 NodeNames 是否已赋值
                     * @return NodeNames 是否已赋值
                     * 
                     */
                    bool NodeNamesHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 节点池ID
                     */
                    std::string m_nodePoolId;
                    bool m_nodePoolIdHasBeenSet;

                    /**
                     * 节点名称
                     */
                    std::vector<std::string> m_nodeNames;
                    bool m_nodeNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERVIRTUALNODEREQUEST_H_
