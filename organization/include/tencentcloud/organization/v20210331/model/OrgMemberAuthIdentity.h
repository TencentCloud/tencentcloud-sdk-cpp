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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGMEMBERAUTHIDENTITY_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGMEMBERAUTHIDENTITY_H_

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
                * 组织成员可授权的身份
                */
                class OrgMemberAuthIdentity : public AbstractModel
                {
                public:
                    OrgMemberAuthIdentity();
                    ~OrgMemberAuthIdentity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取身份的角色名。
                     * @return IdentityRoleName 身份的角色名。
                     * 
                     */
                    std::string GetIdentityRoleName() const;

                    /**
                     * 设置身份的角色名。
                     * @param _identityRoleName 身份的角色名。
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
                     * 获取身份的角色别名。
                     * @return IdentityRoleAliasName 身份的角色别名。
                     * 
                     */
                    std::string GetIdentityRoleAliasName() const;

                    /**
                     * 设置身份的角色别名。
                     * @param _identityRoleAliasName 身份的角色别名。
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
                     * 获取身份描述。
                     * @return Description 身份描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置身份描述。
                     * @param _description 身份描述。
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
                     * 获取首次配置成功的时间。
                     * @return CreateTime 首次配置成功的时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置首次配置成功的时间。
                     * @param _createTime 首次配置成功的时间。
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
                     * 获取最后一次配置成功的时间。
                     * @return UpdateTime 最后一次配置成功的时间。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置最后一次配置成功的时间。
                     * @param _updateTime 最后一次配置成功的时间。
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
                     * 获取身份类型。取值： 1-预设身份  2-自定义身份
                     * @return IdentityType 身份类型。取值： 1-预设身份  2-自定义身份
                     * 
                     */
                    uint64_t GetIdentityType() const;

                    /**
                     * 设置身份类型。取值： 1-预设身份  2-自定义身份
                     * @param _identityType 身份类型。取值： 1-预设身份  2-自定义身份
                     * 
                     */
                    void SetIdentityType(const uint64_t& _identityType);

                    /**
                     * 判断参数 IdentityType 是否已赋值
                     * @return IdentityType 是否已赋值
                     * 
                     */
                    bool IdentityTypeHasBeenSet() const;

                    /**
                     * 获取配置状态。取值：1-配置完成 2-需重新配置
                     * @return Status 配置状态。取值：1-配置完成 2-需重新配置
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置配置状态。取值：1-配置完成 2-需重新配置
                     * @param _status 配置状态。取值：1-配置完成 2-需重新配置
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取成员Uin。
                     * @return MemberUin 成员Uin。
                     * 
                     */
                    int64_t GetMemberUin() const;

                    /**
                     * 设置成员Uin。
                     * @param _memberUin 成员Uin。
                     * 
                     */
                    void SetMemberUin(const int64_t& _memberUin);

                    /**
                     * 判断参数 MemberUin 是否已赋值
                     * @return MemberUin 是否已赋值
                     * 
                     */
                    bool MemberUinHasBeenSet() const;

                    /**
                     * 获取成员名称。
                     * @return MemberName 成员名称。
                     * 
                     */
                    std::string GetMemberName() const;

                    /**
                     * 设置成员名称。
                     * @param _memberName 成员名称。
                     * 
                     */
                    void SetMemberName(const std::string& _memberName);

                    /**
                     * 判断参数 MemberName 是否已赋值
                     * @return MemberName 是否已赋值
                     * 
                     */
                    bool MemberNameHasBeenSet() const;

                private:

                    /**
                     * 身份ID。
                     */
                    int64_t m_identityId;
                    bool m_identityIdHasBeenSet;

                    /**
                     * 身份的角色名。
                     */
                    std::string m_identityRoleName;
                    bool m_identityRoleNameHasBeenSet;

                    /**
                     * 身份的角色别名。
                     */
                    std::string m_identityRoleAliasName;
                    bool m_identityRoleAliasNameHasBeenSet;

                    /**
                     * 身份描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 首次配置成功的时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最后一次配置成功的时间。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 身份类型。取值： 1-预设身份  2-自定义身份
                     */
                    uint64_t m_identityType;
                    bool m_identityTypeHasBeenSet;

                    /**
                     * 配置状态。取值：1-配置完成 2-需重新配置
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 成员Uin。
                     */
                    int64_t m_memberUin;
                    bool m_memberUinHasBeenSet;

                    /**
                     * 成员名称。
                     */
                    std::string m_memberName;
                    bool m_memberNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGMEMBERAUTHIDENTITY_H_
