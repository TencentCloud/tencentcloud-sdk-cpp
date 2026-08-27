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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEREQUESTWITHENCRYPTIONREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEREQUESTWITHENCRYPTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateRequestWithEncryption请求参数结构体
                */
                class CreateRequestWithEncryptionRequest : public AbstractModel
                {
                public:
                    CreateRequestWithEncryptionRequest();
                    ~CreateRequestWithEncryptionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>操作的接口名称。取值参考接口文档输入参数章节关于公共参数 Action 的说明。</p>
                     * @return RequestAction <p>操作的接口名称。取值参考接口文档输入参数章节关于公共参数 Action 的说明。</p>
                     * 
                     */
                    std::string GetRequestAction() const;

                    /**
                     * 设置<p>操作的接口名称。取值参考接口文档输入参数章节关于公共参数 Action 的说明。</p>
                     * @param _requestAction <p>操作的接口名称。取值参考接口文档输入参数章节关于公共参数 Action 的说明。</p>
                     * 
                     */
                    void SetRequestAction(const std::string& _requestAction);

                    /**
                     * 判断参数 RequestAction 是否已赋值
                     * @return RequestAction 是否已赋值
                     * 
                     */
                    bool RequestActionHasBeenSet() const;

                    /**
                     * 获取<p>加密算法使用的初始化向量。固定为 16 字节，将 IV 原始字节使用标准 Base64 编码后传入。</p>
                     * @return IV <p>加密算法使用的初始化向量。固定为 16 字节，将 IV 原始字节使用标准 Base64 编码后传入。</p>
                     * 
                     */
                    std::string GetIV() const;

                    /**
                     * 设置<p>加密算法使用的初始化向量。固定为 16 字节，将 IV 原始字节使用标准 Base64 编码后传入。</p>
                     * @param _iV <p>加密算法使用的初始化向量。固定为 16 字节，将 IV 原始字节使用标准 Base64 编码后传入。</p>
                     * 
                     */
                    void SetIV(const std::string& _iV);

                    /**
                     * 判断参数 IV 是否已赋值
                     * @return IV 是否已赋值
                     * 
                     */
                    bool IVHasBeenSet() const;

                    /**
                     * 获取<p>使用 AES-CBC 或 SM4-CBC 加密请求内容得到的密文。加密前请求内容采用 PKCS#7 Padding；将密文原始字节使用标准 Base64 编码后传入。</p>
                     * @return EncryptedData <p>使用 AES-CBC 或 SM4-CBC 加密请求内容得到的密文。加密前请求内容采用 PKCS#7 Padding；将密文原始字节使用标准 Base64 编码后传入。</p>
                     * 
                     */
                    std::string GetEncryptedData() const;

                    /**
                     * 设置<p>使用 AES-CBC 或 SM4-CBC 加密请求内容得到的密文。加密前请求内容采用 PKCS#7 Padding；将密文原始字节使用标准 Base64 编码后传入。</p>
                     * @param _encryptedData <p>使用 AES-CBC 或 SM4-CBC 加密请求内容得到的密文。加密前请求内容采用 PKCS#7 Padding；将密文原始字节使用标准 Base64 编码后传入。</p>
                     * 
                     */
                    void SetEncryptedData(const std::string& _encryptedData);

                    /**
                     * 判断参数 EncryptedData 是否已赋值
                     * @return EncryptedData 是否已赋值
                     * 
                     */
                    bool EncryptedDataHasBeenSet() const;

                    /**
                     * 获取<p>用于校验请求数据完整性。对 IV 原始字节和密文原始字节直接拼接（不加拼接符）后计算 HMAC-SHA256，再将计算结果使用标准 Base64 编码后传入。</p>
                     * @return EncryptionSignature <p>用于校验请求数据完整性。对 IV 原始字节和密文原始字节直接拼接（不加拼接符）后计算 HMAC-SHA256，再将计算结果使用标准 Base64 编码后传入。</p>
                     * 
                     */
                    std::string GetEncryptionSignature() const;

                    /**
                     * 设置<p>用于校验请求数据完整性。对 IV 原始字节和密文原始字节直接拼接（不加拼接符）后计算 HMAC-SHA256，再将计算结果使用标准 Base64 编码后传入。</p>
                     * @param _encryptionSignature <p>用于校验请求数据完整性。对 IV 原始字节和密文原始字节直接拼接（不加拼接符）后计算 HMAC-SHA256，再将计算结果使用标准 Base64 编码后传入。</p>
                     * 
                     */
                    void SetEncryptionSignature(const std::string& _encryptionSignature);

                    /**
                     * 判断参数 EncryptionSignature 是否已赋值
                     * @return EncryptionSignature 是否已赋值
                     * 
                     */
                    bool EncryptionSignatureHasBeenSet() const;

                private:

                    /**
                     * <p>操作的接口名称。取值参考接口文档输入参数章节关于公共参数 Action 的说明。</p>
                     */
                    std::string m_requestAction;
                    bool m_requestActionHasBeenSet;

                    /**
                     * <p>加密算法使用的初始化向量。固定为 16 字节，将 IV 原始字节使用标准 Base64 编码后传入。</p>
                     */
                    std::string m_iV;
                    bool m_iVHasBeenSet;

                    /**
                     * <p>使用 AES-CBC 或 SM4-CBC 加密请求内容得到的密文。加密前请求内容采用 PKCS#7 Padding；将密文原始字节使用标准 Base64 编码后传入。</p>
                     */
                    std::string m_encryptedData;
                    bool m_encryptedDataHasBeenSet;

                    /**
                     * <p>用于校验请求数据完整性。对 IV 原始字节和密文原始字节直接拼接（不加拼接符）后计算 HMAC-SHA256，再将计算结果使用标准 Base64 编码后传入。</p>
                     */
                    std::string m_encryptionSignature;
                    bool m_encryptionSignatureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEREQUESTWITHENCRYPTIONREQUEST_H_
