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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_REMOVEEXTERNALSAMLIDPCERTIFICATEREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_REMOVEEXTERNALSAMLIDPCERTIFICATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * RemoveExternalSAMLIdPCertificate请求参数结构体
                */
                class RemoveExternalSAMLIdPCertificateRequest : public AbstractModel
                {
                public:
                    RemoveExternalSAMLIdPCertificateRequest();
                    ~RemoveExternalSAMLIdPCertificateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取空间ID。
                     * @return ZoneId 空间ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置空间ID。
                     * @param _zoneId 空间ID。
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取PEM 格式的 X509 证书。  由 SAML 身份提供商提供。
                     * @return CertificateId PEM 格式的 X509 证书。  由 SAML 身份提供商提供。
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置PEM 格式的 X509 证书。  由 SAML 身份提供商提供。
                     * @param _certificateId PEM 格式的 X509 证书。  由 SAML 身份提供商提供。
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
                     * 空间ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * PEM 格式的 X509 证书。  由 SAML 身份提供商提供。
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_REMOVEEXTERNALSAMLIDPCERTIFICATEREQUEST_H_
