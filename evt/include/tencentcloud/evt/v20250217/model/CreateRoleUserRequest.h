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

#ifndef TENCENTCLOUD_EVT_V20250217_MODEL_CREATEROLEUSERREQUEST_H_
#define TENCENTCLOUD_EVT_V20250217_MODEL_CREATEROLEUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/evt/v20250217/model/UserAttribute.h>


namespace TencentCloud
{
    namespace Evt
    {
        namespace V20250217
        {
            namespace Model
            {
                /**
                * CreateRoleUser请求参数结构体
                */
                class CreateRoleUserRequest : public AbstractModel
                {
                public:
                    CreateRoleUserRequest();
                    ~CreateRoleUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取角色体系ID
                     * @return RoleSystemId 角色体系ID
                     * 
                     */
                    int64_t GetRoleSystemId() const;

                    /**
                     * 设置角色体系ID
                     * @param _roleSystemId 角色体系ID
                     * 
                     */
                    void SetRoleSystemId(const int64_t& _roleSystemId);

                    /**
                     * 判断参数 RoleSystemId 是否已赋值
                     * @return RoleSystemId 是否已赋值
                     * 
                     */
                    bool RoleSystemIdHasBeenSet() const;

                    /**
                     * 获取人员ID
                     * @return UserId 人员ID
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置人员ID
                     * @param _userId 人员ID
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取人员名称
                     * @return Username 人员名称
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置人员名称
                     * @param _username 人员名称
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取是否启用
                     * @return Enabled 是否启用
                     * 
                     */
                    uint64_t GetEnabled() const;

                    /**
                     * 设置是否启用
                     * @param _enabled 是否启用
                     * 
                     */
                    void SetEnabled(const uint64_t& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取手机号
                     * @return Phone 手机号
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置手机号
                     * @param _phone 手机号
                     * 
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     * 
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取属性列表
                     * @return Attributes 属性列表
                     * 
                     */
                    std::vector<UserAttribute> GetAttributes() const;

                    /**
                     * 设置属性列表
                     * @param _attributes 属性列表
                     * 
                     */
                    void SetAttributes(const std::vector<UserAttribute>& _attributes);

                    /**
                     * 判断参数 Attributes 是否已赋值
                     * @return Attributes 是否已赋值
                     * 
                     */
                    bool AttributesHasBeenSet() const;

                private:

                    /**
                     * 角色体系ID
                     */
                    int64_t m_roleSystemId;
                    bool m_roleSystemIdHasBeenSet;

                    /**
                     * 人员ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 人员名称
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * 是否启用
                     */
                    uint64_t m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 手机号
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * 属性列表
                     */
                    std::vector<UserAttribute> m_attributes;
                    bool m_attributesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EVT_V20250217_MODEL_CREATEROLEUSERREQUEST_H_
