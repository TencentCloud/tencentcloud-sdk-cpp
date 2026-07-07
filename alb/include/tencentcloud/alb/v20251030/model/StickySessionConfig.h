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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_STICKYSESSIONCONFIG_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_STICKYSESSIONCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * 会话保持配置。
                */
                class StickySessionConfig : public AbstractModel
                {
                public:
                    StickySessionConfig();
                    ~StickySessionConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启会话保持。
- **true**：开启。
- **false**：不开启。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StickySessionEnabled 是否开启会话保持。
- **true**：开启。
- **false**：不开启。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetStickySessionEnabled() const;

                    /**
                     * 设置是否开启会话保持。
- **true**：开启。
- **false**：不开启。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _stickySessionEnabled 是否开启会话保持。
- **true**：开启。
- **false**：不开启。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStickySessionEnabled(const bool& _stickySessionEnabled);

                    /**
                     * 判断参数 StickySessionEnabled 是否已赋值
                     * @return StickySessionEnabled 是否已赋值
                     * 
                     */
                    bool StickySessionEnabledHasBeenSet() const;

                    /**
                     * 获取自定义 Cookie 名称。
长度为 1~255 个字符，只能包含英文字母和数字字符，且不能为`tgw_l7_tg_route`，该字段为目标组间会话保持Cookie保留字段。
>仅当 **StickySessionEnabled** 为 **true** 时该参数生效。
                     * @return Cookie 自定义 Cookie 名称。
长度为 1~255 个字符，只能包含英文字母和数字字符，且不能为`tgw_l7_tg_route`，该字段为目标组间会话保持Cookie保留字段。
>仅当 **StickySessionEnabled** 为 **true** 时该参数生效。
                     * 
                     */
                    std::string GetCookie() const;

                    /**
                     * 设置自定义 Cookie 名称。
长度为 1~255 个字符，只能包含英文字母和数字字符，且不能为`tgw_l7_tg_route`，该字段为目标组间会话保持Cookie保留字段。
>仅当 **StickySessionEnabled** 为 **true** 时该参数生效。
                     * @param _cookie 自定义 Cookie 名称。
长度为 1~255 个字符，只能包含英文字母和数字字符，且不能为`tgw_l7_tg_route`，该字段为目标组间会话保持Cookie保留字段。
>仅当 **StickySessionEnabled** 为 **true** 时该参数生效。
                     * 
                     */
                    void SetCookie(const std::string& _cookie);

                    /**
                     * 判断参数 Cookie 是否已赋值
                     * @return Cookie 是否已赋值
                     * 
                     */
                    bool CookieHasBeenSet() const;

                    /**
                     * 获取会话保持时间。
取值范围：**1-86400**，单位：**秒**。
默认值：**1000**。
>仅当 **StickySessionEnabled** 为 **true**时，该参数生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CookieTimeout 会话保持时间。
取值范围：**1-86400**，单位：**秒**。
默认值：**1000**。
>仅当 **StickySessionEnabled** 为 **true**时，该参数生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCookieTimeout() const;

                    /**
                     * 设置会话保持时间。
取值范围：**1-86400**，单位：**秒**。
默认值：**1000**。
>仅当 **StickySessionEnabled** 为 **true**时，该参数生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cookieTimeout 会话保持时间。
取值范围：**1-86400**，单位：**秒**。
默认值：**1000**。
>仅当 **StickySessionEnabled** 为 **true**时，该参数生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCookieTimeout(const int64_t& _cookieTimeout);

                    /**
                     * 判断参数 CookieTimeout 是否已赋值
                     * @return CookieTimeout 是否已赋值
                     * 
                     */
                    bool CookieTimeoutHasBeenSet() const;

                    /**
                     * 获取会话保持类型（处理Cookie的方式）。
- **Insert**（默认值）：植入 Cookie。 客户端第一次访问后端服务时，应用型负载均衡会在返回请求中植入 Cookie。下次客户端请求时携带该 Cookie，负载均衡将请求转发到上次请求的相同后端服务。
- **Rewrite**：重写 Cookie。 负载均衡会对用户自定义的 Cookie 进行重写，下次客户端请求时携带该 Cookie，负载均衡将请求转发到上次请求的相同后端服务。
>仅当 **StickySessionEnabled** 为 **true** 时该参数生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StickySessionType 会话保持类型（处理Cookie的方式）。
- **Insert**（默认值）：植入 Cookie。 客户端第一次访问后端服务时，应用型负载均衡会在返回请求中植入 Cookie。下次客户端请求时携带该 Cookie，负载均衡将请求转发到上次请求的相同后端服务。
- **Rewrite**：重写 Cookie。 负载均衡会对用户自定义的 Cookie 进行重写，下次客户端请求时携带该 Cookie，负载均衡将请求转发到上次请求的相同后端服务。
>仅当 **StickySessionEnabled** 为 **true** 时该参数生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStickySessionType() const;

                    /**
                     * 设置会话保持类型（处理Cookie的方式）。
- **Insert**（默认值）：植入 Cookie。 客户端第一次访问后端服务时，应用型负载均衡会在返回请求中植入 Cookie。下次客户端请求时携带该 Cookie，负载均衡将请求转发到上次请求的相同后端服务。
- **Rewrite**：重写 Cookie。 负载均衡会对用户自定义的 Cookie 进行重写，下次客户端请求时携带该 Cookie，负载均衡将请求转发到上次请求的相同后端服务。
>仅当 **StickySessionEnabled** 为 **true** 时该参数生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _stickySessionType 会话保持类型（处理Cookie的方式）。
- **Insert**（默认值）：植入 Cookie。 客户端第一次访问后端服务时，应用型负载均衡会在返回请求中植入 Cookie。下次客户端请求时携带该 Cookie，负载均衡将请求转发到上次请求的相同后端服务。
- **Rewrite**：重写 Cookie。 负载均衡会对用户自定义的 Cookie 进行重写，下次客户端请求时携带该 Cookie，负载均衡将请求转发到上次请求的相同后端服务。
>仅当 **StickySessionEnabled** 为 **true** 时该参数生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStickySessionType(const std::string& _stickySessionType);

                    /**
                     * 判断参数 StickySessionType 是否已赋值
                     * @return StickySessionType 是否已赋值
                     * 
                     */
                    bool StickySessionTypeHasBeenSet() const;

                private:

                    /**
                     * 是否开启会话保持。
- **true**：开启。
- **false**：不开启。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_stickySessionEnabled;
                    bool m_stickySessionEnabledHasBeenSet;

                    /**
                     * 自定义 Cookie 名称。
长度为 1~255 个字符，只能包含英文字母和数字字符，且不能为`tgw_l7_tg_route`，该字段为目标组间会话保持Cookie保留字段。
>仅当 **StickySessionEnabled** 为 **true** 时该参数生效。
                     */
                    std::string m_cookie;
                    bool m_cookieHasBeenSet;

                    /**
                     * 会话保持时间。
取值范围：**1-86400**，单位：**秒**。
默认值：**1000**。
>仅当 **StickySessionEnabled** 为 **true**时，该参数生效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cookieTimeout;
                    bool m_cookieTimeoutHasBeenSet;

                    /**
                     * 会话保持类型（处理Cookie的方式）。
- **Insert**（默认值）：植入 Cookie。 客户端第一次访问后端服务时，应用型负载均衡会在返回请求中植入 Cookie。下次客户端请求时携带该 Cookie，负载均衡将请求转发到上次请求的相同后端服务。
- **Rewrite**：重写 Cookie。 负载均衡会对用户自定义的 Cookie 进行重写，下次客户端请求时携带该 Cookie，负载均衡将请求转发到上次请求的相同后端服务。
>仅当 **StickySessionEnabled** 为 **true** 时该参数生效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_stickySessionType;
                    bool m_stickySessionTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_STICKYSESSIONCONFIG_H_
