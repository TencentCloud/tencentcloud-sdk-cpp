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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_TARGETGROUPHEALTHCHECK_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_TARGETGROUPHEALTHCHECK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 目标组健康检查详情
                */
                class TargetGroupHealthCheck : public AbstractModel
                {
                public:
                    TargetGroupHealthCheck();
                    ~TargetGroupHealthCheck() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启健康检查。
                     * @return HealthSwitch 是否开启健康检查。
                     * 
                     */
                    bool GetHealthSwitch() const;

                    /**
                     * 设置是否开启健康检查。
                     * @param _healthSwitch 是否开启健康检查。
                     * 
                     */
                    void SetHealthSwitch(const bool& _healthSwitch);

                    /**
                     * 判断参数 HealthSwitch 是否已赋值
                     * @return HealthSwitch 是否已赋值
                     * 
                     */
                    bool HealthSwitchHasBeenSet() const;

                    /**
                     * 获取健康检查方式， 其中仅V2新版目标组类型支持该参数， 支持取值 TCP | HTTP | HTTPS | PING | CUSTOM，其中:
<ur><li>当目标组后端转发协议为TCP时， 健康检查方式支持 TCP/HTTP/CUSTOM， 默认为TCP。</li><li>当目标组后端转发协议为UDP时， 健康检查方式支持 PING/CUSTOM，默认为PING。</li><li>当目标组后端转发协议为HTTP时， 健康检查方式支持 HTTP/TCP， 默认为HTTP。</li><li>当目标组后端转发协议为HTTPS时， 健康检查方式支持 HTTPS/TCP， 默认为HTTPS。</li><li>当目标组后端转发协议为GRPC时， 健康检查方式支持GRPC/TCP， 默认为GRPC。</li></ur>
                     * @return Protocol 健康检查方式， 其中仅V2新版目标组类型支持该参数， 支持取值 TCP | HTTP | HTTPS | PING | CUSTOM，其中:
<ur><li>当目标组后端转发协议为TCP时， 健康检查方式支持 TCP/HTTP/CUSTOM， 默认为TCP。</li><li>当目标组后端转发协议为UDP时， 健康检查方式支持 PING/CUSTOM，默认为PING。</li><li>当目标组后端转发协议为HTTP时， 健康检查方式支持 HTTP/TCP， 默认为HTTP。</li><li>当目标组后端转发协议为HTTPS时， 健康检查方式支持 HTTPS/TCP， 默认为HTTPS。</li><li>当目标组后端转发协议为GRPC时， 健康检查方式支持GRPC/TCP， 默认为GRPC。</li></ur>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置健康检查方式， 其中仅V2新版目标组类型支持该参数， 支持取值 TCP | HTTP | HTTPS | PING | CUSTOM，其中:
<ur><li>当目标组后端转发协议为TCP时， 健康检查方式支持 TCP/HTTP/CUSTOM， 默认为TCP。</li><li>当目标组后端转发协议为UDP时， 健康检查方式支持 PING/CUSTOM，默认为PING。</li><li>当目标组后端转发协议为HTTP时， 健康检查方式支持 HTTP/TCP， 默认为HTTP。</li><li>当目标组后端转发协议为HTTPS时， 健康检查方式支持 HTTPS/TCP， 默认为HTTPS。</li><li>当目标组后端转发协议为GRPC时， 健康检查方式支持GRPC/TCP， 默认为GRPC。</li></ur>
                     * @param _protocol 健康检查方式， 其中仅V2新版目标组类型支持该参数， 支持取值 TCP | HTTP | HTTPS | PING | CUSTOM，其中:
<ur><li>当目标组后端转发协议为TCP时， 健康检查方式支持 TCP/HTTP/CUSTOM， 默认为TCP。</li><li>当目标组后端转发协议为UDP时， 健康检查方式支持 PING/CUSTOM，默认为PING。</li><li>当目标组后端转发协议为HTTP时， 健康检查方式支持 HTTP/TCP， 默认为HTTP。</li><li>当目标组后端转发协议为HTTPS时， 健康检查方式支持 HTTPS/TCP， 默认为HTTPS。</li><li>当目标组后端转发协议为GRPC时， 健康检查方式支持GRPC/TCP， 默认为GRPC。</li></ur>
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
                     * 获取自定义探测相关参数。健康检查端口，默认为后端服务的端口，除非您希望指定特定端口，否则建议留空。（仅适用于TCP/UDP目标组）。

                     * @return Port 自定义探测相关参数。健康检查端口，默认为后端服务的端口，除非您希望指定特定端口，否则建议留空。（仅适用于TCP/UDP目标组）。

                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置自定义探测相关参数。健康检查端口，默认为后端服务的端口，除非您希望指定特定端口，否则建议留空。（仅适用于TCP/UDP目标组）。

                     * @param _port 自定义探测相关参数。健康检查端口，默认为后端服务的端口，除非您希望指定特定端口，否则建议留空。（仅适用于TCP/UDP目标组）。

                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取健康检查超时时间。 默认为2秒。 可配置范围：2 - 30秒。
                     * @return Timeout 健康检查超时时间。 默认为2秒。 可配置范围：2 - 30秒。
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置健康检查超时时间。 默认为2秒。 可配置范围：2 - 30秒。
                     * @param _timeout 健康检查超时时间。 默认为2秒。 可配置范围：2 - 30秒。
                     * 
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取检测间隔时间。 默认为5秒。 可配置范围：2 - 300秒。
                     * @return GapTime 检测间隔时间。 默认为5秒。 可配置范围：2 - 300秒。
                     * 
                     */
                    int64_t GetGapTime() const;

                    /**
                     * 设置检测间隔时间。 默认为5秒。 可配置范围：2 - 300秒。
                     * @param _gapTime 检测间隔时间。 默认为5秒。 可配置范围：2 - 300秒。
                     * 
                     */
                    void SetGapTime(const int64_t& _gapTime);

                    /**
                     * 判断参数 GapTime 是否已赋值
                     * @return GapTime 是否已赋值
                     * 
                     */
                    bool GapTimeHasBeenSet() const;

                    /**
                     * 获取检测健康阈值。 默认为3秒。 可配置范围：2 - 10次。
                     * @return GoodLimit 检测健康阈值。 默认为3秒。 可配置范围：2 - 10次。
                     * 
                     */
                    int64_t GetGoodLimit() const;

                    /**
                     * 设置检测健康阈值。 默认为3秒。 可配置范围：2 - 10次。
                     * @param _goodLimit 检测健康阈值。 默认为3秒。 可配置范围：2 - 10次。
                     * 
                     */
                    void SetGoodLimit(const int64_t& _goodLimit);

                    /**
                     * 判断参数 GoodLimit 是否已赋值
                     * @return GoodLimit 是否已赋值
                     * 
                     */
                    bool GoodLimitHasBeenSet() const;

                    /**
                     * 获取检测不健康阈值。 默认为3秒。 可配置范围：2 - 10次。
                     * @return BadLimit 检测不健康阈值。 默认为3秒。 可配置范围：2 - 10次。
                     * 
                     */
                    int64_t GetBadLimit() const;

                    /**
                     * 设置检测不健康阈值。 默认为3秒。 可配置范围：2 - 10次。
                     * @param _badLimit 检测不健康阈值。 默认为3秒。 可配置范围：2 - 10次。
                     * 
                     */
                    void SetBadLimit(const int64_t& _badLimit);

                    /**
                     * 判断参数 BadLimit 是否已赋值
                     * @return BadLimit 是否已赋值
                     * 
                     */
                    bool BadLimitHasBeenSet() const;

                    /**
                     * 获取目标组下的所有rs的探测包是否开启巨帧。默认开启。仅GWLB类型目标组支持该参数。
                     * @return JumboFrame 目标组下的所有rs的探测包是否开启巨帧。默认开启。仅GWLB类型目标组支持该参数。
                     * 
                     */
                    bool GetJumboFrame() const;

                    /**
                     * 设置目标组下的所有rs的探测包是否开启巨帧。默认开启。仅GWLB类型目标组支持该参数。
                     * @param _jumboFrame 目标组下的所有rs的探测包是否开启巨帧。默认开启。仅GWLB类型目标组支持该参数。
                     * 
                     */
                    void SetJumboFrame(const bool& _jumboFrame);

                    /**
                     * 判断参数 JumboFrame 是否已赋值
                     * @return JumboFrame 是否已赋值
                     * 
                     */
                    bool JumboFrameHasBeenSet() const;

                    /**
                     * 获取健康检查状态码（仅适用于HTTP/HTTPS目标组、TCP目标组的HTTP健康检查方式）。可选值：1~31，默认 31，其中：<url> <li>1 表示探测后返回值 1xx 代表健康。</li><li>2 表示返回 2xx 代表健康。</li><li>4 表示返回 3xx 代表健康。</li><li>8 表示返回 4xx 代表健康。</li><li>16 表示返回 5xx 代表健康。</li></url>若希望多种返回码都可代表健康，则将相应的值相加。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HttpCode 健康检查状态码（仅适用于HTTP/HTTPS目标组、TCP目标组的HTTP健康检查方式）。可选值：1~31，默认 31，其中：<url> <li>1 表示探测后返回值 1xx 代表健康。</li><li>2 表示返回 2xx 代表健康。</li><li>4 表示返回 3xx 代表健康。</li><li>8 表示返回 4xx 代表健康。</li><li>16 表示返回 5xx 代表健康。</li></url>若希望多种返回码都可代表健康，则将相应的值相加。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetHttpCode() const;

                    /**
                     * 设置健康检查状态码（仅适用于HTTP/HTTPS目标组、TCP目标组的HTTP健康检查方式）。可选值：1~31，默认 31，其中：<url> <li>1 表示探测后返回值 1xx 代表健康。</li><li>2 表示返回 2xx 代表健康。</li><li>4 表示返回 3xx 代表健康。</li><li>8 表示返回 4xx 代表健康。</li><li>16 表示返回 5xx 代表健康。</li></url>若希望多种返回码都可代表健康，则将相应的值相加。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _httpCode 健康检查状态码（仅适用于HTTP/HTTPS目标组、TCP目标组的HTTP健康检查方式）。可选值：1~31，默认 31，其中：<url> <li>1 表示探测后返回值 1xx 代表健康。</li><li>2 表示返回 2xx 代表健康。</li><li>4 表示返回 3xx 代表健康。</li><li>8 表示返回 4xx 代表健康。</li><li>16 表示返回 5xx 代表健康。</li></url>若希望多种返回码都可代表健康，则将相应的值相加。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHttpCode(const int64_t& _httpCode);

                    /**
                     * 判断参数 HttpCode 是否已赋值
                     * @return HttpCode 是否已赋值
                     * 
                     */
                    bool HttpCodeHasBeenSet() const;

                    /**
                     * 获取健康检查域名， 其中：<ur><li>仅适用于HTTP/HTTPS目标组和TCP目标组的HTTP健康检查方式。</li><li>针对HTTP/HTTPS目标组，当使用HTTP健康检查方式时，该参数为必填项。</li></ur>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HttpCheckDomain 健康检查域名， 其中：<ur><li>仅适用于HTTP/HTTPS目标组和TCP目标组的HTTP健康检查方式。</li><li>针对HTTP/HTTPS目标组，当使用HTTP健康检查方式时，该参数为必填项。</li></ur>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHttpCheckDomain() const;

                    /**
                     * 设置健康检查域名， 其中：<ur><li>仅适用于HTTP/HTTPS目标组和TCP目标组的HTTP健康检查方式。</li><li>针对HTTP/HTTPS目标组，当使用HTTP健康检查方式时，该参数为必填项。</li></ur>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _httpCheckDomain 健康检查域名， 其中：<ur><li>仅适用于HTTP/HTTPS目标组和TCP目标组的HTTP健康检查方式。</li><li>针对HTTP/HTTPS目标组，当使用HTTP健康检查方式时，该参数为必填项。</li></ur>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHttpCheckDomain(const std::string& _httpCheckDomain);

                    /**
                     * 判断参数 HttpCheckDomain 是否已赋值
                     * @return HttpCheckDomain 是否已赋值
                     * 
                     */
                    bool HttpCheckDomainHasBeenSet() const;

                    /**
                     * 获取健康检查路径（仅适用于HTTP/HTTPS转发规则、TCP监听器的HTTP健康检查方式）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HttpCheckPath 健康检查路径（仅适用于HTTP/HTTPS转发规则、TCP监听器的HTTP健康检查方式）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHttpCheckPath() const;

                    /**
                     * 设置健康检查路径（仅适用于HTTP/HTTPS转发规则、TCP监听器的HTTP健康检查方式）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _httpCheckPath 健康检查路径（仅适用于HTTP/HTTPS转发规则、TCP监听器的HTTP健康检查方式）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHttpCheckPath(const std::string& _httpCheckPath);

                    /**
                     * 判断参数 HttpCheckPath 是否已赋值
                     * @return HttpCheckPath 是否已赋值
                     * 
                     */
                    bool HttpCheckPathHasBeenSet() const;

                    /**
                     * 获取健康检查方法（仅适用于HTTP/HTTPS转发规则、TCP监听器的HTTP健康检查方式），默认值：HEAD，可选值HEAD或GET。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HttpCheckMethod 健康检查方法（仅适用于HTTP/HTTPS转发规则、TCP监听器的HTTP健康检查方式），默认值：HEAD，可选值HEAD或GET。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHttpCheckMethod() const;

                    /**
                     * 设置健康检查方法（仅适用于HTTP/HTTPS转发规则、TCP监听器的HTTP健康检查方式），默认值：HEAD，可选值HEAD或GET。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _httpCheckMethod 健康检查方法（仅适用于HTTP/HTTPS转发规则、TCP监听器的HTTP健康检查方式），默认值：HEAD，可选值HEAD或GET。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHttpCheckMethod(const std::string& _httpCheckMethod);

                    /**
                     * 判断参数 HttpCheckMethod 是否已赋值
                     * @return HttpCheckMethod 是否已赋值
                     * 
                     */
                    bool HttpCheckMethodHasBeenSet() const;

                    /**
                     * 获取健康检查的输入格式，健康检查方式取CUSTOM时，必填此字段，可取值：HEX或TEXT，其中：<ur><li>TEXT：文本格式。</li><li>HEX：十六进制格式， SendContext和RecvContext的字符只能在0123456789ABCDEF中选取且长度必须是偶数位。</li><li>仅适用于TCP/UDP目标组。</li></ur>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContextType 健康检查的输入格式，健康检查方式取CUSTOM时，必填此字段，可取值：HEX或TEXT，其中：<ur><li>TEXT：文本格式。</li><li>HEX：十六进制格式， SendContext和RecvContext的字符只能在0123456789ABCDEF中选取且长度必须是偶数位。</li><li>仅适用于TCP/UDP目标组。</li></ur>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContextType() const;

                    /**
                     * 设置健康检查的输入格式，健康检查方式取CUSTOM时，必填此字段，可取值：HEX或TEXT，其中：<ur><li>TEXT：文本格式。</li><li>HEX：十六进制格式， SendContext和RecvContext的字符只能在0123456789ABCDEF中选取且长度必须是偶数位。</li><li>仅适用于TCP/UDP目标组。</li></ur>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contextType 健康检查的输入格式，健康检查方式取CUSTOM时，必填此字段，可取值：HEX或TEXT，其中：<ur><li>TEXT：文本格式。</li><li>HEX：十六进制格式， SendContext和RecvContext的字符只能在0123456789ABCDEF中选取且长度必须是偶数位。</li><li>仅适用于TCP/UDP目标组。</li></ur>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContextType(const std::string& _contextType);

                    /**
                     * 判断参数 ContextType 是否已赋值
                     * @return ContextType 是否已赋值
                     * 
                     */
                    bool ContextTypeHasBeenSet() const;

                    /**
                     * 获取自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查发送的请求内容，只允许ASCII可见字符，最大长度限制500。（仅适用于TCP/UDP目标组）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SendContext 自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查发送的请求内容，只允许ASCII可见字符，最大长度限制500。（仅适用于TCP/UDP目标组）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSendContext() const;

                    /**
                     * 设置自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查发送的请求内容，只允许ASCII可见字符，最大长度限制500。（仅适用于TCP/UDP目标组）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sendContext 自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查发送的请求内容，只允许ASCII可见字符，最大长度限制500。（仅适用于TCP/UDP目标组）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSendContext(const std::string& _sendContext);

                    /**
                     * 判断参数 SendContext 是否已赋值
                     * @return SendContext 是否已赋值
                     * 
                     */
                    bool SendContextHasBeenSet() const;

                    /**
                     * 获取自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查返回的结果，只允许ASCII可见字符，最大长度限制500。（仅适用于TCP/UDP目标组）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecvContext 自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查返回的结果，只允许ASCII可见字符，最大长度限制500。（仅适用于TCP/UDP目标组）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRecvContext() const;

                    /**
                     * 设置自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查返回的结果，只允许ASCII可见字符，最大长度限制500。（仅适用于TCP/UDP目标组）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recvContext 自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查返回的结果，只允许ASCII可见字符，最大长度限制500。（仅适用于TCP/UDP目标组）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRecvContext(const std::string& _recvContext);

                    /**
                     * 判断参数 RecvContext 是否已赋值
                     * @return RecvContext 是否已赋值
                     * 
                     */
                    bool RecvContextHasBeenSet() const;

                    /**
                     * 获取HTTP版本, 其中：<ur><li>健康检查协议CheckType的值取HTTP时，必传此字段。</li><li>支持配置选项：HTTP/1.0, HTTP/1.1。</li><li>仅适用于TCP目标组。</li></ur>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HttpVersion HTTP版本, 其中：<ur><li>健康检查协议CheckType的值取HTTP时，必传此字段。</li><li>支持配置选项：HTTP/1.0, HTTP/1.1。</li><li>仅适用于TCP目标组。</li></ur>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHttpVersion() const;

                    /**
                     * 设置HTTP版本, 其中：<ur><li>健康检查协议CheckType的值取HTTP时，必传此字段。</li><li>支持配置选项：HTTP/1.0, HTTP/1.1。</li><li>仅适用于TCP目标组。</li></ur>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _httpVersion HTTP版本, 其中：<ur><li>健康检查协议CheckType的值取HTTP时，必传此字段。</li><li>支持配置选项：HTTP/1.0, HTTP/1.1。</li><li>仅适用于TCP目标组。</li></ur>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHttpVersion(const std::string& _httpVersion);

                    /**
                     * 判断参数 HttpVersion 是否已赋值
                     * @return HttpVersion 是否已赋值
                     * 
                     */
                    bool HttpVersionHasBeenSet() const;

                    /**
                     * 获取GRPC健康检查状态码（仅适用于后端转发协议为GRPC的目标组）。默认值为 12，可输入值为数值、多个数值、或者范围，例如 20 或 20,25 或 0-99。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtendedCode GRPC健康检查状态码（仅适用于后端转发协议为GRPC的目标组）。默认值为 12，可输入值为数值、多个数值、或者范围，例如 20 或 20,25 或 0-99。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExtendedCode() const;

                    /**
                     * 设置GRPC健康检查状态码（仅适用于后端转发协议为GRPC的目标组）。默认值为 12，可输入值为数值、多个数值、或者范围，例如 20 或 20,25 或 0-99。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extendedCode GRPC健康检查状态码（仅适用于后端转发协议为GRPC的目标组）。默认值为 12，可输入值为数值、多个数值、或者范围，例如 20 或 20,25 或 0-99。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtendedCode(const std::string& _extendedCode);

                    /**
                     * 判断参数 ExtendedCode 是否已赋值
                     * @return ExtendedCode 是否已赋值
                     * 
                     */
                    bool ExtendedCodeHasBeenSet() const;

                private:

                    /**
                     * 是否开启健康检查。
                     */
                    bool m_healthSwitch;
                    bool m_healthSwitchHasBeenSet;

                    /**
                     * 健康检查方式， 其中仅V2新版目标组类型支持该参数， 支持取值 TCP | HTTP | HTTPS | PING | CUSTOM，其中:
<ur><li>当目标组后端转发协议为TCP时， 健康检查方式支持 TCP/HTTP/CUSTOM， 默认为TCP。</li><li>当目标组后端转发协议为UDP时， 健康检查方式支持 PING/CUSTOM，默认为PING。</li><li>当目标组后端转发协议为HTTP时， 健康检查方式支持 HTTP/TCP， 默认为HTTP。</li><li>当目标组后端转发协议为HTTPS时， 健康检查方式支持 HTTPS/TCP， 默认为HTTPS。</li><li>当目标组后端转发协议为GRPC时， 健康检查方式支持GRPC/TCP， 默认为GRPC。</li></ur>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 自定义探测相关参数。健康检查端口，默认为后端服务的端口，除非您希望指定特定端口，否则建议留空。（仅适用于TCP/UDP目标组）。

                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 健康检查超时时间。 默认为2秒。 可配置范围：2 - 30秒。
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * 检测间隔时间。 默认为5秒。 可配置范围：2 - 300秒。
                     */
                    int64_t m_gapTime;
                    bool m_gapTimeHasBeenSet;

                    /**
                     * 检测健康阈值。 默认为3秒。 可配置范围：2 - 10次。
                     */
                    int64_t m_goodLimit;
                    bool m_goodLimitHasBeenSet;

                    /**
                     * 检测不健康阈值。 默认为3秒。 可配置范围：2 - 10次。
                     */
                    int64_t m_badLimit;
                    bool m_badLimitHasBeenSet;

                    /**
                     * 目标组下的所有rs的探测包是否开启巨帧。默认开启。仅GWLB类型目标组支持该参数。
                     */
                    bool m_jumboFrame;
                    bool m_jumboFrameHasBeenSet;

                    /**
                     * 健康检查状态码（仅适用于HTTP/HTTPS目标组、TCP目标组的HTTP健康检查方式）。可选值：1~31，默认 31，其中：<url> <li>1 表示探测后返回值 1xx 代表健康。</li><li>2 表示返回 2xx 代表健康。</li><li>4 表示返回 3xx 代表健康。</li><li>8 表示返回 4xx 代表健康。</li><li>16 表示返回 5xx 代表健康。</li></url>若希望多种返回码都可代表健康，则将相应的值相加。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_httpCode;
                    bool m_httpCodeHasBeenSet;

                    /**
                     * 健康检查域名， 其中：<ur><li>仅适用于HTTP/HTTPS目标组和TCP目标组的HTTP健康检查方式。</li><li>针对HTTP/HTTPS目标组，当使用HTTP健康检查方式时，该参数为必填项。</li></ur>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_httpCheckDomain;
                    bool m_httpCheckDomainHasBeenSet;

                    /**
                     * 健康检查路径（仅适用于HTTP/HTTPS转发规则、TCP监听器的HTTP健康检查方式）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_httpCheckPath;
                    bool m_httpCheckPathHasBeenSet;

                    /**
                     * 健康检查方法（仅适用于HTTP/HTTPS转发规则、TCP监听器的HTTP健康检查方式），默认值：HEAD，可选值HEAD或GET。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_httpCheckMethod;
                    bool m_httpCheckMethodHasBeenSet;

                    /**
                     * 健康检查的输入格式，健康检查方式取CUSTOM时，必填此字段，可取值：HEX或TEXT，其中：<ur><li>TEXT：文本格式。</li><li>HEX：十六进制格式， SendContext和RecvContext的字符只能在0123456789ABCDEF中选取且长度必须是偶数位。</li><li>仅适用于TCP/UDP目标组。</li></ur>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_contextType;
                    bool m_contextTypeHasBeenSet;

                    /**
                     * 自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查发送的请求内容，只允许ASCII可见字符，最大长度限制500。（仅适用于TCP/UDP目标组）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sendContext;
                    bool m_sendContextHasBeenSet;

                    /**
                     * 自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查返回的结果，只允许ASCII可见字符，最大长度限制500。（仅适用于TCP/UDP目标组）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_recvContext;
                    bool m_recvContextHasBeenSet;

                    /**
                     * HTTP版本, 其中：<ur><li>健康检查协议CheckType的值取HTTP时，必传此字段。</li><li>支持配置选项：HTTP/1.0, HTTP/1.1。</li><li>仅适用于TCP目标组。</li></ur>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_httpVersion;
                    bool m_httpVersionHasBeenSet;

                    /**
                     * GRPC健康检查状态码（仅适用于后端转发协议为GRPC的目标组）。默认值为 12，可输入值为数值、多个数值、或者范围，例如 20 或 20,25 或 0-99。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extendedCode;
                    bool m_extendedCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_TARGETGROUPHEALTHCHECK_H_
