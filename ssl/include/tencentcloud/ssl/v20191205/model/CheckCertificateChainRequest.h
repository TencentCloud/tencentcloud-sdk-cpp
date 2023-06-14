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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_CHECKCERTIFICATECHAINREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_CHECKCERTIFICATECHAINREQUEST_H_

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
                * CheckCertificateChain请求参数结构体
                */
                class CheckCertificateChainRequest : public AbstractModel
                {
                public:
                    CheckCertificateChainRequest();
                    ~CheckCertificateChainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待检查的证书链
                     * @return CertificateChain 待检查的证书链
                     * 
                     */
                    std::string GetCertificateChain() const;

                    /**
                     * 设置待检查的证书链
                     * @param _certificateChain 待检查的证书链
                     * 
                     */
                    void SetCertificateChain(const std::string& _certificateChain);

                    /**
                     * 判断参数 CertificateChain 是否已赋值
                     * @return CertificateChain 是否已赋值
                     * 
                     */
                    bool CertificateChainHasBeenSet() const;

                private:

                    /**
                     * 待检查的证书链
                     */
                    std::string m_certificateChain;
                    bool m_certificateChainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_CHECKCERTIFICATECHAINREQUEST_H_
