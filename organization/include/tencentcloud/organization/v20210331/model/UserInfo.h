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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_USERINFO_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_USERINFO_H_

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
                * 用户信息
                */
                class UserInfo : public AbstractModel
                {
                public:
                    UserInfo();
                    ~UserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取查询username。
                     * @return UserName 查询username。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置查询username。
                     * @param _userName 查询username。
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
                     * 获取用户的名。
                     * @return FirstName 用户的名。
                     * 
                     */
                    std::string GetFirstName() const;

                    /**
                     * 设置用户的名。
                     * @param _firstName 用户的名。
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
                     * 获取用户的姓。
                     * @return LastName 用户的姓。
                     * 
                     */
                    std::string GetLastName() const;

                    /**
                     * 设置用户的姓。
                     * @param _lastName 用户的姓。
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
                     * 获取用户的显示名称。
                     * @return DisplayName 用户的显示名称。
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置用户的显示名称。
                     * @param _displayName 用户的显示名称。
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
                     * 获取用户的描述。
                     * @return Description 用户的描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置用户的描述。
                     * @param _description 用户的描述。
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
                     * 获取用户的电子邮箱。目录内必须唯一。
                     * @return Email 用户的电子邮箱。目录内必须唯一。
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置用户的电子邮箱。目录内必须唯一。
                     * @param _email 用户的电子邮箱。目录内必须唯一。
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
                     * 获取用户状态 Enabled：启用， Disabled：禁用。
                     * @return UserStatus 用户状态 Enabled：启用， Disabled：禁用。
                     * 
                     */
                    std::string GetUserStatus() const;

                    /**
                     * 设置用户状态 Enabled：启用， Disabled：禁用。
                     * @param _userStatus 用户状态 Enabled：启用， Disabled：禁用。
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
                     * 获取用户类型  Manual：手动创建，Synchronized：外部导入。
                     * @return UserType 用户类型  Manual：手动创建，Synchronized：外部导入。
                     * 
                     */
                    std::string GetUserType() const;

                    /**
                     * 设置用户类型  Manual：手动创建，Synchronized：外部导入。
                     * @param _userType 用户类型  Manual：手动创建，Synchronized：外部导入。
                     * 
                     */
                    void SetUserType(const std::string& _userType);

                    /**
                     * 判断参数 UserType 是否已赋值
                     * @return UserType 是否已赋值
                     * 
                     */
                    bool UserTypeHasBeenSet() const;

                    /**
                     * 获取用户 ID
                     * @return UserId 用户 ID
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户 ID
                     * @param _userId 用户 ID
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
                     * 获取用户的创建时间
                     * @return CreateTime 用户的创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置用户的创建时间
                     * @param _createTime 用户的创建时间
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
                     * 获取用户的修改时间
                     * @return UpdateTime 用户的修改时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置用户的修改时间
                     * @param _updateTime 用户的修改时间
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
                     * 获取是否选中
                     * @return IsSelected 是否选中
                     * 
                     */
                    bool GetIsSelected() const;

                    /**
                     * 设置是否选中
                     * @param _isSelected 是否选中
                     * 
                     */
                    void SetIsSelected(const bool& _isSelected);

                    /**
                     * 判断参数 IsSelected 是否已赋值
                     * @return IsSelected 是否已赋值
                     * 
                     */
                    bool IsSelectedHasBeenSet() const;

                private:

                    /**
                     * 查询username。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 用户的名。
                     */
                    std::string m_firstName;
                    bool m_firstNameHasBeenSet;

                    /**
                     * 用户的姓。
                     */
                    std::string m_lastName;
                    bool m_lastNameHasBeenSet;

                    /**
                     * 用户的显示名称。
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * 用户的描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 用户的电子邮箱。目录内必须唯一。
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 用户状态 Enabled：启用， Disabled：禁用。
                     */
                    std::string m_userStatus;
                    bool m_userStatusHasBeenSet;

                    /**
                     * 用户类型  Manual：手动创建，Synchronized：外部导入。
                     */
                    std::string m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * 用户 ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 用户的创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 用户的修改时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 是否选中
                     */
                    bool m_isSelected;
                    bool m_isSelectedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_USERINFO_H_
