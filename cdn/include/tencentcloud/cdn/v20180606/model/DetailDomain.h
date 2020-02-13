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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DETAILDOMAIN_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DETAILDOMAIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
#include <tencentcloud/cdn/v20180606/model/Ipv6.h>
#include <tencentcloud/cdn/v20180606/model/Compatibility.h>
#include <tencentcloud/cdn/v20180606/model/SpecificConfig.h>
#include <tencentcloud/cdn/v20180606/model/OriginPullTimeout.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * CDN域名详细配置信息。
                */
                class DetailDomain : public AbstractModel
                {
                public:
                    DetailDomain();
                    ~DetailDomain() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名ID。
                     * @return ResourceId 域名ID。
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置域名ID。
                     * @param ResourceId 域名ID。
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取腾讯云账号ID。
                     * @return AppId 腾讯云账号ID。
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置腾讯云账号ID。
                     * @param AppId 腾讯云账号ID。
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取加速域名。
                     * @return Domain 加速域名。
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置加速域名。
                     * @param Domain 加速域名。
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取域名CName。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cname 域名CName。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCname() const;

                    /**
                     * 设置域名CName。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Cname 域名CName。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCname(const std::string& _cname);

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     */
                    bool CnameHasBeenSet() const;

                    /**
                     * 获取域名状态，pending，rejected，processing， online，offline，deleted分别表示审核中，审核未通过，审核通过部署中，已开启，已关闭，已删除。
                     * @return Status 域名状态，pending，rejected，processing， online，offline，deleted分别表示审核中，审核未通过，审核通过部署中，已开启，已关闭，已删除。
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置域名状态，pending，rejected，processing， online，offline，deleted分别表示审核中，审核未通过，审核通过部署中，已开启，已关闭，已删除。
                     * @param Status 域名状态，pending，rejected，processing， online，offline，deleted分别表示审核中，审核未通过，审核通过部署中，已开启，已关闭，已删除。
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取项目ID。
                     * @return ProjectId 项目ID。
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目ID。
                     * @param ProjectId 项目ID。
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取域名业务类型，web，download，media分别表示静态加速，下载加速和流媒体加速。
                     * @return ServiceType 域名业务类型，web，download，media分别表示静态加速，下载加速和流媒体加速。
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置域名业务类型，web，download，media分别表示静态加速，下载加速和流媒体加速。
                     * @param ServiceType 域名业务类型，web，download，media分别表示静态加速，下载加速和流媒体加速。
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取域名创建时间。
                     * @return CreateTime 域名创建时间。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置域名创建时间。
                     * @param CreateTime 域名创建时间。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取域名更新时间。
                     * @return UpdateTime 域名更新时间。
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置域名更新时间。
                     * @param UpdateTime 域名更新时间。
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取源站配置。
                     * @return Origin 源站配置。
                     */
                    Origin GetOrigin() const;

                    /**
                     * 设置源站配置。
                     * @param Origin 源站配置。
                     */
                    void SetOrigin(const Origin& _origin);

                    /**
                     * 判断参数 Origin 是否已赋值
                     * @return Origin 是否已赋值
                     */
                    bool OriginHasBeenSet() const;

                    /**
                     * 获取IP黑白名单配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpFilter IP黑白名单配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IpFilter GetIpFilter() const;

                    /**
                     * 设置IP黑白名单配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IpFilter IP黑白名单配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIpFilter(const IpFilter& _ipFilter);

                    /**
                     * 判断参数 IpFilter 是否已赋值
                     * @return IpFilter 是否已赋值
                     */
                    bool IpFilterHasBeenSet() const;

                    /**
                     * 获取IP限频配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpFreqLimit IP限频配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IpFreqLimit GetIpFreqLimit() const;

                    /**
                     * 设置IP限频配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IpFreqLimit IP限频配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIpFreqLimit(const IpFreqLimit& _ipFreqLimit);

                    /**
                     * 判断参数 IpFreqLimit 是否已赋值
                     * @return IpFreqLimit 是否已赋值
                     */
                    bool IpFreqLimitHasBeenSet() const;

                    /**
                     * 获取状态码缓存配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusCodeCache 状态码缓存配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StatusCodeCache GetStatusCodeCache() const;

                    /**
                     * 设置状态码缓存配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StatusCodeCache 状态码缓存配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatusCodeCache(const StatusCodeCache& _statusCodeCache);

                    /**
                     * 判断参数 StatusCodeCache 是否已赋值
                     * @return StatusCodeCache 是否已赋值
                     */
                    bool StatusCodeCacheHasBeenSet() const;

                    /**
                     * 获取智能压缩配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Compression 智能压缩配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Compression GetCompression() const;

                    /**
                     * 设置智能压缩配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Compression 智能压缩配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCompression(const Compression& _compression);

                    /**
                     * 判断参数 Compression 是否已赋值
                     * @return Compression 是否已赋值
                     */
                    bool CompressionHasBeenSet() const;

                    /**
                     * 获取带宽封顶配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BandwidthAlert 带宽封顶配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BandwidthAlert GetBandwidthAlert() const;

                    /**
                     * 设置带宽封顶配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BandwidthAlert 带宽封顶配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBandwidthAlert(const BandwidthAlert& _bandwidthAlert);

                    /**
                     * 判断参数 BandwidthAlert 是否已赋值
                     * @return BandwidthAlert 是否已赋值
                     */
                    bool BandwidthAlertHasBeenSet() const;

                    /**
                     * 获取Range回源配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RangeOriginPull Range回源配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RangeOriginPull GetRangeOriginPull() const;

                    /**
                     * 设置Range回源配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RangeOriginPull Range回源配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRangeOriginPull(const RangeOriginPull& _rangeOriginPull);

                    /**
                     * 判断参数 RangeOriginPull 是否已赋值
                     * @return RangeOriginPull 是否已赋值
                     */
                    bool RangeOriginPullHasBeenSet() const;

                    /**
                     * 获取301和302自动回源跟随配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FollowRedirect 301和302自动回源跟随配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FollowRedirect GetFollowRedirect() const;

                    /**
                     * 设置301和302自动回源跟随配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FollowRedirect 301和302自动回源跟随配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFollowRedirect(const FollowRedirect& _followRedirect);

                    /**
                     * 判断参数 FollowRedirect 是否已赋值
                     * @return FollowRedirect 是否已赋值
                     */
                    bool FollowRedirectHasBeenSet() const;

                    /**
                     * 获取错误码重定向配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorPage 错误码重定向配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ErrorPage GetErrorPage() const;

                    /**
                     * 设置错误码重定向配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ErrorPage 错误码重定向配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetErrorPage(const ErrorPage& _errorPage);

                    /**
                     * 判断参数 ErrorPage 是否已赋值
                     * @return ErrorPage 是否已赋值
                     */
                    bool ErrorPageHasBeenSet() const;

                    /**
                     * 获取回源请求头部配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestHeader 回源请求头部配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RequestHeader GetRequestHeader() const;

                    /**
                     * 设置回源请求头部配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RequestHeader 回源请求头部配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRequestHeader(const RequestHeader& _requestHeader);

                    /**
                     * 判断参数 RequestHeader 是否已赋值
                     * @return RequestHeader 是否已赋值
                     */
                    bool RequestHeaderHasBeenSet() const;

                    /**
                     * 获取源站响应头部配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResponseHeader 源站响应头部配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ResponseHeader GetResponseHeader() const;

                    /**
                     * 设置源站响应头部配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ResponseHeader 源站响应头部配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetResponseHeader(const ResponseHeader& _responseHeader);

                    /**
                     * 判断参数 ResponseHeader 是否已赋值
                     * @return ResponseHeader 是否已赋值
                     */
                    bool ResponseHeaderHasBeenSet() const;

                    /**
                     * 获取下载速度配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DownstreamCapping 下载速度配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DownstreamCapping GetDownstreamCapping() const;

                    /**
                     * 设置下载速度配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DownstreamCapping 下载速度配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDownstreamCapping(const DownstreamCapping& _downstreamCapping);

                    /**
                     * 判断参数 DownstreamCapping 是否已赋值
                     * @return DownstreamCapping 是否已赋值
                     */
                    bool DownstreamCappingHasBeenSet() const;

                    /**
                     * 获取节点缓存配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CacheKey 节点缓存配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CacheKey GetCacheKey() const;

                    /**
                     * 设置节点缓存配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CacheKey 节点缓存配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCacheKey(const CacheKey& _cacheKey);

                    /**
                     * 判断参数 CacheKey 是否已赋值
                     * @return CacheKey 是否已赋值
                     */
                    bool CacheKeyHasBeenSet() const;

                    /**
                     * 获取遵循源站缓存头部配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResponseHeaderCache 遵循源站缓存头部配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ResponseHeaderCache GetResponseHeaderCache() const;

                    /**
                     * 设置遵循源站缓存头部配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ResponseHeaderCache 遵循源站缓存头部配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetResponseHeaderCache(const ResponseHeaderCache& _responseHeaderCache);

                    /**
                     * 判断参数 ResponseHeaderCache 是否已赋值
                     * @return ResponseHeaderCache 是否已赋值
                     */
                    bool ResponseHeaderCacheHasBeenSet() const;

                    /**
                     * 获取视频拖拽配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VideoSeek 视频拖拽配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VideoSeek GetVideoSeek() const;

                    /**
                     * 设置视频拖拽配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VideoSeek 视频拖拽配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVideoSeek(const VideoSeek& _videoSeek);

                    /**
                     * 判断参数 VideoSeek 是否已赋值
                     * @return VideoSeek 是否已赋值
                     */
                    bool VideoSeekHasBeenSet() const;

                    /**
                     * 获取缓存规则配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cache 缓存规则配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Cache GetCache() const;

                    /**
                     * 设置缓存规则配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Cache 缓存规则配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCache(const Cache& _cache);

                    /**
                     * 判断参数 Cache 是否已赋值
                     * @return Cache 是否已赋值
                     */
                    bool CacheHasBeenSet() const;

                    /**
                     * 获取跨国优化配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginPullOptimization 跨国优化配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OriginPullOptimization GetOriginPullOptimization() const;

                    /**
                     * 设置跨国优化配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OriginPullOptimization 跨国优化配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOriginPullOptimization(const OriginPullOptimization& _originPullOptimization);

                    /**
                     * 判断参数 OriginPullOptimization 是否已赋值
                     * @return OriginPullOptimization 是否已赋值
                     */
                    bool OriginPullOptimizationHasBeenSet() const;

                    /**
                     * 获取Https配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Https Https配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Https GetHttps() const;

                    /**
                     * 设置Https配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Https Https配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHttps(const Https& _https);

                    /**
                     * 判断参数 Https 是否已赋值
                     * @return Https 是否已赋值
                     */
                    bool HttpsHasBeenSet() const;

                    /**
                     * 获取时间戳防盗链配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Authentication 时间戳防盗链配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Authentication GetAuthentication() const;

                    /**
                     * 设置时间戳防盗链配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Authentication 时间戳防盗链配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAuthentication(const Authentication& _authentication);

                    /**
                     * 判断参数 Authentication 是否已赋值
                     * @return Authentication 是否已赋值
                     */
                    bool AuthenticationHasBeenSet() const;

                    /**
                     * 获取seo优化配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Seo seo优化配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Seo GetSeo() const;

                    /**
                     * 设置seo优化配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Seo seo优化配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSeo(const Seo& _seo);

                    /**
                     * 判断参数 Seo 是否已赋值
                     * @return Seo 是否已赋值
                     */
                    bool SeoHasBeenSet() const;

                    /**
                     * 获取域名封禁状态，normal，overdue，quota，malicious，ddos，idle，unlicensed，capping分别表示。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Disable 域名封禁状态，normal，overdue，quota，malicious，ddos，idle，unlicensed，capping分别表示。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDisable() const;

                    /**
                     * 设置域名封禁状态，normal，overdue，quota，malicious，ddos，idle，unlicensed，capping分别表示。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Disable 域名封禁状态，normal，overdue，quota，malicious，ddos，idle，unlicensed，capping分别表示。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDisable(const std::string& _disable);

                    /**
                     * 判断参数 Disable 是否已赋值
                     * @return Disable 是否已赋值
                     */
                    bool DisableHasBeenSet() const;

                    /**
                     * 获取访问协议强制跳转配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ForceRedirect 访问协议强制跳转配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ForceRedirect GetForceRedirect() const;

                    /**
                     * 设置访问协议强制跳转配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ForceRedirect 访问协议强制跳转配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetForceRedirect(const ForceRedirect& _forceRedirect);

                    /**
                     * 判断参数 ForceRedirect 是否已赋值
                     * @return ForceRedirect 是否已赋值
                     */
                    bool ForceRedirectHasBeenSet() const;

                    /**
                     * 获取防盗链配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Referer 防盗链配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Referer GetReferer() const;

                    /**
                     * 设置防盗链配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Referer 防盗链配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetReferer(const Referer& _referer);

                    /**
                     * 判断参数 Referer 是否已赋值
                     * @return Referer 是否已赋值
                     */
                    bool RefererHasBeenSet() const;

                    /**
                     * 获取浏览器缓存规则配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxAge 浏览器缓存规则配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MaxAge GetMaxAge() const;

                    /**
                     * 设置浏览器缓存规则配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MaxAge 浏览器缓存规则配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMaxAge(const MaxAge& _maxAge);

                    /**
                     * 判断参数 MaxAge 是否已赋值
                     * @return MaxAge 是否已赋值
                     */
                    bool MaxAgeHasBeenSet() const;

                    /**
                     * 获取Ipv6配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ipv6 Ipv6配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Ipv6 GetIpv6() const;

                    /**
                     * 设置Ipv6配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Ipv6 Ipv6配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIpv6(const Ipv6& _ipv6);

                    /**
                     * 判断参数 Ipv6 是否已赋值
                     * @return Ipv6 是否已赋值
                     */
                    bool Ipv6HasBeenSet() const;

                    /**
                     * 获取是否兼容旧版本配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Compatibility 是否兼容旧版本配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Compatibility GetCompatibility() const;

                    /**
                     * 设置是否兼容旧版本配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Compatibility 是否兼容旧版本配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCompatibility(const Compatibility& _compatibility);

                    /**
                     * 判断参数 Compatibility 是否已赋值
                     * @return Compatibility 是否已赋值
                     */
                    bool CompatibilityHasBeenSet() const;

                    /**
                     * 获取分地区特殊配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpecificConfig 分地区特殊配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SpecificConfig GetSpecificConfig() const;

                    /**
                     * 设置分地区特殊配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SpecificConfig 分地区特殊配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSpecificConfig(const SpecificConfig& _specificConfig);

                    /**
                     * 判断参数 SpecificConfig 是否已赋值
                     * @return SpecificConfig 是否已赋值
                     */
                    bool SpecificConfigHasBeenSet() const;

                    /**
                     * 获取加速区域，mainland，overseas或global。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Area 加速区域，mainland，overseas或global。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetArea() const;

                    /**
                     * 设置加速区域，mainland，overseas或global。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Area 加速区域，mainland，overseas或global。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取域名锁定状态，normal，mainland，overseas或global，分别表示未被锁定，国内锁定，海外锁定或全球锁定。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Readonly 域名锁定状态，normal，mainland，overseas或global，分别表示未被锁定，国内锁定，海外锁定或全球锁定。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetReadonly() const;

                    /**
                     * 设置域名锁定状态，normal，mainland，overseas或global，分别表示未被锁定，国内锁定，海外锁定或全球锁定。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Readonly 域名锁定状态，normal，mainland，overseas或global，分别表示未被锁定，国内锁定，海外锁定或全球锁定。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetReadonly(const std::string& _readonly);

                    /**
                     * 判断参数 Readonly 是否已赋值
                     * @return Readonly 是否已赋值
                     */
                    bool ReadonlyHasBeenSet() const;

                    /**
                     * 获取回源超时配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginPullTimeout 回源超时配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OriginPullTimeout GetOriginPullTimeout() const;

                    /**
                     * 设置回源超时配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OriginPullTimeout 回源超时配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOriginPullTimeout(const OriginPullTimeout& _originPullTimeout);

                    /**
                     * 判断参数 OriginPullTimeout 是否已赋值
                     * @return OriginPullTimeout 是否已赋值
                     */
                    bool OriginPullTimeoutHasBeenSet() const;

                private:

                    /**
                     * 域名ID。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 腾讯云账号ID。
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 加速域名。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 域名CName。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * 域名状态，pending，rejected，processing， online，offline，deleted分别表示审核中，审核未通过，审核通过部署中，已开启，已关闭，已删除。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 项目ID。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 域名业务类型，web，download，media分别表示静态加速，下载加速和流媒体加速。
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 域名创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 域名更新时间。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 源站配置。
                     */
                    Origin m_origin;
                    bool m_originHasBeenSet;

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
                     * 状态码缓存配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StatusCodeCache m_statusCodeCache;
                    bool m_statusCodeCacheHasBeenSet;

                    /**
                     * 智能压缩配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Compression m_compression;
                    bool m_compressionHasBeenSet;

                    /**
                     * 带宽封顶配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BandwidthAlert m_bandwidthAlert;
                    bool m_bandwidthAlertHasBeenSet;

                    /**
                     * Range回源配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RangeOriginPull m_rangeOriginPull;
                    bool m_rangeOriginPullHasBeenSet;

                    /**
                     * 301和302自动回源跟随配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FollowRedirect m_followRedirect;
                    bool m_followRedirectHasBeenSet;

                    /**
                     * 错误码重定向配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ErrorPage m_errorPage;
                    bool m_errorPageHasBeenSet;

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
                     * 下载速度配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DownstreamCapping m_downstreamCapping;
                    bool m_downstreamCappingHasBeenSet;

                    /**
                     * 节点缓存配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CacheKey m_cacheKey;
                    bool m_cacheKeyHasBeenSet;

                    /**
                     * 遵循源站缓存头部配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ResponseHeaderCache m_responseHeaderCache;
                    bool m_responseHeaderCacheHasBeenSet;

                    /**
                     * 视频拖拽配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VideoSeek m_videoSeek;
                    bool m_videoSeekHasBeenSet;

                    /**
                     * 缓存规则配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Cache m_cache;
                    bool m_cacheHasBeenSet;

                    /**
                     * 跨国优化配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OriginPullOptimization m_originPullOptimization;
                    bool m_originPullOptimizationHasBeenSet;

                    /**
                     * Https配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Https m_https;
                    bool m_httpsHasBeenSet;

                    /**
                     * 时间戳防盗链配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Authentication m_authentication;
                    bool m_authenticationHasBeenSet;

                    /**
                     * seo优化配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Seo m_seo;
                    bool m_seoHasBeenSet;

                    /**
                     * 域名封禁状态，normal，overdue，quota，malicious，ddos，idle，unlicensed，capping分别表示。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_disable;
                    bool m_disableHasBeenSet;

                    /**
                     * 访问协议强制跳转配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ForceRedirect m_forceRedirect;
                    bool m_forceRedirectHasBeenSet;

                    /**
                     * 防盗链配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Referer m_referer;
                    bool m_refererHasBeenSet;

                    /**
                     * 浏览器缓存规则配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MaxAge m_maxAge;
                    bool m_maxAgeHasBeenSet;

                    /**
                     * Ipv6配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Ipv6 m_ipv6;
                    bool m_ipv6HasBeenSet;

                    /**
                     * 是否兼容旧版本配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Compatibility m_compatibility;
                    bool m_compatibilityHasBeenSet;

                    /**
                     * 分地区特殊配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SpecificConfig m_specificConfig;
                    bool m_specificConfigHasBeenSet;

                    /**
                     * 加速区域，mainland，overseas或global。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 域名锁定状态，normal，mainland，overseas或global，分别表示未被锁定，国内锁定，海外锁定或全球锁定。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_readonly;
                    bool m_readonlyHasBeenSet;

                    /**
                     * 回源超时配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OriginPullTimeout m_originPullTimeout;
                    bool m_originPullTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DETAILDOMAIN_H_
