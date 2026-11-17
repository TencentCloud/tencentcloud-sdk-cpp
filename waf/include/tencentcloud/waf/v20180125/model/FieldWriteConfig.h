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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_FIELDWRITECONFIG_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_FIELDWRITECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 设置哪些字段是否存储或转发
                */
                class FieldWriteConfig : public AbstractModel
                {
                public:
                    FieldWriteConfig();
                    ~FieldWriteConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>1:开启 0:不开启</p>
                     * @return EnableHeaders <p>1:开启 0:不开启</p>
                     * 
                     */
                    int64_t GetEnableHeaders() const;

                    /**
                     * 设置<p>1:开启 0:不开启</p>
                     * @param _enableHeaders <p>1:开启 0:不开启</p>
                     * 
                     */
                    void SetEnableHeaders(const int64_t& _enableHeaders);

                    /**
                     * 判断参数 EnableHeaders 是否已赋值
                     * @return EnableHeaders 是否已赋值
                     * 
                     */
                    bool EnableHeadersHasBeenSet() const;

                    /**
                     * 获取<p>1:开启 0:不开启</p>
                     * @return EnableBody <p>1:开启 0:不开启</p>
                     * 
                     */
                    int64_t GetEnableBody() const;

                    /**
                     * 设置<p>1:开启 0:不开启</p>
                     * @param _enableBody <p>1:开启 0:不开启</p>
                     * 
                     */
                    void SetEnableBody(const int64_t& _enableBody);

                    /**
                     * 判断参数 EnableBody 是否已赋值
                     * @return EnableBody 是否已赋值
                     * 
                     */
                    bool EnableBodyHasBeenSet() const;

                    /**
                     * 获取<p>仅当该条访问日志命中攻击规则时，是否额外存储 attack_body 字段（取值与 body 字段相同）。1:开启 0/不填:不开启。与 EnableBody 完全独立，互不影响。仅在存储查询链路（DescribeAccessMeta/ModifyAccessPeriod）中生效，不影响 CLS/CKafka 自定义投递（CreatePostCLSFlow/CreatePostCKafkaFlow）配置。</p>
                     * @return EnableAttackBody <p>仅当该条访问日志命中攻击规则时，是否额外存储 attack_body 字段（取值与 body 字段相同）。1:开启 0/不填:不开启。与 EnableBody 完全独立，互不影响。仅在存储查询链路（DescribeAccessMeta/ModifyAccessPeriod）中生效，不影响 CLS/CKafka 自定义投递（CreatePostCLSFlow/CreatePostCKafkaFlow）配置。</p>
                     * 
                     */
                    int64_t GetEnableAttackBody() const;

                    /**
                     * 设置<p>仅当该条访问日志命中攻击规则时，是否额外存储 attack_body 字段（取值与 body 字段相同）。1:开启 0/不填:不开启。与 EnableBody 完全独立，互不影响。仅在存储查询链路（DescribeAccessMeta/ModifyAccessPeriod）中生效，不影响 CLS/CKafka 自定义投递（CreatePostCLSFlow/CreatePostCKafkaFlow）配置。</p>
                     * @param _enableAttackBody <p>仅当该条访问日志命中攻击规则时，是否额外存储 attack_body 字段（取值与 body 字段相同）。1:开启 0/不填:不开启。与 EnableBody 完全独立，互不影响。仅在存储查询链路（DescribeAccessMeta/ModifyAccessPeriod）中生效，不影响 CLS/CKafka 自定义投递（CreatePostCLSFlow/CreatePostCKafkaFlow）配置。</p>
                     * 
                     */
                    void SetEnableAttackBody(const int64_t& _enableAttackBody);

                    /**
                     * 判断参数 EnableAttackBody 是否已赋值
                     * @return EnableAttackBody 是否已赋值
                     * 
                     */
                    bool EnableAttackBodyHasBeenSet() const;

                    /**
                     * 获取<p>1:开启 0:不开启</p>
                     * @return EnableBot <p>1:开启 0:不开启</p>
                     * 
                     */
                    int64_t GetEnableBot() const;

                    /**
                     * 设置<p>1:开启 0:不开启</p>
                     * @param _enableBot <p>1:开启 0:不开启</p>
                     * 
                     */
                    void SetEnableBot(const int64_t& _enableBot);

                    /**
                     * 判断参数 EnableBot 是否已赋值
                     * @return EnableBot 是否已赋值
                     * 
                     */
                    bool EnableBotHasBeenSet() const;

                    /**
                     * 获取<p>响应方向body<br>1:开启 0:不开启</p>
                     * @return EnableResponse <p>响应方向body<br>1:开启 0:不开启</p>
                     * 
                     */
                    int64_t GetEnableResponse() const;

                    /**
                     * 设置<p>响应方向body<br>1:开启 0:不开启</p>
                     * @param _enableResponse <p>响应方向body<br>1:开启 0:不开启</p>
                     * 
                     */
                    void SetEnableResponse(const int64_t& _enableResponse);

                    /**
                     * 判断参数 EnableResponse 是否已赋值
                     * @return EnableResponse 是否已赋值
                     * 
                     */
                    bool EnableResponseHasBeenSet() const;

                    /**
                     * 获取<p>是否投递 response_headers（响应头，完整键值对，原样投递不做过滤/脱敏，超过2KB截断）。1:开启 0/不填:不开启。与 EnableResponse（响应体）完全独立，互不影响。</p>
                     * @return EnableResponseHeaders <p>是否投递 response_headers（响应头，完整键值对，原样投递不做过滤/脱敏，超过2KB截断）。1:开启 0/不填:不开启。与 EnableResponse（响应体）完全独立，互不影响。</p>
                     * 
                     */
                    int64_t GetEnableResponseHeaders() const;

                    /**
                     * 设置<p>是否投递 response_headers（响应头，完整键值对，原样投递不做过滤/脱敏，超过2KB截断）。1:开启 0/不填:不开启。与 EnableResponse（响应体）完全独立，互不影响。</p>
                     * @param _enableResponseHeaders <p>是否投递 response_headers（响应头，完整键值对，原样投递不做过滤/脱敏，超过2KB截断）。1:开启 0/不填:不开启。与 EnableResponse（响应体）完全独立，互不影响。</p>
                     * 
                     */
                    void SetEnableResponseHeaders(const int64_t& _enableResponseHeaders);

                    /**
                     * 判断参数 EnableResponseHeaders 是否已赋值
                     * @return EnableResponseHeaders 是否已赋值
                     * 
                     */
                    bool EnableResponseHeadersHasBeenSet() const;

                    /**
                     * 获取<p>是否投递 response_length（响应包长度，单位字节）。1:开启 0/不填:不开启。与 EnableResponse 完全独立，互不影响。</p>
                     * @return EnableResponseLength <p>是否投递 response_length（响应包长度，单位字节）。1:开启 0/不填:不开启。与 EnableResponse 完全独立，互不影响。</p>
                     * 
                     */
                    int64_t GetEnableResponseLength() const;

                    /**
                     * 设置<p>是否投递 response_length（响应包长度，单位字节）。1:开启 0/不填:不开启。与 EnableResponse 完全独立，互不影响。</p>
                     * @param _enableResponseLength <p>是否投递 response_length（响应包长度，单位字节）。1:开启 0/不填:不开启。与 EnableResponse 完全独立，互不影响。</p>
                     * 
                     */
                    void SetEnableResponseLength(const int64_t& _enableResponseLength);

                    /**
                     * 判断参数 EnableResponseLength 是否已赋值
                     * @return EnableResponseLength 是否已赋值
                     * 
                     */
                    bool EnableResponseLengthHasBeenSet() const;

                    /**
                     * 获取<p>是否投递 response_status_line（客户端可见 HTTP 状态行，如 HTTP/1.1 200 OK，超过1KB截断）。1:开启 0/不填:不开启。与 EnableResponse 完全独立，互不影响。拦截/未回源时也会有值，记录的是 WAF 返回给客户端的状态行。</p>
                     * @return EnableResponseStatusLine <p>是否投递 response_status_line（客户端可见 HTTP 状态行，如 HTTP/1.1 200 OK，超过1KB截断）。1:开启 0/不填:不开启。与 EnableResponse 完全独立，互不影响。拦截/未回源时也会有值，记录的是 WAF 返回给客户端的状态行。</p>
                     * 
                     */
                    int64_t GetEnableResponseStatusLine() const;

                    /**
                     * 设置<p>是否投递 response_status_line（客户端可见 HTTP 状态行，如 HTTP/1.1 200 OK，超过1KB截断）。1:开启 0/不填:不开启。与 EnableResponse 完全独立，互不影响。拦截/未回源时也会有值，记录的是 WAF 返回给客户端的状态行。</p>
                     * @param _enableResponseStatusLine <p>是否投递 response_status_line（客户端可见 HTTP 状态行，如 HTTP/1.1 200 OK，超过1KB截断）。1:开启 0/不填:不开启。与 EnableResponse 完全独立，互不影响。拦截/未回源时也会有值，记录的是 WAF 返回给客户端的状态行。</p>
                     * 
                     */
                    void SetEnableResponseStatusLine(const int64_t& _enableResponseStatusLine);

                    /**
                     * 判断参数 EnableResponseStatusLine 是否已赋值
                     * @return EnableResponseStatusLine 是否已赋值
                     * 
                     */
                    bool EnableResponseStatusLineHasBeenSet() const;

                    /**
                     * 获取<p>大模型安全防护详情字段，用;分割，仅对 SDK 访问日志生效。不传表示全部写入；传空字符串表示只写必填字段（uuid、appid、instance、timestamp、llm_service_id）。</p>
                     * @return LlmItem <p>大模型安全防护详情字段，用;分割，仅对 SDK 访问日志生效。不传表示全部写入；传空字符串表示只写必填字段（uuid、appid、instance、timestamp、llm_service_id）。</p>
                     * 
                     */
                    std::string GetLlmItem() const;

                    /**
                     * 设置<p>大模型安全防护详情字段，用;分割，仅对 SDK 访问日志生效。不传表示全部写入；传空字符串表示只写必填字段（uuid、appid、instance、timestamp、llm_service_id）。</p>
                     * @param _llmItem <p>大模型安全防护详情字段，用;分割，仅对 SDK 访问日志生效。不传表示全部写入；传空字符串表示只写必填字段（uuid、appid、instance、timestamp、llm_service_id）。</p>
                     * 
                     */
                    void SetLlmItem(const std::string& _llmItem);

                    /**
                     * 判断参数 LlmItem 是否已赋值
                     * @return LlmItem 是否已赋值
                     * 
                     */
                    bool LlmItemHasBeenSet() const;

                    /**
                     * 获取<p>headers 字段中10个通用冗余子字段（accept/accept-encoding/accept-language/connection/content-type/cookie/host/referer/x-forwarded-for/user-agent）剔除开关。1:剔除 0/不填:不剔除。仅在CLS/CKafka自定义投递（CreatePostCLSFlow/CreatePostCKafkaFlow及对应Describe接口）中生效，不影响原有存储日志配置。</p>
                     * @return FilterPlusEnableHeaderFilter <p>headers 字段中10个通用冗余子字段（accept/accept-encoding/accept-language/connection/content-type/cookie/host/referer/x-forwarded-for/user-agent）剔除开关。1:剔除 0/不填:不剔除。仅在CLS/CKafka自定义投递（CreatePostCLSFlow/CreatePostCKafkaFlow及对应Describe接口）中生效，不影响原有存储日志配置。</p>
                     * 
                     */
                    int64_t GetFilterPlusEnableHeaderFilter() const;

                    /**
                     * 设置<p>headers 字段中10个通用冗余子字段（accept/accept-encoding/accept-language/connection/content-type/cookie/host/referer/x-forwarded-for/user-agent）剔除开关。1:剔除 0/不填:不剔除。仅在CLS/CKafka自定义投递（CreatePostCLSFlow/CreatePostCKafkaFlow及对应Describe接口）中生效，不影响原有存储日志配置。</p>
                     * @param _filterPlusEnableHeaderFilter <p>headers 字段中10个通用冗余子字段（accept/accept-encoding/accept-language/connection/content-type/cookie/host/referer/x-forwarded-for/user-agent）剔除开关。1:剔除 0/不填:不剔除。仅在CLS/CKafka自定义投递（CreatePostCLSFlow/CreatePostCKafkaFlow及对应Describe接口）中生效，不影响原有存储日志配置。</p>
                     * 
                     */
                    void SetFilterPlusEnableHeaderFilter(const int64_t& _filterPlusEnableHeaderFilter);

                    /**
                     * 判断参数 FilterPlusEnableHeaderFilter 是否已赋值
                     * @return FilterPlusEnableHeaderFilter 是否已赋值
                     * 
                     */
                    bool FilterPlusEnableHeaderFilterHasBeenSet() const;

                private:

                    /**
                     * <p>1:开启 0:不开启</p>
                     */
                    int64_t m_enableHeaders;
                    bool m_enableHeadersHasBeenSet;

                    /**
                     * <p>1:开启 0:不开启</p>
                     */
                    int64_t m_enableBody;
                    bool m_enableBodyHasBeenSet;

                    /**
                     * <p>仅当该条访问日志命中攻击规则时，是否额外存储 attack_body 字段（取值与 body 字段相同）。1:开启 0/不填:不开启。与 EnableBody 完全独立，互不影响。仅在存储查询链路（DescribeAccessMeta/ModifyAccessPeriod）中生效，不影响 CLS/CKafka 自定义投递（CreatePostCLSFlow/CreatePostCKafkaFlow）配置。</p>
                     */
                    int64_t m_enableAttackBody;
                    bool m_enableAttackBodyHasBeenSet;

                    /**
                     * <p>1:开启 0:不开启</p>
                     */
                    int64_t m_enableBot;
                    bool m_enableBotHasBeenSet;

                    /**
                     * <p>响应方向body<br>1:开启 0:不开启</p>
                     */
                    int64_t m_enableResponse;
                    bool m_enableResponseHasBeenSet;

                    /**
                     * <p>是否投递 response_headers（响应头，完整键值对，原样投递不做过滤/脱敏，超过2KB截断）。1:开启 0/不填:不开启。与 EnableResponse（响应体）完全独立，互不影响。</p>
                     */
                    int64_t m_enableResponseHeaders;
                    bool m_enableResponseHeadersHasBeenSet;

                    /**
                     * <p>是否投递 response_length（响应包长度，单位字节）。1:开启 0/不填:不开启。与 EnableResponse 完全独立，互不影响。</p>
                     */
                    int64_t m_enableResponseLength;
                    bool m_enableResponseLengthHasBeenSet;

                    /**
                     * <p>是否投递 response_status_line（客户端可见 HTTP 状态行，如 HTTP/1.1 200 OK，超过1KB截断）。1:开启 0/不填:不开启。与 EnableResponse 完全独立，互不影响。拦截/未回源时也会有值，记录的是 WAF 返回给客户端的状态行。</p>
                     */
                    int64_t m_enableResponseStatusLine;
                    bool m_enableResponseStatusLineHasBeenSet;

                    /**
                     * <p>大模型安全防护详情字段，用;分割，仅对 SDK 访问日志生效。不传表示全部写入；传空字符串表示只写必填字段（uuid、appid、instance、timestamp、llm_service_id）。</p>
                     */
                    std::string m_llmItem;
                    bool m_llmItemHasBeenSet;

                    /**
                     * <p>headers 字段中10个通用冗余子字段（accept/accept-encoding/accept-language/connection/content-type/cookie/host/referer/x-forwarded-for/user-agent）剔除开关。1:剔除 0/不填:不剔除。仅在CLS/CKafka自定义投递（CreatePostCLSFlow/CreatePostCKafkaFlow及对应Describe接口）中生效，不影响原有存储日志配置。</p>
                     */
                    int64_t m_filterPlusEnableHeaderFilter;
                    bool m_filterPlusEnableHeaderFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_FIELDWRITECONFIG_H_
