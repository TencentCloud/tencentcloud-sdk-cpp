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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_CONTAINGROUP_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_CONTAINGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 部署组列表（应用下钻界面的）
                */
                class ContainGroup : public AbstractModel
                {
                public:
                    ContainGroup();
                    ~ContainGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupId 部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param GroupId 部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取分组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupName 分组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置分组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param GroupName 分组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取镜像server
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Server 镜像server
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetServer() const;

                    /**
                     * 设置镜像server
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Server 镜像server
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetServer(const std::string& _server);

                    /**
                     * 判断参数 Server 是否已赋值
                     * @return Server 是否已赋值
                     */
                    bool ServerHasBeenSet() const;

                    /**
                     * 获取镜像名，如/tsf/nginx
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RepoName 镜像名，如/tsf/nginx
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRepoName() const;

                    /**
                     * 设置镜像名，如/tsf/nginx
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RepoName 镜像名，如/tsf/nginx
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRepoName(const std::string& _repoName);

                    /**
                     * 判断参数 RepoName 是否已赋值
                     * @return RepoName 是否已赋值
                     */
                    bool RepoNameHasBeenSet() const;

                    /**
                     * 获取镜像版本名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagName 镜像版本名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTagName() const;

                    /**
                     * 设置镜像版本名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TagName 镜像版本名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTagName(const std::string& _tagName);

                    /**
                     * 判断参数 TagName 是否已赋值
                     * @return TagName 是否已赋值
                     */
                    bool TagNameHasBeenSet() const;

                    /**
                     * 获取集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId 集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClusterId 集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterName 集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClusterName 集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取命名空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NamespaceId 命名空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置命名空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NamespaceId 命名空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取命名空间名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NamespaceName 命名空间名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置命名空间名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NamespaceName 命名空间名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNamespaceName(const std::string& _namespaceName);

                    /**
                     * 判断参数 NamespaceName 是否已赋值
                     * @return NamespaceName 是否已赋值
                     */
                    bool NamespaceNameHasBeenSet() const;

                    /**
                     * 获取初始分配的 CPU 核数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CpuRequest 初始分配的 CPU 核数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCpuRequest() const;

                    /**
                     * 设置初始分配的 CPU 核数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CpuRequest 初始分配的 CPU 核数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCpuRequest(const std::string& _cpuRequest);

                    /**
                     * 判断参数 CpuRequest 是否已赋值
                     * @return CpuRequest 是否已赋值
                     */
                    bool CpuRequestHasBeenSet() const;

                    /**
                     * 获取最大分配的 CPU 核数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CpuLimit 最大分配的 CPU 核数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCpuLimit() const;

                    /**
                     * 设置最大分配的 CPU 核数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CpuLimit 最大分配的 CPU 核数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCpuLimit(const std::string& _cpuLimit);

                    /**
                     * 判断参数 CpuLimit 是否已赋值
                     * @return CpuLimit 是否已赋值
                     */
                    bool CpuLimitHasBeenSet() const;

                    /**
                     * 获取初始分配的内存 MiB 数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemRequest 初始分配的内存 MiB 数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMemRequest() const;

                    /**
                     * 设置初始分配的内存 MiB 数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MemRequest 初始分配的内存 MiB 数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMemRequest(const std::string& _memRequest);

                    /**
                     * 判断参数 MemRequest 是否已赋值
                     * @return MemRequest 是否已赋值
                     */
                    bool MemRequestHasBeenSet() const;

                    /**
                     * 获取最大分配的内存 MiB 数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemLimit 最大分配的内存 MiB 数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMemLimit() const;

                    /**
                     * 设置最大分配的内存 MiB 数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MemLimit 最大分配的内存 MiB 数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMemLimit(const std::string& _memLimit);

                    /**
                     * 判断参数 MemLimit 是否已赋值
                     * @return MemLimit 是否已赋值
                     */
                    bool MemLimitHasBeenSet() const;

                    /**
                     * 获取部署组备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Alias 部署组备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置部署组备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Alias 部署组备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取KubeInjectEnable值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KubeInjectEnable KubeInjectEnable值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetKubeInjectEnable() const;

                    /**
                     * 设置KubeInjectEnable值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param KubeInjectEnable KubeInjectEnable值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetKubeInjectEnable(const bool& _kubeInjectEnable);

                    /**
                     * 判断参数 KubeInjectEnable 是否已赋值
                     * @return KubeInjectEnable 是否已赋值
                     */
                    bool KubeInjectEnableHasBeenSet() const;

                private:

                    /**
                     * 部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 分组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 镜像server
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_server;
                    bool m_serverHasBeenSet;

                    /**
                     * 镜像名，如/tsf/nginx
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_repoName;
                    bool m_repoNameHasBeenSet;

                    /**
                     * 镜像版本名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tagName;
                    bool m_tagNameHasBeenSet;

                    /**
                     * 集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 命名空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 命名空间名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * 初始分配的 CPU 核数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cpuRequest;
                    bool m_cpuRequestHasBeenSet;

                    /**
                     * 最大分配的 CPU 核数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cpuLimit;
                    bool m_cpuLimitHasBeenSet;

                    /**
                     * 初始分配的内存 MiB 数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_memRequest;
                    bool m_memRequestHasBeenSet;

                    /**
                     * 最大分配的内存 MiB 数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_memLimit;
                    bool m_memLimitHasBeenSet;

                    /**
                     * 部署组备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * KubeInjectEnable值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_kubeInjectEnable;
                    bool m_kubeInjectEnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CONTAINGROUP_H_
