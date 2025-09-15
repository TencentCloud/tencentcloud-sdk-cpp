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

#ifndef TENCENTCLOUD_LOWCODE_V20210108_MODEL_WEDAROLE_H_
#define TENCENTCLOUD_LOWCODE_V20210108_MODEL_WEDAROLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lowcode
    {
        namespace V20210108
        {
            namespace Model
            {
                /**
                * weda角色
                */
                class WedaRole : public AbstractModel
                {
                public:
                    WedaRole();
                    ~WedaRole() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取角色名称
                     * @return Name 角色名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置角色名称
                     * @param _name 角色名称
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
                     * 获取角色标识
                     * @return RoleIdentity 角色标识
                     * 
                     */
                    std::string GetRoleIdentity() const;

                    /**
                     * 设置角色标识
                     * @param _roleIdentity 角色标识
                     * 
                     */
                    void SetRoleIdentity(const std::string& _roleIdentity);

                    /**
                     * 判断参数 RoleIdentity 是否已赋值
                     * @return RoleIdentity 是否已赋值
                     * 
                     */
                    bool RoleIdentityHasBeenSet() const;

                    /**
                     * 获取角色id
                     * @return Id 角色id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置角色id
                     * @param _id 角色id
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
                     * 获取父角色id
                     * @return ParentRoleId 父角色id
                     * 
                     */
                    int64_t GetParentRoleId() const;

                    /**
                     * 设置父角色id
                     * @param _parentRoleId 父角色id
                     * 
                     */
                    void SetParentRoleId(const int64_t& _parentRoleId);

                    /**
                     * 判断参数 ParentRoleId 是否已赋值
                     * @return ParentRoleId 是否已赋值
                     * 
                     */
                    bool ParentRoleIdHasBeenSet() const;

                    /**
                     * 获取子角色id
                     * @return ChildRoleId 子角色id
                     * 
                     */
                    int64_t GetChildRoleId() const;

                    /**
                     * 设置子角色id
                     * @param _childRoleId 子角色id
                     * 
                     */
                    void SetChildRoleId(const int64_t& _childRoleId);

                    /**
                     * 判断参数 ChildRoleId 是否已赋值
                     * @return ChildRoleId 是否已赋值
                     * 
                     */
                    bool ChildRoleIdHasBeenSet() const;

                    /**
                     * 获取环境标识
                     * @return EnvIdentity 环境标识
                     * 
                     */
                    std::string GetEnvIdentity() const;

                    /**
                     * 设置环境标识
                     * @param _envIdentity 环境标识
                     * 
                     */
                    void SetEnvIdentity(const std::string& _envIdentity);

                    /**
                     * 判断参数 EnvIdentity 是否已赋值
                     * @return EnvIdentity 是否已赋值
                     * 
                     */
                    bool EnvIdentityHasBeenSet() const;

                    /**
                     * 获取是否已发布
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsReleased 是否已发布
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsReleased() const;

                    /**
                     * 设置是否已发布
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isReleased 是否已发布
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsReleased(const bool& _isReleased);

                    /**
                     * 判断参数 IsReleased 是否已赋值
                     * @return IsReleased 是否已赋值
                     * 
                     */
                    bool IsReleasedHasBeenSet() const;

                private:

                    /**
                     * 角色名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 角色标识
                     */
                    std::string m_roleIdentity;
                    bool m_roleIdentityHasBeenSet;

                    /**
                     * 角色id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 父角色id
                     */
                    int64_t m_parentRoleId;
                    bool m_parentRoleIdHasBeenSet;

                    /**
                     * 子角色id
                     */
                    int64_t m_childRoleId;
                    bool m_childRoleIdHasBeenSet;

                    /**
                     * 环境标识
                     */
                    std::string m_envIdentity;
                    bool m_envIdentityHasBeenSet;

                    /**
                     * 是否已发布
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isReleased;
                    bool m_isReleasedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LOWCODE_V20210108_MODEL_WEDAROLE_H_
