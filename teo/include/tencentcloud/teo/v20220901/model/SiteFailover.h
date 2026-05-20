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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SITEFAILOVER_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SITEFAILOVER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/HostHeaderParameters.h>
#include <tencentcloud/teo/v20220901/model/UpstreamURLRewriteParameters.h>
#include <tencentcloud/teo/v20220901/model/UpstreamRequestParameters.h>
#include <tencentcloud/teo/v20220901/model/UpstreamHTTP2Parameters.h>
#include <tencentcloud/teo/v20220901/model/OriginPrivateParameters.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 源站故障转移 配置参数内部结构。
                */
                class SiteFailover : public AbstractModel
                {
                public:
                    SiteFailover();
                    ~SiteFailover() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取源站故障转移类型。取值有：
<li>FailoverToHost:回源到指定 IP/域名；</li>
<li> FailoverToCOS:回源到腾讯云 COS；</li>
<li>FailoverToS3CompatibleObjectStorage:回源到 S3 兼容；</li>
<li> FailoverRedirectToURL :重定向至指定 URL；</li>
<li> FailoverCustomResponsePage:使用自定义响应页面。</li>
                     * @return Mode 源站故障转移类型。取值有：
<li>FailoverToHost:回源到指定 IP/域名；</li>
<li> FailoverToCOS:回源到腾讯云 COS；</li>
<li>FailoverToS3CompatibleObjectStorage:回源到 S3 兼容；</li>
<li> FailoverRedirectToURL :重定向至指定 URL；</li>
<li> FailoverCustomResponsePage:使用自定义响应页面。</li>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置源站故障转移类型。取值有：
<li>FailoverToHost:回源到指定 IP/域名；</li>
<li> FailoverToCOS:回源到腾讯云 COS；</li>
<li>FailoverToS3CompatibleObjectStorage:回源到 S3 兼容；</li>
<li> FailoverRedirectToURL :重定向至指定 URL；</li>
<li> FailoverCustomResponsePage:使用自定义响应页面。</li>
                     * @param _mode 源站故障转移类型。取值有：
<li>FailoverToHost:回源到指定 IP/域名；</li>
<li> FailoverToCOS:回源到腾讯云 COS；</li>
<li>FailoverToS3CompatibleObjectStorage:回源到 S3 兼容；</li>
<li> FailoverRedirectToURL :重定向至指定 URL；</li>
<li> FailoverCustomResponsePage:使用自定义响应页面。</li>
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取源站地址，根据 Mode 的取值分为以下情况：
<li>当 Mode = FailoverToHost 时，该参数请填写 IPV4、IPV6 地址或域名；</li>
<li>当 Mode = FailoverToCOS 时，该参数请填写 COS 桶的访问域名；</li>
<li>当 Mode = FailoverToS3CompatibleObjectStorage，该参数请填写 S3 桶的访问域名。</li>
                     * @return Origin 源站地址，根据 Mode 的取值分为以下情况：
<li>当 Mode = FailoverToHost 时，该参数请填写 IPV4、IPV6 地址或域名；</li>
<li>当 Mode = FailoverToCOS 时，该参数请填写 COS 桶的访问域名；</li>
<li>当 Mode = FailoverToS3CompatibleObjectStorage，该参数请填写 S3 桶的访问域名。</li>
                     * 
                     */
                    std::string GetOrigin() const;

                    /**
                     * 设置源站地址，根据 Mode 的取值分为以下情况：
<li>当 Mode = FailoverToHost 时，该参数请填写 IPV4、IPV6 地址或域名；</li>
<li>当 Mode = FailoverToCOS 时，该参数请填写 COS 桶的访问域名；</li>
<li>当 Mode = FailoverToS3CompatibleObjectStorage，该参数请填写 S3 桶的访问域名。</li>
                     * @param _origin 源站地址，根据 Mode 的取值分为以下情况：
<li>当 Mode = FailoverToHost 时，该参数请填写 IPV4、IPV6 地址或域名；</li>
<li>当 Mode = FailoverToCOS 时，该参数请填写 COS 桶的访问域名；</li>
<li>当 Mode = FailoverToS3CompatibleObjectStorage，该参数请填写 S3 桶的访问域名。</li>
                     * 
                     */
                    void SetOrigin(const std::string& _origin);

                    /**
                     * 判断参数 Origin 是否已赋值
                     * @return Origin 是否已赋值
                     * 
                     */
                    bool OriginHasBeenSet() const;

                    /**
                     * 获取回源协议配置。当 Mode 取值为 FailoverToHost 时该参数必填。取值有：
<li>http：使用 HTTP 协议；</li>
<li>https：使用 HTTPS 协议；</li>
<li>follow：协议跟随。</li>
                     * @return OriginProtocol 回源协议配置。当 Mode 取值为 FailoverToHost 时该参数必填。取值有：
<li>http：使用 HTTP 协议；</li>
<li>https：使用 HTTPS 协议；</li>
<li>follow：协议跟随。</li>
                     * 
                     */
                    std::string GetOriginProtocol() const;

                    /**
                     * 设置回源协议配置。当 Mode 取值为 FailoverToHost 时该参数必填。取值有：
<li>http：使用 HTTP 协议；</li>
<li>https：使用 HTTPS 协议；</li>
<li>follow：协议跟随。</li>
                     * @param _originProtocol 回源协议配置。当 Mode 取值为 FailoverToHost 时该参数必填。取值有：
<li>http：使用 HTTP 协议；</li>
<li>https：使用 HTTPS 协议；</li>
<li>follow：协议跟随。</li>
                     * 
                     */
                    void SetOriginProtocol(const std::string& _originProtocol);

                    /**
                     * 判断参数 OriginProtocol 是否已赋值
                     * @return OriginProtocol 是否已赋值
                     * 
                     */
                    bool OriginProtocolHasBeenSet() const;

                    /**
                     * 获取HTTP 回源端口，取值范围 1～65535。当回源协议 OriginProtocol 为 http 或者 follow 时该参数必填。
                     * @return HTTPOriginPort HTTP 回源端口，取值范围 1～65535。当回源协议 OriginProtocol 为 http 或者 follow 时该参数必填。
                     * 
                     */
                    int64_t GetHTTPOriginPort() const;

                    /**
                     * 设置HTTP 回源端口，取值范围 1～65535。当回源协议 OriginProtocol 为 http 或者 follow 时该参数必填。
                     * @param _hTTPOriginPort HTTP 回源端口，取值范围 1～65535。当回源协议 OriginProtocol 为 http 或者 follow 时该参数必填。
                     * 
                     */
                    void SetHTTPOriginPort(const int64_t& _hTTPOriginPort);

                    /**
                     * 判断参数 HTTPOriginPort 是否已赋值
                     * @return HTTPOriginPort 是否已赋值
                     * 
                     */
                    bool HTTPOriginPortHasBeenSet() const;

                    /**
                     * 获取HTTPS 回源端口，取值范围 1～65535。当回源协议 OriginProtocol 为 https 或者 follow 时该参数必填。
                     * @return HTTPSOriginPort HTTPS 回源端口，取值范围 1～65535。当回源协议 OriginProtocol 为 https 或者 follow 时该参数必填。
                     * 
                     */
                    int64_t GetHTTPSOriginPort() const;

                    /**
                     * 设置HTTPS 回源端口，取值范围 1～65535。当回源协议 OriginProtocol 为 https 或者 follow 时该参数必填。
                     * @param _hTTPSOriginPort HTTPS 回源端口，取值范围 1～65535。当回源协议 OriginProtocol 为 https 或者 follow 时该参数必填。
                     * 
                     */
                    void SetHTTPSOriginPort(const int64_t& _hTTPSOriginPort);

                    /**
                     * 判断参数 HTTPSOriginPort 是否已赋值
                     * @return HTTPSOriginPort 是否已赋值
                     * 
                     */
                    bool HTTPSOriginPortHasBeenSet() const;

                    /**
                     * 获取回源Host Header 重写配置，
                     * @return UpstreamHostHeader 回源Host Header 重写配置，
                     * 
                     */
                    HostHeaderParameters GetUpstreamHostHeader() const;

                    /**
                     * 设置回源Host Header 重写配置，
                     * @param _upstreamHostHeader 回源Host Header 重写配置，
                     * 
                     */
                    void SetUpstreamHostHeader(const HostHeaderParameters& _upstreamHostHeader);

                    /**
                     * 判断参数 UpstreamHostHeader 是否已赋值
                     * @return UpstreamHostHeader 是否已赋值
                     * 
                     */
                    bool UpstreamHostHeaderHasBeenSet() const;

                    /**
                     * 获取回源 URL 重写配置。
                     * @return UpstreamURLRewrite 回源 URL 重写配置。
                     * 
                     */
                    UpstreamURLRewriteParameters GetUpstreamURLRewrite() const;

                    /**
                     * 设置回源 URL 重写配置。
                     * @param _upstreamURLRewrite 回源 URL 重写配置。
                     * 
                     */
                    void SetUpstreamURLRewrite(const UpstreamURLRewriteParameters& _upstreamURLRewrite);

                    /**
                     * 判断参数 UpstreamURLRewrite 是否已赋值
                     * @return UpstreamURLRewrite 是否已赋值
                     * 
                     */
                    bool UpstreamURLRewriteHasBeenSet() const;

                    /**
                     * 获取回源请求参数配置。
                     * @return UpstreamRequestParameters 回源请求参数配置。
                     * 
                     */
                    UpstreamRequestParameters GetUpstreamRequestParameters() const;

                    /**
                     * 设置回源请求参数配置。
                     * @param _upstreamRequestParameters 回源请求参数配置。
                     * 
                     */
                    void SetUpstreamRequestParameters(const UpstreamRequestParameters& _upstreamRequestParameters);

                    /**
                     * 判断参数 UpstreamRequestParameters 是否已赋值
                     * @return UpstreamRequestParameters 是否已赋值
                     * 
                     */
                    bool UpstreamRequestParametersHasBeenSet() const;

                    /**
                     * 获取HTTP2 回源配置参数。
                     * @return UpstreamHTTP2Parameters HTTP2 回源配置参数。
                     * 
                     */
                    UpstreamHTTP2Parameters GetUpstreamHTTP2Parameters() const;

                    /**
                     * 设置HTTP2 回源配置参数。
                     * @param _upstreamHTTP2Parameters HTTP2 回源配置参数。
                     * 
                     */
                    void SetUpstreamHTTP2Parameters(const UpstreamHTTP2Parameters& _upstreamHTTP2Parameters);

                    /**
                     * 判断参数 UpstreamHTTP2Parameters 是否已赋值
                     * @return UpstreamHTTP2Parameters 是否已赋值
                     * 
                     */
                    bool UpstreamHTTP2ParametersHasBeenSet() const;

                    /**
                     * 获取指定是否允许访问私有对象存储源站，当源站类型 Mode = FailoverToCOS 或 FailoverToS3CompatibleObjectStorage 时该参数必填，取值有：
<li>on：使用私有鉴权；</li>
<li>off：不使用私有鉴权。</li>
                     * @return PrivateAccess 指定是否允许访问私有对象存储源站，当源站类型 Mode = FailoverToCOS 或 FailoverToS3CompatibleObjectStorage 时该参数必填，取值有：
<li>on：使用私有鉴权；</li>
<li>off：不使用私有鉴权。</li>
                     * 
                     */
                    std::string GetPrivateAccess() const;

                    /**
                     * 设置指定是否允许访问私有对象存储源站，当源站类型 Mode = FailoverToCOS 或 FailoverToS3CompatibleObjectStorage 时该参数必填，取值有：
<li>on：使用私有鉴权；</li>
<li>off：不使用私有鉴权。</li>
                     * @param _privateAccess 指定是否允许访问私有对象存储源站，当源站类型 Mode = FailoverToCOS 或 FailoverToS3CompatibleObjectStorage 时该参数必填，取值有：
<li>on：使用私有鉴权；</li>
<li>off：不使用私有鉴权。</li>
                     * 
                     */
                    void SetPrivateAccess(const std::string& _privateAccess);

                    /**
                     * 判断参数 PrivateAccess 是否已赋值
                     * @return PrivateAccess 是否已赋值
                     * 
                     */
                    bool PrivateAccessHasBeenSet() const;

                    /**
                     * 获取私有鉴权使用参数，该参数仅当 Mode = FailoverToS3CompatibleObjectStorage 且 PrivateAccess = on 时会生效。
                     * @return PrivateParameters 私有鉴权使用参数，该参数仅当 Mode = FailoverToS3CompatibleObjectStorage 且 PrivateAccess = on 时会生效。
                     * 
                     */
                    OriginPrivateParameters GetPrivateParameters() const;

                    /**
                     * 设置私有鉴权使用参数，该参数仅当 Mode = FailoverToS3CompatibleObjectStorage 且 PrivateAccess = on 时会生效。
                     * @param _privateParameters 私有鉴权使用参数，该参数仅当 Mode = FailoverToS3CompatibleObjectStorage 且 PrivateAccess = on 时会生效。
                     * 
                     */
                    void SetPrivateParameters(const OriginPrivateParameters& _privateParameters);

                    /**
                     * 判断参数 PrivateParameters 是否已赋值
                     * @return PrivateParameters 是否已赋值
                     * 
                     */
                    bool PrivateParametersHasBeenSet() const;

                    /**
                     * 获取重定向目标 URL。当 Mode 取值为 FailoverRedirectToURL 时该参数必填。
                     * @return RedirectURL 重定向目标 URL。当 Mode 取值为 FailoverRedirectToURL 时该参数必填。
                     * 
                     */
                    std::string GetRedirectURL() const;

                    /**
                     * 设置重定向目标 URL。当 Mode 取值为 FailoverRedirectToURL 时该参数必填。
                     * @param _redirectURL 重定向目标 URL。当 Mode 取值为 FailoverRedirectToURL 时该参数必填。
                     * 
                     */
                    void SetRedirectURL(const std::string& _redirectURL);

                    /**
                     * 判断参数 RedirectURL 是否已赋值
                     * @return RedirectURL 是否已赋值
                     * 
                     */
                    bool RedirectURLHasBeenSet() const;

                    /**
                     * 获取响应页面 ID。当 Mode 取值为 FailoverCustomResponsePage 时该参数必填。
                     * @return ResponsePageId 响应页面 ID。当 Mode 取值为 FailoverCustomResponsePage 时该参数必填。
                     * 
                     */
                    std::string GetResponsePageId() const;

                    /**
                     * 设置响应页面 ID。当 Mode 取值为 FailoverCustomResponsePage 时该参数必填。
                     * @param _responsePageId 响应页面 ID。当 Mode 取值为 FailoverCustomResponsePage 时该参数必填。
                     * 
                     */
                    void SetResponsePageId(const std::string& _responsePageId);

                    /**
                     * 判断参数 ResponsePageId 是否已赋值
                     * @return ResponsePageId 是否已赋值
                     * 
                     */
                    bool ResponsePageIdHasBeenSet() const;

                    /**
                     * 获取响应状态码。当 Mode 取值为 FailoverRedirectToURL 或 FailoverCustomResponsePage 时该参数必填。取值有：
<li>当 Mode = FailoverRedirectToURL 时，该参数取值为 301、302、303、307、308 之一；</li>
<li>当 Mode = FailoverCustomResponsePage 时，该参数取值为 400、403、404、405、414、416、451、500、501、502、503、504 之一。</li>
                     * @return StatusCode 响应状态码。当 Mode 取值为 FailoverRedirectToURL 或 FailoverCustomResponsePage 时该参数必填。取值有：
<li>当 Mode = FailoverRedirectToURL 时，该参数取值为 301、302、303、307、308 之一；</li>
<li>当 Mode = FailoverCustomResponsePage 时，该参数取值为 400、403、404、405、414、416、451、500、501、502、503、504 之一。</li>
                     * 
                     */
                    int64_t GetStatusCode() const;

                    /**
                     * 设置响应状态码。当 Mode 取值为 FailoverRedirectToURL 或 FailoverCustomResponsePage 时该参数必填。取值有：
<li>当 Mode = FailoverRedirectToURL 时，该参数取值为 301、302、303、307、308 之一；</li>
<li>当 Mode = FailoverCustomResponsePage 时，该参数取值为 400、403、404、405、414、416、451、500、501、502、503、504 之一。</li>
                     * @param _statusCode 响应状态码。当 Mode 取值为 FailoverRedirectToURL 或 FailoverCustomResponsePage 时该参数必填。取值有：
<li>当 Mode = FailoverRedirectToURL 时，该参数取值为 301、302、303、307、308 之一；</li>
<li>当 Mode = FailoverCustomResponsePage 时，该参数取值为 400、403、404、405、414、416、451、500、501、502、503、504 之一。</li>
                     * 
                     */
                    void SetStatusCode(const int64_t& _statusCode);

                    /**
                     * 判断参数 StatusCode 是否已赋值
                     * @return StatusCode 是否已赋值
                     * 
                     */
                    bool StatusCodeHasBeenSet() const;

                private:

                    /**
                     * 源站故障转移类型。取值有：
<li>FailoverToHost:回源到指定 IP/域名；</li>
<li> FailoverToCOS:回源到腾讯云 COS；</li>
<li>FailoverToS3CompatibleObjectStorage:回源到 S3 兼容；</li>
<li> FailoverRedirectToURL :重定向至指定 URL；</li>
<li> FailoverCustomResponsePage:使用自定义响应页面。</li>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 源站地址，根据 Mode 的取值分为以下情况：
<li>当 Mode = FailoverToHost 时，该参数请填写 IPV4、IPV6 地址或域名；</li>
<li>当 Mode = FailoverToCOS 时，该参数请填写 COS 桶的访问域名；</li>
<li>当 Mode = FailoverToS3CompatibleObjectStorage，该参数请填写 S3 桶的访问域名。</li>
                     */
                    std::string m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * 回源协议配置。当 Mode 取值为 FailoverToHost 时该参数必填。取值有：
<li>http：使用 HTTP 协议；</li>
<li>https：使用 HTTPS 协议；</li>
<li>follow：协议跟随。</li>
                     */
                    std::string m_originProtocol;
                    bool m_originProtocolHasBeenSet;

                    /**
                     * HTTP 回源端口，取值范围 1～65535。当回源协议 OriginProtocol 为 http 或者 follow 时该参数必填。
                     */
                    int64_t m_hTTPOriginPort;
                    bool m_hTTPOriginPortHasBeenSet;

                    /**
                     * HTTPS 回源端口，取值范围 1～65535。当回源协议 OriginProtocol 为 https 或者 follow 时该参数必填。
                     */
                    int64_t m_hTTPSOriginPort;
                    bool m_hTTPSOriginPortHasBeenSet;

                    /**
                     * 回源Host Header 重写配置，
                     */
                    HostHeaderParameters m_upstreamHostHeader;
                    bool m_upstreamHostHeaderHasBeenSet;

                    /**
                     * 回源 URL 重写配置。
                     */
                    UpstreamURLRewriteParameters m_upstreamURLRewrite;
                    bool m_upstreamURLRewriteHasBeenSet;

                    /**
                     * 回源请求参数配置。
                     */
                    UpstreamRequestParameters m_upstreamRequestParameters;
                    bool m_upstreamRequestParametersHasBeenSet;

                    /**
                     * HTTP2 回源配置参数。
                     */
                    UpstreamHTTP2Parameters m_upstreamHTTP2Parameters;
                    bool m_upstreamHTTP2ParametersHasBeenSet;

                    /**
                     * 指定是否允许访问私有对象存储源站，当源站类型 Mode = FailoverToCOS 或 FailoverToS3CompatibleObjectStorage 时该参数必填，取值有：
<li>on：使用私有鉴权；</li>
<li>off：不使用私有鉴权。</li>
                     */
                    std::string m_privateAccess;
                    bool m_privateAccessHasBeenSet;

                    /**
                     * 私有鉴权使用参数，该参数仅当 Mode = FailoverToS3CompatibleObjectStorage 且 PrivateAccess = on 时会生效。
                     */
                    OriginPrivateParameters m_privateParameters;
                    bool m_privateParametersHasBeenSet;

                    /**
                     * 重定向目标 URL。当 Mode 取值为 FailoverRedirectToURL 时该参数必填。
                     */
                    std::string m_redirectURL;
                    bool m_redirectURLHasBeenSet;

                    /**
                     * 响应页面 ID。当 Mode 取值为 FailoverCustomResponsePage 时该参数必填。
                     */
                    std::string m_responsePageId;
                    bool m_responsePageIdHasBeenSet;

                    /**
                     * 响应状态码。当 Mode 取值为 FailoverRedirectToURL 或 FailoverCustomResponsePage 时该参数必填。取值有：
<li>当 Mode = FailoverRedirectToURL 时，该参数取值为 301、302、303、307、308 之一；</li>
<li>当 Mode = FailoverCustomResponsePage 时，该参数取值为 400、403、404、405、414、416、451、500、501、502、503、504 之一。</li>
                     */
                    int64_t m_statusCode;
                    bool m_statusCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SITEFAILOVER_H_
