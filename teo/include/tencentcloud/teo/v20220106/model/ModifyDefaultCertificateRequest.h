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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYDEFAULTCERTIFICATEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYDEFAULTCERTIFICATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * ModifyDefaultCertificate请求参数结构体
                */
                class ModifyDefaultCertificateRequest : public AbstractModel
                {
                public:
                    ModifyDefaultCertificateRequest();
                    ~ModifyDefaultCertificateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Zone ID
                     * @return ZoneId Zone ID
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID
                     * @param ZoneId Zone ID
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取默认证书ID
                     * @return CertId 默认证书ID
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置默认证书ID
                     * @param CertId 默认证书ID
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取证书状态
deployed: 部署证书
disabled:禁用证书
失败状态下重新deployed即可重试失败
                     * @return Status 证书状态
deployed: 部署证书
disabled:禁用证书
失败状态下重新deployed即可重试失败
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置证书状态
deployed: 部署证书
disabled:禁用证书
失败状态下重新deployed即可重试失败
                     * @param Status 证书状态
deployed: 部署证书
disabled:禁用证书
失败状态下重新deployed即可重试失败
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Zone ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 默认证书ID
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * 证书状态
deployed: 部署证书
disabled:禁用证书
失败状态下重新deployed即可重试失败
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYDEFAULTCERTIFICATEREQUEST_H_
