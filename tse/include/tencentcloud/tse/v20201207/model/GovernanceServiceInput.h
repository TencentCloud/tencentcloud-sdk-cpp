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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_GOVERNANCESERVICEINPUT_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_GOVERNANCESERVICEINPUT_H_

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
                * 治理中心服务入参
                */
                class GovernanceServiceInput : public AbstractModel
                {
                public:
                    GovernanceServiceInput();
                    ~GovernanceServiceInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>服务名。</p>
                     * @return Name <p>服务名。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>服务名。</p>
                     * @param _name <p>服务名。</p>
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
                     * 获取<p>服务所属命名空间。</p>
                     * @return Namespace <p>服务所属命名空间。</p>
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置<p>服务所属命名空间。</p>
                     * @param _namespace <p>服务所属命名空间。</p>
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
                     * 获取<p>服务描述信息。</p>
                     * @return Comment <p>服务描述信息。</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>服务描述信息。</p>
                     * @param _comment <p>服务描述信息。</p>
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
                     * 获取<p>服务元数据。</p>
                     * @return Metadatas <p>服务元数据。</p>
                     * 
                     */
                    std::vector<Metadata> GetMetadatas() const;

                    /**
                     * 设置<p>服务元数据。</p>
                     * @param _metadatas <p>服务元数据。</p>
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
                     * 获取<p>被添加进来可以操作此命名空间的用户ID列表</p>
                     * @return UserIds <p>被添加进来可以操作此命名空间的用户ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetUserIds() const;

                    /**
                     * 设置<p>被添加进来可以操作此命名空间的用户ID列表</p>
                     * @param _userIds <p>被添加进来可以操作此命名空间的用户ID列表</p>
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
                     * 获取<p>被添加进来可以操作此命名空间的用户组ID列表</p>
                     * @return GroupIds <p>被添加进来可以操作此命名空间的用户组ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetGroupIds() const;

                    /**
                     * 设置<p>被添加进来可以操作此命名空间的用户组ID列表</p>
                     * @param _groupIds <p>被添加进来可以操作此命名空间的用户组ID列表</p>
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
                     * 获取<p>从操作此命名空间的用户组ID列表被移除的ID列表</p>
                     * @return RemoveUserIds <p>从操作此命名空间的用户组ID列表被移除的ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetRemoveUserIds() const;

                    /**
                     * 设置<p>从操作此命名空间的用户组ID列表被移除的ID列表</p>
                     * @param _removeUserIds <p>从操作此命名空间的用户组ID列表被移除的ID列表</p>
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
                     * 获取<p>从可以操作此命名空间的用户组ID列表中被移除的ID列表</p>
                     * @return RemoveGroupIds <p>从可以操作此命名空间的用户组ID列表中被移除的ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetRemoveGroupIds() const;

                    /**
                     * 设置<p>从可以操作此命名空间的用户组ID列表中被移除的ID列表</p>
                     * @param _removeGroupIds <p>从可以操作此命名空间的用户组ID列表中被移除的ID列表</p>
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
                     * 获取<p>服务类型</p><p>枚举值：</p><ul><li>0： 微服务（默认）</li><li>1： MCP Server</li><li>2： AI Agent</li></ul><p>默认值：0</p>
                     * @return Type <p>服务类型</p><p>枚举值：</p><ul><li>0： 微服务（默认）</li><li>1： MCP Server</li><li>2： AI Agent</li></ul><p>默认值：0</p>
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置<p>服务类型</p><p>枚举值：</p><ul><li>0： 微服务（默认）</li><li>1： MCP Server</li><li>2： AI Agent</li></ul><p>默认值：0</p>
                     * @param _type <p>服务类型</p><p>枚举值：</p><ul><li>0： 微服务（默认）</li><li>1： MCP Server</li><li>2： AI Agent</li></ul><p>默认值：0</p>
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
                     * <p>服务名。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>服务所属命名空间。</p>
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * <p>服务描述信息。</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>服务元数据。</p>
                     */
                    std::vector<Metadata> m_metadatas;
                    bool m_metadatasHasBeenSet;

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
                     * <p>被添加进来可以操作此命名空间的用户ID列表</p>
                     */
                    std::vector<std::string> m_userIds;
                    bool m_userIdsHasBeenSet;

                    /**
                     * <p>被添加进来可以操作此命名空间的用户组ID列表</p>
                     */
                    std::vector<std::string> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                    /**
                     * <p>从操作此命名空间的用户组ID列表被移除的ID列表</p>
                     */
                    std::vector<std::string> m_removeUserIds;
                    bool m_removeUserIdsHasBeenSet;

                    /**
                     * <p>从可以操作此命名空间的用户组ID列表中被移除的ID列表</p>
                     */
                    std::vector<std::string> m_removeGroupIds;
                    bool m_removeGroupIdsHasBeenSet;

                    /**
                     * <p>该服务对哪些命名空间可见</p>
                     */
                    std::vector<std::string> m_exportTo;
                    bool m_exportToHasBeenSet;

                    /**
                     * <p>是否开启同步到全局注册中心</p>
                     */
                    bool m_syncToGlobalRegistry;
                    bool m_syncToGlobalRegistryHasBeenSet;

                    /**
                     * <p>服务类型</p><p>枚举值：</p><ul><li>0： 微服务（默认）</li><li>1： MCP Server</li><li>2： AI Agent</li></ul><p>默认值：0</p>
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_GOVERNANCESERVICEINPUT_H_
