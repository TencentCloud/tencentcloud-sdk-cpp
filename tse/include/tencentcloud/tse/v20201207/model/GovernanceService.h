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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_GOVERNANCESERVICE_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_GOVERNANCESERVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/Metadata.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 治理中心服务信息。
                */
                class GovernanceService : public AbstractModel
                {
                public:
                    GovernanceService();
                    ~GovernanceService() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务名称。
                     * @return Name 服务名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置服务名称。
                     * @param _name 服务名称。
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
                     * 获取命名空间名称。
                     * @return Namespace 命名空间名称。
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间名称。
                     * @param _namespace 命名空间名称。
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取元数据信息数组。
                     * @return Metadatas 元数据信息数组。
                     * 
                     */
                    std::vector<Metadata> GetMetadatas() const;

                    /**
                     * 设置元数据信息数组。
                     * @param _metadatas 元数据信息数组。
                     * 
                     */
                    void SetMetadatas(const std::vector<Metadata>& _metadatas);

                    /**
                     * 判断参数 Metadatas 是否已赋值
                     * @return Metadatas 是否已赋值
                     * 
                     */
                    bool MetadatasHasBeenSet() const;

                    /**
                     * 获取描述信息。
                     * @return Comment 描述信息。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置描述信息。
                     * @param _comment 描述信息。
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreateTime 创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createTime 创建时间。
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
                     * 获取修改时间。
                     * @return ModifyTime 修改时间。
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改时间。
                     * @param _modifyTime 修改时间。
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取服务所属部门。
                     * @return Department 服务所属部门。
                     * 
                     */
                    std::string GetDepartment() const;

                    /**
                     * 设置服务所属部门。
                     * @param _department 服务所属部门。
                     * 
                     */
                    void SetDepartment(const std::string& _department);

                    /**
                     * 判断参数 Department 是否已赋值
                     * @return Department 是否已赋值
                     * 
                     */
                    bool DepartmentHasBeenSet() const;

                    /**
                     * 获取服务所属业务。
                     * @return Business 服务所属业务。
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置服务所属业务。
                     * @param _business 服务所属业务。
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取健康服务实例数
                     * @return HealthyInstanceCount 健康服务实例数
                     * 
                     */
                    uint64_t GetHealthyInstanceCount() const;

                    /**
                     * 设置健康服务实例数
                     * @param _healthyInstanceCount 健康服务实例数
                     * 
                     */
                    void SetHealthyInstanceCount(const uint64_t& _healthyInstanceCount);

                    /**
                     * 判断参数 HealthyInstanceCount 是否已赋值
                     * @return HealthyInstanceCount 是否已赋值
                     * 
                     */
                    bool HealthyInstanceCountHasBeenSet() const;

                    /**
                     * 获取服务实例总数
                     * @return TotalInstanceCount 服务实例总数
                     * 
                     */
                    uint64_t GetTotalInstanceCount() const;

                    /**
                     * 设置服务实例总数
                     * @param _totalInstanceCount 服务实例总数
                     * 
                     */
                    void SetTotalInstanceCount(const uint64_t& _totalInstanceCount);

                    /**
                     * 判断参数 TotalInstanceCount 是否已赋值
                     * @return TotalInstanceCount 是否已赋值
                     * 
                     */
                    bool TotalInstanceCountHasBeenSet() const;

                    /**
                     * 获取服务ID
                     * @return Id 服务ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置服务ID
                     * @param _id 服务ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取是否可以编辑
                     * @return Editable 是否可以编辑
                     * 
                     */
                    bool GetEditable() const;

                    /**
                     * 设置是否可以编辑
                     * @param _editable 是否可以编辑
                     * 
                     */
                    void SetEditable(const bool& _editable);

                    /**
                     * 判断参数 Editable 是否已赋值
                     * @return Editable 是否已赋值
                     * 
                     */
                    bool EditableHasBeenSet() const;

                    /**
                     * 获取可以编辑该资源的用户ID
                     * @return UserIds 可以编辑该资源的用户ID
                     * 
                     */
                    std::vector<std::string> GetUserIds() const;

                    /**
                     * 设置可以编辑该资源的用户ID
                     * @param _userIds 可以编辑该资源的用户ID
                     * 
                     */
                    void SetUserIds(const std::vector<std::string>& _userIds);

                    /**
                     * 判断参数 UserIds 是否已赋值
                     * @return UserIds 是否已赋值
                     * 
                     */
                    bool UserIdsHasBeenSet() const;

                    /**
                     * 获取可以编辑该资源的用户组ID
                     * @return GroupIds 可以编辑该资源的用户组ID
                     * 
                     */
                    std::vector<std::string> GetGroupIds() const;

                    /**
                     * 设置可以编辑该资源的用户组ID
                     * @param _groupIds 可以编辑该资源的用户组ID
                     * 
                     */
                    void SetGroupIds(const std::vector<std::string>& _groupIds);

                    /**
                     * 判断参数 GroupIds 是否已赋值
                     * @return GroupIds 是否已赋值
                     * 
                     */
                    bool GroupIdsHasBeenSet() const;

                    /**
                     * 获取移除可以编辑该资源的用户ID
                     * @return RemoveUserIds 移除可以编辑该资源的用户ID
                     * 
                     */
                    std::vector<std::string> GetRemoveUserIds() const;

                    /**
                     * 设置移除可以编辑该资源的用户ID
                     * @param _removeUserIds 移除可以编辑该资源的用户ID
                     * 
                     */
                    void SetRemoveUserIds(const std::vector<std::string>& _removeUserIds);

                    /**
                     * 判断参数 RemoveUserIds 是否已赋值
                     * @return RemoveUserIds 是否已赋值
                     * 
                     */
                    bool RemoveUserIdsHasBeenSet() const;

                    /**
                     * 获取移除可以编辑该资源的用户组ID
                     * @return RemoveGroupIds 移除可以编辑该资源的用户组ID
                     * 
                     */
                    std::vector<std::string> GetRemoveGroupIds() const;

                    /**
                     * 设置移除可以编辑该资源的用户组ID
                     * @param _removeGroupIds 移除可以编辑该资源的用户组ID
                     * 
                     */
                    void SetRemoveGroupIds(const std::vector<std::string>& _removeGroupIds);

                    /**
                     * 判断参数 RemoveGroupIds 是否已赋值
                     * @return RemoveGroupIds 是否已赋值
                     * 
                     */
                    bool RemoveGroupIdsHasBeenSet() const;

                    /**
                     * 获取该服务对哪些命名空间可见	
                     * @return ExportTo 该服务对哪些命名空间可见	
                     * 
                     */
                    std::vector<std::string> GetExportTo() const;

                    /**
                     * 设置该服务对哪些命名空间可见	
                     * @param _exportTo 该服务对哪些命名空间可见	
                     * 
                     */
                    void SetExportTo(const std::vector<std::string>& _exportTo);

                    /**
                     * 判断参数 ExportTo 是否已赋值
                     * @return ExportTo 是否已赋值
                     * 
                     */
                    bool ExportToHasBeenSet() const;

                    /**
                     * 获取该服务信息摘要签名
                     * @return Revision 该服务信息摘要签名
                     * 
                     */
                    std::string GetRevision() const;

                    /**
                     * 设置该服务信息摘要签名
                     * @param _revision 该服务信息摘要签名
                     * 
                     */
                    void SetRevision(const std::string& _revision);

                    /**
                     * 判断参数 Revision 是否已赋值
                     * @return Revision 是否已赋值
                     * 
                     */
                    bool RevisionHasBeenSet() const;

                    /**
                     * 获取是否开启同步到全局注册中心
                     * @return SyncToGlobalRegistry 是否开启同步到全局注册中心
                     * 
                     */
                    bool GetSyncToGlobalRegistry() const;

                    /**
                     * 设置是否开启同步到全局注册中心
                     * @param _syncToGlobalRegistry 是否开启同步到全局注册中心
                     * 
                     */
                    void SetSyncToGlobalRegistry(const bool& _syncToGlobalRegistry);

                    /**
                     * 判断参数 SyncToGlobalRegistry 是否已赋值
                     * @return SyncToGlobalRegistry 是否已赋值
                     * 
                     */
                    bool SyncToGlobalRegistryHasBeenSet() const;

                private:

                    /**
                     * 服务名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 命名空间名称。
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 元数据信息数组。
                     */
                    std::vector<Metadata> m_metadatas;
                    bool m_metadatasHasBeenSet;

                    /**
                     * 描述信息。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间。
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 服务所属部门。
                     */
                    std::string m_department;
                    bool m_departmentHasBeenSet;

                    /**
                     * 服务所属业务。
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 健康服务实例数
                     */
                    uint64_t m_healthyInstanceCount;
                    bool m_healthyInstanceCountHasBeenSet;

                    /**
                     * 服务实例总数
                     */
                    uint64_t m_totalInstanceCount;
                    bool m_totalInstanceCountHasBeenSet;

                    /**
                     * 服务ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 是否可以编辑
                     */
                    bool m_editable;
                    bool m_editableHasBeenSet;

                    /**
                     * 可以编辑该资源的用户ID
                     */
                    std::vector<std::string> m_userIds;
                    bool m_userIdsHasBeenSet;

                    /**
                     * 可以编辑该资源的用户组ID
                     */
                    std::vector<std::string> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                    /**
                     * 移除可以编辑该资源的用户ID
                     */
                    std::vector<std::string> m_removeUserIds;
                    bool m_removeUserIdsHasBeenSet;

                    /**
                     * 移除可以编辑该资源的用户组ID
                     */
                    std::vector<std::string> m_removeGroupIds;
                    bool m_removeGroupIdsHasBeenSet;

                    /**
                     * 该服务对哪些命名空间可见	
                     */
                    std::vector<std::string> m_exportTo;
                    bool m_exportToHasBeenSet;

                    /**
                     * 该服务信息摘要签名
                     */
                    std::string m_revision;
                    bool m_revisionHasBeenSet;

                    /**
                     * 是否开启同步到全局注册中心
                     */
                    bool m_syncToGlobalRegistry;
                    bool m_syncToGlobalRegistryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_GOVERNANCESERVICE_H_
