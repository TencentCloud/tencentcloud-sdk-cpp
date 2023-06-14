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

#ifndef TENCENTCLOUD_IOT_V20180123_MODEL_APPRESETPASSWORDREQUEST_H_
#define TENCENTCLOUD_IOT_V20180123_MODEL_APPRESETPASSWORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iot
    {
        namespace V20180123
        {
            namespace Model
            {
                /**
                * AppResetPassword请求参数结构体
                */
                class AppResetPasswordRequest : public AbstractModel
                {
                public:
                    AppResetPasswordRequest();
                    ~AppResetPasswordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取访问Token
                     * @return AccessToken 访问Token
                     * 
                     */
                    std::string GetAccessToken() const;

                    /**
                     * 设置访问Token
                     * @param _accessToken 访问Token
                     * 
                     */
                    void SetAccessToken(const std::string& _accessToken);

                    /**
                     * 判断参数 AccessToken 是否已赋值
                     * @return AccessToken 是否已赋值
                     * 
                     */
                    bool AccessTokenHasBeenSet() const;

                    /**
                     * 获取旧密码
                     * @return OldPassword 旧密码
                     * 
                     */
                    std::string GetOldPassword() const;

                    /**
                     * 设置旧密码
                     * @param _oldPassword 旧密码
                     * 
                     */
                    void SetOldPassword(const std::string& _oldPassword);

                    /**
                     * 判断参数 OldPassword 是否已赋值
                     * @return OldPassword 是否已赋值
                     * 
                     */
                    bool OldPasswordHasBeenSet() const;

                    /**
                     * 获取新密码
                     * @return NewPassword 新密码
                     * 
                     */
                    std::string GetNewPassword() const;

                    /**
                     * 设置新密码
                     * @param _newPassword 新密码
                     * 
                     */
                    void SetNewPassword(const std::string& _newPassword);

                    /**
                     * 判断参数 NewPassword 是否已赋值
                     * @return NewPassword 是否已赋值
                     * 
                     */
                    bool NewPasswordHasBeenSet() const;

                private:

                    /**
                     * 访问Token
                     */
                    std::string m_accessToken;
                    bool m_accessTokenHasBeenSet;

                    /**
                     * 旧密码
                     */
                    std::string m_oldPassword;
                    bool m_oldPasswordHasBeenSet;

                    /**
                     * 新密码
                     */
                    std::string m_newPassword;
                    bool m_newPasswordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOT_V20180123_MODEL_APPRESETPASSWORDREQUEST_H_
