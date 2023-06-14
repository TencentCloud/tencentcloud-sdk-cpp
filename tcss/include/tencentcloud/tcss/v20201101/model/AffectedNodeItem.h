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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_AFFECTEDNODEITEM_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_AFFECTEDNODEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 受影响的节点类型结构体
                */
                class AffectedNodeItem : public AbstractModel
                {
                public:
                    AffectedNodeItem();
                    ~AffectedNodeItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取集群名字
                     * @return ClusterName 集群名字
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名字
                     * @param _clusterName 集群名字
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

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
                     * 获取内网ip地址
                     * @return PrivateIpAddresses 内网ip地址
                     * 
                     */
                    std::string GetPrivateIpAddresses() const;

                    /**
                     * 设置内网ip地址
                     * @param _privateIpAddresses 内网ip地址
                     * 
                     */
                    void SetPrivateIpAddresses(const std::string& _privateIpAddresses);

                    /**
                     * 判断参数 PrivateIpAddresses 是否已赋值
                     * @return PrivateIpAddresses 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressesHasBeenSet() const;

                    /**
                     * 获取节点的角色，Master、Work等
                     * @return InstanceRole 节点的角色，Master、Work等
                     * 
                     */
                    std::string GetInstanceRole() const;

                    /**
                     * 设置节点的角色，Master、Work等
                     * @param _instanceRole 节点的角色，Master、Work等
                     * 
                     */
                    void SetInstanceRole(const std::string& _instanceRole);

                    /**
                     * 判断参数 InstanceRole 是否已赋值
                     * @return InstanceRole 是否已赋值
                     * 
                     */
                    bool InstanceRoleHasBeenSet() const;

                    /**
                     * 获取k8s版本
                     * @return ClusterVersion k8s版本
                     * 
                     */
                    std::string GetClusterVersion() const;

                    /**
                     * 设置k8s版本
                     * @param _clusterVersion k8s版本
                     * 
                     */
                    void SetClusterVersion(const std::string& _clusterVersion);

                    /**
                     * 判断参数 ClusterVersion 是否已赋值
                     * @return ClusterVersion 是否已赋值
                     * 
                     */
                    bool ClusterVersionHasBeenSet() const;

                    /**
                     * 获取运行时组件,docker或者containerd
                     * @return ContainerRuntime 运行时组件,docker或者containerd
                     * 
                     */
                    std::string GetContainerRuntime() const;

                    /**
                     * 设置运行时组件,docker或者containerd
                     * @param _containerRuntime 运行时组件,docker或者containerd
                     * 
                     */
                    void SetContainerRuntime(const std::string& _containerRuntime);

                    /**
                     * 判断参数 ContainerRuntime 是否已赋值
                     * @return ContainerRuntime 是否已赋值
                     * 
                     */
                    bool ContainerRuntimeHasBeenSet() const;

                    /**
                     * 获取区域
                     * @return Region 区域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置区域
                     * @param _region 区域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取检查结果的验证信息
                     * @return VerifyInfo 检查结果的验证信息
                     * 
                     */
                    std::string GetVerifyInfo() const;

                    /**
                     * 设置检查结果的验证信息
                     * @param _verifyInfo 检查结果的验证信息
                     * 
                     */
                    void SetVerifyInfo(const std::string& _verifyInfo);

                    /**
                     * 判断参数 VerifyInfo 是否已赋值
                     * @return VerifyInfo 是否已赋值
                     * 
                     */
                    bool VerifyInfoHasBeenSet() const;

                    /**
                     * 获取节点名称
                     * @return NodeName 节点名称
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置节点名称
                     * @param _nodeName 节点名称
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
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群名字
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 内网ip地址
                     */
                    std::string m_privateIpAddresses;
                    bool m_privateIpAddressesHasBeenSet;

                    /**
                     * 节点的角色，Master、Work等
                     */
                    std::string m_instanceRole;
                    bool m_instanceRoleHasBeenSet;

                    /**
                     * k8s版本
                     */
                    std::string m_clusterVersion;
                    bool m_clusterVersionHasBeenSet;

                    /**
                     * 运行时组件,docker或者containerd
                     */
                    std::string m_containerRuntime;
                    bool m_containerRuntimeHasBeenSet;

                    /**
                     * 区域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 检查结果的验证信息
                     */
                    std::string m_verifyInfo;
                    bool m_verifyInfoHasBeenSet;

                    /**
                     * 节点名称
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_AFFECTEDNODEITEM_H_
