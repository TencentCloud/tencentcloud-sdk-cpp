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
                     * @return GroupId 部署组ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置部署组ID
                     * @param _groupId 部署组ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取分组名称
                     * @return GroupName 分组名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置分组名称
                     * @param _groupName 分组名称
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取镜像server
                     * @return Server 镜像server
                     * 
                     */
                    std::string GetServer() const;

                    /**
                     * 设置镜像server
                     * @param _server 镜像server
                     * 
                     */
                    void SetServer(const std::string& _server);

                    /**
                     * 判断参数 Server 是否已赋值
                     * @return Server 是否已赋值
                     * 
                     */
                    bool ServerHasBeenSet() const;

                    /**
                     * 获取镜像名，如/tsf/nginx
                     * @return RepoName 镜像名，如/tsf/nginx
                     * 
                     */
                    std::string GetRepoName() const;

                    /**
                     * 设置镜像名，如/tsf/nginx
                     * @param _repoName 镜像名，如/tsf/nginx
                     * 
                     */
                    void SetRepoName(const std::string& _repoName);

                    /**
                     * 判断参数 RepoName 是否已赋值
                     * @return RepoName 是否已赋值
                     * 
                     */
                    bool RepoNameHasBeenSet() const;

                    /**
                     * 获取镜像版本名称
                     * @return TagName 镜像版本名称
                     * 
                     */
                    std::string GetTagName() const;

                    /**
                     * 设置镜像版本名称
                     * @param _tagName 镜像版本名称
                     * 
                     */
                    void SetTagName(const std::string& _tagName);

                    /**
                     * 判断参数 TagName 是否已赋值
                     * @return TagName 是否已赋值
                     * 
                     */
                    bool TagNameHasBeenSet() const;

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
                     * 获取集群名称
                     * @return ClusterName 集群名称
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
                     * @param _clusterName 集群名称
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
                     * 获取命名空间ID
                     * @return NamespaceId 命名空间ID
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置命名空间ID
                     * @param _namespaceId 命名空间ID
                     * 
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     * 
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取命名空间名称
                     * @return NamespaceName 命名空间名称
                     * 
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置命名空间名称
                     * @param _namespaceName 命名空间名称
                     * 
                     */
                    void SetNamespaceName(const std::string& _namespaceName);

                    /**
                     * 判断参数 NamespaceName 是否已赋值
                     * @return NamespaceName 是否已赋值
                     * 
                     */
                    bool NamespaceNameHasBeenSet() const;

                    /**
                     * 获取初始分配的 CPU 核数，对应 K8S request
                     * @return CpuRequest 初始分配的 CPU 核数，对应 K8S request
                     * 
                     */
                    std::string GetCpuRequest() const;

                    /**
                     * 设置初始分配的 CPU 核数，对应 K8S request
                     * @param _cpuRequest 初始分配的 CPU 核数，对应 K8S request
                     * 
                     */
                    void SetCpuRequest(const std::string& _cpuRequest);

                    /**
                     * 判断参数 CpuRequest 是否已赋值
                     * @return CpuRequest 是否已赋值
                     * 
                     */
                    bool CpuRequestHasBeenSet() const;

                    /**
                     * 获取最大分配的 CPU 核数，对应 K8S limit
                     * @return CpuLimit 最大分配的 CPU 核数，对应 K8S limit
                     * 
                     */
                    std::string GetCpuLimit() const;

                    /**
                     * 设置最大分配的 CPU 核数，对应 K8S limit
                     * @param _cpuLimit 最大分配的 CPU 核数，对应 K8S limit
                     * 
                     */
                    void SetCpuLimit(const std::string& _cpuLimit);

                    /**
                     * 判断参数 CpuLimit 是否已赋值
                     * @return CpuLimit 是否已赋值
                     * 
                     */
                    bool CpuLimitHasBeenSet() const;

                    /**
                     * 获取初始分配的内存 MiB 数，对应 K8S request
                     * @return MemRequest 初始分配的内存 MiB 数，对应 K8S request
                     * 
                     */
                    std::string GetMemRequest() const;

                    /**
                     * 设置初始分配的内存 MiB 数，对应 K8S request
                     * @param _memRequest 初始分配的内存 MiB 数，对应 K8S request
                     * 
                     */
                    void SetMemRequest(const std::string& _memRequest);

                    /**
                     * 判断参数 MemRequest 是否已赋值
                     * @return MemRequest 是否已赋值
                     * 
                     */
                    bool MemRequestHasBeenSet() const;

                    /**
                     * 获取最大分配的内存 MiB 数，对应 K8S limit
                     * @return MemLimit 最大分配的内存 MiB 数，对应 K8S limit
                     * 
                     */
                    std::string GetMemLimit() const;

                    /**
                     * 设置最大分配的内存 MiB 数，对应 K8S limit
                     * @param _memLimit 最大分配的内存 MiB 数，对应 K8S limit
                     * 
                     */
                    void SetMemLimit(const std::string& _memLimit);

                    /**
                     * 判断参数 MemLimit 是否已赋值
                     * @return MemLimit 是否已赋值
                     * 
                     */
                    bool MemLimitHasBeenSet() const;

                    /**
                     * 获取部署组备注
                     * @return Alias 部署组备注
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置部署组备注
                     * @param _alias 部署组备注
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取KubeInjectEnable值
                     * @return KubeInjectEnable KubeInjectEnable值
                     * 
                     */
                    bool GetKubeInjectEnable() const;

                    /**
                     * 设置KubeInjectEnable值
                     * @param _kubeInjectEnable KubeInjectEnable值
                     * 
                     */
                    void SetKubeInjectEnable(const bool& _kubeInjectEnable);

                    /**
                     * 判断参数 KubeInjectEnable 是否已赋值
                     * @return KubeInjectEnable 是否已赋值
                     * 
                     */
                    bool KubeInjectEnableHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdatedTime 更新时间
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置更新时间
                     * @param _updatedTime 更新时间
                     * 
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

                private:

                    /**
                     * 部署组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 分组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 镜像server
                     */
                    std::string m_server;
                    bool m_serverHasBeenSet;

                    /**
                     * 镜像名，如/tsf/nginx
                     */
                    std::string m_repoName;
                    bool m_repoNameHasBeenSet;

                    /**
                     * 镜像版本名称
                     */
                    std::string m_tagName;
                    bool m_tagNameHasBeenSet;

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 命名空间ID
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 命名空间名称
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * 初始分配的 CPU 核数，对应 K8S request
                     */
                    std::string m_cpuRequest;
                    bool m_cpuRequestHasBeenSet;

                    /**
                     * 最大分配的 CPU 核数，对应 K8S limit
                     */
                    std::string m_cpuLimit;
                    bool m_cpuLimitHasBeenSet;

                    /**
                     * 初始分配的内存 MiB 数，对应 K8S request
                     */
                    std::string m_memRequest;
                    bool m_memRequestHasBeenSet;

                    /**
                     * 最大分配的内存 MiB 数，对应 K8S limit
                     */
                    std::string m_memLimit;
                    bool m_memLimitHasBeenSet;

                    /**
                     * 部署组备注
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * KubeInjectEnable值
                     */
                    bool m_kubeInjectEnable;
                    bool m_kubeInjectEnableHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CONTAINGROUP_H_
