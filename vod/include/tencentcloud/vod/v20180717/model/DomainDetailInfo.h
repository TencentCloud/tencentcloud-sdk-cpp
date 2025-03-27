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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DOMAINDETAILINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DOMAINDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AccelerateAreaInfo.h>
#include <tencentcloud/vod/v20180717/model/DomainHTTPSConfig.h>
#include <tencentcloud/vod/v20180717/model/UrlSignatureAuthPolicy.h>
#include <tencentcloud/vod/v20180717/model/RefererAuthPolicy.h>
#include <tencentcloud/vod/v20180717/model/DomainQUICConfig.h>
#include <tencentcloud/vod/v20180717/model/IPFilterPolicy.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 域名信息
                */
                class DomainDetailInfo : public AbstractModel
                {
                public:
                    DomainDetailInfo();
                    ~DomainDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名名称。
                     * @return Domain 域名名称。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名名称。
                     * @param _domain 域名名称。
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
                     * 获取加速地区信息。
                     * @return AccelerateAreaInfos 加速地区信息。
                     * 
                     */
                    std::vector<AccelerateAreaInfo> GetAccelerateAreaInfos() const;

                    /**
                     * 设置加速地区信息。
                     * @param _accelerateAreaInfos 加速地区信息。
                     * 
                     */
                    void SetAccelerateAreaInfos(const std::vector<AccelerateAreaInfo>& _accelerateAreaInfos);

                    /**
                     * 判断参数 AccelerateAreaInfos 是否已赋值
                     * @return AccelerateAreaInfos 是否已赋值
                     * 
                     */
                    bool AccelerateAreaInfosHasBeenSet() const;

                    /**
                     * 获取部署状态，取值有：
<li>Online：上线；</li>
<li>Deploying：部署中；</li>
<li>Locked: 锁定中，出现该状态时，无法对该域名进行部署变更。</li>
                     * @return DeployStatus 部署状态，取值有：
<li>Online：上线；</li>
<li>Deploying：部署中；</li>
<li>Locked: 锁定中，出现该状态时，无法对该域名进行部署变更。</li>
                     * 
                     */
                    std::string GetDeployStatus() const;

                    /**
                     * 设置部署状态，取值有：
<li>Online：上线；</li>
<li>Deploying：部署中；</li>
<li>Locked: 锁定中，出现该状态时，无法对该域名进行部署变更。</li>
                     * @param _deployStatus 部署状态，取值有：
<li>Online：上线；</li>
<li>Deploying：部署中；</li>
<li>Locked: 锁定中，出现该状态时，无法对该域名进行部署变更。</li>
                     * 
                     */
                    void SetDeployStatus(const std::string& _deployStatus);

                    /**
                     * 判断参数 DeployStatus 是否已赋值
                     * @return DeployStatus 是否已赋值
                     * 
                     */
                    bool DeployStatusHasBeenSet() const;

                    /**
                     * 获取HTTPS 配置信息。
                     * @return HTTPSConfig HTTPS 配置信息。
                     * 
                     */
                    DomainHTTPSConfig GetHTTPSConfig() const;

                    /**
                     * 设置HTTPS 配置信息。
                     * @param _hTTPSConfig HTTPS 配置信息。
                     * 
                     */
                    void SetHTTPSConfig(const DomainHTTPSConfig& _hTTPSConfig);

                    /**
                     * 判断参数 HTTPSConfig 是否已赋值
                     * @return HTTPSConfig 是否已赋值
                     * 
                     */
                    bool HTTPSConfigHasBeenSet() const;

                    /**
                     * 获取[Key 防盗链](https://cloud.tencent.com/document/product/266/14047)配置信息。
                     * @return UrlSignatureAuthPolicy [Key 防盗链](https://cloud.tencent.com/document/product/266/14047)配置信息。
                     * 
                     */
                    UrlSignatureAuthPolicy GetUrlSignatureAuthPolicy() const;

                    /**
                     * 设置[Key 防盗链](https://cloud.tencent.com/document/product/266/14047)配置信息。
                     * @param _urlSignatureAuthPolicy [Key 防盗链](https://cloud.tencent.com/document/product/266/14047)配置信息。
                     * 
                     */
                    void SetUrlSignatureAuthPolicy(const UrlSignatureAuthPolicy& _urlSignatureAuthPolicy);

                    /**
                     * 判断参数 UrlSignatureAuthPolicy 是否已赋值
                     * @return UrlSignatureAuthPolicy 是否已赋值
                     * 
                     */
                    bool UrlSignatureAuthPolicyHasBeenSet() const;

                    /**
                     * 获取[Referer 防盗链](https://cloud.tencent.com/document/product/266/14046)配置信息。
                     * @return RefererAuthPolicy [Referer 防盗链](https://cloud.tencent.com/document/product/266/14046)配置信息。
                     * 
                     */
                    RefererAuthPolicy GetRefererAuthPolicy() const;

                    /**
                     * 设置[Referer 防盗链](https://cloud.tencent.com/document/product/266/14046)配置信息。
                     * @param _refererAuthPolicy [Referer 防盗链](https://cloud.tencent.com/document/product/266/14046)配置信息。
                     * 
                     */
                    void SetRefererAuthPolicy(const RefererAuthPolicy& _refererAuthPolicy);

                    /**
                     * 判断参数 RefererAuthPolicy 是否已赋值
                     * @return RefererAuthPolicy 是否已赋值
                     * 
                     */
                    bool RefererAuthPolicyHasBeenSet() const;

                    /**
                     * 获取域名添加到腾讯云点播系统中的时间。
<li>格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。</li>
                     * @return CreateTime 域名添加到腾讯云点播系统中的时间。
<li>格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。</li>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置域名添加到腾讯云点播系统中的时间。
<li>格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。</li>
                     * @param _createTime 域名添加到腾讯云点播系统中的时间。
<li>格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。</li>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取域名 QUIC 配置信息。
                     * @return QUICConfig 域名 QUIC 配置信息。
                     * 
                     */
                    DomainQUICConfig GetQUICConfig() const;

                    /**
                     * 设置域名 QUIC 配置信息。
                     * @param _qUICConfig 域名 QUIC 配置信息。
                     * 
                     */
                    void SetQUICConfig(const DomainQUICConfig& _qUICConfig);

                    /**
                     * 判断参数 QUICConfig 是否已赋值
                     * @return QUICConfig 是否已赋值
                     * 
                     */
                    bool QUICConfigHasBeenSet() const;

                    /**
                     * 获取IP 访问限制配置信息。
                     * @return IPFilterPolicy IP 访问限制配置信息。
                     * 
                     */
                    IPFilterPolicy GetIPFilterPolicy() const;

                    /**
                     * 设置IP 访问限制配置信息。
                     * @param _iPFilterPolicy IP 访问限制配置信息。
                     * 
                     */
                    void SetIPFilterPolicy(const IPFilterPolicy& _iPFilterPolicy);

                    /**
                     * 判断参数 IPFilterPolicy 是否已赋值
                     * @return IPFilterPolicy 是否已赋值
                     * 
                     */
                    bool IPFilterPolicyHasBeenSet() const;

                    /**
                     * 获取域名类型，取值有： <li>VOD：使用 VOD 产品分发的域名；</li> <li>EdgeOne：使用 EdgeOne 产品分发的域名。</li>
                     * @return Type 域名类型，取值有： <li>VOD：使用 VOD 产品分发的域名；</li> <li>EdgeOne：使用 EdgeOne 产品分发的域名。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置域名类型，取值有： <li>VOD：使用 VOD 产品分发的域名；</li> <li>EdgeOne：使用 EdgeOne 产品分发的域名。</li>
                     * @param _type 域名类型，取值有： <li>VOD：使用 VOD 产品分发的域名；</li> <li>EdgeOne：使用 EdgeOne 产品分发的域名。</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 域名名称。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 加速地区信息。
                     */
                    std::vector<AccelerateAreaInfo> m_accelerateAreaInfos;
                    bool m_accelerateAreaInfosHasBeenSet;

                    /**
                     * 部署状态，取值有：
<li>Online：上线；</li>
<li>Deploying：部署中；</li>
<li>Locked: 锁定中，出现该状态时，无法对该域名进行部署变更。</li>
                     */
                    std::string m_deployStatus;
                    bool m_deployStatusHasBeenSet;

                    /**
                     * HTTPS 配置信息。
                     */
                    DomainHTTPSConfig m_hTTPSConfig;
                    bool m_hTTPSConfigHasBeenSet;

                    /**
                     * [Key 防盗链](https://cloud.tencent.com/document/product/266/14047)配置信息。
                     */
                    UrlSignatureAuthPolicy m_urlSignatureAuthPolicy;
                    bool m_urlSignatureAuthPolicyHasBeenSet;

                    /**
                     * [Referer 防盗链](https://cloud.tencent.com/document/product/266/14046)配置信息。
                     */
                    RefererAuthPolicy m_refererAuthPolicy;
                    bool m_refererAuthPolicyHasBeenSet;

                    /**
                     * 域名添加到腾讯云点播系统中的时间。
<li>格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。</li>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 域名 QUIC 配置信息。
                     */
                    DomainQUICConfig m_qUICConfig;
                    bool m_qUICConfigHasBeenSet;

                    /**
                     * IP 访问限制配置信息。
                     */
                    IPFilterPolicy m_iPFilterPolicy;
                    bool m_iPFilterPolicyHasBeenSet;

                    /**
                     * 域名类型，取值有： <li>VOD：使用 VOD 产品分发的域名；</li> <li>EdgeOne：使用 EdgeOne 产品分发的域名。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DOMAINDETAILINFO_H_
