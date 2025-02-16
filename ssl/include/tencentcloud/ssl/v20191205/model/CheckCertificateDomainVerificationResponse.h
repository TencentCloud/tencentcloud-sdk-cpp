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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_CHECKCERTIFICATEDOMAINVERIFICATIONRESPONSE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_CHECKCERTIFICATEDOMAINVERIFICATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/DomainValidationResult.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * CheckCertificateDomainVerification返回参数结构体
                */
                class CheckCertificateDomainVerificationResponse : public AbstractModel
                {
                public:
                    CheckCertificateDomainVerificationResponse();
                    ~CheckCertificateDomainVerificationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取证书域名验证结果列表， 证书若绑定了多个域名， 则返回数组有多份
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VerificationResults 证书域名验证结果列表， 证书若绑定了多个域名， 则返回数组有多份
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DomainValidationResult> GetVerificationResults() const;

                    /**
                     * 判断参数 VerificationResults 是否已赋值
                     * @return VerificationResults 是否已赋值
                     * 
                     */
                    bool VerificationResultsHasBeenSet() const;

                private:

                    /**
                     * 证书域名验证结果列表， 证书若绑定了多个域名， 则返回数组有多份
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DomainValidationResult> m_verificationResults;
                    bool m_verificationResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_CHECKCERTIFICATEDOMAINVERIFICATIONRESPONSE_H_
