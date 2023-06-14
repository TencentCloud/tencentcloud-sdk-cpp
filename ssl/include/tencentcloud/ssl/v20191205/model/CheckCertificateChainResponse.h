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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_CHECKCERTIFICATECHAINRESPONSE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_CHECKCERTIFICATECHAINRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * CheckCertificateChain返回参数结构体
                */
                class CheckCertificateChainResponse : public AbstractModel
                {
                public:
                    CheckCertificateChainResponse();
                    ~CheckCertificateChainResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取true为通过检查，false为未通过检查。
                     * @return IsValid true为通过检查，false为未通过检查。
                     * 
                     */
                    bool GetIsValid() const;

                    /**
                     * 判断参数 IsValid 是否已赋值
                     * @return IsValid 是否已赋值
                     * 
                     */
                    bool IsValidHasBeenSet() const;

                    /**
                     * 获取true为可信CA，false为不可信CA。
                     * @return IsTrustedCA true为可信CA，false为不可信CA。
                     * 
                     */
                    bool GetIsTrustedCA() const;

                    /**
                     * 判断参数 IsTrustedCA 是否已赋值
                     * @return IsTrustedCA 是否已赋值
                     * 
                     */
                    bool IsTrustedCAHasBeenSet() const;

                    /**
                     * 获取包含证书链中每一段证书的通用名称。
                     * @return Chains 包含证书链中每一段证书的通用名称。
                     * 
                     */
                    std::vector<std::string> GetChains() const;

                    /**
                     * 判断参数 Chains 是否已赋值
                     * @return Chains 是否已赋值
                     * 
                     */
                    bool ChainsHasBeenSet() const;

                private:

                    /**
                     * true为通过检查，false为未通过检查。
                     */
                    bool m_isValid;
                    bool m_isValidHasBeenSet;

                    /**
                     * true为可信CA，false为不可信CA。
                     */
                    bool m_isTrustedCA;
                    bool m_isTrustedCAHasBeenSet;

                    /**
                     * 包含证书链中每一段证书的通用名称。
                     */
                    std::vector<std::string> m_chains;
                    bool m_chainsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_CHECKCERTIFICATECHAINRESPONSE_H_
