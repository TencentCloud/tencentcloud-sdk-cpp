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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_CREDENTIALSTATUS_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_CREDENTIALSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * 凭证链上状态信息
                */
                class CredentialStatus : public AbstractModel
                {
                public:
                    CredentialStatus();
                    ~CredentialStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取凭证唯一id
                     * @return CredentialId 凭证唯一id
                     */
                    std::string GetCredentialId() const;

                    /**
                     * 设置凭证唯一id
                     * @param CredentialId 凭证唯一id
                     */
                    void SetCredentialId(const std::string& _credentialId);

                    /**
                     * 判断参数 CredentialId 是否已赋值
                     * @return CredentialId 是否已赋值
                     */
                    bool CredentialIdHasBeenSet() const;

                    /**
                     * 获取凭证状态（0：吊销；1：有效）
                     * @return Status 凭证状态（0：吊销；1：有效）
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置凭证状态（0：吊销；1：有效）
                     * @param Status 凭证状态（0：吊销；1：有效）
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取凭证颁发者Did
                     * @return Issuer 凭证颁发者Did
                     */
                    std::string GetIssuer() const;

                    /**
                     * 设置凭证颁发者Did
                     * @param Issuer 凭证颁发者Did
                     */
                    void SetIssuer(const std::string& _issuer);

                    /**
                     * 判断参数 Issuer 是否已赋值
                     * @return Issuer 是否已赋值
                     */
                    bool IssuerHasBeenSet() const;

                    /**
                     * 获取凭证摘要
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Digest 凭证摘要
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDigest() const;

                    /**
                     * 设置凭证摘要
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Digest 凭证摘要
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDigest(const std::string& _digest);

                    /**
                     * 判断参数 Digest 是否已赋值
                     * @return Digest 是否已赋值
                     */
                    bool DigestHasBeenSet() const;

                    /**
                     * 获取凭证签名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Signature 凭证签名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSignature() const;

                    /**
                     * 设置凭证签名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Signature 凭证签名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSignature(const std::string& _signature);

                    /**
                     * 判断参数 Signature 是否已赋值
                     * @return Signature 是否已赋值
                     */
                    bool SignatureHasBeenSet() const;

                    /**
                     * 获取更新时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeStamp 更新时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetTimeStamp() const;

                    /**
                     * 设置更新时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TimeStamp 更新时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTimeStamp(const uint64_t& _timeStamp);

                    /**
                     * 判断参数 TimeStamp 是否已赋值
                     * @return TimeStamp 是否已赋值
                     */
                    bool TimeStampHasBeenSet() const;

                private:

                    /**
                     * 凭证唯一id
                     */
                    std::string m_credentialId;
                    bool m_credentialIdHasBeenSet;

                    /**
                     * 凭证状态（0：吊销；1：有效）
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 凭证颁发者Did
                     */
                    std::string m_issuer;
                    bool m_issuerHasBeenSet;

                    /**
                     * 凭证摘要
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_digest;
                    bool m_digestHasBeenSet;

                    /**
                     * 凭证签名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_signature;
                    bool m_signatureHasBeenSet;

                    /**
                     * 更新时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_timeStamp;
                    bool m_timeStampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_CREDENTIALSTATUS_H_
