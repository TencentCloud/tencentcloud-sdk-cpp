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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_USERGROUPVO_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_USERGROUPVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/UserGroupUserInfoVO.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * 用户组返回参数
                */
                class UserGroupVO : public AbstractModel
                {
                public:
                    UserGroupVO();
                    ~UserGroupVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户组id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 用户组id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置用户组id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 用户组id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取用户组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupName 用户组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置用户组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupName 用户组名称
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
                     * 获取所属用户组id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentId 所属用户组id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetParentId() const;

                    /**
                     * 设置所属用户组id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentId 所属用户组id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParentId(const int64_t& _parentId);

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     * 
                     */
                    bool ParentIdHasBeenSet() const;

                    /**
                     * 获取所属用户组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentName 所属用户组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParentName() const;

                    /**
                     * 设置所属用户组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentName 所属用户组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParentName(const std::string& _parentName);

                    /**
                     * 判断参数 ParentName 是否已赋值
                     * @return ParentName 是否已赋值
                     * 
                     */
                    bool ParentNameHasBeenSet() const;

                    /**
                     * 获取是否默认用户组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsDefault 是否默认用户组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsDefault() const;

                    /**
                     * 设置是否默认用户组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isDefault 是否默认用户组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsDefault(const int64_t& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取用户组管理员
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdminUserId 用户组管理员
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAdminUserId() const;

                    /**
                     * 设置用户组管理员
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _adminUserId 用户组管理员
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAdminUserId(const std::string& _adminUserId);

                    /**
                     * 判断参数 AdminUserId 是否已赋值
                     * @return AdminUserId 是否已赋值
                     * 
                     */
                    bool AdminUserIdHasBeenSet() const;

                    /**
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 描述
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
                     * 获取排序位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Location 排序位置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLocation() const;

                    /**
                     * 设置排序位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _location 排序位置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLocation(const int64_t& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取用户信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserList 用户信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<UserGroupUserInfoVO> GetUserList() const;

                    /**
                     * 设置用户信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userList 用户信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserList(const std::vector<UserGroupUserInfoVO>& _userList);

                    /**
                     * 判断参数 UserList 是否已赋值
                     * @return UserList 是否已赋值
                     * 
                     */
                    bool UserListHasBeenSet() const;

                private:

                    /**
                     * 用户组id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 用户组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 所属用户组id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * 所属用户组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parentName;
                    bool m_parentNameHasBeenSet;

                    /**
                     * 是否默认用户组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * 用户组管理员
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_adminUserId;
                    bool m_adminUserIdHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 排序位置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 用户信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<UserGroupUserInfoVO> m_userList;
                    bool m_userListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_USERGROUPVO_H_
