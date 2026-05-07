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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYORIGINSTREAMINFOREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYORIGINSTREAMINFOREQUEST_H_

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
                * ModifyOriginStreamInfo请求参数结构体
                */
                class ModifyOriginStreamInfoRequest : public AbstractModel
                {
                public:
                    ModifyOriginStreamInfoRequest();
                    ~ModifyOriginStreamInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>域名。</p>
                     * @return DomainName <p>域名。</p>
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置<p>域名。</p>
                     * @param _domainName <p>域名。</p>
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取<p>源站播放协议，可取值：rtmp、flv、hls、dash、hls|dash、customization。</p>
                     * @return OriginStreamPlayType <p>源站播放协议，可取值：rtmp、flv、hls、dash、hls|dash、customization。</p>
                     * 
                     */
                    std::string GetOriginStreamPlayType() const;

                    /**
                     * 设置<p>源站播放协议，可取值：rtmp、flv、hls、dash、hls|dash、customization。</p>
                     * @param _originStreamPlayType <p>源站播放协议，可取值：rtmp、flv、hls、dash、hls|dash、customization。</p>
                     * 
                     */
                    void SetOriginStreamPlayType(const std::string& _originStreamPlayType);

                    /**
                     * 判断参数 OriginStreamPlayType 是否已赋值
                     * @return OriginStreamPlayType 是否已赋值
                     * 
                     */
                    bool OriginStreamPlayTypeHasBeenSet() const;

                    /**
                     * 获取<p>播放协议，可取值：rtmp、flv、hls、dash、hls|dash、customization。<br>自定义回源协议填写 customization。</p>
                     * @return CdnStreamPlayType <p>播放协议，可取值：rtmp、flv、hls、dash、hls|dash、customization。<br>自定义回源协议填写 customization。</p>
                     * 
                     */
                    std::vector<std::string> GetCdnStreamPlayType() const;

                    /**
                     * 设置<p>播放协议，可取值：rtmp、flv、hls、dash、hls|dash、customization。<br>自定义回源协议填写 customization。</p>
                     * @param _cdnStreamPlayType <p>播放协议，可取值：rtmp、flv、hls、dash、hls|dash、customization。<br>自定义回源协议填写 customization。</p>
                     * 
                     */
                    void SetCdnStreamPlayType(const std::vector<std::string>& _cdnStreamPlayType);

                    /**
                     * 判断参数 CdnStreamPlayType 是否已赋值
                     * @return CdnStreamPlayType 是否已赋值
                     * 
                     */
                    bool CdnStreamPlayTypeHasBeenSet() const;

                    /**
                     * 获取<p>原站类型：<br>1 =&gt; 直播原站。<br>2 =&gt; mediaPackage。</p>
                     * @return OriginStreamType <p>原站类型：<br>1 =&gt; 直播原站。<br>2 =&gt; mediaPackage。</p>
                     * 
                     */
                    int64_t GetOriginStreamType() const;

                    /**
                     * 设置<p>原站类型：<br>1 =&gt; 直播原站。<br>2 =&gt; mediaPackage。</p>
                     * @param _originStreamType <p>原站类型：<br>1 =&gt; 直播原站。<br>2 =&gt; mediaPackage。</p>
                     * 
                     */
                    void SetOriginStreamType(const int64_t& _originStreamType);

                    /**
                     * 判断参数 OriginStreamType 是否已赋值
                     * @return OriginStreamType 是否已赋值
                     * 
                     */
                    bool OriginStreamTypeHasBeenSet() const;

                    /**
                     * 获取<p>原站地址信息，每项用冒号分割域名（ip）、端口信息。<br>端口为空也要带上分号，表示取默认端口。<br>自定义回源协议填写 customization。</p>
                     * @return OriginAddress <p>原站地址信息，每项用冒号分割域名（ip）、端口信息。<br>端口为空也要带上分号，表示取默认端口。<br>自定义回源协议填写 customization。</p>
                     * 
                     */
                    std::vector<std::string> GetOriginAddress() const;

                    /**
                     * 设置<p>原站地址信息，每项用冒号分割域名（ip）、端口信息。<br>端口为空也要带上分号，表示取默认端口。<br>自定义回源协议填写 customization。</p>
                     * @param _originAddress <p>原站地址信息，每项用冒号分割域名（ip）、端口信息。<br>端口为空也要带上分号，表示取默认端口。<br>自定义回源协议填写 customization。</p>
                     * 
                     */
                    void SetOriginAddress(const std::vector<std::string>& _originAddress);

                    /**
                     * 判断参数 OriginAddress 是否已赋值
                     * @return OriginAddress 是否已赋值
                     * 
                     */
                    bool OriginAddressHasBeenSet() const;

                    /**
                     * 获取<p>原站地址类型：<br>1 =&gt; IP 类型。<br>2 =&gt; 域名类型。</p>
                     * @return OriginAddressType <p>原站地址类型：<br>1 =&gt; IP 类型。<br>2 =&gt; 域名类型。</p>
                     * 
                     */
                    int64_t GetOriginAddressType() const;

                    /**
                     * 设置<p>原站地址类型：<br>1 =&gt; IP 类型。<br>2 =&gt; 域名类型。</p>
                     * @param _originAddressType <p>原站地址类型：<br>1 =&gt; IP 类型。<br>2 =&gt; 域名类型。</p>
                     * 
                     */
                    void SetOriginAddressType(const int64_t& _originAddressType);

                    /**
                     * 判断参数 OriginAddressType 是否已赋值
                     * @return OriginAddressType 是否已赋值
                     * 
                     */
                    bool OriginAddressTypeHasBeenSet() const;

                    /**
                     * 获取<p>自定义名称</p>
                     * @return CustomerName <p>自定义名称</p>
                     * 
                     */
                    std::string GetCustomerName() const;

                    /**
                     * 设置<p>自定义名称</p>
                     * @param _customerName <p>自定义名称</p>
                     * 
                     */
                    void SetCustomerName(const std::string& _customerName);

                    /**
                     * 判断参数 CustomerName 是否已赋值
                     * @return CustomerName 是否已赋值
                     * 
                     */
                    bool CustomerNameHasBeenSet() const;

                    /**
                     * 获取<p>原站 host。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
                     * @return OriginHost <p>原站 host。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
                     * 
                     */
                    std::string GetOriginHost() const;

                    /**
                     * 设置<p>原站 host。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
                     * @param _originHost <p>原站 host。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
                     * 
                     */
                    void SetOriginHost(const std::string& _originHost);

                    /**
                     * 判断参数 OriginHost 是否已赋值
                     * @return OriginHost 是否已赋值
                     * 
                     */
                    bool OriginHostHasBeenSet() const;

                    /**
                     * 获取<p>超时时间，单位 ms，取值范围：1 ～ 60000，默认值：10000。</p>
                     * @return OriginTimeout <p>超时时间，单位 ms，取值范围：1 ～ 60000，默认值：10000。</p>
                     * 
                     */
                    int64_t GetOriginTimeout() const;

                    /**
                     * 设置<p>超时时间，单位 ms，取值范围：1 ～ 60000，默认值：10000。</p>
                     * @param _originTimeout <p>超时时间，单位 ms，取值范围：1 ～ 60000，默认值：10000。</p>
                     * 
                     */
                    void SetOriginTimeout(const int64_t& _originTimeout);

                    /**
                     * 判断参数 OriginTimeout 是否已赋值
                     * @return OriginTimeout 是否已赋值
                     * 
                     */
                    bool OriginTimeoutHasBeenSet() const;

                    /**
                     * 获取<p>重试次数，单位 次，取值范围：1 ～ 10，默认值：10。</p>
                     * @return OriginRetryTimes <p>重试次数，单位 次，取值范围：1 ～ 10，默认值：10。</p>
                     * 
                     */
                    int64_t GetOriginRetryTimes() const;

                    /**
                     * 设置<p>重试次数，单位 次，取值范围：1 ～ 10，默认值：10。</p>
                     * @param _originRetryTimes <p>重试次数，单位 次，取值范围：1 ～ 10，默认值：10。</p>
                     * 
                     */
                    void SetOriginRetryTimes(const int64_t& _originRetryTimes);

                    /**
                     * 判断参数 OriginRetryTimes 是否已赋值
                     * @return OriginRetryTimes 是否已赋值
                     * 
                     */
                    bool OriginRetryTimesHasBeenSet() const;

                    /**
                     * 获取<p>是否透传 http 头信息，可取值：on、off。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
                     * @return PassThroughHttpHeader <p>是否透传 http 头信息，可取值：on、off。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
                     * 
                     */
                    std::string GetPassThroughHttpHeader() const;

                    /**
                     * 设置<p>是否透传 http 头信息，可取值：on、off。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
                     * @param _passThroughHttpHeader <p>是否透传 http 头信息，可取值：on、off。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
                     * 
                     */
                    void SetPassThroughHttpHeader(const std::string& _passThroughHttpHeader);

                    /**
                     * 判断参数 PassThroughHttpHeader 是否已赋值
                     * @return PassThroughHttpHeader 是否已赋值
                     * 
                     */
                    bool PassThroughHttpHeaderHasBeenSet() const;

                    /**
                     * 获取<p>是否透传相应，可取值：on、off。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
                     * @return PassThroughResponse <p>是否透传相应，可取值：on、off。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
                     * 
                     */
                    std::string GetPassThroughResponse() const;

                    /**
                     * 设置<p>是否透传相应，可取值：on、off。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
                     * @param _passThroughResponse <p>是否透传相应，可取值：on、off。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
                     * 
                     */
                    void SetPassThroughResponse(const std::string& _passThroughResponse);

                    /**
                     * 判断参数 PassThroughResponse 是否已赋值
                     * @return PassThroughResponse 是否已赋值
                     * 
                     */
                    bool PassThroughResponseHasBeenSet() const;

                    /**
                     * 获取<p>是否透传参数，可取值：on、off。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
                     * @return PassThroughParam <p>是否透传参数，可取值：on、off。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
                     * 
                     */
                    std::string GetPassThroughParam() const;

                    /**
                     * 设置<p>是否透传参数，可取值：on、off。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
                     * @param _passThroughParam <p>是否透传参数，可取值：on、off。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
                     * 
                     */
                    void SetPassThroughParam(const std::string& _passThroughParam);

                    /**
                     * 判断参数 PassThroughParam 是否已赋值
                     * @return PassThroughParam 是否已赋值
                     * 
                     */
                    bool PassThroughParamHasBeenSet() const;

                    /**
                     * 获取<p>索引缓存，单位 ms，取值范围：1 ～ 60000，默认值：10000。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
                     * @return IndexerCache <p>索引缓存，单位 ms，取值范围：1 ～ 60000，默认值：10000。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
                     * 
                     */
                    int64_t GetIndexerCache() const;

                    /**
                     * 设置<p>索引缓存，单位 ms，取值范围：1 ～ 60000，默认值：10000。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
                     * @param _indexerCache <p>索引缓存，单位 ms，取值范围：1 ～ 60000，默认值：10000。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
                     * 
                     */
                    void SetIndexerCache(const int64_t& _indexerCache);

                    /**
                     * 判断参数 IndexerCache 是否已赋值
                     * @return IndexerCache 是否已赋值
                     * 
                     */
                    bool IndexerCacheHasBeenSet() const;

                    /**
                     * 获取<p>分片缓存，单位 ms，取值范围：1 ～ 60000，默认值：10000。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
                     * @return FragmentCache <p>分片缓存，单位 ms，取值范围：1 ～ 60000，默认值：10000。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
                     * 
                     */
                    int64_t GetFragmentCache() const;

                    /**
                     * 设置<p>分片缓存，单位 ms，取值范围：1 ～ 60000，默认值：10000。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
                     * @param _fragmentCache <p>分片缓存，单位 ms，取值范围：1 ～ 60000，默认值：10000。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
                     * 
                     */
                    void SetFragmentCache(const int64_t& _fragmentCache);

                    /**
                     * 判断参数 FragmentCache 是否已赋值
                     * @return FragmentCache 是否已赋值
                     * 
                     */
                    bool FragmentCacheHasBeenSet() const;

                    /**
                     * 获取<p>分片数，单位 个，取值范围：1 ～ 10，默认值：3。</p>
                     * @return HlsPlayFragmentCount <p>分片数，单位 个，取值范围：1 ～ 10，默认值：3。</p>
                     * 
                     */
                    int64_t GetHlsPlayFragmentCount() const;

                    /**
                     * 设置<p>分片数，单位 个，取值范围：1 ～ 10，默认值：3。</p>
                     * @param _hlsPlayFragmentCount <p>分片数，单位 个，取值范围：1 ～ 10，默认值：3。</p>
                     * 
                     */
                    void SetHlsPlayFragmentCount(const int64_t& _hlsPlayFragmentCount);

                    /**
                     * 判断参数 HlsPlayFragmentCount 是否已赋值
                     * @return HlsPlayFragmentCount 是否已赋值
                     * 
                     */
                    bool HlsPlayFragmentCountHasBeenSet() const;

                    /**
                     * 获取<p>分片时长，单位 ms，取值范围：1 ～ 10000，默认值：3000。</p>
                     * @return HlsPlayFragmentDuration <p>分片时长，单位 ms，取值范围：1 ～ 10000，默认值：3000。</p>
                     * 
                     */
                    int64_t GetHlsPlayFragmentDuration() const;

                    /**
                     * 设置<p>分片时长，单位 ms，取值范围：1 ～ 10000，默认值：3000。</p>
                     * @param _hlsPlayFragmentDuration <p>分片时长，单位 ms，取值范围：1 ～ 10000，默认值：3000。</p>
                     * 
                     */
                    void SetHlsPlayFragmentDuration(const int64_t& _hlsPlayFragmentDuration);

                    /**
                     * 判断参数 HlsPlayFragmentDuration 是否已赋值
                     * @return HlsPlayFragmentDuration 是否已赋值
                     * 
                     */
                    bool HlsPlayFragmentDurationHasBeenSet() const;

                    /**
                     * 获取<p>时间戳修正，可取值：on、off，默认值：off。<br>当原站播放协议为 rtmp、flv 时，传递该字段才会生效。</p>
                     * @return TimeJitter <p>时间戳修正，可取值：on、off，默认值：off。<br>当原站播放协议为 rtmp、flv 时，传递该字段才会生效。</p>
                     * 
                     */
                    std::string GetTimeJitter() const;

                    /**
                     * 设置<p>时间戳修正，可取值：on、off，默认值：off。<br>当原站播放协议为 rtmp、flv 时，传递该字段才会生效。</p>
                     * @param _timeJitter <p>时间戳修正，可取值：on、off，默认值：off。<br>当原站播放协议为 rtmp、flv 时，传递该字段才会生效。</p>
                     * 
                     */
                    void SetTimeJitter(const std::string& _timeJitter);

                    /**
                     * 判断参数 TimeJitter 是否已赋值
                     * @return TimeJitter 是否已赋值
                     * 
                     */
                    bool TimeJitterHasBeenSet() const;

                    /**
                     * 获取<p>https 回源，可取值：on、off，默认值：off。<br>当原站播放协议为flv、hls时，传递此字段才会生效。</p>
                     * @return UsingHttps <p>https 回源，可取值：on、off，默认值：off。<br>当原站播放协议为flv、hls时，传递此字段才会生效。</p>
                     * 
                     */
                    std::string GetUsingHttps() const;

                    /**
                     * 设置<p>https 回源，可取值：on、off，默认值：off。<br>当原站播放协议为flv、hls时，传递此字段才会生效。</p>
                     * @param _usingHttps <p>https 回源，可取值：on、off，默认值：off。<br>当原站播放协议为flv、hls时，传递此字段才会生效。</p>
                     * 
                     */
                    void SetUsingHttps(const std::string& _usingHttps);

                    /**
                     * 判断参数 UsingHttps 是否已赋值
                     * @return UsingHttps 是否已赋值
                     * 
                     */
                    bool UsingHttpsHasBeenSet() const;

                    /**
                     * 获取<p>遵循原站，可取值：on、off，默认值：off。<br>当原站播放协议为hls时，传递此字段才会生效。</p>
                     * @return CacheFollowOrigin <p>遵循原站，可取值：on、off，默认值：off。<br>当原站播放协议为hls时，传递此字段才会生效。</p>
                     * 
                     */
                    std::string GetCacheFollowOrigin() const;

                    /**
                     * 设置<p>遵循原站，可取值：on、off，默认值：off。<br>当原站播放协议为hls时，传递此字段才会生效。</p>
                     * @param _cacheFollowOrigin <p>遵循原站，可取值：on、off，默认值：off。<br>当原站播放协议为hls时，传递此字段才会生效。</p>
                     * 
                     */
                    void SetCacheFollowOrigin(const std::string& _cacheFollowOrigin);

                    /**
                     * 判断参数 CacheFollowOrigin 是否已赋值
                     * @return CacheFollowOrigin 是否已赋值
                     * 
                     */
                    bool CacheFollowOriginHasBeenSet() const;

                    /**
                     * 获取<p>状态码缓存，数组元素格式：<br>cacheKey:interval<br>cacheKey 可取值：cache_400_sec、cache_403_sec、cache_404_sec、cache_405_sec、cache_500_sec、cache_503_sec、cache_504_sec。<br>interval 单位 ms。<br>当原站播放协议为hls时，传递此字段才会生效。</p>
                     * @return CacheStatusCode <p>状态码缓存，数组元素格式：<br>cacheKey:interval<br>cacheKey 可取值：cache_400_sec、cache_403_sec、cache_404_sec、cache_405_sec、cache_500_sec、cache_503_sec、cache_504_sec。<br>interval 单位 ms。<br>当原站播放协议为hls时，传递此字段才会生效。</p>
                     * 
                     */
                    std::vector<std::string> GetCacheStatusCode() const;

                    /**
                     * 设置<p>状态码缓存，数组元素格式：<br>cacheKey:interval<br>cacheKey 可取值：cache_400_sec、cache_403_sec、cache_404_sec、cache_405_sec、cache_500_sec、cache_503_sec、cache_504_sec。<br>interval 单位 ms。<br>当原站播放协议为hls时，传递此字段才会生效。</p>
                     * @param _cacheStatusCode <p>状态码缓存，数组元素格式：<br>cacheKey:interval<br>cacheKey 可取值：cache_400_sec、cache_403_sec、cache_404_sec、cache_405_sec、cache_500_sec、cache_503_sec、cache_504_sec。<br>interval 单位 ms。<br>当原站播放协议为hls时，传递此字段才会生效。</p>
                     * 
                     */
                    void SetCacheStatusCode(const std::vector<std::string>& _cacheStatusCode);

                    /**
                     * 判断参数 CacheStatusCode 是否已赋值
                     * @return CacheStatusCode 是否已赋值
                     * 
                     */
                    bool CacheStatusCodeHasBeenSet() const;

                    /**
                     * 获取<p>url改写， 格式为： url1&lt;|&gt;url2; 其中，&lt;|&gt; 为分隔符。<br>url1、url2 长度限制100，不可包含特殊字符。<br>当原站播放协议为hls时，传递此字段才会生效。</p>
                     * @return UrlReplaceRules <p>url改写， 格式为： url1&lt;|&gt;url2; 其中，&lt;|&gt; 为分隔符。<br>url1、url2 长度限制100，不可包含特殊字符。<br>当原站播放协议为hls时，传递此字段才会生效。</p>
                     * 
                     */
                    std::vector<std::string> GetUrlReplaceRules() const;

                    /**
                     * 设置<p>url改写， 格式为： url1&lt;|&gt;url2; 其中，&lt;|&gt; 为分隔符。<br>url1、url2 长度限制100，不可包含特殊字符。<br>当原站播放协议为hls时，传递此字段才会生效。</p>
                     * @param _urlReplaceRules <p>url改写， 格式为： url1&lt;|&gt;url2; 其中，&lt;|&gt; 为分隔符。<br>url1、url2 长度限制100，不可包含特殊字符。<br>当原站播放协议为hls时，传递此字段才会生效。</p>
                     * 
                     */
                    void SetUrlReplaceRules(const std::vector<std::string>& _urlReplaceRules);

                    /**
                     * 判断参数 UrlReplaceRules 是否已赋值
                     * @return UrlReplaceRules 是否已赋值
                     * 
                     */
                    bool UrlReplaceRulesHasBeenSet() const;

                    /**
                     * 获取<p>options 支持，可取值：on、off，默认值：off。<br>当原站播放协议为hls时，传递此字段才会生效。</p>
                     * @return OptionsRequest <p>options 支持，可取值：on、off，默认值：off。<br>当原站播放协议为hls时，传递此字段才会生效。</p>
                     * 
                     */
                    std::string GetOptionsRequest() const;

                    /**
                     * 设置<p>options 支持，可取值：on、off，默认值：off。<br>当原站播放协议为hls时，传递此字段才会生效。</p>
                     * @param _optionsRequest <p>options 支持，可取值：on、off，默认值：off。<br>当原站播放协议为hls时，传递此字段才会生效。</p>
                     * 
                     */
                    void SetOptionsRequest(const std::string& _optionsRequest);

                    /**
                     * 判断参数 OptionsRequest 是否已赋值
                     * @return OptionsRequest 是否已赋值
                     * 
                     */
                    bool OptionsRequestHasBeenSet() const;

                    /**
                     * 获取<p>follow 301/302，可取值：on、off，默认值：off。<br>当原站播放协议为hls时，传递此字段才会生效。</p>
                     * @return FollowRedirect <p>follow 301/302，可取值：on、off，默认值：off。<br>当原站播放协议为hls时，传递此字段才会生效。</p>
                     * 
                     */
                    std::string GetFollowRedirect() const;

                    /**
                     * 设置<p>follow 301/302，可取值：on、off，默认值：off。<br>当原站播放协议为hls时，传递此字段才会生效。</p>
                     * @param _followRedirect <p>follow 301/302，可取值：on、off，默认值：off。<br>当原站播放协议为hls时，传递此字段才会生效。</p>
                     * 
                     */
                    void SetFollowRedirect(const std::string& _followRedirect);

                    /**
                     * 判断参数 FollowRedirect 是否已赋值
                     * @return FollowRedirect 是否已赋值
                     * 
                     */
                    bool FollowRedirectHasBeenSet() const;

                    /**
                     * 获取<p>当 OriginStreamPlayType 为 hls 时生效，设置索引缓存保留指定参数列表，最多支持 30 组，每个参数小于等于 20 字符。</p>
                     * @return IndexerKeepParam <p>当 OriginStreamPlayType 为 hls 时生效，设置索引缓存保留指定参数列表，最多支持 30 组，每个参数小于等于 20 字符。</p>
                     * 
                     */
                    std::vector<std::string> GetIndexerKeepParam() const;

                    /**
                     * 设置<p>当 OriginStreamPlayType 为 hls 时生效，设置索引缓存保留指定参数列表，最多支持 30 组，每个参数小于等于 20 字符。</p>
                     * @param _indexerKeepParam <p>当 OriginStreamPlayType 为 hls 时生效，设置索引缓存保留指定参数列表，最多支持 30 组，每个参数小于等于 20 字符。</p>
                     * 
                     */
                    void SetIndexerKeepParam(const std::vector<std::string>& _indexerKeepParam);

                    /**
                     * 判断参数 IndexerKeepParam 是否已赋值
                     * @return IndexerKeepParam 是否已赋值
                     * 
                     */
                    bool IndexerKeepParamHasBeenSet() const;

                    /**
                     * 获取<p>当 OriginStreamPlayType 为 hls 时生效，设置分片缓存保留指定参数列表，最多支持 30 组，每个参数小于等于 20 字符。</p>
                     * @return FragmentKeepParam <p>当 OriginStreamPlayType 为 hls 时生效，设置分片缓存保留指定参数列表，最多支持 30 组，每个参数小于等于 20 字符。</p>
                     * 
                     */
                    std::vector<std::string> GetFragmentKeepParam() const;

                    /**
                     * 设置<p>当 OriginStreamPlayType 为 hls 时生效，设置分片缓存保留指定参数列表，最多支持 30 组，每个参数小于等于 20 字符。</p>
                     * @param _fragmentKeepParam <p>当 OriginStreamPlayType 为 hls 时生效，设置分片缓存保留指定参数列表，最多支持 30 组，每个参数小于等于 20 字符。</p>
                     * 
                     */
                    void SetFragmentKeepParam(const std::vector<std::string>& _fragmentKeepParam);

                    /**
                     * 判断参数 FragmentKeepParam 是否已赋值
                     * @return FragmentKeepParam 是否已赋值
                     * 
                     */
                    bool FragmentKeepParamHasBeenSet() const;

                    /**
                     * 获取<p>当 OriginStreamType = 2 时有效，表示 mediapackage 具体类型：<br>media_package =&gt; 仅配置普通频道。<br>media_package_pure_ad =&gt; 仅配置广告。<br>media_package_mix_ad =&gt; 同时配置普通频道和广告。<br>注意：配置时候，优先使用 media_package。和 MediaPackageChannelTypes 字段配合使用。</p>
                     * @return MediaPackageType <p>当 OriginStreamType = 2 时有效，表示 mediapackage 具体类型：<br>media_package =&gt; 仅配置普通频道。<br>media_package_pure_ad =&gt; 仅配置广告。<br>media_package_mix_ad =&gt; 同时配置普通频道和广告。<br>注意：配置时候，优先使用 media_package。和 MediaPackageChannelTypes 字段配合使用。</p>
                     * 
                     */
                    std::string GetMediaPackageType() const;

                    /**
                     * 设置<p>当 OriginStreamType = 2 时有效，表示 mediapackage 具体类型：<br>media_package =&gt; 仅配置普通频道。<br>media_package_pure_ad =&gt; 仅配置广告。<br>media_package_mix_ad =&gt; 同时配置普通频道和广告。<br>注意：配置时候，优先使用 media_package。和 MediaPackageChannelTypes 字段配合使用。</p>
                     * @param _mediaPackageType <p>当 OriginStreamType = 2 时有效，表示 mediapackage 具体类型：<br>media_package =&gt; 仅配置普通频道。<br>media_package_pure_ad =&gt; 仅配置广告。<br>media_package_mix_ad =&gt; 同时配置普通频道和广告。<br>注意：配置时候，优先使用 media_package。和 MediaPackageChannelTypes 字段配合使用。</p>
                     * 
                     */
                    void SetMediaPackageType(const std::string& _mediaPackageType);

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
                     * 设置<p>当 OriginStreamType = 2 且 MediaPackageType = media_package 时有效，表示 mediapackage 频道类型，可组合如下值：normal（频道）、ssai（广告）、linear_assembly（线性组装）。</p>
                     * @param _mediaPackageChannelTypes <p>当 OriginStreamType = 2 且 MediaPackageType = media_package 时有效，表示 mediapackage 频道类型，可组合如下值：normal（频道）、ssai（广告）、linear_assembly（线性组装）。</p>
                     * 
                     */
                    void SetMediaPackageChannelTypes(const std::vector<std::string>& _mediaPackageChannelTypes);

                    /**
                     * 判断参数 MediaPackageChannelTypes 是否已赋值
                     * @return MediaPackageChannelTypes 是否已赋值
                     * 
                     */
                    bool MediaPackageChannelTypesHasBeenSet() const;

                    /**
                     * 获取<p>当 OriginStreamPlayType 为 hls 时生效，设置索引自定义 header，最大支持 10 组，每一组参数、取值用空格分开，允许字符规则如下：<br>头部参数：由大小写字母、数字及-组成，长度支持1 ～100个字符，黑名单：Host、Connection、Content-Length、Range。<br>头部取值：不支持中文、不支持以$开头，长度支持1 ～ 100个字符，不允许有空格。</p>
                     * @return IndexerHeader <p>当 OriginStreamPlayType 为 hls 时生效，设置索引自定义 header，最大支持 10 组，每一组参数、取值用空格分开，允许字符规则如下：<br>头部参数：由大小写字母、数字及-组成，长度支持1 ～100个字符，黑名单：Host、Connection、Content-Length、Range。<br>头部取值：不支持中文、不支持以$开头，长度支持1 ～ 100个字符，不允许有空格。</p>
                     * 
                     */
                    std::vector<std::string> GetIndexerHeader() const;

                    /**
                     * 设置<p>当 OriginStreamPlayType 为 hls 时生效，设置索引自定义 header，最大支持 10 组，每一组参数、取值用空格分开，允许字符规则如下：<br>头部参数：由大小写字母、数字及-组成，长度支持1 ～100个字符，黑名单：Host、Connection、Content-Length、Range。<br>头部取值：不支持中文、不支持以$开头，长度支持1 ～ 100个字符，不允许有空格。</p>
                     * @param _indexerHeader <p>当 OriginStreamPlayType 为 hls 时生效，设置索引自定义 header，最大支持 10 组，每一组参数、取值用空格分开，允许字符规则如下：<br>头部参数：由大小写字母、数字及-组成，长度支持1 ～100个字符，黑名单：Host、Connection、Content-Length、Range。<br>头部取值：不支持中文、不支持以$开头，长度支持1 ～ 100个字符，不允许有空格。</p>
                     * 
                     */
                    void SetIndexerHeader(const std::vector<std::string>& _indexerHeader);

                    /**
                     * 判断参数 IndexerHeader 是否已赋值
                     * @return IndexerHeader 是否已赋值
                     * 
                     */
                    bool IndexerHeaderHasBeenSet() const;

                    /**
                     * 获取<p>当 OriginStreamPlayType 为 hls 时生效，设置分片自定义 header，最大支持 10 组，每一组参数、取值用空格分开，允许字符规则如下：<br>头部参数：由大小写字母、数字及-组成，长度支持1 ～100个字符，黑名单：Host、Connection、Content-Length、Range。<br>头部取值：不支持中文、不支持以$开头，长度支持1 ～ 100个字符，不允许有空格。</p>
                     * @return FragmentHeader <p>当 OriginStreamPlayType 为 hls 时生效，设置分片自定义 header，最大支持 10 组，每一组参数、取值用空格分开，允许字符规则如下：<br>头部参数：由大小写字母、数字及-组成，长度支持1 ～100个字符，黑名单：Host、Connection、Content-Length、Range。<br>头部取值：不支持中文、不支持以$开头，长度支持1 ～ 100个字符，不允许有空格。</p>
                     * 
                     */
                    std::vector<std::string> GetFragmentHeader() const;

                    /**
                     * 设置<p>当 OriginStreamPlayType 为 hls 时生效，设置分片自定义 header，最大支持 10 组，每一组参数、取值用空格分开，允许字符规则如下：<br>头部参数：由大小写字母、数字及-组成，长度支持1 ～100个字符，黑名单：Host、Connection、Content-Length、Range。<br>头部取值：不支持中文、不支持以$开头，长度支持1 ～ 100个字符，不允许有空格。</p>
                     * @param _fragmentHeader <p>当 OriginStreamPlayType 为 hls 时生效，设置分片自定义 header，最大支持 10 组，每一组参数、取值用空格分开，允许字符规则如下：<br>头部参数：由大小写字母、数字及-组成，长度支持1 ～100个字符，黑名单：Host、Connection、Content-Length、Range。<br>头部取值：不支持中文、不支持以$开头，长度支持1 ～ 100个字符，不允许有空格。</p>
                     * 
                     */
                    void SetFragmentHeader(const std::vector<std::string>& _fragmentHeader);

                    /**
                     * 判断参数 FragmentHeader 是否已赋值
                     * @return FragmentHeader 是否已赋值
                     * 
                     */
                    bool FragmentHeaderHasBeenSet() const;

                    /**
                     * 获取<p>自定义回源规则列表，当 OriginStreamPlayType 为 customization 时候生效。</p>
                     * @return CustomizationRules <p>自定义回源规则列表，当 OriginStreamPlayType 为 customization 时候生效。</p>
                     * 
                     */
                    std::vector<OriginStreamCustomizationRule> GetCustomizationRules() const;

                    /**
                     * 设置<p>自定义回源规则列表，当 OriginStreamPlayType 为 customization 时候生效。</p>
                     * @param _customizationRules <p>自定义回源规则列表，当 OriginStreamPlayType 为 customization 时候生效。</p>
                     * 
                     */
                    void SetCustomizationRules(const std::vector<OriginStreamCustomizationRule>& _customizationRules);

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
                     * 设置<p>缓存格式规则。<br>0：默认格式。<br>1：云直播源站格式。<br>当 OriginStreamPlayType 为 customization 时候生效。</p>
                     * @param _cacheFormatRule <p>缓存格式规则。<br>0：默认格式。<br>1：云直播源站格式。<br>当 OriginStreamPlayType 为 customization 时候生效。</p>
                     * 
                     */
                    void SetCacheFormatRule(const int64_t& _cacheFormatRule);

                    /**
                     * 判断参数 CacheFormatRule 是否已赋值
                     * @return CacheFormatRule 是否已赋值
                     * 
                     */
                    bool CacheFormatRuleHasBeenSet() const;

                private:

                    /**
                     * <p>域名。</p>
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * <p>源站播放协议，可取值：rtmp、flv、hls、dash、hls|dash、customization。</p>
                     */
                    std::string m_originStreamPlayType;
                    bool m_originStreamPlayTypeHasBeenSet;

                    /**
                     * <p>播放协议，可取值：rtmp、flv、hls、dash、hls|dash、customization。<br>自定义回源协议填写 customization。</p>
                     */
                    std::vector<std::string> m_cdnStreamPlayType;
                    bool m_cdnStreamPlayTypeHasBeenSet;

                    /**
                     * <p>原站类型：<br>1 =&gt; 直播原站。<br>2 =&gt; mediaPackage。</p>
                     */
                    int64_t m_originStreamType;
                    bool m_originStreamTypeHasBeenSet;

                    /**
                     * <p>原站地址信息，每项用冒号分割域名（ip）、端口信息。<br>端口为空也要带上分号，表示取默认端口。<br>自定义回源协议填写 customization。</p>
                     */
                    std::vector<std::string> m_originAddress;
                    bool m_originAddressHasBeenSet;

                    /**
                     * <p>原站地址类型：<br>1 =&gt; IP 类型。<br>2 =&gt; 域名类型。</p>
                     */
                    int64_t m_originAddressType;
                    bool m_originAddressTypeHasBeenSet;

                    /**
                     * <p>自定义名称</p>
                     */
                    std::string m_customerName;
                    bool m_customerNameHasBeenSet;

                    /**
                     * <p>原站 host。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
                     */
                    std::string m_originHost;
                    bool m_originHostHasBeenSet;

                    /**
                     * <p>超时时间，单位 ms，取值范围：1 ～ 60000，默认值：10000。</p>
                     */
                    int64_t m_originTimeout;
                    bool m_originTimeoutHasBeenSet;

                    /**
                     * <p>重试次数，单位 次，取值范围：1 ～ 10，默认值：10。</p>
                     */
                    int64_t m_originRetryTimes;
                    bool m_originRetryTimesHasBeenSet;

                    /**
                     * <p>是否透传 http 头信息，可取值：on、off。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
                     */
                    std::string m_passThroughHttpHeader;
                    bool m_passThroughHttpHeaderHasBeenSet;

                    /**
                     * <p>是否透传相应，可取值：on、off。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
                     */
                    std::string m_passThroughResponse;
                    bool m_passThroughResponseHasBeenSet;

                    /**
                     * <p>是否透传参数，可取值：on、off。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
                     */
                    std::string m_passThroughParam;
                    bool m_passThroughParamHasBeenSet;

                    /**
                     * <p>索引缓存，单位 ms，取值范围：1 ～ 60000，默认值：10000。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
                     */
                    int64_t m_indexerCache;
                    bool m_indexerCacheHasBeenSet;

                    /**
                     * <p>分片缓存，单位 ms，取值范围：1 ～ 60000，默认值：10000。<br>当原站播放协议为 hls 时，传递该字段才会生效。</p>
                     */
                    int64_t m_fragmentCache;
                    bool m_fragmentCacheHasBeenSet;

                    /**
                     * <p>分片数，单位 个，取值范围：1 ～ 10，默认值：3。</p>
                     */
                    int64_t m_hlsPlayFragmentCount;
                    bool m_hlsPlayFragmentCountHasBeenSet;

                    /**
                     * <p>分片时长，单位 ms，取值范围：1 ～ 10000，默认值：3000。</p>
                     */
                    int64_t m_hlsPlayFragmentDuration;
                    bool m_hlsPlayFragmentDurationHasBeenSet;

                    /**
                     * <p>时间戳修正，可取值：on、off，默认值：off。<br>当原站播放协议为 rtmp、flv 时，传递该字段才会生效。</p>
                     */
                    std::string m_timeJitter;
                    bool m_timeJitterHasBeenSet;

                    /**
                     * <p>https 回源，可取值：on、off，默认值：off。<br>当原站播放协议为flv、hls时，传递此字段才会生效。</p>
                     */
                    std::string m_usingHttps;
                    bool m_usingHttpsHasBeenSet;

                    /**
                     * <p>遵循原站，可取值：on、off，默认值：off。<br>当原站播放协议为hls时，传递此字段才会生效。</p>
                     */
                    std::string m_cacheFollowOrigin;
                    bool m_cacheFollowOriginHasBeenSet;

                    /**
                     * <p>状态码缓存，数组元素格式：<br>cacheKey:interval<br>cacheKey 可取值：cache_400_sec、cache_403_sec、cache_404_sec、cache_405_sec、cache_500_sec、cache_503_sec、cache_504_sec。<br>interval 单位 ms。<br>当原站播放协议为hls时，传递此字段才会生效。</p>
                     */
                    std::vector<std::string> m_cacheStatusCode;
                    bool m_cacheStatusCodeHasBeenSet;

                    /**
                     * <p>url改写， 格式为： url1&lt;|&gt;url2; 其中，&lt;|&gt; 为分隔符。<br>url1、url2 长度限制100，不可包含特殊字符。<br>当原站播放协议为hls时，传递此字段才会生效。</p>
                     */
                    std::vector<std::string> m_urlReplaceRules;
                    bool m_urlReplaceRulesHasBeenSet;

                    /**
                     * <p>options 支持，可取值：on、off，默认值：off。<br>当原站播放协议为hls时，传递此字段才会生效。</p>
                     */
                    std::string m_optionsRequest;
                    bool m_optionsRequestHasBeenSet;

                    /**
                     * <p>follow 301/302，可取值：on、off，默认值：off。<br>当原站播放协议为hls时，传递此字段才会生效。</p>
                     */
                    std::string m_followRedirect;
                    bool m_followRedirectHasBeenSet;

                    /**
                     * <p>当 OriginStreamPlayType 为 hls 时生效，设置索引缓存保留指定参数列表，最多支持 30 组，每个参数小于等于 20 字符。</p>
                     */
                    std::vector<std::string> m_indexerKeepParam;
                    bool m_indexerKeepParamHasBeenSet;

                    /**
                     * <p>当 OriginStreamPlayType 为 hls 时生效，设置分片缓存保留指定参数列表，最多支持 30 组，每个参数小于等于 20 字符。</p>
                     */
                    std::vector<std::string> m_fragmentKeepParam;
                    bool m_fragmentKeepParamHasBeenSet;

                    /**
                     * <p>当 OriginStreamType = 2 时有效，表示 mediapackage 具体类型：<br>media_package =&gt; 仅配置普通频道。<br>media_package_pure_ad =&gt; 仅配置广告。<br>media_package_mix_ad =&gt; 同时配置普通频道和广告。<br>注意：配置时候，优先使用 media_package。和 MediaPackageChannelTypes 字段配合使用。</p>
                     */
                    std::string m_mediaPackageType;
                    bool m_mediaPackageTypeHasBeenSet;

                    /**
                     * <p>当 OriginStreamType = 2 且 MediaPackageType = media_package 时有效，表示 mediapackage 频道类型，可组合如下值：normal（频道）、ssai（广告）、linear_assembly（线性组装）。</p>
                     */
                    std::vector<std::string> m_mediaPackageChannelTypes;
                    bool m_mediaPackageChannelTypesHasBeenSet;

                    /**
                     * <p>当 OriginStreamPlayType 为 hls 时生效，设置索引自定义 header，最大支持 10 组，每一组参数、取值用空格分开，允许字符规则如下：<br>头部参数：由大小写字母、数字及-组成，长度支持1 ～100个字符，黑名单：Host、Connection、Content-Length、Range。<br>头部取值：不支持中文、不支持以$开头，长度支持1 ～ 100个字符，不允许有空格。</p>
                     */
                    std::vector<std::string> m_indexerHeader;
                    bool m_indexerHeaderHasBeenSet;

                    /**
                     * <p>当 OriginStreamPlayType 为 hls 时生效，设置分片自定义 header，最大支持 10 组，每一组参数、取值用空格分开，允许字符规则如下：<br>头部参数：由大小写字母、数字及-组成，长度支持1 ～100个字符，黑名单：Host、Connection、Content-Length、Range。<br>头部取值：不支持中文、不支持以$开头，长度支持1 ～ 100个字符，不允许有空格。</p>
                     */
                    std::vector<std::string> m_fragmentHeader;
                    bool m_fragmentHeaderHasBeenSet;

                    /**
                     * <p>自定义回源规则列表，当 OriginStreamPlayType 为 customization 时候生效。</p>
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

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYORIGINSTREAMINFOREQUEST_H_
