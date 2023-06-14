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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_REVOKECERTIFICATEREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_REVOKECERTIFICATEREQUEST_H_

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
                * RevokeCertificate请求参数结构体
                */
                class RevokeCertificateRequest : public AbstractModel
                {
                public:
                    RevokeCertificateRequest();
                    ~RevokeCertificateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取证书 ID。
                     * @return CertificateId 证书 ID。
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置证书 ID。
                     * @param _certificateId 证书 ID。
                     * 
                     */
                    void SetCertificateId(const std::string& _certificateId);

                    /**
                     * 判断参数 CertificateId 是否已赋值
                     * @return CertificateId 是否已赋值
                     * 
                     */
                    bool CertificateIdHasBeenSet() const;

                    /**
                     * 获取吊销证书原因。
                     * @return Reason 吊销证书原因。
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置吊销证书原因。
                     * @param _reason 吊销证书原因。
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * 证书 ID。
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * 吊销证书原因。
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_REVOKECERTIFICATEREQUEST_H_
