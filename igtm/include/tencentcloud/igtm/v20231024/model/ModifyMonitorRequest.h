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

#ifndef TENCENTCLOUD_IGTM_V20231024_MODEL_MODIFYMONITORREQUEST_H_
#define TENCENTCLOUD_IGTM_V20231024_MODEL_MODIFYMONITORREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Igtm
    {
        namespace V20231024
        {
            namespace Model
            {
                /**
                * ModifyMonitor请求参数结构体
                */
                class ModifyMonitorRequest : public AbstractModel
                {
                public:
                    ModifyMonitorRequest();
                    ~ModifyMonitorRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取监控器id
                     * @return MonitorId 监控器id
                     * 
                     */
                    uint64_t GetMonitorId() const;

                    /**
                     * 设置监控器id
                     * @param _monitorId 监控器id
                     * 
                     */
                    void SetMonitorId(const uint64_t& _monitorId);

                    /**
                     * 判断参数 MonitorId 是否已赋值
                     * @return MonitorId 是否已赋值
                     * 
                     */
                    bool MonitorIdHasBeenSet() const;

                    /**
                     * 获取监控器名称
                     * @return MonitorName 监控器名称
                     * 
                     */
                    std::string GetMonitorName() const;

                    /**
                     * 设置监控器名称
                     * @param _monitorName 监控器名称
                     * 
                     */
                    void SetMonitorName(const std::string& _monitorName);

                    /**
                     * 判断参数 MonitorName 是否已赋值
                     * @return MonitorName 是否已赋值
                     * 
                     */
                    bool MonitorNameHasBeenSet() const;

                    /**
                     * 获取检查协议，可选值 PING TCP HTTP HTTPS
                     * @return CheckProtocol 检查协议，可选值 PING TCP HTTP HTTPS
                     * 
                     */
                    std::string GetCheckProtocol() const;

                    /**
                     * 设置检查协议，可选值 PING TCP HTTP HTTPS
                     * @param _checkProtocol 检查协议，可选值 PING TCP HTTP HTTPS
                     * 
                     */
                    void SetCheckProtocol(const std::string& _checkProtocol);

                    /**
                     * 判断参数 CheckProtocol 是否已赋值
                     * @return CheckProtocol 是否已赋值
                     * 
                     */
                    bool CheckProtocolHasBeenSet() const;

                    /**
                     * 获取检查间隔（秒），可选值 15 60 120 300
                     * @return CheckInterval 检查间隔（秒），可选值 15 60 120 300
                     * 
                     */
                    uint64_t GetCheckInterval() const;

                    /**
                     * 设置检查间隔（秒），可选值 15 60 120 300
                     * @param _checkInterval 检查间隔（秒），可选值 15 60 120 300
                     * 
                     */
                    void SetCheckInterval(const uint64_t& _checkInterval);

                    /**
                     * 判断参数 CheckInterval 是否已赋值
                     * @return CheckInterval 是否已赋值
                     * 
                     */
                    bool CheckIntervalHasBeenSet() const;

                    /**
                     * 获取超时时间，单位:秒，可选值 2  3  5  10
                     * @return Timeout 超时时间，单位:秒，可选值 2  3  5  10
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置超时时间，单位:秒，可选值 2  3  5  10
                     * @param _timeout 超时时间，单位:秒，可选值 2  3  5  10
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
                     * 获取重试次数，可选值为 0，1，2
                     * @return FailTimes 重试次数，可选值为 0，1，2
                     * 
                     */
                    uint64_t GetFailTimes() const;

                    /**
                     * 设置重试次数，可选值为 0，1，2
                     * @param _failTimes 重试次数，可选值为 0，1，2
                     * 
                     */
                    void SetFailTimes(const uint64_t& _failTimes);

                    /**
                     * 判断参数 FailTimes 是否已赋值
                     * @return FailTimes 是否已赋值
                     * 
                     */
                    bool FailTimesHasBeenSet() const;

                    /**
                     * 获取失败比例，可选值为 20 30 40 50 60 70 80 100，默认值为50
                     * @return FailRate 失败比例，可选值为 20 30 40 50 60 70 80 100，默认值为50
                     * 
                     */
                    uint64_t GetFailRate() const;

                    /**
                     * 设置失败比例，可选值为 20 30 40 50 60 70 80 100，默认值为50
                     * @param _failRate 失败比例，可选值为 20 30 40 50 60 70 80 100，默认值为50
                     * 
                     */
                    void SetFailRate(const uint64_t& _failRate);

                    /**
                     * 判断参数 FailRate 是否已赋值
                     * @return FailRate 是否已赋值
                     * 
                     */
                    bool FailRateHasBeenSet() const;

                    /**
                     * 获取监控节点类型，可选值有AUTO INTERNAL OVERSEAS IPV6 ALL
                     * @return DetectorStyle 监控节点类型，可选值有AUTO INTERNAL OVERSEAS IPV6 ALL
                     * 
                     */
                    std::string GetDetectorStyle() const;

                    /**
                     * 设置监控节点类型，可选值有AUTO INTERNAL OVERSEAS IPV6 ALL
                     * @param _detectorStyle 监控节点类型，可选值有AUTO INTERNAL OVERSEAS IPV6 ALL
                     * 
                     */
                    void SetDetectorStyle(const std::string& _detectorStyle);

                    /**
                     * 判断参数 DetectorStyle 是否已赋值
                     * @return DetectorStyle 是否已赋值
                     * 
                     */
                    bool DetectorStyleHasBeenSet() const;

                    /**
                     * 获取探测器组id列表
                     * @return DetectorGroupIds 探测器组id列表
                     * 
                     */
                    std::vector<uint64_t> GetDetectorGroupIds() const;

                    /**
                     * 设置探测器组id列表
                     * @param _detectorGroupIds 探测器组id列表
                     * 
                     */
                    void SetDetectorGroupIds(const std::vector<uint64_t>& _detectorGroupIds);

                    /**
                     * 判断参数 DetectorGroupIds 是否已赋值
                     * @return DetectorGroupIds 是否已赋值
                     * 
                     */
                    bool DetectorGroupIdsHasBeenSet() const;

                    /**
                     * 获取PING 包数目， 当CheckProtocol=ping时必填，可选值 20 50 100
                     * @return PingNum PING 包数目， 当CheckProtocol=ping时必填，可选值 20 50 100
                     * 
                     */
                    uint64_t GetPingNum() const;

                    /**
                     * 设置PING 包数目， 当CheckProtocol=ping时必填，可选值 20 50 100
                     * @param _pingNum PING 包数目， 当CheckProtocol=ping时必填，可选值 20 50 100
                     * 
                     */
                    void SetPingNum(const uint64_t& _pingNum);

                    /**
                     * 判断参数 PingNum 是否已赋值
                     * @return PingNum 是否已赋值
                     * 
                     */
                    bool PingNumHasBeenSet() const;

                    /**
                     * 获取检查端口，可选值为1-65535之间的整数
                     * @return TcpPort 检查端口，可选值为1-65535之间的整数
                     * 
                     */
                    uint64_t GetTcpPort() const;

                    /**
                     * 设置检查端口，可选值为1-65535之间的整数
                     * @param _tcpPort 检查端口，可选值为1-65535之间的整数
                     * 
                     */
                    void SetTcpPort(const uint64_t& _tcpPort);

                    /**
                     * 判断参数 TcpPort 是否已赋值
                     * @return TcpPort 是否已赋值
                     * 
                     */
                    bool TcpPortHasBeenSet() const;

                    /**
                     * 获取Host 设置，默认为业务域名
                     * @return Host Host 设置，默认为业务域名
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Host 设置，默认为业务域名
                     * @param _host Host 设置，默认为业务域名
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取URL 路径，默认为“/”
                     * @return Path URL 路径，默认为“/”
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置URL 路径，默认为“/”
                     * @param _path URL 路径，默认为“/”
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
                     * 获取返回错误码阈值, 可选值为 400 和 500, 默认值500
                     * @return ReturnCodeThreshold 返回错误码阈值, 可选值为 400 和 500, 默认值500
                     * 
                     */
                    uint64_t GetReturnCodeThreshold() const;

                    /**
                     * 设置返回错误码阈值, 可选值为 400 和 500, 默认值500
                     * @param _returnCodeThreshold 返回错误码阈值, 可选值为 400 和 500, 默认值500
                     * 
                     */
                    void SetReturnCodeThreshold(const uint64_t& _returnCodeThreshold);

                    /**
                     * 判断参数 ReturnCodeThreshold 是否已赋值
                     * @return ReturnCodeThreshold 是否已赋值
                     * 
                     */
                    bool ReturnCodeThresholdHasBeenSet() const;

                    /**
                     * 获取跟随 3XX 重定向 ，不开启为 DISABLED， 开启为 ENABLED，默认不开启
                     * @return EnableRedirect 跟随 3XX 重定向 ，不开启为 DISABLED， 开启为 ENABLED，默认不开启
                     * 
                     */
                    std::string GetEnableRedirect() const;

                    /**
                     * 设置跟随 3XX 重定向 ，不开启为 DISABLED， 开启为 ENABLED，默认不开启
                     * @param _enableRedirect 跟随 3XX 重定向 ，不开启为 DISABLED， 开启为 ENABLED，默认不开启
                     * 
                     */
                    void SetEnableRedirect(const std::string& _enableRedirect);

                    /**
                     * 判断参数 EnableRedirect 是否已赋值
                     * @return EnableRedirect 是否已赋值
                     * 
                     */
                    bool EnableRedirectHasBeenSet() const;

                    /**
                     * 获取启用 SNI，不开启为 DISABLED， 开启为 ENABLED，默认不开启
                     * @return EnableSni 启用 SNI，不开启为 DISABLED， 开启为 ENABLED，默认不开启
                     * 
                     */
                    std::string GetEnableSni() const;

                    /**
                     * 设置启用 SNI，不开启为 DISABLED， 开启为 ENABLED，默认不开启
                     * @param _enableSni 启用 SNI，不开启为 DISABLED， 开启为 ENABLED，默认不开启
                     * 
                     */
                    void SetEnableSni(const std::string& _enableSni);

                    /**
                     * 判断参数 EnableSni 是否已赋值
                     * @return EnableSni 是否已赋值
                     * 
                     */
                    bool EnableSniHasBeenSet() const;

                    /**
                     * 获取丢包率告警阈值，当CheckProtocol=ping时必填，取值在10 30 50 80 90 100
                     * @return PacketLossRate 丢包率告警阈值，当CheckProtocol=ping时必填，取值在10 30 50 80 90 100
                     * 
                     */
                    uint64_t GetPacketLossRate() const;

                    /**
                     * 设置丢包率告警阈值，当CheckProtocol=ping时必填，取值在10 30 50 80 90 100
                     * @param _packetLossRate 丢包率告警阈值，当CheckProtocol=ping时必填，取值在10 30 50 80 90 100
                     * 
                     */
                    void SetPacketLossRate(const uint64_t& _packetLossRate);

                    /**
                     * 判断参数 PacketLossRate 是否已赋值
                     * @return PacketLossRate 是否已赋值
                     * 
                     */
                    bool PacketLossRateHasBeenSet() const;

                    /**
                     * 获取持续周期数，可选值1-5
                     * @return ContinuePeriod 持续周期数，可选值1-5
                     * 
                     */
                    uint64_t GetContinuePeriod() const;

                    /**
                     * 设置持续周期数，可选值1-5
                     * @param _continuePeriod 持续周期数，可选值1-5
                     * 
                     */
                    void SetContinuePeriod(const uint64_t& _continuePeriod);

                    /**
                     * 判断参数 ContinuePeriod 是否已赋值
                     * @return ContinuePeriod 是否已赋值
                     * 
                     */
                    bool ContinuePeriodHasBeenSet() const;

                private:

                    /**
                     * 监控器id
                     */
                    uint64_t m_monitorId;
                    bool m_monitorIdHasBeenSet;

                    /**
                     * 监控器名称
                     */
                    std::string m_monitorName;
                    bool m_monitorNameHasBeenSet;

                    /**
                     * 检查协议，可选值 PING TCP HTTP HTTPS
                     */
                    std::string m_checkProtocol;
                    bool m_checkProtocolHasBeenSet;

                    /**
                     * 检查间隔（秒），可选值 15 60 120 300
                     */
                    uint64_t m_checkInterval;
                    bool m_checkIntervalHasBeenSet;

                    /**
                     * 超时时间，单位:秒，可选值 2  3  5  10
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * 重试次数，可选值为 0，1，2
                     */
                    uint64_t m_failTimes;
                    bool m_failTimesHasBeenSet;

                    /**
                     * 失败比例，可选值为 20 30 40 50 60 70 80 100，默认值为50
                     */
                    uint64_t m_failRate;
                    bool m_failRateHasBeenSet;

                    /**
                     * 监控节点类型，可选值有AUTO INTERNAL OVERSEAS IPV6 ALL
                     */
                    std::string m_detectorStyle;
                    bool m_detectorStyleHasBeenSet;

                    /**
                     * 探测器组id列表
                     */
                    std::vector<uint64_t> m_detectorGroupIds;
                    bool m_detectorGroupIdsHasBeenSet;

                    /**
                     * PING 包数目， 当CheckProtocol=ping时必填，可选值 20 50 100
                     */
                    uint64_t m_pingNum;
                    bool m_pingNumHasBeenSet;

                    /**
                     * 检查端口，可选值为1-65535之间的整数
                     */
                    uint64_t m_tcpPort;
                    bool m_tcpPortHasBeenSet;

                    /**
                     * Host 设置，默认为业务域名
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * URL 路径，默认为“/”
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 返回错误码阈值, 可选值为 400 和 500, 默认值500
                     */
                    uint64_t m_returnCodeThreshold;
                    bool m_returnCodeThresholdHasBeenSet;

                    /**
                     * 跟随 3XX 重定向 ，不开启为 DISABLED， 开启为 ENABLED，默认不开启
                     */
                    std::string m_enableRedirect;
                    bool m_enableRedirectHasBeenSet;

                    /**
                     * 启用 SNI，不开启为 DISABLED， 开启为 ENABLED，默认不开启
                     */
                    std::string m_enableSni;
                    bool m_enableSniHasBeenSet;

                    /**
                     * 丢包率告警阈值，当CheckProtocol=ping时必填，取值在10 30 50 80 90 100
                     */
                    uint64_t m_packetLossRate;
                    bool m_packetLossRateHasBeenSet;

                    /**
                     * 持续周期数，可选值1-5
                     */
                    uint64_t m_continuePeriod;
                    bool m_continuePeriodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IGTM_V20231024_MODEL_MODIFYMONITORREQUEST_H_
