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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_USERROLELISTDATAROLEINFO_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_USERROLELISTDATAROLEINFO_H_

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
                * 用户角色列表角色信息
                */
                class UserRoleListDataRoleInfo : public AbstractModel
                {
                public:
                    UserRoleListDataRoleInfo();
                    ~UserRoleListDataRoleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取角色名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoleName 角色名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置角色名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _roleName 角色名字
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
                     * 获取角色ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoleId 角色ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRoleId() const;

                    /**
                     * 设置角色ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _roleId 角色ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRoleId(const int64_t& _roleId);

                    /**
                     * 判断参数 RoleId 是否已赋值
                     * @return RoleId 是否已赋值
                     * 
                     */
                    bool RoleIdHasBeenSet() const;

                    /**
                     * 获取项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId 项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取项目名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectName 项目名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置项目名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectName 项目名字
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
                     * 获取是否为全局角色（0 不是 1 是）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScopeType 是否为全局角色（0 不是 1 是）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetScopeType() const;

                    /**
                     * 设置是否为全局角色（0 不是 1 是）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scopeType 是否为全局角色（0 不是 1 是）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScopeType(const int64_t& _scopeType);

                    /**
                     * 判断参数 ScopeType 是否已赋值
                     * @return ScopeType 是否已赋值
                     * 
                     */
                    bool ScopeTypeHasBeenSet() const;

                    /**
                     * 获取角色key
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModuleCollection 角色key
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModuleCollection() const;

                    /**
                     * 设置角色key
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _moduleCollection 角色key
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModuleCollection(const std::string& _moduleCollection);

                    /**
                     * 判断参数 ModuleCollection 是否已赋值
                     * @return ModuleCollection 是否已赋值
                     * 
                     */
                    bool ModuleCollectionHasBeenSet() const;

                private:

                    /**
                     * 角色名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * 角色ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_roleId;
                    bool m_roleIdHasBeenSet;

                    /**
                     * 项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 项目名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 是否为全局角色（0 不是 1 是）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_scopeType;
                    bool m_scopeTypeHasBeenSet;

                    /**
                     * 角色key
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_moduleCollection;
                    bool m_moduleCollectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_USERROLELISTDATAROLEINFO_H_
