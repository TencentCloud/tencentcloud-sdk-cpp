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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_UPDATEDOMAINCONFIGREQUEST_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_UPDATEDOMAINCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecdn/v20191012/model/Origin.h>
#include <tencentcloud/ecdn/v20191012/model/IpFilter.h>
#include <tencentcloud/ecdn/v20191012/model/IpFreqLimit.h>
#include <tencentcloud/ecdn/v20191012/model/ResponseHeader.h>
#include <tencentcloud/ecdn/v20191012/model/CacheKey.h>
#include <tencentcloud/ecdn/v20191012/model/Cache.h>
#include <tencentcloud/ecdn/v20191012/model/Https.h>
#include <tencentcloud/ecdn/v20191012/model/ForceRedirect.h>
#include <tencentcloud/ecdn/v20191012/model/WebSocket.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
        {
            namespace Model
            {
                /**
                * UpdateDomainConfig请求参数结构体
                */
                class UpdateDomainConfigRequest : public AbstractModel
                {
                public:
                    UpdateDomainConfigRequest();
                    ~UpdateDomainConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名。
                     * @return Domain 域名。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名。
                     * @param _domain 域名。
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
                     * 获取源站配置。
                     * @return Origin 源站配置。
                     * 
                     */
                    Origin GetOrigin() const;

                    /**
                     * 设置源站配置。
                     * @param _origin 源站配置。
                     * 
                     */
                    void SetOrigin(const Origin& _origin);

                    /**
                     * 判断参数 Origin 是否已赋值
                     * @return Origin 是否已赋值
                     * 
                     */
                    bool OriginHasBeenSet() const;

                    /**
                     * 获取项目id。
                     * @return ProjectId 项目id。
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目id。
                     * @param _projectId 项目id。
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取IP黑白名单配置。
                     * @return IpFilter IP黑白名单配置。
                     * 
                     */
                    IpFilter GetIpFilter() const;

                    /**
                     * 设置IP黑白名单配置。
                     * @param _ipFilter IP黑白名单配置。
                     * 
                     */
                    void SetIpFilter(const IpFilter& _ipFilter);

                    /**
                     * 判断参数 IpFilter 是否已赋值
                     * @return IpFilter 是否已赋值
                     * 
                     */
                    bool IpFilterHasBeenSet() const;

                    /**
                     * 获取IP限频配置。
                     * @return IpFreqLimit IP限频配置。
                     * 
                     */
                    IpFreqLimit GetIpFreqLimit() const;

                    /**
                     * 设置IP限频配置。
                     * @param _ipFreqLimit IP限频配置。
                     * 
                     */
                    void SetIpFreqLimit(const IpFreqLimit& _ipFreqLimit);

                    /**
                     * 判断参数 IpFreqLimit 是否已赋值
                     * @return IpFreqLimit 是否已赋值
                     * 
                     */
                    bool IpFreqLimitHasBeenSet() const;

                    /**
                     * 获取源站响应头部配置。
                     * @return ResponseHeader 源站响应头部配置。
                     * 
                     */
                    ResponseHeader GetResponseHeader() const;

                    /**
                     * 设置源站响应头部配置。
                     * @param _responseHeader 源站响应头部配置。
                     * 
                     */
                    void SetResponseHeader(const ResponseHeader& _responseHeader);

                    /**
                     * 判断参数 ResponseHeader 是否已赋值
                     * @return ResponseHeader 是否已赋值
                     * 
                     */
                    bool ResponseHeaderHasBeenSet() const;

                    /**
                     * 获取节点缓存配置。
                     * @return CacheKey 节点缓存配置。
                     * 
                     */
                    CacheKey GetCacheKey() const;

                    /**
                     * 设置节点缓存配置。
                     * @param _cacheKey 节点缓存配置。
                     * 
                     */
                    void SetCacheKey(const CacheKey& _cacheKey);

                    /**
                     * 判断参数 CacheKey 是否已赋值
                     * @return CacheKey 是否已赋值
                     * 
                     */
                    bool CacheKeyHasBeenSet() const;

                    /**
                     * 获取缓存规则配置。
                     * @return Cache 缓存规则配置。
                     * 
                     */
                    Cache GetCache() const;

                    /**
                     * 设置缓存规则配置。
                     * @param _cache 缓存规则配置。
                     * 
                     */
                    void SetCache(const Cache& _cache);

                    /**
                     * 判断参数 Cache 是否已赋值
                     * @return Cache 是否已赋值
                     * 
                     */
                    bool CacheHasBeenSet() const;

                    /**
                     * 获取Https配置。
                     * @return Https Https配置。
                     * 
                     */
                    Https GetHttps() const;

                    /**
                     * 设置Https配置。
                     * @param _https Https配置。
                     * 
                     */
                    void SetHttps(const Https& _https);

                    /**
                     * 判断参数 Https 是否已赋值
                     * @return Https 是否已赋值
                     * 
                     */
                    bool HttpsHasBeenSet() const;

                    /**
                     * 获取访问协议强制跳转配置。
                     * @return ForceRedirect 访问协议强制跳转配置。
                     * 
                     */
                    ForceRedirect GetForceRedirect() const;

                    /**
                     * 设置访问协议强制跳转配置。
                     * @param _forceRedirect 访问协议强制跳转配置。
                     * 
                     */
                    void SetForceRedirect(const ForceRedirect& _forceRedirect);

                    /**
                     * 判断参数 ForceRedirect 是否已赋值
                     * @return ForceRedirect 是否已赋值
                     * 
                     */
                    bool ForceRedirectHasBeenSet() const;

                    /**
                     * 获取域名加速区域，mainland，overseas或global，分别表示中国境内加速，海外加速或全球加速。
                     * @return Area 域名加速区域，mainland，overseas或global，分别表示中国境内加速，海外加速或全球加速。
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置域名加速区域，mainland，overseas或global，分别表示中国境内加速，海外加速或全球加速。
                     * @param _area 域名加速区域，mainland，overseas或global，分别表示中国境内加速，海外加速或全球加速。
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取WebSocket配置
                     * @return WebSocket WebSocket配置
                     * 
                     */
                    WebSocket GetWebSocket() const;

                    /**
                     * 设置WebSocket配置
                     * @param _webSocket WebSocket配置
                     * 
                     */
                    void SetWebSocket(const WebSocket& _webSocket);

                    /**
                     * 判断参数 WebSocket 是否已赋值
                     * @return WebSocket 是否已赋值
                     * 
                     */
                    bool WebSocketHasBeenSet() const;

                private:

                    /**
                     * 域名。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 源站配置。
                     */
                    Origin m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * 项目id。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * IP黑白名单配置。
                     */
                    IpFilter m_ipFilter;
                    bool m_ipFilterHasBeenSet;

                    /**
                     * IP限频配置。
                     */
                    IpFreqLimit m_ipFreqLimit;
                    bool m_ipFreqLimitHasBeenSet;

                    /**
                     * 源站响应头部配置。
                     */
                    ResponseHeader m_responseHeader;
                    bool m_responseHeaderHasBeenSet;

                    /**
                     * 节点缓存配置。
                     */
                    CacheKey m_cacheKey;
                    bool m_cacheKeyHasBeenSet;

                    /**
                     * 缓存规则配置。
                     */
                    Cache m_cache;
                    bool m_cacheHasBeenSet;

                    /**
                     * Https配置。
                     */
                    Https m_https;
                    bool m_httpsHasBeenSet;

                    /**
                     * 访问协议强制跳转配置。
                     */
                    ForceRedirect m_forceRedirect;
                    bool m_forceRedirectHasBeenSet;

                    /**
                     * 域名加速区域，mainland，overseas或global，分别表示中国境内加速，海外加速或全球加速。
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * WebSocket配置
                     */
                    WebSocket m_webSocket;
                    bool m_webSocketHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_UPDATEDOMAINCONFIGREQUEST_H_
