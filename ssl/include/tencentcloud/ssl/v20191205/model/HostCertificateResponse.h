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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_HOSTCERTIFICATERESPONSE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_HOSTCERTIFICATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/CertHostingInfo.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * HostCertificate返回参数结构体
                */
                class HostCertificateResponse : public AbstractModel
                {
                public:
                    HostCertificateResponse();
                    ~HostCertificateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取云资源配置详情
                     * @return CertHostingInfo 云资源配置详情
                     */
                    CertHostingInfo GetCertHostingInfo() const;

                    /**
                     * 判断参数 CertHostingInfo 是否已赋值
                     * @return CertHostingInfo 是否已赋值
                     */
                    bool CertHostingInfoHasBeenSet() const;

                private:

                    /**
                     * 云资源配置详情
                     */
                    CertHostingInfo m_certHostingInfo;
                    bool m_certHostingInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_HOSTCERTIFICATERESPONSE_H_
