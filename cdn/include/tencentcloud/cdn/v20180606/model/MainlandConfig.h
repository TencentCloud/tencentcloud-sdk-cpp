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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_MAINLANDCONFIG_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_MAINLANDCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/Authentication.h>
#include <tencentcloud/cdn/v20180606/model/BandwidthAlert.h>
#include <tencentcloud/cdn/v20180606/model/Cache.h>
#include <tencentcloud/cdn/v20180606/model/CacheKey.h>
#include <tencentcloud/cdn/v20180606/model/Compression.h>
#include <tencentcloud/cdn/v20180606/model/DownstreamCapping.h>
#include <tencentcloud/cdn/v20180606/model/ErrorPage.h>
#include <tencentcloud/cdn/v20180606/model/FollowRedirect.h>
#include <tencentcloud/cdn/v20180606/model/ForceRedirect.h>
#include <tencentcloud/cdn/v20180606/model/Https.h>
#include <tencentcloud/cdn/v20180606/model/IpFilter.h>
#include <tencentcloud/cdn/v20180606/model/IpFreqLimit.h>
#include <tencentcloud/cdn/v20180606/model/MaxAge.h>
#include <tencentcloud/cdn/v20180606/model/Origin.h>
#include <tencentcloud/cdn/v20180606/model/OriginPullOptimization.h>
#include <tencentcloud/cdn/v20180606/model/RangeOriginPull.h>
#include <tencentcloud/cdn/v20180606/model/Referer.h>
#include <tencentcloud/cdn/v20180606/model/RequestHeader.h>
#include <tencentcloud/cdn/v20180606/model/ResponseHeader.h>
#include <tencentcloud/cdn/v20180606/model/ResponseHeaderCache.h>
#include <tencentcloud/cdn/v20180606/model/Seo.h>
#include <tencentcloud/cdn/v20180606/model/StatusCodeCache.h>
#include <tencentcloud/cdn/v20180606/model/VideoSeek.h>
#include <tencentcloud/cdn/v20180606/model/AwsPrivateAccess.h>
#include <tencentcloud/cdn/v20180606/model/OssPrivateAccess.h>
#include <tencentcloud/cdn/v20180606/model/HwPrivateAccess.h>
#include <tencentcloud/cdn/v20180606/model/QnPrivateAccess.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 域名国内地区特殊配置。分地区特殊配置。UpdateDomainConfig接口只支持修改部分地区配置，为了兼容旧版本配置，本类型会列出旧版本所有可能存在差异的配置列表，支持修改的配置列表如下：
+ Authentication
+ BandwidthAlert
+ ErrorPage
+ IpFilter
+ Origin
+ Referer
                */
                class MainlandConfig : public AbstractModel
                {
                public:
                    MainlandConfig();
                    ~MainlandConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取时间戳防盗链配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Authentication 时间戳防盗链配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Authentication GetAuthentication() const;

                    /**
                     * 设置时间戳防盗链配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authentication 时间戳防盗链配置。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取带宽封顶配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BandwidthAlert 带宽封顶配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BandwidthAlert GetBandwidthAlert() const;

                    /**
                     * 设置带宽封顶配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bandwidthAlert 带宽封顶配置。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取缓存规则配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cache 缓存规则配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Cache GetCache() const;

                    /**
                     * 设置缓存规则配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cache 缓存规则配置。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取缓存相关配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CacheKey 缓存相关配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CacheKey GetCacheKey() const;

                    /**
                     * 设置缓存相关配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cacheKey 缓存相关配置。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取智能压缩配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Compression 智能压缩配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Compression GetCompression() const;

                    /**
                     * 设置智能压缩配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _compression 智能压缩配置。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取下载限速配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DownstreamCapping 下载限速配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DownstreamCapping GetDownstreamCapping() const;

                    /**
                     * 设置下载限速配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _downstreamCapping 下载限速配置。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取错误码重定向配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorPage 错误码重定向配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ErrorPage GetErrorPage() const;

                    /**
                     * 设置错误码重定向配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorPage 错误码重定向配置。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取301和302自动回源跟随配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FollowRedirect 301和302自动回源跟随配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    FollowRedirect GetFollowRedirect() const;

                    /**
                     * 设置301和302自动回源跟随配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _followRedirect 301和302自动回源跟随配置。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取访问协议强制跳转配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ForceRedirect 访问协议强制跳转配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ForceRedirect GetForceRedirect() const;

                    /**
                     * 设置访问协议强制跳转配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _forceRedirect 访问协议强制跳转配置。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取Https配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Https Https配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Https GetHttps() const;

                    /**
                     * 设置Https配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _https Https配置。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取IP黑白名单配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpFilter IP黑白名单配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    IpFilter GetIpFilter() const;

                    /**
                     * 设置IP黑白名单配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipFilter IP黑白名单配置。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpFreqLimit IP限频配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    IpFreqLimit GetIpFreqLimit() const;

                    /**
                     * 设置IP限频配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipFreqLimit IP限频配置。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取浏览器缓存规则配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxAge 浏览器缓存规则配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MaxAge GetMaxAge() const;

                    /**
                     * 设置浏览器缓存规则配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxAge 浏览器缓存规则配置。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取源站配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Origin 源站配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Origin GetOrigin() const;

                    /**
                     * 设置源站配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _origin 源站配置。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取跨国优化配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginPullOptimization 跨国优化配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OriginPullOptimization GetOriginPullOptimization() const;

                    /**
                     * 设置跨国优化配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _originPullOptimization 跨国优化配置。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取Range回源配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RangeOriginPull Range回源配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RangeOriginPull GetRangeOriginPull() const;

                    /**
                     * 设置Range回源配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rangeOriginPull Range回源配置。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取防盗链配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Referer 防盗链配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Referer GetReferer() const;

                    /**
                     * 设置防盗链配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _referer 防盗链配置。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取回源请求头部配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestHeader 回源请求头部配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RequestHeader GetRequestHeader() const;

                    /**
                     * 设置回源请求头部配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _requestHeader 回源请求头部配置。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取源站响应头部配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResponseHeader 源站响应头部配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ResponseHeader GetResponseHeader() const;

                    /**
                     * 设置源站响应头部配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _responseHeader 源站响应头部配置。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取遵循源站缓存头部配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResponseHeaderCache 遵循源站缓存头部配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ResponseHeaderCache GetResponseHeaderCache() const;

                    /**
                     * 设置遵循源站缓存头部配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _responseHeaderCache 遵循源站缓存头部配置。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取seo优化配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Seo seo优化配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Seo GetSeo() const;

                    /**
                     * 设置seo优化配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _seo seo优化配置。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取域名业务类型，web，download，media分别表示静态加速，下载加速和流媒体加速。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceType 域名业务类型，web，download，media分别表示静态加速，下载加速和流媒体加速。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置域名业务类型，web，download，media分别表示静态加速，下载加速和流媒体加速。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceType 域名业务类型，web，download，media分别表示静态加速，下载加速和流媒体加速。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取状态码缓存配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusCodeCache 状态码缓存配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    StatusCodeCache GetStatusCodeCache() const;

                    /**
                     * 设置状态码缓存配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statusCodeCache 状态码缓存配置。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取视频拖拽配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VideoSeek 视频拖拽配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    VideoSeek GetVideoSeek() const;

                    /**
                     * 设置视频拖拽配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _videoSeek 视频拖拽配置。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取回源S3私有鉴权。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AwsPrivateAccess 回源S3私有鉴权。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AwsPrivateAccess GetAwsPrivateAccess() const;

                    /**
                     * 设置回源S3私有鉴权。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _awsPrivateAccess 回源S3私有鉴权。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取回源OSS私有鉴权。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OssPrivateAccess 回源OSS私有鉴权。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OssPrivateAccess GetOssPrivateAccess() const;

                    /**
                     * 设置回源OSS私有鉴权。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ossPrivateAccess 回源OSS私有鉴权。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取华为云对象存储回源鉴权
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HwPrivateAccess 华为云对象存储回源鉴权
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HwPrivateAccess GetHwPrivateAccess() const;

                    /**
                     * 设置华为云对象存储回源鉴权
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hwPrivateAccess 华为云对象存储回源鉴权
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QnPrivateAccess 七牛云对象存储回源鉴权
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    QnPrivateAccess GetQnPrivateAccess() const;

                    /**
                     * 设置七牛云对象存储回源鉴权
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qnPrivateAccess 七牛云对象存储回源鉴权
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQnPrivateAccess(const QnPrivateAccess& _qnPrivateAccess);

                    /**
                     * 判断参数 QnPrivateAccess 是否已赋值
                     * @return QnPrivateAccess 是否已赋值
                     * 
                     */
                    bool QnPrivateAccessHasBeenSet() const;

                private:

                    /**
                     * 时间戳防盗链配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Authentication m_authentication;
                    bool m_authenticationHasBeenSet;

                    /**
                     * 带宽封顶配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BandwidthAlert m_bandwidthAlert;
                    bool m_bandwidthAlertHasBeenSet;

                    /**
                     * 缓存规则配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Cache m_cache;
                    bool m_cacheHasBeenSet;

                    /**
                     * 缓存相关配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CacheKey m_cacheKey;
                    bool m_cacheKeyHasBeenSet;

                    /**
                     * 智能压缩配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Compression m_compression;
                    bool m_compressionHasBeenSet;

                    /**
                     * 下载限速配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DownstreamCapping m_downstreamCapping;
                    bool m_downstreamCappingHasBeenSet;

                    /**
                     * 错误码重定向配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ErrorPage m_errorPage;
                    bool m_errorPageHasBeenSet;

                    /**
                     * 301和302自动回源跟随配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FollowRedirect m_followRedirect;
                    bool m_followRedirectHasBeenSet;

                    /**
                     * 访问协议强制跳转配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ForceRedirect m_forceRedirect;
                    bool m_forceRedirectHasBeenSet;

                    /**
                     * Https配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Https m_https;
                    bool m_httpsHasBeenSet;

                    /**
                     * IP黑白名单配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IpFilter m_ipFilter;
                    bool m_ipFilterHasBeenSet;

                    /**
                     * IP限频配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IpFreqLimit m_ipFreqLimit;
                    bool m_ipFreqLimitHasBeenSet;

                    /**
                     * 浏览器缓存规则配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MaxAge m_maxAge;
                    bool m_maxAgeHasBeenSet;

                    /**
                     * 源站配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Origin m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * 跨国优化配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OriginPullOptimization m_originPullOptimization;
                    bool m_originPullOptimizationHasBeenSet;

                    /**
                     * Range回源配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RangeOriginPull m_rangeOriginPull;
                    bool m_rangeOriginPullHasBeenSet;

                    /**
                     * 防盗链配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Referer m_referer;
                    bool m_refererHasBeenSet;

                    /**
                     * 回源请求头部配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RequestHeader m_requestHeader;
                    bool m_requestHeaderHasBeenSet;

                    /**
                     * 源站响应头部配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ResponseHeader m_responseHeader;
                    bool m_responseHeaderHasBeenSet;

                    /**
                     * 遵循源站缓存头部配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ResponseHeaderCache m_responseHeaderCache;
                    bool m_responseHeaderCacheHasBeenSet;

                    /**
                     * seo优化配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Seo m_seo;
                    bool m_seoHasBeenSet;

                    /**
                     * 域名业务类型，web，download，media分别表示静态加速，下载加速和流媒体加速。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 状态码缓存配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StatusCodeCache m_statusCodeCache;
                    bool m_statusCodeCacheHasBeenSet;

                    /**
                     * 视频拖拽配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VideoSeek m_videoSeek;
                    bool m_videoSeekHasBeenSet;

                    /**
                     * 回源S3私有鉴权。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AwsPrivateAccess m_awsPrivateAccess;
                    bool m_awsPrivateAccessHasBeenSet;

                    /**
                     * 回源OSS私有鉴权。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OssPrivateAccess m_ossPrivateAccess;
                    bool m_ossPrivateAccessHasBeenSet;

                    /**
                     * 华为云对象存储回源鉴权
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HwPrivateAccess m_hwPrivateAccess;
                    bool m_hwPrivateAccessHasBeenSet;

                    /**
                     * 七牛云对象存储回源鉴权
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    QnPrivateAccess m_qnPrivateAccess;
                    bool m_qnPrivateAccessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_MAINLANDCONFIG_H_
