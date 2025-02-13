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

#ifndef TENCENTCLOUD_SMH_V20210712_MODEL_CREATEUSERRESPONSE_H_
#define TENCENTCLOUD_SMH_V20210712_MODEL_CREATEUSERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Smh
    {
        namespace V20210712
        {
            namespace Model
            {
                /**
                * CreateUser返回参数结构体
                */
                class CreateUserResponse : public AbstractModel
                {
                public:
                    CreateUserResponse();
                    ~CreateUserResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取用户所在的媒体库 ID。
                     * @return LibraryId 用户所在的媒体库 ID。
                     * 
                     */
                    std::string GetLibraryId() const;

                    /**
                     * 判断参数 LibraryId 是否已赋值
                     * @return LibraryId 是否已赋值
                     * 
                     */
                    bool LibraryIdHasBeenSet() const;

                    /**
                     * 获取用户 ID。
                     * @return UserId 用户 ID。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取用户创建时间。
                     * @return CreationTime 用户创建时间。
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     * 
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取用户角色.
                     * @return Role 用户角色.
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取是否启用。
                     * @return Enabled 是否启用。
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取手机号国家码，如未指定则为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CountryCode 手机号国家码，如未指定则为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCountryCode() const;

                    /**
                     * 判断参数 CountryCode 是否已赋值
                     * @return CountryCode 是否已赋值
                     * 
                     */
                    bool CountryCodeHasBeenSet() const;

                    /**
                     * 获取手机号码，如未指定则为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PhoneNumber 手机号码，如未指定则为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 判断参数 PhoneNumber 是否已赋值
                     * @return PhoneNumber 是否已赋值
                     * 
                     */
                    bool PhoneNumberHasBeenSet() const;

                    /**
                     * 获取邮箱，如未指定则为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Email 邮箱，如未指定则为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取账号，如未指定则为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountName 账号，如未指定则为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     * 
                     */
                    bool AccountNameHasBeenSet() const;

                    /**
                     * 获取第三方账号 ID，用于关联第三方账号体系，如未指定则为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountUserId 第三方账号 ID，用于关联第三方账号体系，如未指定则为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountUserId() const;

                    /**
                     * 判断参数 AccountUserId 是否已赋值
                     * @return AccountUserId 是否已赋值
                     * 
                     */
                    bool AccountUserIdHasBeenSet() const;

                    /**
                     * 获取备注。
                     * @return Comment 备注。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取昵称。
                     * @return Nickname 昵称。
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 判断参数 Nickname 是否已赋值
                     * @return Nickname 是否已赋值
                     * 
                     */
                    bool NicknameHasBeenSet() const;

                    /**
                     * 获取用户头像地址。
                     * @return Avatar 用户头像地址。
                     * 
                     */
                    std::string GetAvatar() const;

                    /**
                     * 判断参数 Avatar 是否已赋值
                     * @return Avatar 是否已赋值
                     * 
                     */
                    bool AvatarHasBeenSet() const;

                    /**
                     * 获取自定义信息。
                     * @return Customize 自定义信息。
                     * 
                     */
                    std::string GetCustomize() const;

                    /**
                     * 判断参数 Customize 是否已赋值
                     * @return Customize 是否已赋值
                     * 
                     */
                    bool CustomizeHasBeenSet() const;

                private:

                    /**
                     * 用户所在的媒体库 ID。
                     */
                    std::string m_libraryId;
                    bool m_libraryIdHasBeenSet;

                    /**
                     * 用户 ID。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 用户创建时间。
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * 用户角色.
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * 是否启用。
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 手机号国家码，如未指定则为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_countryCode;
                    bool m_countryCodeHasBeenSet;

                    /**
                     * 手机号码，如未指定则为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * 邮箱，如未指定则为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 账号，如未指定则为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * 第三方账号 ID，用于关联第三方账号体系，如未指定则为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountUserId;
                    bool m_accountUserIdHasBeenSet;

                    /**
                     * 备注。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 昵称。
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * 用户头像地址。
                     */
                    std::string m_avatar;
                    bool m_avatarHasBeenSet;

                    /**
                     * 自定义信息。
                     */
                    std::string m_customize;
                    bool m_customizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMH_V20210712_MODEL_CREATEUSERRESPONSE_H_
