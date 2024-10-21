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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SYSTEMROLE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SYSTEMROLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/RolePrivilege.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
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
                     * @return Name 角色名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置角色名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 角色名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取角色昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NameCn 角色昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNameCn() const;

                    /**
                     * 设置角色昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nameCn 角色昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNameCn(const std::string& _nameCn);

                    /**
                     * 判断参数 NameCn 是否已赋值
                     * @return NameCn 是否已赋值
                     * 
                     */
                    bool NameCnHasBeenSet() const;

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
                     * 获取角色权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Privileges 角色权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RolePrivilege> GetPrivileges() const;

                    /**
                     * 设置角色权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _privileges 角色权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrivileges(const std::vector<RolePrivilege>& _privileges);

                    /**
                     * 判断参数 Privileges 是否已赋值
                     * @return Privileges 是否已赋值
                     * 
                     */
                    bool PrivilegesHasBeenSet() const;

                    /**
                     * 获取方法路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MethodPaths 方法路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetMethodPaths() const;

                    /**
                     * 设置方法路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _methodPaths 方法路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMethodPaths(const std::vector<std::string>& _methodPaths);

                    /**
                     * 判断参数 MethodPaths 是否已赋值
                     * @return MethodPaths 是否已赋值
                     * 
                     */
                    bool MethodPathsHasBeenSet() const;

                    /**
                     * 获取角色类型, 分为System,Tenant,Project,Commercial
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoleType 角色类型, 分为System,Tenant,Project,Commercial
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRoleType() const;

                    /**
                     * 设置角色类型, 分为System,Tenant,Project,Commercial
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _roleType 角色类型, 分为System,Tenant,Project,Commercial
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRoleType(const std::string& _roleType);

                    /**
                     * 判断参数 RoleType 是否已赋值
                     * @return RoleType 是否已赋值
                     * 
                     */
                    bool RoleTypeHasBeenSet() const;

                    /**
                     * 获取是否系统默认
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SystemInit 是否系统默认
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSystemInit() const;

                    /**
                     * 设置是否系统默认
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _systemInit 是否系统默认
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSystemInit(const bool& _systemInit);

                    /**
                     * 判断参数 SystemInit 是否已赋值
                     * @return SystemInit 是否已赋值
                     * 
                     */
                    bool SystemInitHasBeenSet() const;

                    /**
                     * 获取自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Params 自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParams() const;

                    /**
                     * 设置自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _params 自定义参数
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
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 角色昵称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nameCn;
                    bool m_nameCnHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 角色权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RolePrivilege> m_privileges;
                    bool m_privilegesHasBeenSet;

                    /**
                     * 方法路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_methodPaths;
                    bool m_methodPathsHasBeenSet;

                    /**
                     * 角色类型, 分为System,Tenant,Project,Commercial
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_roleType;
                    bool m_roleTypeHasBeenSet;

                    /**
                     * 是否系统默认
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_systemInit;
                    bool m_systemInitHasBeenSet;

                    /**
                     * 自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_params;
                    bool m_paramsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SYSTEMROLE_H_
