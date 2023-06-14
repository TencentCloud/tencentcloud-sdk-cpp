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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_COMPLETECERTIFICATEREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_COMPLETECERTIFICATEREQUEST_H_

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
                * CompleteCertificate请求参数结构体
                */
                class CompleteCertificateRequest : public AbstractModel
                {
                public:
                    CompleteCertificateRequest();
                    ~CompleteCertificateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取证书ID
                     * @return CertificateId 证书ID
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置证书ID
                     * @param _certificateId 证书ID
                     * 
                     */
                    void SetCertificateId(const std::string& _certificateId);

                    /**
                     * 判断参数 CertificateId 是否已赋值
                     * @return CertificateId 是否已赋值
                     * 
                     */
                    bool CertificateIdHasBeenSet() const;

                private:

                    /**
                     * 证书ID
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_COMPLETECERTIFICATEREQUEST_H_
