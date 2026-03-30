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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CONSOLEACCOUNT_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CONSOLEACCOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DataSight控制台用户账号信息
                */
                class ConsoleAccount : public AbstractModel
                {
                public:
                    ConsoleAccount();
                    ~ConsoleAccount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserName <p>用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userName <p>用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>用户密码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Password <p>用户密码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>用户密码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _password <p>用户密码</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>腾讯云账号SecretId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecretId <p>腾讯云账号SecretId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSecretId() const;

                    /**
                     * 设置<p>腾讯云账号SecretId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _secretId <p>腾讯云账号SecretId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecretId(const std::string& _secretId);

                    /**
                     * 判断参数 SecretId 是否已赋值
                     * @return SecretId 是否已赋值
                     * 
                     */
                    bool SecretIdHasBeenSet() const;

                    /**
                     * 获取<p>腾讯云账号SecretKey</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecretKey <p>腾讯云账号SecretKey</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置<p>腾讯云账号SecretKey</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _secretKey <p>腾讯云账号SecretKey</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

                    /**
                     * 获取<p>电子邮箱，用于发送验证码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Email <p>电子邮箱，用于发送验证码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置<p>电子邮箱，用于发送验证码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _email <p>电子邮箱，用于发送验证码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                private:

                    /**
                     * <p>用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>用户密码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>腾讯云账号SecretId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_secretId;
                    bool m_secretIdHasBeenSet;

                    /**
                     * <p>腾讯云账号SecretKey</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * <p>电子邮箱，用于发送验证码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CONSOLEACCOUNT_H_
