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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEXTERNALNODESCRIPTREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEXTERNALNODESCRIPTREQUEST_H_

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
                * DescribeExternalNodeScript请求参数结构体
                */
                class DescribeExternalNodeScriptRequest : public AbstractModel
                {
                public:
                    DescribeExternalNodeScriptRequest();
                    ~DescribeExternalNodeScriptRequest() = default;
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
                     * 获取注册节点池ID
                     * @return NodePoolId 注册节点池ID
                     * 
                     */
                    std::string GetNodePoolId() const;

                    /**
                     * 设置注册节点池ID
                     * @param _nodePoolId 注册节点池ID
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
                     * 获取网卡名
                     * @return Interface 网卡名
                     * 
                     */
                    std::string GetInterface() const;

                    /**
                     * 设置网卡名
                     * @param _interface 网卡名
                     * 
                     */
                    void SetInterface(const std::string& _interface);

                    /**
                     * 判断参数 Interface 是否已赋值
                     * @return Interface 是否已赋值
                     * 
                     */
                    bool InterfaceHasBeenSet() const;

                    /**
                     * 获取节点名称
                     * @return Name 节点名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置节点名称
                     * @param _name 节点名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取是否内网获取节点初始化脚本
                     * @return Internal 是否内网获取节点初始化脚本
                     * 
                     */
                    bool GetInternal() const;

                    /**
                     * 设置是否内网获取节点初始化脚本
                     * @param _internal 是否内网获取节点初始化脚本
                     * 
                     */
                    void SetInternal(const bool& _internal);

                    /**
                     * 判断参数 Internal 是否已赋值
                     * @return Internal 是否已赋值
                     * 
                     */
                    bool InternalHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 注册节点池ID
                     */
                    std::string m_nodePoolId;
                    bool m_nodePoolIdHasBeenSet;

                    /**
                     * 网卡名
                     */
                    std::string m_interface;
                    bool m_interfaceHasBeenSet;

                    /**
                     * 节点名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 是否内网获取节点初始化脚本
                     */
                    bool m_internal;
                    bool m_internalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEXTERNALNODESCRIPTREQUEST_H_
