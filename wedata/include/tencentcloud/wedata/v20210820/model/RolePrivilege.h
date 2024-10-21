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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_ROLEPRIVILEGE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_ROLEPRIVILEGE_H_

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
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 角色权限对象
                */
                class RolePrivilege : public AbstractModel
                {
                public:
                    RolePrivilege();
                    ~RolePrivilege() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrivilegeId id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPrivilegeId() const;

                    /**
                     * 设置id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _privilegeId id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrivilegeId(const std::string& _privilegeId);

                    /**
                     * 判断参数 PrivilegeId 是否已赋值
                     * @return PrivilegeId 是否已赋值
                     * 
                     */
                    bool PrivilegeIdHasBeenSet() const;

                    /**
                     * 获取名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrivilegeName 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPrivilegeName() const;

                    /**
                     * 设置名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _privilegeName 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrivilegeName(const std::string& _privilegeName);

                    /**
                     * 判断参数 PrivilegeName 是否已赋值
                     * @return PrivilegeName 是否已赋值
                     * 
                     */
                    bool PrivilegeNameHasBeenSet() const;

                    /**
                     * 获取路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RestPath 路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRestPath() const;

                    /**
                     * 设置路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _restPath 路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRestPath(const std::string& _restPath);

                    /**
                     * 判断参数 RestPath 是否已赋值
                     * @return RestPath 是否已赋值
                     * 
                     */
                    bool RestPathHasBeenSet() const;

                    /**
                     * 获取方法
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RestMethod 方法
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRestMethod() const;

                    /**
                     * 设置方法
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _restMethod 方法
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRestMethod(const std::string& _restMethod);

                    /**
                     * 判断参数 RestMethod 是否已赋值
                     * @return RestMethod 是否已赋值
                     * 
                     */
                    bool RestMethodHasBeenSet() const;

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
                     * 获取模块id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModuleId 模块id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModuleId() const;

                    /**
                     * 设置模块id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _moduleId 模块id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModuleId(const std::string& _moduleId);

                    /**
                     * 判断参数 ModuleId 是否已赋值
                     * @return ModuleId 是否已赋值
                     * 
                     */
                    bool ModuleIdHasBeenSet() const;

                    /**
                     * 获取权限类型 N、R、RW、RWD
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 权限类型 N、R、RW、RWD
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置权限类型 N、R、RW、RWD
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 权限类型 N、R、RW、RWD
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_privilegeId;
                    bool m_privilegeIdHasBeenSet;

                    /**
                     * 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_privilegeName;
                    bool m_privilegeNameHasBeenSet;

                    /**
                     * 路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_restPath;
                    bool m_restPathHasBeenSet;

                    /**
                     * 方法
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_restMethod;
                    bool m_restMethodHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 模块id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_moduleId;
                    bool m_moduleIdHasBeenSet;

                    /**
                     * 权限类型 N、R、RW、RWD
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_ROLEPRIVILEGE_H_
