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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGMEMBERPOLICY_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGMEMBERPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * 组织成员被授权的策略
                */
                class OrgMemberPolicy : public AbstractModel
                {
                public:
                    OrgMemberPolicy();
                    ~OrgMemberPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolicyId 策略ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置策略ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _policyId 策略ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPolicyId(const int64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取策略名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolicyName 策略名。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置策略名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _policyName 策略名。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取身份ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IdentityId 身份ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIdentityId() const;

                    /**
                     * 设置身份ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _identityId 身份ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIdentityId(const int64_t& _identityId);

                    /**
                     * 判断参数 IdentityId 是否已赋值
                     * @return IdentityId 是否已赋值
                     * 
                     */
                    bool IdentityIdHasBeenSet() const;

                    /**
                     * 获取身份角色名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IdentityRoleName 身份角色名。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIdentityRoleName() const;

                    /**
                     * 设置身份角色名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _identityRoleName 身份角色名。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIdentityRoleName(const std::string& _identityRoleName);

                    /**
                     * 判断参数 IdentityRoleName 是否已赋值
                     * @return IdentityRoleName 是否已赋值
                     * 
                     */
                    bool IdentityRoleNameHasBeenSet() const;

                    /**
                     * 获取身份角色别名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IdentityRoleAliasName 身份角色别名。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIdentityRoleAliasName() const;

                    /**
                     * 设置身份角色别名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _identityRoleAliasName 身份角色别名。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIdentityRoleAliasName(const std::string& _identityRoleAliasName);

                    /**
                     * 判断参数 IdentityRoleAliasName 是否已赋值
                     * @return IdentityRoleAliasName 是否已赋值
                     * 
                     */
                    bool IdentityRoleAliasNameHasBeenSet() const;

                    /**
                     * 获取描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 描述。
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
                     * 获取创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取更新时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 策略ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 策略名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 身份ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_identityId;
                    bool m_identityIdHasBeenSet;

                    /**
                     * 身份角色名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_identityRoleName;
                    bool m_identityRoleNameHasBeenSet;

                    /**
                     * 身份角色别名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_identityRoleAliasName;
                    bool m_identityRoleAliasNameHasBeenSet;

                    /**
                     * 描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGMEMBERPOLICY_H_
