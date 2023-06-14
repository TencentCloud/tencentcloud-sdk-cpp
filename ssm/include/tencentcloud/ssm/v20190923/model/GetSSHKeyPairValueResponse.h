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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_GETSSHKEYPAIRVALUERESPONSE_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_GETSSHKEYPAIRVALUERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssm
    {
        namespace V20190923
        {
            namespace Model
            {
                /**
                * GetSSHKeyPairValue返回参数结构体
                */
                class GetSSHKeyPairValueResponse : public AbstractModel
                {
                public:
                    GetSSHKeyPairValueResponse();
                    ~GetSSHKeyPairValueResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取SSH密钥对ID。
                     * @return SSHKeyID SSH密钥对ID。
                     * 
                     */
                    std::string GetSSHKeyID() const;

                    /**
                     * 判断参数 SSHKeyID 是否已赋值
                     * @return SSHKeyID 是否已赋值
                     * 
                     */
                    bool SSHKeyIDHasBeenSet() const;

                    /**
                     * 获取公钥明文，使用base64编码。
                     * @return PublicKey 公钥明文，使用base64编码。
                     * 
                     */
                    std::string GetPublicKey() const;

                    /**
                     * 判断参数 PublicKey 是否已赋值
                     * @return PublicKey 是否已赋值
                     * 
                     */
                    bool PublicKeyHasBeenSet() const;

                    /**
                     * 获取私钥明文，使用base64编码
                     * @return PrivateKey 私钥明文，使用base64编码
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
                     * 获取此密钥对所属的项目ID。
                     * @return ProjectID 此密钥对所属的项目ID。
                     * 
                     */
                    int64_t GetProjectID() const;

                    /**
                     * 判断参数 ProjectID 是否已赋值
                     * @return ProjectID 是否已赋值
                     * 
                     */
                    bool ProjectIDHasBeenSet() const;

                    /**
                     * 获取SSH密钥对的描述信息。
用户可以在CVM侧控制台对密钥对的描述信息进行修改。
                     * @return SSHKeyDescription SSH密钥对的描述信息。
用户可以在CVM侧控制台对密钥对的描述信息进行修改。
                     * 
                     */
                    std::string GetSSHKeyDescription() const;

                    /**
                     * 判断参数 SSHKeyDescription 是否已赋值
                     * @return SSHKeyDescription 是否已赋值
                     * 
                     */
                    bool SSHKeyDescriptionHasBeenSet() const;

                    /**
                     * 获取SSH密钥对的名称。
用户可以在CVM侧控制台对密钥对的名称进行修改。
                     * @return SSHKeyName SSH密钥对的名称。
用户可以在CVM侧控制台对密钥对的名称进行修改。
                     * 
                     */
                    std::string GetSSHKeyName() const;

                    /**
                     * 判断参数 SSHKeyName 是否已赋值
                     * @return SSHKeyName 是否已赋值
                     * 
                     */
                    bool SSHKeyNameHasBeenSet() const;

                private:

                    /**
                     * SSH密钥对ID。
                     */
                    std::string m_sSHKeyID;
                    bool m_sSHKeyIDHasBeenSet;

                    /**
                     * 公钥明文，使用base64编码。
                     */
                    std::string m_publicKey;
                    bool m_publicKeyHasBeenSet;

                    /**
                     * 私钥明文，使用base64编码
                     */
                    std::string m_privateKey;
                    bool m_privateKeyHasBeenSet;

                    /**
                     * 此密钥对所属的项目ID。
                     */
                    int64_t m_projectID;
                    bool m_projectIDHasBeenSet;

                    /**
                     * SSH密钥对的描述信息。
用户可以在CVM侧控制台对密钥对的描述信息进行修改。
                     */
                    std::string m_sSHKeyDescription;
                    bool m_sSHKeyDescriptionHasBeenSet;

                    /**
                     * SSH密钥对的名称。
用户可以在CVM侧控制台对密钥对的名称进行修改。
                     */
                    std::string m_sSHKeyName;
                    bool m_sSHKeyNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_GETSSHKEYPAIRVALUERESPONSE_H_
