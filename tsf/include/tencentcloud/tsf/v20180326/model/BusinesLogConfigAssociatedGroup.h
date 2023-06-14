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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_BUSINESLOGCONFIGASSOCIATEDGROUP_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_BUSINESLOGCONFIGASSOCIATEDGROUP_H_

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
                * 业务日志配置关联部署组信息
                */
                class BusinesLogConfigAssociatedGroup : public AbstractModel
                {
                public:
                    BusinesLogConfigAssociatedGroup();
                    ~BusinesLogConfigAssociatedGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupId 部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupId 部署组ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取部署组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupName 部署组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置部署组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupName 部署组名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取部署组所属应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationId 部署组所属应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置部署组所属应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _applicationId 部署组所属应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取部署组所属应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationName 部署组所属应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置部署组所属应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _applicationName 部署组所属应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     * 
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取部署组所属应用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationType 部署组所属应用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApplicationType() const;

                    /**
                     * 设置部署组所属应用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _applicationType 部署组所属应用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApplicationType(const std::string& _applicationType);

                    /**
                     * 判断参数 ApplicationType 是否已赋值
                     * @return ApplicationType 是否已赋值
                     * 
                     */
                    bool ApplicationTypeHasBeenSet() const;

                    /**
                     * 获取部署组所属命名空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NamespaceId 部署组所属命名空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置部署组所属命名空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespaceId 部署组所属命名空间ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取部署组所属命名空间名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NamespaceName 部署组所属命名空间名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置部署组所属命名空间名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespaceName 部署组所属命名空间名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取部署组所属集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId 部署组所属集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置部署组所属集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterId 部署组所属集群ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取部署组所属集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterName 部署组所属集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置部署组所属集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterName 部署组所属集群名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取部署组所属集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterType 部署组所属集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置部署组所属集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterType 部署组所属集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取部署组关联日志配置时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssociatedTime 部署组关联日志配置时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssociatedTime() const;

                    /**
                     * 设置部署组关联日志配置时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _associatedTime 部署组关联日志配置时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssociatedTime(const std::string& _associatedTime);

                    /**
                     * 判断参数 AssociatedTime 是否已赋值
                     * @return AssociatedTime 是否已赋值
                     * 
                     */
                    bool AssociatedTimeHasBeenSet() const;

                private:

                    /**
                     * 部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 部署组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 部署组所属应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 部署组所属应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * 部署组所属应用类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                    /**
                     * 部署组所属命名空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 部署组所属命名空间名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * 部署组所属集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 部署组所属集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 部署组所属集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 部署组关联日志配置时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_associatedTime;
                    bool m_associatedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_BUSINESLOGCONFIGASSOCIATEDGROUP_H_
