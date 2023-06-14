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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_ENDUSERINFO_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_ENDUSERINFO_H_

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
                * 终端用户信息
                */
                class EndUserInfo : public AbstractModel
                {
                public:
                    EndUserInfo();
                    ~EndUserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户唯一ID
                     * @return UUId 用户唯一ID
                     * 
                     */
                    std::string GetUUId() const;

                    /**
                     * 设置用户唯一ID
                     * @param _uUId 用户唯一ID
                     * 
                     */
                    void SetUUId(const std::string& _uUId);

                    /**
                     * 判断参数 UUId 是否已赋值
                     * @return UUId 是否已赋值
                     * 
                     */
                    bool UUIdHasBeenSet() const;

                    /**
                     * 获取微信ID
                     * @return WXOpenId 微信ID
                     * 
                     */
                    std::string GetWXOpenId() const;

                    /**
                     * 设置微信ID
                     * @param _wXOpenId 微信ID
                     * 
                     */
                    void SetWXOpenId(const std::string& _wXOpenId);

                    /**
                     * 判断参数 WXOpenId 是否已赋值
                     * @return WXOpenId 是否已赋值
                     * 
                     */
                    bool WXOpenIdHasBeenSet() const;

                    /**
                     * 获取qq ID
                     * @return QQOpenId qq ID
                     * 
                     */
                    std::string GetQQOpenId() const;

                    /**
                     * 设置qq ID
                     * @param _qQOpenId qq ID
                     * 
                     */
                    void SetQQOpenId(const std::string& _qQOpenId);

                    /**
                     * 判断参数 QQOpenId 是否已赋值
                     * @return QQOpenId 是否已赋值
                     * 
                     */
                    bool QQOpenIdHasBeenSet() const;

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
                     * 获取昵称
                     * @return NickName 昵称
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置昵称
                     * @param _nickName 昵称
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
                     * 获取性别
                     * @return Gender 性别
                     * 
                     */
                    std::string GetGender() const;

                    /**
                     * 设置性别
                     * @param _gender 性别
                     * 
                     */
                    void SetGender(const std::string& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     * 
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取头像地址
                     * @return AvatarUrl 头像地址
                     * 
                     */
                    std::string GetAvatarUrl() const;

                    /**
                     * 设置头像地址
                     * @param _avatarUrl 头像地址
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
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
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
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取是否为匿名用户
                     * @return IsAnonymous 是否为匿名用户
                     * 
                     */
                    bool GetIsAnonymous() const;

                    /**
                     * 设置是否为匿名用户
                     * @param _isAnonymous 是否为匿名用户
                     * 
                     */
                    void SetIsAnonymous(const bool& _isAnonymous);

                    /**
                     * 判断参数 IsAnonymous 是否已赋值
                     * @return IsAnonymous 是否已赋值
                     * 
                     */
                    bool IsAnonymousHasBeenSet() const;

                    /**
                     * 获取是否禁用账户
                     * @return IsDisabled 是否禁用账户
                     * 
                     */
                    bool GetIsDisabled() const;

                    /**
                     * 设置是否禁用账户
                     * @param _isDisabled 是否禁用账户
                     * 
                     */
                    void SetIsDisabled(const bool& _isDisabled);

                    /**
                     * 判断参数 IsDisabled 是否已赋值
                     * @return IsDisabled 是否已赋值
                     * 
                     */
                    bool IsDisabledHasBeenSet() const;

                    /**
                     * 获取是否设置过密码
                     * @return HasPassword 是否设置过密码
                     * 
                     */
                    bool GetHasPassword() const;

                    /**
                     * 设置是否设置过密码
                     * @param _hasPassword 是否设置过密码
                     * 
                     */
                    void SetHasPassword(const bool& _hasPassword);

                    /**
                     * 判断参数 HasPassword 是否已赋值
                     * @return HasPassword 是否已赋值
                     * 
                     */
                    bool HasPasswordHasBeenSet() const;

                    /**
                     * 获取用户名
                     * @return UserName 用户名
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名
                     * @param _userName 用户名
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                private:

                    /**
                     * 用户唯一ID
                     */
                    std::string m_uUId;
                    bool m_uUIdHasBeenSet;

                    /**
                     * 微信ID
                     */
                    std::string m_wXOpenId;
                    bool m_wXOpenIdHasBeenSet;

                    /**
                     * qq ID
                     */
                    std::string m_qQOpenId;
                    bool m_qQOpenIdHasBeenSet;

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
                     * 昵称
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * 性别
                     */
                    std::string m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * 头像地址
                     */
                    std::string m_avatarUrl;
                    bool m_avatarUrlHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 是否为匿名用户
                     */
                    bool m_isAnonymous;
                    bool m_isAnonymousHasBeenSet;

                    /**
                     * 是否禁用账户
                     */
                    bool m_isDisabled;
                    bool m_isDisabledHasBeenSet;

                    /**
                     * 是否设置过密码
                     */
                    bool m_hasPassword;
                    bool m_hasPasswordHasBeenSet;

                    /**
                     * 用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_ENDUSERINFO_H_
