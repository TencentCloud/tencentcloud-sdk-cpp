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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_UPDATEPRIVATECAREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_UPDATEPRIVATECAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * UpdatePrivateCA请求参数结构体
                */
                class UpdatePrivateCARequest : public AbstractModel
                {
                public:
                    UpdatePrivateCARequest();
                    ~UpdatePrivateCARequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>证书名称。</p>
                     * @return CertName <p>证书名称。</p>
                     * 
                     */
                    std::string GetCertName() const;

                    /**
                     * 设置<p>证书名称。</p>
                     * @param _certName <p>证书名称。</p>
                     * 
                     */
                    void SetCertName(const std::string& _certName);

                    /**
                     * 判断参数 CertName 是否已赋值
                     * @return CertName 是否已赋值
                     * 
                     */
                    bool CertNameHasBeenSet() const;

                    /**
                     * 获取<p>证书内容，PEM 格式文本，需为 CA 证书。</p>
                     * @return CertText <p>证书内容，PEM 格式文本，需为 CA 证书。</p>
                     * 
                     */
                    std::string GetCertText() const;

                    /**
                     * 设置<p>证书内容，PEM 格式文本，需为 CA 证书。</p>
                     * @param _certText <p>证书内容，PEM 格式文本，需为 CA 证书。</p>
                     * 
                     */
                    void SetCertText(const std::string& _certText);

                    /**
                     * 判断参数 CertText 是否已赋值
                     * @return CertText 是否已赋值
                     * 
                     */
                    bool CertTextHasBeenSet() const;

                    /**
                     * 获取<p>验证证书内容，PEM 格式文本。须由所上传的 CA 签发，且 CN 为 sha256(&quot;iothub_主账号Uin&quot;) 的小写十六进制值，用于验证您持有 CA 私钥。</p>
                     * @return VerifyCertText <p>验证证书内容，PEM 格式文本。须由所上传的 CA 签发，且 CN 为 sha256(&quot;iothub_主账号Uin&quot;) 的小写十六进制值，用于验证您持有 CA 私钥。</p>
                     * 
                     */
                    std::string GetVerifyCertText() const;

                    /**
                     * 设置<p>验证证书内容，PEM 格式文本。须由所上传的 CA 签发，且 CN 为 sha256(&quot;iothub_主账号Uin&quot;) 的小写十六进制值，用于验证您持有 CA 私钥。</p>
                     * @param _verifyCertText <p>验证证书内容，PEM 格式文本。须由所上传的 CA 签发，且 CN 为 sha256(&quot;iothub_主账号Uin&quot;) 的小写十六进制值，用于验证您持有 CA 私钥。</p>
                     * 
                     */
                    void SetVerifyCertText(const std::string& _verifyCertText);

                    /**
                     * 判断参数 VerifyCertText 是否已赋值
                     * @return VerifyCertText 是否已赋值
                     * 
                     */
                    bool VerifyCertTextHasBeenSet() const;

                private:

                    /**
                     * <p>证书名称。</p>
                     */
                    std::string m_certName;
                    bool m_certNameHasBeenSet;

                    /**
                     * <p>证书内容，PEM 格式文本，需为 CA 证书。</p>
                     */
                    std::string m_certText;
                    bool m_certTextHasBeenSet;

                    /**
                     * <p>验证证书内容，PEM 格式文本。须由所上传的 CA 签发，且 CN 为 sha256(&quot;iothub_主账号Uin&quot;) 的小写十六进制值，用于验证您持有 CA 私钥。</p>
                     */
                    std::string m_verifyCertText;
                    bool m_verifyCertTextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_UPDATEPRIVATECAREQUEST_H_
