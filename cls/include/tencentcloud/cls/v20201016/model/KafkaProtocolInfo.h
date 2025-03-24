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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_KAFKAPROTOCOLINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_KAFKAPROTOCOLINFO_H_

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
                * Kafka访问协议
                */
                class KafkaProtocolInfo : public AbstractModel
                {
                public:
                    KafkaProtocolInfo();
                    ~KafkaProtocolInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取协议类型，支持的协议类型包括 plaintext、sasl_plaintext 或 sasl_ssl。建议使用 sasl_ssl，此协议会进行连接加密同时需要用户认证。
入参必填
                     * @return Protocol 协议类型，支持的协议类型包括 plaintext、sasl_plaintext 或 sasl_ssl。建议使用 sasl_ssl，此协议会进行连接加密同时需要用户认证。
入参必填
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议类型，支持的协议类型包括 plaintext、sasl_plaintext 或 sasl_ssl。建议使用 sasl_ssl，此协议会进行连接加密同时需要用户认证。
入参必填
                     * @param _protocol 协议类型，支持的协议类型包括 plaintext、sasl_plaintext 或 sasl_ssl。建议使用 sasl_ssl，此协议会进行连接加密同时需要用户认证。
入参必填
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取加密类型，支持 PLAIN、SCRAM-SHA-256 或 SCRAM-SHA-512。
当Protocol为sasl_plaintext或sasl_ssl时必填
                     * @return Mechanism 加密类型，支持 PLAIN、SCRAM-SHA-256 或 SCRAM-SHA-512。
当Protocol为sasl_plaintext或sasl_ssl时必填
                     * 
                     */
                    std::string GetMechanism() const;

                    /**
                     * 设置加密类型，支持 PLAIN、SCRAM-SHA-256 或 SCRAM-SHA-512。
当Protocol为sasl_plaintext或sasl_ssl时必填
                     * @param _mechanism 加密类型，支持 PLAIN、SCRAM-SHA-256 或 SCRAM-SHA-512。
当Protocol为sasl_plaintext或sasl_ssl时必填
                     * 
                     */
                    void SetMechanism(const std::string& _mechanism);

                    /**
                     * 判断参数 Mechanism 是否已赋值
                     * @return Mechanism 是否已赋值
                     * 
                     */
                    bool MechanismHasBeenSet() const;

                    /**
                     * 获取用户名。
当Protocol为sasl_plaintext或sasl_ssl时必填
                     * @return UserName 用户名。
当Protocol为sasl_plaintext或sasl_ssl时必填
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名。
当Protocol为sasl_plaintext或sasl_ssl时必填
                     * @param _userName 用户名。
当Protocol为sasl_plaintext或sasl_ssl时必填
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
                     * 获取用户密码。
当Protocol为sasl_plaintext或sasl_ssl时必填
                     * @return Password 用户密码。
当Protocol为sasl_plaintext或sasl_ssl时必填
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置用户密码。
当Protocol为sasl_plaintext或sasl_ssl时必填
                     * @param _password 用户密码。
当Protocol为sasl_plaintext或sasl_ssl时必填
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                private:

                    /**
                     * 协议类型，支持的协议类型包括 plaintext、sasl_plaintext 或 sasl_ssl。建议使用 sasl_ssl，此协议会进行连接加密同时需要用户认证。
入参必填
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 加密类型，支持 PLAIN、SCRAM-SHA-256 或 SCRAM-SHA-512。
当Protocol为sasl_plaintext或sasl_ssl时必填
                     */
                    std::string m_mechanism;
                    bool m_mechanismHasBeenSet;

                    /**
                     * 用户名。
当Protocol为sasl_plaintext或sasl_ssl时必填
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 用户密码。
当Protocol为sasl_plaintext或sasl_ssl时必填
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_KAFKAPROTOCOLINFO_H_
