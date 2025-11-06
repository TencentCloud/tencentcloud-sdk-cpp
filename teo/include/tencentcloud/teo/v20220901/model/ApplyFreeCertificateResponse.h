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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_APPLYFREECERTIFICATERESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_APPLYFREECERTIFICATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/DnsVerification.h>
#include <tencentcloud/teo/v20220901/model/FileVerification.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ApplyFreeCertificate返回参数结构体
                */
                class ApplyFreeCertificateResponse : public AbstractModel
                {
                public:
                    ApplyFreeCertificateResponse();
                    ~ApplyFreeCertificateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取当 VerificationMethod 为 dns_challenge 时，域名申请免费证书的相关验证信息。
                     * @return DnsVerification 当 VerificationMethod 为 dns_challenge 时，域名申请免费证书的相关验证信息。
                     * 
                     */
                    DnsVerification GetDnsVerification() const;

                    /**
                     * 判断参数 DnsVerification 是否已赋值
                     * @return DnsVerification 是否已赋值
                     * 
                     */
                    bool DnsVerificationHasBeenSet() const;

                    /**
                     * 获取当 VerificationMethod 为 http_challenge 时，域名申请免费证书的相关验证信息。
                     * @return FileVerification 当 VerificationMethod 为 http_challenge 时，域名申请免费证书的相关验证信息。
                     * 
                     */
                    FileVerification GetFileVerification() const;

                    /**
                     * 判断参数 FileVerification 是否已赋值
                     * @return FileVerification 是否已赋值
                     * 
                     */
                    bool FileVerificationHasBeenSet() const;

                private:

                    /**
                     * 当 VerificationMethod 为 dns_challenge 时，域名申请免费证书的相关验证信息。
                     */
                    DnsVerification m_dnsVerification;
                    bool m_dnsVerificationHasBeenSet;

                    /**
                     * 当 VerificationMethod 为 http_challenge 时，域名申请免费证书的相关验证信息。
                     */
                    FileVerification m_fileVerification;
                    bool m_fileVerificationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_APPLYFREECERTIFICATERESPONSE_H_
