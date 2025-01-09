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
                     * 获取服务名。
                     * @return Name 服务名。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置服务名。
                     * @param _name 服务名。
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
                     * 获取服务所属命名空间。
                     * @return Namespace 服务所属命名空间。
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置服务所属命名空间。
                     * @param _namespace 服务所属命名空间。
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
                     * 获取服务描述信息。
                     * @return Comment 服务描述信息。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置服务描述信息。
                     * @param _comment 服务描述信息。
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
                     * 获取服务元数据。
                     * @return Metadatas 服务元数据。
                     * 
                     */
                    std::vector<Metadata> GetMetadatas() const;

                    /**
                     * 设置服务元数据。
                     * @param _metadatas 服务元数据。
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
                     * 获取被添加进来可以操作此命名空间的用户ID列表
                     * @return UserIds 被添加进来可以操作此命名空间的用户ID列表
                     * 
                     */
                    std::vector<std::string> GetUserIds() const;

                    /**
                     * 设置被添加进来可以操作此命名空间的用户ID列表
                     * @param _userIds 被添加进来可以操作此命名空间的用户ID列表
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
                     * 获取被添加进来可以操作此命名空间的用户组ID列表
                     * @return GroupIds 被添加进来可以操作此命名空间的用户组ID列表
                     * 
                     */
                    std::vector<std::string> GetGroupIds() const;

                    /**
                     * 设置被添加进来可以操作此命名空间的用户组ID列表
                     * @param _groupIds 被添加进来可以操作此命名空间的用户组ID列表
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
                     * 获取从操作此命名空间的用户组ID列表被移除的ID列表
                     * @return RemoveUserIds 从操作此命名空间的用户组ID列表被移除的ID列表
                     * 
                     */
                    std::vector<std::string> GetRemoveUserIds() const;

                    /**
                     * 设置从操作此命名空间的用户组ID列表被移除的ID列表
                     * @param _removeUserIds 从操作此命名空间的用户组ID列表被移除的ID列表
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
                     * 获取从可以操作此命名空间的用户组ID列表中被移除的ID列表
                     * @return RemoveGroupIds 从可以操作此命名空间的用户组ID列表中被移除的ID列表
                     * 
                     */
                    std::vector<std::string> GetRemoveGroupIds() const;

                    /**
                     * 设置从可以操作此命名空间的用户组ID列表中被移除的ID列表
                     * @param _removeGroupIds 从可以操作此命名空间的用户组ID列表中被移除的ID列表
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
                     * 服务名。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 服务所属命名空间。
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 服务描述信息。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 服务元数据。
                     */
                    std::vector<Metadata> m_metadatas;
                    bool m_metadatasHasBeenSet;

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
                     * 被添加进来可以操作此命名空间的用户ID列表
                     */
                    std::vector<std::string> m_userIds;
                    bool m_userIdsHasBeenSet;

                    /**
                     * 被添加进来可以操作此命名空间的用户组ID列表
                     */
                    std::vector<std::string> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                    /**
                     * 从操作此命名空间的用户组ID列表被移除的ID列表
                     */
                    std::vector<std::string> m_removeUserIds;
                    bool m_removeUserIdsHasBeenSet;

                    /**
                     * 从可以操作此命名空间的用户组ID列表中被移除的ID列表
                     */
                    std::vector<std::string> m_removeGroupIds;
                    bool m_removeGroupIdsHasBeenSet;

                    /**
                     * 该服务对哪些命名空间可见
                     */
                    std::vector<std::string> m_exportTo;
                    bool m_exportToHasBeenSet;

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

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_GOVERNANCESERVICEINPUT_H_
