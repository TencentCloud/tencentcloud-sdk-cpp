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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATEUSERREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATEUSERREQUEST_H_

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
                * UpdateUser请求参数结构体
                */
                class UpdateUserRequest : public AbstractModel
                {
                public:
                    UpdateUserRequest();
                    ~UpdateUserRequest() = default;
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
                     * 获取用户 ID。
                     * @return UserId 用户 ID。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户 ID。
                     * @param _userId 用户 ID。
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
                     * 获取用户的名。
                     * @return NewFirstName 用户的名。
                     * 
                     */
                    std::string GetNewFirstName() const;

                    /**
                     * 设置用户的名。
                     * @param _newFirstName 用户的名。
                     * 
                     */
                    void SetNewFirstName(const std::string& _newFirstName);

                    /**
                     * 判断参数 NewFirstName 是否已赋值
                     * @return NewFirstName 是否已赋值
                     * 
                     */
                    bool NewFirstNameHasBeenSet() const;

                    /**
                     * 获取用户的姓。
                     * @return NewLastName 用户的姓。
                     * 
                     */
                    std::string GetNewLastName() const;

                    /**
                     * 设置用户的姓。
                     * @param _newLastName 用户的姓。
                     * 
                     */
                    void SetNewLastName(const std::string& _newLastName);

                    /**
                     * 判断参数 NewLastName 是否已赋值
                     * @return NewLastName 是否已赋值
                     * 
                     */
                    bool NewLastNameHasBeenSet() const;

                    /**
                     * 获取用户的显示名称。
                     * @return NewDisplayName 用户的显示名称。
                     * 
                     */
                    std::string GetNewDisplayName() const;

                    /**
                     * 设置用户的显示名称。
                     * @param _newDisplayName 用户的显示名称。
                     * 
                     */
                    void SetNewDisplayName(const std::string& _newDisplayName);

                    /**
                     * 判断参数 NewDisplayName 是否已赋值
                     * @return NewDisplayName 是否已赋值
                     * 
                     */
                    bool NewDisplayNameHasBeenSet() const;

                    /**
                     * 获取用户的描述。
                     * @return NewDescription 用户的描述。
                     * 
                     */
                    std::string GetNewDescription() const;

                    /**
                     * 设置用户的描述。
                     * @param _newDescription 用户的描述。
                     * 
                     */
                    void SetNewDescription(const std::string& _newDescription);

                    /**
                     * 判断参数 NewDescription 是否已赋值
                     * @return NewDescription 是否已赋值
                     * 
                     */
                    bool NewDescriptionHasBeenSet() const;

                    /**
                     * 获取用户的电子邮箱。
                     * @return NewEmail 用户的电子邮箱。
                     * 
                     */
                    std::string GetNewEmail() const;

                    /**
                     * 设置用户的电子邮箱。
                     * @param _newEmail 用户的电子邮箱。
                     * 
                     */
                    void SetNewEmail(const std::string& _newEmail);

                    /**
                     * 判断参数 NewEmail 是否已赋值
                     * @return NewEmail 是否已赋值
                     * 
                     */
                    bool NewEmailHasBeenSet() const;

                private:

                    /**
                     * 空间 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 用户 ID。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 用户的名。
                     */
                    std::string m_newFirstName;
                    bool m_newFirstNameHasBeenSet;

                    /**
                     * 用户的姓。
                     */
                    std::string m_newLastName;
                    bool m_newLastNameHasBeenSet;

                    /**
                     * 用户的显示名称。
                     */
                    std::string m_newDisplayName;
                    bool m_newDisplayNameHasBeenSet;

                    /**
                     * 用户的描述。
                     */
                    std::string m_newDescription;
                    bool m_newDescriptionHasBeenSet;

                    /**
                     * 用户的电子邮箱。
                     */
                    std::string m_newEmail;
                    bool m_newEmailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATEUSERREQUEST_H_
