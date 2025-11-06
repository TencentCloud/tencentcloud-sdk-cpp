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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CHECKFREECERTIFICATEVERIFICATIONREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CHECKFREECERTIFICATEVERIFICATIONREQUEST_H_

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
                * CheckFreeCertificateVerification请求参数结构体
                */
                class CheckFreeCertificateVerificationRequest : public AbstractModel
                {
                public:
                    CheckFreeCertificateVerificationRequest();
                    ~CheckFreeCertificateVerificationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点 ID。
                     * @return ZoneId 站点 ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点 ID。
                     * @param _zoneId 站点 ID。
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
                     * 获取加速域名，该域名为[申请免费证书](https://tcloud4api.woa.com/document/product/1657/927654?!preview&!document=1)时使用的域名。
                     * @return Domain 加速域名，该域名为[申请免费证书](https://tcloud4api.woa.com/document/product/1657/927654?!preview&!document=1)时使用的域名。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置加速域名，该域名为[申请免费证书](https://tcloud4api.woa.com/document/product/1657/927654?!preview&!document=1)时使用的域名。
                     * @param _domain 加速域名，该域名为[申请免费证书](https://tcloud4api.woa.com/document/product/1657/927654?!preview&!document=1)时使用的域名。
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                private:

                    /**
                     * 站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 加速域名，该域名为[申请免费证书](https://tcloud4api.woa.com/document/product/1657/927654?!preview&!document=1)时使用的域名。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CHECKFREECERTIFICATEVERIFICATIONREQUEST_H_
