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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEDOWNLOADCERTIFICATEURLREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEDOWNLOADCERTIFICATEURLREQUEST_H_

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
                * DescribeDownloadCertificateUrl请求参数结构体
                */
                class DescribeDownloadCertificateUrlRequest : public AbstractModel
                {
                public:
                    DescribeDownloadCertificateUrlRequest();
                    ~DescribeDownloadCertificateUrlRequest() = default;
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

                    /**
                     * 获取必填选项，下载的服务类型: nginx tomcat apache iis jks other root
                     * @return ServiceType 必填选项，下载的服务类型: nginx tomcat apache iis jks other root
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置必填选项，下载的服务类型: nginx tomcat apache iis jks other root
                     * @param _serviceType 必填选项，下载的服务类型: nginx tomcat apache iis jks other root
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                private:

                    /**
                     * 证书ID
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * 必填选项，下载的服务类型: nginx tomcat apache iis jks other root
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEDOWNLOADCERTIFICATEURLREQUEST_H_
