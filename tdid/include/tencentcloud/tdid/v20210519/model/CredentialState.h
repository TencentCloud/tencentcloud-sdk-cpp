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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_CREDENTIALSTATE_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_CREDENTIALSTATE_H_

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
                class CredentialState : public AbstractModel
                {
                public:
                    CredentialState();
                    ~CredentialState() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取凭证唯一id
                     * @return Id 凭证唯一id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置凭证唯一id
                     * @param _id 凭证唯一id
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取凭证状态（0：吊销；1：有效）
                     * @return Status 凭证状态（0：吊销；1：有效）
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置凭证状态（0：吊销；1：有效）
                     * @param _status 凭证状态（0：吊销；1：有效）
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取凭证颁发者Did
                     * @return Issuer 凭证颁发者Did
                     * 
                     */
                    std::string GetIssuer() const;

                    /**
                     * 设置凭证颁发者Did
                     * @param _issuer 凭证颁发者Did
                     * 
                     */
                    void SetIssuer(const std::string& _issuer);

                    /**
                     * 判断参数 Issuer 是否已赋值
                     * @return Issuer 是否已赋值
                     * 
                     */
                    bool IssuerHasBeenSet() const;

                    /**
                     * 获取VC摘要，对应凭证Proof的vcDigest字段
                     * @return VCDigest VC摘要，对应凭证Proof的vcDigest字段
                     * 
                     */
                    std::string GetVCDigest() const;

                    /**
                     * 设置VC摘要，对应凭证Proof的vcDigest字段
                     * @param _vCDigest VC摘要，对应凭证Proof的vcDigest字段
                     * 
                     */
                    void SetVCDigest(const std::string& _vCDigest);

                    /**
                     * 判断参数 VCDigest 是否已赋值
                     * @return VCDigest 是否已赋值
                     * 
                     */
                    bool VCDigestHasBeenSet() const;

                    /**
                     * 获取交易摘要，对应凭证Proof的txDigest字段 
                     * @return TXDigest 交易摘要，对应凭证Proof的txDigest字段 
                     * 
                     */
                    std::string GetTXDigest() const;

                    /**
                     * 设置交易摘要，对应凭证Proof的txDigest字段 
                     * @param _tXDigest 交易摘要，对应凭证Proof的txDigest字段 
                     * 
                     */
                    void SetTXDigest(const std::string& _tXDigest);

                    /**
                     * 判断参数 TXDigest 是否已赋值
                     * @return TXDigest 是否已赋值
                     * 
                     */
                    bool TXDigestHasBeenSet() const;

                    /**
                     * 获取颁布凭证的UTC时间戳
                     * @return IssueTime 颁布凭证的UTC时间戳
                     * 
                     */
                    uint64_t GetIssueTime() const;

                    /**
                     * 设置颁布凭证的UTC时间戳
                     * @param _issueTime 颁布凭证的UTC时间戳
                     * 
                     */
                    void SetIssueTime(const uint64_t& _issueTime);

                    /**
                     * 判断参数 IssueTime 是否已赋值
                     * @return IssueTime 是否已赋值
                     * 
                     */
                    bool IssueTimeHasBeenSet() const;

                    /**
                     * 获取凭证过期的UTC时间戳
                     * @return ExpireTime 凭证过期的UTC时间戳
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置凭证过期的UTC时间戳
                     * @param _expireTime 凭证过期的UTC时间戳
                     * 
                     */
                    void SetExpireTime(const uint64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取凭证模板id
                     * @return CPTId 凭证模板id
                     * 
                     */
                    uint64_t GetCPTId() const;

                    /**
                     * 设置凭证模板id
                     * @param _cPTId 凭证模板id
                     * 
                     */
                    void SetCPTId(const uint64_t& _cPTId);

                    /**
                     * 判断参数 CPTId 是否已赋值
                     * @return CPTId 是否已赋值
                     * 
                     */
                    bool CPTIdHasBeenSet() const;

                    /**
                     * 获取凭证签名
                     * @return Signature 凭证签名
                     * 
                     */
                    std::string GetSignature() const;

                    /**
                     * 设置凭证签名
                     * @param _signature 凭证签名
                     * 
                     */
                    void SetSignature(const std::string& _signature);

                    /**
                     * 判断参数 Signature 是否已赋值
                     * @return Signature 是否已赋值
                     * 
                     */
                    bool SignatureHasBeenSet() const;

                    /**
                     * 获取元数据摘要
                     * @return MetaDigest 元数据摘要
                     * 
                     */
                    std::string GetMetaDigest() const;

                    /**
                     * 设置元数据摘要
                     * @param _metaDigest 元数据摘要
                     * 
                     */
                    void SetMetaDigest(const std::string& _metaDigest);

                    /**
                     * 判断参数 MetaDigest 是否已赋值
                     * @return MetaDigest 是否已赋值
                     * 
                     */
                    bool MetaDigestHasBeenSet() const;

                private:

                    /**
                     * 凭证唯一id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

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
                     * VC摘要，对应凭证Proof的vcDigest字段
                     */
                    std::string m_vCDigest;
                    bool m_vCDigestHasBeenSet;

                    /**
                     * 交易摘要，对应凭证Proof的txDigest字段 
                     */
                    std::string m_tXDigest;
                    bool m_tXDigestHasBeenSet;

                    /**
                     * 颁布凭证的UTC时间戳
                     */
                    uint64_t m_issueTime;
                    bool m_issueTimeHasBeenSet;

                    /**
                     * 凭证过期的UTC时间戳
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 凭证模板id
                     */
                    uint64_t m_cPTId;
                    bool m_cPTIdHasBeenSet;

                    /**
                     * 凭证签名
                     */
                    std::string m_signature;
                    bool m_signatureHasBeenSet;

                    /**
                     * 元数据摘要
                     */
                    std::string m_metaDigest;
                    bool m_metaDigestHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_CREDENTIALSTATE_H_
