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
#include <tencentcloud/cdn/v20180606/model/AwsPrivateAccess.h>
#include <tencentcloud/cdn/v20180606/model/SecurityConfig.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 加速域名全量配置信息
                */
                class DetailDomain : public AbstractModel
                {
                public:
                    DetailDomain();
                    ~DetailDomain() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名 ID
                     * @return ResourceId 域名 ID
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置域名 ID
                     * @param ResourceId 域名 ID
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取腾讯云账号ID
                     * @return AppId 腾讯云账号ID
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置腾讯云账号ID
                     * @param AppId 腾讯云账号ID
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取加速域名
                     * @return Domain 加速域名
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置加速域名
                     * @param Domain 加速域名
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取域名对应的 CNAME 地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cname 域名对应的 CNAME 地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCname() const;

                    /**
                     * 设置域名对应的 CNAME 地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Cname 域名对应的 CNAME 地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCname(const std::string& _cname);

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     */
                    bool CnameHasBeenSet() const;

                    /**
                     * 获取加速服务状态
rejected：域名审核未通过，域名备案过期/被注销导致
processing：部署中
online：已启动
offline：已关闭
                     * @return Status 加速服务状态
rejected：域名审核未通过，域名备案过期/被注销导致
processing：部署中
online：已启动
offline：已关闭
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置加速服务状态
rejected：域名审核未通过，域名备案过期/被注销导致
processing：部署中
online：已启动
offline：已关闭
                     * @param Status 加速服务状态
rejected：域名审核未通过，域名备案过期/被注销导致
processing：部署中
online：已启动
offline：已关闭
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取项目 ID，可前往腾讯云项目管理页面查看
                     * @return ProjectId 项目 ID，可前往腾讯云项目管理页面查看
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目 ID，可前往腾讯云项目管理页面查看
                     * @param ProjectId 项目 ID，可前往腾讯云项目管理页面查看
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取域名业务类型
web：静态加速
download：下载加速
media：流媒体点播加速
                     * @return ServiceType 域名业务类型
web：静态加速
download：下载加速
media：流媒体点播加速
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置域名业务类型
web：静态加速
download：下载加速
media：流媒体点播加速
                     * @param ServiceType 域名业务类型
web：静态加速
download：下载加速
media：流媒体点播加速
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取域名创建时间
                     * @return CreateTime 域名创建时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置域名创建时间
                     * @param CreateTime 域名创建时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取域名更新时间
                     * @return UpdateTime 域名更新时间
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置域名更新时间
                     * @param UpdateTime 域名更新时间
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取源站配置
                     * @return Origin 源站配置
                     */
                    Origin GetOrigin() const;

                    /**
                     * 设置源站配置
                     * @param Origin 源站配置
                     */
                    void SetOrigin(const Origin& _origin);

                    /**
                     * 判断参数 Origin 是否已赋值
                     * @return Origin 是否已赋值
                     */
                    bool OriginHasBeenSet() const;

                    /**
                     * 获取IP 黑白名单配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpFilter IP 黑白名单配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IpFilter GetIpFilter() const;

                    /**
                     * 设置IP 黑白名单配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IpFilter IP 黑白名单配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIpFilter(const IpFilter& _ipFilter);

                    /**
                     * 判断参数 IpFilter 是否已赋值
                     * @return IpFilter 是否已赋值
                     */
                    bool IpFilterHasBeenSet() const;

                    /**
                     * 获取IP 访问限频配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpFreqLimit IP 访问限频配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IpFreqLimit GetIpFreqLimit() const;

                    /**
                     * 设置IP 访问限频配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IpFreqLimit IP 访问限频配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIpFreqLimit(const IpFreqLimit& _ipFreqLimit);

                    /**
                     * 判断参数 IpFreqLimit 是否已赋值
                     * @return IpFreqLimit 是否已赋值
                     */
                    bool IpFreqLimitHasBeenSet() const;

                    /**
                     * 获取状态码缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusCodeCache 状态码缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StatusCodeCache GetStatusCodeCache() const;

                    /**
                     * 设置状态码缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StatusCodeCache 状态码缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatusCodeCache(const StatusCodeCache& _statusCodeCache);

                    /**
                     * 判断参数 StatusCodeCache 是否已赋值
                     * @return StatusCodeCache 是否已赋值
                     */
                    bool StatusCodeCacheHasBeenSet() const;

                    /**
                     * 获取智能压缩配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Compression 智能压缩配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Compression GetCompression() const;

                    /**
                     * 设置智能压缩配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Compression 智能压缩配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCompression(const Compression& _compression);

                    /**
                     * 判断参数 Compression 是否已赋值
                     * @return Compression 是否已赋值
                     */
                    bool CompressionHasBeenSet() const;

                    /**
                     * 获取带宽封顶配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BandwidthAlert 带宽封顶配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BandwidthAlert GetBandwidthAlert() const;

                    /**
                     * 设置带宽封顶配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BandwidthAlert 带宽封顶配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBandwidthAlert(const BandwidthAlert& _bandwidthAlert);

                    /**
                     * 判断参数 BandwidthAlert 是否已赋值
                     * @return BandwidthAlert 是否已赋值
                     */
                    bool BandwidthAlertHasBeenSet() const;

                    /**
                     * 获取Range 回源配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RangeOriginPull Range 回源配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RangeOriginPull GetRangeOriginPull() const;

                    /**
                     * 设置Range 回源配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RangeOriginPull Range 回源配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRangeOriginPull(const RangeOriginPull& _rangeOriginPull);

                    /**
                     * 判断参数 RangeOriginPull 是否已赋值
                     * @return RangeOriginPull 是否已赋值
                     */
                    bool RangeOriginPullHasBeenSet() const;

                    /**
                     * 获取301/302 回源自动跟随配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FollowRedirect 301/302 回源自动跟随配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FollowRedirect GetFollowRedirect() const;

                    /**
                     * 设置301/302 回源自动跟随配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FollowRedirect 301/302 回源自动跟随配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFollowRedirect(const FollowRedirect& _followRedirect);

                    /**
                     * 判断参数 FollowRedirect 是否已赋值
                     * @return FollowRedirect 是否已赋值
                     */
                    bool FollowRedirectHasBeenSet() const;

                    /**
                     * 获取自定义错误页面配置（功能灰度中，敬请期待）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorPage 自定义错误页面配置（功能灰度中，敬请期待）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ErrorPage GetErrorPage() const;

                    /**
                     * 设置自定义错误页面配置（功能灰度中，敬请期待）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ErrorPage 自定义错误页面配置（功能灰度中，敬请期待）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetErrorPage(const ErrorPage& _errorPage);

                    /**
                     * 判断参数 ErrorPage 是否已赋值
                     * @return ErrorPage 是否已赋值
                     */
                    bool ErrorPageHasBeenSet() const;

                    /**
                     * 获取自定义请求头部配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestHeader 自定义请求头部配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RequestHeader GetRequestHeader() const;

                    /**
                     * 设置自定义请求头部配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RequestHeader 自定义请求头部配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRequestHeader(const RequestHeader& _requestHeader);

                    /**
                     * 判断参数 RequestHeader 是否已赋值
                     * @return RequestHeader 是否已赋值
                     */
                    bool RequestHeaderHasBeenSet() const;

                    /**
                     * 获取自定义响应头部配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResponseHeader 自定义响应头部配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ResponseHeader GetResponseHeader() const;

                    /**
                     * 设置自定义响应头部配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ResponseHeader 自定义响应头部配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetResponseHeader(const ResponseHeader& _responseHeader);

                    /**
                     * 判断参数 ResponseHeader 是否已赋值
                     * @return ResponseHeader 是否已赋值
                     */
                    bool ResponseHeaderHasBeenSet() const;

                    /**
                     * 获取单链接下行限速配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DownstreamCapping 单链接下行限速配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DownstreamCapping GetDownstreamCapping() const;

                    /**
                     * 设置单链接下行限速配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DownstreamCapping 单链接下行限速配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDownstreamCapping(const DownstreamCapping& _downstreamCapping);

                    /**
                     * 判断参数 DownstreamCapping 是否已赋值
                     * @return DownstreamCapping 是否已赋值
                     */
                    bool DownstreamCappingHasBeenSet() const;

                    /**
                     * 获取带参/不带参缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CacheKey 带参/不带参缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CacheKey GetCacheKey() const;

                    /**
                     * 设置带参/不带参缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CacheKey 带参/不带参缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCacheKey(const CacheKey& _cacheKey);

                    /**
                     * 判断参数 CacheKey 是否已赋值
                     * @return CacheKey 是否已赋值
                     */
                    bool CacheKeyHasBeenSet() const;

                    /**
                     * 获取源站头部缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResponseHeaderCache 源站头部缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ResponseHeaderCache GetResponseHeaderCache() const;

                    /**
                     * 设置源站头部缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ResponseHeaderCache 源站头部缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetResponseHeaderCache(const ResponseHeaderCache& _responseHeaderCache);

                    /**
                     * 判断参数 ResponseHeaderCache 是否已赋值
                     * @return ResponseHeaderCache 是否已赋值
                     */
                    bool ResponseHeaderCacheHasBeenSet() const;

                    /**
                     * 获取视频拖拽配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VideoSeek 视频拖拽配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VideoSeek GetVideoSeek() const;

                    /**
                     * 设置视频拖拽配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VideoSeek 视频拖拽配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVideoSeek(const VideoSeek& _videoSeek);

                    /**
                     * 判断参数 VideoSeek 是否已赋值
                     * @return VideoSeek 是否已赋值
                     */
                    bool VideoSeekHasBeenSet() const;

                    /**
                     * 获取节点缓存过期规则配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cache 节点缓存过期规则配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Cache GetCache() const;

                    /**
                     * 设置节点缓存过期规则配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Cache 节点缓存过期规则配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCache(const Cache& _cache);

                    /**
                     * 判断参数 Cache 是否已赋值
                     * @return Cache 是否已赋值
                     */
                    bool CacheHasBeenSet() const;

                    /**
                     * 获取跨国链路优化配置（功能灰度中，敬请期待）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginPullOptimization 跨国链路优化配置（功能灰度中，敬请期待）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OriginPullOptimization GetOriginPullOptimization() const;

                    /**
                     * 设置跨国链路优化配置（功能灰度中，敬请期待）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OriginPullOptimization 跨国链路优化配置（功能灰度中，敬请期待）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOriginPullOptimization(const OriginPullOptimization& _originPullOptimization);

                    /**
                     * 判断参数 OriginPullOptimization 是否已赋值
                     * @return OriginPullOptimization 是否已赋值
                     */
                    bool OriginPullOptimizationHasBeenSet() const;

                    /**
                     * 获取Https 加速相关配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Https Https 加速相关配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Https GetHttps() const;

                    /**
                     * 设置Https 加速相关配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Https Https 加速相关配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHttps(const Https& _https);

                    /**
                     * 判断参数 Https 是否已赋值
                     * @return Https 是否已赋值
                     */
                    bool HttpsHasBeenSet() const;

                    /**
                     * 获取时间戳防盗链配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Authentication 时间戳防盗链配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Authentication GetAuthentication() const;

                    /**
                     * 设置时间戳防盗链配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Authentication 时间戳防盗链配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAuthentication(const Authentication& _authentication);

                    /**
                     * 判断参数 Authentication 是否已赋值
                     * @return Authentication 是否已赋值
                     */
                    bool AuthenticationHasBeenSet() const;

                    /**
                     * 获取SEO 优化配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Seo SEO 优化配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Seo GetSeo() const;

                    /**
                     * 设置SEO 优化配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Seo SEO 优化配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSeo(const Seo& _seo);

                    /**
                     * 判断参数 Seo 是否已赋值
                     * @return Seo 是否已赋值
                     */
                    bool SeoHasBeenSet() const;

                    /**
                     * 获取域名封禁状态
normal：正常状态
overdue：账号欠费导致域名关闭，充值完成后可自行启动加速服务
malicious：域名出现恶意行为，强制关闭加速服务
ddos：域名被大规模 DDoS 攻击，关闭加速服务
idle：域名超过 90 天内无任何操作、数据产生，判定为不活跃域名自动关闭加速服务，可自行启动加速服务
unlicensed：域名未备案/备案注销，自动关闭加速服务，备案完成后可自行启动加速服务
capping：触发配置的带宽阈值上限
readonly：域名存在特殊配置，被锁定
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Disable 域名封禁状态
normal：正常状态
overdue：账号欠费导致域名关闭，充值完成后可自行启动加速服务
malicious：域名出现恶意行为，强制关闭加速服务
ddos：域名被大规模 DDoS 攻击，关闭加速服务
idle：域名超过 90 天内无任何操作、数据产生，判定为不活跃域名自动关闭加速服务，可自行启动加速服务
unlicensed：域名未备案/备案注销，自动关闭加速服务，备案完成后可自行启动加速服务
capping：触发配置的带宽阈值上限
readonly：域名存在特殊配置，被锁定
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDisable() const;

                    /**
                     * 设置域名封禁状态
normal：正常状态
overdue：账号欠费导致域名关闭，充值完成后可自行启动加速服务
malicious：域名出现恶意行为，强制关闭加速服务
ddos：域名被大规模 DDoS 攻击，关闭加速服务
idle：域名超过 90 天内无任何操作、数据产生，判定为不活跃域名自动关闭加速服务，可自行启动加速服务
unlicensed：域名未备案/备案注销，自动关闭加速服务，备案完成后可自行启动加速服务
capping：触发配置的带宽阈值上限
readonly：域名存在特殊配置，被锁定
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Disable 域名封禁状态
normal：正常状态
overdue：账号欠费导致域名关闭，充值完成后可自行启动加速服务
malicious：域名出现恶意行为，强制关闭加速服务
ddos：域名被大规模 DDoS 攻击，关闭加速服务
idle：域名超过 90 天内无任何操作、数据产生，判定为不活跃域名自动关闭加速服务，可自行启动加速服务
unlicensed：域名未备案/备案注销，自动关闭加速服务，备案完成后可自行启动加速服务
capping：触发配置的带宽阈值上限
readonly：域名存在特殊配置，被锁定
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDisable(const std::string& _disable);

                    /**
                     * 判断参数 Disable 是否已赋值
                     * @return Disable 是否已赋值
                     */
                    bool DisableHasBeenSet() const;

                    /**
                     * 获取访问协议强制跳转配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ForceRedirect 访问协议强制跳转配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ForceRedirect GetForceRedirect() const;

                    /**
                     * 设置访问协议强制跳转配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ForceRedirect 访问协议强制跳转配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetForceRedirect(const ForceRedirect& _forceRedirect);

                    /**
                     * 判断参数 ForceRedirect 是否已赋值
                     * @return ForceRedirect 是否已赋值
                     */
                    bool ForceRedirectHasBeenSet() const;

                    /**
                     * 获取Referer 防盗链配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Referer Referer 防盗链配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Referer GetReferer() const;

                    /**
                     * 设置Referer 防盗链配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Referer Referer 防盗链配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetReferer(const Referer& _referer);

                    /**
                     * 判断参数 Referer 是否已赋值
                     * @return Referer 是否已赋值
                     */
                    bool RefererHasBeenSet() const;

                    /**
                     * 获取浏览器缓存过期规则配置（功能灰度中，敬请期待）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxAge 浏览器缓存过期规则配置（功能灰度中，敬请期待）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MaxAge GetMaxAge() const;

                    /**
                     * 设置浏览器缓存过期规则配置（功能灰度中，敬请期待）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MaxAge 浏览器缓存过期规则配置（功能灰度中，敬请期待）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMaxAge(const MaxAge& _maxAge);

                    /**
                     * 判断参数 MaxAge 是否已赋值
                     * @return MaxAge 是否已赋值
                     */
                    bool MaxAgeHasBeenSet() const;

                    /**
                     * 获取Ipv6 配置（功能灰度中，敬请期待）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ipv6 Ipv6 配置（功能灰度中，敬请期待）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Ipv6 GetIpv6() const;

                    /**
                     * 设置Ipv6 配置（功能灰度中，敬请期待）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Ipv6 Ipv6 配置（功能灰度中，敬请期待）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIpv6(const Ipv6& _ipv6);

                    /**
                     * 判断参数 Ipv6 是否已赋值
                     * @return Ipv6 是否已赋值
                     */
                    bool Ipv6HasBeenSet() const;

                    /**
                     * 获取是否兼容旧版本配置（内部兼容性字段）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Compatibility 是否兼容旧版本配置（内部兼容性字段）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Compatibility GetCompatibility() const;

                    /**
                     * 设置是否兼容旧版本配置（内部兼容性字段）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Compatibility 是否兼容旧版本配置（内部兼容性字段）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCompatibility(const Compatibility& _compatibility);

                    /**
                     * 判断参数 Compatibility 是否已赋值
                     * @return Compatibility 是否已赋值
                     */
                    bool CompatibilityHasBeenSet() const;

                    /**
                     * 获取区域特殊配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpecificConfig 区域特殊配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SpecificConfig GetSpecificConfig() const;

                    /**
                     * 设置区域特殊配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SpecificConfig 区域特殊配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSpecificConfig(const SpecificConfig& _specificConfig);

                    /**
                     * 判断参数 SpecificConfig 是否已赋值
                     * @return SpecificConfig 是否已赋值
                     */
                    bool SpecificConfigHasBeenSet() const;

                    /**
                     * 获取加速区域
mainland：中国境内加速
overseas：中国境外加速
global：全球加速
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Area 加速区域
mainland：中国境内加速
overseas：中国境外加速
global：全球加速
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetArea() const;

                    /**
                     * 设置加速区域
mainland：中国境内加速
overseas：中国境外加速
global：全球加速
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Area 加速区域
mainland：中国境内加速
overseas：中国境外加速
global：全球加速
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取域名锁定状态
normal：未锁定
mainland：中国境内锁定
overseas：中国境外锁定
global：全球锁定
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Readonly 域名锁定状态
normal：未锁定
mainland：中国境内锁定
overseas：中国境外锁定
global：全球锁定
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetReadonly() const;

                    /**
                     * 设置域名锁定状态
normal：未锁定
mainland：中国境内锁定
overseas：中国境外锁定
global：全球锁定
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Readonly 域名锁定状态
normal：未锁定
mainland：中国境内锁定
overseas：中国境外锁定
global：全球锁定
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

                    /**
                     * 获取回源S3鉴权配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AwsPrivateAccess 回源S3鉴权配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AwsPrivateAccess GetAwsPrivateAccess() const;

                    /**
                     * 设置回源S3鉴权配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AwsPrivateAccess 回源S3鉴权配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAwsPrivateAccess(const AwsPrivateAccess& _awsPrivateAccess);

                    /**
                     * 判断参数 AwsPrivateAccess 是否已赋值
                     * @return AwsPrivateAccess 是否已赋值
                     */
                    bool AwsPrivateAccessHasBeenSet() const;

                    /**
                     * 获取Scdn配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecurityConfig Scdn配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SecurityConfig> GetSecurityConfig() const;

                    /**
                     * 设置Scdn配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SecurityConfig Scdn配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSecurityConfig(const std::vector<SecurityConfig>& _securityConfig);

                    /**
                     * 判断参数 SecurityConfig 是否已赋值
                     * @return SecurityConfig 是否已赋值
                     */
                    bool SecurityConfigHasBeenSet() const;

                private:

                    /**
                     * 域名 ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 腾讯云账号ID
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 加速域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 域名对应的 CNAME 地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * 加速服务状态
rejected：域名审核未通过，域名备案过期/被注销导致
processing：部署中
online：已启动
offline：已关闭
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 项目 ID，可前往腾讯云项目管理页面查看
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 域名业务类型
web：静态加速
download：下载加速
media：流媒体点播加速
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 域名创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 域名更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 源站配置
                     */
                    Origin m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * IP 黑白名单配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IpFilter m_ipFilter;
                    bool m_ipFilterHasBeenSet;

                    /**
                     * IP 访问限频配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IpFreqLimit m_ipFreqLimit;
                    bool m_ipFreqLimitHasBeenSet;

                    /**
                     * 状态码缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StatusCodeCache m_statusCodeCache;
                    bool m_statusCodeCacheHasBeenSet;

                    /**
                     * 智能压缩配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Compression m_compression;
                    bool m_compressionHasBeenSet;

                    /**
                     * 带宽封顶配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BandwidthAlert m_bandwidthAlert;
                    bool m_bandwidthAlertHasBeenSet;

                    /**
                     * Range 回源配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RangeOriginPull m_rangeOriginPull;
                    bool m_rangeOriginPullHasBeenSet;

                    /**
                     * 301/302 回源自动跟随配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FollowRedirect m_followRedirect;
                    bool m_followRedirectHasBeenSet;

                    /**
                     * 自定义错误页面配置（功能灰度中，敬请期待）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ErrorPage m_errorPage;
                    bool m_errorPageHasBeenSet;

                    /**
                     * 自定义请求头部配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RequestHeader m_requestHeader;
                    bool m_requestHeaderHasBeenSet;

                    /**
                     * 自定义响应头部配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ResponseHeader m_responseHeader;
                    bool m_responseHeaderHasBeenSet;

                    /**
                     * 单链接下行限速配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DownstreamCapping m_downstreamCapping;
                    bool m_downstreamCappingHasBeenSet;

                    /**
                     * 带参/不带参缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CacheKey m_cacheKey;
                    bool m_cacheKeyHasBeenSet;

                    /**
                     * 源站头部缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ResponseHeaderCache m_responseHeaderCache;
                    bool m_responseHeaderCacheHasBeenSet;

                    /**
                     * 视频拖拽配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VideoSeek m_videoSeek;
                    bool m_videoSeekHasBeenSet;

                    /**
                     * 节点缓存过期规则配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Cache m_cache;
                    bool m_cacheHasBeenSet;

                    /**
                     * 跨国链路优化配置（功能灰度中，敬请期待）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OriginPullOptimization m_originPullOptimization;
                    bool m_originPullOptimizationHasBeenSet;

                    /**
                     * Https 加速相关配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Https m_https;
                    bool m_httpsHasBeenSet;

                    /**
                     * 时间戳防盗链配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Authentication m_authentication;
                    bool m_authenticationHasBeenSet;

                    /**
                     * SEO 优化配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Seo m_seo;
                    bool m_seoHasBeenSet;

                    /**
                     * 域名封禁状态
normal：正常状态
overdue：账号欠费导致域名关闭，充值完成后可自行启动加速服务
malicious：域名出现恶意行为，强制关闭加速服务
ddos：域名被大规模 DDoS 攻击，关闭加速服务
idle：域名超过 90 天内无任何操作、数据产生，判定为不活跃域名自动关闭加速服务，可自行启动加速服务
unlicensed：域名未备案/备案注销，自动关闭加速服务，备案完成后可自行启动加速服务
capping：触发配置的带宽阈值上限
readonly：域名存在特殊配置，被锁定
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_disable;
                    bool m_disableHasBeenSet;

                    /**
                     * 访问协议强制跳转配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ForceRedirect m_forceRedirect;
                    bool m_forceRedirectHasBeenSet;

                    /**
                     * Referer 防盗链配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Referer m_referer;
                    bool m_refererHasBeenSet;

                    /**
                     * 浏览器缓存过期规则配置（功能灰度中，敬请期待）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MaxAge m_maxAge;
                    bool m_maxAgeHasBeenSet;

                    /**
                     * Ipv6 配置（功能灰度中，敬请期待）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Ipv6 m_ipv6;
                    bool m_ipv6HasBeenSet;

                    /**
                     * 是否兼容旧版本配置（内部兼容性字段）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Compatibility m_compatibility;
                    bool m_compatibilityHasBeenSet;

                    /**
                     * 区域特殊配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SpecificConfig m_specificConfig;
                    bool m_specificConfigHasBeenSet;

                    /**
                     * 加速区域
mainland：中国境内加速
overseas：中国境外加速
global：全球加速
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 域名锁定状态
normal：未锁定
mainland：中国境内锁定
overseas：中国境外锁定
global：全球锁定
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

                    /**
                     * 回源S3鉴权配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AwsPrivateAccess m_awsPrivateAccess;
                    bool m_awsPrivateAccessHasBeenSet;

                    /**
                     * Scdn配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SecurityConfig> m_securityConfig;
                    bool m_securityConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DETAILDOMAIN_H_
