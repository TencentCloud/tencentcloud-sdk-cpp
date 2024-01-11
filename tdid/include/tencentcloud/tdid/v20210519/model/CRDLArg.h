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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_CRDLARG_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_CRDLARG_H_

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
                * 颁发凭证的数据参数
                */
                class CRDLArg : public AbstractModel
                {
                public:
                    CRDLArg();
                    ~CRDLArg() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CPT ID
                     * @return CPTId CPT ID
                     * 
                     */
                    uint64_t GetCPTId() const;

                    /**
                     * 设置CPT ID
                     * @param _cPTId CPT ID
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
                     * 获取签发者 did
                     * @return Issuer 签发者 did
                     * 
                     */
                    std::string GetIssuer() const;

                    /**
                     * 设置签发者 did
                     * @param _issuer 签发者 did
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
                    std::string GetExpirationDate() const;

                    /**
                     * 设置过期时间
                     * @param _expirationDate 过期时间
                     * 
                     */
                    void SetExpirationDate(const std::string& _expirationDate);

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
                     * 获取凭证类型
                     * @return Type 凭证类型
                     * 
                     */
                    std::vector<std::string> GetType() const;

                    /**
                     * 设置凭证类型
                     * @param _type 凭证类型
                     * 
                     */
                    void SetType(const std::vector<std::string>& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取多方签名的用户did
                     * @return Parties 多方签名的用户did
                     * 
                     */
                    std::vector<std::string> GetParties() const;

                    /**
                     * 设置多方签名的用户did
                     * @param _parties 多方签名的用户did
                     * 
                     */
                    void SetParties(const std::vector<std::string>& _parties);

                    /**
                     * 判断参数 Parties 是否已赋值
                     * @return Parties 是否已赋值
                     * 
                     */
                    bool PartiesHasBeenSet() const;

                private:

                    /**
                     * CPT ID
                     */
                    uint64_t m_cPTId;
                    bool m_cPTIdHasBeenSet;

                    /**
                     * 签发者 did
                     */
                    std::string m_issuer;
                    bool m_issuerHasBeenSet;

                    /**
                     * 过期时间
                     */
                    std::string m_expirationDate;
                    bool m_expirationDateHasBeenSet;

                    /**
                     * 声明
                     */
                    std::string m_claimJson;
                    bool m_claimJsonHasBeenSet;

                    /**
                     * 凭证类型
                     */
                    std::vector<std::string> m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 多方签名的用户did
                     */
                    std::vector<std::string> m_parties;
                    bool m_partiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_CRDLARG_H_
