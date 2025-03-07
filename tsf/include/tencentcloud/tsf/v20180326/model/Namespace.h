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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_NAMESPACE_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_NAMESPACE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/Cluster.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 命名空间
                */
                class Namespace : public AbstractModel
                {
                public:
                    Namespace();
                    ~Namespace() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取命名空间编码
                     * @return NamespaceCode 命名空间编码
                     * 
                     */
                    std::string GetNamespaceCode() const;

                    /**
                     * 设置命名空间编码
                     * @param _namespaceCode 命名空间编码
                     * 
                     */
                    void SetNamespaceCode(const std::string& _namespaceCode);

                    /**
                     * 判断参数 NamespaceCode 是否已赋值
                     * @return NamespaceCode 是否已赋值
                     * 
                     */
                    bool NamespaceCodeHasBeenSet() const;

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
                     * 获取命名空间描述
                     * @return NamespaceDesc 命名空间描述
                     * 
                     */
                    std::string GetNamespaceDesc() const;

                    /**
                     * 设置命名空间描述
                     * @param _namespaceDesc 命名空间描述
                     * 
                     */
                    void SetNamespaceDesc(const std::string& _namespaceDesc);

                    /**
                     * 判断参数 NamespaceDesc 是否已赋值
                     * @return NamespaceDesc 是否已赋值
                     * 
                     */
                    bool NamespaceDescHasBeenSet() const;

                    /**
                     * 获取默认命名空间
                     * @return IsDefault 默认命名空间
                     * 
                     */
                    std::string GetIsDefault() const;

                    /**
                     * 设置默认命名空间
                     * @param _isDefault 默认命名空间
                     * 
                     */
                    void SetIsDefault(const std::string& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取命名空间状态
                     * @return NamespaceStatus 命名空间状态
                     * 
                     */
                    std::string GetNamespaceStatus() const;

                    /**
                     * 设置命名空间状态
                     * @param _namespaceStatus 命名空间状态
                     * 
                     */
                    void SetNamespaceStatus(const std::string& _namespaceStatus);

                    /**
                     * 判断参数 NamespaceStatus 是否已赋值
                     * @return NamespaceStatus 是否已赋值
                     * 
                     */
                    bool NamespaceStatusHasBeenSet() const;

                    /**
                     * 获取删除标识
                     * @return DeleteFlag 删除标识
                     * 
                     */
                    bool GetDeleteFlag() const;

                    /**
                     * 设置删除标识
                     * @param _deleteFlag 删除标识
                     * 
                     */
                    void SetDeleteFlag(const bool& _deleteFlag);

                    /**
                     * 判断参数 DeleteFlag 是否已赋值
                     * @return DeleteFlag 是否已赋值
                     * 
                     */
                    bool DeleteFlagHasBeenSet() const;

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
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取集群数组，仅携带集群ID，集群名称，集群类型等基础信息。
                     * @return ClusterList 集群数组，仅携带集群ID，集群名称，集群类型等基础信息。
                     * 
                     */
                    std::vector<Cluster> GetClusterList() const;

                    /**
                     * 设置集群数组，仅携带集群ID，集群名称，集群类型等基础信息。
                     * @param _clusterList 集群数组，仅携带集群ID，集群名称，集群类型等基础信息。
                     * 
                     */
                    void SetClusterList(const std::vector<Cluster>& _clusterList);

                    /**
                     * 判断参数 ClusterList 是否已赋值
                     * @return ClusterList 是否已赋值
                     * 
                     */
                    bool ClusterListHasBeenSet() const;

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
                     * 获取集群资源类型
                     * @return NamespaceResourceType 集群资源类型
                     * 
                     */
                    std::string GetNamespaceResourceType() const;

                    /**
                     * 设置集群资源类型
                     * @param _namespaceResourceType 集群资源类型
                     * 
                     */
                    void SetNamespaceResourceType(const std::string& _namespaceResourceType);

                    /**
                     * 判断参数 NamespaceResourceType 是否已赋值
                     * @return NamespaceResourceType 是否已赋值
                     * 
                     */
                    bool NamespaceResourceTypeHasBeenSet() const;

                    /**
                     * 获取命名空间类型
                     * @return NamespaceType 命名空间类型
                     * 
                     */
                    std::string GetNamespaceType() const;

                    /**
                     * 设置命名空间类型
                     * @param _namespaceType 命名空间类型
                     * 
                     */
                    void SetNamespaceType(const std::string& _namespaceType);

                    /**
                     * 判断参数 NamespaceType 是否已赋值
                     * @return NamespaceType 是否已赋值
                     * 
                     */
                    bool NamespaceTypeHasBeenSet() const;

                    /**
                     * 获取是否开启高可用
                     * @return IsHaEnable 是否开启高可用
                     * 
                     */
                    std::string GetIsHaEnable() const;

                    /**
                     * 设置是否开启高可用
                     * @param _isHaEnable 是否开启高可用
                     * 
                     */
                    void SetIsHaEnable(const std::string& _isHaEnable);

                    /**
                     * 判断参数 IsHaEnable 是否已赋值
                     * @return IsHaEnable 是否已赋值
                     * 
                     */
                    bool IsHaEnableHasBeenSet() const;

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

                private:

                    /**
                     * 命名空间ID
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 命名空间编码
                     */
                    std::string m_namespaceCode;
                    bool m_namespaceCodeHasBeenSet;

                    /**
                     * 命名空间名称
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * 命名空间描述
                     */
                    std::string m_namespaceDesc;
                    bool m_namespaceDescHasBeenSet;

                    /**
                     * 默认命名空间
                     */
                    std::string m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * 命名空间状态
                     */
                    std::string m_namespaceStatus;
                    bool m_namespaceStatusHasBeenSet;

                    /**
                     * 删除标识
                     */
                    bool m_deleteFlag;
                    bool m_deleteFlagHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 集群数组，仅携带集群ID，集群名称，集群类型等基础信息。
                     */
                    std::vector<Cluster> m_clusterList;
                    bool m_clusterListHasBeenSet;

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群资源类型
                     */
                    std::string m_namespaceResourceType;
                    bool m_namespaceResourceTypeHasBeenSet;

                    /**
                     * 命名空间类型
                     */
                    std::string m_namespaceType;
                    bool m_namespaceTypeHasBeenSet;

                    /**
                     * 是否开启高可用
                     */
                    std::string m_isHaEnable;
                    bool m_isHaEnableHasBeenSet;

                    /**
                     * KubeInjectEnable值
                     */
                    bool m_kubeInjectEnable;
                    bool m_kubeInjectEnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_NAMESPACE_H_
