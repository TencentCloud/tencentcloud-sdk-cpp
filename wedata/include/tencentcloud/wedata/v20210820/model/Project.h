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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_PROJECT_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_PROJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/BaseUser.h>
#include <tencentcloud/wedata/v20210820/model/BaseTenant.h>
#include <tencentcloud/wedata/v20210820/model/BaseClusterInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 项目信息
                */
                class Project : public AbstractModel
                {
                public:
                    Project();
                    ~Project() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取项目的所在租户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TenantId 项目的所在租户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTenantId() const;

                    /**
                     * 设置项目的所在租户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tenantId 项目的所在租户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTenantId(const std::string& _tenantId);

                    /**
                     * 判断参数 TenantId 是否已赋值
                     * @return TenantId 是否已赋值
                     * 
                     */
                    bool TenantIdHasBeenSet() const;

                    /**
                     * 获取项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取项目标识，英文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectName 项目标识，英文名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置项目标识，英文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectName 项目标识，英文名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取项目显示名称，可以为中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DisplayName 项目显示名称，可以为中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置项目显示名称，可以为中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _displayName 项目显示名称，可以为中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 地域
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取创建者
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Creator 创建者
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BaseUser GetCreator() const;

                    /**
                     * 设置创建者
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creator 创建者
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreator(const BaseUser& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取租户信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tenant 租户信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BaseTenant GetTenant() const;

                    /**
                     * 设置租户信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tenant 租户信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTenant(const BaseTenant& _tenant);

                    /**
                     * 判断参数 Tenant 是否已赋值
                     * @return Tenant 是否已赋值
                     * 
                     */
                    bool TenantHasBeenSet() const;

                    /**
                     * 获取项目的管理员
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdminUsers 项目的管理员
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<BaseUser> GetAdminUsers() const;

                    /**
                     * 设置项目的管理员
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _adminUsers 项目的管理员
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAdminUsers(const std::vector<BaseUser>& _adminUsers);

                    /**
                     * 判断参数 AdminUsers 是否已赋值
                     * @return AdminUsers 是否已赋值
                     * 
                     */
                    bool AdminUsersHasBeenSet() const;

                    /**
                     * 获取项目关联的集群信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Clusters 项目关联的集群信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<BaseClusterInfo> GetClusters() const;

                    /**
                     * 设置项目关联的集群信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusters 项目关联的集群信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusters(const std::vector<BaseClusterInfo>& _clusters);

                    /**
                     * 判断参数 Clusters 是否已赋值
                     * @return Clusters 是否已赋值
                     * 
                     */
                    bool ClustersHasBeenSet() const;

                    /**
                     * 获取项目的额外配置参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Params 项目的额外配置参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParams() const;

                    /**
                     * 设置项目的额外配置参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _params 项目的额外配置参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParams(const std::string& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                    /**
                     * 获取项目状态：0：禁用，1：启用，-3:禁用中，2：启用中
                     * @return Status 项目状态：0：禁用，1：启用，-3:禁用中，2：启用中
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置项目状态：0：禁用，1：启用，-3:禁用中，2：启用中
                     * @param _status 项目状态：0：禁用，1：启用，-3:禁用中，2：启用中
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取项目类型，SIMPLE：简单模式 STANDARD：标准模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Model 项目类型，SIMPLE：简单模式 STANDARD：标准模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置项目类型，SIMPLE：简单模式 STANDARD：标准模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _model 项目类型，SIMPLE：简单模式 STANDARD：标准模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取二级菜单
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecondModuleList 二级菜单
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSecondModuleList() const;

                    /**
                     * 设置二级菜单
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _secondModuleList 二级菜单
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecondModuleList(const std::vector<std::string>& _secondModuleList);

                    /**
                     * 判断参数 SecondModuleList 是否已赋值
                     * @return SecondModuleList 是否已赋值
                     * 
                     */
                    bool SecondModuleListHasBeenSet() const;

                    /**
                     * 获取项目负责人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Owner 项目负责人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BaseUser GetOwner() const;

                    /**
                     * 设置项目负责人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _owner 项目负责人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwner(const BaseUser& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                private:

                    /**
                     * 项目的所在租户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tenantId;
                    bool m_tenantIdHasBeenSet;

                    /**
                     * 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 项目标识，英文名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 项目显示名称，可以为中文名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * 地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 创建者
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BaseUser m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 租户信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BaseTenant m_tenant;
                    bool m_tenantHasBeenSet;

                    /**
                     * 项目的管理员
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BaseUser> m_adminUsers;
                    bool m_adminUsersHasBeenSet;

                    /**
                     * 项目关联的集群信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BaseClusterInfo> m_clusters;
                    bool m_clustersHasBeenSet;

                    /**
                     * 项目的额外配置参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * 项目状态：0：禁用，1：启用，-3:禁用中，2：启用中
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 项目类型，SIMPLE：简单模式 STANDARD：标准模式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * 二级菜单
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_secondModuleList;
                    bool m_secondModuleListHasBeenSet;

                    /**
                     * 项目负责人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BaseUser m_owner;
                    bool m_ownerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_PROJECT_H_
