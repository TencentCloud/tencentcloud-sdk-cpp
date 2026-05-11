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
                     * 获取<p>服务名称。</p>
                     * @return Name <p>服务名称。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>服务名称。</p>
                     * @param _name <p>服务名称。</p>
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
                     * 获取<p>命名空间名称。</p>
                     * @return Namespace <p>命名空间名称。</p>
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置<p>命名空间名称。</p>
                     * @param _namespace <p>命名空间名称。</p>
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
                     * 获取<p>元数据信息数组。</p>
                     * @return Metadatas <p>元数据信息数组。</p>
                     * 
                     */
                    std::vector<Metadata> GetMetadatas() const;

                    /**
                     * 设置<p>元数据信息数组。</p>
                     * @param _metadatas <p>元数据信息数组。</p>
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
                     * 获取<p>描述信息。</p>
                     * @return Comment <p>描述信息。</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>描述信息。</p>
                     * @param _comment <p>描述信息。</p>
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
                     * 获取<p>创建时间。</p>
                     * @return CreateTime <p>创建时间。</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间。</p>
                     * @param _createTime <p>创建时间。</p>
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
                     * 获取<p>修改时间。</p>
                     * @return ModifyTime <p>修改时间。</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>修改时间。</p>
                     * @param _modifyTime <p>修改时间。</p>
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
                     * 获取<p>服务所属部门。</p>
                     * @return Department <p>服务所属部门。</p>
                     * 
                     */
                    std::string GetDepartment() const;

                    /**
                     * 设置<p>服务所属部门。</p>
                     * @param _department <p>服务所属部门。</p>
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
                     * 获取<p>服务所属业务。</p>
                     * @return Business <p>服务所属业务。</p>
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置<p>服务所属业务。</p>
                     * @param _business <p>服务所属业务。</p>
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
                     * 获取<p>健康服务实例数</p>
                     * @return HealthyInstanceCount <p>健康服务实例数</p>
                     * 
                     */
                    uint64_t GetHealthyInstanceCount() const;

                    /**
                     * 设置<p>健康服务实例数</p>
                     * @param _healthyInstanceCount <p>健康服务实例数</p>
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
                     * 获取<p>服务实例总数</p>
                     * @return TotalInstanceCount <p>服务实例总数</p>
                     * 
                     */
                    uint64_t GetTotalInstanceCount() const;

                    /**
                     * 设置<p>服务实例总数</p>
                     * @param _totalInstanceCount <p>服务实例总数</p>
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
                     * 获取<p>服务ID</p>
                     * @return Id <p>服务ID</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>服务ID</p>
                     * @param _id <p>服务ID</p>
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
                     * 获取<p>是否可以编辑</p>
                     * @return Editable <p>是否可以编辑</p>
                     * 
                     */
                    bool GetEditable() const;

                    /**
                     * 设置<p>是否可以编辑</p>
                     * @param _editable <p>是否可以编辑</p>
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
                     * 获取<p>可以编辑该资源的用户ID</p>
                     * @return UserIds <p>可以编辑该资源的用户ID</p>
                     * 
                     */
                    std::vector<std::string> GetUserIds() const;

                    /**
                     * 设置<p>可以编辑该资源的用户ID</p>
                     * @param _userIds <p>可以编辑该资源的用户ID</p>
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
                     * 获取<p>可以编辑该资源的用户组ID</p>
                     * @return GroupIds <p>可以编辑该资源的用户组ID</p>
                     * 
                     */
                    std::vector<std::string> GetGroupIds() const;

                    /**
                     * 设置<p>可以编辑该资源的用户组ID</p>
                     * @param _groupIds <p>可以编辑该资源的用户组ID</p>
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
                     * 获取<p>移除可以编辑该资源的用户ID</p>
                     * @return RemoveUserIds <p>移除可以编辑该资源的用户ID</p>
                     * 
                     */
                    std::vector<std::string> GetRemoveUserIds() const;

                    /**
                     * 设置<p>移除可以编辑该资源的用户ID</p>
                     * @param _removeUserIds <p>移除可以编辑该资源的用户ID</p>
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
                     * 获取<p>移除可以编辑该资源的用户组ID</p>
                     * @return RemoveGroupIds <p>移除可以编辑该资源的用户组ID</p>
                     * 
                     */
                    std::vector<std::string> GetRemoveGroupIds() const;

                    /**
                     * 设置<p>移除可以编辑该资源的用户组ID</p>
                     * @param _removeGroupIds <p>移除可以编辑该资源的用户组ID</p>
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
                     * 获取<p>该服务对哪些命名空间可见</p>
                     * @return ExportTo <p>该服务对哪些命名空间可见</p>
                     * 
                     */
                    std::vector<std::string> GetExportTo() const;

                    /**
                     * 设置<p>该服务对哪些命名空间可见</p>
                     * @param _exportTo <p>该服务对哪些命名空间可见</p>
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
                     * 获取<p>该服务信息摘要签名</p>
                     * @return Revision <p>该服务信息摘要签名</p>
                     * 
                     */
                    std::string GetRevision() const;

                    /**
                     * 设置<p>该服务信息摘要签名</p>
                     * @param _revision <p>该服务信息摘要签名</p>
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
                     * 获取<p>是否开启同步到全局注册中心</p>
                     * @return SyncToGlobalRegistry <p>是否开启同步到全局注册中心</p>
                     * 
                     */
                    bool GetSyncToGlobalRegistry() const;

                    /**
                     * 设置<p>是否开启同步到全局注册中心</p>
                     * @param _syncToGlobalRegistry <p>是否开启同步到全局注册中心</p>
                     * 
                     */
                    void SetSyncToGlobalRegistry(const bool& _syncToGlobalRegistry);

                    /**
                     * 判断参数 SyncToGlobalRegistry 是否已赋值
                     * @return SyncToGlobalRegistry 是否已赋值
                     * 
                     */
                    bool SyncToGlobalRegistryHasBeenSet() const;

                    /**
                     * 获取<p>隔离实例数</p>
                     * @return IsolateInstanceCount <p>隔离实例数</p>
                     * 
                     */
                    uint64_t GetIsolateInstanceCount() const;

                    /**
                     * 设置<p>隔离实例数</p>
                     * @param _isolateInstanceCount <p>隔离实例数</p>
                     * 
                     */
                    void SetIsolateInstanceCount(const uint64_t& _isolateInstanceCount);

                    /**
                     * 判断参数 IsolateInstanceCount 是否已赋值
                     * @return IsolateInstanceCount 是否已赋值
                     * 
                     */
                    bool IsolateInstanceCountHasBeenSet() const;

                    /**
                     * 获取<p>服务健康状态</p>
                     * @return ServiceStatus <p>服务健康状态</p>
                     * 
                     */
                    int64_t GetServiceStatus() const;

                    /**
                     * 设置<p>服务健康状态</p>
                     * @param _serviceStatus <p>服务健康状态</p>
                     * 
                     */
                    void SetServiceStatus(const int64_t& _serviceStatus);

                    /**
                     * 判断参数 ServiceStatus 是否已赋值
                     * @return ServiceStatus 是否已赋值
                     * 
                     */
                    bool ServiceStatusHasBeenSet() const;

                    /**
                     * 获取<p>服务类型</p><p>枚举值：</p><ul><li>0： 微服务（默认）</li><li>1： MCP Server</li><li>2： AI Agent</li></ul>
                     * @return Type <p>服务类型</p><p>枚举值：</p><ul><li>0： 微服务（默认）</li><li>1： MCP Server</li><li>2： AI Agent</li></ul>
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置<p>服务类型</p><p>枚举值：</p><ul><li>0： 微服务（默认）</li><li>1： MCP Server</li><li>2： AI Agent</li></ul>
                     * @param _type <p>服务类型</p><p>枚举值：</p><ul><li>0： 微服务（默认）</li><li>1： MCP Server</li><li>2： AI Agent</li></ul>
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * <p>服务名称。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>命名空间名称。</p>
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * <p>元数据信息数组。</p>
                     */
                    std::vector<Metadata> m_metadatas;
                    bool m_metadatasHasBeenSet;

                    /**
                     * <p>描述信息。</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>创建时间。</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>修改时间。</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>服务所属部门。</p>
                     */
                    std::string m_department;
                    bool m_departmentHasBeenSet;

                    /**
                     * <p>服务所属业务。</p>
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * <p>健康服务实例数</p>
                     */
                    uint64_t m_healthyInstanceCount;
                    bool m_healthyInstanceCountHasBeenSet;

                    /**
                     * <p>服务实例总数</p>
                     */
                    uint64_t m_totalInstanceCount;
                    bool m_totalInstanceCountHasBeenSet;

                    /**
                     * <p>服务ID</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>是否可以编辑</p>
                     */
                    bool m_editable;
                    bool m_editableHasBeenSet;

                    /**
                     * <p>可以编辑该资源的用户ID</p>
                     */
                    std::vector<std::string> m_userIds;
                    bool m_userIdsHasBeenSet;

                    /**
                     * <p>可以编辑该资源的用户组ID</p>
                     */
                    std::vector<std::string> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                    /**
                     * <p>移除可以编辑该资源的用户ID</p>
                     */
                    std::vector<std::string> m_removeUserIds;
                    bool m_removeUserIdsHasBeenSet;

                    /**
                     * <p>移除可以编辑该资源的用户组ID</p>
                     */
                    std::vector<std::string> m_removeGroupIds;
                    bool m_removeGroupIdsHasBeenSet;

                    /**
                     * <p>该服务对哪些命名空间可见</p>
                     */
                    std::vector<std::string> m_exportTo;
                    bool m_exportToHasBeenSet;

                    /**
                     * <p>该服务信息摘要签名</p>
                     */
                    std::string m_revision;
                    bool m_revisionHasBeenSet;

                    /**
                     * <p>是否开启同步到全局注册中心</p>
                     */
                    bool m_syncToGlobalRegistry;
                    bool m_syncToGlobalRegistryHasBeenSet;

                    /**
                     * <p>隔离实例数</p>
                     */
                    uint64_t m_isolateInstanceCount;
                    bool m_isolateInstanceCountHasBeenSet;

                    /**
                     * <p>服务健康状态</p>
                     */
                    int64_t m_serviceStatus;
                    bool m_serviceStatusHasBeenSet;

                    /**
                     * <p>服务类型</p><p>枚举值：</p><ul><li>0： 微服务（默认）</li><li>1： MCP Server</li><li>2： AI Agent</li></ul>
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_GOVERNANCESERVICE_H_
