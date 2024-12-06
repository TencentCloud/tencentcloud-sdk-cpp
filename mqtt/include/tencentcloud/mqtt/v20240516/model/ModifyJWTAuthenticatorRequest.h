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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_MODIFYJWTAUTHENTICATORREQUEST_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_MODIFYJWTAUTHENTICATORREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * ModifyJWTAuthenticator请求参数结构体
                */
                class ModifyJWTAuthenticatorRequest : public AbstractModel
                {
                public:
                    ModifyJWTAuthenticatorRequest();
                    ~ModifyJWTAuthenticatorRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取算法：hmac-based，public-key
                     * @return Algorithm 算法：hmac-based，public-key
                     * 
                     */
                    std::string GetAlgorithm() const;

                    /**
                     * 设置算法：hmac-based，public-key
                     * @param _algorithm 算法：hmac-based，public-key
                     * 
                     */
                    void SetAlgorithm(const std::string& _algorithm);

                    /**
                     * 判断参数 Algorithm 是否已赋值
                     * @return Algorithm 是否已赋值
                     * 
                     */
                    bool AlgorithmHasBeenSet() const;

                    /**
                     * 获取设备连接时传递jwt的key；
username-使用用户名字段传递；
password-使用密码字段传递
                     * @return From 设备连接时传递jwt的key；
username-使用用户名字段传递；
password-使用密码字段传递
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置设备连接时传递jwt的key；
username-使用用户名字段传递；
password-使用密码字段传递
                     * @param _from 设备连接时传递jwt的key；
username-使用用户名字段传递；
password-使用密码字段传递
                     * 
                     */
                    void SetFrom(const std::string& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取密码
                     * @return Secret 密码
                     * 
                     */
                    std::string GetSecret() const;

                    /**
                     * 设置密码
                     * @param _secret 密码
                     * 
                     */
                    void SetSecret(const std::string& _secret);

                    /**
                     * 判断参数 Secret 是否已赋值
                     * @return Secret 是否已赋值
                     * 
                     */
                    bool SecretHasBeenSet() const;

                    /**
                     * 获取公钥
                     * @return PublicKey 公钥
                     * 
                     */
                    std::string GetPublicKey() const;

                    /**
                     * 设置公钥
                     * @param _publicKey 公钥
                     * 
                     */
                    void SetPublicKey(const std::string& _publicKey);

                    /**
                     * 判断参数 PublicKey 是否已赋值
                     * @return PublicKey 是否已赋值
                     * 
                     */
                    bool PublicKeyHasBeenSet() const;

                    /**
                     * 获取JSKS文本
                     * @return Text JSKS文本
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置JSKS文本
                     * @param _text JSKS文本
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取说明
                     * @return Remark 说明
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置说明
                     * @param _remark 说明
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 算法：hmac-based，public-key
                     */
                    std::string m_algorithm;
                    bool m_algorithmHasBeenSet;

                    /**
                     * 设备连接时传递jwt的key；
username-使用用户名字段传递；
password-使用密码字段传递
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * 密码
                     */
                    std::string m_secret;
                    bool m_secretHasBeenSet;

                    /**
                     * 公钥
                     */
                    std::string m_publicKey;
                    bool m_publicKeyHasBeenSet;

                    /**
                     * JSKS文本
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 说明
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_MODIFYJWTAUTHENTICATORREQUEST_H_
