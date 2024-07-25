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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_UPDATEDOMAINCONFIGREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_UPDATEDOMAINCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/Origin.h>
#include <tencentcloud/cdn/v20180606/model/IpFilter.h>
#include <tencentcloud/cdn/v20180606/model/IpFreqLimit.h>
#include <tencentcloud/cdn/v20180606/model/StatusCodeCache.h>
#include <tencentcloud/cdn/v20180606/model/Compression.h>
#include <tencentcloud/cdn/v20180606/model/BandwidthAlert.h>
#include <tencentcloud/cdn/v20180606/model/RangeOriginPull.h>
#include <tencentcloud/cdn/v20180606/model/FollowRedirect.h>
#include <tencentcloud/cdn/v20180606/model/ErrorPage.h>
#include <tencentcloud/cdn/v20180606/model/RequestHeader.h>
#include <tencentcloud/cdn/v20180606/model/ResponseHeader.h>
#include <tencentcloud/cdn/v20180606/model/DownstreamCapping.h>
#include <tencentcloud/cdn/v20180606/model/CacheKey.h>
#include <tencentcloud/cdn/v20180606/model/ResponseHeaderCache.h>
#include <tencentcloud/cdn/v20180606/model/VideoSeek.h>
#include <tencentcloud/cdn/v20180606/model/Cache.h>
#include <tencentcloud/cdn/v20180606/model/OriginPullOptimization.h>
#include <tencentcloud/cdn/v20180606/model/Https.h>
#include <tencentcloud/cdn/v20180606/model/Authentication.h>
#include <tencentcloud/cdn/v20180606/model/Seo.h>
#include <tencentcloud/cdn/v20180606/model/ForceRedirect.h>
#include <tencentcloud/cdn/v20180606/model/Referer.h>
#include <tencentcloud/cdn/v20180606/model/MaxAge.h>
#include <tencentcloud/cdn/v20180606/model/SpecificConfig.h>
#include <tencentcloud/cdn/v20180606/model/OriginPullTimeout.h>
#include <tencentcloud/cdn/v20180606/model/AwsPrivateAccess.h>
#include <tencentcloud/cdn/v20180606/model/UserAgentFilter.h>
#include <tencentcloud/cdn/v20180606/model/AccessControl.h>
#include <tencentcloud/cdn/v20180606/model/UrlRedirect.h>
#include <tencentcloud/cdn/v20180606/model/AdvancedAuthentication.h>
#include <tencentcloud/cdn/v20180606/model/OriginAuthentication.h>
#include <tencentcloud/cdn/v20180606/model/Ipv6Access.h>
#include <tencentcloud/cdn/v20180606/model/OfflineCache.h>
#include <tencentcloud/cdn/v20180606/model/OriginCombine.h>
#include <tencentcloud/cdn/v20180606/model/PostSize.h>
#include <tencentcloud/cdn/v20180606/model/Quic.h>
#include <tencentcloud/cdn/v20180606/model/OssPrivateAccess.h>
#include <tencentcloud/cdn/v20180606/model/WebSocket.h>
#include <tencentcloud/cdn/v20180606/model/RemoteAuthentication.h>
#include <tencentcloud/cdn/v20180606/model/ShareCname.h>
#include <tencentcloud/cdn/v20180606/model/HwPrivateAccess.h>
#include <tencentcloud/cdn/v20180606/model/QnPrivateAccess.h>
#include <tencentcloud/cdn/v20180606/model/OthersPrivateAccess.h>
#include <tencentcloud/cdn/v20180606/model/HttpsBilling.h>
#include <tencentcloud/cdn/v20180606/model/ParamFilter.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
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
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
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
                     * 获取项目 ID
                     * @return ProjectId 项目 ID
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目 ID
                     * @param _projectId 项目 ID
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
                     * 获取源站配置
                     * @return Origin 源站配置
                     * 
                     */
                    Origin GetOrigin() const;

                    /**
                     * 设置源站配置
                     * @param _origin 源站配置
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
                     * 获取IP 黑白名单配置
                     * @return IpFilter IP 黑白名单配置
                     * 
                     */
                    IpFilter GetIpFilter() const;

                    /**
                     * 设置IP 黑白名单配置
                     * @param _ipFilter IP 黑白名单配置
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
                     * 获取IP 限频配置
                     * @return IpFreqLimit IP 限频配置
                     * 
                     */
                    IpFreqLimit GetIpFreqLimit() const;

                    /**
                     * 设置IP 限频配置
                     * @param _ipFreqLimit IP 限频配置
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
                     * 获取状态码缓存配置
                     * @return StatusCodeCache 状态码缓存配置
                     * 
                     */
                    StatusCodeCache GetStatusCodeCache() const;

                    /**
                     * 设置状态码缓存配置
                     * @param _statusCodeCache 状态码缓存配置
                     * 
                     */
                    void SetStatusCodeCache(const StatusCodeCache& _statusCodeCache);

                    /**
                     * 判断参数 StatusCodeCache 是否已赋值
                     * @return StatusCodeCache 是否已赋值
                     * 
                     */
                    bool StatusCodeCacheHasBeenSet() const;

                    /**
                     * 获取智能压缩配置
                     * @return Compression 智能压缩配置
                     * 
                     */
                    Compression GetCompression() const;

                    /**
                     * 设置智能压缩配置
                     * @param _compression 智能压缩配置
                     * 
                     */
                    void SetCompression(const Compression& _compression);

                    /**
                     * 判断参数 Compression 是否已赋值
                     * @return Compression 是否已赋值
                     * 
                     */
                    bool CompressionHasBeenSet() const;

                    /**
                     * 获取带宽封顶配置
                     * @return BandwidthAlert 带宽封顶配置
                     * 
                     */
                    BandwidthAlert GetBandwidthAlert() const;

                    /**
                     * 设置带宽封顶配置
                     * @param _bandwidthAlert 带宽封顶配置
                     * 
                     */
                    void SetBandwidthAlert(const BandwidthAlert& _bandwidthAlert);

                    /**
                     * 判断参数 BandwidthAlert 是否已赋值
                     * @return BandwidthAlert 是否已赋值
                     * 
                     */
                    bool BandwidthAlertHasBeenSet() const;

                    /**
                     * 获取Range 回源配置
                     * @return RangeOriginPull Range 回源配置
                     * 
                     */
                    RangeOriginPull GetRangeOriginPull() const;

                    /**
                     * 设置Range 回源配置
                     * @param _rangeOriginPull Range 回源配置
                     * 
                     */
                    void SetRangeOriginPull(const RangeOriginPull& _rangeOriginPull);

                    /**
                     * 判断参数 RangeOriginPull 是否已赋值
                     * @return RangeOriginPull 是否已赋值
                     * 
                     */
                    bool RangeOriginPullHasBeenSet() const;

                    /**
                     * 获取301/302 回源跟随配置
                     * @return FollowRedirect 301/302 回源跟随配置
                     * 
                     */
                    FollowRedirect GetFollowRedirect() const;

                    /**
                     * 设置301/302 回源跟随配置
                     * @param _followRedirect 301/302 回源跟随配置
                     * 
                     */
                    void SetFollowRedirect(const FollowRedirect& _followRedirect);

                    /**
                     * 判断参数 FollowRedirect 是否已赋值
                     * @return FollowRedirect 是否已赋值
                     * 
                     */
                    bool FollowRedirectHasBeenSet() const;

                    /**
                     * 获取错误码重定向配置（功能灰度中，尚未全量）
                     * @return ErrorPage 错误码重定向配置（功能灰度中，尚未全量）
                     * 
                     */
                    ErrorPage GetErrorPage() const;

                    /**
                     * 设置错误码重定向配置（功能灰度中，尚未全量）
                     * @param _errorPage 错误码重定向配置（功能灰度中，尚未全量）
                     * 
                     */
                    void SetErrorPage(const ErrorPage& _errorPage);

                    /**
                     * 判断参数 ErrorPage 是否已赋值
                     * @return ErrorPage 是否已赋值
                     * 
                     */
                    bool ErrorPageHasBeenSet() const;

                    /**
                     * 获取回源请求头部配置
                     * @return RequestHeader 回源请求头部配置
                     * 
                     */
                    RequestHeader GetRequestHeader() const;

                    /**
                     * 设置回源请求头部配置
                     * @param _requestHeader 回源请求头部配置
                     * 
                     */
                    void SetRequestHeader(const RequestHeader& _requestHeader);

                    /**
                     * 判断参数 RequestHeader 是否已赋值
                     * @return RequestHeader 是否已赋值
                     * 
                     */
                    bool RequestHeaderHasBeenSet() const;

                    /**
                     * 获取响应头部配置
                     * @return ResponseHeader 响应头部配置
                     * 
                     */
                    ResponseHeader GetResponseHeader() const;

                    /**
                     * 设置响应头部配置
                     * @param _responseHeader 响应头部配置
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
                     * 获取下载速度配置
                     * @return DownstreamCapping 下载速度配置
                     * 
                     */
                    DownstreamCapping GetDownstreamCapping() const;

                    /**
                     * 设置下载速度配置
                     * @param _downstreamCapping 下载速度配置
                     * 
                     */
                    void SetDownstreamCapping(const DownstreamCapping& _downstreamCapping);

                    /**
                     * 判断参数 DownstreamCapping 是否已赋值
                     * @return DownstreamCapping 是否已赋值
                     * 
                     */
                    bool DownstreamCappingHasBeenSet() const;

                    /**
                     * 获取节点缓存键配置
                     * @return CacheKey 节点缓存键配置
                     * 
                     */
                    CacheKey GetCacheKey() const;

                    /**
                     * 设置节点缓存键配置
                     * @param _cacheKey 节点缓存键配置
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
                     * 获取头部缓存配置
                     * @return ResponseHeaderCache 头部缓存配置
                     * 
                     */
                    ResponseHeaderCache GetResponseHeaderCache() const;

                    /**
                     * 设置头部缓存配置
                     * @param _responseHeaderCache 头部缓存配置
                     * 
                     */
                    void SetResponseHeaderCache(const ResponseHeaderCache& _responseHeaderCache);

                    /**
                     * 判断参数 ResponseHeaderCache 是否已赋值
                     * @return ResponseHeaderCache 是否已赋值
                     * 
                     */
                    bool ResponseHeaderCacheHasBeenSet() const;

                    /**
                     * 获取视频拖拽配置
                     * @return VideoSeek 视频拖拽配置
                     * 
                     */
                    VideoSeek GetVideoSeek() const;

                    /**
                     * 设置视频拖拽配置
                     * @param _videoSeek 视频拖拽配置
                     * 
                     */
                    void SetVideoSeek(const VideoSeek& _videoSeek);

                    /**
                     * 判断参数 VideoSeek 是否已赋值
                     * @return VideoSeek 是否已赋值
                     * 
                     */
                    bool VideoSeekHasBeenSet() const;

                    /**
                     * 获取缓存过期时间配置
                     * @return Cache 缓存过期时间配置
                     * 
                     */
                    Cache GetCache() const;

                    /**
                     * 设置缓存过期时间配置
                     * @param _cache 缓存过期时间配置
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
                     * 获取跨国链路优化配置（已下线）
                     * @return OriginPullOptimization 跨国链路优化配置（已下线）
                     * 
                     */
                    OriginPullOptimization GetOriginPullOptimization() const;

                    /**
                     * 设置跨国链路优化配置（已下线）
                     * @param _originPullOptimization 跨国链路优化配置（已下线）
                     * 
                     */
                    void SetOriginPullOptimization(const OriginPullOptimization& _originPullOptimization);

                    /**
                     * 判断参数 OriginPullOptimization 是否已赋值
                     * @return OriginPullOptimization 是否已赋值
                     * 
                     */
                    bool OriginPullOptimizationHasBeenSet() const;

                    /**
                     * 获取Https 加速配置
                     * @return Https Https 加速配置
                     * 
                     */
                    Https GetHttps() const;

                    /**
                     * 设置Https 加速配置
                     * @param _https Https 加速配置
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
                     * 获取时间戳防盗链配置
                     * @return Authentication 时间戳防盗链配置
                     * 
                     */
                    Authentication GetAuthentication() const;

                    /**
                     * 设置时间戳防盗链配置
                     * @param _authentication 时间戳防盗链配置
                     * 
                     */
                    void SetAuthentication(const Authentication& _authentication);

                    /**
                     * 判断参数 Authentication 是否已赋值
                     * @return Authentication 是否已赋值
                     * 
                     */
                    bool AuthenticationHasBeenSet() const;

                    /**
                     * 获取SEO 优化配置
                     * @return Seo SEO 优化配置
                     * 
                     */
                    Seo GetSeo() const;

                    /**
                     * 设置SEO 优化配置
                     * @param _seo SEO 优化配置
                     * 
                     */
                    void SetSeo(const Seo& _seo);

                    /**
                     * 判断参数 Seo 是否已赋值
                     * @return Seo 是否已赋值
                     * 
                     */
                    bool SeoHasBeenSet() const;

                    /**
                     * 获取访问协议强制跳转配置
                     * @return ForceRedirect 访问协议强制跳转配置
                     * 
                     */
                    ForceRedirect GetForceRedirect() const;

                    /**
                     * 设置访问协议强制跳转配置
                     * @param _forceRedirect 访问协议强制跳转配置
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
                     * 获取Referer 防盗链配置
                     * @return Referer Referer 防盗链配置
                     * 
                     */
                    Referer GetReferer() const;

                    /**
                     * 设置Referer 防盗链配置
                     * @param _referer Referer 防盗链配置
                     * 
                     */
                    void SetReferer(const Referer& _referer);

                    /**
                     * 判断参数 Referer 是否已赋值
                     * @return Referer 是否已赋值
                     * 
                     */
                    bool RefererHasBeenSet() const;

                    /**
                     * 获取浏览器缓存配置（功能灰度中，尚未全量）
                     * @return MaxAge 浏览器缓存配置（功能灰度中，尚未全量）
                     * 
                     */
                    MaxAge GetMaxAge() const;

                    /**
                     * 设置浏览器缓存配置（功能灰度中，尚未全量）
                     * @param _maxAge 浏览器缓存配置（功能灰度中，尚未全量）
                     * 
                     */
                    void SetMaxAge(const MaxAge& _maxAge);

                    /**
                     * 判断参数 MaxAge 是否已赋值
                     * @return MaxAge 是否已赋值
                     * 
                     */
                    bool MaxAgeHasBeenSet() const;

                    /**
                     * 获取地域属性特殊配置
适用于域名境内加速、境外加速配置不一致场景
                     * @return SpecificConfig 地域属性特殊配置
适用于域名境内加速、境外加速配置不一致场景
                     * 
                     */
                    SpecificConfig GetSpecificConfig() const;

                    /**
                     * 设置地域属性特殊配置
适用于域名境内加速、境外加速配置不一致场景
                     * @param _specificConfig 地域属性特殊配置
适用于域名境内加速、境外加速配置不一致场景
                     * 
                     */
                    void SetSpecificConfig(const SpecificConfig& _specificConfig);

                    /**
                     * 判断参数 SpecificConfig 是否已赋值
                     * @return SpecificConfig 是否已赋值
                     * 
                     */
                    bool SpecificConfigHasBeenSet() const;

                    /**
                     * 获取域名业务类型
web：静态加速
download：下载加速
media：流媒体点播加速
                     * @return ServiceType 域名业务类型
web：静态加速
download：下载加速
media：流媒体点播加速
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置域名业务类型
web：静态加速
download：下载加速
media：流媒体点播加速
                     * @param _serviceType 域名业务类型
web：静态加速
download：下载加速
media：流媒体点播加速
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取域名加速区域
mainland：中国境内加速
overseas：中国境外加速
global：全球加速
从mainland/overseas修改至global时，域名的配置将被同步至overseas/mainland。若域名含有后端特殊配置，此类配置的同步过程有一定延时，请耐心等待
                     * @return Area 域名加速区域
mainland：中国境内加速
overseas：中国境外加速
global：全球加速
从mainland/overseas修改至global时，域名的配置将被同步至overseas/mainland。若域名含有后端特殊配置，此类配置的同步过程有一定延时，请耐心等待
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置域名加速区域
mainland：中国境内加速
overseas：中国境外加速
global：全球加速
从mainland/overseas修改至global时，域名的配置将被同步至overseas/mainland。若域名含有后端特殊配置，此类配置的同步过程有一定延时，请耐心等待
                     * @param _area 域名加速区域
mainland：中国境内加速
overseas：中国境外加速
global：全球加速
从mainland/overseas修改至global时，域名的配置将被同步至overseas/mainland。若域名含有后端特殊配置，此类配置的同步过程有一定延时，请耐心等待
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
                     * 获取回源超时配置
                     * @return OriginPullTimeout 回源超时配置
                     * 
                     */
                    OriginPullTimeout GetOriginPullTimeout() const;

                    /**
                     * 设置回源超时配置
                     * @param _originPullTimeout 回源超时配置
                     * 
                     */
                    void SetOriginPullTimeout(const OriginPullTimeout& _originPullTimeout);

                    /**
                     * 判断参数 OriginPullTimeout 是否已赋值
                     * @return OriginPullTimeout 是否已赋值
                     * 
                     */
                    bool OriginPullTimeoutHasBeenSet() const;

                    /**
                     * 获取回源S3私有鉴权
                     * @return AwsPrivateAccess 回源S3私有鉴权
                     * 
                     */
                    AwsPrivateAccess GetAwsPrivateAccess() const;

                    /**
                     * 设置回源S3私有鉴权
                     * @param _awsPrivateAccess 回源S3私有鉴权
                     * 
                     */
                    void SetAwsPrivateAccess(const AwsPrivateAccess& _awsPrivateAccess);

                    /**
                     * 判断参数 AwsPrivateAccess 是否已赋值
                     * @return AwsPrivateAccess 是否已赋值
                     * 
                     */
                    bool AwsPrivateAccessHasBeenSet() const;

                    /**
                     * 获取UA黑白名单配置
                     * @return UserAgentFilter UA黑白名单配置
                     * 
                     */
                    UserAgentFilter GetUserAgentFilter() const;

                    /**
                     * 设置UA黑白名单配置
                     * @param _userAgentFilter UA黑白名单配置
                     * 
                     */
                    void SetUserAgentFilter(const UserAgentFilter& _userAgentFilter);

                    /**
                     * 判断参数 UserAgentFilter 是否已赋值
                     * @return UserAgentFilter 是否已赋值
                     * 
                     */
                    bool UserAgentFilterHasBeenSet() const;

                    /**
                     * 获取访问控制
                     * @return AccessControl 访问控制
                     * 
                     */
                    AccessControl GetAccessControl() const;

                    /**
                     * 设置访问控制
                     * @param _accessControl 访问控制
                     * 
                     */
                    void SetAccessControl(const AccessControl& _accessControl);

                    /**
                     * 判断参数 AccessControl 是否已赋值
                     * @return AccessControl 是否已赋值
                     * 
                     */
                    bool AccessControlHasBeenSet() const;

                    /**
                     * 获取访问URL重写配置
                     * @return UrlRedirect 访问URL重写配置
                     * 
                     */
                    UrlRedirect GetUrlRedirect() const;

                    /**
                     * 设置访问URL重写配置
                     * @param _urlRedirect 访问URL重写配置
                     * 
                     */
                    void SetUrlRedirect(const UrlRedirect& _urlRedirect);

                    /**
                     * 判断参数 UrlRedirect 是否已赋值
                     * @return UrlRedirect 是否已赋值
                     * 
                     */
                    bool UrlRedirectHasBeenSet() const;

                    /**
                     * 获取访问端口配置
                     * @return AccessPort 访问端口配置
                     * 
                     */
                    std::vector<int64_t> GetAccessPort() const;

                    /**
                     * 设置访问端口配置
                     * @param _accessPort 访问端口配置
                     * 
                     */
                    void SetAccessPort(const std::vector<int64_t>& _accessPort);

                    /**
                     * 判断参数 AccessPort 是否已赋值
                     * @return AccessPort 是否已赋值
                     * 
                     */
                    bool AccessPortHasBeenSet() const;

                    /**
                     * 获取时间戳防盗链高级版配置，白名单功能
                     * @return AdvancedAuthentication 时间戳防盗链高级版配置，白名单功能
                     * 
                     */
                    AdvancedAuthentication GetAdvancedAuthentication() const;

                    /**
                     * 设置时间戳防盗链高级版配置，白名单功能
                     * @param _advancedAuthentication 时间戳防盗链高级版配置，白名单功能
                     * 
                     */
                    void SetAdvancedAuthentication(const AdvancedAuthentication& _advancedAuthentication);

                    /**
                     * 判断参数 AdvancedAuthentication 是否已赋值
                     * @return AdvancedAuthentication 是否已赋值
                     * 
                     */
                    bool AdvancedAuthenticationHasBeenSet() const;

                    /**
                     * 获取回源鉴权高级版配置，白名单功能
                     * @return OriginAuthentication 回源鉴权高级版配置，白名单功能
                     * 
                     */
                    OriginAuthentication GetOriginAuthentication() const;

                    /**
                     * 设置回源鉴权高级版配置，白名单功能
                     * @param _originAuthentication 回源鉴权高级版配置，白名单功能
                     * 
                     */
                    void SetOriginAuthentication(const OriginAuthentication& _originAuthentication);

                    /**
                     * 判断参数 OriginAuthentication 是否已赋值
                     * @return OriginAuthentication 是否已赋值
                     * 
                     */
                    bool OriginAuthenticationHasBeenSet() const;

                    /**
                     * 获取Ipv6 访问配置
                     * @return Ipv6Access Ipv6 访问配置
                     * 
                     */
                    Ipv6Access GetIpv6Access() const;

                    /**
                     * 设置Ipv6 访问配置
                     * @param _ipv6Access Ipv6 访问配置
                     * 
                     */
                    void SetIpv6Access(const Ipv6Access& _ipv6Access);

                    /**
                     * 判断参数 Ipv6Access 是否已赋值
                     * @return Ipv6Access 是否已赋值
                     * 
                     */
                    bool Ipv6AccessHasBeenSet() const;

                    /**
                     * 获取离线缓存
                     * @return OfflineCache 离线缓存
                     * 
                     */
                    OfflineCache GetOfflineCache() const;

                    /**
                     * 设置离线缓存
                     * @param _offlineCache 离线缓存
                     * 
                     */
                    void SetOfflineCache(const OfflineCache& _offlineCache);

                    /**
                     * 判断参数 OfflineCache 是否已赋值
                     * @return OfflineCache 是否已赋值
                     * 
                     */
                    bool OfflineCacheHasBeenSet() const;

                    /**
                     * 获取合并回源
                     * @return OriginCombine 合并回源
                     * 
                     */
                    OriginCombine GetOriginCombine() const;

                    /**
                     * 设置合并回源
                     * @param _originCombine 合并回源
                     * 
                     */
                    void SetOriginCombine(const OriginCombine& _originCombine);

                    /**
                     * 判断参数 OriginCombine 是否已赋值
                     * @return OriginCombine 是否已赋值
                     * 
                     */
                    bool OriginCombineHasBeenSet() const;

                    /**
                     * 获取POST请求传输配置
                     * @return PostMaxSize POST请求传输配置
                     * 
                     */
                    PostSize GetPostMaxSize() const;

                    /**
                     * 设置POST请求传输配置
                     * @param _postMaxSize POST请求传输配置
                     * 
                     */
                    void SetPostMaxSize(const PostSize& _postMaxSize);

                    /**
                     * 判断参数 PostMaxSize 是否已赋值
                     * @return PostMaxSize 是否已赋值
                     * 
                     */
                    bool PostMaxSizeHasBeenSet() const;

                    /**
                     * 获取Quic访问（收费服务，详见计费说明和产品文档）
                     * @return Quic Quic访问（收费服务，详见计费说明和产品文档）
                     * 
                     */
                    Quic GetQuic() const;

                    /**
                     * 设置Quic访问（收费服务，详见计费说明和产品文档）
                     * @param _quic Quic访问（收费服务，详见计费说明和产品文档）
                     * 
                     */
                    void SetQuic(const Quic& _quic);

                    /**
                     * 判断参数 Quic 是否已赋值
                     * @return Quic 是否已赋值
                     * 
                     */
                    bool QuicHasBeenSet() const;

                    /**
                     * 获取回源OSS私有鉴权
                     * @return OssPrivateAccess 回源OSS私有鉴权
                     * 
                     */
                    OssPrivateAccess GetOssPrivateAccess() const;

                    /**
                     * 设置回源OSS私有鉴权
                     * @param _ossPrivateAccess 回源OSS私有鉴权
                     * 
                     */
                    void SetOssPrivateAccess(const OssPrivateAccess& _ossPrivateAccess);

                    /**
                     * 判断参数 OssPrivateAccess 是否已赋值
                     * @return OssPrivateAccess 是否已赋值
                     * 
                     */
                    bool OssPrivateAccessHasBeenSet() const;

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

                    /**
                     * 获取远程鉴权配置
                     * @return RemoteAuthentication 远程鉴权配置
                     * 
                     */
                    RemoteAuthentication GetRemoteAuthentication() const;

                    /**
                     * 设置远程鉴权配置
                     * @param _remoteAuthentication 远程鉴权配置
                     * 
                     */
                    void SetRemoteAuthentication(const RemoteAuthentication& _remoteAuthentication);

                    /**
                     * 判断参数 RemoteAuthentication 是否已赋值
                     * @return RemoteAuthentication 是否已赋值
                     * 
                     */
                    bool RemoteAuthenticationHasBeenSet() const;

                    /**
                     * 获取共享CNAME配置，白名单功能
                     * @return ShareCname 共享CNAME配置，白名单功能
                     * 
                     */
                    ShareCname GetShareCname() const;

                    /**
                     * 设置共享CNAME配置，白名单功能
                     * @param _shareCname 共享CNAME配置，白名单功能
                     * 
                     */
                    void SetShareCname(const ShareCname& _shareCname);

                    /**
                     * 判断参数 ShareCname 是否已赋值
                     * @return ShareCname 是否已赋值
                     * 
                     */
                    bool ShareCnameHasBeenSet() const;

                    /**
                     * 获取华为云对象存储回源鉴权
                     * @return HwPrivateAccess 华为云对象存储回源鉴权
                     * 
                     */
                    HwPrivateAccess GetHwPrivateAccess() const;

                    /**
                     * 设置华为云对象存储回源鉴权
                     * @param _hwPrivateAccess 华为云对象存储回源鉴权
                     * 
                     */
                    void SetHwPrivateAccess(const HwPrivateAccess& _hwPrivateAccess);

                    /**
                     * 判断参数 HwPrivateAccess 是否已赋值
                     * @return HwPrivateAccess 是否已赋值
                     * 
                     */
                    bool HwPrivateAccessHasBeenSet() const;

                    /**
                     * 获取七牛云对象存储回源鉴权
                     * @return QnPrivateAccess 七牛云对象存储回源鉴权
                     * 
                     */
                    QnPrivateAccess GetQnPrivateAccess() const;

                    /**
                     * 设置七牛云对象存储回源鉴权
                     * @param _qnPrivateAccess 七牛云对象存储回源鉴权
                     * 
                     */
                    void SetQnPrivateAccess(const QnPrivateAccess& _qnPrivateAccess);

                    /**
                     * 判断参数 QnPrivateAccess 是否已赋值
                     * @return QnPrivateAccess 是否已赋值
                     * 
                     */
                    bool QnPrivateAccessHasBeenSet() const;

                    /**
                     * 获取其他厂商对象存储回源鉴权
                     * @return OthersPrivateAccess 其他厂商对象存储回源鉴权
                     * 
                     */
                    OthersPrivateAccess GetOthersPrivateAccess() const;

                    /**
                     * 设置其他厂商对象存储回源鉴权
                     * @param _othersPrivateAccess 其他厂商对象存储回源鉴权
                     * 
                     */
                    void SetOthersPrivateAccess(const OthersPrivateAccess& _othersPrivateAccess);

                    /**
                     * 判断参数 OthersPrivateAccess 是否已赋值
                     * @return OthersPrivateAccess 是否已赋值
                     * 
                     */
                    bool OthersPrivateAccessHasBeenSet() const;

                    /**
                     * 获取HTTPS服务（收费服务，详见计费说明和产品文档）
                     * @return HttpsBilling HTTPS服务（收费服务，详见计费说明和产品文档）
                     * 
                     */
                    HttpsBilling GetHttpsBilling() const;

                    /**
                     * 设置HTTPS服务（收费服务，详见计费说明和产品文档）
                     * @param _httpsBilling HTTPS服务（收费服务，详见计费说明和产品文档）
                     * 
                     */
                    void SetHttpsBilling(const HttpsBilling& _httpsBilling);

                    /**
                     * 判断参数 HttpsBilling 是否已赋值
                     * @return HttpsBilling 是否已赋值
                     * 
                     */
                    bool HttpsBillingHasBeenSet() const;

                    /**
                     * 获取参数黑名单
                     * @return ParamFilter 参数黑名单
                     * 
                     */
                    ParamFilter GetParamFilter() const;

                    /**
                     * 设置参数黑名单
                     * @param _paramFilter 参数黑名单
                     * 
                     */
                    void SetParamFilter(const ParamFilter& _paramFilter);

                    /**
                     * 判断参数 ParamFilter 是否已赋值
                     * @return ParamFilter 是否已赋值
                     * 
                     */
                    bool ParamFilterHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 项目 ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 源站配置
                     */
                    Origin m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * IP 黑白名单配置
                     */
                    IpFilter m_ipFilter;
                    bool m_ipFilterHasBeenSet;

                    /**
                     * IP 限频配置
                     */
                    IpFreqLimit m_ipFreqLimit;
                    bool m_ipFreqLimitHasBeenSet;

                    /**
                     * 状态码缓存配置
                     */
                    StatusCodeCache m_statusCodeCache;
                    bool m_statusCodeCacheHasBeenSet;

                    /**
                     * 智能压缩配置
                     */
                    Compression m_compression;
                    bool m_compressionHasBeenSet;

                    /**
                     * 带宽封顶配置
                     */
                    BandwidthAlert m_bandwidthAlert;
                    bool m_bandwidthAlertHasBeenSet;

                    /**
                     * Range 回源配置
                     */
                    RangeOriginPull m_rangeOriginPull;
                    bool m_rangeOriginPullHasBeenSet;

                    /**
                     * 301/302 回源跟随配置
                     */
                    FollowRedirect m_followRedirect;
                    bool m_followRedirectHasBeenSet;

                    /**
                     * 错误码重定向配置（功能灰度中，尚未全量）
                     */
                    ErrorPage m_errorPage;
                    bool m_errorPageHasBeenSet;

                    /**
                     * 回源请求头部配置
                     */
                    RequestHeader m_requestHeader;
                    bool m_requestHeaderHasBeenSet;

                    /**
                     * 响应头部配置
                     */
                    ResponseHeader m_responseHeader;
                    bool m_responseHeaderHasBeenSet;

                    /**
                     * 下载速度配置
                     */
                    DownstreamCapping m_downstreamCapping;
                    bool m_downstreamCappingHasBeenSet;

                    /**
                     * 节点缓存键配置
                     */
                    CacheKey m_cacheKey;
                    bool m_cacheKeyHasBeenSet;

                    /**
                     * 头部缓存配置
                     */
                    ResponseHeaderCache m_responseHeaderCache;
                    bool m_responseHeaderCacheHasBeenSet;

                    /**
                     * 视频拖拽配置
                     */
                    VideoSeek m_videoSeek;
                    bool m_videoSeekHasBeenSet;

                    /**
                     * 缓存过期时间配置
                     */
                    Cache m_cache;
                    bool m_cacheHasBeenSet;

                    /**
                     * 跨国链路优化配置（已下线）
                     */
                    OriginPullOptimization m_originPullOptimization;
                    bool m_originPullOptimizationHasBeenSet;

                    /**
                     * Https 加速配置
                     */
                    Https m_https;
                    bool m_httpsHasBeenSet;

                    /**
                     * 时间戳防盗链配置
                     */
                    Authentication m_authentication;
                    bool m_authenticationHasBeenSet;

                    /**
                     * SEO 优化配置
                     */
                    Seo m_seo;
                    bool m_seoHasBeenSet;

                    /**
                     * 访问协议强制跳转配置
                     */
                    ForceRedirect m_forceRedirect;
                    bool m_forceRedirectHasBeenSet;

                    /**
                     * Referer 防盗链配置
                     */
                    Referer m_referer;
                    bool m_refererHasBeenSet;

                    /**
                     * 浏览器缓存配置（功能灰度中，尚未全量）
                     */
                    MaxAge m_maxAge;
                    bool m_maxAgeHasBeenSet;

                    /**
                     * 地域属性特殊配置
适用于域名境内加速、境外加速配置不一致场景
                     */
                    SpecificConfig m_specificConfig;
                    bool m_specificConfigHasBeenSet;

                    /**
                     * 域名业务类型
web：静态加速
download：下载加速
media：流媒体点播加速
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 域名加速区域
mainland：中国境内加速
overseas：中国境外加速
global：全球加速
从mainland/overseas修改至global时，域名的配置将被同步至overseas/mainland。若域名含有后端特殊配置，此类配置的同步过程有一定延时，请耐心等待
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 回源超时配置
                     */
                    OriginPullTimeout m_originPullTimeout;
                    bool m_originPullTimeoutHasBeenSet;

                    /**
                     * 回源S3私有鉴权
                     */
                    AwsPrivateAccess m_awsPrivateAccess;
                    bool m_awsPrivateAccessHasBeenSet;

                    /**
                     * UA黑白名单配置
                     */
                    UserAgentFilter m_userAgentFilter;
                    bool m_userAgentFilterHasBeenSet;

                    /**
                     * 访问控制
                     */
                    AccessControl m_accessControl;
                    bool m_accessControlHasBeenSet;

                    /**
                     * 访问URL重写配置
                     */
                    UrlRedirect m_urlRedirect;
                    bool m_urlRedirectHasBeenSet;

                    /**
                     * 访问端口配置
                     */
                    std::vector<int64_t> m_accessPort;
                    bool m_accessPortHasBeenSet;

                    /**
                     * 时间戳防盗链高级版配置，白名单功能
                     */
                    AdvancedAuthentication m_advancedAuthentication;
                    bool m_advancedAuthenticationHasBeenSet;

                    /**
                     * 回源鉴权高级版配置，白名单功能
                     */
                    OriginAuthentication m_originAuthentication;
                    bool m_originAuthenticationHasBeenSet;

                    /**
                     * Ipv6 访问配置
                     */
                    Ipv6Access m_ipv6Access;
                    bool m_ipv6AccessHasBeenSet;

                    /**
                     * 离线缓存
                     */
                    OfflineCache m_offlineCache;
                    bool m_offlineCacheHasBeenSet;

                    /**
                     * 合并回源
                     */
                    OriginCombine m_originCombine;
                    bool m_originCombineHasBeenSet;

                    /**
                     * POST请求传输配置
                     */
                    PostSize m_postMaxSize;
                    bool m_postMaxSizeHasBeenSet;

                    /**
                     * Quic访问（收费服务，详见计费说明和产品文档）
                     */
                    Quic m_quic;
                    bool m_quicHasBeenSet;

                    /**
                     * 回源OSS私有鉴权
                     */
                    OssPrivateAccess m_ossPrivateAccess;
                    bool m_ossPrivateAccessHasBeenSet;

                    /**
                     * WebSocket配置
                     */
                    WebSocket m_webSocket;
                    bool m_webSocketHasBeenSet;

                    /**
                     * 远程鉴权配置
                     */
                    RemoteAuthentication m_remoteAuthentication;
                    bool m_remoteAuthenticationHasBeenSet;

                    /**
                     * 共享CNAME配置，白名单功能
                     */
                    ShareCname m_shareCname;
                    bool m_shareCnameHasBeenSet;

                    /**
                     * 华为云对象存储回源鉴权
                     */
                    HwPrivateAccess m_hwPrivateAccess;
                    bool m_hwPrivateAccessHasBeenSet;

                    /**
                     * 七牛云对象存储回源鉴权
                     */
                    QnPrivateAccess m_qnPrivateAccess;
                    bool m_qnPrivateAccessHasBeenSet;

                    /**
                     * 其他厂商对象存储回源鉴权
                     */
                    OthersPrivateAccess m_othersPrivateAccess;
                    bool m_othersPrivateAccessHasBeenSet;

                    /**
                     * HTTPS服务（收费服务，详见计费说明和产品文档）
                     */
                    HttpsBilling m_httpsBilling;
                    bool m_httpsBillingHasBeenSet;

                    /**
                     * 参数黑名单
                     */
                    ParamFilter m_paramFilter;
                    bool m_paramFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_UPDATEDOMAINCONFIGREQUEST_H_
