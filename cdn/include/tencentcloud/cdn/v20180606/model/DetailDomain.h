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
#include <tencentcloud/cdn/v20180606/model/ImageOptimization.h>
#include <tencentcloud/cdn/v20180606/model/UserAgentFilter.h>
#include <tencentcloud/cdn/v20180606/model/AccessControl.h>
#include <tencentcloud/cdn/v20180606/model/UrlRedirect.h>
#include <tencentcloud/cdn/v20180606/model/Tag.h>
#include <tencentcloud/cdn/v20180606/model/AdvancedAuthentication.h>
#include <tencentcloud/cdn/v20180606/model/OriginAuthentication.h>
#include <tencentcloud/cdn/v20180606/model/Ipv6Access.h>
#include <tencentcloud/cdn/v20180606/model/AdvanceConfig.h>
#include <tencentcloud/cdn/v20180606/model/OfflineCache.h>
#include <tencentcloud/cdn/v20180606/model/OriginCombine.h>
#include <tencentcloud/cdn/v20180606/model/PostSize.h>
#include <tencentcloud/cdn/v20180606/model/Quic.h>
#include <tencentcloud/cdn/v20180606/model/OssPrivateAccess.h>
#include <tencentcloud/cdn/v20180606/model/WebSocket.h>
#include <tencentcloud/cdn/v20180606/model/RemoteAuthentication.h>
#include <tencentcloud/cdn/v20180606/model/ShareCname.h>
#include <tencentcloud/cdn/v20180606/model/RuleEngine.h>
#include <tencentcloud/cdn/v20180606/model/HwPrivateAccess.h>
#include <tencentcloud/cdn/v20180606/model/QnPrivateAccess.h>
#include <tencentcloud/cdn/v20180606/model/HttpsBilling.h>
#include <tencentcloud/cdn/v20180606/model/OthersPrivateAccess.h>
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
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置域名 ID
                     * @param _resourceId 域名 ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取腾讯云账号ID
                     * @return AppId 腾讯云账号ID
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置腾讯云账号ID
                     * @param _appId 腾讯云账号ID
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取加速域名
                     * @return Domain 加速域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置加速域名
                     * @param _domain 加速域名
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
                     * 获取域名对应的 CNAME 地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cname 域名对应的 CNAME 地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 设置域名对应的 CNAME 地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cname 域名对应的 CNAME 地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCname(const std::string& _cname);

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     * 
                     */
                    bool CnameHasBeenSet() const;

                    /**
                     * 获取加速服务状态
rejected：域名审核未通过，域名备案过期/被注销导致
processing：部署中
closing：关闭中
online：已启动
offline：已关闭
                     * @return Status 加速服务状态
rejected：域名审核未通过，域名备案过期/被注销导致
processing：部署中
closing：关闭中
online：已启动
offline：已关闭
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置加速服务状态
rejected：域名审核未通过，域名备案过期/被注销导致
processing：部署中
closing：关闭中
online：已启动
offline：已关闭
                     * @param _status 加速服务状态
rejected：域名审核未通过，域名备案过期/被注销导致
processing：部署中
closing：关闭中
online：已启动
offline：已关闭
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取项目 ID，可前往腾讯云项目管理页面查看
                     * @return ProjectId 项目 ID，可前往腾讯云项目管理页面查看
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目 ID，可前往腾讯云项目管理页面查看
                     * @param _projectId 项目 ID，可前往腾讯云项目管理页面查看
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
                     * 获取加速域名业务类型
web：网页小文件
download：下载大文件
media：音视频点播
hybrid:  动静加速
dynamic:  动态加速
                     * @return ServiceType 加速域名业务类型
web：网页小文件
download：下载大文件
media：音视频点播
hybrid:  动静加速
dynamic:  动态加速
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置加速域名业务类型
web：网页小文件
download：下载大文件
media：音视频点播
hybrid:  动静加速
dynamic:  动态加速
                     * @param _serviceType 加速域名业务类型
web：网页小文件
download：下载大文件
media：音视频点播
hybrid:  动静加速
dynamic:  动态加速
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
                     * 获取域名创建时间
                     * @return CreateTime 域名创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置域名创建时间
                     * @param _createTime 域名创建时间
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
                     * 获取域名更新时间
                     * @return UpdateTime 域名更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置域名更新时间
                     * @param _updateTime 域名更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpFilter IP 黑白名单配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    IpFilter GetIpFilter() const;

                    /**
                     * 设置IP 黑白名单配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipFilter IP 黑白名单配置
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
                     * 获取IP 访问限频配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpFreqLimit IP 访问限频配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    IpFreqLimit GetIpFreqLimit() const;

                    /**
                     * 设置IP 访问限频配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipFreqLimit IP 访问限频配置
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
                     * 获取状态码缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusCodeCache 状态码缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    StatusCodeCache GetStatusCodeCache() const;

                    /**
                     * 设置状态码缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statusCodeCache 状态码缓存配置
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
                     * 获取智能压缩配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Compression 智能压缩配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Compression GetCompression() const;

                    /**
                     * 设置智能压缩配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _compression 智能压缩配置
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
                     * 获取带宽封顶配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BandwidthAlert 带宽封顶配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BandwidthAlert GetBandwidthAlert() const;

                    /**
                     * 设置带宽封顶配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bandwidthAlert 带宽封顶配置
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
                     * 获取Range 回源配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RangeOriginPull Range 回源配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RangeOriginPull GetRangeOriginPull() const;

                    /**
                     * 设置Range 回源配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rangeOriginPull Range 回源配置
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
                     * 获取301/302 回源自动跟随配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FollowRedirect 301/302 回源自动跟随配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    FollowRedirect GetFollowRedirect() const;

                    /**
                     * 设置301/302 回源自动跟随配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _followRedirect 301/302 回源自动跟随配置
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
                     * 获取自定义错误页面配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorPage 自定义错误页面配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ErrorPage GetErrorPage() const;

                    /**
                     * 设置自定义错误页面配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorPage 自定义错误页面配置
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
                     * 获取自定义请求头部配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestHeader 自定义请求头部配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RequestHeader GetRequestHeader() const;

                    /**
                     * 设置自定义请求头部配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _requestHeader 自定义请求头部配置
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
                     * 获取自定义响应头部配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResponseHeader 自定义响应头部配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ResponseHeader GetResponseHeader() const;

                    /**
                     * 设置自定义响应头部配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _responseHeader 自定义响应头部配置
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
                     * 获取单链接下行限速配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DownstreamCapping 单链接下行限速配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DownstreamCapping GetDownstreamCapping() const;

                    /**
                     * 设置单链接下行限速配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _downstreamCapping 单链接下行限速配置
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
                     * 获取带参/不带参缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CacheKey 带参/不带参缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CacheKey GetCacheKey() const;

                    /**
                     * 设置带参/不带参缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cacheKey 带参/不带参缓存配置
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
                     * 获取源站头部缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResponseHeaderCache 源站头部缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ResponseHeaderCache GetResponseHeaderCache() const;

                    /**
                     * 设置源站头部缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _responseHeaderCache 源站头部缓存配置
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
                     * 获取视频拖拽配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VideoSeek 视频拖拽配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    VideoSeek GetVideoSeek() const;

                    /**
                     * 设置视频拖拽配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _videoSeek 视频拖拽配置
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
                     * 获取节点缓存过期规则配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cache 节点缓存过期规则配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Cache GetCache() const;

                    /**
                     * 设置节点缓存过期规则配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cache 节点缓存过期规则配置
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
                     * 获取跨国链路优化配置（功能灰度中，敬请期待）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginPullOptimization 跨国链路优化配置（功能灰度中，敬请期待）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OriginPullOptimization GetOriginPullOptimization() const;

                    /**
                     * 设置跨国链路优化配置（功能灰度中，敬请期待）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _originPullOptimization 跨国链路优化配置（功能灰度中，敬请期待）
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
                     * 获取Https 加速相关配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Https Https 加速相关配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Https GetHttps() const;

                    /**
                     * 设置Https 加速相关配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _https Https 加速相关配置
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
                     * 获取时间戳防盗链配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Authentication 时间戳防盗链配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Authentication GetAuthentication() const;

                    /**
                     * 设置时间戳防盗链配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authentication 时间戳防盗链配置
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
                     * 获取SEO 优化配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Seo SEO 优化配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Seo GetSeo() const;

                    /**
                     * 设置SEO 优化配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _seo SEO 优化配置
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
                     * 
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
                     * @param _disable 域名封禁状态
normal：正常状态
overdue：账号欠费导致域名关闭，充值完成后可自行启动加速服务
malicious：域名出现恶意行为，强制关闭加速服务
ddos：域名被大规模 DDoS 攻击，关闭加速服务
idle：域名超过 90 天内无任何操作、数据产生，判定为不活跃域名自动关闭加速服务，可自行启动加速服务
unlicensed：域名未备案/备案注销，自动关闭加速服务，备案完成后可自行启动加速服务
capping：触发配置的带宽阈值上限
readonly：域名存在特殊配置，被锁定
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDisable(const std::string& _disable);

                    /**
                     * 判断参数 Disable 是否已赋值
                     * @return Disable 是否已赋值
                     * 
                     */
                    bool DisableHasBeenSet() const;

                    /**
                     * 获取访问协议强制跳转配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ForceRedirect 访问协议强制跳转配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ForceRedirect GetForceRedirect() const;

                    /**
                     * 设置访问协议强制跳转配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _forceRedirect 访问协议强制跳转配置
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
                     * 获取Referer 防盗链配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Referer Referer 防盗链配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Referer GetReferer() const;

                    /**
                     * 设置Referer 防盗链配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _referer Referer 防盗链配置
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
                     * 获取浏览器缓存过期规则配置（功能灰度中，敬请期待）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxAge 浏览器缓存过期规则配置（功能灰度中，敬请期待）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MaxAge GetMaxAge() const;

                    /**
                     * 设置浏览器缓存过期规则配置（功能灰度中，敬请期待）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxAge 浏览器缓存过期规则配置（功能灰度中，敬请期待）
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
                     * 获取Ipv6 回源配置（功能灰度中，敬请期待）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ipv6 Ipv6 回源配置（功能灰度中，敬请期待）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Ipv6 GetIpv6() const;

                    /**
                     * 设置Ipv6 回源配置（功能灰度中，敬请期待）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipv6 Ipv6 回源配置（功能灰度中，敬请期待）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIpv6(const Ipv6& _ipv6);

                    /**
                     * 判断参数 Ipv6 是否已赋值
                     * @return Ipv6 是否已赋值
                     * 
                     */
                    bool Ipv6HasBeenSet() const;

                    /**
                     * 获取是否兼容旧版本配置（内部兼容性字段）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Compatibility 是否兼容旧版本配置（内部兼容性字段）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Compatibility GetCompatibility() const;

                    /**
                     * 设置是否兼容旧版本配置（内部兼容性字段）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _compatibility 是否兼容旧版本配置（内部兼容性字段）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCompatibility(const Compatibility& _compatibility);

                    /**
                     * 判断参数 Compatibility 是否已赋值
                     * @return Compatibility 是否已赋值
                     * 
                     */
                    bool CompatibilityHasBeenSet() const;

                    /**
                     * 获取区域特殊配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpecificConfig 区域特殊配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SpecificConfig GetSpecificConfig() const;

                    /**
                     * 设置区域特殊配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _specificConfig 区域特殊配置
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置加速区域
mainland：中国境内加速
overseas：中国境外加速
global：全球加速
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _area 加速区域
mainland：中国境内加速
overseas：中国境外加速
global：全球加速
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 
                     */
                    std::string GetReadonly() const;

                    /**
                     * 设置域名锁定状态
normal：未锁定
mainland：中国境内锁定
overseas：中国境外锁定
global：全球锁定
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _readonly 域名锁定状态
normal：未锁定
mainland：中国境内锁定
overseas：中国境外锁定
global：全球锁定
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReadonly(const std::string& _readonly);

                    /**
                     * 判断参数 Readonly 是否已赋值
                     * @return Readonly 是否已赋值
                     * 
                     */
                    bool ReadonlyHasBeenSet() const;

                    /**
                     * 获取回源超时配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginPullTimeout 回源超时配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OriginPullTimeout GetOriginPullTimeout() const;

                    /**
                     * 设置回源超时配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _originPullTimeout 回源超时配置
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取回源S3鉴权配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AwsPrivateAccess 回源S3鉴权配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AwsPrivateAccess GetAwsPrivateAccess() const;

                    /**
                     * 设置回源S3鉴权配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _awsPrivateAccess 回源S3鉴权配置
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
                     * 获取Scdn配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecurityConfig Scdn配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SecurityConfig GetSecurityConfig() const;

                    /**
                     * 设置Scdn配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _securityConfig Scdn配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecurityConfig(const SecurityConfig& _securityConfig);

                    /**
                     * 判断参数 SecurityConfig 是否已赋值
                     * @return SecurityConfig 是否已赋值
                     * 
                     */
                    bool SecurityConfigHasBeenSet() const;

                    /**
                     * 获取ImageOptimization配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageOptimization ImageOptimization配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImageOptimization GetImageOptimization() const;

                    /**
                     * 设置ImageOptimization配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageOptimization ImageOptimization配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImageOptimization(const ImageOptimization& _imageOptimization);

                    /**
                     * 判断参数 ImageOptimization 是否已赋值
                     * @return ImageOptimization 是否已赋值
                     * 
                     */
                    bool ImageOptimizationHasBeenSet() const;

                    /**
                     * 获取UA黑白名单配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserAgentFilter UA黑白名单配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    UserAgentFilter GetUserAgentFilter() const;

                    /**
                     * 设置UA黑白名单配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userAgentFilter UA黑白名单配置
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccessControl 访问控制
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AccessControl GetAccessControl() const;

                    /**
                     * 设置访问控制
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accessControl 访问控制
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取是否支持高级配置项
on：支持
off：不支持
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Advance 是否支持高级配置项
on：支持
off：不支持
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAdvance() const;

                    /**
                     * 设置是否支持高级配置项
on：支持
off：不支持
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _advance 是否支持高级配置项
on：支持
off：不支持
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAdvance(const std::string& _advance);

                    /**
                     * 判断参数 Advance 是否已赋值
                     * @return Advance 是否已赋值
                     * 
                     */
                    bool AdvanceHasBeenSet() const;

                    /**
                     * 获取URL重定向配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UrlRedirect URL重定向配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    UrlRedirect GetUrlRedirect() const;

                    /**
                     * 设置URL重定向配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _urlRedirect URL重定向配置
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccessPort 访问端口配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetAccessPort() const;

                    /**
                     * 设置访问端口配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accessPort 访问端口配置
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取标签配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tag 标签配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTag() const;

                    /**
                     * 设置标签配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tag 标签配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTag(const std::vector<Tag>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取时间戳防盗链高级配置，白名单功能
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdvancedAuthentication 时间戳防盗链高级配置，白名单功能
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AdvancedAuthentication GetAdvancedAuthentication() const;

                    /**
                     * 设置时间戳防盗链高级配置，白名单功能
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _advancedAuthentication 时间戳防盗链高级配置，白名单功能
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取回源鉴权高级配置，白名单功能
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginAuthentication 回源鉴权高级配置，白名单功能
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OriginAuthentication GetOriginAuthentication() const;

                    /**
                     * 设置回源鉴权高级配置，白名单功能
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _originAuthentication 回源鉴权高级配置，白名单功能
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取Ipv6访问配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ipv6Access Ipv6访问配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Ipv6Access GetIpv6Access() const;

                    /**
                     * 设置Ipv6访问配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipv6Access Ipv6访问配置
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取高级配置集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdvanceSet 高级配置集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AdvanceConfig> GetAdvanceSet() const;

                    /**
                     * 设置高级配置集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _advanceSet 高级配置集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAdvanceSet(const std::vector<AdvanceConfig>& _advanceSet);

                    /**
                     * 判断参数 AdvanceSet 是否已赋值
                     * @return AdvanceSet 是否已赋值
                     * 
                     */
                    bool AdvanceSetHasBeenSet() const;

                    /**
                     * 获取离线缓存（功能灰度中，尚未全量，请等待后续全量发布）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OfflineCache 离线缓存（功能灰度中，尚未全量，请等待后续全量发布）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OfflineCache GetOfflineCache() const;

                    /**
                     * 设置离线缓存（功能灰度中，尚未全量，请等待后续全量发布）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _offlineCache 离线缓存（功能灰度中，尚未全量，请等待后续全量发布）
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取合并回源（白名单功能）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginCombine 合并回源（白名单功能）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OriginCombine GetOriginCombine() const;

                    /**
                     * 设置合并回源（白名单功能）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _originCombine 合并回源（白名单功能）
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取POST上传配置项
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PostMaxSize POST上传配置项
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PostSize GetPostMaxSize() const;

                    /**
                     * 设置POST上传配置项
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _postMaxSize POST上传配置项
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取Quic配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Quic Quic配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Quic GetQuic() const;

                    /**
                     * 设置Quic配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _quic Quic配置
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OssPrivateAccess 回源OSS私有鉴权
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OssPrivateAccess GetOssPrivateAccess() const;

                    /**
                     * 设置回源OSS私有鉴权
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ossPrivateAccess 回源OSS私有鉴权
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
                     * 获取WebSocket配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WebSocket WebSocket配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WebSocket GetWebSocket() const;

                    /**
                     * 设置WebSocket配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _webSocket WebSocket配置
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RemoteAuthentication 远程鉴权配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RemoteAuthentication GetRemoteAuthentication() const;

                    /**
                     * 设置远程鉴权配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remoteAuthentication 远程鉴权配置
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取共享CNAME配置（白名单功能）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShareCname 共享CNAME配置（白名单功能）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ShareCname GetShareCname() const;

                    /**
                     * 设置共享CNAME配置（白名单功能）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _shareCname 共享CNAME配置（白名单功能）
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取规则引擎
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleEngine 规则引擎
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RuleEngine GetRuleEngine() const;

                    /**
                     * 设置规则引擎
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleEngine 规则引擎
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleEngine(const RuleEngine& _ruleEngine);

                    /**
                     * 判断参数 RuleEngine 是否已赋值
                     * @return RuleEngine 是否已赋值
                     * 
                     */
                    bool RuleEngineHasBeenSet() const;

                    /**
                     * 获取主域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentHost 主域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParentHost() const;

                    /**
                     * 设置主域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentHost 主域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParentHost(const std::string& _parentHost);

                    /**
                     * 判断参数 ParentHost 是否已赋值
                     * @return ParentHost 是否已赋值
                     * 
                     */
                    bool ParentHostHasBeenSet() const;

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

                    /**
                     * 获取HTTPS服务，缺省时默认开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HttpsBilling HTTPS服务，缺省时默认开启
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HttpsBilling GetHttpsBilling() const;

                    /**
                     * 设置HTTPS服务，缺省时默认开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _httpsBilling HTTPS服务，缺省时默认开启
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取其他厂商对象存储回源鉴权
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OthersPrivateAccess 其他厂商对象存储回源鉴权
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OthersPrivateAccess GetOthersPrivateAccess() const;

                    /**
                     * 设置其他厂商对象存储回源鉴权
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _othersPrivateAccess 其他厂商对象存储回源鉴权
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取参数黑名单
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamFilter 参数黑名单
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ParamFilter GetParamFilter() const;

                    /**
                     * 设置参数黑名单
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramFilter 参数黑名单
注意：此字段可能返回 null，表示取不到有效值。
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
closing：关闭中
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
                     * 加速域名业务类型
web：网页小文件
download：下载大文件
media：音视频点播
hybrid:  动静加速
dynamic:  动态加速
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
                     * 自定义错误页面配置
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
                     * Ipv6 回源配置（功能灰度中，敬请期待）
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
                    SecurityConfig m_securityConfig;
                    bool m_securityConfigHasBeenSet;

                    /**
                     * ImageOptimization配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageOptimization m_imageOptimization;
                    bool m_imageOptimizationHasBeenSet;

                    /**
                     * UA黑白名单配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    UserAgentFilter m_userAgentFilter;
                    bool m_userAgentFilterHasBeenSet;

                    /**
                     * 访问控制
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AccessControl m_accessControl;
                    bool m_accessControlHasBeenSet;

                    /**
                     * 是否支持高级配置项
on：支持
off：不支持
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_advance;
                    bool m_advanceHasBeenSet;

                    /**
                     * URL重定向配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    UrlRedirect m_urlRedirect;
                    bool m_urlRedirectHasBeenSet;

                    /**
                     * 访问端口配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_accessPort;
                    bool m_accessPortHasBeenSet;

                    /**
                     * 标签配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 时间戳防盗链高级配置，白名单功能
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AdvancedAuthentication m_advancedAuthentication;
                    bool m_advancedAuthenticationHasBeenSet;

                    /**
                     * 回源鉴权高级配置，白名单功能
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OriginAuthentication m_originAuthentication;
                    bool m_originAuthenticationHasBeenSet;

                    /**
                     * Ipv6访问配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Ipv6Access m_ipv6Access;
                    bool m_ipv6AccessHasBeenSet;

                    /**
                     * 高级配置集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AdvanceConfig> m_advanceSet;
                    bool m_advanceSetHasBeenSet;

                    /**
                     * 离线缓存（功能灰度中，尚未全量，请等待后续全量发布）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OfflineCache m_offlineCache;
                    bool m_offlineCacheHasBeenSet;

                    /**
                     * 合并回源（白名单功能）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OriginCombine m_originCombine;
                    bool m_originCombineHasBeenSet;

                    /**
                     * POST上传配置项
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PostSize m_postMaxSize;
                    bool m_postMaxSizeHasBeenSet;

                    /**
                     * Quic配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Quic m_quic;
                    bool m_quicHasBeenSet;

                    /**
                     * 回源OSS私有鉴权
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OssPrivateAccess m_ossPrivateAccess;
                    bool m_ossPrivateAccessHasBeenSet;

                    /**
                     * WebSocket配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WebSocket m_webSocket;
                    bool m_webSocketHasBeenSet;

                    /**
                     * 远程鉴权配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RemoteAuthentication m_remoteAuthentication;
                    bool m_remoteAuthenticationHasBeenSet;

                    /**
                     * 共享CNAME配置（白名单功能）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ShareCname m_shareCname;
                    bool m_shareCnameHasBeenSet;

                    /**
                     * 规则引擎
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RuleEngine m_ruleEngine;
                    bool m_ruleEngineHasBeenSet;

                    /**
                     * 主域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parentHost;
                    bool m_parentHostHasBeenSet;

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

                    /**
                     * HTTPS服务，缺省时默认开启
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HttpsBilling m_httpsBilling;
                    bool m_httpsBillingHasBeenSet;

                    /**
                     * 其他厂商对象存储回源鉴权
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OthersPrivateAccess m_othersPrivateAccess;
                    bool m_othersPrivateAccessHasBeenSet;

                    /**
                     * 参数黑名单
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ParamFilter m_paramFilter;
                    bool m_paramFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DETAILDOMAIN_H_
