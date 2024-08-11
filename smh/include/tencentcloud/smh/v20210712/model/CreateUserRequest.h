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

#ifndef TENCENTCLOUD_SMH_V20210712_MODEL_CREATEUSERREQUEST_H_
#define TENCENTCLOUD_SMH_V20210712_MODEL_CREATEUSERREQUEST_H_

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
                * CreateUser请求参数结构体
                */
                class CreateUserRequest : public AbstractModel
                {
                public:
                    CreateUserRequest();
                    ~CreateUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取媒体库 ID。
                     * @return LibraryId 媒体库 ID。
                     * 
                     */
                    std::string GetLibraryId() const;

                    /**
                     * 设置媒体库 ID。
                     * @param _libraryId 媒体库 ID。
                     * 
                     */
                    void SetLibraryId(const std::string& _libraryId);

                    /**
                     * 判断参数 LibraryId 是否已赋值
                     * @return LibraryId 是否已赋值
                     * 
                     */
                    bool LibraryIdHasBeenSet() const;

                    /**
                     * 获取用户角色，当只支持 user。
                     * @return Role 用户角色，当只支持 user。
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置用户角色，当只支持 user。
                     * @param _role 用户角色，当只支持 user。
                     * 
                     */
                    void SetRole(const std::string& _role);

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
                     * 设置是否启用。
                     * @param _enabled 是否启用。
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取手机号国家码，不传默认为 null，此时无法使用该登录方式进行登录。
                     * @return CountryCode 手机号国家码，不传默认为 null，此时无法使用该登录方式进行登录。
                     * 
                     */
                    std::string GetCountryCode() const;

                    /**
                     * 设置手机号国家码，不传默认为 null，此时无法使用该登录方式进行登录。
                     * @param _countryCode 手机号国家码，不传默认为 null，此时无法使用该登录方式进行登录。
                     * 
                     */
                    void SetCountryCode(const std::string& _countryCode);

                    /**
                     * 判断参数 CountryCode 是否已赋值
                     * @return CountryCode 是否已赋值
                     * 
                     */
                    bool CountryCodeHasBeenSet() const;

                    /**
                     * 获取手机号码，不传默认为 null，此时无法使用该登录方式进行登录。如果与同一媒体库内已有手机号重复则报错。CountryCode 和 PhoneNumber 必须同时传入或同时不传入。
                     * @return PhoneNumber 手机号码，不传默认为 null，此时无法使用该登录方式进行登录。如果与同一媒体库内已有手机号重复则报错。CountryCode 和 PhoneNumber 必须同时传入或同时不传入。
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置手机号码，不传默认为 null，此时无法使用该登录方式进行登录。如果与同一媒体库内已有手机号重复则报错。CountryCode 和 PhoneNumber 必须同时传入或同时不传入。
                     * @param _phoneNumber 手机号码，不传默认为 null，此时无法使用该登录方式进行登录。如果与同一媒体库内已有手机号重复则报错。CountryCode 和 PhoneNumber 必须同时传入或同时不传入。
                     * 
                     */
                    void SetPhoneNumber(const std::string& _phoneNumber);

                    /**
                     * 判断参数 PhoneNumber 是否已赋值
                     * @return PhoneNumber 是否已赋值
                     * 
                     */
                    bool PhoneNumberHasBeenSet() const;

                    /**
                     * 获取邮箱，不传默认为 null，此时无法使用该登录方式进行登录。如果与同一媒体库内已有邮箱重复则报错。
                     * @return Email 邮箱，不传默认为 null，此时无法使用该登录方式进行登录。如果与同一媒体库内已有邮箱重复则报错。
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置邮箱，不传默认为 null，此时无法使用该登录方式进行登录。如果与同一媒体库内已有邮箱重复则报错。
                     * @param _email 邮箱，不传默认为 null，此时无法使用该登录方式进行登录。如果与同一媒体库内已有邮箱重复则报错。
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
                     * 获取账号，不传默认为 null，此时无法使用该登录方式进行登录。如果与同一媒体库内已有账号重复则报错。只能使用大小写字母、数字、中划线、下划线、小数点，长度不超过 50 个字符。
                     * @return AccountName 账号，不传默认为 null，此时无法使用该登录方式进行登录。如果与同一媒体库内已有账号重复则报错。只能使用大小写字母、数字、中划线、下划线、小数点，长度不超过 50 个字符。
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置账号，不传默认为 null，此时无法使用该登录方式进行登录。如果与同一媒体库内已有账号重复则报错。只能使用大小写字母、数字、中划线、下划线、小数点，长度不超过 50 个字符。
                     * @param _accountName 账号，不传默认为 null，此时无法使用该登录方式进行登录。如果与同一媒体库内已有账号重复则报错。只能使用大小写字母、数字、中划线、下划线、小数点，长度不超过 50 个字符。
                     * 
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     * 
                     */
                    bool AccountNameHasBeenSet() const;

                    /**
                     * 获取密码的 base64 形式，不传默认为 null，此时无法使用该登录方式进行登录。AccountName 和 AccountPassword 必须同时传入或同时不传入。
                     * @return AccountPassword 密码的 base64 形式，不传默认为 null，此时无法使用该登录方式进行登录。AccountName 和 AccountPassword 必须同时传入或同时不传入。
                     * 
                     */
                    std::string GetAccountPassword() const;

                    /**
                     * 设置密码的 base64 形式，不传默认为 null，此时无法使用该登录方式进行登录。AccountName 和 AccountPassword 必须同时传入或同时不传入。
                     * @param _accountPassword 密码的 base64 形式，不传默认为 null，此时无法使用该登录方式进行登录。AccountName 和 AccountPassword 必须同时传入或同时不传入。
                     * 
                     */
                    void SetAccountPassword(const std::string& _accountPassword);

                    /**
                     * 判断参数 AccountPassword 是否已赋值
                     * @return AccountPassword 是否已赋值
                     * 
                     */
                    bool AccountPasswordHasBeenSet() const;

                    /**
                     * 获取第三方账号 ID，用于关联第三方账号体系，不传默认为 null，此时无法使用该登录方式进行登录。如果与同一媒体库内已有第三方账号重复则报错。只能使用大小写字母、数字、中划线、下划线、小数点，长度不超过 200 个字符。
                     * @return AccountUserId 第三方账号 ID，用于关联第三方账号体系，不传默认为 null，此时无法使用该登录方式进行登录。如果与同一媒体库内已有第三方账号重复则报错。只能使用大小写字母、数字、中划线、下划线、小数点，长度不超过 200 个字符。
                     * 
                     */
                    std::string GetAccountUserId() const;

                    /**
                     * 设置第三方账号 ID，用于关联第三方账号体系，不传默认为 null，此时无法使用该登录方式进行登录。如果与同一媒体库内已有第三方账号重复则报错。只能使用大小写字母、数字、中划线、下划线、小数点，长度不超过 200 个字符。
                     * @param _accountUserId 第三方账号 ID，用于关联第三方账号体系，不传默认为 null，此时无法使用该登录方式进行登录。如果与同一媒体库内已有第三方账号重复则报错。只能使用大小写字母、数字、中划线、下划线、小数点，长度不超过 200 个字符。
                     * 
                     */
                    void SetAccountUserId(const std::string& _accountUserId);

                    /**
                     * 判断参数 AccountUserId 是否已赋值
                     * @return AccountUserId 是否已赋值
                     * 
                     */
                    bool AccountUserIdHasBeenSet() const;

                    /**
                     * 获取备注。不超过 255 个字符。
                     * @return Comment 备注。不超过 255 个字符。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置备注。不超过 255 个字符。
                     * @param _comment 备注。不超过 255 个字符。
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取昵称。不超过 100 个字符。
                     * @return Nickname 昵称。不超过 100 个字符。
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置昵称。不超过 100 个字符。
                     * @param _nickname 昵称。不超过 100 个字符。
                     * 
                     */
                    void SetNickname(const std::string& _nickname);

                    /**
                     * 判断参数 Nickname 是否已赋值
                     * @return Nickname 是否已赋值
                     * 
                     */
                    bool NicknameHasBeenSet() const;

                    /**
                     * 获取用户头像地址。不超过 255 个字符。
                     * @return Avatar 用户头像地址。不超过 255 个字符。
                     * 
                     */
                    std::string GetAvatar() const;

                    /**
                     * 设置用户头像地址。不超过 255 个字符。
                     * @param _avatar 用户头像地址。不超过 255 个字符。
                     * 
                     */
                    void SetAvatar(const std::string& _avatar);

                    /**
                     * 判断参数 Avatar 是否已赋值
                     * @return Avatar 是否已赋值
                     * 
                     */
                    bool AvatarHasBeenSet() const;

                    /**
                     * 获取自定义信息。不超过 255 个字符。
                     * @return Customize 自定义信息。不超过 255 个字符。
                     * 
                     */
                    std::string GetCustomize() const;

                    /**
                     * 设置自定义信息。不超过 255 个字符。
                     * @param _customize 自定义信息。不超过 255 个字符。
                     * 
                     */
                    void SetCustomize(const std::string& _customize);

                    /**
                     * 判断参数 Customize 是否已赋值
                     * @return Customize 是否已赋值
                     * 
                     */
                    bool CustomizeHasBeenSet() const;

                private:

                    /**
                     * 媒体库 ID。
                     */
                    std::string m_libraryId;
                    bool m_libraryIdHasBeenSet;

                    /**
                     * 用户角色，当只支持 user。
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * 是否启用。
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 手机号国家码，不传默认为 null，此时无法使用该登录方式进行登录。
                     */
                    std::string m_countryCode;
                    bool m_countryCodeHasBeenSet;

                    /**
                     * 手机号码，不传默认为 null，此时无法使用该登录方式进行登录。如果与同一媒体库内已有手机号重复则报错。CountryCode 和 PhoneNumber 必须同时传入或同时不传入。
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * 邮箱，不传默认为 null，此时无法使用该登录方式进行登录。如果与同一媒体库内已有邮箱重复则报错。
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 账号，不传默认为 null，此时无法使用该登录方式进行登录。如果与同一媒体库内已有账号重复则报错。只能使用大小写字母、数字、中划线、下划线、小数点，长度不超过 50 个字符。
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * 密码的 base64 形式，不传默认为 null，此时无法使用该登录方式进行登录。AccountName 和 AccountPassword 必须同时传入或同时不传入。
                     */
                    std::string m_accountPassword;
                    bool m_accountPasswordHasBeenSet;

                    /**
                     * 第三方账号 ID，用于关联第三方账号体系，不传默认为 null，此时无法使用该登录方式进行登录。如果与同一媒体库内已有第三方账号重复则报错。只能使用大小写字母、数字、中划线、下划线、小数点，长度不超过 200 个字符。
                     */
                    std::string m_accountUserId;
                    bool m_accountUserIdHasBeenSet;

                    /**
                     * 备注。不超过 255 个字符。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 昵称。不超过 100 个字符。
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * 用户头像地址。不超过 255 个字符。
                     */
                    std::string m_avatar;
                    bool m_avatarHasBeenSet;

                    /**
                     * 自定义信息。不超过 255 个字符。
                     */
                    std::string m_customize;
                    bool m_customizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMH_V20210712_MODEL_CREATEUSERREQUEST_H_
