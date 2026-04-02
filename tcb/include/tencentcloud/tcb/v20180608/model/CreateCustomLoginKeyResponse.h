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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CREATECUSTOMLOGINKEYRESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CREATECUSTOMLOGINKEYRESPONSE_H_

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
                * CreateCustomLoginKey返回参数结构体
                */
                class CreateCustomLoginKeyResponse : public AbstractModel
                {
                public:
                    CreateCustomLoginKeyResponse();
                    ~CreateCustomLoginKeyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取自定义登录的 RSA 私钥（1024 位），PEM 编码格式（PKCS#1）。调用方需使用该私钥对包含用户身份信息的 JSON 数据进行 JWS 签名，生成 JWT Token 后传入自定义登录接口完成身份认证。出于安全考虑，系统仅存储公钥，私钥仅在创建时返回一次且无法恢复，请妥善保存。创建新密钥后，该环境下原有未设置过期时间的旧密钥将被自动标记为 2 小时后过期
                     * @return PrivateKey 自定义登录的 RSA 私钥（1024 位），PEM 编码格式（PKCS#1）。调用方需使用该私钥对包含用户身份信息的 JSON 数据进行 JWS 签名，生成 JWT Token 后传入自定义登录接口完成身份认证。出于安全考虑，系统仅存储公钥，私钥仅在创建时返回一次且无法恢复，请妥善保存。创建新密钥后，该环境下原有未设置过期时间的旧密钥将被自动标记为 2 小时后过期
                     * 
                     */
                    std::string GetPrivateKey() const;

                    /**
                     * 判断参数 PrivateKey 是否已赋值
                     * @return PrivateKey 是否已赋值
                     * 
                     */
                    bool PrivateKeyHasBeenSet() const;

                    /**
                     * 获取密钥对的唯一标识符（UUID 格式），由系统自动生成。在自定义登录时，需将该 KeyID 拼接到 ProviderToken 参数中（格式：{KeyID}/{algorithm}/{signedJWT}），服务端通过 KeyID 查找对应的公钥以验证签名
                     * @return KeyID 密钥对的唯一标识符（UUID 格式），由系统自动生成。在自定义登录时，需将该 KeyID 拼接到 ProviderToken 参数中（格式：{KeyID}/{algorithm}/{signedJWT}），服务端通过 KeyID 查找对应的公钥以验证签名
                     * 
                     */
                    std::string GetKeyID() const;

                    /**
                     * 判断参数 KeyID 是否已赋值
                     * @return KeyID 是否已赋值
                     * 
                     */
                    bool KeyIDHasBeenSet() const;

                private:

                    /**
                     * 自定义登录的 RSA 私钥（1024 位），PEM 编码格式（PKCS#1）。调用方需使用该私钥对包含用户身份信息的 JSON 数据进行 JWS 签名，生成 JWT Token 后传入自定义登录接口完成身份认证。出于安全考虑，系统仅存储公钥，私钥仅在创建时返回一次且无法恢复，请妥善保存。创建新密钥后，该环境下原有未设置过期时间的旧密钥将被自动标记为 2 小时后过期
                     */
                    std::string m_privateKey;
                    bool m_privateKeyHasBeenSet;

                    /**
                     * 密钥对的唯一标识符（UUID 格式），由系统自动生成。在自定义登录时，需将该 KeyID 拼接到 ProviderToken 参数中（格式：{KeyID}/{algorithm}/{signedJWT}），服务端通过 KeyID 查找对应的公钥以验证签名
                     */
                    std::string m_keyID;
                    bool m_keyIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CREATECUSTOMLOGINKEYRESPONSE_H_
