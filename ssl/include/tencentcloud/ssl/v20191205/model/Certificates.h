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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATES_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/CertificateExtra.h>
#include <tencentcloud/ssl/v20191205/model/ProjectInfo.h>
#include <tencentcloud/ssl/v20191205/model/Tags.h>
#include <tencentcloud/ssl/v20191205/model/PreAuditInfo.h>
#include <tencentcloud/ssl/v20191205/model/SupportDownloadType.h>
#include <tencentcloud/ssl/v20191205/model/HostingConfig.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * 获取证书列表（DescribeCertificates）返回参数键为 Certificates 的内容。
                */
                class Certificates : public AbstractModel
                {
                public:
                    Certificates();
                    ~Certificates() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>用户 UIN。</p>
                     * @return OwnerUin <p>用户 UIN。</p>
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置<p>用户 UIN。</p>
                     * @param _ownerUin <p>用户 UIN。</p>
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取<p>项目 ID。</p>
                     * @return ProjectId <p>项目 ID。</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>项目 ID。</p>
                     * @param _projectId <p>项目 ID。</p>
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>证书来源：trustasia：亚洲诚信，upload：用户上传。wosign：沃通sheca：上海CA</p>
                     * @return From <p>证书来源：trustasia：亚洲诚信，upload：用户上传。wosign：沃通sheca：上海CA</p>
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置<p>证书来源：trustasia：亚洲诚信，upload：用户上传。wosign：沃通sheca：上海CA</p>
                     * @param _from <p>证书来源：trustasia：亚洲诚信，upload：用户上传。wosign：沃通sheca：上海CA</p>
                     * 
                     */
                    void SetFrom(const std::string& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取<p>证书套餐类型：null：用户上传证书（没有套餐类型），2：TrustAsia TLS RSA CA， 3：SecureSite 增强型企业版（EV Pro）， 4：SecureSite 增强型（EV）， 5：SecureSite 企业型专业版（OV Pro），6：SecureSite 企业型（OV）， 7：SecureSite 企业型（OV）通配符， 8：Geotrust 增强型（EV）， 9：Geotrust 企业型（OV）， 10：Geotrust 企业型（OV）通配符， 11：TrustAsia 域名型多域名 SSL 证书， 12：TrustAsia 域名型（DV）通配符， 13：TrustAsia 企业型通配符（OV）SSL 证书（D3）， 14：TrustAsia 企业型（OV）SSL 证书（D3）， 15：TrustAsia 企业型多域名 （OV）SSL 证书（D3）， 16：TrustAsia 增强型 （EV）SSL 证书（D3）， 17：TrustAsia 增强型多域名（EV）SSL 证书（D3）， 18：GlobalSign 企业型（OV）SSL 证书， 19：GlobalSign 企业型通配符 （OV）SSL 证书， 20：GlobalSign 增强型 （EV）SSL 证书， 21：TrustAsia 企业型通配符多域名（OV）SSL 证书（D3）， 22：GlobalSign 企业型多域名（OV）SSL 证书， 23：GlobalSign 企业型通配符多域名（OV）SSL 证书，24：GlobalSign 增强型多域名（EV）SSL 证书，25：Wotrus 域名型证书，26：Wotrus 域名型多域名证书，27：Wotrus 域名型通配符证书，28：Wotrus 企业型证书，29：Wotrus 企业型多域名证书，30：Wotrus 企业型通配符证书，31：Wotrus 增强型证书，32：Wotrus 增强型多域名证书，33：WoTrus-国密域名型证书，34：WoTrus-国密域名型证书（多域名），35：WoTrus-国密域名型证书（通配符），37：WoTrus-国密企业型证书，38：WoTrus-国密企业型证书（多域名），39：WoTrus-国密企业型证书（通配符），40：WoTrus-国密增强型证书，41：WoTrus-国密增强型证书（多域名），42：TrustAsia-域名型证书（通配符多域名），43：DNSPod-企业型(OV)SSL证书44：DNSPod-企业型(OV)通配符SSL证书45：DNSPod-企业型(OV)多域名SSL证书46：DNSPod-增强型(EV)SSL证书47：DNSPod-增强型(EV)多域名SSL证书48：DNSPod-域名型(DV)SSL证书49：DNSPod-域名型(DV)通配符SSL证书50：DNSPod-域名型(DV)多域名SSL证书51：DNSPod（国密）-企业型(OV)SSL证书52：DNSPod（国密）-企业型(OV)通配符SSL证书53：DNSPod（国密）-企业型(OV)多域名SSL证书54：DNSPod（国密）-域名型(DV)SSL证书55：DNSPod（国密）-域名型(DV)通配符SSL证书56：DNSPod（国密）-域名型(DV)多域名SSL证书57：SecureSite 企业型专业版多域名(OV Pro)58：SecureSite 企业型多域名(OV)59：SecureSite 增强型专业版多域名(EV Pro)60：SecureSite 增强型多域名(EV)61：Geotrust 增强型多域名(EV)75：SecureSite 企业型(OV)76：SecureSite 企业型(OV)通配符77：SecureSite 增强型(EV)78：Geotrust 企业型(OV)79：Geotrust 企业型(OV)通配符80：Geotrust 增强型(EV)81：GlobalSign 企业型（OV）SSL证书82：GlobalSign 企业型通配符 （OV）SSL证书83：TrustAsia C1 DV Free85：GlobalSign 增强型 （EV）SSL证书88：GlobalSign 企业型通配符多域名 （OV）SSL证书89：GlobalSign 企业型多域名 （OV）SSL证书90：GlobalSign 增强型多域名（EV） SSL证书91：Geotrust 增强型多域名(EV)92：SecureSite 企业型专业版多域名(OV Pro)93：SecureSite 企业型多域名(OV)94：SecureSite 增强型专业版多域名(EV Pro)95：SecureSite 增强型多域名(EV)96：SecureSite 增强型专业版(EV Pro)97：SecureSite 企业型专业版(OV Pro)98：CFCA 企业型(OV)SSL证书99：CFCA 企业型多域名(OV)SSL证书100：CFCA 企业型通配符(OV)SSL证书101：CFCA 增强型(EV)SSL证书</p>
                     * @return PackageType <p>证书套餐类型：null：用户上传证书（没有套餐类型），2：TrustAsia TLS RSA CA， 3：SecureSite 增强型企业版（EV Pro）， 4：SecureSite 增强型（EV）， 5：SecureSite 企业型专业版（OV Pro），6：SecureSite 企业型（OV）， 7：SecureSite 企业型（OV）通配符， 8：Geotrust 增强型（EV）， 9：Geotrust 企业型（OV）， 10：Geotrust 企业型（OV）通配符， 11：TrustAsia 域名型多域名 SSL 证书， 12：TrustAsia 域名型（DV）通配符， 13：TrustAsia 企业型通配符（OV）SSL 证书（D3）， 14：TrustAsia 企业型（OV）SSL 证书（D3）， 15：TrustAsia 企业型多域名 （OV）SSL 证书（D3）， 16：TrustAsia 增强型 （EV）SSL 证书（D3）， 17：TrustAsia 增强型多域名（EV）SSL 证书（D3）， 18：GlobalSign 企业型（OV）SSL 证书， 19：GlobalSign 企业型通配符 （OV）SSL 证书， 20：GlobalSign 增强型 （EV）SSL 证书， 21：TrustAsia 企业型通配符多域名（OV）SSL 证书（D3）， 22：GlobalSign 企业型多域名（OV）SSL 证书， 23：GlobalSign 企业型通配符多域名（OV）SSL 证书，24：GlobalSign 增强型多域名（EV）SSL 证书，25：Wotrus 域名型证书，26：Wotrus 域名型多域名证书，27：Wotrus 域名型通配符证书，28：Wotrus 企业型证书，29：Wotrus 企业型多域名证书，30：Wotrus 企业型通配符证书，31：Wotrus 增强型证书，32：Wotrus 增强型多域名证书，33：WoTrus-国密域名型证书，34：WoTrus-国密域名型证书（多域名），35：WoTrus-国密域名型证书（通配符），37：WoTrus-国密企业型证书，38：WoTrus-国密企业型证书（多域名），39：WoTrus-国密企业型证书（通配符），40：WoTrus-国密增强型证书，41：WoTrus-国密增强型证书（多域名），42：TrustAsia-域名型证书（通配符多域名），43：DNSPod-企业型(OV)SSL证书44：DNSPod-企业型(OV)通配符SSL证书45：DNSPod-企业型(OV)多域名SSL证书46：DNSPod-增强型(EV)SSL证书47：DNSPod-增强型(EV)多域名SSL证书48：DNSPod-域名型(DV)SSL证书49：DNSPod-域名型(DV)通配符SSL证书50：DNSPod-域名型(DV)多域名SSL证书51：DNSPod（国密）-企业型(OV)SSL证书52：DNSPod（国密）-企业型(OV)通配符SSL证书53：DNSPod（国密）-企业型(OV)多域名SSL证书54：DNSPod（国密）-域名型(DV)SSL证书55：DNSPod（国密）-域名型(DV)通配符SSL证书56：DNSPod（国密）-域名型(DV)多域名SSL证书57：SecureSite 企业型专业版多域名(OV Pro)58：SecureSite 企业型多域名(OV)59：SecureSite 增强型专业版多域名(EV Pro)60：SecureSite 增强型多域名(EV)61：Geotrust 增强型多域名(EV)75：SecureSite 企业型(OV)76：SecureSite 企业型(OV)通配符77：SecureSite 增强型(EV)78：Geotrust 企业型(OV)79：Geotrust 企业型(OV)通配符80：Geotrust 增强型(EV)81：GlobalSign 企业型（OV）SSL证书82：GlobalSign 企业型通配符 （OV）SSL证书83：TrustAsia C1 DV Free85：GlobalSign 增强型 （EV）SSL证书88：GlobalSign 企业型通配符多域名 （OV）SSL证书89：GlobalSign 企业型多域名 （OV）SSL证书90：GlobalSign 增强型多域名（EV） SSL证书91：Geotrust 增强型多域名(EV)92：SecureSite 企业型专业版多域名(OV Pro)93：SecureSite 企业型多域名(OV)94：SecureSite 增强型专业版多域名(EV Pro)95：SecureSite 增强型多域名(EV)96：SecureSite 增强型专业版(EV Pro)97：SecureSite 企业型专业版(OV Pro)98：CFCA 企业型(OV)SSL证书99：CFCA 企业型多域名(OV)SSL证书100：CFCA 企业型通配符(OV)SSL证书101：CFCA 增强型(EV)SSL证书</p>
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置<p>证书套餐类型：null：用户上传证书（没有套餐类型），2：TrustAsia TLS RSA CA， 3：SecureSite 增强型企业版（EV Pro）， 4：SecureSite 增强型（EV）， 5：SecureSite 企业型专业版（OV Pro），6：SecureSite 企业型（OV）， 7：SecureSite 企业型（OV）通配符， 8：Geotrust 增强型（EV）， 9：Geotrust 企业型（OV）， 10：Geotrust 企业型（OV）通配符， 11：TrustAsia 域名型多域名 SSL 证书， 12：TrustAsia 域名型（DV）通配符， 13：TrustAsia 企业型通配符（OV）SSL 证书（D3）， 14：TrustAsia 企业型（OV）SSL 证书（D3）， 15：TrustAsia 企业型多域名 （OV）SSL 证书（D3）， 16：TrustAsia 增强型 （EV）SSL 证书（D3）， 17：TrustAsia 增强型多域名（EV）SSL 证书（D3）， 18：GlobalSign 企业型（OV）SSL 证书， 19：GlobalSign 企业型通配符 （OV）SSL 证书， 20：GlobalSign 增强型 （EV）SSL 证书， 21：TrustAsia 企业型通配符多域名（OV）SSL 证书（D3）， 22：GlobalSign 企业型多域名（OV）SSL 证书， 23：GlobalSign 企业型通配符多域名（OV）SSL 证书，24：GlobalSign 增强型多域名（EV）SSL 证书，25：Wotrus 域名型证书，26：Wotrus 域名型多域名证书，27：Wotrus 域名型通配符证书，28：Wotrus 企业型证书，29：Wotrus 企业型多域名证书，30：Wotrus 企业型通配符证书，31：Wotrus 增强型证书，32：Wotrus 增强型多域名证书，33：WoTrus-国密域名型证书，34：WoTrus-国密域名型证书（多域名），35：WoTrus-国密域名型证书（通配符），37：WoTrus-国密企业型证书，38：WoTrus-国密企业型证书（多域名），39：WoTrus-国密企业型证书（通配符），40：WoTrus-国密增强型证书，41：WoTrus-国密增强型证书（多域名），42：TrustAsia-域名型证书（通配符多域名），43：DNSPod-企业型(OV)SSL证书44：DNSPod-企业型(OV)通配符SSL证书45：DNSPod-企业型(OV)多域名SSL证书46：DNSPod-增强型(EV)SSL证书47：DNSPod-增强型(EV)多域名SSL证书48：DNSPod-域名型(DV)SSL证书49：DNSPod-域名型(DV)通配符SSL证书50：DNSPod-域名型(DV)多域名SSL证书51：DNSPod（国密）-企业型(OV)SSL证书52：DNSPod（国密）-企业型(OV)通配符SSL证书53：DNSPod（国密）-企业型(OV)多域名SSL证书54：DNSPod（国密）-域名型(DV)SSL证书55：DNSPod（国密）-域名型(DV)通配符SSL证书56：DNSPod（国密）-域名型(DV)多域名SSL证书57：SecureSite 企业型专业版多域名(OV Pro)58：SecureSite 企业型多域名(OV)59：SecureSite 增强型专业版多域名(EV Pro)60：SecureSite 增强型多域名(EV)61：Geotrust 增强型多域名(EV)75：SecureSite 企业型(OV)76：SecureSite 企业型(OV)通配符77：SecureSite 增强型(EV)78：Geotrust 企业型(OV)79：Geotrust 企业型(OV)通配符80：Geotrust 增强型(EV)81：GlobalSign 企业型（OV）SSL证书82：GlobalSign 企业型通配符 （OV）SSL证书83：TrustAsia C1 DV Free85：GlobalSign 增强型 （EV）SSL证书88：GlobalSign 企业型通配符多域名 （OV）SSL证书89：GlobalSign 企业型多域名 （OV）SSL证书90：GlobalSign 增强型多域名（EV） SSL证书91：Geotrust 增强型多域名(EV)92：SecureSite 企业型专业版多域名(OV Pro)93：SecureSite 企业型多域名(OV)94：SecureSite 增强型专业版多域名(EV Pro)95：SecureSite 增强型多域名(EV)96：SecureSite 增强型专业版(EV Pro)97：SecureSite 企业型专业版(OV Pro)98：CFCA 企业型(OV)SSL证书99：CFCA 企业型多域名(OV)SSL证书100：CFCA 企业型通配符(OV)SSL证书101：CFCA 增强型(EV)SSL证书</p>
                     * @param _packageType <p>证书套餐类型：null：用户上传证书（没有套餐类型），2：TrustAsia TLS RSA CA， 3：SecureSite 增强型企业版（EV Pro）， 4：SecureSite 增强型（EV）， 5：SecureSite 企业型专业版（OV Pro），6：SecureSite 企业型（OV）， 7：SecureSite 企业型（OV）通配符， 8：Geotrust 增强型（EV）， 9：Geotrust 企业型（OV）， 10：Geotrust 企业型（OV）通配符， 11：TrustAsia 域名型多域名 SSL 证书， 12：TrustAsia 域名型（DV）通配符， 13：TrustAsia 企业型通配符（OV）SSL 证书（D3）， 14：TrustAsia 企业型（OV）SSL 证书（D3）， 15：TrustAsia 企业型多域名 （OV）SSL 证书（D3）， 16：TrustAsia 增强型 （EV）SSL 证书（D3）， 17：TrustAsia 增强型多域名（EV）SSL 证书（D3）， 18：GlobalSign 企业型（OV）SSL 证书， 19：GlobalSign 企业型通配符 （OV）SSL 证书， 20：GlobalSign 增强型 （EV）SSL 证书， 21：TrustAsia 企业型通配符多域名（OV）SSL 证书（D3）， 22：GlobalSign 企业型多域名（OV）SSL 证书， 23：GlobalSign 企业型通配符多域名（OV）SSL 证书，24：GlobalSign 增强型多域名（EV）SSL 证书，25：Wotrus 域名型证书，26：Wotrus 域名型多域名证书，27：Wotrus 域名型通配符证书，28：Wotrus 企业型证书，29：Wotrus 企业型多域名证书，30：Wotrus 企业型通配符证书，31：Wotrus 增强型证书，32：Wotrus 增强型多域名证书，33：WoTrus-国密域名型证书，34：WoTrus-国密域名型证书（多域名），35：WoTrus-国密域名型证书（通配符），37：WoTrus-国密企业型证书，38：WoTrus-国密企业型证书（多域名），39：WoTrus-国密企业型证书（通配符），40：WoTrus-国密增强型证书，41：WoTrus-国密增强型证书（多域名），42：TrustAsia-域名型证书（通配符多域名），43：DNSPod-企业型(OV)SSL证书44：DNSPod-企业型(OV)通配符SSL证书45：DNSPod-企业型(OV)多域名SSL证书46：DNSPod-增强型(EV)SSL证书47：DNSPod-增强型(EV)多域名SSL证书48：DNSPod-域名型(DV)SSL证书49：DNSPod-域名型(DV)通配符SSL证书50：DNSPod-域名型(DV)多域名SSL证书51：DNSPod（国密）-企业型(OV)SSL证书52：DNSPod（国密）-企业型(OV)通配符SSL证书53：DNSPod（国密）-企业型(OV)多域名SSL证书54：DNSPod（国密）-域名型(DV)SSL证书55：DNSPod（国密）-域名型(DV)通配符SSL证书56：DNSPod（国密）-域名型(DV)多域名SSL证书57：SecureSite 企业型专业版多域名(OV Pro)58：SecureSite 企业型多域名(OV)59：SecureSite 增强型专业版多域名(EV Pro)60：SecureSite 增强型多域名(EV)61：Geotrust 增强型多域名(EV)75：SecureSite 企业型(OV)76：SecureSite 企业型(OV)通配符77：SecureSite 增强型(EV)78：Geotrust 企业型(OV)79：Geotrust 企业型(OV)通配符80：Geotrust 增强型(EV)81：GlobalSign 企业型（OV）SSL证书82：GlobalSign 企业型通配符 （OV）SSL证书83：TrustAsia C1 DV Free85：GlobalSign 增强型 （EV）SSL证书88：GlobalSign 企业型通配符多域名 （OV）SSL证书89：GlobalSign 企业型多域名 （OV）SSL证书90：GlobalSign 增强型多域名（EV） SSL证书91：Geotrust 增强型多域名(EV)92：SecureSite 企业型专业版多域名(OV Pro)93：SecureSite 企业型多域名(OV)94：SecureSite 增强型专业版多域名(EV Pro)95：SecureSite 增强型多域名(EV)96：SecureSite 增强型专业版(EV Pro)97：SecureSite 企业型专业版(OV Pro)98：CFCA 企业型(OV)SSL证书99：CFCA 企业型多域名(OV)SSL证书100：CFCA 企业型通配符(OV)SSL证书101：CFCA 增强型(EV)SSL证书</p>
                     * 
                     */
                    void SetPackageType(const std::string& _packageType);

                    /**
                     * 判断参数 PackageType 是否已赋值
                     * @return PackageType 是否已赋值
                     * 
                     */
                    bool PackageTypeHasBeenSet() const;

                    /**
                     * 获取<p>证书类型：CA = 客户端证书，SVR = 服务器证书。</p>
                     * @return CertificateType <p>证书类型：CA = 客户端证书，SVR = 服务器证书。</p>
                     * 
                     */
                    std::string GetCertificateType() const;

                    /**
                     * 设置<p>证书类型：CA = 客户端证书，SVR = 服务器证书。</p>
                     * @param _certificateType <p>证书类型：CA = 客户端证书，SVR = 服务器证书。</p>
                     * 
                     */
                    void SetCertificateType(const std::string& _certificateType);

                    /**
                     * 判断参数 CertificateType 是否已赋值
                     * @return CertificateType 是否已赋值
                     * 
                     */
                    bool CertificateTypeHasBeenSet() const;

                    /**
                     * 获取<p>证书产品名称</p>
                     * @return ProductZhName <p>证书产品名称</p>
                     * 
                     */
                    std::string GetProductZhName() const;

                    /**
                     * 设置<p>证书产品名称</p>
                     * @param _productZhName <p>证书产品名称</p>
                     * 
                     */
                    void SetProductZhName(const std::string& _productZhName);

                    /**
                     * 判断参数 ProductZhName 是否已赋值
                     * @return ProductZhName 是否已赋值
                     * 
                     */
                    bool ProductZhNameHasBeenSet() const;

                    /**
                     * 获取<p>主域名。</p>
                     * @return Domain <p>主域名。</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>主域名。</p>
                     * @param _domain <p>主域名。</p>
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取<p>备注名称。</p>
                     * @return Alias <p>备注名称。</p>
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置<p>备注名称。</p>
                     * @param _alias <p>备注名称。</p>
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取<p>证书状态：0 = 审核中，1 = 已通过，2 = 审核失败，3 = 已过期，4 = 自动添加DNS记录，5 = 企业证书，待提交资料，6 = 订单取消中，7 = 已取消，8 = 已提交资料， 待上传确认函，9 = 证书吊销中，10 = 已吊销，11 = 重颁发中，12 = 待上传吊销确认函，13 = 免费证书待提交资料。14 = 证书已退款。 15 = 证书迁移中</p>
                     * @return Status <p>证书状态：0 = 审核中，1 = 已通过，2 = 审核失败，3 = 已过期，4 = 自动添加DNS记录，5 = 企业证书，待提交资料，6 = 订单取消中，7 = 已取消，8 = 已提交资料， 待上传确认函，9 = 证书吊销中，10 = 已吊销，11 = 重颁发中，12 = 待上传吊销确认函，13 = 免费证书待提交资料。14 = 证书已退款。 15 = 证书迁移中</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>证书状态：0 = 审核中，1 = 已通过，2 = 审核失败，3 = 已过期，4 = 自动添加DNS记录，5 = 企业证书，待提交资料，6 = 订单取消中，7 = 已取消，8 = 已提交资料， 待上传确认函，9 = 证书吊销中，10 = 已吊销，11 = 重颁发中，12 = 待上传吊销确认函，13 = 免费证书待提交资料。14 = 证书已退款。 15 = 证书迁移中</p>
                     * @param _status <p>证书状态：0 = 审核中，1 = 已通过，2 = 审核失败，3 = 已过期，4 = 自动添加DNS记录，5 = 企业证书，待提交资料，6 = 订单取消中，7 = 已取消，8 = 已提交资料， 待上传确认函，9 = 证书吊销中，10 = 已吊销，11 = 重颁发中，12 = 待上传吊销确认函，13 = 免费证书待提交资料。14 = 证书已退款。 15 = 证书迁移中</p>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>证书扩展信息。</p>
                     * @return CertificateExtra <p>证书扩展信息。</p>
                     * 
                     */
                    CertificateExtra GetCertificateExtra() const;

                    /**
                     * 设置<p>证书扩展信息。</p>
                     * @param _certificateExtra <p>证书扩展信息。</p>
                     * 
                     */
                    void SetCertificateExtra(const CertificateExtra& _certificateExtra);

                    /**
                     * 判断参数 CertificateExtra 是否已赋值
                     * @return CertificateExtra 是否已赋值
                     * 
                     */
                    bool CertificateExtraHasBeenSet() const;

                    /**
                     * 获取<p>漏洞扫描状态：INACTIVE = 未开启，ACTIVE = 已开启</p>
                     * @return VulnerabilityStatus <p>漏洞扫描状态：INACTIVE = 未开启，ACTIVE = 已开启</p>
                     * 
                     */
                    std::string GetVulnerabilityStatus() const;

                    /**
                     * 设置<p>漏洞扫描状态：INACTIVE = 未开启，ACTIVE = 已开启</p>
                     * @param _vulnerabilityStatus <p>漏洞扫描状态：INACTIVE = 未开启，ACTIVE = 已开启</p>
                     * 
                     */
                    void SetVulnerabilityStatus(const std::string& _vulnerabilityStatus);

                    /**
                     * 判断参数 VulnerabilityStatus 是否已赋值
                     * @return VulnerabilityStatus 是否已赋值
                     * 
                     */
                    bool VulnerabilityStatusHasBeenSet() const;

                    /**
                     * 获取<p>状态信息。</p>
                     * @return StatusMsg <p>状态信息。</p>
                     * 
                     */
                    std::string GetStatusMsg() const;

                    /**
                     * 设置<p>状态信息。</p>
                     * @param _statusMsg <p>状态信息。</p>
                     * 
                     */
                    void SetStatusMsg(const std::string& _statusMsg);

                    /**
                     * 判断参数 StatusMsg 是否已赋值
                     * @return StatusMsg 是否已赋值
                     * 
                     */
                    bool StatusMsgHasBeenSet() const;

                    /**
                     * 获取<p>验证类型：DNS_AUTO = 自动DNS验证，DNS = 手动DNS验证，FILE = 文件验证，DNS_PROXY = DNS代理验证。FILE_PROXY = 文件代理验证</p>
                     * @return VerifyType <p>验证类型：DNS_AUTO = 自动DNS验证，DNS = 手动DNS验证，FILE = 文件验证，DNS_PROXY = DNS代理验证。FILE_PROXY = 文件代理验证</p>
                     * 
                     */
                    std::string GetVerifyType() const;

                    /**
                     * 设置<p>验证类型：DNS_AUTO = 自动DNS验证，DNS = 手动DNS验证，FILE = 文件验证，DNS_PROXY = DNS代理验证。FILE_PROXY = 文件代理验证</p>
                     * @param _verifyType <p>验证类型：DNS_AUTO = 自动DNS验证，DNS = 手动DNS验证，FILE = 文件验证，DNS_PROXY = DNS代理验证。FILE_PROXY = 文件代理验证</p>
                     * 
                     */
                    void SetVerifyType(const std::string& _verifyType);

                    /**
                     * 判断参数 VerifyType 是否已赋值
                     * @return VerifyType 是否已赋值
                     * 
                     */
                    bool VerifyTypeHasBeenSet() const;

                    /**
                     * 获取<p>证书生效时间。时区为GMT+8:00</p>
                     * @return CertBeginTime <p>证书生效时间。时区为GMT+8:00</p>
                     * 
                     */
                    std::string GetCertBeginTime() const;

                    /**
                     * 设置<p>证书生效时间。时区为GMT+8:00</p>
                     * @param _certBeginTime <p>证书生效时间。时区为GMT+8:00</p>
                     * 
                     */
                    void SetCertBeginTime(const std::string& _certBeginTime);

                    /**
                     * 判断参数 CertBeginTime 是否已赋值
                     * @return CertBeginTime 是否已赋值
                     * 
                     */
                    bool CertBeginTimeHasBeenSet() const;

                    /**
                     * 获取<p>证书过期时间。时区为GMT+8:00</p>
                     * @return CertEndTime <p>证书过期时间。时区为GMT+8:00</p>
                     * 
                     */
                    std::string GetCertEndTime() const;

                    /**
                     * 设置<p>证书过期时间。时区为GMT+8:00</p>
                     * @param _certEndTime <p>证书过期时间。时区为GMT+8:00</p>
                     * 
                     */
                    void SetCertEndTime(const std::string& _certEndTime);

                    /**
                     * 判断参数 CertEndTime 是否已赋值
                     * @return CertEndTime 是否已赋值
                     * 
                     */
                    bool CertEndTimeHasBeenSet() const;

                    /**
                     * 获取<p>证书有效期，单位（月）。</p>
                     * @return ValidityPeriod <p>证书有效期，单位（月）。</p>
                     * 
                     */
                    std::string GetValidityPeriod() const;

                    /**
                     * 设置<p>证书有效期，单位（月）。</p>
                     * @param _validityPeriod <p>证书有效期，单位（月）。</p>
                     * 
                     */
                    void SetValidityPeriod(const std::string& _validityPeriod);

                    /**
                     * 判断参数 ValidityPeriod 是否已赋值
                     * @return ValidityPeriod 是否已赋值
                     * 
                     */
                    bool ValidityPeriodHasBeenSet() const;

                    /**
                     * 获取<p>创建时间。时区为GMT+8:00</p>
                     * @return InsertTime <p>创建时间。时区为GMT+8:00</p>
                     * 
                     */
                    std::string GetInsertTime() const;

                    /**
                     * 设置<p>创建时间。时区为GMT+8:00</p>
                     * @param _insertTime <p>创建时间。时区为GMT+8:00</p>
                     * 
                     */
                    void SetInsertTime(const std::string& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     * 
                     */
                    bool InsertTimeHasBeenSet() const;

                    /**
                     * 获取<p>证书 ID。</p>
                     * @return CertificateId <p>证书 ID。</p>
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置<p>证书 ID。</p>
                     * @param _certificateId <p>证书 ID。</p>
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
                     * 获取<p>证书包含的多个域名（包含主域名）。</p>
                     * @return SubjectAltName <p>证书包含的多个域名（包含主域名）。</p>
                     * 
                     */
                    std::vector<std::string> GetSubjectAltName() const;

                    /**
                     * 设置<p>证书包含的多个域名（包含主域名）。</p>
                     * @param _subjectAltName <p>证书包含的多个域名（包含主域名）。</p>
                     * 
                     */
                    void SetSubjectAltName(const std::vector<std::string>& _subjectAltName);

                    /**
                     * 判断参数 SubjectAltName 是否已赋值
                     * @return SubjectAltName 是否已赋值
                     * 
                     */
                    bool SubjectAltNameHasBeenSet() const;

                    /**
                     * 获取<p>证书类型名称。</p>
                     * @return PackageTypeName <p>证书类型名称。</p>
                     * 
                     */
                    std::string GetPackageTypeName() const;

                    /**
                     * 设置<p>证书类型名称。</p>
                     * @param _packageTypeName <p>证书类型名称。</p>
                     * 
                     */
                    void SetPackageTypeName(const std::string& _packageTypeName);

                    /**
                     * 判断参数 PackageTypeName 是否已赋值
                     * @return PackageTypeName 是否已赋值
                     * 
                     */
                    bool PackageTypeNameHasBeenSet() const;

                    /**
                     * 获取<p>状态名称。</p>
                     * @return StatusName <p>状态名称。</p>
                     * 
                     */
                    std::string GetStatusName() const;

                    /**
                     * 设置<p>状态名称。</p>
                     * @param _statusName <p>状态名称。</p>
                     * 
                     */
                    void SetStatusName(const std::string& _statusName);

                    /**
                     * 判断参数 StatusName 是否已赋值
                     * @return StatusName 是否已赋值
                     * 
                     */
                    bool StatusNameHasBeenSet() const;

                    /**
                     * 获取<p>是否为 VIP 客户。</p>
                     * @return IsVip <p>是否为 VIP 客户。</p>
                     * 
                     */
                    bool GetIsVip() const;

                    /**
                     * 设置<p>是否为 VIP 客户。</p>
                     * @param _isVip <p>是否为 VIP 客户。</p>
                     * 
                     */
                    void SetIsVip(const bool& _isVip);

                    /**
                     * 判断参数 IsVip 是否已赋值
                     * @return IsVip 是否已赋值
                     * 
                     */
                    bool IsVipHasBeenSet() const;

                    /**
                     * 获取<p>是否为 DV 版证书。</p>
                     * @return IsDv <p>是否为 DV 版证书。</p>
                     * 
                     */
                    bool GetIsDv() const;

                    /**
                     * 设置<p>是否为 DV 版证书。</p>
                     * @param _isDv <p>是否为 DV 版证书。</p>
                     * 
                     */
                    void SetIsDv(const bool& _isDv);

                    /**
                     * 判断参数 IsDv 是否已赋值
                     * @return IsDv 是否已赋值
                     * 
                     */
                    bool IsDvHasBeenSet() const;

                    /**
                     * 获取<p>是否为泛域名证书。</p>
                     * @return IsWildcard <p>是否为泛域名证书。</p>
                     * 
                     */
                    bool GetIsWildcard() const;

                    /**
                     * 设置<p>是否为泛域名证书。</p>
                     * @param _isWildcard <p>是否为泛域名证书。</p>
                     * 
                     */
                    void SetIsWildcard(const bool& _isWildcard);

                    /**
                     * 判断参数 IsWildcard 是否已赋值
                     * @return IsWildcard 是否已赋值
                     * 
                     */
                    bool IsWildcardHasBeenSet() const;

                    /**
                     * 获取<p>是否启用了漏洞扫描功能。</p>
                     * @return IsVulnerability <p>是否启用了漏洞扫描功能。</p>
                     * 
                     */
                    bool GetIsVulnerability() const;

                    /**
                     * 设置<p>是否启用了漏洞扫描功能。</p>
                     * @param _isVulnerability <p>是否启用了漏洞扫描功能。</p>
                     * 
                     */
                    void SetIsVulnerability(const bool& _isVulnerability);

                    /**
                     * 判断参数 IsVulnerability 是否已赋值
                     * @return IsVulnerability 是否已赋值
                     * 
                     */
                    bool IsVulnerabilityHasBeenSet() const;

                    /**
                     * 获取<p>是否可续费。</p>
                     * @return RenewAble <p>是否可续费。</p>
                     * 
                     */
                    bool GetRenewAble() const;

                    /**
                     * 设置<p>是否可续费。</p>
                     * @param _renewAble <p>是否可续费。</p>
                     * 
                     */
                    void SetRenewAble(const bool& _renewAble);

                    /**
                     * 判断参数 RenewAble 是否已赋值
                     * @return RenewAble 是否已赋值
                     * 
                     */
                    bool RenewAbleHasBeenSet() const;

                    /**
                     * 获取<p>项目信息。</p>
                     * @return ProjectInfo <p>项目信息。</p>
                     * 
                     */
                    ProjectInfo GetProjectInfo() const;

                    /**
                     * 设置<p>项目信息。</p>
                     * @param _projectInfo <p>项目信息。</p>
                     * 
                     */
                    void SetProjectInfo(const ProjectInfo& _projectInfo);

                    /**
                     * 判断参数 ProjectInfo 是否已赋值
                     * @return ProjectInfo 是否已赋值
                     * 
                     */
                    bool ProjectInfoHasBeenSet() const;

                    /**
                     * 获取<p>关联的云资源，暂不可用</p>
                     * @return BoundResource <p>关联的云资源，暂不可用</p>
                     * 
                     */
                    std::vector<std::string> GetBoundResource() const;

                    /**
                     * 设置<p>关联的云资源，暂不可用</p>
                     * @param _boundResource <p>关联的云资源，暂不可用</p>
                     * 
                     */
                    void SetBoundResource(const std::vector<std::string>& _boundResource);

                    /**
                     * 判断参数 BoundResource 是否已赋值
                     * @return BoundResource 是否已赋值
                     * 
                     */
                    bool BoundResourceHasBeenSet() const;

                    /**
                     * 获取<p>是否可部署。</p>
                     * @return Deployable <p>是否可部署。</p>
                     * 
                     */
                    bool GetDeployable() const;

                    /**
                     * 设置<p>是否可部署。</p>
                     * @param _deployable <p>是否可部署。</p>
                     * 
                     */
                    void SetDeployable(const bool& _deployable);

                    /**
                     * 判断参数 Deployable 是否已赋值
                     * @return Deployable 是否已赋值
                     * 
                     */
                    bool DeployableHasBeenSet() const;

                    /**
                     * 获取<p>标签列表</p>
                     * @return Tags <p>标签列表</p>
                     * 
                     */
                    std::vector<Tags> GetTags() const;

                    /**
                     * 设置<p>标签列表</p>
                     * @param _tags <p>标签列表</p>
                     * 
                     */
                    void SetTags(const std::vector<Tags>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>是否已忽略到期通知</p>
                     * @return IsIgnore <p>是否已忽略到期通知</p>
                     * 
                     */
                    bool GetIsIgnore() const;

                    /**
                     * 设置<p>是否已忽略到期通知</p>
                     * @param _isIgnore <p>是否已忽略到期通知</p>
                     * 
                     */
                    void SetIsIgnore(const bool& _isIgnore);

                    /**
                     * 判断参数 IsIgnore 是否已赋值
                     * @return IsIgnore 是否已赋值
                     * 
                     */
                    bool IsIgnoreHasBeenSet() const;

                    /**
                     * 获取<p>是否国密证书</p>
                     * @return IsSM <p>是否国密证书</p>
                     * 
                     */
                    bool GetIsSM() const;

                    /**
                     * 设置<p>是否国密证书</p>
                     * @param _isSM <p>是否国密证书</p>
                     * 
                     */
                    void SetIsSM(const bool& _isSM);

                    /**
                     * 判断参数 IsSM 是否已赋值
                     * @return IsSM 是否已赋值
                     * 
                     */
                    bool IsSMHasBeenSet() const;

                    /**
                     * 获取<p>证书算法</p>
                     * @return EncryptAlgorithm <p>证书算法</p>
                     * 
                     */
                    std::string GetEncryptAlgorithm() const;

                    /**
                     * 设置<p>证书算法</p>
                     * @param _encryptAlgorithm <p>证书算法</p>
                     * 
                     */
                    void SetEncryptAlgorithm(const std::string& _encryptAlgorithm);

                    /**
                     * 判断参数 EncryptAlgorithm 是否已赋值
                     * @return EncryptAlgorithm 是否已赋值
                     * 
                     */
                    bool EncryptAlgorithmHasBeenSet() const;

                    /**
                     * 获取<p>上传CA证书的加密算法</p>
                     * @return CAEncryptAlgorithms <p>上传CA证书的加密算法</p>
                     * 
                     */
                    std::vector<std::string> GetCAEncryptAlgorithms() const;

                    /**
                     * 设置<p>上传CA证书的加密算法</p>
                     * @param _cAEncryptAlgorithms <p>上传CA证书的加密算法</p>
                     * 
                     */
                    void SetCAEncryptAlgorithms(const std::vector<std::string>& _cAEncryptAlgorithms);

                    /**
                     * 判断参数 CAEncryptAlgorithms 是否已赋值
                     * @return CAEncryptAlgorithms 是否已赋值
                     * 
                     */
                    bool CAEncryptAlgorithmsHasBeenSet() const;

                    /**
                     * 获取<p>上传CA证书的过期时间</p>
                     * @return CAEndTimes <p>上传CA证书的过期时间</p>
                     * 
                     */
                    std::vector<std::string> GetCAEndTimes() const;

                    /**
                     * 设置<p>上传CA证书的过期时间</p>
                     * @param _cAEndTimes <p>上传CA证书的过期时间</p>
                     * 
                     */
                    void SetCAEndTimes(const std::vector<std::string>& _cAEndTimes);

                    /**
                     * 判断参数 CAEndTimes 是否已赋值
                     * @return CAEndTimes 是否已赋值
                     * 
                     */
                    bool CAEndTimesHasBeenSet() const;

                    /**
                     * 获取<p>上传CA证书的通用名称</p>
                     * @return CACommonNames <p>上传CA证书的通用名称</p>
                     * 
                     */
                    std::vector<std::string> GetCACommonNames() const;

                    /**
                     * 设置<p>上传CA证书的通用名称</p>
                     * @param _cACommonNames <p>上传CA证书的通用名称</p>
                     * 
                     */
                    void SetCACommonNames(const std::vector<std::string>& _cACommonNames);

                    /**
                     * 判断参数 CACommonNames 是否已赋值
                     * @return CACommonNames 是否已赋值
                     * 
                     */
                    bool CACommonNamesHasBeenSet() const;

                    /**
                     * 获取<p>证书预审核信息</p>
                     * @return PreAuditInfo <p>证书预审核信息</p>
                     * 
                     */
                    PreAuditInfo GetPreAuditInfo() const;

                    /**
                     * 设置<p>证书预审核信息</p>
                     * @param _preAuditInfo <p>证书预审核信息</p>
                     * 
                     */
                    void SetPreAuditInfo(const PreAuditInfo& _preAuditInfo);

                    /**
                     * 判断参数 PreAuditInfo 是否已赋值
                     * @return PreAuditInfo 是否已赋值
                     * 
                     */
                    bool PreAuditInfoHasBeenSet() const;

                    /**
                     * 获取<p>是否自动续费</p>
                     * @return AutoRenewFlag <p>是否自动续费</p>
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置<p>是否自动续费</p>
                     * @param _autoRenewFlag <p>是否自动续费</p>
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>托管状态，0，托管中，5，资源替换中， 10， 托管完成， -1未托管 </p>
                     * @return HostingStatus <p>托管状态，0，托管中，5，资源替换中， 10， 托管完成， -1未托管 </p>
                     * 
                     */
                    int64_t GetHostingStatus() const;

                    /**
                     * 设置<p>托管状态，0，托管中，5，资源替换中， 10， 托管完成， -1未托管 </p>
                     * @param _hostingStatus <p>托管状态，0，托管中，5，资源替换中， 10， 托管完成， -1未托管 </p>
                     * 
                     */
                    void SetHostingStatus(const int64_t& _hostingStatus);

                    /**
                     * 判断参数 HostingStatus 是否已赋值
                     * @return HostingStatus 是否已赋值
                     * 
                     */
                    bool HostingStatusHasBeenSet() const;

                    /**
                     * 获取<p>托管完成时间</p>
                     * @return HostingCompleteTime <p>托管完成时间</p>
                     * 
                     */
                    std::string GetHostingCompleteTime() const;

                    /**
                     * 设置<p>托管完成时间</p>
                     * @param _hostingCompleteTime <p>托管完成时间</p>
                     * 
                     */
                    void SetHostingCompleteTime(const std::string& _hostingCompleteTime);

                    /**
                     * 判断参数 HostingCompleteTime 是否已赋值
                     * @return HostingCompleteTime 是否已赋值
                     * 
                     */
                    bool HostingCompleteTimeHasBeenSet() const;

                    /**
                     * 获取<p>托管新证书ID</p>
                     * @return HostingRenewCertId <p>托管新证书ID</p>
                     * 
                     */
                    std::string GetHostingRenewCertId() const;

                    /**
                     * 设置<p>托管新证书ID</p>
                     * @param _hostingRenewCertId <p>托管新证书ID</p>
                     * 
                     */
                    void SetHostingRenewCertId(const std::string& _hostingRenewCertId);

                    /**
                     * 判断参数 HostingRenewCertId 是否已赋值
                     * @return HostingRenewCertId 是否已赋值
                     * 
                     */
                    bool HostingRenewCertIdHasBeenSet() const;

                    /**
                     * 获取<p>存在的续费证书ID</p>
                     * @return HasRenewOrder <p>存在的续费证书ID</p>
                     * 
                     */
                    std::string GetHasRenewOrder() const;

                    /**
                     * 设置<p>存在的续费证书ID</p>
                     * @param _hasRenewOrder <p>存在的续费证书ID</p>
                     * 
                     */
                    void SetHasRenewOrder(const std::string& _hasRenewOrder);

                    /**
                     * 判断参数 HasRenewOrder 是否已赋值
                     * @return HasRenewOrder 是否已赋值
                     * 
                     */
                    bool HasRenewOrderHasBeenSet() const;

                    /**
                     * 获取<p>重颁发证书原证书是否删除</p>
                     * @return ReplaceOriCertIsDelete <p>重颁发证书原证书是否删除</p>
                     * 
                     */
                    bool GetReplaceOriCertIsDelete() const;

                    /**
                     * 设置<p>重颁发证书原证书是否删除</p>
                     * @param _replaceOriCertIsDelete <p>重颁发证书原证书是否删除</p>
                     * 
                     */
                    void SetReplaceOriCertIsDelete(const bool& _replaceOriCertIsDelete);

                    /**
                     * 判断参数 ReplaceOriCertIsDelete 是否已赋值
                     * @return ReplaceOriCertIsDelete 是否已赋值
                     * 
                     */
                    bool ReplaceOriCertIsDeleteHasBeenSet() const;

                    /**
                     * 获取<p>是否即将过期， 证书即将到期的30天内为即将过期</p>
                     * @return IsExpiring <p>是否即将过期， 证书即将到期的30天内为即将过期</p>
                     * 
                     */
                    bool GetIsExpiring() const;

                    /**
                     * 设置<p>是否即将过期， 证书即将到期的30天内为即将过期</p>
                     * @param _isExpiring <p>是否即将过期， 证书即将到期的30天内为即将过期</p>
                     * 
                     */
                    void SetIsExpiring(const bool& _isExpiring);

                    /**
                     * 判断参数 IsExpiring 是否已赋值
                     * @return IsExpiring 是否已赋值
                     * 
                     */
                    bool IsExpiringHasBeenSet() const;

                    /**
                     * 获取<p>DV证书添加验证截止时间，时区为GMT+8:00</p>
                     * @return DVAuthDeadline <p>DV证书添加验证截止时间，时区为GMT+8:00</p>
                     * 
                     */
                    std::string GetDVAuthDeadline() const;

                    /**
                     * 设置<p>DV证书添加验证截止时间，时区为GMT+8:00</p>
                     * @param _dVAuthDeadline <p>DV证书添加验证截止时间，时区为GMT+8:00</p>
                     * 
                     */
                    void SetDVAuthDeadline(const std::string& _dVAuthDeadline);

                    /**
                     * 判断参数 DVAuthDeadline 是否已赋值
                     * @return DVAuthDeadline 是否已赋值
                     * 
                     */
                    bool DVAuthDeadlineHasBeenSet() const;

                    /**
                     * 获取<p>域名验证通过时间，时区为GMT+8:00</p>
                     * @return ValidationPassedTime <p>域名验证通过时间，时区为GMT+8:00</p>
                     * 
                     */
                    std::string GetValidationPassedTime() const;

                    /**
                     * 设置<p>域名验证通过时间，时区为GMT+8:00</p>
                     * @param _validationPassedTime <p>域名验证通过时间，时区为GMT+8:00</p>
                     * 
                     */
                    void SetValidationPassedTime(const std::string& _validationPassedTime);

                    /**
                     * 判断参数 ValidationPassedTime 是否已赋值
                     * @return ValidationPassedTime 是否已赋值
                     * 
                     */
                    bool ValidationPassedTimeHasBeenSet() const;

                    /**
                     * 获取<p>证书关联的多域名</p>
                     * @return CertSANs <p>证书关联的多域名</p>
                     * 
                     */
                    std::vector<std::string> GetCertSANs() const;

                    /**
                     * 设置<p>证书关联的多域名</p>
                     * @param _certSANs <p>证书关联的多域名</p>
                     * 
                     */
                    void SetCertSANs(const std::vector<std::string>& _certSANs);

                    /**
                     * 判断参数 CertSANs 是否已赋值
                     * @return CertSANs 是否已赋值
                     * 
                     */
                    bool CertSANsHasBeenSet() const;

                    /**
                     * 获取<p>域名验证驳回信息</p>
                     * @return AwaitingValidationMsg <p>域名验证驳回信息</p>
                     * 
                     */
                    std::string GetAwaitingValidationMsg() const;

                    /**
                     * 设置<p>域名验证驳回信息</p>
                     * @param _awaitingValidationMsg <p>域名验证驳回信息</p>
                     * 
                     */
                    void SetAwaitingValidationMsg(const std::string& _awaitingValidationMsg);

                    /**
                     * 判断参数 AwaitingValidationMsg 是否已赋值
                     * @return AwaitingValidationMsg 是否已赋值
                     * 
                     */
                    bool AwaitingValidationMsgHasBeenSet() const;

                    /**
                     * 获取<p>是否允许下载</p>
                     * @return AllowDownload <p>是否允许下载</p>
                     * 
                     */
                    bool GetAllowDownload() const;

                    /**
                     * 设置<p>是否允许下载</p>
                     * @param _allowDownload <p>是否允许下载</p>
                     * 
                     */
                    void SetAllowDownload(const bool& _allowDownload);

                    /**
                     * 判断参数 AllowDownload 是否已赋值
                     * @return AllowDownload 是否已赋值
                     * 
                     */
                    bool AllowDownloadHasBeenSet() const;

                    /**
                     * 获取<p>证书域名是否全部在DNSPOD托管解析</p>
                     * @return IsDNSPODResolve <p>证书域名是否全部在DNSPOD托管解析</p>
                     * 
                     */
                    bool GetIsDNSPODResolve() const;

                    /**
                     * 设置<p>证书域名是否全部在DNSPOD托管解析</p>
                     * @param _isDNSPODResolve <p>证书域名是否全部在DNSPOD托管解析</p>
                     * 
                     */
                    void SetIsDNSPODResolve(const bool& _isDNSPODResolve);

                    /**
                     * 判断参数 IsDNSPODResolve 是否已赋值
                     * @return IsDNSPODResolve 是否已赋值
                     * 
                     */
                    bool IsDNSPODResolveHasBeenSet() const;

                    /**
                     * 获取<p>是否是权益点购买的证书</p>
                     * @return IsPackage <p>是否是权益点购买的证书</p>
                     * 
                     */
                    bool GetIsPackage() const;

                    /**
                     * 设置<p>是否是权益点购买的证书</p>
                     * @param _isPackage <p>是否是权益点购买的证书</p>
                     * 
                     */
                    void SetIsPackage(const bool& _isPackage);

                    /**
                     * 判断参数 IsPackage 是否已赋值
                     * @return IsPackage 是否已赋值
                     * 
                     */
                    bool IsPackageHasBeenSet() const;

                    /**
                     * 获取<p>是否存在私钥密码</p>
                     * @return KeyPasswordCustomFlag <p>是否存在私钥密码</p>
                     * 
                     */
                    bool GetKeyPasswordCustomFlag() const;

                    /**
                     * 设置<p>是否存在私钥密码</p>
                     * @param _keyPasswordCustomFlag <p>是否存在私钥密码</p>
                     * 
                     */
                    void SetKeyPasswordCustomFlag(const bool& _keyPasswordCustomFlag);

                    /**
                     * 判断参数 KeyPasswordCustomFlag 是否已赋值
                     * @return KeyPasswordCustomFlag 是否已赋值
                     * 
                     */
                    bool KeyPasswordCustomFlagHasBeenSet() const;

                    /**
                     * 获取<p>支持下载的WEB服务器类型： nginx、apache、iis、tomcat、jks、root、other</p>
                     * @return SupportDownloadType <p>支持下载的WEB服务器类型： nginx、apache、iis、tomcat、jks、root、other</p>
                     * 
                     */
                    SupportDownloadType GetSupportDownloadType() const;

                    /**
                     * 设置<p>支持下载的WEB服务器类型： nginx、apache、iis、tomcat、jks、root、other</p>
                     * @param _supportDownloadType <p>支持下载的WEB服务器类型： nginx、apache、iis、tomcat、jks、root、other</p>
                     * 
                     */
                    void SetSupportDownloadType(const SupportDownloadType& _supportDownloadType);

                    /**
                     * 判断参数 SupportDownloadType 是否已赋值
                     * @return SupportDownloadType 是否已赋值
                     * 
                     */
                    bool SupportDownloadTypeHasBeenSet() const;

                    /**
                     * 获取<p>证书吊销完成时间，时区为GMT+8:00</p>
                     * @return CertRevokedTime <p>证书吊销完成时间，时区为GMT+8:00</p>
                     * 
                     */
                    std::string GetCertRevokedTime() const;

                    /**
                     * 设置<p>证书吊销完成时间，时区为GMT+8:00</p>
                     * @param _certRevokedTime <p>证书吊销完成时间，时区为GMT+8:00</p>
                     * 
                     */
                    void SetCertRevokedTime(const std::string& _certRevokedTime);

                    /**
                     * 判断参数 CertRevokedTime 是否已赋值
                     * @return CertRevokedTime 是否已赋值
                     * 
                     */
                    bool CertRevokedTimeHasBeenSet() const;

                    /**
                     * 获取<p>托管资源类型列表</p>
                     * @return HostingResourceTypes <p>托管资源类型列表</p>
                     * 
                     */
                    std::vector<std::string> GetHostingResourceTypes() const;

                    /**
                     * 设置<p>托管资源类型列表</p>
                     * @param _hostingResourceTypes <p>托管资源类型列表</p>
                     * 
                     */
                    void SetHostingResourceTypes(const std::vector<std::string>& _hostingResourceTypes);

                    /**
                     * 判断参数 HostingResourceTypes 是否已赋值
                     * @return HostingResourceTypes 是否已赋值
                     * 
                     */
                    bool HostingResourceTypesHasBeenSet() const;

                    /**
                     * 获取<p>托管配置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostingConfig <p>托管配置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HostingConfig GetHostingConfig() const;

                    /**
                     * 设置<p>托管配置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hostingConfig <p>托管配置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHostingConfig(const HostingConfig& _hostingConfig);

                    /**
                     * 判断参数 HostingConfig 是否已赋值
                     * @return HostingConfig 是否已赋值
                     * 
                     */
                    bool HostingConfigHasBeenSet() const;

                    /**
                     * 获取<p>是否是上传托管续费证书</p>
                     * @return IsHostingUploadRenewCert <p>是否是上传托管续费证书</p>
                     * 
                     */
                    bool GetIsHostingUploadRenewCert() const;

                    /**
                     * 设置<p>是否是上传托管续费证书</p>
                     * @param _isHostingUploadRenewCert <p>是否是上传托管续费证书</p>
                     * 
                     */
                    void SetIsHostingUploadRenewCert(const bool& _isHostingUploadRenewCert);

                    /**
                     * 判断参数 IsHostingUploadRenewCert 是否已赋值
                     * @return IsHostingUploadRenewCert 是否已赋值
                     * 
                     */
                    bool IsHostingUploadRenewCertHasBeenSet() const;

                    /**
                     * 获取<p>订阅服务ID</p>
                     * @return ServiceId <p>订阅服务ID</p>
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置<p>订阅服务ID</p>
                     * @param _serviceId <p>订阅服务ID</p>
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取<p>订阅服务状态</p>枚举值：<ul><li> initing： 未激活</li><li> running： 生效中</li><li> expired： 已过期</li><li> refunded： 已退款</li><li> nearExpire： 即将到期</li></ul>
                     * @return ServiceStatus <p>订阅服务状态</p>枚举值：<ul><li> initing： 未激活</li><li> running： 生效中</li><li> expired： 已过期</li><li> refunded： 已退款</li><li> nearExpire： 即将到期</li></ul>
                     * 
                     */
                    std::string GetServiceStatus() const;

                    /**
                     * 设置<p>订阅服务状态</p>枚举值：<ul><li> initing： 未激活</li><li> running： 生效中</li><li> expired： 已过期</li><li> refunded： 已退款</li><li> nearExpire： 即将到期</li></ul>
                     * @param _serviceStatus <p>订阅服务状态</p>枚举值：<ul><li> initing： 未激活</li><li> running： 生效中</li><li> expired： 已过期</li><li> refunded： 已退款</li><li> nearExpire： 即将到期</li></ul>
                     * 
                     */
                    void SetServiceStatus(const std::string& _serviceStatus);

                    /**
                     * 判断参数 ServiceStatus 是否已赋值
                     * @return ServiceStatus 是否已赋值
                     * 
                     */
                    bool ServiceStatusHasBeenSet() const;

                    /**
                     * 获取<p>订阅服务开始时间</p>
                     * @return CertServiceBeginTime <p>订阅服务开始时间</p>
                     * 
                     */
                    std::string GetCertServiceBeginTime() const;

                    /**
                     * 设置<p>订阅服务开始时间</p>
                     * @param _certServiceBeginTime <p>订阅服务开始时间</p>
                     * 
                     */
                    void SetCertServiceBeginTime(const std::string& _certServiceBeginTime);

                    /**
                     * 判断参数 CertServiceBeginTime 是否已赋值
                     * @return CertServiceBeginTime 是否已赋值
                     * 
                     */
                    bool CertServiceBeginTimeHasBeenSet() const;

                    /**
                     * 获取<p>订阅服务结束时间</p>
                     * @return CertServiceEndTime <p>订阅服务结束时间</p>
                     * 
                     */
                    std::string GetCertServiceEndTime() const;

                    /**
                     * 设置<p>订阅服务结束时间</p>
                     * @param _certServiceEndTime <p>订阅服务结束时间</p>
                     * 
                     */
                    void SetCertServiceEndTime(const std::string& _certServiceEndTime);

                    /**
                     * 判断参数 CertServiceEndTime 是否已赋值
                     * @return CertServiceEndTime 是否已赋值
                     * 
                     */
                    bool CertServiceEndTimeHasBeenSet() const;

                private:

                    /**
                     * <p>用户 UIN。</p>
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * <p>项目 ID。</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>证书来源：trustasia：亚洲诚信，upload：用户上传。wosign：沃通sheca：上海CA</p>
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * <p>证书套餐类型：null：用户上传证书（没有套餐类型），2：TrustAsia TLS RSA CA， 3：SecureSite 增强型企业版（EV Pro）， 4：SecureSite 增强型（EV）， 5：SecureSite 企业型专业版（OV Pro），6：SecureSite 企业型（OV）， 7：SecureSite 企业型（OV）通配符， 8：Geotrust 增强型（EV）， 9：Geotrust 企业型（OV）， 10：Geotrust 企业型（OV）通配符， 11：TrustAsia 域名型多域名 SSL 证书， 12：TrustAsia 域名型（DV）通配符， 13：TrustAsia 企业型通配符（OV）SSL 证书（D3）， 14：TrustAsia 企业型（OV）SSL 证书（D3）， 15：TrustAsia 企业型多域名 （OV）SSL 证书（D3）， 16：TrustAsia 增强型 （EV）SSL 证书（D3）， 17：TrustAsia 增强型多域名（EV）SSL 证书（D3）， 18：GlobalSign 企业型（OV）SSL 证书， 19：GlobalSign 企业型通配符 （OV）SSL 证书， 20：GlobalSign 增强型 （EV）SSL 证书， 21：TrustAsia 企业型通配符多域名（OV）SSL 证书（D3）， 22：GlobalSign 企业型多域名（OV）SSL 证书， 23：GlobalSign 企业型通配符多域名（OV）SSL 证书，24：GlobalSign 增强型多域名（EV）SSL 证书，25：Wotrus 域名型证书，26：Wotrus 域名型多域名证书，27：Wotrus 域名型通配符证书，28：Wotrus 企业型证书，29：Wotrus 企业型多域名证书，30：Wotrus 企业型通配符证书，31：Wotrus 增强型证书，32：Wotrus 增强型多域名证书，33：WoTrus-国密域名型证书，34：WoTrus-国密域名型证书（多域名），35：WoTrus-国密域名型证书（通配符），37：WoTrus-国密企业型证书，38：WoTrus-国密企业型证书（多域名），39：WoTrus-国密企业型证书（通配符），40：WoTrus-国密增强型证书，41：WoTrus-国密增强型证书（多域名），42：TrustAsia-域名型证书（通配符多域名），43：DNSPod-企业型(OV)SSL证书44：DNSPod-企业型(OV)通配符SSL证书45：DNSPod-企业型(OV)多域名SSL证书46：DNSPod-增强型(EV)SSL证书47：DNSPod-增强型(EV)多域名SSL证书48：DNSPod-域名型(DV)SSL证书49：DNSPod-域名型(DV)通配符SSL证书50：DNSPod-域名型(DV)多域名SSL证书51：DNSPod（国密）-企业型(OV)SSL证书52：DNSPod（国密）-企业型(OV)通配符SSL证书53：DNSPod（国密）-企业型(OV)多域名SSL证书54：DNSPod（国密）-域名型(DV)SSL证书55：DNSPod（国密）-域名型(DV)通配符SSL证书56：DNSPod（国密）-域名型(DV)多域名SSL证书57：SecureSite 企业型专业版多域名(OV Pro)58：SecureSite 企业型多域名(OV)59：SecureSite 增强型专业版多域名(EV Pro)60：SecureSite 增强型多域名(EV)61：Geotrust 增强型多域名(EV)75：SecureSite 企业型(OV)76：SecureSite 企业型(OV)通配符77：SecureSite 增强型(EV)78：Geotrust 企业型(OV)79：Geotrust 企业型(OV)通配符80：Geotrust 增强型(EV)81：GlobalSign 企业型（OV）SSL证书82：GlobalSign 企业型通配符 （OV）SSL证书83：TrustAsia C1 DV Free85：GlobalSign 增强型 （EV）SSL证书88：GlobalSign 企业型通配符多域名 （OV）SSL证书89：GlobalSign 企业型多域名 （OV）SSL证书90：GlobalSign 增强型多域名（EV） SSL证书91：Geotrust 增强型多域名(EV)92：SecureSite 企业型专业版多域名(OV Pro)93：SecureSite 企业型多域名(OV)94：SecureSite 增强型专业版多域名(EV Pro)95：SecureSite 增强型多域名(EV)96：SecureSite 增强型专业版(EV Pro)97：SecureSite 企业型专业版(OV Pro)98：CFCA 企业型(OV)SSL证书99：CFCA 企业型多域名(OV)SSL证书100：CFCA 企业型通配符(OV)SSL证书101：CFCA 增强型(EV)SSL证书</p>
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * <p>证书类型：CA = 客户端证书，SVR = 服务器证书。</p>
                     */
                    std::string m_certificateType;
                    bool m_certificateTypeHasBeenSet;

                    /**
                     * <p>证书产品名称</p>
                     */
                    std::string m_productZhName;
                    bool m_productZhNameHasBeenSet;

                    /**
                     * <p>主域名。</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>备注名称。</p>
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * <p>证书状态：0 = 审核中，1 = 已通过，2 = 审核失败，3 = 已过期，4 = 自动添加DNS记录，5 = 企业证书，待提交资料，6 = 订单取消中，7 = 已取消，8 = 已提交资料， 待上传确认函，9 = 证书吊销中，10 = 已吊销，11 = 重颁发中，12 = 待上传吊销确认函，13 = 免费证书待提交资料。14 = 证书已退款。 15 = 证书迁移中</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>证书扩展信息。</p>
                     */
                    CertificateExtra m_certificateExtra;
                    bool m_certificateExtraHasBeenSet;

                    /**
                     * <p>漏洞扫描状态：INACTIVE = 未开启，ACTIVE = 已开启</p>
                     */
                    std::string m_vulnerabilityStatus;
                    bool m_vulnerabilityStatusHasBeenSet;

                    /**
                     * <p>状态信息。</p>
                     */
                    std::string m_statusMsg;
                    bool m_statusMsgHasBeenSet;

                    /**
                     * <p>验证类型：DNS_AUTO = 自动DNS验证，DNS = 手动DNS验证，FILE = 文件验证，DNS_PROXY = DNS代理验证。FILE_PROXY = 文件代理验证</p>
                     */
                    std::string m_verifyType;
                    bool m_verifyTypeHasBeenSet;

                    /**
                     * <p>证书生效时间。时区为GMT+8:00</p>
                     */
                    std::string m_certBeginTime;
                    bool m_certBeginTimeHasBeenSet;

                    /**
                     * <p>证书过期时间。时区为GMT+8:00</p>
                     */
                    std::string m_certEndTime;
                    bool m_certEndTimeHasBeenSet;

                    /**
                     * <p>证书有效期，单位（月）。</p>
                     */
                    std::string m_validityPeriod;
                    bool m_validityPeriodHasBeenSet;

                    /**
                     * <p>创建时间。时区为GMT+8:00</p>
                     */
                    std::string m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * <p>证书 ID。</p>
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * <p>证书包含的多个域名（包含主域名）。</p>
                     */
                    std::vector<std::string> m_subjectAltName;
                    bool m_subjectAltNameHasBeenSet;

                    /**
                     * <p>证书类型名称。</p>
                     */
                    std::string m_packageTypeName;
                    bool m_packageTypeNameHasBeenSet;

                    /**
                     * <p>状态名称。</p>
                     */
                    std::string m_statusName;
                    bool m_statusNameHasBeenSet;

                    /**
                     * <p>是否为 VIP 客户。</p>
                     */
                    bool m_isVip;
                    bool m_isVipHasBeenSet;

                    /**
                     * <p>是否为 DV 版证书。</p>
                     */
                    bool m_isDv;
                    bool m_isDvHasBeenSet;

                    /**
                     * <p>是否为泛域名证书。</p>
                     */
                    bool m_isWildcard;
                    bool m_isWildcardHasBeenSet;

                    /**
                     * <p>是否启用了漏洞扫描功能。</p>
                     */
                    bool m_isVulnerability;
                    bool m_isVulnerabilityHasBeenSet;

                    /**
                     * <p>是否可续费。</p>
                     */
                    bool m_renewAble;
                    bool m_renewAbleHasBeenSet;

                    /**
                     * <p>项目信息。</p>
                     */
                    ProjectInfo m_projectInfo;
                    bool m_projectInfoHasBeenSet;

                    /**
                     * <p>关联的云资源，暂不可用</p>
                     */
                    std::vector<std::string> m_boundResource;
                    bool m_boundResourceHasBeenSet;

                    /**
                     * <p>是否可部署。</p>
                     */
                    bool m_deployable;
                    bool m_deployableHasBeenSet;

                    /**
                     * <p>标签列表</p>
                     */
                    std::vector<Tags> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>是否已忽略到期通知</p>
                     */
                    bool m_isIgnore;
                    bool m_isIgnoreHasBeenSet;

                    /**
                     * <p>是否国密证书</p>
                     */
                    bool m_isSM;
                    bool m_isSMHasBeenSet;

                    /**
                     * <p>证书算法</p>
                     */
                    std::string m_encryptAlgorithm;
                    bool m_encryptAlgorithmHasBeenSet;

                    /**
                     * <p>上传CA证书的加密算法</p>
                     */
                    std::vector<std::string> m_cAEncryptAlgorithms;
                    bool m_cAEncryptAlgorithmsHasBeenSet;

                    /**
                     * <p>上传CA证书的过期时间</p>
                     */
                    std::vector<std::string> m_cAEndTimes;
                    bool m_cAEndTimesHasBeenSet;

                    /**
                     * <p>上传CA证书的通用名称</p>
                     */
                    std::vector<std::string> m_cACommonNames;
                    bool m_cACommonNamesHasBeenSet;

                    /**
                     * <p>证书预审核信息</p>
                     */
                    PreAuditInfo m_preAuditInfo;
                    bool m_preAuditInfoHasBeenSet;

                    /**
                     * <p>是否自动续费</p>
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * <p>托管状态，0，托管中，5，资源替换中， 10， 托管完成， -1未托管 </p>
                     */
                    int64_t m_hostingStatus;
                    bool m_hostingStatusHasBeenSet;

                    /**
                     * <p>托管完成时间</p>
                     */
                    std::string m_hostingCompleteTime;
                    bool m_hostingCompleteTimeHasBeenSet;

                    /**
                     * <p>托管新证书ID</p>
                     */
                    std::string m_hostingRenewCertId;
                    bool m_hostingRenewCertIdHasBeenSet;

                    /**
                     * <p>存在的续费证书ID</p>
                     */
                    std::string m_hasRenewOrder;
                    bool m_hasRenewOrderHasBeenSet;

                    /**
                     * <p>重颁发证书原证书是否删除</p>
                     */
                    bool m_replaceOriCertIsDelete;
                    bool m_replaceOriCertIsDeleteHasBeenSet;

                    /**
                     * <p>是否即将过期， 证书即将到期的30天内为即将过期</p>
                     */
                    bool m_isExpiring;
                    bool m_isExpiringHasBeenSet;

                    /**
                     * <p>DV证书添加验证截止时间，时区为GMT+8:00</p>
                     */
                    std::string m_dVAuthDeadline;
                    bool m_dVAuthDeadlineHasBeenSet;

                    /**
                     * <p>域名验证通过时间，时区为GMT+8:00</p>
                     */
                    std::string m_validationPassedTime;
                    bool m_validationPassedTimeHasBeenSet;

                    /**
                     * <p>证书关联的多域名</p>
                     */
                    std::vector<std::string> m_certSANs;
                    bool m_certSANsHasBeenSet;

                    /**
                     * <p>域名验证驳回信息</p>
                     */
                    std::string m_awaitingValidationMsg;
                    bool m_awaitingValidationMsgHasBeenSet;

                    /**
                     * <p>是否允许下载</p>
                     */
                    bool m_allowDownload;
                    bool m_allowDownloadHasBeenSet;

                    /**
                     * <p>证书域名是否全部在DNSPOD托管解析</p>
                     */
                    bool m_isDNSPODResolve;
                    bool m_isDNSPODResolveHasBeenSet;

                    /**
                     * <p>是否是权益点购买的证书</p>
                     */
                    bool m_isPackage;
                    bool m_isPackageHasBeenSet;

                    /**
                     * <p>是否存在私钥密码</p>
                     */
                    bool m_keyPasswordCustomFlag;
                    bool m_keyPasswordCustomFlagHasBeenSet;

                    /**
                     * <p>支持下载的WEB服务器类型： nginx、apache、iis、tomcat、jks、root、other</p>
                     */
                    SupportDownloadType m_supportDownloadType;
                    bool m_supportDownloadTypeHasBeenSet;

                    /**
                     * <p>证书吊销完成时间，时区为GMT+8:00</p>
                     */
                    std::string m_certRevokedTime;
                    bool m_certRevokedTimeHasBeenSet;

                    /**
                     * <p>托管资源类型列表</p>
                     */
                    std::vector<std::string> m_hostingResourceTypes;
                    bool m_hostingResourceTypesHasBeenSet;

                    /**
                     * <p>托管配置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HostingConfig m_hostingConfig;
                    bool m_hostingConfigHasBeenSet;

                    /**
                     * <p>是否是上传托管续费证书</p>
                     */
                    bool m_isHostingUploadRenewCert;
                    bool m_isHostingUploadRenewCertHasBeenSet;

                    /**
                     * <p>订阅服务ID</p>
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * <p>订阅服务状态</p>枚举值：<ul><li> initing： 未激活</li><li> running： 生效中</li><li> expired： 已过期</li><li> refunded： 已退款</li><li> nearExpire： 即将到期</li></ul>
                     */
                    std::string m_serviceStatus;
                    bool m_serviceStatusHasBeenSet;

                    /**
                     * <p>订阅服务开始时间</p>
                     */
                    std::string m_certServiceBeginTime;
                    bool m_certServiceBeginTimeHasBeenSet;

                    /**
                     * <p>订阅服务结束时间</p>
                     */
                    std::string m_certServiceEndTime;
                    bool m_certServiceEndTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATES_H_
