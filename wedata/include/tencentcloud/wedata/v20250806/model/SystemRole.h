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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_SYSTEMROLE_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_SYSTEMROLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 角色对象
                */
                class SystemRole : public AbstractModel
                {
                public:
                    SystemRole();
                    ~SystemRole() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取角色id
                     * @return RoleId 角色id
                     * 
                     */
                    std::string GetRoleId() const;

                    /**
                     * 设置角色id
                     * @param _roleId 角色id
                     * 
                     */
                    void SetRoleId(const std::string& _roleId);

                    /**
                     * 判断参数 RoleId 是否已赋值
                     * @return RoleId 是否已赋值
                     * 
                     */
                    bool RoleIdHasBeenSet() const;

                    /**
                     * 获取角色名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoleName 角色名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置角色名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _roleName 角色名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取角色展示名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoleDisplayName 角色展示名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRoleDisplayName() const;

                    /**
                     * 设置角色展示名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _roleDisplayName 角色展示名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRoleDisplayName(const std::string& _roleDisplayName);

                    /**
                     * 判断参数 RoleDisplayName 是否已赋值
                     * @return RoleDisplayName 是否已赋值
                     * 
                     */
                    bool RoleDisplayNameHasBeenSet() const;

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

                private:

                    /**
                     * 角色id
                     */
                    std::string m_roleId;
                    bool m_roleIdHasBeenSet;

                    /**
                     * 角色名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * 角色展示名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_roleDisplayName;
                    bool m_roleDisplayNameHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_SYSTEMROLE_H_
