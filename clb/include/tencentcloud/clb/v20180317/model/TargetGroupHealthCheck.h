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
                     * 获取<p>是否开启健康检查。</p>
                     * @return HealthSwitch <p>是否开启健康检查。</p>
                     * 
                     */
                    bool GetHealthSwitch() const;

                    /**
                     * 设置<p>是否开启健康检查。</p>
                     * @param _healthSwitch <p>是否开启健康检查。</p>
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
                     * 获取<p>健康检查方式， 其中仅V2新版目标组类型支持该参数， 支持取值 TCP | HTTP | HTTPS | PING | CUSTOM，其中:<br><ur><li>当目标组后端转发协议为TCP时， 健康检查方式支持 TCP/HTTP/CUSTOM， 默认为TCP。</li><li>当目标组后端转发协议为UDP时， 健康检查方式支持 PING/CUSTOM，默认为PING。</li><li>当目标组后端转发协议为HTTP时， 健康检查方式支持 HTTP/TCP， 默认为HTTP。</li><li>当目标组后端转发协议为HTTPS时， 健康检查方式支持 HTTPS/TCP， 默认为HTTPS。</li><li>当目标组后端转发协议为GRPC时， 健康检查方式支持GRPC/TCP， 默认为GRPC。</li></ur></p>
                     * @return Protocol <p>健康检查方式， 其中仅V2新版目标组类型支持该参数， 支持取值 TCP | HTTP | HTTPS | PING | CUSTOM，其中:<br><ur><li>当目标组后端转发协议为TCP时， 健康检查方式支持 TCP/HTTP/CUSTOM， 默认为TCP。</li><li>当目标组后端转发协议为UDP时， 健康检查方式支持 PING/CUSTOM，默认为PING。</li><li>当目标组后端转发协议为HTTP时， 健康检查方式支持 HTTP/TCP， 默认为HTTP。</li><li>当目标组后端转发协议为HTTPS时， 健康检查方式支持 HTTPS/TCP， 默认为HTTPS。</li><li>当目标组后端转发协议为GRPC时， 健康检查方式支持GRPC/TCP， 默认为GRPC。</li></ur></p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>健康检查方式， 其中仅V2新版目标组类型支持该参数， 支持取值 TCP | HTTP | HTTPS | PING | CUSTOM，其中:<br><ur><li>当目标组后端转发协议为TCP时， 健康检查方式支持 TCP/HTTP/CUSTOM， 默认为TCP。</li><li>当目标组后端转发协议为UDP时， 健康检查方式支持 PING/CUSTOM，默认为PING。</li><li>当目标组后端转发协议为HTTP时， 健康检查方式支持 HTTP/TCP， 默认为HTTP。</li><li>当目标组后端转发协议为HTTPS时， 健康检查方式支持 HTTPS/TCP， 默认为HTTPS。</li><li>当目标组后端转发协议为GRPC时， 健康检查方式支持GRPC/TCP， 默认为GRPC。</li></ur></p>
                     * @param _protocol <p>健康检查方式， 其中仅V2新版目标组类型支持该参数， 支持取值 TCP | HTTP | HTTPS | PING | CUSTOM，其中:<br><ur><li>当目标组后端转发协议为TCP时， 健康检查方式支持 TCP/HTTP/CUSTOM， 默认为TCP。</li><li>当目标组后端转发协议为UDP时， 健康检查方式支持 PING/CUSTOM，默认为PING。</li><li>当目标组后端转发协议为HTTP时， 健康检查方式支持 HTTP/TCP， 默认为HTTP。</li><li>当目标组后端转发协议为HTTPS时， 健康检查方式支持 HTTPS/TCP， 默认为HTTPS。</li><li>当目标组后端转发协议为GRPC时， 健康检查方式支持GRPC/TCP， 默认为GRPC。</li></ur></p>
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
                     * 获取<p>自定义探测相关参数。健康检查端口，默认为后端服务的端口，除非您希望指定特定端口，否则建议留空。（仅适用于TCP/UDP目标组）。</p>
                     * @return Port <p>自定义探测相关参数。健康检查端口，默认为后端服务的端口，除非您希望指定特定端口，否则建议留空。（仅适用于TCP/UDP目标组）。</p>
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置<p>自定义探测相关参数。健康检查端口，默认为后端服务的端口，除非您希望指定特定端口，否则建议留空。（仅适用于TCP/UDP目标组）。</p>
                     * @param _port <p>自定义探测相关参数。健康检查端口，默认为后端服务的端口，除非您希望指定特定端口，否则建议留空。（仅适用于TCP/UDP目标组）。</p>
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
                     * 获取<p>健康检查超时时间。 </p><p>取值范围：[2, 60]</p><p>单位：秒</p><p>默认值：2</p><p>响应超时时间要小于检查间隔时间。</p>
                     * @return Timeout <p>健康检查超时时间。 </p><p>取值范围：[2, 60]</p><p>单位：秒</p><p>默认值：2</p><p>响应超时时间要小于检查间隔时间。</p>
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置<p>健康检查超时时间。 </p><p>取值范围：[2, 60]</p><p>单位：秒</p><p>默认值：2</p><p>响应超时时间要小于检查间隔时间。</p>
                     * @param _timeout <p>健康检查超时时间。 </p><p>取值范围：[2, 60]</p><p>单位：秒</p><p>默认值：2</p><p>响应超时时间要小于检查间隔时间。</p>
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
                     * 获取<p>检测间隔时间。</p><p>取值范围：[1, 600]</p><p>单位：秒</p><p>默认值：5</p>
                     * @return GapTime <p>检测间隔时间。</p><p>取值范围：[1, 600]</p><p>单位：秒</p><p>默认值：5</p>
                     * 
                     */
                    int64_t GetGapTime() const;

                    /**
                     * 设置<p>检测间隔时间。</p><p>取值范围：[1, 600]</p><p>单位：秒</p><p>默认值：5</p>
                     * @param _gapTime <p>检测间隔时间。</p><p>取值范围：[1, 600]</p><p>单位：秒</p><p>默认值：5</p>
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
                     * 获取<p>检测健康阈值。</p><p>取值范围：[2, 10]</p><p>单位：次</p><p>默认值：3</p>
                     * @return GoodLimit <p>检测健康阈值。</p><p>取值范围：[2, 10]</p><p>单位：次</p><p>默认值：3</p>
                     * 
                     */
                    int64_t GetGoodLimit() const;

                    /**
                     * 设置<p>检测健康阈值。</p><p>取值范围：[2, 10]</p><p>单位：次</p><p>默认值：3</p>
                     * @param _goodLimit <p>检测健康阈值。</p><p>取值范围：[2, 10]</p><p>单位：次</p><p>默认值：3</p>
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
                     * 获取<p>检测不健康阈值。</p><p>取值范围：[2, 10]</p><p>单位：次</p><p>默认值：3</p>
                     * @return BadLimit <p>检测不健康阈值。</p><p>取值范围：[2, 10]</p><p>单位：次</p><p>默认值：3</p>
                     * 
                     */
                    int64_t GetBadLimit() const;

                    /**
                     * 设置<p>检测不健康阈值。</p><p>取值范围：[2, 10]</p><p>单位：次</p><p>默认值：3</p>
                     * @param _badLimit <p>检测不健康阈值。</p><p>取值范围：[2, 10]</p><p>单位：次</p><p>默认值：3</p>
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
                     * 获取<p>目标组下的所有rs的探测包是否开启巨帧。默认开启。仅GWLB类型目标组支持该参数。</p>
                     * @return JumboFrame <p>目标组下的所有rs的探测包是否开启巨帧。默认开启。仅GWLB类型目标组支持该参数。</p>
                     * 
                     */
                    bool GetJumboFrame() const;

                    /**
                     * 设置<p>目标组下的所有rs的探测包是否开启巨帧。默认开启。仅GWLB类型目标组支持该参数。</p>
                     * @param _jumboFrame <p>目标组下的所有rs的探测包是否开启巨帧。默认开启。仅GWLB类型目标组支持该参数。</p>
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
                     * 获取<p>健康检查状态码（仅适用于HTTP/HTTPS目标组、TCP目标组的HTTP健康检查方式）。可选值：1~31，默认 31，其中：<url> <li>1 表示探测后返回值 1xx 代表健康。</li><li>2 表示返回 2xx 代表健康。</li><li>4 表示返回 3xx 代表健康。</li><li>8 表示返回 4xx 代表健康。</li><li>16 表示返回 5xx 代表健康。</li></url>若希望多种返回码都可代表健康，则将相应的值相加。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HttpCode <p>健康检查状态码（仅适用于HTTP/HTTPS目标组、TCP目标组的HTTP健康检查方式）。可选值：1~31，默认 31，其中：<url> <li>1 表示探测后返回值 1xx 代表健康。</li><li>2 表示返回 2xx 代表健康。</li><li>4 表示返回 3xx 代表健康。</li><li>8 表示返回 4xx 代表健康。</li><li>16 表示返回 5xx 代表健康。</li></url>若希望多种返回码都可代表健康，则将相应的值相加。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetHttpCode() const;

                    /**
                     * 设置<p>健康检查状态码（仅适用于HTTP/HTTPS目标组、TCP目标组的HTTP健康检查方式）。可选值：1~31，默认 31，其中：<url> <li>1 表示探测后返回值 1xx 代表健康。</li><li>2 表示返回 2xx 代表健康。</li><li>4 表示返回 3xx 代表健康。</li><li>8 表示返回 4xx 代表健康。</li><li>16 表示返回 5xx 代表健康。</li></url>若希望多种返回码都可代表健康，则将相应的值相加。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _httpCode <p>健康检查状态码（仅适用于HTTP/HTTPS目标组、TCP目标组的HTTP健康检查方式）。可选值：1~31，默认 31，其中：<url> <li>1 表示探测后返回值 1xx 代表健康。</li><li>2 表示返回 2xx 代表健康。</li><li>4 表示返回 3xx 代表健康。</li><li>8 表示返回 4xx 代表健康。</li><li>16 表示返回 5xx 代表健康。</li></url>若希望多种返回码都可代表健康，则将相应的值相加。</p>
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
                     * 获取<p>健康检查域名， 其中：<ur><li>仅适用于HTTP/HTTPS目标组和TCP目标组的HTTP健康检查方式。</li><li>针对HTTP/HTTPS目标组，当使用HTTP健康检查方式时，该参数为必填项。</li></ur></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HttpCheckDomain <p>健康检查域名， 其中：<ur><li>仅适用于HTTP/HTTPS目标组和TCP目标组的HTTP健康检查方式。</li><li>针对HTTP/HTTPS目标组，当使用HTTP健康检查方式时，该参数为必填项。</li></ur></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHttpCheckDomain() const;

                    /**
                     * 设置<p>健康检查域名， 其中：<ur><li>仅适用于HTTP/HTTPS目标组和TCP目标组的HTTP健康检查方式。</li><li>针对HTTP/HTTPS目标组，当使用HTTP健康检查方式时，该参数为必填项。</li></ur></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _httpCheckDomain <p>健康检查域名， 其中：<ur><li>仅适用于HTTP/HTTPS目标组和TCP目标组的HTTP健康检查方式。</li><li>针对HTTP/HTTPS目标组，当使用HTTP健康检查方式时，该参数为必填项。</li></ur></p>
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
                     * 获取<p>健康检查路径（仅适用于HTTP/HTTPS转发规则、TCP监听器的HTTP健康检查方式）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HttpCheckPath <p>健康检查路径（仅适用于HTTP/HTTPS转发规则、TCP监听器的HTTP健康检查方式）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHttpCheckPath() const;

                    /**
                     * 设置<p>健康检查路径（仅适用于HTTP/HTTPS转发规则、TCP监听器的HTTP健康检查方式）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _httpCheckPath <p>健康检查路径（仅适用于HTTP/HTTPS转发规则、TCP监听器的HTTP健康检查方式）。</p>
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
                     * 获取<p>健康检查方法（仅适用于HTTP/HTTPS转发规则、TCP监听器的HTTP健康检查方式），默认值：HEAD，可选值HEAD或GET。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HttpCheckMethod <p>健康检查方法（仅适用于HTTP/HTTPS转发规则、TCP监听器的HTTP健康检查方式），默认值：HEAD，可选值HEAD或GET。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHttpCheckMethod() const;

                    /**
                     * 设置<p>健康检查方法（仅适用于HTTP/HTTPS转发规则、TCP监听器的HTTP健康检查方式），默认值：HEAD，可选值HEAD或GET。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _httpCheckMethod <p>健康检查方法（仅适用于HTTP/HTTPS转发规则、TCP监听器的HTTP健康检查方式），默认值：HEAD，可选值HEAD或GET。</p>
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
                     * 获取<p>健康检查的输入格式，健康检查方式取CUSTOM时，必填此字段，可取值：HEX或TEXT，其中：<ur><li>TEXT：文本格式。</li><li>HEX：十六进制格式， SendContext和RecvContext的字符只能在0123456789ABCDEF中选取且长度必须是偶数位。</li><li>仅适用于TCP/UDP目标组。</li></ur></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContextType <p>健康检查的输入格式，健康检查方式取CUSTOM时，必填此字段，可取值：HEX或TEXT，其中：<ur><li>TEXT：文本格式。</li><li>HEX：十六进制格式， SendContext和RecvContext的字符只能在0123456789ABCDEF中选取且长度必须是偶数位。</li><li>仅适用于TCP/UDP目标组。</li></ur></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContextType() const;

                    /**
                     * 设置<p>健康检查的输入格式，健康检查方式取CUSTOM时，必填此字段，可取值：HEX或TEXT，其中：<ur><li>TEXT：文本格式。</li><li>HEX：十六进制格式， SendContext和RecvContext的字符只能在0123456789ABCDEF中选取且长度必须是偶数位。</li><li>仅适用于TCP/UDP目标组。</li></ur></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contextType <p>健康检查的输入格式，健康检查方式取CUSTOM时，必填此字段，可取值：HEX或TEXT，其中：<ur><li>TEXT：文本格式。</li><li>HEX：十六进制格式， SendContext和RecvContext的字符只能在0123456789ABCDEF中选取且长度必须是偶数位。</li><li>仅适用于TCP/UDP目标组。</li></ur></p>
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
                     * 获取<p>自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查发送的请求内容，只允许ASCII可见字符，最大长度限制500。（仅适用于TCP/UDP目标组）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SendContext <p>自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查发送的请求内容，只允许ASCII可见字符，最大长度限制500。（仅适用于TCP/UDP目标组）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSendContext() const;

                    /**
                     * 设置<p>自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查发送的请求内容，只允许ASCII可见字符，最大长度限制500。（仅适用于TCP/UDP目标组）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sendContext <p>自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查发送的请求内容，只允许ASCII可见字符，最大长度限制500。（仅适用于TCP/UDP目标组）。</p>
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
                     * 获取<p>自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查返回的结果，只允许ASCII可见字符，最大长度限制500。（仅适用于TCP/UDP目标组）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecvContext <p>自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查返回的结果，只允许ASCII可见字符，最大长度限制500。（仅适用于TCP/UDP目标组）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRecvContext() const;

                    /**
                     * 设置<p>自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查返回的结果，只允许ASCII可见字符，最大长度限制500。（仅适用于TCP/UDP目标组）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recvContext <p>自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查返回的结果，只允许ASCII可见字符，最大长度限制500。（仅适用于TCP/UDP目标组）。</p>
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
                     * 获取<p>HTTP版本, 其中：<ur><li>健康检查协议CheckType的值取HTTP时，必传此字段。</li><li>支持配置选项：HTTP/1.0, HTTP/1.1。</li><li>仅适用于TCP目标组。</li></ur></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HttpVersion <p>HTTP版本, 其中：<ur><li>健康检查协议CheckType的值取HTTP时，必传此字段。</li><li>支持配置选项：HTTP/1.0, HTTP/1.1。</li><li>仅适用于TCP目标组。</li></ur></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHttpVersion() const;

                    /**
                     * 设置<p>HTTP版本, 其中：<ur><li>健康检查协议CheckType的值取HTTP时，必传此字段。</li><li>支持配置选项：HTTP/1.0, HTTP/1.1。</li><li>仅适用于TCP目标组。</li></ur></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _httpVersion <p>HTTP版本, 其中：<ur><li>健康检查协议CheckType的值取HTTP时，必传此字段。</li><li>支持配置选项：HTTP/1.0, HTTP/1.1。</li><li>仅适用于TCP目标组。</li></ur></p>
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
                     * 获取<p>GRPC健康检查状态码（仅适用于后端转发协议为GRPC的目标组）。默认值为 12，可输入值为数值、多个数值、或者范围，例如 20 或 20,25 或 0-99。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtendedCode <p>GRPC健康检查状态码（仅适用于后端转发协议为GRPC的目标组）。默认值为 12，可输入值为数值、多个数值、或者范围，例如 20 或 20,25 或 0-99。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExtendedCode() const;

                    /**
                     * 设置<p>GRPC健康检查状态码（仅适用于后端转发协议为GRPC的目标组）。默认值为 12，可输入值为数值、多个数值、或者范围，例如 20 或 20,25 或 0-99。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extendedCode <p>GRPC健康检查状态码（仅适用于后端转发协议为GRPC的目标组）。默认值为 12，可输入值为数值、多个数值、或者范围，例如 20 或 20,25 或 0-99。</p>
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
                     * <p>是否开启健康检查。</p>
                     */
                    bool m_healthSwitch;
                    bool m_healthSwitchHasBeenSet;

                    /**
                     * <p>健康检查方式， 其中仅V2新版目标组类型支持该参数， 支持取值 TCP | HTTP | HTTPS | PING | CUSTOM，其中:<br><ur><li>当目标组后端转发协议为TCP时， 健康检查方式支持 TCP/HTTP/CUSTOM， 默认为TCP。</li><li>当目标组后端转发协议为UDP时， 健康检查方式支持 PING/CUSTOM，默认为PING。</li><li>当目标组后端转发协议为HTTP时， 健康检查方式支持 HTTP/TCP， 默认为HTTP。</li><li>当目标组后端转发协议为HTTPS时， 健康检查方式支持 HTTPS/TCP， 默认为HTTPS。</li><li>当目标组后端转发协议为GRPC时， 健康检查方式支持GRPC/TCP， 默认为GRPC。</li></ur></p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>自定义探测相关参数。健康检查端口，默认为后端服务的端口，除非您希望指定特定端口，否则建议留空。（仅适用于TCP/UDP目标组）。</p>
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>健康检查超时时间。 </p><p>取值范围：[2, 60]</p><p>单位：秒</p><p>默认值：2</p><p>响应超时时间要小于检查间隔时间。</p>
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>检测间隔时间。</p><p>取值范围：[1, 600]</p><p>单位：秒</p><p>默认值：5</p>
                     */
                    int64_t m_gapTime;
                    bool m_gapTimeHasBeenSet;

                    /**
                     * <p>检测健康阈值。</p><p>取值范围：[2, 10]</p><p>单位：次</p><p>默认值：3</p>
                     */
                    int64_t m_goodLimit;
                    bool m_goodLimitHasBeenSet;

                    /**
                     * <p>检测不健康阈值。</p><p>取值范围：[2, 10]</p><p>单位：次</p><p>默认值：3</p>
                     */
                    int64_t m_badLimit;
                    bool m_badLimitHasBeenSet;

                    /**
                     * <p>目标组下的所有rs的探测包是否开启巨帧。默认开启。仅GWLB类型目标组支持该参数。</p>
                     */
                    bool m_jumboFrame;
                    bool m_jumboFrameHasBeenSet;

                    /**
                     * <p>健康检查状态码（仅适用于HTTP/HTTPS目标组、TCP目标组的HTTP健康检查方式）。可选值：1~31，默认 31，其中：<url> <li>1 表示探测后返回值 1xx 代表健康。</li><li>2 表示返回 2xx 代表健康。</li><li>4 表示返回 3xx 代表健康。</li><li>8 表示返回 4xx 代表健康。</li><li>16 表示返回 5xx 代表健康。</li></url>若希望多种返回码都可代表健康，则将相应的值相加。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_httpCode;
                    bool m_httpCodeHasBeenSet;

                    /**
                     * <p>健康检查域名， 其中：<ur><li>仅适用于HTTP/HTTPS目标组和TCP目标组的HTTP健康检查方式。</li><li>针对HTTP/HTTPS目标组，当使用HTTP健康检查方式时，该参数为必填项。</li></ur></p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_httpCheckDomain;
                    bool m_httpCheckDomainHasBeenSet;

                    /**
                     * <p>健康检查路径（仅适用于HTTP/HTTPS转发规则、TCP监听器的HTTP健康检查方式）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_httpCheckPath;
                    bool m_httpCheckPathHasBeenSet;

                    /**
                     * <p>健康检查方法（仅适用于HTTP/HTTPS转发规则、TCP监听器的HTTP健康检查方式），默认值：HEAD，可选值HEAD或GET。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_httpCheckMethod;
                    bool m_httpCheckMethodHasBeenSet;

                    /**
                     * <p>健康检查的输入格式，健康检查方式取CUSTOM时，必填此字段，可取值：HEX或TEXT，其中：<ur><li>TEXT：文本格式。</li><li>HEX：十六进制格式， SendContext和RecvContext的字符只能在0123456789ABCDEF中选取且长度必须是偶数位。</li><li>仅适用于TCP/UDP目标组。</li></ur></p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_contextType;
                    bool m_contextTypeHasBeenSet;

                    /**
                     * <p>自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查发送的请求内容，只允许ASCII可见字符，最大长度限制500。（仅适用于TCP/UDP目标组）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sendContext;
                    bool m_sendContextHasBeenSet;

                    /**
                     * <p>自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查返回的结果，只允许ASCII可见字符，最大长度限制500。（仅适用于TCP/UDP目标组）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_recvContext;
                    bool m_recvContextHasBeenSet;

                    /**
                     * <p>HTTP版本, 其中：<ur><li>健康检查协议CheckType的值取HTTP时，必传此字段。</li><li>支持配置选项：HTTP/1.0, HTTP/1.1。</li><li>仅适用于TCP目标组。</li></ur></p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_httpVersion;
                    bool m_httpVersionHasBeenSet;

                    /**
                     * <p>GRPC健康检查状态码（仅适用于后端转发协议为GRPC的目标组）。默认值为 12，可输入值为数值、多个数值、或者范围，例如 20 或 20,25 或 0-99。</p>
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
