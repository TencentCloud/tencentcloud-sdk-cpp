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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_ENCRYPTIONKEY_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_ENCRYPTIONKEY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * KMS密钥信息
                */
                class EncryptionKey : public AbstractModel
                {
                public:
                    EncryptionKey();
                    ~EncryptionKey() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取KMS实例加密的KeyId。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KeyId KMS实例加密的KeyId。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置KMS实例加密的KeyId。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keyId KMS实例加密的KeyId。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取KMS实例加密Key的别名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KeyAlias KMS实例加密Key的别名。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKeyAlias() const;

                    /**
                     * 设置KMS实例加密Key的别名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keyAlias KMS实例加密Key的别名。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKeyAlias(const std::string& _keyAlias);

                    /**
                     * 判断参数 KeyAlias 是否已赋值
                     * @return KeyAlias 是否已赋值
                     * 
                     */
                    bool KeyAliasHasBeenSet() const;

                    /**
                     * 获取实例加密密钥DEK的密文。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DEKCipherTextBlob 实例加密密钥DEK的密文。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDEKCipherTextBlob() const;

                    /**
                     * 设置实例加密密钥DEK的密文。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dEKCipherTextBlob 实例加密密钥DEK的密文。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDEKCipherTextBlob(const std::string& _dEKCipherTextBlob);

                    /**
                     * 判断参数 DEKCipherTextBlob 是否已赋值
                     * @return DEKCipherTextBlob 是否已赋值
                     * 
                     */
                    bool DEKCipherTextBlobHasBeenSet() const;

                    /**
                     * 获取密钥是否启用，1-启用， 0-未启用。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsEnabled 密钥是否启用，1-启用， 0-未启用。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsEnabled() const;

                    /**
                     * 设置密钥是否启用，1-启用， 0-未启用。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isEnabled 密钥是否启用，1-启用， 0-未启用。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsEnabled(const int64_t& _isEnabled);

                    /**
                     * 判断参数 IsEnabled 是否已赋值
                     * @return IsEnabled 是否已赋值
                     * 
                     */
                    bool IsEnabledHasBeenSet() const;

                    /**
                     * 获取KMS密钥所在地域。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KeyRegion KMS密钥所在地域。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKeyRegion() const;

                    /**
                     * 设置KMS密钥所在地域。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keyRegion KMS密钥所在地域。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKeyRegion(const std::string& _keyRegion);

                    /**
                     * 判断参数 KeyRegion 是否已赋值
                     * @return KeyRegion 是否已赋值
                     * 
                     */
                    bool KeyRegionHasBeenSet() const;

                    /**
                     * 获取DEK密钥创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime DEK密钥创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置DEK密钥创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime DEK密钥创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * KMS实例加密的KeyId。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * KMS实例加密Key的别名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_keyAlias;
                    bool m_keyAliasHasBeenSet;

                    /**
                     * 实例加密密钥DEK的密文。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dEKCipherTextBlob;
                    bool m_dEKCipherTextBlobHasBeenSet;

                    /**
                     * 密钥是否启用，1-启用， 0-未启用。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isEnabled;
                    bool m_isEnabledHasBeenSet;

                    /**
                     * KMS密钥所在地域。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_keyRegion;
                    bool m_keyRegionHasBeenSet;

                    /**
                     * DEK密钥创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_ENCRYPTIONKEY_H_
