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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_HEALTHCHECK_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_HEALTHCHECK_H_

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
                * 健康检查信息。
注意，自定义探测相关参数 目前只有少量区域灰度支持。
                */
                class HealthCheck : public AbstractModel
                {
                public:
                    HealthCheck();
                    ~HealthCheck() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启健康检查：1（开启）、0（关闭）。
默认为开启。
                     * @return HealthSwitch 是否开启健康检查：1（开启）、0（关闭）。
默认为开启。
                     * 
                     */
                    int64_t GetHealthSwitch() const;

                    /**
                     * 设置是否开启健康检查：1（开启）、0（关闭）。
默认为开启。
                     * @param _healthSwitch 是否开启健康检查：1（开启）、0（关闭）。
默认为开启。
                     * 
                     */
                    void SetHealthSwitch(const int64_t& _healthSwitch);

                    /**
                     * 判断参数 HealthSwitch 是否已赋值
                     * @return HealthSwitch 是否已赋值
                     * 
                     */
                    bool HealthSwitchHasBeenSet() const;

                    /**
                     * 获取健康检查的响应超时时间，可选值：2~60，默认值：2，单位：秒。响应超时时间要小于检查间隔时间。
                     * @return TimeOut 健康检查的响应超时时间，可选值：2~60，默认值：2，单位：秒。响应超时时间要小于检查间隔时间。
                     * 
                     */
                    int64_t GetTimeOut() const;

                    /**
                     * 设置健康检查的响应超时时间，可选值：2~60，默认值：2，单位：秒。响应超时时间要小于检查间隔时间。
                     * @param _timeOut 健康检查的响应超时时间，可选值：2~60，默认值：2，单位：秒。响应超时时间要小于检查间隔时间。
                     * 
                     */
                    void SetTimeOut(const int64_t& _timeOut);

                    /**
                     * 判断参数 TimeOut 是否已赋值
                     * @return TimeOut 是否已赋值
                     * 
                     */
                    bool TimeOutHasBeenSet() const;

                    /**
                     * 获取健康检查探测间隔时间，默认值：5，IPv4 CLB实例的取值范围为：2-300，IPv6 CLB 实例的取值范围为：5-300。单位：秒。
说明：部分老旧 IPv4 CLB实例的取值范围为：5-300。
                     * @return IntervalTime 健康检查探测间隔时间，默认值：5，IPv4 CLB实例的取值范围为：2-300，IPv6 CLB 实例的取值范围为：5-300。单位：秒。
说明：部分老旧 IPv4 CLB实例的取值范围为：5-300。
                     * 
                     */
                    int64_t GetIntervalTime() const;

                    /**
                     * 设置健康检查探测间隔时间，默认值：5，IPv4 CLB实例的取值范围为：2-300，IPv6 CLB 实例的取值范围为：5-300。单位：秒。
说明：部分老旧 IPv4 CLB实例的取值范围为：5-300。
                     * @param _intervalTime 健康检查探测间隔时间，默认值：5，IPv4 CLB实例的取值范围为：2-300，IPv6 CLB 实例的取值范围为：5-300。单位：秒。
说明：部分老旧 IPv4 CLB实例的取值范围为：5-300。
                     * 
                     */
                    void SetIntervalTime(const int64_t& _intervalTime);

                    /**
                     * 判断参数 IntervalTime 是否已赋值
                     * @return IntervalTime 是否已赋值
                     * 
                     */
                    bool IntervalTimeHasBeenSet() const;

                    /**
                     * 获取健康阈值，默认值：3，表示当连续探测三次健康则表示该转发正常，可选值：2~10，单位：次。
                     * @return HealthNum 健康阈值，默认值：3，表示当连续探测三次健康则表示该转发正常，可选值：2~10，单位：次。
                     * 
                     */
                    int64_t GetHealthNum() const;

                    /**
                     * 设置健康阈值，默认值：3，表示当连续探测三次健康则表示该转发正常，可选值：2~10，单位：次。
                     * @param _healthNum 健康阈值，默认值：3，表示当连续探测三次健康则表示该转发正常，可选值：2~10，单位：次。
                     * 
                     */
                    void SetHealthNum(const int64_t& _healthNum);

                    /**
                     * 判断参数 HealthNum 是否已赋值
                     * @return HealthNum 是否已赋值
                     * 
                     */
                    bool HealthNumHasBeenSet() const;

                    /**
                     * 获取不健康阈值，默认值：3，表示当连续探测三次不健康则表示该转发异常，可选值：2~10，单位：次。
                     * @return UnHealthNum 不健康阈值，默认值：3，表示当连续探测三次不健康则表示该转发异常，可选值：2~10，单位：次。
                     * 
                     */
                    int64_t GetUnHealthNum() const;

                    /**
                     * 设置不健康阈值，默认值：3，表示当连续探测三次不健康则表示该转发异常，可选值：2~10，单位：次。
                     * @param _unHealthNum 不健康阈值，默认值：3，表示当连续探测三次不健康则表示该转发异常，可选值：2~10，单位：次。
                     * 
                     */
                    void SetUnHealthNum(const int64_t& _unHealthNum);

                    /**
                     * 判断参数 UnHealthNum 是否已赋值
                     * @return UnHealthNum 是否已赋值
                     * 
                     */
                    bool UnHealthNumHasBeenSet() const;

                    /**
                     * 获取健康检查状态码（仅适用于HTTP/HTTPS转发规则、TCP监听器的HTTP健康检查方式）。可选值：1~31，默认 31。
1 表示探测后返回值 1xx 代表健康，2 表示返回 2xx 代表健康，4 表示返回 3xx 代表健康，8 表示返回 4xx 代表健康，16 表示返回 5xx 代表健康。若希望多种返回码都可代表健康，则将相应的值相加。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HttpCode 健康检查状态码（仅适用于HTTP/HTTPS转发规则、TCP监听器的HTTP健康检查方式）。可选值：1~31，默认 31。
1 表示探测后返回值 1xx 代表健康，2 表示返回 2xx 代表健康，4 表示返回 3xx 代表健康，8 表示返回 4xx 代表健康，16 表示返回 5xx 代表健康。若希望多种返回码都可代表健康，则将相应的值相加。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetHttpCode() const;

                    /**
                     * 设置健康检查状态码（仅适用于HTTP/HTTPS转发规则、TCP监听器的HTTP健康检查方式）。可选值：1~31，默认 31。
1 表示探测后返回值 1xx 代表健康，2 表示返回 2xx 代表健康，4 表示返回 3xx 代表健康，8 表示返回 4xx 代表健康，16 表示返回 5xx 代表健康。若希望多种返回码都可代表健康，则将相应的值相加。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _httpCode 健康检查状态码（仅适用于HTTP/HTTPS转发规则、TCP监听器的HTTP健康检查方式）。可选值：1~31，默认 31。
1 表示探测后返回值 1xx 代表健康，2 表示返回 2xx 代表健康，4 表示返回 3xx 代表健康，8 表示返回 4xx 代表健康，16 表示返回 5xx 代表健康。若希望多种返回码都可代表健康，则将相应的值相加。
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
                     * 获取健康检查域名，将在HTTP协议 Host 头字段中携带。（仅适用于HTTP/HTTPS监听器和TCP监听器的HTTP健康检查方式。针对TCP监听器，当使用HTTP健康检查方式时，该参数为必填项）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HttpCheckDomain 健康检查域名，将在HTTP协议 Host 头字段中携带。（仅适用于HTTP/HTTPS监听器和TCP监听器的HTTP健康检查方式。针对TCP监听器，当使用HTTP健康检查方式时，该参数为必填项）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHttpCheckDomain() const;

                    /**
                     * 设置健康检查域名，将在HTTP协议 Host 头字段中携带。（仅适用于HTTP/HTTPS监听器和TCP监听器的HTTP健康检查方式。针对TCP监听器，当使用HTTP健康检查方式时，该参数为必填项）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _httpCheckDomain 健康检查域名，将在HTTP协议 Host 头字段中携带。（仅适用于HTTP/HTTPS监听器和TCP监听器的HTTP健康检查方式。针对TCP监听器，当使用HTTP健康检查方式时，该参数为必填项）。
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
                     * 获取自定义探测相关参数。健康检查端口，默认为后端服务的端口，除非您希望指定特定端口，否则建议留空。传参数值-1可恢复默认设置。（仅适用于TCP/UDP监听器）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckPort 自定义探测相关参数。健康检查端口，默认为后端服务的端口，除非您希望指定特定端口，否则建议留空。传参数值-1可恢复默认设置。（仅适用于TCP/UDP监听器）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCheckPort() const;

                    /**
                     * 设置自定义探测相关参数。健康检查端口，默认为后端服务的端口，除非您希望指定特定端口，否则建议留空。传参数值-1可恢复默认设置。（仅适用于TCP/UDP监听器）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _checkPort 自定义探测相关参数。健康检查端口，默认为后端服务的端口，除非您希望指定特定端口，否则建议留空。传参数值-1可恢复默认设置。（仅适用于TCP/UDP监听器）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCheckPort(const int64_t& _checkPort);

                    /**
                     * 判断参数 CheckPort 是否已赋值
                     * @return CheckPort 是否已赋值
                     * 
                     */
                    bool CheckPortHasBeenSet() const;

                    /**
                     * 获取自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查的输入格式，可取值：HEX或TEXT；取值为HEX时，SendContext和RecvContext的字符只能在0123456789ABCDEF中选取且长度必须是偶数位。（仅适用于TCP/UDP监听器）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContextType 自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查的输入格式，可取值：HEX或TEXT；取值为HEX时，SendContext和RecvContext的字符只能在0123456789ABCDEF中选取且长度必须是偶数位。（仅适用于TCP/UDP监听器）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContextType() const;

                    /**
                     * 设置自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查的输入格式，可取值：HEX或TEXT；取值为HEX时，SendContext和RecvContext的字符只能在0123456789ABCDEF中选取且长度必须是偶数位。（仅适用于TCP/UDP监听器）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contextType 自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查的输入格式，可取值：HEX或TEXT；取值为HEX时，SendContext和RecvContext的字符只能在0123456789ABCDEF中选取且长度必须是偶数位。（仅适用于TCP/UDP监听器）
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
                     * 获取自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查发送的请求内容，只允许ASCII可见字符，最大长度限制500。（仅适用于TCP/UDP监听器）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SendContext 自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查发送的请求内容，只允许ASCII可见字符，最大长度限制500。（仅适用于TCP/UDP监听器）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSendContext() const;

                    /**
                     * 设置自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查发送的请求内容，只允许ASCII可见字符，最大长度限制500。（仅适用于TCP/UDP监听器）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sendContext 自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查发送的请求内容，只允许ASCII可见字符，最大长度限制500。（仅适用于TCP/UDP监听器）。
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
                     * 获取自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查返回的结果，只允许ASCII可见字符，最大长度限制500。（仅适用于TCP/UDP监听器）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecvContext 自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查返回的结果，只允许ASCII可见字符，最大长度限制500。（仅适用于TCP/UDP监听器）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRecvContext() const;

                    /**
                     * 设置自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查返回的结果，只允许ASCII可见字符，最大长度限制500。（仅适用于TCP/UDP监听器）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recvContext 自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查返回的结果，只允许ASCII可见字符，最大长度限制500。（仅适用于TCP/UDP监听器）。
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
                     * 获取健康检查使用的协议。取值 TCP | HTTP | HTTPS | GRPC | PING | CUSTOM，UDP监听器支持PING/CUSTOM，TCP监听器支持TCP/HTTP/CUSTOM，TCP_SSL/QUIC监听器支持TCP/HTTP，HTTP规则支持HTTP/GRPC，HTTPS规则支持HTTP/HTTPS/GRPC。HTTP监听器默认值为HTTP;TCP、TCP_SSL、QUIC监听器默认值为TCP;UDP监听器默认为PING;HTTPS监听器的CheckType默认值与后端转发协议一致。
                     * @return CheckType 健康检查使用的协议。取值 TCP | HTTP | HTTPS | GRPC | PING | CUSTOM，UDP监听器支持PING/CUSTOM，TCP监听器支持TCP/HTTP/CUSTOM，TCP_SSL/QUIC监听器支持TCP/HTTP，HTTP规则支持HTTP/GRPC，HTTPS规则支持HTTP/HTTPS/GRPC。HTTP监听器默认值为HTTP;TCP、TCP_SSL、QUIC监听器默认值为TCP;UDP监听器默认为PING;HTTPS监听器的CheckType默认值与后端转发协议一致。
                     * 
                     */
                    std::string GetCheckType() const;

                    /**
                     * 设置健康检查使用的协议。取值 TCP | HTTP | HTTPS | GRPC | PING | CUSTOM，UDP监听器支持PING/CUSTOM，TCP监听器支持TCP/HTTP/CUSTOM，TCP_SSL/QUIC监听器支持TCP/HTTP，HTTP规则支持HTTP/GRPC，HTTPS规则支持HTTP/HTTPS/GRPC。HTTP监听器默认值为HTTP;TCP、TCP_SSL、QUIC监听器默认值为TCP;UDP监听器默认为PING;HTTPS监听器的CheckType默认值与后端转发协议一致。
                     * @param _checkType 健康检查使用的协议。取值 TCP | HTTP | HTTPS | GRPC | PING | CUSTOM，UDP监听器支持PING/CUSTOM，TCP监听器支持TCP/HTTP/CUSTOM，TCP_SSL/QUIC监听器支持TCP/HTTP，HTTP规则支持HTTP/GRPC，HTTPS规则支持HTTP/HTTPS/GRPC。HTTP监听器默认值为HTTP;TCP、TCP_SSL、QUIC监听器默认值为TCP;UDP监听器默认为PING;HTTPS监听器的CheckType默认值与后端转发协议一致。
                     * 
                     */
                    void SetCheckType(const std::string& _checkType);

                    /**
                     * 判断参数 CheckType 是否已赋值
                     * @return CheckType 是否已赋值
                     * 
                     */
                    bool CheckTypeHasBeenSet() const;

                    /**
                     * 获取HTTP版本。健康检查协议CheckType的值取HTTP时，必传此字段，代表后端服务的HTTP版本：HTTP/1.0、HTTP/1.1；（仅适用于TCP监听器）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HttpVersion HTTP版本。健康检查协议CheckType的值取HTTP时，必传此字段，代表后端服务的HTTP版本：HTTP/1.0、HTTP/1.1；（仅适用于TCP监听器）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHttpVersion() const;

                    /**
                     * 设置HTTP版本。健康检查协议CheckType的值取HTTP时，必传此字段，代表后端服务的HTTP版本：HTTP/1.0、HTTP/1.1；（仅适用于TCP监听器）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _httpVersion HTTP版本。健康检查协议CheckType的值取HTTP时，必传此字段，代表后端服务的HTTP版本：HTTP/1.0、HTTP/1.1；（仅适用于TCP监听器）
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
                     * 获取健康检查源IP类型：0（使用LB的VIP作为源IP），1（使用100.64网段IP作为源IP）。
                     * @return SourceIpType 健康检查源IP类型：0（使用LB的VIP作为源IP），1（使用100.64网段IP作为源IP）。
                     * 
                     */
                    int64_t GetSourceIpType() const;

                    /**
                     * 设置健康检查源IP类型：0（使用LB的VIP作为源IP），1（使用100.64网段IP作为源IP）。
                     * @param _sourceIpType 健康检查源IP类型：0（使用LB的VIP作为源IP），1（使用100.64网段IP作为源IP）。
                     * 
                     */
                    void SetSourceIpType(const int64_t& _sourceIpType);

                    /**
                     * 判断参数 SourceIpType 是否已赋值
                     * @return SourceIpType 是否已赋值
                     * 
                     */
                    bool SourceIpTypeHasBeenSet() const;

                    /**
                     * 获取GRPC健康检查状态码（仅适用于后端转发协议为GRPC的规则）。默认值为 12，可输入值为数值、多个数值、或者范围，例如 20 或 20,25 或 0-99
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtendedCode GRPC健康检查状态码（仅适用于后端转发协议为GRPC的规则）。默认值为 12，可输入值为数值、多个数值、或者范围，例如 20 或 20,25 或 0-99
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExtendedCode() const;

                    /**
                     * 设置GRPC健康检查状态码（仅适用于后端转发协议为GRPC的规则）。默认值为 12，可输入值为数值、多个数值、或者范围，例如 20 或 20,25 或 0-99
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extendedCode GRPC健康检查状态码（仅适用于后端转发协议为GRPC的规则）。默认值为 12，可输入值为数值、多个数值、或者范围，例如 20 或 20,25 或 0-99
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
                     * 是否开启健康检查：1（开启）、0（关闭）。
默认为开启。
                     */
                    int64_t m_healthSwitch;
                    bool m_healthSwitchHasBeenSet;

                    /**
                     * 健康检查的响应超时时间，可选值：2~60，默认值：2，单位：秒。响应超时时间要小于检查间隔时间。
                     */
                    int64_t m_timeOut;
                    bool m_timeOutHasBeenSet;

                    /**
                     * 健康检查探测间隔时间，默认值：5，IPv4 CLB实例的取值范围为：2-300，IPv6 CLB 实例的取值范围为：5-300。单位：秒。
说明：部分老旧 IPv4 CLB实例的取值范围为：5-300。
                     */
                    int64_t m_intervalTime;
                    bool m_intervalTimeHasBeenSet;

                    /**
                     * 健康阈值，默认值：3，表示当连续探测三次健康则表示该转发正常，可选值：2~10，单位：次。
                     */
                    int64_t m_healthNum;
                    bool m_healthNumHasBeenSet;

                    /**
                     * 不健康阈值，默认值：3，表示当连续探测三次不健康则表示该转发异常，可选值：2~10，单位：次。
                     */
                    int64_t m_unHealthNum;
                    bool m_unHealthNumHasBeenSet;

                    /**
                     * 健康检查状态码（仅适用于HTTP/HTTPS转发规则、TCP监听器的HTTP健康检查方式）。可选值：1~31，默认 31。
1 表示探测后返回值 1xx 代表健康，2 表示返回 2xx 代表健康，4 表示返回 3xx 代表健康，8 表示返回 4xx 代表健康，16 表示返回 5xx 代表健康。若希望多种返回码都可代表健康，则将相应的值相加。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_httpCode;
                    bool m_httpCodeHasBeenSet;

                    /**
                     * 健康检查路径（仅适用于HTTP/HTTPS转发规则、TCP监听器的HTTP健康检查方式）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_httpCheckPath;
                    bool m_httpCheckPathHasBeenSet;

                    /**
                     * 健康检查域名，将在HTTP协议 Host 头字段中携带。（仅适用于HTTP/HTTPS监听器和TCP监听器的HTTP健康检查方式。针对TCP监听器，当使用HTTP健康检查方式时，该参数为必填项）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_httpCheckDomain;
                    bool m_httpCheckDomainHasBeenSet;

                    /**
                     * 健康检查方法（仅适用于HTTP/HTTPS转发规则、TCP监听器的HTTP健康检查方式），默认值：HEAD，可选值HEAD或GET。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_httpCheckMethod;
                    bool m_httpCheckMethodHasBeenSet;

                    /**
                     * 自定义探测相关参数。健康检查端口，默认为后端服务的端口，除非您希望指定特定端口，否则建议留空。传参数值-1可恢复默认设置。（仅适用于TCP/UDP监听器）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_checkPort;
                    bool m_checkPortHasBeenSet;

                    /**
                     * 自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查的输入格式，可取值：HEX或TEXT；取值为HEX时，SendContext和RecvContext的字符只能在0123456789ABCDEF中选取且长度必须是偶数位。（仅适用于TCP/UDP监听器）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_contextType;
                    bool m_contextTypeHasBeenSet;

                    /**
                     * 自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查发送的请求内容，只允许ASCII可见字符，最大长度限制500。（仅适用于TCP/UDP监听器）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sendContext;
                    bool m_sendContextHasBeenSet;

                    /**
                     * 自定义探测相关参数。健康检查协议CheckType的值取CUSTOM时，必填此字段，代表健康检查返回的结果，只允许ASCII可见字符，最大长度限制500。（仅适用于TCP/UDP监听器）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_recvContext;
                    bool m_recvContextHasBeenSet;

                    /**
                     * 健康检查使用的协议。取值 TCP | HTTP | HTTPS | GRPC | PING | CUSTOM，UDP监听器支持PING/CUSTOM，TCP监听器支持TCP/HTTP/CUSTOM，TCP_SSL/QUIC监听器支持TCP/HTTP，HTTP规则支持HTTP/GRPC，HTTPS规则支持HTTP/HTTPS/GRPC。HTTP监听器默认值为HTTP;TCP、TCP_SSL、QUIC监听器默认值为TCP;UDP监听器默认为PING;HTTPS监听器的CheckType默认值与后端转发协议一致。
                     */
                    std::string m_checkType;
                    bool m_checkTypeHasBeenSet;

                    /**
                     * HTTP版本。健康检查协议CheckType的值取HTTP时，必传此字段，代表后端服务的HTTP版本：HTTP/1.0、HTTP/1.1；（仅适用于TCP监听器）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_httpVersion;
                    bool m_httpVersionHasBeenSet;

                    /**
                     * 健康检查源IP类型：0（使用LB的VIP作为源IP），1（使用100.64网段IP作为源IP）。
                     */
                    int64_t m_sourceIpType;
                    bool m_sourceIpTypeHasBeenSet;

                    /**
                     * GRPC健康检查状态码（仅适用于后端转发协议为GRPC的规则）。默认值为 12，可输入值为数值、多个数值、或者范围，例如 20 或 20,25 或 0-99
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extendedCode;
                    bool m_extendedCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_HEALTHCHECK_H_
