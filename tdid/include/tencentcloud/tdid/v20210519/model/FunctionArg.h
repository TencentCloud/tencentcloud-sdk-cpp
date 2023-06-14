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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_FUNCTIONARG_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_FUNCTIONARG_H_

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
                * 创建凭证入参的FunctionArg
                */
                class FunctionArg : public AbstractModel
                {
                public:
                    FunctionArg();
                    ~FunctionArg() = default;
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

                private:

                    /**
                     * CPT ID
                     */
                    uint64_t m_cptId;
                    bool m_cptIdHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_FUNCTIONARG_H_
