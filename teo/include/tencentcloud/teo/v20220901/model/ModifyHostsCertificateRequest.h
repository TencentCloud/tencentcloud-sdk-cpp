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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYHOSTSCERTIFICATEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYHOSTSCERTIFICATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/ServerCertInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyHostsCertificate请求参数结构体
                */
                class ModifyHostsCertificateRequest : public AbstractModel
                {
                public:
                    ModifyHostsCertificateRequest();
                    ~ModifyHostsCertificateRequest() = default;
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
                     * 获取本次变更的域名列表。
                     * @return Hosts 本次变更的域名列表。
                     * 
                     */
                    std::vector<std::string> GetHosts() const;

                    /**
                     * 设置本次变更的域名列表。
                     * @param _hosts 本次变更的域名列表。
                     * 
                     */
                    void SetHosts(const std::vector<std::string>& _hosts);

                    /**
                     * 判断参数 Hosts 是否已赋值
                     * @return Hosts 是否已赋值
                     * 
                     */
                    bool HostsHasBeenSet() const;

                    /**
                     * 获取证书信息, 只需要传入 CertId 即可, 如果为空, 则使用默认证书。
                     * @return ServerCertInfo 证书信息, 只需要传入 CertId 即可, 如果为空, 则使用默认证书。
                     * 
                     */
                    std::vector<ServerCertInfo> GetServerCertInfo() const;

                    /**
                     * 设置证书信息, 只需要传入 CertId 即可, 如果为空, 则使用默认证书。
                     * @param _serverCertInfo 证书信息, 只需要传入 CertId 即可, 如果为空, 则使用默认证书。
                     * 
                     */
                    void SetServerCertInfo(const std::vector<ServerCertInfo>& _serverCertInfo);

                    /**
                     * 判断参数 ServerCertInfo 是否已赋值
                     * @return ServerCertInfo 是否已赋值
                     * 
                     */
                    bool ServerCertInfoHasBeenSet() const;

                    /**
                     * 获取托管类型，取值有：
<li>apply：托管EO；</li>
<li>none：不托管EO；</li>不填，默认取值为apply。
                     * @return ApplyType 托管类型，取值有：
<li>apply：托管EO；</li>
<li>none：不托管EO；</li>不填，默认取值为apply。
                     * 
                     */
                    std::string GetApplyType() const;

                    /**
                     * 设置托管类型，取值有：
<li>apply：托管EO；</li>
<li>none：不托管EO；</li>不填，默认取值为apply。
                     * @param _applyType 托管类型，取值有：
<li>apply：托管EO；</li>
<li>none：不托管EO；</li>不填，默认取值为apply。
                     * 
                     */
                    void SetApplyType(const std::string& _applyType);

                    /**
                     * 判断参数 ApplyType 是否已赋值
                     * @return ApplyType 是否已赋值
                     * 
                     */
                    bool ApplyTypeHasBeenSet() const;

                private:

                    /**
                     * 站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 本次变更的域名列表。
                     */
                    std::vector<std::string> m_hosts;
                    bool m_hostsHasBeenSet;

                    /**
                     * 证书信息, 只需要传入 CertId 即可, 如果为空, 则使用默认证书。
                     */
                    std::vector<ServerCertInfo> m_serverCertInfo;
                    bool m_serverCertInfoHasBeenSet;

                    /**
                     * 托管类型，取值有：
<li>apply：托管EO；</li>
<li>none：不托管EO；</li>不填，默认取值为apply。
                     */
                    std::string m_applyType;
                    bool m_applyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYHOSTSCERTIFICATEREQUEST_H_
