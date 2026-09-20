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
                     * 获取<p>健康检查策略，取值有：</p><li>HTTP；</li><li>HTTPS；</li><li>TCP；</li><li>UDP；</li><li>ICMP Ping；</li><li>NoCheck。</li>注意：NoCheck 表示不启用健康检查策略。
                     * @return Type <p>健康检查策略，取值有：</p><li>HTTP；</li><li>HTTPS；</li><li>TCP；</li><li>UDP；</li><li>ICMP Ping；</li><li>NoCheck。</li>注意：NoCheck 表示不启用健康检查策略。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>健康检查策略，取值有：</p><li>HTTP；</li><li>HTTPS；</li><li>TCP；</li><li>UDP；</li><li>ICMP Ping；</li><li>NoCheck。</li>注意：NoCheck 表示不启用健康检查策略。
                     * @param _type <p>健康检查策略，取值有：</p><li>HTTP；</li><li>HTTPS；</li><li>TCP；</li><li>UDP；</li><li>ICMP Ping；</li><li>NoCheck。</li>注意：NoCheck 表示不启用健康检查策略。
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
                     * 获取<p>检查端口。当 Type=HTTP 或 Type=HTTPS 或 Type=TCP 或 Type=UDP 时为必填。</p>
                     * @return Port <p>检查端口。当 Type=HTTP 或 Type=HTTPS 或 Type=TCP 或 Type=UDP 时为必填。</p>
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置<p>检查端口。当 Type=HTTP 或 Type=HTTPS 或 Type=TCP 或 Type=UDP 时为必填。</p>
                     * @param _port <p>检查端口。当 Type=HTTP 或 Type=HTTPS 或 Type=TCP 或 Type=UDP 时为必填。</p>
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
                     * 获取<p>检查频率，表示多久发起一次健康检查任务，单位为秒。可配置 10-600 秒。</p>
                     * @return Interval <p>检查频率，表示多久发起一次健康检查任务，单位为秒。可配置 10-600 秒。</p>
                     * 
                     */
                    uint64_t GetInterval() const;

                    /**
                     * 设置<p>检查频率，表示多久发起一次健康检查任务，单位为秒。可配置 10-600 秒。</p>
                     * @param _interval <p>检查频率，表示多久发起一次健康检查任务，单位为秒。可配置 10-600 秒。</p>
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
                     * 获取<p>每一次健康检查的超时时间，若健康检查消耗时间大于此值，则检查结果判定为“不健康”， 单位为秒，默认值为 5s，取值必须小于 Interval。</p>
                     * @return Timeout <p>每一次健康检查的超时时间，若健康检查消耗时间大于此值，则检查结果判定为“不健康”， 单位为秒，默认值为 5s，取值必须小于 Interval。</p>
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置<p>每一次健康检查的超时时间，若健康检查消耗时间大于此值，则检查结果判定为“不健康”， 单位为秒，默认值为 5s，取值必须小于 Interval。</p>
                     * @param _timeout <p>每一次健康检查的超时时间，若健康检查消耗时间大于此值，则检查结果判定为“不健康”， 单位为秒，默认值为 5s，取值必须小于 Interval。</p>
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
                     * 获取<p>健康阈值，表示连续几次健康检查结果为&quot;健康&quot;，则判断源站为&quot;健康&quot;，单位为次，默认 3 次，最小取值 1 次。</p>
                     * @return HealthThreshold <p>健康阈值，表示连续几次健康检查结果为&quot;健康&quot;，则判断源站为&quot;健康&quot;，单位为次，默认 3 次，最小取值 1 次。</p>
                     * 
                     */
                    uint64_t GetHealthThreshold() const;

                    /**
                     * 设置<p>健康阈值，表示连续几次健康检查结果为&quot;健康&quot;，则判断源站为&quot;健康&quot;，单位为次，默认 3 次，最小取值 1 次。</p>
                     * @param _healthThreshold <p>健康阈值，表示连续几次健康检查结果为&quot;健康&quot;，则判断源站为&quot;健康&quot;，单位为次，默认 3 次，最小取值 1 次。</p>
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
                     * 获取<p>不健康阈值，表示连续几次健康检查结果为&quot;不健康&quot;，则判断源站为&quot;不健康&quot;，单位为次，默认 2 次。</p>
                     * @return CriticalThreshold <p>不健康阈值，表示连续几次健康检查结果为&quot;不健康&quot;，则判断源站为&quot;不健康&quot;，单位为次，默认 2 次。</p>
                     * 
                     */
                    uint64_t GetCriticalThreshold() const;

                    /**
                     * 设置<p>不健康阈值，表示连续几次健康检查结果为&quot;不健康&quot;，则判断源站为&quot;不健康&quot;，单位为次，默认 2 次。</p>
                     * @param _criticalThreshold <p>不健康阈值，表示连续几次健康检查结果为&quot;不健康&quot;，则判断源站为&quot;不健康&quot;，单位为次，默认 2 次。</p>
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
                     * 获取<p>该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示探测路径，需要填写完整的 host/path，不包含协议部分，例如：www.example.com/test。</p>
                     * @return Path <p>该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示探测路径，需要填写完整的 host/path，不包含协议部分，例如：www.example.com/test。</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示探测路径，需要填写完整的 host/path，不包含协议部分，例如：www.example.com/test。</p>
                     * @param _path <p>该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示探测路径，需要填写完整的 host/path，不包含协议部分，例如：www.example.com/test。</p>
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
                     * 获取<p>该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示请求方法，取值有：</p><li>GET；</li><li>HEAD。</li>
                     * @return Method <p>该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示请求方法，取值有：</p><li>GET；</li><li>HEAD。</li>
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置<p>该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示请求方法，取值有：</p><li>GET；</li><li>HEAD。</li>
                     * @param _method <p>该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示请求方法，取值有：</p><li>GET；</li><li>HEAD。</li>
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
                     * 获取<p>该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示探测节点向源站发起健康检查时，响应哪些状态码可用于认定探测结果为健康。</p>
                     * @return ExpectedCodes <p>该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示探测节点向源站发起健康检查时，响应哪些状态码可用于认定探测结果为健康。</p>
                     * 
                     */
                    std::vector<std::string> GetExpectedCodes() const;

                    /**
                     * 设置<p>该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示探测节点向源站发起健康检查时，响应哪些状态码可用于认定探测结果为健康。</p>
                     * @param _expectedCodes <p>该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示探测节点向源站发起健康检查时，响应哪些状态码可用于认定探测结果为健康。</p>
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
                     * 获取<p>该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示探测请求携带的自定义  HTTP 请求头，至多可配置 10 个。</p>
                     * @return Headers <p>该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示探测请求携带的自定义  HTTP 请求头，至多可配置 10 个。</p>
                     * 
                     */
                    std::vector<CustomizedHeader> GetHeaders() const;

                    /**
                     * 设置<p>该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示探测请求携带的自定义  HTTP 请求头，至多可配置 10 个。</p>
                     * @param _headers <p>该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示探测请求携带的自定义  HTTP 请求头，至多可配置 10 个。</p>
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
                     * 获取<p>该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示是否启用遵循 301/302 重定向。启用后，301/302 默认为&quot;健康&quot;的状态码，默认跳转 3 次。</p>
                     * @return FollowRedirect <p>该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示是否启用遵循 301/302 重定向。启用后，301/302 默认为&quot;健康&quot;的状态码，默认跳转 3 次。</p>
                     * 
                     */
                    std::string GetFollowRedirect() const;

                    /**
                     * 设置<p>该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示是否启用遵循 301/302 重定向。启用后，301/302 默认为&quot;健康&quot;的状态码，默认跳转 3 次。</p>
                     * @param _followRedirect <p>该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示是否启用遵循 301/302 重定向。启用后，301/302 默认为&quot;健康&quot;的状态码，默认跳转 3 次。</p>
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
                     * 获取<p>该参数仅当 Type=UDP 时有效，表示健康检查发送的内容。只允许 ASCII 可见字符，最大长度限制 500 个字符。</p>
                     * @return SendContext <p>该参数仅当 Type=UDP 时有效，表示健康检查发送的内容。只允许 ASCII 可见字符，最大长度限制 500 个字符。</p>
                     * 
                     */
                    std::string GetSendContext() const;

                    /**
                     * 设置<p>该参数仅当 Type=UDP 时有效，表示健康检查发送的内容。只允许 ASCII 可见字符，最大长度限制 500 个字符。</p>
                     * @param _sendContext <p>该参数仅当 Type=UDP 时有效，表示健康检查发送的内容。只允许 ASCII 可见字符，最大长度限制 500 个字符。</p>
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
                     * 获取<p>该参数仅当 Type=UDP 时有效，表示健康检查期望源站返回结果。只允许 ASCII 可见字符，最大长度限制 500 个字符。</p>
                     * @return RecvContext <p>该参数仅当 Type=UDP 时有效，表示健康检查期望源站返回结果。只允许 ASCII 可见字符，最大长度限制 500 个字符。</p>
                     * 
                     */
                    std::string GetRecvContext() const;

                    /**
                     * 设置<p>该参数仅当 Type=UDP 时有效，表示健康检查期望源站返回结果。只允许 ASCII 可见字符，最大长度限制 500 个字符。</p>
                     * @param _recvContext <p>该参数仅当 Type=UDP 时有效，表示健康检查期望源站返回结果。只允许 ASCII 可见字符，最大长度限制 500 个字符。</p>
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
                     * 获取<p>健康检查探测集群。指定本负载均衡实例发起健康探测的集群区域范围，探测集群地区分布详见<a href="https://cloud.tencent.com/document/product/1552/104228">健康检查策略介绍</a>，仅 HTTP 专用型（V2）版本负载均衡实例支持设置。取值有：<br>global：由全球所有区域的探测集群发起探测，包括中国大陆区域以及非中国大陆区域，各个区域的集群独立维护各自的探测结果；<br>mainland_china：仅由中国大陆区域的探测集群发起探测，当前中国大陆区域共用一个探测集群，探测结果由中国大陆区域的探测集群维护，其他区域跟随中国大陆区域的集群的探测结果；<br>overseas：仅由非中国大陆区域的探测集群发起探测，当前非中国大陆区域包含多个地区的探测集群，探测结果由各个地区的探测集群独立维护，中国大陆区域的探测结果由所有其他地区的探测集群的探测结果汇总生成。<br>默认为 global。</p>
                     * @return ProbeCluster <p>健康检查探测集群。指定本负载均衡实例发起健康探测的集群区域范围，探测集群地区分布详见<a href="https://cloud.tencent.com/document/product/1552/104228">健康检查策略介绍</a>，仅 HTTP 专用型（V2）版本负载均衡实例支持设置。取值有：<br>global：由全球所有区域的探测集群发起探测，包括中国大陆区域以及非中国大陆区域，各个区域的集群独立维护各自的探测结果；<br>mainland_china：仅由中国大陆区域的探测集群发起探测，当前中国大陆区域共用一个探测集群，探测结果由中国大陆区域的探测集群维护，其他区域跟随中国大陆区域的集群的探测结果；<br>overseas：仅由非中国大陆区域的探测集群发起探测，当前非中国大陆区域包含多个地区的探测集群，探测结果由各个地区的探测集群独立维护，中国大陆区域的探测结果由所有其他地区的探测集群的探测结果汇总生成。<br>默认为 global。</p>
                     * 
                     */
                    std::string GetProbeCluster() const;

                    /**
                     * 设置<p>健康检查探测集群。指定本负载均衡实例发起健康探测的集群区域范围，探测集群地区分布详见<a href="https://cloud.tencent.com/document/product/1552/104228">健康检查策略介绍</a>，仅 HTTP 专用型（V2）版本负载均衡实例支持设置。取值有：<br>global：由全球所有区域的探测集群发起探测，包括中国大陆区域以及非中国大陆区域，各个区域的集群独立维护各自的探测结果；<br>mainland_china：仅由中国大陆区域的探测集群发起探测，当前中国大陆区域共用一个探测集群，探测结果由中国大陆区域的探测集群维护，其他区域跟随中国大陆区域的集群的探测结果；<br>overseas：仅由非中国大陆区域的探测集群发起探测，当前非中国大陆区域包含多个地区的探测集群，探测结果由各个地区的探测集群独立维护，中国大陆区域的探测结果由所有其他地区的探测集群的探测结果汇总生成。<br>默认为 global。</p>
                     * @param _probeCluster <p>健康检查探测集群。指定本负载均衡实例发起健康探测的集群区域范围，探测集群地区分布详见<a href="https://cloud.tencent.com/document/product/1552/104228">健康检查策略介绍</a>，仅 HTTP 专用型（V2）版本负载均衡实例支持设置。取值有：<br>global：由全球所有区域的探测集群发起探测，包括中国大陆区域以及非中国大陆区域，各个区域的集群独立维护各自的探测结果；<br>mainland_china：仅由中国大陆区域的探测集群发起探测，当前中国大陆区域共用一个探测集群，探测结果由中国大陆区域的探测集群维护，其他区域跟随中国大陆区域的集群的探测结果；<br>overseas：仅由非中国大陆区域的探测集群发起探测，当前非中国大陆区域包含多个地区的探测集群，探测结果由各个地区的探测集群独立维护，中国大陆区域的探测结果由所有其他地区的探测集群的探测结果汇总生成。<br>默认为 global。</p>
                     * 
                     */
                    void SetProbeCluster(const std::string& _probeCluster);

                    /**
                     * 判断参数 ProbeCluster 是否已赋值
                     * @return ProbeCluster 是否已赋值
                     * 
                     */
                    bool ProbeClusterHasBeenSet() const;

                private:

                    /**
                     * <p>健康检查策略，取值有：</p><li>HTTP；</li><li>HTTPS；</li><li>TCP；</li><li>UDP；</li><li>ICMP Ping；</li><li>NoCheck。</li>注意：NoCheck 表示不启用健康检查策略。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>检查端口。当 Type=HTTP 或 Type=HTTPS 或 Type=TCP 或 Type=UDP 时为必填。</p>
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>检查频率，表示多久发起一次健康检查任务，单位为秒。可配置 10-600 秒。</p>
                     */
                    uint64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * <p>每一次健康检查的超时时间，若健康检查消耗时间大于此值，则检查结果判定为“不健康”， 单位为秒，默认值为 5s，取值必须小于 Interval。</p>
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>健康阈值，表示连续几次健康检查结果为&quot;健康&quot;，则判断源站为&quot;健康&quot;，单位为次，默认 3 次，最小取值 1 次。</p>
                     */
                    uint64_t m_healthThreshold;
                    bool m_healthThresholdHasBeenSet;

                    /**
                     * <p>不健康阈值，表示连续几次健康检查结果为&quot;不健康&quot;，则判断源站为&quot;不健康&quot;，单位为次，默认 2 次。</p>
                     */
                    uint64_t m_criticalThreshold;
                    bool m_criticalThresholdHasBeenSet;

                    /**
                     * <p>该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示探测路径，需要填写完整的 host/path，不包含协议部分，例如：www.example.com/test。</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示请求方法，取值有：</p><li>GET；</li><li>HEAD。</li>
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * <p>该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示探测节点向源站发起健康检查时，响应哪些状态码可用于认定探测结果为健康。</p>
                     */
                    std::vector<std::string> m_expectedCodes;
                    bool m_expectedCodesHasBeenSet;

                    /**
                     * <p>该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示探测请求携带的自定义  HTTP 请求头，至多可配置 10 个。</p>
                     */
                    std::vector<CustomizedHeader> m_headers;
                    bool m_headersHasBeenSet;

                    /**
                     * <p>该参数仅当 Type=HTTP 或 Type=HTTPS 时有效，表示是否启用遵循 301/302 重定向。启用后，301/302 默认为&quot;健康&quot;的状态码，默认跳转 3 次。</p>
                     */
                    std::string m_followRedirect;
                    bool m_followRedirectHasBeenSet;

                    /**
                     * <p>该参数仅当 Type=UDP 时有效，表示健康检查发送的内容。只允许 ASCII 可见字符，最大长度限制 500 个字符。</p>
                     */
                    std::string m_sendContext;
                    bool m_sendContextHasBeenSet;

                    /**
                     * <p>该参数仅当 Type=UDP 时有效，表示健康检查期望源站返回结果。只允许 ASCII 可见字符，最大长度限制 500 个字符。</p>
                     */
                    std::string m_recvContext;
                    bool m_recvContextHasBeenSet;

                    /**
                     * <p>健康检查探测集群。指定本负载均衡实例发起健康探测的集群区域范围，探测集群地区分布详见<a href="https://cloud.tencent.com/document/product/1552/104228">健康检查策略介绍</a>，仅 HTTP 专用型（V2）版本负载均衡实例支持设置。取值有：<br>global：由全球所有区域的探测集群发起探测，包括中国大陆区域以及非中国大陆区域，各个区域的集群独立维护各自的探测结果；<br>mainland_china：仅由中国大陆区域的探测集群发起探测，当前中国大陆区域共用一个探测集群，探测结果由中国大陆区域的探测集群维护，其他区域跟随中国大陆区域的集群的探测结果；<br>overseas：仅由非中国大陆区域的探测集群发起探测，当前非中国大陆区域包含多个地区的探测集群，探测结果由各个地区的探测集群独立维护，中国大陆区域的探测结果由所有其他地区的探测集群的探测结果汇总生成。<br>默认为 global。</p>
                     */
                    std::string m_probeCluster;
                    bool m_probeClusterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_HEALTHCHECKER_H_
