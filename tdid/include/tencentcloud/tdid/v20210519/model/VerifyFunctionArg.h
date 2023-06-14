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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_VERIFYFUNCTIONARG_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_VERIFYFUNCTIONARG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdid/v20210519/model/Proof.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * 验证凭证参数值
                */
                class VerifyFunctionArg : public AbstractModel
                {
                public:
                    VerifyFunctionArg();
                    ~VerifyFunctionArg() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CPT ID
                     * @return CptId CPT ID
                     * 
                     */
                    uint64_t GetCptId() const;

                    /**
                     * 设置CPT ID
                     * @param _cptId CPT ID
                     * 
                     */
                    void SetCptId(const uint64_t& _cptId);

                    /**
                     * 判断参数 CptId 是否已赋值
                     * @return CptId 是否已赋值
                     * 
                     */
                    bool CptIdHasBeenSet() const;

                    /**
                     * 获取issuer did
                     * @return Issuer issuer did
                     * 
                     */
                    std::string GetIssuer() const;

                    /**
                     * 设置issuer did
                     * @param _issuer issuer did
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
                     * 获取过期时间
                     * @return ExpirationDate 过期时间
                     * 
                     */
                    int64_t GetExpirationDate() const;

                    /**
                     * 设置过期时间
                     * @param _expirationDate 过期时间
                     * 
                     */
                    void SetExpirationDate(const int64_t& _expirationDate);

                    /**
                     * 判断参数 ExpirationDate 是否已赋值
                     * @return ExpirationDate 是否已赋值
                     * 
                     */
                    bool ExpirationDateHasBeenSet() const;

                    /**
                     * 获取声明
                     * @return ClaimJson 声明
                     * 
                     */
                    std::string GetClaimJson() const;

                    /**
                     * 设置声明
                     * @param _claimJson 声明
                     * 
                     */
                    void SetClaimJson(const std::string& _claimJson);

                    /**
                     * 判断参数 ClaimJson 是否已赋值
                     * @return ClaimJson 是否已赋值
                     * 
                     */
                    bool ClaimJsonHasBeenSet() const;

                    /**
                     * 获取颁发时间
                     * @return IssuanceDate 颁发时间
                     * 
                     */
                    int64_t GetIssuanceDate() const;

                    /**
                     * 设置颁发时间
                     * @param _issuanceDate 颁发时间
                     * 
                     */
                    void SetIssuanceDate(const int64_t& _issuanceDate);

                    /**
                     * 判断参数 IssuanceDate 是否已赋值
                     * @return IssuanceDate 是否已赋值
                     * 
                     */
                    bool IssuanceDateHasBeenSet() const;

                    /**
                     * 获取context值
                     * @return Context context值
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置context值
                     * @param _context context值
                     * 
                     */
                    void SetContext(const std::string& _context);

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取id值
                     * @return Id id值
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置id值
                     * @param _id id值
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
                     * 获取签名值
                     * @return Proof 签名值
                     * 
                     */
                    Proof GetProof() const;

                    /**
                     * 设置签名值
                     * @param _proof 签名值
                     * 
                     */
                    void SetProof(const Proof& _proof);

                    /**
                     * 判断参数 Proof 是否已赋值
                     * @return Proof 是否已赋值
                     * 
                     */
                    bool ProofHasBeenSet() const;

                    /**
                     * 获取type值
                     * @return Type type值
                     * 
                     */
                    std::vector<std::string> GetType() const;

                    /**
                     * 设置type值
                     * @param _type type值
                     * 
                     */
                    void SetType(const std::vector<std::string>& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * CPT ID
                     */
                    uint64_t m_cptId;
                    bool m_cptIdHasBeenSet;

                    /**
                     * issuer did
                     */
                    std::string m_issuer;
                    bool m_issuerHasBeenSet;

                    /**
                     * 过期时间
                     */
                    int64_t m_expirationDate;
                    bool m_expirationDateHasBeenSet;

                    /**
                     * 声明
                     */
                    std::string m_claimJson;
                    bool m_claimJsonHasBeenSet;

                    /**
                     * 颁发时间
                     */
                    int64_t m_issuanceDate;
                    bool m_issuanceDateHasBeenSet;

                    /**
                     * context值
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * id值
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 签名值
                     */
                    Proof m_proof;
                    bool m_proofHasBeenSet;

                    /**
                     * type值
                     */
                    std::vector<std::string> m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_VERIFYFUNCTIONARG_H_
