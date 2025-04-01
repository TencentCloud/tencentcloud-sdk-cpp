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

#ifndef TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONHTTPORIGINPARAMETER_H_
#define TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONHTTPORIGINPARAMETER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20240718/model/IncrementalMigrationHttpHeaderInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20240718
        {
            namespace Model
            {
                /**
                * 增量迁移回源参数。
                */
                class IncrementalMigrationHttpOriginParameter : public AbstractModel
                {
                public:
                    IncrementalMigrationHttpOriginParameter();
                    ~IncrementalMigrationHttpOriginParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取HTTP 头部透传信息。
                     * @return HttpHeaderInfo HTTP 头部透传信息。
                     * 
                     */
                    IncrementalMigrationHttpHeaderInfo GetHttpHeaderInfo() const;

                    /**
                     * 设置HTTP 头部透传信息。
                     * @param _httpHeaderInfo HTTP 头部透传信息。
                     * 
                     */
                    void SetHttpHeaderInfo(const IncrementalMigrationHttpHeaderInfo& _httpHeaderInfo);

                    /**
                     * 判断参数 HttpHeaderInfo 是否已赋值
                     * @return HttpHeaderInfo 是否已赋值
                     * 
                     */
                    bool HttpHeaderInfoHasBeenSet() const;

                    /**
                     * 获取回源协议。取值有：
<li>HTTP：强制 HTTP；</li>
<li>HTTPS：强制 HTTPS；</li>
<li>FOLLOW：跟随请求协议。</li>若不填，默认取值 `FOLLOW`。
                     * @return Protocol 回源协议。取值有：
<li>HTTP：强制 HTTP；</li>
<li>HTTPS：强制 HTTPS；</li>
<li>FOLLOW：跟随请求协议。</li>若不填，默认取值 `FOLLOW`。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置回源协议。取值有：
<li>HTTP：强制 HTTP；</li>
<li>HTTPS：强制 HTTPS；</li>
<li>FOLLOW：跟随请求协议。</li>若不填，默认取值 `FOLLOW`。
                     * @param _protocol 回源协议。取值有：
<li>HTTP：强制 HTTP；</li>
<li>HTTPS：强制 HTTPS；</li>
<li>FOLLOW：跟随请求协议。</li>若不填，默认取值 `FOLLOW`。
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取请求参数透传模式。取值有：
<li>FOLLOW：全部透传；</li>
<li>IGNORE：忽略，全部不透传。</li> 默认取值 `FOLLOW`。
                     * @return QueryStringFollowMode 请求参数透传模式。取值有：
<li>FOLLOW：全部透传；</li>
<li>IGNORE：忽略，全部不透传。</li> 默认取值 `FOLLOW`。
                     * 
                     */
                    std::string GetQueryStringFollowMode() const;

                    /**
                     * 设置请求参数透传模式。取值有：
<li>FOLLOW：全部透传；</li>
<li>IGNORE：忽略，全部不透传。</li> 默认取值 `FOLLOW`。
                     * @param _queryStringFollowMode 请求参数透传模式。取值有：
<li>FOLLOW：全部透传；</li>
<li>IGNORE：忽略，全部不透传。</li> 默认取值 `FOLLOW`。
                     * 
                     */
                    void SetQueryStringFollowMode(const std::string& _queryStringFollowMode);

                    /**
                     * 判断参数 QueryStringFollowMode 是否已赋值
                     * @return QueryStringFollowMode 是否已赋值
                     * 
                     */
                    bool QueryStringFollowModeHasBeenSet() const;

                    /**
                     * 获取重定向的 HTTP Code，目前仅支持 `301`，`302` 和 `307`。默认取值 `302`。
                     * @return HttpRedirectCode 重定向的 HTTP Code，目前仅支持 `301`，`302` 和 `307`。默认取值 `302`。
                     * 
                     */
                    uint64_t GetHttpRedirectCode() const;

                    /**
                     * 设置重定向的 HTTP Code，目前仅支持 `301`，`302` 和 `307`。默认取值 `302`。
                     * @param _httpRedirectCode 重定向的 HTTP Code，目前仅支持 `301`，`302` 和 `307`。默认取值 `302`。
                     * 
                     */
                    void SetHttpRedirectCode(const uint64_t& _httpRedirectCode);

                    /**
                     * 判断参数 HttpRedirectCode 是否已赋值
                     * @return HttpRedirectCode 是否已赋值
                     * 
                     */
                    bool HttpRedirectCodeHasBeenSet() const;

                    /**
                     * 获取源站重定向跟随模式。取值有：
<li>FOLLOW：跟随源站重定向；</li>
<li>IGNORE：忽略源站重定向。</li> 默认取值 `FOLLOW` 跟随源站重定向，即源站返回 `3xx` 时，会默认跟随至对应源站拉取数据。
                     * @return OriginRedirectionFollowMode 源站重定向跟随模式。取值有：
<li>FOLLOW：跟随源站重定向；</li>
<li>IGNORE：忽略源站重定向。</li> 默认取值 `FOLLOW` 跟随源站重定向，即源站返回 `3xx` 时，会默认跟随至对应源站拉取数据。
                     * 
                     */
                    std::string GetOriginRedirectionFollowMode() const;

                    /**
                     * 设置源站重定向跟随模式。取值有：
<li>FOLLOW：跟随源站重定向；</li>
<li>IGNORE：忽略源站重定向。</li> 默认取值 `FOLLOW` 跟随源站重定向，即源站返回 `3xx` 时，会默认跟随至对应源站拉取数据。
                     * @param _originRedirectionFollowMode 源站重定向跟随模式。取值有：
<li>FOLLOW：跟随源站重定向；</li>
<li>IGNORE：忽略源站重定向。</li> 默认取值 `FOLLOW` 跟随源站重定向，即源站返回 `3xx` 时，会默认跟随至对应源站拉取数据。
                     * 
                     */
                    void SetOriginRedirectionFollowMode(const std::string& _originRedirectionFollowMode);

                    /**
                     * 判断参数 OriginRedirectionFollowMode 是否已赋值
                     * @return OriginRedirectionFollowMode 是否已赋值
                     * 
                     */
                    bool OriginRedirectionFollowModeHasBeenSet() const;

                private:

                    /**
                     * HTTP 头部透传信息。
                     */
                    IncrementalMigrationHttpHeaderInfo m_httpHeaderInfo;
                    bool m_httpHeaderInfoHasBeenSet;

                    /**
                     * 回源协议。取值有：
<li>HTTP：强制 HTTP；</li>
<li>HTTPS：强制 HTTPS；</li>
<li>FOLLOW：跟随请求协议。</li>若不填，默认取值 `FOLLOW`。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 请求参数透传模式。取值有：
<li>FOLLOW：全部透传；</li>
<li>IGNORE：忽略，全部不透传。</li> 默认取值 `FOLLOW`。
                     */
                    std::string m_queryStringFollowMode;
                    bool m_queryStringFollowModeHasBeenSet;

                    /**
                     * 重定向的 HTTP Code，目前仅支持 `301`，`302` 和 `307`。默认取值 `302`。
                     */
                    uint64_t m_httpRedirectCode;
                    bool m_httpRedirectCodeHasBeenSet;

                    /**
                     * 源站重定向跟随模式。取值有：
<li>FOLLOW：跟随源站重定向；</li>
<li>IGNORE：忽略源站重定向。</li> 默认取值 `FOLLOW` 跟随源站重定向，即源站返回 `3xx` 时，会默认跟随至对应源站拉取数据。
                     */
                    std::string m_originRedirectionFollowMode;
                    bool m_originRedirectionFollowModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONHTTPORIGINPARAMETER_H_
