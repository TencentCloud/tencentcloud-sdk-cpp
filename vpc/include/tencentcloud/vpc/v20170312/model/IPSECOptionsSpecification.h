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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_IPSECOPTIONSSPECIFICATION_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_IPSECOPTIONSSPECIFICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * IPSec配置，腾讯云提供IPSec安全会话设置
                */
                class IPSECOptionsSpecification : public AbstractModel
                {
                public:
                    IPSECOptionsSpecification();
                    ~IPSECOptionsSpecification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>加密算法，可选值：&#39;3DES-CBC&#39;, &#39;AES-CBC-128&#39;, &#39;AES-CBC-192&#39;, &#39;AES-CBC-256&#39;, &#39;DES-CBC&#39;, &#39;SM4&#39;, &#39;NULL&#39;， 默认为AES-CBC-128</p>
                     * @return EncryptAlgorithm <p>加密算法，可选值：&#39;3DES-CBC&#39;, &#39;AES-CBC-128&#39;, &#39;AES-CBC-192&#39;, &#39;AES-CBC-256&#39;, &#39;DES-CBC&#39;, &#39;SM4&#39;, &#39;NULL&#39;， 默认为AES-CBC-128</p>
                     * 
                     */
                    std::string GetEncryptAlgorithm() const;

                    /**
                     * 设置<p>加密算法，可选值：&#39;3DES-CBC&#39;, &#39;AES-CBC-128&#39;, &#39;AES-CBC-192&#39;, &#39;AES-CBC-256&#39;, &#39;DES-CBC&#39;, &#39;SM4&#39;, &#39;NULL&#39;， 默认为AES-CBC-128</p>
                     * @param _encryptAlgorithm <p>加密算法，可选值：&#39;3DES-CBC&#39;, &#39;AES-CBC-128&#39;, &#39;AES-CBC-192&#39;, &#39;AES-CBC-256&#39;, &#39;DES-CBC&#39;, &#39;SM4&#39;, &#39;NULL&#39;， 默认为AES-CBC-128</p>
                     * 
                     */
                    void SetEncryptAlgorithm(const std::string& _encryptAlgorithm);

                    /**
                     * 判断参数 EncryptAlgorithm 是否已赋值
                     * @return EncryptAlgorithm 是否已赋值
                     * 
                     */
                    bool EncryptAlgorithmHasBeenSet() const;

                    /**
                     * 获取<p>认证算法：可选值：&#39;MD5&#39;, &#39;SHA1&#39;，&#39;SHA-256&#39; 默认为</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IntegrityAlgorith <p>认证算法：可选值：&#39;MD5&#39;, &#39;SHA1&#39;，&#39;SHA-256&#39; 默认为</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetIntegrityAlgorith() const;

                    /**
                     * 设置<p>认证算法：可选值：&#39;MD5&#39;, &#39;SHA1&#39;，&#39;SHA-256&#39; 默认为</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _integrityAlgorith <p>认证算法：可选值：&#39;MD5&#39;, &#39;SHA1&#39;，&#39;SHA-256&#39; 默认为</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetIntegrityAlgorith(const std::string& _integrityAlgorith);

                    /**
                     * 判断参数 IntegrityAlgorith 是否已赋值
                     * @return IntegrityAlgorith 是否已赋值
                     * @deprecated
                     */
                    bool IntegrityAlgorithHasBeenSet() const;

                    /**
                     * 获取<p>IPsec SA lifetime(s)</p><p>取值范围：[180, 604800]</p><p>单位：秒</p><p>默认值：14400</p>
                     * @return IPSECSaLifetimeSeconds <p>IPsec SA lifetime(s)</p><p>取值范围：[180, 604800]</p><p>单位：秒</p><p>默认值：14400</p>
                     * 
                     */
                    uint64_t GetIPSECSaLifetimeSeconds() const;

                    /**
                     * 设置<p>IPsec SA lifetime(s)</p><p>取值范围：[180, 604800]</p><p>单位：秒</p><p>默认值：14400</p>
                     * @param _iPSECSaLifetimeSeconds <p>IPsec SA lifetime(s)</p><p>取值范围：[180, 604800]</p><p>单位：秒</p><p>默认值：14400</p>
                     * 
                     */
                    void SetIPSECSaLifetimeSeconds(const uint64_t& _iPSECSaLifetimeSeconds);

                    /**
                     * 判断参数 IPSECSaLifetimeSeconds 是否已赋值
                     * @return IPSECSaLifetimeSeconds 是否已赋值
                     * 
                     */
                    bool IPSECSaLifetimeSecondsHasBeenSet() const;

                    /**
                     * 获取<p>PFS：可选值：&#39;NULL&#39;, &#39;DH-GROUP1&#39;, &#39;DH-GROUP2&#39;, &#39;DH-GROUP5&#39;, &#39;DH-GROUP14&#39;, &#39;DH-GROUP15&#39;,&#39;DH-GROUP16&#39;,&#39;DH-GROUP19&#39;,&#39;DH-GROUP20&#39;,&#39;DH-GROUP21&#39;,&#39;DH-GROUP24&#39;，默认为NULL</p>
                     * @return PfsDhGroup <p>PFS：可选值：&#39;NULL&#39;, &#39;DH-GROUP1&#39;, &#39;DH-GROUP2&#39;, &#39;DH-GROUP5&#39;, &#39;DH-GROUP14&#39;, &#39;DH-GROUP15&#39;,&#39;DH-GROUP16&#39;,&#39;DH-GROUP19&#39;,&#39;DH-GROUP20&#39;,&#39;DH-GROUP21&#39;,&#39;DH-GROUP24&#39;，默认为NULL</p>
                     * 
                     */
                    std::string GetPfsDhGroup() const;

                    /**
                     * 设置<p>PFS：可选值：&#39;NULL&#39;, &#39;DH-GROUP1&#39;, &#39;DH-GROUP2&#39;, &#39;DH-GROUP5&#39;, &#39;DH-GROUP14&#39;, &#39;DH-GROUP15&#39;,&#39;DH-GROUP16&#39;,&#39;DH-GROUP19&#39;,&#39;DH-GROUP20&#39;,&#39;DH-GROUP21&#39;,&#39;DH-GROUP24&#39;，默认为NULL</p>
                     * @param _pfsDhGroup <p>PFS：可选值：&#39;NULL&#39;, &#39;DH-GROUP1&#39;, &#39;DH-GROUP2&#39;, &#39;DH-GROUP5&#39;, &#39;DH-GROUP14&#39;, &#39;DH-GROUP15&#39;,&#39;DH-GROUP16&#39;,&#39;DH-GROUP19&#39;,&#39;DH-GROUP20&#39;,&#39;DH-GROUP21&#39;,&#39;DH-GROUP24&#39;，默认为NULL</p>
                     * 
                     */
                    void SetPfsDhGroup(const std::string& _pfsDhGroup);

                    /**
                     * 判断参数 PfsDhGroup 是否已赋值
                     * @return PfsDhGroup 是否已赋值
                     * 
                     */
                    bool PfsDhGroupHasBeenSet() const;

                    /**
                     * 获取<p>IPsec SA lifetime(KB)</p><p>取值范围：[2560, 4294967295]</p><p>单位：KB</p><p>默认值：4096000000</p>
                     * @return IPSECSaLifetimeTraffic <p>IPsec SA lifetime(KB)</p><p>取值范围：[2560, 4294967295]</p><p>单位：KB</p><p>默认值：4096000000</p>
                     * 
                     */
                    uint64_t GetIPSECSaLifetimeTraffic() const;

                    /**
                     * 设置<p>IPsec SA lifetime(KB)</p><p>取值范围：[2560, 4294967295]</p><p>单位：KB</p><p>默认值：4096000000</p>
                     * @param _iPSECSaLifetimeTraffic <p>IPsec SA lifetime(KB)</p><p>取值范围：[2560, 4294967295]</p><p>单位：KB</p><p>默认值：4096000000</p>
                     * 
                     */
                    void SetIPSECSaLifetimeTraffic(const uint64_t& _iPSECSaLifetimeTraffic);

                    /**
                     * 判断参数 IPSECSaLifetimeTraffic 是否已赋值
                     * @return IPSECSaLifetimeTraffic 是否已赋值
                     * 
                     */
                    bool IPSECSaLifetimeTrafficHasBeenSet() const;

                    /**
                     * 获取<p>认证算法：可选值：&#39;MD5&#39;, &#39;SHA1&#39;，&#39;SHA-256&#39; 默认为</p>
                     * @return IntegrityAlgorithm <p>认证算法：可选值：&#39;MD5&#39;, &#39;SHA1&#39;，&#39;SHA-256&#39; 默认为</p>
                     * 
                     */
                    std::string GetIntegrityAlgorithm() const;

                    /**
                     * 设置<p>认证算法：可选值：&#39;MD5&#39;, &#39;SHA1&#39;，&#39;SHA-256&#39; 默认为</p>
                     * @param _integrityAlgorithm <p>认证算法：可选值：&#39;MD5&#39;, &#39;SHA1&#39;，&#39;SHA-256&#39; 默认为</p>
                     * 
                     */
                    void SetIntegrityAlgorithm(const std::string& _integrityAlgorithm);

                    /**
                     * 判断参数 IntegrityAlgorithm 是否已赋值
                     * @return IntegrityAlgorithm 是否已赋值
                     * 
                     */
                    bool IntegrityAlgorithmHasBeenSet() const;

                private:

                    /**
                     * <p>加密算法，可选值：&#39;3DES-CBC&#39;, &#39;AES-CBC-128&#39;, &#39;AES-CBC-192&#39;, &#39;AES-CBC-256&#39;, &#39;DES-CBC&#39;, &#39;SM4&#39;, &#39;NULL&#39;， 默认为AES-CBC-128</p>
                     */
                    std::string m_encryptAlgorithm;
                    bool m_encryptAlgorithmHasBeenSet;

                    /**
                     * <p>认证算法：可选值：&#39;MD5&#39;, &#39;SHA1&#39;，&#39;SHA-256&#39; 默认为</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_integrityAlgorith;
                    bool m_integrityAlgorithHasBeenSet;

                    /**
                     * <p>IPsec SA lifetime(s)</p><p>取值范围：[180, 604800]</p><p>单位：秒</p><p>默认值：14400</p>
                     */
                    uint64_t m_iPSECSaLifetimeSeconds;
                    bool m_iPSECSaLifetimeSecondsHasBeenSet;

                    /**
                     * <p>PFS：可选值：&#39;NULL&#39;, &#39;DH-GROUP1&#39;, &#39;DH-GROUP2&#39;, &#39;DH-GROUP5&#39;, &#39;DH-GROUP14&#39;, &#39;DH-GROUP15&#39;,&#39;DH-GROUP16&#39;,&#39;DH-GROUP19&#39;,&#39;DH-GROUP20&#39;,&#39;DH-GROUP21&#39;,&#39;DH-GROUP24&#39;，默认为NULL</p>
                     */
                    std::string m_pfsDhGroup;
                    bool m_pfsDhGroupHasBeenSet;

                    /**
                     * <p>IPsec SA lifetime(KB)</p><p>取值范围：[2560, 4294967295]</p><p>单位：KB</p><p>默认值：4096000000</p>
                     */
                    uint64_t m_iPSECSaLifetimeTraffic;
                    bool m_iPSECSaLifetimeTrafficHasBeenSet;

                    /**
                     * <p>认证算法：可选值：&#39;MD5&#39;, &#39;SHA1&#39;，&#39;SHA-256&#39; 默认为</p>
                     */
                    std::string m_integrityAlgorithm;
                    bool m_integrityAlgorithmHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_IPSECOPTIONSSPECIFICATION_H_
