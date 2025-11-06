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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CHECKFREECERTIFICATEVERIFICATIONRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CHECKFREECERTIFICATEVERIFICATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CheckFreeCertificateVerification返回参数结构体
                */
                class CheckFreeCertificateVerificationResponse : public AbstractModel
                {
                public:
                    CheckFreeCertificateVerificationResponse();
                    ~CheckFreeCertificateVerificationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取免费证书申请成功时，该证书颁发给的域名。
注意：一个域名只允许申请一本免费证书， 如果已经有泛域名申请了免费证书的情况下，其子域名会匹配使用该泛域名证书。
                     * @return CommonName 免费证书申请成功时，该证书颁发给的域名。
注意：一个域名只允许申请一本免费证书， 如果已经有泛域名申请了免费证书的情况下，其子域名会匹配使用该泛域名证书。
                     * 
                     */
                    std::string GetCommonName() const;

                    /**
                     * 判断参数 CommonName 是否已赋值
                     * @return CommonName 是否已赋值
                     * 
                     */
                    bool CommonNameHasBeenSet() const;

                    /**
                     * 获取免费证书申请成功时，该证书使用的签名算法，当前仅支持 RSA 2048。
                     * @return SignatureAlgorithm 免费证书申请成功时，该证书使用的签名算法，当前仅支持 RSA 2048。
                     * 
                     */
                    std::string GetSignatureAlgorithm() const;

                    /**
                     * 判断参数 SignatureAlgorithm 是否已赋值
                     * @return SignatureAlgorithm 是否已赋值
                     * 
                     */
                    bool SignatureAlgorithmHasBeenSet() const;

                    /**
                     * 获取免费证书申请成功时，该证书的过期时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
                     * @return ExpireTime 免费证书申请成功时，该证书的过期时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * 免费证书申请成功时，该证书颁发给的域名。
注意：一个域名只允许申请一本免费证书， 如果已经有泛域名申请了免费证书的情况下，其子域名会匹配使用该泛域名证书。
                     */
                    std::string m_commonName;
                    bool m_commonNameHasBeenSet;

                    /**
                     * 免费证书申请成功时，该证书使用的签名算法，当前仅支持 RSA 2048。
                     */
                    std::string m_signatureAlgorithm;
                    bool m_signatureAlgorithmHasBeenSet;

                    /**
                     * 免费证书申请成功时，该证书的过期时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CHECKFREECERTIFICATEVERIFICATIONRESPONSE_H_
