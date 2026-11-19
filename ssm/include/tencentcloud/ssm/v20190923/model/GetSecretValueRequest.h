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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_GETSECRETVALUEREQUEST_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_GETSECRETVALUEREQUEST_H_

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
                * GetSecretValue请求参数结构体
                */
                class GetSecretValueRequest : public AbstractModel
                {
                public:
                    GetSecretValueRequest();
                    ~GetSecretValueRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>指定凭据的名称。</p>
                     * @return SecretName <p>指定凭据的名称。</p>
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置<p>指定凭据的名称。</p>
                     * @param _secretName <p>指定凭据的名称。</p>
                     * 
                     */
                    void SetSecretName(const std::string& _secretName);

                    /**
                     * 判断参数 SecretName 是否已赋值
                     * @return SecretName 是否已赋值
                     * 
                     */
                    bool SecretNameHasBeenSet() const;

                    /**
                     * 获取<p>指定要读取的凭据版本号。仅传 VersionId 时按该版本号精确读取；云产品及 Redis/MongoDB 凭据可通过 SSM_Current 读取当前版本。</p><p>入参限制：同时指定 VersionStage 时，两者必须指向同一版本，否则返回 ResourceNotFound。</p><p>自定义、云产品及 Redis/MongoDB 凭据在 VersionId 和 VersionStage 均未指定时，默认读取 Stage_Current 标签指向的版本；未设置该标签返回 InvalidParameterValue，不回退到 SSM_Current。</p>
                     * @return VersionId <p>指定要读取的凭据版本号。仅传 VersionId 时按该版本号精确读取；云产品及 Redis/MongoDB 凭据可通过 SSM_Current 读取当前版本。</p><p>入参限制：同时指定 VersionStage 时，两者必须指向同一版本，否则返回 ResourceNotFound。</p><p>自定义、云产品及 Redis/MongoDB 凭据在 VersionId 和 VersionStage 均未指定时，默认读取 Stage_Current 标签指向的版本；未设置该标签返回 InvalidParameterValue，不回退到 SSM_Current。</p>
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置<p>指定要读取的凭据版本号。仅传 VersionId 时按该版本号精确读取；云产品及 Redis/MongoDB 凭据可通过 SSM_Current 读取当前版本。</p><p>入参限制：同时指定 VersionStage 时，两者必须指向同一版本，否则返回 ResourceNotFound。</p><p>自定义、云产品及 Redis/MongoDB 凭据在 VersionId 和 VersionStage 均未指定时，默认读取 Stage_Current 标签指向的版本；未设置该标签返回 InvalidParameterValue，不回退到 SSM_Current。</p>
                     * @param _versionId <p>指定要读取的凭据版本号。仅传 VersionId 时按该版本号精确读取；云产品及 Redis/MongoDB 凭据可通过 SSM_Current 读取当前版本。</p><p>入参限制：同时指定 VersionStage 时，两者必须指向同一版本，否则返回 ResourceNotFound。</p><p>自定义、云产品及 Redis/MongoDB 凭据在 VersionId 和 VersionStage 均未指定时，默认读取 Stage_Current 标签指向的版本；未设置该标签返回 InvalidParameterValue，不回退到 SSM_Current。</p>
                     * 
                     */
                    void SetVersionId(const std::string& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                    /**
                     * 获取<p>用于加密返回凭据值的 PEM 格式公钥，支持 RSA 2048 和 SM2。未指定时，凭据值按原有方式返回。</p>
                     * @return EncryptionPublicKey <p>用于加密返回凭据值的 PEM 格式公钥，支持 RSA 2048 和 SM2。未指定时，凭据值按原有方式返回。</p>
                     * 
                     */
                    std::string GetEncryptionPublicKey() const;

                    /**
                     * 设置<p>用于加密返回凭据值的 PEM 格式公钥，支持 RSA 2048 和 SM2。未指定时，凭据值按原有方式返回。</p>
                     * @param _encryptionPublicKey <p>用于加密返回凭据值的 PEM 格式公钥，支持 RSA 2048 和 SM2。未指定时，凭据值按原有方式返回。</p>
                     * 
                     */
                    void SetEncryptionPublicKey(const std::string& _encryptionPublicKey);

                    /**
                     * 判断参数 EncryptionPublicKey 是否已赋值
                     * @return EncryptionPublicKey 是否已赋值
                     * 
                     */
                    bool EncryptionPublicKeyHasBeenSet() const;

                    /**
                     * 获取<p>非对称加密算法，仅在指定 EncryptionPublicKey 时生效。支持 SM2、SM2_C1C3C2_ASN1、RSAES_PKCS1_V1_5、RSAES_OAEP_SHA_1、RSAES_OAEP_SHA_256，默认值为 SM2。</p>
                     * @return EncryptionAlgorithm <p>非对称加密算法，仅在指定 EncryptionPublicKey 时生效。支持 SM2、SM2_C1C3C2_ASN1、RSAES_PKCS1_V1_5、RSAES_OAEP_SHA_1、RSAES_OAEP_SHA_256，默认值为 SM2。</p>
                     * 
                     */
                    std::string GetEncryptionAlgorithm() const;

                    /**
                     * 设置<p>非对称加密算法，仅在指定 EncryptionPublicKey 时生效。支持 SM2、SM2_C1C3C2_ASN1、RSAES_PKCS1_V1_5、RSAES_OAEP_SHA_1、RSAES_OAEP_SHA_256，默认值为 SM2。</p>
                     * @param _encryptionAlgorithm <p>非对称加密算法，仅在指定 EncryptionPublicKey 时生效。支持 SM2、SM2_C1C3C2_ASN1、RSAES_PKCS1_V1_5、RSAES_OAEP_SHA_1、RSAES_OAEP_SHA_256，默认值为 SM2。</p>
                     * 
                     */
                    void SetEncryptionAlgorithm(const std::string& _encryptionAlgorithm);

                    /**
                     * 判断参数 EncryptionAlgorithm 是否已赋值
                     * @return EncryptionAlgorithm 是否已赋值
                     * 
                     */
                    bool EncryptionAlgorithmHasBeenSet() const;

                    /**
                     * 获取<p>用于选择凭据版本的标签。支持自定义、云产品及 Redis/MongoDB 凭据。</p><p>枚举值：</p><ul><li>Stage_Current： 读取用户设置的当前版本标签所绑定的版本。标签不会自动设置，也不会跟随账号迁移。</li></ul><p>仅支持 Stage_Current，大小写敏感。仅传标签时按绑定关系取值；与 VersionId 同时传入时必须指向同一版本。两者均不传时默认解析 Stage_Current，未设置该标签返回 InvalidParameterValue。</p>
                     * @return VersionStage <p>用于选择凭据版本的标签。支持自定义、云产品及 Redis/MongoDB 凭据。</p><p>枚举值：</p><ul><li>Stage_Current： 读取用户设置的当前版本标签所绑定的版本。标签不会自动设置，也不会跟随账号迁移。</li></ul><p>仅支持 Stage_Current，大小写敏感。仅传标签时按绑定关系取值；与 VersionId 同时传入时必须指向同一版本。两者均不传时默认解析 Stage_Current，未设置该标签返回 InvalidParameterValue。</p>
                     * 
                     */
                    std::string GetVersionStage() const;

                    /**
                     * 设置<p>用于选择凭据版本的标签。支持自定义、云产品及 Redis/MongoDB 凭据。</p><p>枚举值：</p><ul><li>Stage_Current： 读取用户设置的当前版本标签所绑定的版本。标签不会自动设置，也不会跟随账号迁移。</li></ul><p>仅支持 Stage_Current，大小写敏感。仅传标签时按绑定关系取值；与 VersionId 同时传入时必须指向同一版本。两者均不传时默认解析 Stage_Current，未设置该标签返回 InvalidParameterValue。</p>
                     * @param _versionStage <p>用于选择凭据版本的标签。支持自定义、云产品及 Redis/MongoDB 凭据。</p><p>枚举值：</p><ul><li>Stage_Current： 读取用户设置的当前版本标签所绑定的版本。标签不会自动设置，也不会跟随账号迁移。</li></ul><p>仅支持 Stage_Current，大小写敏感。仅传标签时按绑定关系取值；与 VersionId 同时传入时必须指向同一版本。两者均不传时默认解析 Stage_Current，未设置该标签返回 InvalidParameterValue。</p>
                     * 
                     */
                    void SetVersionStage(const std::string& _versionStage);

                    /**
                     * 判断参数 VersionStage 是否已赋值
                     * @return VersionStage 是否已赋值
                     * 
                     */
                    bool VersionStageHasBeenSet() const;

                private:

                    /**
                     * <p>指定凭据的名称。</p>
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * <p>指定要读取的凭据版本号。仅传 VersionId 时按该版本号精确读取；云产品及 Redis/MongoDB 凭据可通过 SSM_Current 读取当前版本。</p><p>入参限制：同时指定 VersionStage 时，两者必须指向同一版本，否则返回 ResourceNotFound。</p><p>自定义、云产品及 Redis/MongoDB 凭据在 VersionId 和 VersionStage 均未指定时，默认读取 Stage_Current 标签指向的版本；未设置该标签返回 InvalidParameterValue，不回退到 SSM_Current。</p>
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * <p>用于加密返回凭据值的 PEM 格式公钥，支持 RSA 2048 和 SM2。未指定时，凭据值按原有方式返回。</p>
                     */
                    std::string m_encryptionPublicKey;
                    bool m_encryptionPublicKeyHasBeenSet;

                    /**
                     * <p>非对称加密算法，仅在指定 EncryptionPublicKey 时生效。支持 SM2、SM2_C1C3C2_ASN1、RSAES_PKCS1_V1_5、RSAES_OAEP_SHA_1、RSAES_OAEP_SHA_256，默认值为 SM2。</p>
                     */
                    std::string m_encryptionAlgorithm;
                    bool m_encryptionAlgorithmHasBeenSet;

                    /**
                     * <p>用于选择凭据版本的标签。支持自定义、云产品及 Redis/MongoDB 凭据。</p><p>枚举值：</p><ul><li>Stage_Current： 读取用户设置的当前版本标签所绑定的版本。标签不会自动设置，也不会跟随账号迁移。</li></ul><p>仅支持 Stage_Current，大小写敏感。仅传标签时按绑定关系取值；与 VersionId 同时传入时必须指向同一版本。两者均不传时默认解析 Stage_Current，未设置该标签返回 InvalidParameterValue。</p>
                     */
                    std::string m_versionStage;
                    bool m_versionStageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_GETSECRETVALUEREQUEST_H_
