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
                     * 获取加密算法，可选值：'3DES-CBC', 'AES-CBC-128', 'AES-CBC-192', 'AES-CBC-256', 'DES-CBC', 'SM4', 'NULL'， 默认为AES-CBC-128
                     * @return EncryptAlgorithm 加密算法，可选值：'3DES-CBC', 'AES-CBC-128', 'AES-CBC-192', 'AES-CBC-256', 'DES-CBC', 'SM4', 'NULL'， 默认为AES-CBC-128
                     * 
                     */
                    std::string GetEncryptAlgorithm() const;

                    /**
                     * 设置加密算法，可选值：'3DES-CBC', 'AES-CBC-128', 'AES-CBC-192', 'AES-CBC-256', 'DES-CBC', 'SM4', 'NULL'， 默认为AES-CBC-128
                     * @param _encryptAlgorithm 加密算法，可选值：'3DES-CBC', 'AES-CBC-128', 'AES-CBC-192', 'AES-CBC-256', 'DES-CBC', 'SM4', 'NULL'， 默认为AES-CBC-128
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
                     * 获取认证算法：可选值：'MD5', 'SHA1'，'SHA-256' 默认为
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IntegrityAlgorith 认证算法：可选值：'MD5', 'SHA1'，'SHA-256' 默认为
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetIntegrityAlgorith() const;

                    /**
                     * 设置认证算法：可选值：'MD5', 'SHA1'，'SHA-256' 默认为
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _integrityAlgorith 认证算法：可选值：'MD5', 'SHA1'，'SHA-256' 默认为
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
                     * 获取IPsec SA lifetime(s)：单位秒，取值范围：180-604800
                     * @return IPSECSaLifetimeSeconds IPsec SA lifetime(s)：单位秒，取值范围：180-604800
                     * 
                     */
                    uint64_t GetIPSECSaLifetimeSeconds() const;

                    /**
                     * 设置IPsec SA lifetime(s)：单位秒，取值范围：180-604800
                     * @param _iPSECSaLifetimeSeconds IPsec SA lifetime(s)：单位秒，取值范围：180-604800
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
                     * 获取PFS：可选值：'NULL', 'DH-GROUP1', 'DH-GROUP2', 'DH-GROUP5', 'DH-GROUP14', 'DH-GROUP24'，默认为NULL
                     * @return PfsDhGroup PFS：可选值：'NULL', 'DH-GROUP1', 'DH-GROUP2', 'DH-GROUP5', 'DH-GROUP14', 'DH-GROUP24'，默认为NULL
                     * 
                     */
                    std::string GetPfsDhGroup() const;

                    /**
                     * 设置PFS：可选值：'NULL', 'DH-GROUP1', 'DH-GROUP2', 'DH-GROUP5', 'DH-GROUP14', 'DH-GROUP24'，默认为NULL
                     * @param _pfsDhGroup PFS：可选值：'NULL', 'DH-GROUP1', 'DH-GROUP2', 'DH-GROUP5', 'DH-GROUP14', 'DH-GROUP24'，默认为NULL
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
                     * 获取IPsec SA lifetime(KB)：单位KB，取值范围：2560-604800
                     * @return IPSECSaLifetimeTraffic IPsec SA lifetime(KB)：单位KB，取值范围：2560-604800
                     * 
                     */
                    uint64_t GetIPSECSaLifetimeTraffic() const;

                    /**
                     * 设置IPsec SA lifetime(KB)：单位KB，取值范围：2560-604800
                     * @param _iPSECSaLifetimeTraffic IPsec SA lifetime(KB)：单位KB，取值范围：2560-604800
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
                     * 获取认证算法：可选值：'MD5', 'SHA1'，'SHA-256' 默认为
                     * @return IntegrityAlgorithm 认证算法：可选值：'MD5', 'SHA1'，'SHA-256' 默认为
                     * 
                     */
                    std::string GetIntegrityAlgorithm() const;

                    /**
                     * 设置认证算法：可选值：'MD5', 'SHA1'，'SHA-256' 默认为
                     * @param _integrityAlgorithm 认证算法：可选值：'MD5', 'SHA1'，'SHA-256' 默认为
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
                     * 加密算法，可选值：'3DES-CBC', 'AES-CBC-128', 'AES-CBC-192', 'AES-CBC-256', 'DES-CBC', 'SM4', 'NULL'， 默认为AES-CBC-128
                     */
                    std::string m_encryptAlgorithm;
                    bool m_encryptAlgorithmHasBeenSet;

                    /**
                     * 认证算法：可选值：'MD5', 'SHA1'，'SHA-256' 默认为
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_integrityAlgorith;
                    bool m_integrityAlgorithHasBeenSet;

                    /**
                     * IPsec SA lifetime(s)：单位秒，取值范围：180-604800
                     */
                    uint64_t m_iPSECSaLifetimeSeconds;
                    bool m_iPSECSaLifetimeSecondsHasBeenSet;

                    /**
                     * PFS：可选值：'NULL', 'DH-GROUP1', 'DH-GROUP2', 'DH-GROUP5', 'DH-GROUP14', 'DH-GROUP24'，默认为NULL
                     */
                    std::string m_pfsDhGroup;
                    bool m_pfsDhGroupHasBeenSet;

                    /**
                     * IPsec SA lifetime(KB)：单位KB，取值范围：2560-604800
                     */
                    uint64_t m_iPSECSaLifetimeTraffic;
                    bool m_iPSECSaLifetimeTrafficHasBeenSet;

                    /**
                     * 认证算法：可选值：'MD5', 'SHA1'，'SHA-256' 默认为
                     */
                    std::string m_integrityAlgorithm;
                    bool m_integrityAlgorithmHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_IPSECOPTIONSSPECIFICATION_H_
