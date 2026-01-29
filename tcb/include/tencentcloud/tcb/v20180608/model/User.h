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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_USER_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_USER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 用户信息
                */
                class User : public AbstractModel
                {
                public:
                    User();
                    ~User() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户ID
                     * @return Uid 用户ID
                     * 
                     */
                    std::string GetUid() const;

                    /**
                     * 设置用户ID
                     * @param _uid 用户ID
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
                     * 获取用户名
                     * @return Name 用户名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置用户名
                     * @param _name 用户名
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
                     * 获取用户类型：internalUser-内部用户、externalUser-外部用户
                     * @return Type 用户类型：internalUser-内部用户、externalUser-外部用户
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置用户类型：internalUser-内部用户、externalUser-外部用户
                     * @param _type 用户类型：internalUser-内部用户、externalUser-外部用户
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
                     * 获取用户状态：ACTIVE（激活）、BLOCKED（冻结）
                     * @return UserStatus 用户状态：ACTIVE（激活）、BLOCKED（冻结）
                     * 
                     */
                    std::string GetUserStatus() const;

                    /**
                     * 设置用户状态：ACTIVE（激活）、BLOCKED（冻结）
                     * @param _userStatus 用户状态：ACTIVE（激活）、BLOCKED（冻结）
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
                     * 获取用户昵称
                     * @return NickName 用户昵称
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置用户昵称
                     * @param _nickName 用户昵称
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
                     * 获取邮箱
                     * @return Email 邮箱
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置邮箱
                     * @param _email 邮箱
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
                     * 获取头像链接
                     * @return AvatarUrl 头像链接
                     * 
                     */
                    std::string GetAvatarUrl() const;

                    /**
                     * 设置头像链接
                     * @param _avatarUrl 头像链接
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
                     * 获取用户描述
                     * @return Description 用户描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置用户描述
                     * @param _description 用户描述
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
                     * 用户ID
                     */
                    std::string m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * 用户名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 用户类型：internalUser-内部用户、externalUser-外部用户
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 用户状态：ACTIVE（激活）、BLOCKED（冻结）
                     */
                    std::string m_userStatus;
                    bool m_userStatusHasBeenSet;

                    /**
                     * 用户昵称
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * 手机号
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * 邮箱
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 头像链接
                     */
                    std::string m_avatarUrl;
                    bool m_avatarUrlHasBeenSet;

                    /**
                     * 用户描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_USER_H_
