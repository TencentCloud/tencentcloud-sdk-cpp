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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEORIGINSTREAMINFORESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEORIGINSTREAMINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/OriginStreamCustomizationRule.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeOriginStreamInfo返回参数结构体
                */
                class DescribeOriginStreamInfoResponse : public AbstractModel
                {
                public:
                    DescribeOriginStreamInfoResponse();
                    ~DescribeOriginStreamInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>配置状态信息：0 配置中，1 成功，2 关闭中，3 关闭成功。</p>
                     * @return Status <p>配置状态信息：0 配置中，1 成功，2 关闭中，3 关闭成功。</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>播放类型。</p>
                     * @return CdnStreamPlayType <p>播放类型。</p>
                     * 
                     */
                    std::vector<std::string> GetCdnStreamPlayType() const;

                    /**
                     * 判断参数 CdnStreamPlayType 是否已赋值
                     * @return CdnStreamPlayType 是否已赋值
                     * 
                     */
                    bool CdnStreamPlayTypeHasBeenSet() const;

                    /**
                     * 获取<p>原站配置类型：1 直播原站。<br>2 streamPackage。</p>
                     * @return OriginStreamType <p>原站配置类型：1 直播原站。<br>2 streamPackage。</p>
                     * 
                     */
                    int64_t GetOriginStreamType() const;

                    /**
                     * 判断参数 OriginStreamType 是否已赋值
                     * @return OriginStreamType 是否已赋值
                     * 
                     */
                    bool OriginStreamTypeHasBeenSet() const;

                    /**
                     * 获取<p>原站播放类型。</p>
                     * @return OriginStreamPlayType <p>原站播放类型。</p>
                     * 
                     */
                    std::string GetOriginStreamPlayType() const;

                    /**
                     * 判断参数 OriginStreamPlayType 是否已赋值
                     * @return OriginStreamPlayType 是否已赋值
                     * 
                     */
                    bool OriginStreamPlayTypeHasBeenSet() const;

                    /**
                     * 获取<p>原站地址类型：1 ip，2 域名。</p>
                     * @return OriginAddressType <p>原站地址类型：1 ip，2 域名。</p>
                     * 
                     */
                    int64_t GetOriginAddressType() const;

                    /**
                     * 判断参数 OriginAddressType 是否已赋值
                     * @return OriginAddressType 是否已赋值
                     * 
                     */
                    bool OriginAddressTypeHasBeenSet() const;

                    /**
                     * 获取<p>原站地址信息，每项用分号分割域名（ip）、端口信息。<br>端口为空也要带上分号，表示取默认端口。</p>
                     * @return OriginAddress <p>原站地址信息，每项用分号分割域名（ip）、端口信息。<br>端口为空也要带上分号，表示取默认端口。</p>
                     * 
                     */
                    std::vector<std::string> GetOriginAddress() const;

                    /**
                     * 判断参数 OriginAddress 是否已赋值
                     * @return OriginAddress 是否已赋值
                     * 
                     */
                    bool OriginAddressHasBeenSet() const;

                    /**
                     * 获取<p>超时时间，单位 ms。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginTimeout <p>超时时间，单位 ms。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOriginTimeout() const;

                    /**
                     * 判断参数 OriginTimeout 是否已赋值
                     * @return OriginTimeout 是否已赋值
                     * 
                     */
                    bool OriginTimeoutHasBeenSet() const;

                    /**
                     * 获取<p>重试次数，单位 次。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginRetryTimes <p>重试次数，单位 次。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOriginRetryTimes() const;

                    /**
                     * 判断参数 OriginRetryTimes 是否已赋值
                     * @return OriginRetryTimes 是否已赋值
                     * 
                     */
                    bool OriginRetryTimesHasBeenSet() const;

                    /**
                     * 获取<p>时间戳修正，可取值：on、off。<br>当原站播放协议为 rtmp、flv 时，传递该字段才会生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeJitter <p>时间戳修正，可取值：on、off。<br>当原站播放协议为 rtmp、flv 时，传递该字段才会生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTimeJitter() const;

                    /**
                     * 判断参数 TimeJitter 是否已赋值
                     * @return TimeJitter 是否已赋值
                     * 
                     */
                    bool TimeJitterHasBeenSet() const;

                    /**
                     * 获取<p>分片数，单位 个。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HlsPlayFragmentCount <p>分片数，单位 个。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetHlsPlayFragmentCount() const;

                    /**
                     * 判断参数 HlsPlayFragmentCount 是否已赋值
                     * @return HlsPlayFragmentCount 是否已赋值
                     * 
                     */
                    bool HlsPlayFragmentCountHasBeenSet() const;

                    /**
                     * 获取<p>分片时长，单位 ms。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HlsPlayFragmentDuration <p>分片时长，单位 ms。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetHlsPlayFragmentDuration() const;

                    /**
                     * 判断参数 HlsPlayFragmentDuration 是否已赋值
                     * @return HlsPlayFragmentDuration 是否已赋值
                     * 
                     */
                    bool HlsPlayFragmentDurationHasBeenSet() const;

                    /**
                     * 获取<p>是否透传 http 头信息，可取值：on、off。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PassThroughHttpHeader <p>是否透传 http 头信息，可取值：on、off。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPassThroughHttpHeader() const;

                    /**
                     * 判断参数 PassThroughHttpHeader 是否已赋值
                     * @return PassThroughHttpHeader 是否已赋值
                     * 
                     */
                    bool PassThroughHttpHeaderHasBeenSet() const;

                    /**
                     * 获取<p>是否透传相应，可取值：on、off。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PassThroughResponse <p>是否透传相应，可取值：on、off。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPassThroughResponse() const;

                    /**
                     * 判断参数 PassThroughResponse 是否已赋值
                     * @return PassThroughResponse 是否已赋值
                     * 
                     */
                    bool PassThroughResponseHasBeenSet() const;

                    /**
                     * 获取<p>是否透传参数，可取值：on、off。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PassThroughParam <p>是否透传参数，可取值：on、off。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPassThroughParam() const;

                    /**
                     * 判断参数 PassThroughParam 是否已赋值
                     * @return PassThroughParam 是否已赋值
                     * 
                     */
                    bool PassThroughParamHasBeenSet() const;

                    /**
                     * 获取<p>原站 host。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginHost <p>原站 host。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOriginHost() const;

                    /**
                     * 判断参数 OriginHost 是否已赋值
                     * @return OriginHost 是否已赋值
                     * 
                     */
                    bool OriginHostHasBeenSet() const;

                    /**
                     * 获取<p>索引缓存，单位 ms。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexerCache <p>索引缓存，单位 ms。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIndexerCache() const;

                    /**
                     * 判断参数 IndexerCache 是否已赋值
                     * @return IndexerCache 是否已赋值
                     * 
                     */
                    bool IndexerCacheHasBeenSet() const;

                    /**
                     * 获取<p>分片缓存，单位 ms。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FragmentCache <p>分片缓存，单位 ms。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFragmentCache() const;

                    /**
                     * 判断参数 FragmentCache 是否已赋值
                     * @return FragmentCache 是否已赋值
                     * 
                     */
                    bool FragmentCacheHasBeenSet() const;

                    /**
                     * 获取<p>域名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DomainName <p>域名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取<p>https 回源，可取值：on、off。<br>当原站播放协议为flv、hls时，传递此字段才会生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UsingHttps <p>https 回源，可取值：on、off。<br>当原站播放协议为flv、hls时，传递此字段才会生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUsingHttps() const;

                    /**
                     * 判断参数 UsingHttps 是否已赋值
                     * @return UsingHttps 是否已赋值
                     * 
                     */
                    bool UsingHttpsHasBeenSet() const;

                    /**
                     * 获取<p>是否遵循原站，可取值：on、off。<br>当原站播放协议为hls时，此字段才会生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CacheFollowOrigin <p>是否遵循原站，可取值：on、off。<br>当原站播放协议为hls时，此字段才会生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCacheFollowOrigin() const;

                    /**
                     * 判断参数 CacheFollowOrigin 是否已赋值
                     * @return CacheFollowOrigin 是否已赋值
                     * 
                     */
                    bool CacheFollowOriginHasBeenSet() const;

                    /**
                     * 获取<p>状态码缓存，数组元素格式：<br>cacheKey:interval<br>cacheKey 可取值：cache_400_sec、cache_403_sec、cache_404_sec、cache_405_sec、cache_500_sec、cache_503_sec、cache_504_sec。<br>interval 单位 ms。<br>当原站播放协议为hls时，此字段才会生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CacheStatusCode <p>状态码缓存，数组元素格式：<br>cacheKey:interval<br>cacheKey 可取值：cache_400_sec、cache_403_sec、cache_404_sec、cache_405_sec、cache_500_sec、cache_503_sec、cache_504_sec。<br>interval 单位 ms。<br>当原站播放协议为hls时，此字段才会生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetCacheStatusCode() const;

                    /**
                     * 判断参数 CacheStatusCode 是否已赋值
                     * @return CacheStatusCode 是否已赋值
                     * 
                     */
                    bool CacheStatusCodeHasBeenSet() const;

                    /**
                     * 获取<p>url改写， 格式为： url1&lt;|&gt;url2; 其中，&lt;|&gt; 为分隔符。<br>url1、url2 长度限制100，不可包含特殊字符。<br>当原站播放协议为hls时，此字段才会生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UrlReplaceRules <p>url改写， 格式为： url1&lt;|&gt;url2; 其中，&lt;|&gt; 为分隔符。<br>url1、url2 长度限制100，不可包含特殊字符。<br>当原站播放协议为hls时，此字段才会生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetUrlReplaceRules() const;

                    /**
                     * 判断参数 UrlReplaceRules 是否已赋值
                     * @return UrlReplaceRules 是否已赋值
                     * 
                     */
                    bool UrlReplaceRulesHasBeenSet() const;

                    /**
                     * 获取<p>是否 options 支持，可取值：on、off。<br>当原站播放协议为hls时，此字段才会生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OptionsRequest <p>是否 options 支持，可取值：on、off。<br>当原站播放协议为hls时，此字段才会生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOptionsRequest() const;

                    /**
                     * 判断参数 OptionsRequest 是否已赋值
                     * @return OptionsRequest 是否已赋值
                     * 
                     */
                    bool OptionsRequestHasBeenSet() const;

                    /**
                     * 获取<p>是否 follow 301/302，可取值：on、off。<br>当原站播放协议为hls时，此字段才会生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FollowRedirect <p>是否 follow 301/302，可取值：on、off。<br>当原站播放协议为hls时，此字段才会生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFollowRedirect() const;

                    /**
                     * 判断参数 FollowRedirect 是否已赋值
                     * @return FollowRedirect 是否已赋值
                     * 
                     */
                    bool FollowRedirectHasBeenSet() const;

                    /**
                     * 获取<p>源站类型 OriginStreamType 为 2 时，该字段有效。 代表源站地址 OriginAddress 对应的地区 region。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StreamPackageRegion <p>源站类型 OriginStreamType 为 2 时，该字段有效。 代表源站地址 OriginAddress 对应的地区 region。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetStreamPackageRegion() const;

                    /**
                     * 判断参数 StreamPackageRegion 是否已赋值
                     * @return StreamPackageRegion 是否已赋值
                     * 
                     */
                    bool StreamPackageRegionHasBeenSet() const;

                    /**
                     * 获取<p>客户名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomerName <p>客户名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCustomerName() const;

                    /**
                     * 判断参数 CustomerName 是否已赋值
                     * @return CustomerName 是否已赋值
                     * 
                     */
                    bool CustomerNameHasBeenSet() const;

                    /**
                     * 获取<p>当 OriginStreamPlayType 为 hls 时生效，设置索引缓存保留指定参数列表，最多支持 30 组，每个参数小于等于 20 字符。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexerKeepParam <p>当 OriginStreamPlayType 为 hls 时生效，设置索引缓存保留指定参数列表，最多支持 30 组，每个参数小于等于 20 字符。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetIndexerKeepParam() const;

                    /**
                     * 判断参数 IndexerKeepParam 是否已赋值
                     * @return IndexerKeepParam 是否已赋值
                     * 
                     */
                    bool IndexerKeepParamHasBeenSet() const;

                    /**
                     * 获取<p>当 OriginStreamPlayType 为 hls 时生效，设置分片缓存保留指定参数列表，最多支持 30 组，每个参数小于等于 20 字符。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FragmentKeepParam <p>当 OriginStreamPlayType 为 hls 时生效，设置分片缓存保留指定参数列表，最多支持 30 组，每个参数小于等于 20 字符。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetFragmentKeepParam() const;

                    /**
                     * 判断参数 FragmentKeepParam 是否已赋值
                     * @return FragmentKeepParam 是否已赋值
                     * 
                     */
                    bool FragmentKeepParamHasBeenSet() const;

                    /**
                     * 获取<p>当 OriginStreamType = 2 时有效，表示 mediapackage 具体类型：<br>media_package =&gt; 仅配置普通频道。<br>media_package_pure_ad =&gt; 仅配置广告。<br>media_package_mix_ad =&gt; 同时配置普通频道和广告。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MediaPackageType <p>当 OriginStreamType = 2 时有效，表示 mediapackage 具体类型：<br>media_package =&gt; 仅配置普通频道。<br>media_package_pure_ad =&gt; 仅配置广告。<br>media_package_mix_ad =&gt; 同时配置普通频道和广告。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMediaPackageType() const;

                    /**
                     * 判断参数 MediaPackageType 是否已赋值
                     * @return MediaPackageType 是否已赋值
                     * 
                     */
                    bool MediaPackageTypeHasBeenSet() const;

                    /**
                     * 获取<p>当 OriginStreamType = 2 且 MediaPackageType = media_package 时有效，表示 mediapackage 频道类型，可组合如下值：normal（频道）、ssai（广告）、linear_assembly（线性组装）。</p>
                     * @return MediaPackageChannelTypes <p>当 OriginStreamType = 2 且 MediaPackageType = media_package 时有效，表示 mediapackage 频道类型，可组合如下值：normal（频道）、ssai（广告）、linear_assembly（线性组装）。</p>
                     * 
                     */
                    std::vector<std::string> GetMediaPackageChannelTypes() const;

                    /**
                     * 判断参数 MediaPackageChannelTypes 是否已赋值
                     * @return MediaPackageChannelTypes 是否已赋值
                     * 
                     */
                    bool MediaPackageChannelTypesHasBeenSet() const;

                    /**
                     * 获取<p>当 OriginStreamPlayType 为 hls 时生效，设置索引自定义 header，每一组参数、取值用空格分开。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexerHeader <p>当 OriginStreamPlayType 为 hls 时生效，设置索引自定义 header，每一组参数、取值用空格分开。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetIndexerHeader() const;

                    /**
                     * 判断参数 IndexerHeader 是否已赋值
                     * @return IndexerHeader 是否已赋值
                     * 
                     */
                    bool IndexerHeaderHasBeenSet() const;

                    /**
                     * 获取<p>当 OriginStreamPlayType 为 hls 时生效，设置分片自定义 header，每一组参数、取值用空格分开。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FragmentHeader <p>当 OriginStreamPlayType 为 hls 时生效，设置分片自定义 header，每一组参数、取值用空格分开。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetFragmentHeader() const;

                    /**
                     * 判断参数 FragmentHeader 是否已赋值
                     * @return FragmentHeader 是否已赋值
                     * 
                     */
                    bool FragmentHeaderHasBeenSet() const;

                    /**
                     * 获取<p>自定义规则列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomizationRules <p>自定义规则列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<OriginStreamCustomizationRule> GetCustomizationRules() const;

                    /**
                     * 判断参数 CustomizationRules 是否已赋值
                     * @return CustomizationRules 是否已赋值
                     * 
                     */
                    bool CustomizationRulesHasBeenSet() const;

                    /**
                     * 获取<p>缓存格式规则。<br>0：默认格式。<br>1：云直播源站格式。<br>当 OriginStreamPlayType 为 customization 时候生效。</p>
                     * @return CacheFormatRule <p>缓存格式规则。<br>0：默认格式。<br>1：云直播源站格式。<br>当 OriginStreamPlayType 为 customization 时候生效。</p>
                     * 
                     */
                    int64_t GetCacheFormatRule() const;

                    /**
                     * 判断参数 CacheFormatRule 是否已赋值
                     * @return CacheFormatRule 是否已赋值
                     * 
                     */
                    bool CacheFormatRuleHasBeenSet() const;

                private:

                    /**
                     * <p>配置状态信息：0 配置中，1 成功，2 关闭中，3 关闭成功。</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>播放类型。</p>
                     */
                    std::vector<std::string> m_cdnStreamPlayType;
                    bool m_cdnStreamPlayTypeHasBeenSet;

                    /**
                     * <p>原站配置类型：1 直播原站。<br>2 streamPackage。</p>
                     */
                    int64_t m_originStreamType;
                    bool m_originStreamTypeHasBeenSet;

                    /**
                     * <p>原站播放类型。</p>
                     */
                    std::string m_originStreamPlayType;
                    bool m_originStreamPlayTypeHasBeenSet;

                    /**
                     * <p>原站地址类型：1 ip，2 域名。</p>
                     */
                    int64_t m_originAddressType;
                    bool m_originAddressTypeHasBeenSet;

                    /**
                     * <p>原站地址信息，每项用分号分割域名（ip）、端口信息。<br>端口为空也要带上分号，表示取默认端口。</p>
                     */
                    std::vector<std::string> m_originAddress;
                    bool m_originAddressHasBeenSet;

                    /**
                     * <p>超时时间，单位 ms。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_originTimeout;
                    bool m_originTimeoutHasBeenSet;

                    /**
                     * <p>重试次数，单位 次。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_originRetryTimes;
                    bool m_originRetryTimesHasBeenSet;

                    /**
                     * <p>时间戳修正，可取值：on、off。<br>当原站播放协议为 rtmp、flv 时，传递该字段才会生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timeJitter;
                    bool m_timeJitterHasBeenSet;

                    /**
                     * <p>分片数，单位 个。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_hlsPlayFragmentCount;
                    bool m_hlsPlayFragmentCountHasBeenSet;

                    /**
                     * <p>分片时长，单位 ms。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_hlsPlayFragmentDuration;
                    bool m_hlsPlayFragmentDurationHasBeenSet;

                    /**
                     * <p>是否透传 http 头信息，可取值：on、off。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_passThroughHttpHeader;
                    bool m_passThroughHttpHeaderHasBeenSet;

                    /**
                     * <p>是否透传相应，可取值：on、off。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_passThroughResponse;
                    bool m_passThroughResponseHasBeenSet;

                    /**
                     * <p>是否透传参数，可取值：on、off。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_passThroughParam;
                    bool m_passThroughParamHasBeenSet;

                    /**
                     * <p>原站 host。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_originHost;
                    bool m_originHostHasBeenSet;

                    /**
                     * <p>索引缓存，单位 ms。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_indexerCache;
                    bool m_indexerCacheHasBeenSet;

                    /**
                     * <p>分片缓存，单位 ms。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_fragmentCache;
                    bool m_fragmentCacheHasBeenSet;

                    /**
                     * <p>域名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * <p>https 回源，可取值：on、off。<br>当原站播放协议为flv、hls时，传递此字段才会生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_usingHttps;
                    bool m_usingHttpsHasBeenSet;

                    /**
                     * <p>是否遵循原站，可取值：on、off。<br>当原站播放协议为hls时，此字段才会生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cacheFollowOrigin;
                    bool m_cacheFollowOriginHasBeenSet;

                    /**
                     * <p>状态码缓存，数组元素格式：<br>cacheKey:interval<br>cacheKey 可取值：cache_400_sec、cache_403_sec、cache_404_sec、cache_405_sec、cache_500_sec、cache_503_sec、cache_504_sec。<br>interval 单位 ms。<br>当原站播放协议为hls时，此字段才会生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_cacheStatusCode;
                    bool m_cacheStatusCodeHasBeenSet;

                    /**
                     * <p>url改写， 格式为： url1&lt;|&gt;url2; 其中，&lt;|&gt; 为分隔符。<br>url1、url2 长度限制100，不可包含特殊字符。<br>当原站播放协议为hls时，此字段才会生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_urlReplaceRules;
                    bool m_urlReplaceRulesHasBeenSet;

                    /**
                     * <p>是否 options 支持，可取值：on、off。<br>当原站播放协议为hls时，此字段才会生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_optionsRequest;
                    bool m_optionsRequestHasBeenSet;

                    /**
                     * <p>是否 follow 301/302，可取值：on、off。<br>当原站播放协议为hls时，此字段才会生效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_followRedirect;
                    bool m_followRedirectHasBeenSet;

                    /**
                     * <p>源站类型 OriginStreamType 为 2 时，该字段有效。 代表源站地址 OriginAddress 对应的地区 region。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_streamPackageRegion;
                    bool m_streamPackageRegionHasBeenSet;

                    /**
                     * <p>客户名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_customerName;
                    bool m_customerNameHasBeenSet;

                    /**
                     * <p>当 OriginStreamPlayType 为 hls 时生效，设置索引缓存保留指定参数列表，最多支持 30 组，每个参数小于等于 20 字符。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_indexerKeepParam;
                    bool m_indexerKeepParamHasBeenSet;

                    /**
                     * <p>当 OriginStreamPlayType 为 hls 时生效，设置分片缓存保留指定参数列表，最多支持 30 组，每个参数小于等于 20 字符。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_fragmentKeepParam;
                    bool m_fragmentKeepParamHasBeenSet;

                    /**
                     * <p>当 OriginStreamType = 2 时有效，表示 mediapackage 具体类型：<br>media_package =&gt; 仅配置普通频道。<br>media_package_pure_ad =&gt; 仅配置广告。<br>media_package_mix_ad =&gt; 同时配置普通频道和广告。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mediaPackageType;
                    bool m_mediaPackageTypeHasBeenSet;

                    /**
                     * <p>当 OriginStreamType = 2 且 MediaPackageType = media_package 时有效，表示 mediapackage 频道类型，可组合如下值：normal（频道）、ssai（广告）、linear_assembly（线性组装）。</p>
                     */
                    std::vector<std::string> m_mediaPackageChannelTypes;
                    bool m_mediaPackageChannelTypesHasBeenSet;

                    /**
                     * <p>当 OriginStreamPlayType 为 hls 时生效，设置索引自定义 header，每一组参数、取值用空格分开。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_indexerHeader;
                    bool m_indexerHeaderHasBeenSet;

                    /**
                     * <p>当 OriginStreamPlayType 为 hls 时生效，设置分片自定义 header，每一组参数、取值用空格分开。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_fragmentHeader;
                    bool m_fragmentHeaderHasBeenSet;

                    /**
                     * <p>自定义规则列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<OriginStreamCustomizationRule> m_customizationRules;
                    bool m_customizationRulesHasBeenSet;

                    /**
                     * <p>缓存格式规则。<br>0：默认格式。<br>1：云直播源站格式。<br>当 OriginStreamPlayType 为 customization 时候生效。</p>
                     */
                    int64_t m_cacheFormatRule;
                    bool m_cacheFormatRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEORIGINSTREAMINFORESPONSE_H_
