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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_HEALTHCHECKER_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_HEALTHCHECKER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CustomizedHeader.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 负载均衡实例健康检查策略。
                */
                class HealthChecker : public AbstractModel
                {
                public:
                    HealthChecker();
                    ~HealthChecker() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取健康检查策略，取值有：
<li>HTTP；</li>
<li>HTTPS；</li>
<li>TCP；</li>
<li>UDP；</li>
<li>ICMP Ping；</li>
<li>NoCheck。</li>
注意：NoCheck 表示不启用健康检查策略。
                     * @return Type 健康检查策略，取值有：
<li>HTTP；</li>
<li>HTTPS；</li>
<li>TCP；</li>
<li>UDP；</li>
<li>ICMP Ping；</li>
<li>NoCheck。</li>
注意：NoCheck 表示不启用健康检查策略。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置健康检查策略，取值有：
<li>HTTP；</li>
<li>HTTPS；</li>
<li>TCP；</li>
<li>UDP；</li>
<li>ICMP Ping；</li>
<li>NoCheck。</li>
注意：NoCheck 表示不启用健康检查策略。
                     * @param _type 健康检查策略，取值有：
<li>HTTP；</li>
<li>HTTPS；</li>
<li>TCP；</li>
<li>UDP；</li>
<li>ICMP Ping；</li>
<li>NoCheck。</li>
注意：NoCheck 表示不启用健康检查策略。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取检查端口。当 Type=HTTP 或 Type=HTTPS 或 Type=TCP 或 Type=UDP 时为必填。
                     * @return Port 检查端口。当 Type=HTTP 或 Type=HTTPS 或 Type=TCP 或 Type=UDP 时为必填。
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置检查端口。当 Type=HTTP 或 Type=HTTPS 或 Type=TCP 或 Type=UDP 时为必填。
                     * @param _port 检查端口。当 Type=HTTP 或 Type=HTTPS 或 Type=TCP 或 Type=UDP 时为必填。
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取检查频率，表示多久发起一次健康检查任务，单位为秒。可取值有：30，60，180，300 或 600。
                     * @return Interval 检查频率，表示多久发起一次健康检查任务，单位为秒。可取值有：30，60，180，300 或 600。
                     * 
                     */
                    uint64_t GetInterval() const;

                    /**
                     * 设置检查频率，表示多久发起一次健康检查任务，单位为秒。可取值有：30，60，180，300 或 600。
                     * @param _interval 检查频率，表示多久发起一次健康检查任务，单位为秒。可取值有：30，60，180，300 或 600。
                     * 
                     */
                    void SetInterval(const uint64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取每一次健康检查的超时时间，若健康检查消耗时间大于此值，则检查结果判定为”不健康“， 单位为秒，默认值为 5s，取值必须小于 Interval。
                     * @return Timeout 每一次健康检查的超时时间，若健康检查消耗时间大于此值，则检查结果判定为”不健康“， 单位为秒，默认值为 5s，取值必须小于 Interval。
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置每一次健康检查的超时时间，若健康检查消耗时间大于此值，则检查结果判定为”不健康“， 单位为秒，默认值为 5s，取值必须小于 Interval。
                     * @param _timeout 每一次健康检查的超时时间，若健康检查消耗时间大于此值，则检查结果判定为”不健康“， 单位为秒，默认值为 5s，取值必须小于 Interval。
                     * 
                     */
                    void SetTimeout(const uint64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取健康阈值，表示连续几次健康检查结果为"健康"，则判断源站为"健康"，单位为次，默认 3 次，最小取值 1 次。
                     * @return HealthThreshold 健康阈值，表示连续几次健康检查结果为"健康"，则判断源站为"健康"，单位为次，默认 3 次，最小取值 1 次。
                     * 
                     */
                    uint64_t GetHealthThreshold() const;

                    /**
                     * 设置健康阈值，表示连续几次健康检查结果为"健康"，则判断源站为"健康"，单位为次，默认 3 次，最小取值 1 次。
                     * @param _healthThreshold 健康阈值，表示连续几次健康检查结果为"健康"，则判断源站为"健康"，单位为次，默认 3 次，最小取值 1 次。
                     * 
                     */
                    void SetHealthThreshold(const uint64_t& _healthThreshold);

                    /**
                     * 判断参数 HealthThreshold 是否已赋值
                     * @return HealthThreshold 是否已赋值
                     * 
                     */
                    bool HealthThresholdHasBeenSet() const;

                    /**
                     * 获取不健康阈值，表示连续几次健康检查结果为"不健康"，则判断源站为"不健康"，单位为次，默认 2 次。
                     * @return CriticalThreshold 不健康阈值，表示连续几次健康检查结果为"不健康"，则判断源站为"不健康"，单位为次，默认 2 次。
                     * 
                     */
                    uint64_t GetCriticalThreshold() const;

                    /**
                     * 设置不健康阈值，表示连续几次健康检查结果为"不健康"，则判断源站为"不健康"，单位为次，默认 2 次。
                     * @param _criticalThreshold 不健康阈值，表示连续几次健康检查结果为"不健康"，则判断源站为"不健康"，单位为次，默认 2 次。
                     * 
                     */
                    void SetCriticalThreshold(const uint64_t& _criticalThreshold);

                    /**
                     * 判断参数 CriticalThreshold 是否已赋值
                     * @return CriticalThreshold 是否已赋值
                     * 
                     */
                    bool CriticalThresholdHasBeenSet() const;

                    /**
                     * 获取该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示探测路径，需要填写完整的 host/path，不包含协议部分，例如：www.example.com/test。

                     * @return Path 该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示探测路径，需要填写完整的 host/path，不包含协议部分，例如：www.example.com/test。

                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示探测路径，需要填写完整的 host/path，不包含协议部分，例如：www.example.com/test。

                     * @param _path 该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示探测路径，需要填写完整的 host/path，不包含协议部分，例如：www.example.com/test。

                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示请求方法，取值有：
<li>GET；</li>
<li>HEAD。</li>
                     * @return Method 该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示请求方法，取值有：
<li>GET；</li>
<li>HEAD。</li>
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示请求方法，取值有：
<li>GET；</li>
<li>HEAD。</li>
                     * @param _method 该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示请求方法，取值有：
<li>GET；</li>
<li>HEAD。</li>
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示探测节点向源站发起健康检查时，响应哪些状态码可用于认定探测结果为健康。
                     * @return ExpectedCodes 该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示探测节点向源站发起健康检查时，响应哪些状态码可用于认定探测结果为健康。
                     * 
                     */
                    std::vector<std::string> GetExpectedCodes() const;

                    /**
                     * 设置该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示探测节点向源站发起健康检查时，响应哪些状态码可用于认定探测结果为健康。
                     * @param _expectedCodes 该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示探测节点向源站发起健康检查时，响应哪些状态码可用于认定探测结果为健康。
                     * 
                     */
                    void SetExpectedCodes(const std::vector<std::string>& _expectedCodes);

                    /**
                     * 判断参数 ExpectedCodes 是否已赋值
                     * @return ExpectedCodes 是否已赋值
                     * 
                     */
                    bool ExpectedCodesHasBeenSet() const;

                    /**
                     * 获取该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示探测请求携带的自定义  HTTP 请求头，至多可配置 10 个。
                     * @return Headers 该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示探测请求携带的自定义  HTTP 请求头，至多可配置 10 个。
                     * 
                     */
                    std::vector<CustomizedHeader> GetHeaders() const;

                    /**
                     * 设置该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示探测请求携带的自定义  HTTP 请求头，至多可配置 10 个。
                     * @param _headers 该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示探测请求携带的自定义  HTTP 请求头，至多可配置 10 个。
                     * 
                     */
                    void SetHeaders(const std::vector<CustomizedHeader>& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     * 
                     */
                    bool HeadersHasBeenSet() const;

                    /**
                     * 获取该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示是否启用遵循 301/302 重定向。启用后，301/302 默认为"健康"的状态码，默认跳转 3 次。
                     * @return FollowRedirect 该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示是否启用遵循 301/302 重定向。启用后，301/302 默认为"健康"的状态码，默认跳转 3 次。
                     * 
                     */
                    std::string GetFollowRedirect() const;

                    /**
                     * 设置该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示是否启用遵循 301/302 重定向。启用后，301/302 默认为"健康"的状态码，默认跳转 3 次。
                     * @param _followRedirect 该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示是否启用遵循 301/302 重定向。启用后，301/302 默认为"健康"的状态码，默认跳转 3 次。
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
                     * 获取该参数仅当 Type=UDP 时有效，表示健康检查发送的内容。只允许 ASCII 可见字符，最大长度限制 500 个字符。
                     * @return SendContext 该参数仅当 Type=UDP 时有效，表示健康检查发送的内容。只允许 ASCII 可见字符，最大长度限制 500 个字符。
                     * 
                     */
                    std::string GetSendContext() const;

                    /**
                     * 设置该参数仅当 Type=UDP 时有效，表示健康检查发送的内容。只允许 ASCII 可见字符，最大长度限制 500 个字符。
                     * @param _sendContext 该参数仅当 Type=UDP 时有效，表示健康检查发送的内容。只允许 ASCII 可见字符，最大长度限制 500 个字符。
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
                     * 获取该参数仅当 Type=UDP 时有效，表示健康检查期望源站返回结果。只允许 ASCII 可见字符，最大长度限制 500 个字符。
                     * @return RecvContext 该参数仅当 Type=UDP 时有效，表示健康检查期望源站返回结果。只允许 ASCII 可见字符，最大长度限制 500 个字符。
                     * 
                     */
                    std::string GetRecvContext() const;

                    /**
                     * 设置该参数仅当 Type=UDP 时有效，表示健康检查期望源站返回结果。只允许 ASCII 可见字符，最大长度限制 500 个字符。
                     * @param _recvContext 该参数仅当 Type=UDP 时有效，表示健康检查期望源站返回结果。只允许 ASCII 可见字符，最大长度限制 500 个字符。
                     * 
                     */
                    void SetRecvContext(const std::string& _recvContext);

                    /**
                     * 判断参数 RecvContext 是否已赋值
                     * @return RecvContext 是否已赋值
                     * 
                     */
                    bool RecvContextHasBeenSet() const;

                private:

                    /**
                     * 健康检查策略，取值有：
<li>HTTP；</li>
<li>HTTPS；</li>
<li>TCP；</li>
<li>UDP；</li>
<li>ICMP Ping；</li>
<li>NoCheck。</li>
注意：NoCheck 表示不启用健康检查策略。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 检查端口。当 Type=HTTP 或 Type=HTTPS 或 Type=TCP 或 Type=UDP 时为必填。
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 检查频率，表示多久发起一次健康检查任务，单位为秒。可取值有：30，60，180，300 或 600。
                     */
                    uint64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 每一次健康检查的超时时间，若健康检查消耗时间大于此值，则检查结果判定为”不健康“， 单位为秒，默认值为 5s，取值必须小于 Interval。
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * 健康阈值，表示连续几次健康检查结果为"健康"，则判断源站为"健康"，单位为次，默认 3 次，最小取值 1 次。
                     */
                    uint64_t m_healthThreshold;
                    bool m_healthThresholdHasBeenSet;

                    /**
                     * 不健康阈值，表示连续几次健康检查结果为"不健康"，则判断源站为"不健康"，单位为次，默认 2 次。
                     */
                    uint64_t m_criticalThreshold;
                    bool m_criticalThresholdHasBeenSet;

                    /**
                     * 该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示探测路径，需要填写完整的 host/path，不包含协议部分，例如：www.example.com/test。

                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示请求方法，取值有：
<li>GET；</li>
<li>HEAD。</li>
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示探测节点向源站发起健康检查时，响应哪些状态码可用于认定探测结果为健康。
                     */
                    std::vector<std::string> m_expectedCodes;
                    bool m_expectedCodesHasBeenSet;

                    /**
                     * 该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示探测请求携带的自定义  HTTP 请求头，至多可配置 10 个。
                     */
                    std::vector<CustomizedHeader> m_headers;
                    bool m_headersHasBeenSet;

                    /**
                     * 该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示是否启用遵循 301/302 重定向。启用后，301/302 默认为"健康"的状态码，默认跳转 3 次。
                     */
                    std::string m_followRedirect;
                    bool m_followRedirectHasBeenSet;

                    /**
                     * 该参数仅当 Type=UDP 时有效，表示健康检查发送的内容。只允许 ASCII 可见字符，最大长度限制 500 个字符。
                     */
                    std::string m_sendContext;
                    bool m_sendContextHasBeenSet;

                    /**
                     * 该参数仅当 Type=UDP 时有效，表示健康检查期望源站返回结果。只允许 ASCII 可见字符，最大长度限制 500 个字符。
                     */
                    std::string m_recvContext;
                    bool m_recvContextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_HEALTHCHECKER_H_
