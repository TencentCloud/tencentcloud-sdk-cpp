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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_CREATEWHITEBOXKEYRESPONSE_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_CREATEWHITEBOXKEYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * CreateWhiteBoxKey返回参数结构体
                */
                class CreateWhiteBoxKeyResponse : public AbstractModel
                {
                public:
                    CreateWhiteBoxKeyResponse();
                    ~CreateWhiteBoxKeyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取用于加密的密钥，base64编码
                     * @return EncryptKey 用于加密的密钥，base64编码
                     * 
                     */
                    std::string GetEncryptKey() const;

                    /**
                     * 判断参数 EncryptKey 是否已赋值
                     * @return EncryptKey 是否已赋值
                     * 
                     */
                    bool EncryptKeyHasBeenSet() const;

                    /**
                     * 获取用于解密的密钥，base64编码
                     * @return DecryptKey 用于解密的密钥，base64编码
                     * 
                     */
                    std::string GetDecryptKey() const;

                    /**
                     * 判断参数 DecryptKey 是否已赋值
                     * @return DecryptKey 是否已赋值
                     * 
                     */
                    bool DecryptKeyHasBeenSet() const;

                    /**
                     * 获取白盒密钥的全局唯一标识符
                     * @return KeyId 白盒密钥的全局唯一标识符
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取标签操作的返回码. 0: 成功；1: 内部错误；2: 业务处理错误
                     * @return TagCode 标签操作的返回码. 0: 成功；1: 内部错误；2: 业务处理错误
                     * 
                     */
                    uint64_t GetTagCode() const;

                    /**
                     * 判断参数 TagCode 是否已赋值
                     * @return TagCode 是否已赋值
                     * 
                     */
                    bool TagCodeHasBeenSet() const;

                    /**
                     * 获取标签操作的返回信息
                     * @return TagMsg 标签操作的返回信息
                     * 
                     */
                    std::string GetTagMsg() const;

                    /**
                     * 判断参数 TagMsg 是否已赋值
                     * @return TagMsg 是否已赋值
                     * 
                     */
                    bool TagMsgHasBeenSet() const;

                private:

                    /**
                     * 用于加密的密钥，base64编码
                     */
                    std::string m_encryptKey;
                    bool m_encryptKeyHasBeenSet;

                    /**
                     * 用于解密的密钥，base64编码
                     */
                    std::string m_decryptKey;
                    bool m_decryptKeyHasBeenSet;

                    /**
                     * 白盒密钥的全局唯一标识符
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * 标签操作的返回码. 0: 成功；1: 内部错误；2: 业务处理错误
                     */
                    uint64_t m_tagCode;
                    bool m_tagCodeHasBeenSet;

                    /**
                     * 标签操作的返回信息
                     */
                    std::string m_tagMsg;
                    bool m_tagMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_CREATEWHITEBOXKEYRESPONSE_H_
