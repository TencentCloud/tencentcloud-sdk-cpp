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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_UPDATEEMAILSMTPPASSWORDREQUEST_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_UPDATEEMAILSMTPPASSWORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * UpdateEmailSmtpPassWord请求参数结构体
                */
                class UpdateEmailSmtpPassWordRequest : public AbstractModel
                {
                public:
                    UpdateEmailSmtpPassWordRequest();
                    ~UpdateEmailSmtpPassWordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取smtp密码，长度限制64
                     * @return Password smtp密码，长度限制64
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置smtp密码，长度限制64
                     * @param _password smtp密码，长度限制64
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
                     * 获取发信邮箱,长度限制128
                     * @return EmailAddress 发信邮箱,长度限制128
                     * 
                     */
                    std::string GetEmailAddress() const;

                    /**
                     * 设置发信邮箱,长度限制128
                     * @param _emailAddress 发信邮箱,长度限制128
                     * 
                     */
                    void SetEmailAddress(const std::string& _emailAddress);

                    /**
                     * 判断参数 EmailAddress 是否已赋值
                     * @return EmailAddress 是否已赋值
                     * 
                     */
                    bool EmailAddressHasBeenSet() const;

                private:

                    /**
                     * smtp密码，长度限制64
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 发信邮箱,长度限制128
                     */
                    std::string m_emailAddress;
                    bool m_emailAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_UPDATEEMAILSMTPPASSWORDREQUEST_H_
