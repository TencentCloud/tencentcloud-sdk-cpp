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

#ifndef TENCENTCLOUD_CETCD_V20220325_MODEL_ETCDCREDENTIAL_H_
#define TENCENTCLOUD_CETCD_V20220325_MODEL_ETCDCREDENTIAL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cetcd
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * etcd访问凭证
                */
                class EtcdCredential : public AbstractModel
                {
                public:
                    EtcdCredential();
                    ~EtcdCredential() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CA证书
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CACert CA证书
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCACert() const;

                    /**
                     * 设置CA证书
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cACert CA证书
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCACert(const std::string& _cACert);

                    /**
                     * 判断参数 CACert 是否已赋值
                     * @return CACert 是否已赋值
                     * 
                     */
                    bool CACertHasBeenSet() const;

                    /**
                     * 获取证书
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cert 证书
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCert() const;

                    /**
                     * 设置证书
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cert 证书
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCert(const std::string& _cert);

                    /**
                     * 判断参数 Cert 是否已赋值
                     * @return Cert 是否已赋值
                     * 
                     */
                    bool CertHasBeenSet() const;

                    /**
                     * 获取私钥
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Key 私钥
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置私钥
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _key 私钥
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                private:

                    /**
                     * CA证书
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cACert;
                    bool m_cACertHasBeenSet;

                    /**
                     * 证书
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cert;
                    bool m_certHasBeenSet;

                    /**
                     * 私钥
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CETCD_V20220325_MODEL_ETCDCREDENTIAL_H_
