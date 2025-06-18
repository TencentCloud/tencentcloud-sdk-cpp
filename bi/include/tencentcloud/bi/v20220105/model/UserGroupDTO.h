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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_USERGROUPDTO_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_USERGROUPDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * 用户组
                */
                class UserGroupDTO : public AbstractModel
                {
                public:
                    UserGroupDTO();
                    ~UserGroupDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const int64_t& _id);

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
                     * 获取父节点id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentId 父节点id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetParentId() const;

                    /**
                     * 设置父节点id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentId 父节点id
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
                     * 获取是否为默认
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsDefault 是否为默认
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsDefault() const;

                    /**
                     * 设置是否为默认
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isDefault 是否为默认
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
                     * 获取管理员用户id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdminUserId 管理员用户id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAdminUserId() const;

                    /**
                     * 设置管理员用户id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _adminUserId 管理员用户id
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
                     * 获取定位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Location 定位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLocation() const;

                    /**
                     * 设置定位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _location 定位
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

                private:

                    /**
                     * id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 用户组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 父节点id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * 是否为默认
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * 管理员用户id
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
                     * 定位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_location;
                    bool m_locationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_USERGROUPDTO_H_
