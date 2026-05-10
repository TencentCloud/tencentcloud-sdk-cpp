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
                     * 获取<p>域名名称。</p>
                     * @return Domain <p>域名名称。</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>域名名称。</p>
                     * @param _domain <p>域名名称。</p>
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
                     * 获取<p>加速地区信息。</p>
                     * @return AccelerateAreaInfos <p>加速地区信息。</p>
                     * 
                     */
                    std::vector<AccelerateAreaInfo> GetAccelerateAreaInfos() const;

                    /**
                     * 设置<p>加速地区信息。</p>
                     * @param _accelerateAreaInfos <p>加速地区信息。</p>
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
                     * 获取<p>部署状态，取值有：</p><li>Online：上线；</li><li>Deploying：部署中；</li><li>Locked: 锁定中，出现该状态时，无法对该域名进行部署变更。</li>
                     * @return DeployStatus <p>部署状态，取值有：</p><li>Online：上线；</li><li>Deploying：部署中；</li><li>Locked: 锁定中，出现该状态时，无法对该域名进行部署变更。</li>
                     * 
                     */
                    std::string GetDeployStatus() const;

                    /**
                     * 设置<p>部署状态，取值有：</p><li>Online：上线；</li><li>Deploying：部署中；</li><li>Locked: 锁定中，出现该状态时，无法对该域名进行部署变更。</li>
                     * @param _deployStatus <p>部署状态，取值有：</p><li>Online：上线；</li><li>Deploying：部署中；</li><li>Locked: 锁定中，出现该状态时，无法对该域名进行部署变更。</li>
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
                     * 获取<p>HTTPS 配置信息。</p>
                     * @return HTTPSConfig <p>HTTPS 配置信息。</p>
                     * 
                     */
                    DomainHTTPSConfig GetHTTPSConfig() const;

                    /**
                     * 设置<p>HTTPS 配置信息。</p>
                     * @param _hTTPSConfig <p>HTTPS 配置信息。</p>
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
                     * 获取<p><a href="https://cloud.tencent.com/document/product/266/14047">Key 防盗链</a>配置信息。</p>
                     * @return UrlSignatureAuthPolicy <p><a href="https://cloud.tencent.com/document/product/266/14047">Key 防盗链</a>配置信息。</p>
                     * 
                     */
                    UrlSignatureAuthPolicy GetUrlSignatureAuthPolicy() const;

                    /**
                     * 设置<p><a href="https://cloud.tencent.com/document/product/266/14047">Key 防盗链</a>配置信息。</p>
                     * @param _urlSignatureAuthPolicy <p><a href="https://cloud.tencent.com/document/product/266/14047">Key 防盗链</a>配置信息。</p>
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
                     * 获取<p><a href="https://cloud.tencent.com/document/product/266/14046">Referer 防盗链</a>配置信息。</p>
                     * @return RefererAuthPolicy <p><a href="https://cloud.tencent.com/document/product/266/14046">Referer 防盗链</a>配置信息。</p>
                     * 
                     */
                    RefererAuthPolicy GetRefererAuthPolicy() const;

                    /**
                     * 设置<p><a href="https://cloud.tencent.com/document/product/266/14046">Referer 防盗链</a>配置信息。</p>
                     * @param _refererAuthPolicy <p><a href="https://cloud.tencent.com/document/product/266/14046">Referer 防盗链</a>配置信息。</p>
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
                     * 获取<p>域名添加到腾讯云点播系统中的时间。<li>格式按照 ISO 8601标准表示，详见 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式说明</a>。</li></p>
                     * @return CreateTime <p>域名添加到腾讯云点播系统中的时间。<li>格式按照 ISO 8601标准表示，详见 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式说明</a>。</li></p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>域名添加到腾讯云点播系统中的时间。<li>格式按照 ISO 8601标准表示，详见 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式说明</a>。</li></p>
                     * @param _createTime <p>域名添加到腾讯云点播系统中的时间。<li>格式按照 ISO 8601标准表示，详见 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式说明</a>。</li></p>
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
                     * 获取<p>域名 QUIC 配置信息。</p>
                     * @return QUICConfig <p>域名 QUIC 配置信息。</p>
                     * 
                     */
                    DomainQUICConfig GetQUICConfig() const;

                    /**
                     * 设置<p>域名 QUIC 配置信息。</p>
                     * @param _qUICConfig <p>域名 QUIC 配置信息。</p>
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
                     * 获取<p>IP 访问限制配置信息。</p>
                     * @return IPFilterPolicy <p>IP 访问限制配置信息。</p>
                     * 
                     */
                    IPFilterPolicy GetIPFilterPolicy() const;

                    /**
                     * 设置<p>IP 访问限制配置信息。</p>
                     * @param _iPFilterPolicy <p>IP 访问限制配置信息。</p>
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
                     * 获取<p>域名类型，取值有： <li>VOD：使用 VOD 产品分发的域名；</li> <li>EdgeOne：使用 EdgeOne 产品分发的域名。</li></p>
                     * @return Type <p>域名类型，取值有： <li>VOD：使用 VOD 产品分发的域名；</li> <li>EdgeOne：使用 EdgeOne 产品分发的域名。</li></p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>域名类型，取值有： <li>VOD：使用 VOD 产品分发的域名；</li> <li>EdgeOne：使用 EdgeOne 产品分发的域名。</li></p>
                     * @param _type <p>域名类型，取值有： <li>VOD：使用 VOD 产品分发的域名；</li> <li>EdgeOne：使用 EdgeOne 产品分发的域名。</li></p>
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
                     * <p>域名名称。</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>加速地区信息。</p>
                     */
                    std::vector<AccelerateAreaInfo> m_accelerateAreaInfos;
                    bool m_accelerateAreaInfosHasBeenSet;

                    /**
                     * <p>部署状态，取值有：</p><li>Online：上线；</li><li>Deploying：部署中；</li><li>Locked: 锁定中，出现该状态时，无法对该域名进行部署变更。</li>
                     */
                    std::string m_deployStatus;
                    bool m_deployStatusHasBeenSet;

                    /**
                     * <p>HTTPS 配置信息。</p>
                     */
                    DomainHTTPSConfig m_hTTPSConfig;
                    bool m_hTTPSConfigHasBeenSet;

                    /**
                     * <p><a href="https://cloud.tencent.com/document/product/266/14047">Key 防盗链</a>配置信息。</p>
                     */
                    UrlSignatureAuthPolicy m_urlSignatureAuthPolicy;
                    bool m_urlSignatureAuthPolicyHasBeenSet;

                    /**
                     * <p><a href="https://cloud.tencent.com/document/product/266/14046">Referer 防盗链</a>配置信息。</p>
                     */
                    RefererAuthPolicy m_refererAuthPolicy;
                    bool m_refererAuthPolicyHasBeenSet;

                    /**
                     * <p>域名添加到腾讯云点播系统中的时间。<li>格式按照 ISO 8601标准表示，详见 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式说明</a>。</li></p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>域名 QUIC 配置信息。</p>
                     */
                    DomainQUICConfig m_qUICConfig;
                    bool m_qUICConfigHasBeenSet;

                    /**
                     * <p>IP 访问限制配置信息。</p>
                     */
                    IPFilterPolicy m_iPFilterPolicy;
                    bool m_iPFilterPolicyHasBeenSet;

                    /**
                     * <p>域名类型，取值有： <li>VOD：使用 VOD 产品分发的域名；</li> <li>EdgeOne：使用 EdgeOne 产品分发的域名。</li></p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DOMAINDETAILINFO_H_
