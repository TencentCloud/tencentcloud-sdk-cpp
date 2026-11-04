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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_ROLEBRIEFINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_ROLEBRIEFINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 角色简要信息
                */
                class RoleBriefInfo : public AbstractModel
                {
                public:
                    RoleBriefInfo();
                    ~RoleBriefInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>角色id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoleId <p>角色id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRoleId() const;

                    /**
                     * 设置<p>角色id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _roleId <p>角色id</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>角色名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoleName <p>角色名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置<p>角色名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _roleName <p>角色名称</p>
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

                private:

                    /**
                     * <p>角色id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_roleId;
                    bool m_roleIdHasBeenSet;

                    /**
                     * <p>角色名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_ROLEBRIEFINFO_H_
