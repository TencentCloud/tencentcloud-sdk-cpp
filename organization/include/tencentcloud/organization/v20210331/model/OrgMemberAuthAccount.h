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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGMEMBERAUTHACCOUNT_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGMEMBERAUTHACCOUNT_H_

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
                * 成员和子账号的授权关系
                */
                class OrgMemberAuthAccount : public AbstractModel
                {
                public:
                    OrgMemberAuthAccount();
                    ~OrgMemberAuthAccount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取组织子账号Uin。
                     * @return OrgSubAccountUin 组织子账号Uin。
                     * 
                     */
                    int64_t GetOrgSubAccountUin() const;

                    /**
                     * 设置组织子账号Uin。
                     * @param _orgSubAccountUin 组织子账号Uin。
                     * 
                     */
                    void SetOrgSubAccountUin(const int64_t& _orgSubAccountUin);

                    /**
                     * 判断参数 OrgSubAccountUin 是否已赋值
                     * @return OrgSubAccountUin 是否已赋值
                     * 
                     */
                    bool OrgSubAccountUinHasBeenSet() const;

                    /**
                     * 获取策略ID。
                     * @return PolicyId 策略ID。
                     * 
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置策略ID。
                     * @param _policyId 策略ID。
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
                     * @return PolicyName 策略名。
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置策略名。
                     * @param _policyName 策略名。
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
                     * @return IdentityId 身份ID。
                     * 
                     */
                    int64_t GetIdentityId() const;

                    /**
                     * 设置身份ID。
                     * @param _identityId 身份ID。
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
                     * @return IdentityRoleName 身份角色名。
                     * 
                     */
                    std::string GetIdentityRoleName() const;

                    /**
                     * 设置身份角色名。
                     * @param _identityRoleName 身份角色名。
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
                     * @return IdentityRoleAliasName 身份角色别名。
                     * 
                     */
                    std::string GetIdentityRoleAliasName() const;

                    /**
                     * 设置身份角色别名。
                     * @param _identityRoleAliasName 身份角色别名。
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
                     * 获取创建时间。
                     * @return CreateTime 创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createTime 创建时间。
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
                     * @return UpdateTime 更新时间。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间。
                     * @param _updateTime 更新时间。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取子账号名称
                     * @return OrgSubAccountName 子账号名称
                     * 
                     */
                    std::string GetOrgSubAccountName() const;

                    /**
                     * 设置子账号名称
                     * @param _orgSubAccountName 子账号名称
                     * 
                     */
                    void SetOrgSubAccountName(const std::string& _orgSubAccountName);

                    /**
                     * 判断参数 OrgSubAccountName 是否已赋值
                     * @return OrgSubAccountName 是否已赋值
                     * 
                     */
                    bool OrgSubAccountNameHasBeenSet() const;

                private:

                    /**
                     * 组织子账号Uin。
                     */
                    int64_t m_orgSubAccountUin;
                    bool m_orgSubAccountUinHasBeenSet;

                    /**
                     * 策略ID。
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 策略名。
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 身份ID。
                     */
                    int64_t m_identityId;
                    bool m_identityIdHasBeenSet;

                    /**
                     * 身份角色名。
                     */
                    std::string m_identityRoleName;
                    bool m_identityRoleNameHasBeenSet;

                    /**
                     * 身份角色别名。
                     */
                    std::string m_identityRoleAliasName;
                    bool m_identityRoleAliasNameHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 子账号名称
                     */
                    std::string m_orgSubAccountName;
                    bool m_orgSubAccountNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGMEMBERAUTHACCOUNT_H_
