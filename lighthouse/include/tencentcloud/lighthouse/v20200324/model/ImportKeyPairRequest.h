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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_IMPORTKEYPAIRREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_IMPORTKEYPAIRREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * ImportKeyPair请求参数结构体
                */
                class ImportKeyPairRequest : public AbstractModel
                {
                public:
                    ImportKeyPairRequest();
                    ~ImportKeyPairRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取密钥对名称，可由数字，字母和下划线组成，长度不超过 25 个字符。
                     * @return KeyName 密钥对名称，可由数字，字母和下划线组成，长度不超过 25 个字符。
                     * 
                     */
                    std::string GetKeyName() const;

                    /**
                     * 设置密钥对名称，可由数字，字母和下划线组成，长度不超过 25 个字符。
                     * @param _keyName 密钥对名称，可由数字，字母和下划线组成，长度不超过 25 个字符。
                     * 
                     */
                    void SetKeyName(const std::string& _keyName);

                    /**
                     * 判断参数 KeyName 是否已赋值
                     * @return KeyName 是否已赋值
                     * 
                     */
                    bool KeyNameHasBeenSet() const;

                    /**
                     * 获取密钥对的公钥内容， OpenSSH RSA 格式。
                     * @return PublicKey 密钥对的公钥内容， OpenSSH RSA 格式。
                     * 
                     */
                    std::string GetPublicKey() const;

                    /**
                     * 设置密钥对的公钥内容， OpenSSH RSA 格式。
                     * @param _publicKey 密钥对的公钥内容， OpenSSH RSA 格式。
                     * 
                     */
                    void SetPublicKey(const std::string& _publicKey);

                    /**
                     * 判断参数 PublicKey 是否已赋值
                     * @return PublicKey 是否已赋值
                     * 
                     */
                    bool PublicKeyHasBeenSet() const;

                private:

                    /**
                     * 密钥对名称，可由数字，字母和下划线组成，长度不超过 25 个字符。
                     */
                    std::string m_keyName;
                    bool m_keyNameHasBeenSet;

                    /**
                     * 密钥对的公钥内容， OpenSSH RSA 格式。
                     */
                    std::string m_publicKey;
                    bool m_publicKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_IMPORTKEYPAIRREQUEST_H_
