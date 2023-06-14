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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_GETPARAMETERSFORIMPORTREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_GETPARAMETERSFORIMPORTREQUEST_H_

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
                * GetParametersForImport请求参数结构体
                */
                class GetParametersForImportRequest : public AbstractModel
                {
                public:
                    GetParametersForImportRequest();
                    ~GetParametersForImportRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CMK的唯一标识，获取密钥参数的CMK必须是EXTERNAL类型，即在CreateKey时指定Type=2 类型的CMK。
                     * @return KeyId CMK的唯一标识，获取密钥参数的CMK必须是EXTERNAL类型，即在CreateKey时指定Type=2 类型的CMK。
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置CMK的唯一标识，获取密钥参数的CMK必须是EXTERNAL类型，即在CreateKey时指定Type=2 类型的CMK。
                     * @param _keyId CMK的唯一标识，获取密钥参数的CMK必须是EXTERNAL类型，即在CreateKey时指定Type=2 类型的CMK。
                     * 
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取指定加密密钥材料的算法，目前支持RSAES_PKCS1_V1_5、RSAES_OAEP_SHA_1、RSAES_OAEP_SHA_256
                     * @return WrappingAlgorithm 指定加密密钥材料的算法，目前支持RSAES_PKCS1_V1_5、RSAES_OAEP_SHA_1、RSAES_OAEP_SHA_256
                     * 
                     */
                    std::string GetWrappingAlgorithm() const;

                    /**
                     * 设置指定加密密钥材料的算法，目前支持RSAES_PKCS1_V1_5、RSAES_OAEP_SHA_1、RSAES_OAEP_SHA_256
                     * @param _wrappingAlgorithm 指定加密密钥材料的算法，目前支持RSAES_PKCS1_V1_5、RSAES_OAEP_SHA_1、RSAES_OAEP_SHA_256
                     * 
                     */
                    void SetWrappingAlgorithm(const std::string& _wrappingAlgorithm);

                    /**
                     * 判断参数 WrappingAlgorithm 是否已赋值
                     * @return WrappingAlgorithm 是否已赋值
                     * 
                     */
                    bool WrappingAlgorithmHasBeenSet() const;

                    /**
                     * 获取指定加密密钥材料的类型，目前只支持RSA_2048
                     * @return WrappingKeySpec 指定加密密钥材料的类型，目前只支持RSA_2048
                     * 
                     */
                    std::string GetWrappingKeySpec() const;

                    /**
                     * 设置指定加密密钥材料的类型，目前只支持RSA_2048
                     * @param _wrappingKeySpec 指定加密密钥材料的类型，目前只支持RSA_2048
                     * 
                     */
                    void SetWrappingKeySpec(const std::string& _wrappingKeySpec);

                    /**
                     * 判断参数 WrappingKeySpec 是否已赋值
                     * @return WrappingKeySpec 是否已赋值
                     * 
                     */
                    bool WrappingKeySpecHasBeenSet() const;

                private:

                    /**
                     * CMK的唯一标识，获取密钥参数的CMK必须是EXTERNAL类型，即在CreateKey时指定Type=2 类型的CMK。
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * 指定加密密钥材料的算法，目前支持RSAES_PKCS1_V1_5、RSAES_OAEP_SHA_1、RSAES_OAEP_SHA_256
                     */
                    std::string m_wrappingAlgorithm;
                    bool m_wrappingAlgorithmHasBeenSet;

                    /**
                     * 指定加密密钥材料的类型，目前只支持RSA_2048
                     */
                    std::string m_wrappingKeySpec;
                    bool m_wrappingKeySpecHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_GETPARAMETERSFORIMPORTREQUEST_H_
