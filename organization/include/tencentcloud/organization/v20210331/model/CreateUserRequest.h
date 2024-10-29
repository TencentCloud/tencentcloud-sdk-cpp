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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEUSERREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateUser请求参数结构体
                */
                class CreateUserRequest : public AbstractModel
                {
                public:
                    CreateUserRequest();
                    ~CreateUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取空间 ID。
                     * @return ZoneId 空间 ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置空间 ID。
                     * @param _zoneId 空间 ID。
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取用户名称。空间内必须唯一。不支持修改。  格式：包含数字、英文字母和特殊符号+ = , . @ - _ 。  长度：最大 64 个字符
                     * @return UserName 用户名称。空间内必须唯一。不支持修改。  格式：包含数字、英文字母和特殊符号+ = , . @ - _ 。  长度：最大 64 个字符
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名称。空间内必须唯一。不支持修改。  格式：包含数字、英文字母和特殊符号+ = , . @ - _ 。  长度：最大 64 个字符
                     * @param _userName 用户名称。空间内必须唯一。不支持修改。  格式：包含数字、英文字母和特殊符号+ = , . @ - _ 。  长度：最大 64 个字符
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取用户的姓。  长度：最大 64 个字符。
                     * @return FirstName 用户的姓。  长度：最大 64 个字符。
                     * 
                     */
                    std::string GetFirstName() const;

                    /**
                     * 设置用户的姓。  长度：最大 64 个字符。
                     * @param _firstName 用户的姓。  长度：最大 64 个字符。
                     * 
                     */
                    void SetFirstName(const std::string& _firstName);

                    /**
                     * 判断参数 FirstName 是否已赋值
                     * @return FirstName 是否已赋值
                     * 
                     */
                    bool FirstNameHasBeenSet() const;

                    /**
                     * 获取用户的名。  长度：最大 64 个字符。
                     * @return LastName 用户的名。  长度：最大 64 个字符。
                     * 
                     */
                    std::string GetLastName() const;

                    /**
                     * 设置用户的名。  长度：最大 64 个字符。
                     * @param _lastName 用户的名。  长度：最大 64 个字符。
                     * 
                     */
                    void SetLastName(const std::string& _lastName);

                    /**
                     * 判断参数 LastName 是否已赋值
                     * @return LastName 是否已赋值
                     * 
                     */
                    bool LastNameHasBeenSet() const;

                    /**
                     * 获取用户的显示名称。  长度：最大 256 个字符。
                     * @return DisplayName 用户的显示名称。  长度：最大 256 个字符。
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置用户的显示名称。  长度：最大 256 个字符。
                     * @param _displayName 用户的显示名称。  长度：最大 256 个字符。
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取用户的描述。  长度：最大 1024 个字符。
                     * @return Description 用户的描述。  长度：最大 1024 个字符。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置用户的描述。  长度：最大 1024 个字符。
                     * @param _description 用户的描述。  长度：最大 1024 个字符。
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
                     * 获取用户的电子邮箱。目录内必须唯一。  长度：最大 128 个字符。
                     * @return Email 用户的电子邮箱。目录内必须唯一。  长度：最大 128 个字符。
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置用户的电子邮箱。目录内必须唯一。  长度：最大 128 个字符。
                     * @param _email 用户的电子邮箱。目录内必须唯一。  长度：最大 128 个字符。
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取用户的状态。取值：  Enabled（默认值）：启用。 Disabled：禁用。
                     * @return UserStatus 用户的状态。取值：  Enabled（默认值）：启用。 Disabled：禁用。
                     * 
                     */
                    std::string GetUserStatus() const;

                    /**
                     * 设置用户的状态。取值：  Enabled（默认值）：启用。 Disabled：禁用。
                     * @param _userStatus 用户的状态。取值：  Enabled（默认值）：启用。 Disabled：禁用。
                     * 
                     */
                    void SetUserStatus(const std::string& _userStatus);

                    /**
                     * 判断参数 UserStatus 是否已赋值
                     * @return UserStatus 是否已赋值
                     * 
                     */
                    bool UserStatusHasBeenSet() const;

                    /**
                     * 获取用户类型  Manual：手动创建，Synchronized：外部导入
                     * @return UserType 用户类型  Manual：手动创建，Synchronized：外部导入
                     * 
                     */
                    std::string GetUserType() const;

                    /**
                     * 设置用户类型  Manual：手动创建，Synchronized：外部导入
                     * @param _userType 用户类型  Manual：手动创建，Synchronized：外部导入
                     * 
                     */
                    void SetUserType(const std::string& _userType);

                    /**
                     * 判断参数 UserType 是否已赋值
                     * @return UserType 是否已赋值
                     * 
                     */
                    bool UserTypeHasBeenSet() const;

                private:

                    /**
                     * 空间 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 用户名称。空间内必须唯一。不支持修改。  格式：包含数字、英文字母和特殊符号+ = , . @ - _ 。  长度：最大 64 个字符
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 用户的姓。  长度：最大 64 个字符。
                     */
                    std::string m_firstName;
                    bool m_firstNameHasBeenSet;

                    /**
                     * 用户的名。  长度：最大 64 个字符。
                     */
                    std::string m_lastName;
                    bool m_lastNameHasBeenSet;

                    /**
                     * 用户的显示名称。  长度：最大 256 个字符。
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * 用户的描述。  长度：最大 1024 个字符。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 用户的电子邮箱。目录内必须唯一。  长度：最大 128 个字符。
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 用户的状态。取值：  Enabled（默认值）：启用。 Disabled：禁用。
                     */
                    std::string m_userStatus;
                    bool m_userStatusHasBeenSet;

                    /**
                     * 用户类型  Manual：手动创建，Synchronized：外部导入
                     */
                    std::string m_userType;
                    bool m_userTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEUSERREQUEST_H_
