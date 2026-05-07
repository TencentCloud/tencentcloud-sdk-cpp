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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_ORIGINSTREAMCUSTOMIZATIONRULE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_ORIGINSTREAMCUSTOMIZATIONRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 播放域名回源自定义协议规则。
                */
                class OriginStreamCustomizationRule : public AbstractModel
                {
                public:
                    OriginStreamCustomizationRule();
                    ~OriginStreamCustomizationRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>匹配规则，可选项如下：<br>.m3u8、.mpd、.ts、.mp4、.m4s、.m4a、.m4i、.m4v、.m4f、.aac、.webm。</p>
                     * @return MatchRule <p>匹配规则，可选项如下：<br>.m3u8、.mpd、.ts、.mp4、.m4s、.m4a、.m4i、.m4v、.m4f、.aac、.webm。</p>
                     * 
                     */
                    std::string GetMatchRule() const;

                    /**
                     * 设置<p>匹配规则，可选项如下：<br>.m3u8、.mpd、.ts、.mp4、.m4s、.m4a、.m4i、.m4v、.m4f、.aac、.webm。</p>
                     * @param _matchRule <p>匹配规则，可选项如下：<br>.m3u8、.mpd、.ts、.mp4、.m4s、.m4a、.m4i、.m4v、.m4f、.aac、.webm。</p>
                     * 
                     */
                    void SetMatchRule(const std::string& _matchRule);

                    /**
                     * 判断参数 MatchRule 是否已赋值
                     * @return MatchRule 是否已赋值
                     * 
                     */
                    bool MatchRuleHasBeenSet() const;

                    /**
                     * 获取<p>原站地址类型： 1 =&gt; IP 类型。 2 =&gt; 域名类型。</p>
                     * @return OriginAddressType <p>原站地址类型： 1 =&gt; IP 类型。 2 =&gt; 域名类型。</p>
                     * 
                     */
                    int64_t GetOriginAddressType() const;

                    /**
                     * 设置<p>原站地址类型： 1 =&gt; IP 类型。 2 =&gt; 域名类型。</p>
                     * @param _originAddressType <p>原站地址类型： 1 =&gt; IP 类型。 2 =&gt; 域名类型。</p>
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
                     * 获取<p>原站 host。</p>
                     * @return OriginHost <p>原站 host。</p>
                     * 
                     */
                    std::string GetOriginHost() const;

                    /**
                     * 设置<p>原站 host。</p>
                     * @param _originHost <p>原站 host。</p>
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
                     * 获取<p>原站地址信息，每项用冒号分割域名（ip）、端口信息。 端口为空也要带上分号，表示取默认端口。</p>
                     * @return OriginAddress <p>原站地址信息，每项用冒号分割域名（ip）、端口信息。 端口为空也要带上分号，表示取默认端口。</p>
                     * 
                     */
                    std::vector<std::string> GetOriginAddress() const;

                    /**
                     * 设置<p>原站地址信息，每项用冒号分割域名（ip）、端口信息。 端口为空也要带上分号，表示取默认端口。</p>
                     * @param _originAddress <p>原站地址信息，每项用冒号分割域名（ip）、端口信息。 端口为空也要带上分号，表示取默认端口。</p>
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
                     * 获取<p>是否透传 http 头信息，可取值：on、off。</p>
                     * @return PassThroughHttpHeader <p>是否透传 http 头信息，可取值：on、off。</p>
                     * 
                     */
                    std::string GetPassThroughHttpHeader() const;

                    /**
                     * 设置<p>是否透传 http 头信息，可取值：on、off。</p>
                     * @param _passThroughHttpHeader <p>是否透传 http 头信息，可取值：on、off。</p>
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
                     * 获取<p>是否透传相应，可取值：on、off。</p>
                     * @return PassThroughResponse <p>是否透传相应，可取值：on、off。</p>
                     * 
                     */
                    std::string GetPassThroughResponse() const;

                    /**
                     * 设置<p>是否透传相应，可取值：on、off。</p>
                     * @param _passThroughResponse <p>是否透传相应，可取值：on、off。</p>
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
                     * 获取<p>是否透传参数，可取值：on、off。</p>
                     * @return PassThroughParam <p>是否透传参数，可取值：on、off。</p>
                     * 
                     */
                    std::string GetPassThroughParam() const;

                    /**
                     * 设置<p>是否透传参数，可取值：on、off。</p>
                     * @param _passThroughParam <p>是否透传参数，可取值：on、off。</p>
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
                     * 获取<p>url改写， 格式为： url1&lt;|&gt;url2; 其中，&lt;|&gt; 为分隔符。 url1、url2 长度限制100，不可包含特殊字符。</p>
                     * @return UrlReplaceRules <p>url改写， 格式为： url1&lt;|&gt;url2; 其中，&lt;|&gt; 为分隔符。 url1、url2 长度限制100，不可包含特殊字符。</p>
                     * 
                     */
                    std::vector<std::string> GetUrlReplaceRules() const;

                    /**
                     * 设置<p>url改写， 格式为： url1&lt;|&gt;url2; 其中，&lt;|&gt; 为分隔符。 url1、url2 长度限制100，不可包含特殊字符。</p>
                     * @param _urlReplaceRules <p>url改写， 格式为： url1&lt;|&gt;url2; 其中，&lt;|&gt; 为分隔符。 url1、url2 长度限制100，不可包含特殊字符。</p>
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
                     * 获取<p>options 支持，可取值：on、off，默认值：off。</p>
                     * @return OptionsRequest <p>options 支持，可取值：on、off，默认值：off。</p>
                     * 
                     */
                    std::string GetOptionsRequest() const;

                    /**
                     * 设置<p>options 支持，可取值：on、off，默认值：off。</p>
                     * @param _optionsRequest <p>options 支持，可取值：on、off，默认值：off。</p>
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
                     * 获取<p>回源超时时间，单位 ms，取值范围：1 ～ 60000，默认值：10000。</p>
                     * @return OriginTimeout <p>回源超时时间，单位 ms，取值范围：1 ～ 60000，默认值：10000。</p>
                     * 
                     */
                    int64_t GetOriginTimeout() const;

                    /**
                     * 设置<p>回源超时时间，单位 ms，取值范围：1 ～ 60000，默认值：10000。</p>
                     * @param _originTimeout <p>回源超时时间，单位 ms，取值范围：1 ～ 60000，默认值：10000。</p>
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
                     * 获取<p>重试次数，单位 次，取值范围：1 ～ 10。</p>
                     * @return OriginRetryTimes <p>重试次数，单位 次，取值范围：1 ～ 10。</p>
                     * 
                     */
                    int64_t GetOriginRetryTimes() const;

                    /**
                     * 设置<p>重试次数，单位 次，取值范围：1 ～ 10。</p>
                     * @param _originRetryTimes <p>重试次数，单位 次，取值范围：1 ～ 10。</p>
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
                     * 获取<p>状态码缓存，数组元素格式： cacheKey:interval cacheKey 可取值：cache_400_sec、cache_403_sec、cache_404_sec、cache_405_sec、cache_500_sec、cache_503_sec、cache_504_sec。 interval 单位 s。</p>
                     * @return CacheStatusCode <p>状态码缓存，数组元素格式： cacheKey:interval cacheKey 可取值：cache_400_sec、cache_403_sec、cache_404_sec、cache_405_sec、cache_500_sec、cache_503_sec、cache_504_sec。 interval 单位 s。</p>
                     * 
                     */
                    std::vector<std::string> GetCacheStatusCode() const;

                    /**
                     * 设置<p>状态码缓存，数组元素格式： cacheKey:interval cacheKey 可取值：cache_400_sec、cache_403_sec、cache_404_sec、cache_405_sec、cache_500_sec、cache_503_sec、cache_504_sec。 interval 单位 s。</p>
                     * @param _cacheStatusCode <p>状态码缓存，数组元素格式： cacheKey:interval cacheKey 可取值：cache_400_sec、cache_403_sec、cache_404_sec、cache_405_sec、cache_500_sec、cache_503_sec、cache_504_sec。 interval 单位 s。</p>
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
                     * 获取<p>缓存时间，单位 s，取值范围：0 ～ 31536000。</p>
                     * @return Cache <p>缓存时间，单位 s，取值范围：0 ～ 31536000。</p>
                     * 
                     */
                    int64_t GetCache() const;

                    /**
                     * 设置<p>缓存时间，单位 s，取值范围：0 ～ 31536000。</p>
                     * @param _cache <p>缓存时间，单位 s，取值范围：0 ～ 31536000。</p>
                     * 
                     */
                    void SetCache(const int64_t& _cache);

                    /**
                     * 判断参数 Cache 是否已赋值
                     * @return Cache 是否已赋值
                     * 
                     */
                    bool CacheHasBeenSet() const;

                    /**
                     * 获取<p>缓存键。</p>
                     * @return KeepParam <p>缓存键。</p>
                     * 
                     */
                    std::vector<std::string> GetKeepParam() const;

                    /**
                     * 设置<p>缓存键。</p>
                     * @param _keepParam <p>缓存键。</p>
                     * 
                     */
                    void SetKeepParam(const std::vector<std::string>& _keepParam);

                    /**
                     * 判断参数 KeepParam 是否已赋值
                     * @return KeepParam 是否已赋值
                     * 
                     */
                    bool KeepParamHasBeenSet() const;

                    /**
                     * 获取<p>设置索引自定义 header，最大支持 10 组，每一组参数、取值用空格分开，允许字符规则如下： 头部参数：由大小写字母、数字及-组成，长度支持1 ～100个字符，黑名单：Host、Connection、Content-Length、Range。 头部取值：不支持中文、不支持以$开头，长度支持1 ～ 100个字符，不允许有空格。</p>
                     * @return HttpHeader <p>设置索引自定义 header，最大支持 10 组，每一组参数、取值用空格分开，允许字符规则如下： 头部参数：由大小写字母、数字及-组成，长度支持1 ～100个字符，黑名单：Host、Connection、Content-Length、Range。 头部取值：不支持中文、不支持以$开头，长度支持1 ～ 100个字符，不允许有空格。</p>
                     * 
                     */
                    std::vector<std::string> GetHttpHeader() const;

                    /**
                     * 设置<p>设置索引自定义 header，最大支持 10 组，每一组参数、取值用空格分开，允许字符规则如下： 头部参数：由大小写字母、数字及-组成，长度支持1 ～100个字符，黑名单：Host、Connection、Content-Length、Range。 头部取值：不支持中文、不支持以$开头，长度支持1 ～ 100个字符，不允许有空格。</p>
                     * @param _httpHeader <p>设置索引自定义 header，最大支持 10 组，每一组参数、取值用空格分开，允许字符规则如下： 头部参数：由大小写字母、数字及-组成，长度支持1 ～100个字符，黑名单：Host、Connection、Content-Length、Range。 头部取值：不支持中文、不支持以$开头，长度支持1 ～ 100个字符，不允许有空格。</p>
                     * 
                     */
                    void SetHttpHeader(const std::vector<std::string>& _httpHeader);

                    /**
                     * 判断参数 HttpHeader 是否已赋值
                     * @return HttpHeader 是否已赋值
                     * 
                     */
                    bool HttpHeaderHasBeenSet() const;

                    /**
                     * 获取<p>自定义回源缓存随源配置。<br>0：不开启。<br>1：开启。</p>
                     * @return CustomizationCacheFollowOrigin <p>自定义回源缓存随源配置。<br>0：不开启。<br>1：开启。</p>
                     * 
                     */
                    int64_t GetCustomizationCacheFollowOrigin() const;

                    /**
                     * 设置<p>自定义回源缓存随源配置。<br>0：不开启。<br>1：开启。</p>
                     * @param _customizationCacheFollowOrigin <p>自定义回源缓存随源配置。<br>0：不开启。<br>1：开启。</p>
                     * 
                     */
                    void SetCustomizationCacheFollowOrigin(const int64_t& _customizationCacheFollowOrigin);

                    /**
                     * 判断参数 CustomizationCacheFollowOrigin 是否已赋值
                     * @return CustomizationCacheFollowOrigin 是否已赋值
                     * 
                     */
                    bool CustomizationCacheFollowOriginHasBeenSet() const;

                    /**
                     * 获取<p>缓存 Http 头部键。</p>
                     * @return KeepHttpHeader <p>缓存 Http 头部键。</p>
                     * 
                     */
                    std::vector<std::string> GetKeepHttpHeader() const;

                    /**
                     * 设置<p>缓存 Http 头部键。</p>
                     * @param _keepHttpHeader <p>缓存 Http 头部键。</p>
                     * 
                     */
                    void SetKeepHttpHeader(const std::vector<std::string>& _keepHttpHeader);

                    /**
                     * 判断参数 KeepHttpHeader 是否已赋值
                     * @return KeepHttpHeader 是否已赋值
                     * 
                     */
                    bool KeepHttpHeaderHasBeenSet() const;

                private:

                    /**
                     * <p>匹配规则，可选项如下：<br>.m3u8、.mpd、.ts、.mp4、.m4s、.m4a、.m4i、.m4v、.m4f、.aac、.webm。</p>
                     */
                    std::string m_matchRule;
                    bool m_matchRuleHasBeenSet;

                    /**
                     * <p>原站地址类型： 1 =&gt; IP 类型。 2 =&gt; 域名类型。</p>
                     */
                    int64_t m_originAddressType;
                    bool m_originAddressTypeHasBeenSet;

                    /**
                     * <p>原站 host。</p>
                     */
                    std::string m_originHost;
                    bool m_originHostHasBeenSet;

                    /**
                     * <p>原站地址信息，每项用冒号分割域名（ip）、端口信息。 端口为空也要带上分号，表示取默认端口。</p>
                     */
                    std::vector<std::string> m_originAddress;
                    bool m_originAddressHasBeenSet;

                    /**
                     * <p>是否透传 http 头信息，可取值：on、off。</p>
                     */
                    std::string m_passThroughHttpHeader;
                    bool m_passThroughHttpHeaderHasBeenSet;

                    /**
                     * <p>是否透传相应，可取值：on、off。</p>
                     */
                    std::string m_passThroughResponse;
                    bool m_passThroughResponseHasBeenSet;

                    /**
                     * <p>是否透传参数，可取值：on、off。</p>
                     */
                    std::string m_passThroughParam;
                    bool m_passThroughParamHasBeenSet;

                    /**
                     * <p>url改写， 格式为： url1&lt;|&gt;url2; 其中，&lt;|&gt; 为分隔符。 url1、url2 长度限制100，不可包含特殊字符。</p>
                     */
                    std::vector<std::string> m_urlReplaceRules;
                    bool m_urlReplaceRulesHasBeenSet;

                    /**
                     * <p>options 支持，可取值：on、off，默认值：off。</p>
                     */
                    std::string m_optionsRequest;
                    bool m_optionsRequestHasBeenSet;

                    /**
                     * <p>回源超时时间，单位 ms，取值范围：1 ～ 60000，默认值：10000。</p>
                     */
                    int64_t m_originTimeout;
                    bool m_originTimeoutHasBeenSet;

                    /**
                     * <p>重试次数，单位 次，取值范围：1 ～ 10。</p>
                     */
                    int64_t m_originRetryTimes;
                    bool m_originRetryTimesHasBeenSet;

                    /**
                     * <p>状态码缓存，数组元素格式： cacheKey:interval cacheKey 可取值：cache_400_sec、cache_403_sec、cache_404_sec、cache_405_sec、cache_500_sec、cache_503_sec、cache_504_sec。 interval 单位 s。</p>
                     */
                    std::vector<std::string> m_cacheStatusCode;
                    bool m_cacheStatusCodeHasBeenSet;

                    /**
                     * <p>缓存时间，单位 s，取值范围：0 ～ 31536000。</p>
                     */
                    int64_t m_cache;
                    bool m_cacheHasBeenSet;

                    /**
                     * <p>缓存键。</p>
                     */
                    std::vector<std::string> m_keepParam;
                    bool m_keepParamHasBeenSet;

                    /**
                     * <p>设置索引自定义 header，最大支持 10 组，每一组参数、取值用空格分开，允许字符规则如下： 头部参数：由大小写字母、数字及-组成，长度支持1 ～100个字符，黑名单：Host、Connection、Content-Length、Range。 头部取值：不支持中文、不支持以$开头，长度支持1 ～ 100个字符，不允许有空格。</p>
                     */
                    std::vector<std::string> m_httpHeader;
                    bool m_httpHeaderHasBeenSet;

                    /**
                     * <p>自定义回源缓存随源配置。<br>0：不开启。<br>1：开启。</p>
                     */
                    int64_t m_customizationCacheFollowOrigin;
                    bool m_customizationCacheFollowOriginHasBeenSet;

                    /**
                     * <p>缓存 Http 头部键。</p>
                     */
                    std::vector<std::string> m_keepHttpHeader;
                    bool m_keepHttpHeaderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_ORIGINSTREAMCUSTOMIZATIONRULE_H_
