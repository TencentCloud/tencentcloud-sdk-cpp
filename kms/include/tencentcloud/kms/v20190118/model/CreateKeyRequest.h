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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_CREATEKEYREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_CREATEKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/kms/v20190118/model/Tag.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * CreateKey请求参数结构体
                */
                class CreateKeyRequest : public AbstractModel
                {
                public:
                    CreateKeyRequest();
                    ~CreateKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>作为密钥更容易辨识，更容易被人看懂的别名， 不可为空，1-60个字母数字 - _ 的组合，首字符必须为字母或者数字。以 kms- 作为前缀的用于云产品使用，Alias 不可重复。</p>
                     * @return Alias <p>作为密钥更容易辨识，更容易被人看懂的别名， 不可为空，1-60个字母数字 - _ 的组合，首字符必须为字母或者数字。以 kms- 作为前缀的用于云产品使用，Alias 不可重复。</p>
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置<p>作为密钥更容易辨识，更容易被人看懂的别名， 不可为空，1-60个字母数字 - _ 的组合，首字符必须为字母或者数字。以 kms- 作为前缀的用于云产品使用，Alias 不可重复。</p>
                     * @param _alias <p>作为密钥更容易辨识，更容易被人看懂的别名， 不可为空，1-60个字母数字 - _ 的组合，首字符必须为字母或者数字。以 kms- 作为前缀的用于云产品使用，Alias 不可重复。</p>
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取<p>CMK 的描述，最大1024字节</p>
                     * @return Description <p>CMK 的描述，最大1024字节</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>CMK 的描述，最大1024字节</p>
                     * @param _description <p>CMK 的描述，最大1024字节</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>指定key的用途，默认为  &quot;ENCRYPT_DECRYPT&quot; 表示创建对称加解密密钥，其它支持用途 “ASYMMETRIC_DECRYPT_RSA_2048” 表示创建用于加解密的RSA2048非对称密钥，“ASYMMETRIC_DECRYPT_RSA_3072”表示创建用于加解密的RSA3072非对称密钥，“ASYMMETRIC_DECRYPT_RSA_4096”表示创建用于加解密的RSA4096非对称密钥，“ASYMMETRIC_DECRYPT_SM2” 表示创建用于加解密的SM2非对称密钥，“ASYMMETRIC_SIGN_VERIFY_SM2” 表示创建用于签名验签的SM2非对称密钥，“ASYMMETRIC_SIGN_VERIFY_ECC” 表示创建用于签名验签的ECC非对称密钥，“ASYMMETRIC_SIGN_VERIFY_RSA_2048” 表示创建用于签名验签的RSA_2048非对称密钥，“ASYMMETRIC_SIGN_VERIFY_RSA_3072” 表示创建用于签名验签的RSA_3072非对称密钥，<br>“ASYMMETRIC_SIGN_VERIFY_RSA_4096” 表示创建用于签名验签的RSA_4096非对称密钥，“ASYMMETRIC_SIGN_VERIFY_ECDSA384”表示创建用于签名验签的 ECDSA384 非对称密钥。完整的密钥用途与算法支持列表可通过 ListAlgorithms 接口获取。</p>
                     * @return KeyUsage <p>指定key的用途，默认为  &quot;ENCRYPT_DECRYPT&quot; 表示创建对称加解密密钥，其它支持用途 “ASYMMETRIC_DECRYPT_RSA_2048” 表示创建用于加解密的RSA2048非对称密钥，“ASYMMETRIC_DECRYPT_RSA_3072”表示创建用于加解密的RSA3072非对称密钥，“ASYMMETRIC_DECRYPT_RSA_4096”表示创建用于加解密的RSA4096非对称密钥，“ASYMMETRIC_DECRYPT_SM2” 表示创建用于加解密的SM2非对称密钥，“ASYMMETRIC_SIGN_VERIFY_SM2” 表示创建用于签名验签的SM2非对称密钥，“ASYMMETRIC_SIGN_VERIFY_ECC” 表示创建用于签名验签的ECC非对称密钥，“ASYMMETRIC_SIGN_VERIFY_RSA_2048” 表示创建用于签名验签的RSA_2048非对称密钥，“ASYMMETRIC_SIGN_VERIFY_RSA_3072” 表示创建用于签名验签的RSA_3072非对称密钥，<br>“ASYMMETRIC_SIGN_VERIFY_RSA_4096” 表示创建用于签名验签的RSA_4096非对称密钥，“ASYMMETRIC_SIGN_VERIFY_ECDSA384”表示创建用于签名验签的 ECDSA384 非对称密钥。完整的密钥用途与算法支持列表可通过 ListAlgorithms 接口获取。</p>
                     * 
                     */
                    std::string GetKeyUsage() const;

                    /**
                     * 设置<p>指定key的用途，默认为  &quot;ENCRYPT_DECRYPT&quot; 表示创建对称加解密密钥，其它支持用途 “ASYMMETRIC_DECRYPT_RSA_2048” 表示创建用于加解密的RSA2048非对称密钥，“ASYMMETRIC_DECRYPT_RSA_3072”表示创建用于加解密的RSA3072非对称密钥，“ASYMMETRIC_DECRYPT_RSA_4096”表示创建用于加解密的RSA4096非对称密钥，“ASYMMETRIC_DECRYPT_SM2” 表示创建用于加解密的SM2非对称密钥，“ASYMMETRIC_SIGN_VERIFY_SM2” 表示创建用于签名验签的SM2非对称密钥，“ASYMMETRIC_SIGN_VERIFY_ECC” 表示创建用于签名验签的ECC非对称密钥，“ASYMMETRIC_SIGN_VERIFY_RSA_2048” 表示创建用于签名验签的RSA_2048非对称密钥，“ASYMMETRIC_SIGN_VERIFY_RSA_3072” 表示创建用于签名验签的RSA_3072非对称密钥，<br>“ASYMMETRIC_SIGN_VERIFY_RSA_4096” 表示创建用于签名验签的RSA_4096非对称密钥，“ASYMMETRIC_SIGN_VERIFY_ECDSA384”表示创建用于签名验签的 ECDSA384 非对称密钥。完整的密钥用途与算法支持列表可通过 ListAlgorithms 接口获取。</p>
                     * @param _keyUsage <p>指定key的用途，默认为  &quot;ENCRYPT_DECRYPT&quot; 表示创建对称加解密密钥，其它支持用途 “ASYMMETRIC_DECRYPT_RSA_2048” 表示创建用于加解密的RSA2048非对称密钥，“ASYMMETRIC_DECRYPT_RSA_3072”表示创建用于加解密的RSA3072非对称密钥，“ASYMMETRIC_DECRYPT_RSA_4096”表示创建用于加解密的RSA4096非对称密钥，“ASYMMETRIC_DECRYPT_SM2” 表示创建用于加解密的SM2非对称密钥，“ASYMMETRIC_SIGN_VERIFY_SM2” 表示创建用于签名验签的SM2非对称密钥，“ASYMMETRIC_SIGN_VERIFY_ECC” 表示创建用于签名验签的ECC非对称密钥，“ASYMMETRIC_SIGN_VERIFY_RSA_2048” 表示创建用于签名验签的RSA_2048非对称密钥，“ASYMMETRIC_SIGN_VERIFY_RSA_3072” 表示创建用于签名验签的RSA_3072非对称密钥，<br>“ASYMMETRIC_SIGN_VERIFY_RSA_4096” 表示创建用于签名验签的RSA_4096非对称密钥，“ASYMMETRIC_SIGN_VERIFY_ECDSA384”表示创建用于签名验签的 ECDSA384 非对称密钥。完整的密钥用途与算法支持列表可通过 ListAlgorithms 接口获取。</p>
                     * 
                     */
                    void SetKeyUsage(const std::string& _keyUsage);

                    /**
                     * 判断参数 KeyUsage 是否已赋值
                     * @return KeyUsage 是否已赋值
                     * 
                     */
                    bool KeyUsageHasBeenSet() const;

                    /**
                     * 获取<p>指定key类型，默认为1，1表示默认类型，由KMS创建CMK密钥，2 表示EXTERNAL 类型，该类型需要用户导入密钥材料，参考 GetParametersForImport 和 ImportKeyMaterial 接口</p>
                     * @return Type <p>指定key类型，默认为1，1表示默认类型，由KMS创建CMK密钥，2 表示EXTERNAL 类型，该类型需要用户导入密钥材料，参考 GetParametersForImport 和 ImportKeyMaterial 接口</p>
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置<p>指定key类型，默认为1，1表示默认类型，由KMS创建CMK密钥，2 表示EXTERNAL 类型，该类型需要用户导入密钥材料，参考 GetParametersForImport 和 ImportKeyMaterial 接口</p>
                     * @param _type <p>指定key类型，默认为1，1表示默认类型，由KMS创建CMK密钥，2 表示EXTERNAL 类型，该类型需要用户导入密钥材料，参考 GetParametersForImport 和 ImportKeyMaterial 接口</p>
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>标签列表</p>
                     * @return Tags <p>标签列表</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签列表</p>
                     * @param _tags <p>标签列表</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>KMS 高级版对应的 HSM 集群 ID（仅对 KMS 独占版/托管版服务实例有效）。</p>
                     * @return HsmClusterId <p>KMS 高级版对应的 HSM 集群 ID（仅对 KMS 独占版/托管版服务实例有效）。</p>
                     * 
                     */
                    std::string GetHsmClusterId() const;

                    /**
                     * 设置<p>KMS 高级版对应的 HSM 集群 ID（仅对 KMS 独占版/托管版服务实例有效）。</p>
                     * @param _hsmClusterId <p>KMS 高级版对应的 HSM 集群 ID（仅对 KMS 独占版/托管版服务实例有效）。</p>
                     * 
                     */
                    void SetHsmClusterId(const std::string& _hsmClusterId);

                    /**
                     * 判断参数 HsmClusterId 是否已赋值
                     * @return HsmClusterId 是否已赋值
                     * 
                     */
                    bool HsmClusterIdHasBeenSet() const;

                private:

                    /**
                     * <p>作为密钥更容易辨识，更容易被人看懂的别名， 不可为空，1-60个字母数字 - _ 的组合，首字符必须为字母或者数字。以 kms- 作为前缀的用于云产品使用，Alias 不可重复。</p>
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * <p>CMK 的描述，最大1024字节</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>指定key的用途，默认为  &quot;ENCRYPT_DECRYPT&quot; 表示创建对称加解密密钥，其它支持用途 “ASYMMETRIC_DECRYPT_RSA_2048” 表示创建用于加解密的RSA2048非对称密钥，“ASYMMETRIC_DECRYPT_RSA_3072”表示创建用于加解密的RSA3072非对称密钥，“ASYMMETRIC_DECRYPT_RSA_4096”表示创建用于加解密的RSA4096非对称密钥，“ASYMMETRIC_DECRYPT_SM2” 表示创建用于加解密的SM2非对称密钥，“ASYMMETRIC_SIGN_VERIFY_SM2” 表示创建用于签名验签的SM2非对称密钥，“ASYMMETRIC_SIGN_VERIFY_ECC” 表示创建用于签名验签的ECC非对称密钥，“ASYMMETRIC_SIGN_VERIFY_RSA_2048” 表示创建用于签名验签的RSA_2048非对称密钥，“ASYMMETRIC_SIGN_VERIFY_RSA_3072” 表示创建用于签名验签的RSA_3072非对称密钥，<br>“ASYMMETRIC_SIGN_VERIFY_RSA_4096” 表示创建用于签名验签的RSA_4096非对称密钥，“ASYMMETRIC_SIGN_VERIFY_ECDSA384”表示创建用于签名验签的 ECDSA384 非对称密钥。完整的密钥用途与算法支持列表可通过 ListAlgorithms 接口获取。</p>
                     */
                    std::string m_keyUsage;
                    bool m_keyUsageHasBeenSet;

                    /**
                     * <p>指定key类型，默认为1，1表示默认类型，由KMS创建CMK密钥，2 表示EXTERNAL 类型，该类型需要用户导入密钥材料，参考 GetParametersForImport 和 ImportKeyMaterial 接口</p>
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>标签列表</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>KMS 高级版对应的 HSM 集群 ID（仅对 KMS 独占版/托管版服务实例有效）。</p>
                     */
                    std::string m_hsmClusterId;
                    bool m_hsmClusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_CREATEKEYREQUEST_H_
