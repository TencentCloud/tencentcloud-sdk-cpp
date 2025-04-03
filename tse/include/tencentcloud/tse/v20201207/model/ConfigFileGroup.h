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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CONFIGFILEGROUP_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CONFIGFILEGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/ConfigFileGroupTag.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 配置文件组
                */
                class ConfigFileGroup : public AbstractModel
                {
                public:
                    ConfigFileGroup();
                    ~ConfigFileGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置文件组id
                     * @return Id 配置文件组id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置配置文件组id
                     * @param _id 配置文件组id
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取配置文件组名称
                     * @return Name 配置文件组名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置配置文件组名称
                     * @param _name 配置文件组名称
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
                     * 获取命名空间
                     * @return Namespace 命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间
                     * @param _namespace 命名空间
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
                     * 获取备注
                     * @return Comment 备注
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置备注
                     * @param _comment 备注
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
                     * 获取创建者
                     * @return CreateBy 创建者
                     * 
                     */
                    std::string GetCreateBy() const;

                    /**
                     * 设置创建者
                     * @param _createBy 创建者
                     * 
                     */
                    void SetCreateBy(const std::string& _createBy);

                    /**
                     * 判断参数 CreateBy 是否已赋值
                     * @return CreateBy 是否已赋值
                     * 
                     */
                    bool CreateByHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return ModifyTime 修改时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改时间
                     * @param _modifyTime 修改时间
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
                     * 获取修改者
                     * @return ModifyBy 修改者
                     * 
                     */
                    std::string GetModifyBy() const;

                    /**
                     * 设置修改者
                     * @param _modifyBy 修改者
                     * 
                     */
                    void SetModifyBy(const std::string& _modifyBy);

                    /**
                     * 判断参数 ModifyBy 是否已赋值
                     * @return ModifyBy 是否已赋值
                     * 
                     */
                    bool ModifyByHasBeenSet() const;

                    /**
                     * 获取文件数
                     * @return FileCount 文件数
                     * 
                     */
                    uint64_t GetFileCount() const;

                    /**
                     * 设置文件数
                     * @param _fileCount 文件数
                     * 
                     */
                    void SetFileCount(const uint64_t& _fileCount);

                    /**
                     * 判断参数 FileCount 是否已赋值
                     * @return FileCount 是否已赋值
                     * 
                     */
                    bool FileCountHasBeenSet() const;

                    /**
                     * 获取关联用户，link_users
                     * @return UserIds 关联用户，link_users
                     * 
                     */
                    std::vector<std::string> GetUserIds() const;

                    /**
                     * 设置关联用户，link_users
                     * @param _userIds 关联用户，link_users
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
                     * 获取组id，link_groups
                     * @return GroupIds 组id，link_groups
                     * 
                     */
                    std::vector<std::string> GetGroupIds() const;

                    /**
                     * 设置组id，link_groups
                     * @param _groupIds 组id，link_groups
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
                     * 获取remove_link_users
                     * @return RemoveUserIds remove_link_users
                     * 
                     */
                    std::vector<std::string> GetRemoveUserIds() const;

                    /**
                     * 设置remove_link_users
                     * @param _removeUserIds remove_link_users
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
                     * 获取remove_link_groups
                     * @return RemoveGroupIds remove_link_groups
                     * 
                     */
                    std::vector<std::string> GetRemoveGroupIds() const;

                    /**
                     * 设置remove_link_groups
                     * @param _removeGroupIds remove_link_groups
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
                     * 获取是否可编辑
                     * @return Editable 是否可编辑
                     * 
                     */
                    bool GetEditable() const;

                    /**
                     * 设置是否可编辑
                     * @param _editable 是否可编辑
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
                     * 获取归属者
                     * @return Owner 归属者
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置归属者
                     * @param _owner 归属者
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取部门
                     * @return Department 部门
                     * 
                     */
                    std::string GetDepartment() const;

                    /**
                     * 设置部门
                     * @param _department 部门
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
                     * 获取业务
                     * @return Business 业务
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置业务
                     * @param _business 业务
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
                     * 获取配置文件组标签
                     * @return ConfigFileGroupTags 配置文件组标签
                     * 
                     */
                    std::vector<ConfigFileGroupTag> GetConfigFileGroupTags() const;

                    /**
                     * 设置配置文件组标签
                     * @param _configFileGroupTags 配置文件组标签
                     * 
                     */
                    void SetConfigFileGroupTags(const std::vector<ConfigFileGroupTag>& _configFileGroupTags);

                    /**
                     * 判断参数 ConfigFileGroupTags 是否已赋值
                     * @return ConfigFileGroupTags 是否已赋值
                     * 
                     */
                    bool ConfigFileGroupTagsHasBeenSet() const;

                private:

                    /**
                     * 配置文件组id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 配置文件组名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 创建者
                     */
                    std::string m_createBy;
                    bool m_createByHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 修改者
                     */
                    std::string m_modifyBy;
                    bool m_modifyByHasBeenSet;

                    /**
                     * 文件数
                     */
                    uint64_t m_fileCount;
                    bool m_fileCountHasBeenSet;

                    /**
                     * 关联用户，link_users
                     */
                    std::vector<std::string> m_userIds;
                    bool m_userIdsHasBeenSet;

                    /**
                     * 组id，link_groups
                     */
                    std::vector<std::string> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                    /**
                     * remove_link_users
                     */
                    std::vector<std::string> m_removeUserIds;
                    bool m_removeUserIdsHasBeenSet;

                    /**
                     * remove_link_groups
                     */
                    std::vector<std::string> m_removeGroupIds;
                    bool m_removeGroupIdsHasBeenSet;

                    /**
                     * 是否可编辑
                     */
                    bool m_editable;
                    bool m_editableHasBeenSet;

                    /**
                     * 归属者
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 部门
                     */
                    std::string m_department;
                    bool m_departmentHasBeenSet;

                    /**
                     * 业务
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 配置文件组标签
                     */
                    std::vector<ConfigFileGroupTag> m_configFileGroupTags;
                    bool m_configFileGroupTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CONFIGFILEGROUP_H_
