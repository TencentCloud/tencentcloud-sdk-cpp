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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_KEYPAIR_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_KEYPAIR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 描述密钥对信息。
                */
                class KeyPair : public AbstractModel
                {
                public:
                    KeyPair();
                    ~KeyPair() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取密钥对 ID ，是密钥对的唯一标识。
                     * @return KeyId 密钥对 ID ，是密钥对的唯一标识。
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置密钥对 ID ，是密钥对的唯一标识。
                     * @param _keyId 密钥对 ID ，是密钥对的唯一标识。
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
                     * 获取密钥对名称。
                     * @return KeyName 密钥对名称。
                     * 
                     */
                    std::string GetKeyName() const;

                    /**
                     * 设置密钥对名称。
                     * @param _keyName 密钥对名称。
                     * 
                     */
                    void SetKeyName(const std::string& _keyName);

                    /**
                     * 判断参数 KeyName 是否已赋值
                     * @return KeyName 是否已赋值
                     * 
                     */
                    bool KeyNameHasBeenSet() const;

                    /**
                     * 获取密钥对的纯文本公钥。
                     * @return PublicKey 密钥对的纯文本公钥。
                     * 
                     */
                    std::string GetPublicKey() const;

                    /**
                     * 设置密钥对的纯文本公钥。
                     * @param _publicKey 密钥对的纯文本公钥。
                     * 
                     */
                    void SetPublicKey(const std::string& _publicKey);

                    /**
                     * 判断参数 PublicKey 是否已赋值
                     * @return PublicKey 是否已赋值
                     * 
                     */
                    bool PublicKeyHasBeenSet() const;

                    /**
                     * 获取密钥对关联的实例 ID 列表。
                     * @return AssociatedInstanceIds 密钥对关联的实例 ID 列表。
                     * 
                     */
                    std::vector<std::string> GetAssociatedInstanceIds() const;

                    /**
                     * 设置密钥对关联的实例 ID 列表。
                     * @param _associatedInstanceIds 密钥对关联的实例 ID 列表。
                     * 
                     */
                    void SetAssociatedInstanceIds(const std::vector<std::string>& _associatedInstanceIds);

                    /**
                     * 判断参数 AssociatedInstanceIds 是否已赋值
                     * @return AssociatedInstanceIds 是否已赋值
                     * 
                     */
                    bool AssociatedInstanceIdsHasBeenSet() const;

                    /**
                     * 获取创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedTime 创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdTime 创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取密钥对私钥。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrivateKey 密钥对私钥。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPrivateKey() const;

                    /**
                     * 设置密钥对私钥。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _privateKey 密钥对私钥。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrivateKey(const std::string& _privateKey);

                    /**
                     * 判断参数 PrivateKey 是否已赋值
                     * @return PrivateKey 是否已赋值
                     * 
                     */
                    bool PrivateKeyHasBeenSet() const;

                private:

                    /**
                     * 密钥对 ID ，是密钥对的唯一标识。
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * 密钥对名称。
                     */
                    std::string m_keyName;
                    bool m_keyNameHasBeenSet;

                    /**
                     * 密钥对的纯文本公钥。
                     */
                    std::string m_publicKey;
                    bool m_publicKeyHasBeenSet;

                    /**
                     * 密钥对关联的实例 ID 列表。
                     */
                    std::vector<std::string> m_associatedInstanceIds;
                    bool m_associatedInstanceIdsHasBeenSet;

                    /**
                     * 创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 密钥对私钥。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_privateKey;
                    bool m_privateKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_KEYPAIR_H_
