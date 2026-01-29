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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYUSERREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * ModifyUser请求参数结构体
                */
                class ModifyUserRequest : public AbstractModel
                {
                public:
                    ModifyUserRequest();
                    ~ModifyUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境id
                     * @return EnvId 环境id
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境id
                     * @param _envId 环境id
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取用户Id, 不做修改
                     * @return Uid 用户Id, 不做修改
                     * 
                     */
                    std::string GetUid() const;

                    /**
                     * 设置用户Id, 不做修改
                     * @param _uid 用户Id, 不做修改
                     * 
                     */
                    void SetUid(const std::string& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * 
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取用户名，用户名规则：1. 长度1-64字符 2. 只能包含大小写英文字母、数字和符号 . _ - 3. 只能以字母或数字开头 4. 不能重复，不传该字段或传空字符不修改
                     * @return Name 用户名，用户名规则：1. 长度1-64字符 2. 只能包含大小写英文字母、数字和符号 . _ - 3. 只能以字母或数字开头 4. 不能重复，不传该字段或传空字符不修改
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置用户名，用户名规则：1. 长度1-64字符 2. 只能包含大小写英文字母、数字和符号 . _ - 3. 只能以字母或数字开头 4. 不能重复，不传该字段或传空字符不修改
                     * @param _name 用户名，用户名规则：1. 长度1-64字符 2. 只能包含大小写英文字母、数字和符号 . _ - 3. 只能以字母或数字开头 4. 不能重复，不传该字段或传空字符不修改
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
                     * 获取用户类型：0-内部用户、1-外部用户，默认0（内部用户），不传该字段或传空字符串不修改
                     * @return Type 用户类型：0-内部用户、1-外部用户，默认0（内部用户），不传该字段或传空字符串不修改
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置用户类型：0-内部用户、1-外部用户，默认0（内部用户），不传该字段或传空字符串不修改
                     * @param _type 用户类型：0-内部用户、1-外部用户，默认0（内部用户），不传该字段或传空字符串不修改
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取密码，传入Uid时密码可不传。密码规则：1. 长度8-32字符（推荐12位以上） 2. 不能以特殊字符开头 3. 至少包含以下四项中的三项：小写字母a-z、大写字母A-Z、数字0-9、特殊字符()!@#$%^&*\|?><_-，不传该字段或传空字符串不修改
                     * @return Password 密码，传入Uid时密码可不传。密码规则：1. 长度8-32字符（推荐12位以上） 2. 不能以特殊字符开头 3. 至少包含以下四项中的三项：小写字母a-z、大写字母A-Z、数字0-9、特殊字符()!@#$%^&*\|?><_-，不传该字段或传空字符串不修改
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置密码，传入Uid时密码可不传。密码规则：1. 长度8-32字符（推荐12位以上） 2. 不能以特殊字符开头 3. 至少包含以下四项中的三项：小写字母a-z、大写字母A-Z、数字0-9、特殊字符()!@#$%^&*\|?><_-，不传该字段或传空字符串不修改
                     * @param _password 密码，传入Uid时密码可不传。密码规则：1. 长度8-32字符（推荐12位以上） 2. 不能以特殊字符开头 3. 至少包含以下四项中的三项：小写字母a-z、大写字母A-Z、数字0-9、特殊字符()!@#$%^&*\|?><_-，不传该字段或传空字符串不修改
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取用户状态：ACTIVE（激活）、BLOCKED（冻结），默认冻结，不传该字段或传空字符串不修改
                     * @return UserStatus 用户状态：ACTIVE（激活）、BLOCKED（冻结），默认冻结，不传该字段或传空字符串不修改
                     * 
                     */
                    std::string GetUserStatus() const;

                    /**
                     * 设置用户状态：ACTIVE（激活）、BLOCKED（冻结），默认冻结，不传该字段或传空字符串不修改
                     * @param _userStatus 用户状态：ACTIVE（激活）、BLOCKED（冻结），默认冻结，不传该字段或传空字符串不修改
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
                     * 获取用户昵称，长度2-64字符，不传该字段不修改，传空字符修改为空
                     * @return NickName 用户昵称，长度2-64字符，不传该字段不修改，传空字符修改为空
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置用户昵称，长度2-64字符，不传该字段不修改，传空字符修改为空
                     * @param _nickName 用户昵称，长度2-64字符，不传该字段不修改，传空字符修改为空
                     * 
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取手机号，11位数字，不传该字段不修改，传空字符串修改为空
                     * @return Phone 手机号，11位数字，不传该字段不修改，传空字符串修改为空
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置手机号，11位数字，不传该字段不修改，传空字符串修改为空
                     * @param _phone 手机号，11位数字，不传该字段不修改，传空字符串修改为空
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
                     * 获取邮箱地址，不传该字段不修改，传空字符修改为空
                     * @return Email 邮箱地址，不传该字段不修改，传空字符修改为空
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置邮箱地址，不传该字段不修改，传空字符修改为空
                     * @param _email 邮箱地址，不传该字段不修改，传空字符修改为空
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
                     * 获取头像链接，可访问的公网URL，不传该字段不修改，传空字符串修改为空
                     * @return AvatarUrl 头像链接，可访问的公网URL，不传该字段不修改，传空字符串修改为空
                     * 
                     */
                    std::string GetAvatarUrl() const;

                    /**
                     * 设置头像链接，可访问的公网URL，不传该字段不修改，传空字符串修改为空
                     * @param _avatarUrl 头像链接，可访问的公网URL，不传该字段不修改，传空字符串修改为空
                     * 
                     */
                    void SetAvatarUrl(const std::string& _avatarUrl);

                    /**
                     * 判断参数 AvatarUrl 是否已赋值
                     * @return AvatarUrl 是否已赋值
                     * 
                     */
                    bool AvatarUrlHasBeenSet() const;

                    /**
                     * 获取用户描述，最多200字符，不传该字段不修改，传空字符修改为空
                     * @return Description 用户描述，最多200字符，不传该字段不修改，传空字符修改为空
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置用户描述，最多200字符，不传该字段不修改，传空字符修改为空
                     * @param _description 用户描述，最多200字符，不传该字段不修改，传空字符修改为空
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 环境id
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 用户Id, 不做修改
                     */
                    std::string m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * 用户名，用户名规则：1. 长度1-64字符 2. 只能包含大小写英文字母、数字和符号 . _ - 3. 只能以字母或数字开头 4. 不能重复，不传该字段或传空字符不修改
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 用户类型：0-内部用户、1-外部用户，默认0（内部用户），不传该字段或传空字符串不修改
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 密码，传入Uid时密码可不传。密码规则：1. 长度8-32字符（推荐12位以上） 2. 不能以特殊字符开头 3. 至少包含以下四项中的三项：小写字母a-z、大写字母A-Z、数字0-9、特殊字符()!@#$%^&*\|?><_-，不传该字段或传空字符串不修改
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 用户状态：ACTIVE（激活）、BLOCKED（冻结），默认冻结，不传该字段或传空字符串不修改
                     */
                    std::string m_userStatus;
                    bool m_userStatusHasBeenSet;

                    /**
                     * 用户昵称，长度2-64字符，不传该字段不修改，传空字符修改为空
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * 手机号，11位数字，不传该字段不修改，传空字符串修改为空
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * 邮箱地址，不传该字段不修改，传空字符修改为空
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 头像链接，可访问的公网URL，不传该字段不修改，传空字符串修改为空
                     */
                    std::string m_avatarUrl;
                    bool m_avatarUrlHasBeenSet;

                    /**
                     * 用户描述，最多200字符，不传该字段不修改，传空字符修改为空
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYUSERREQUEST_H_
