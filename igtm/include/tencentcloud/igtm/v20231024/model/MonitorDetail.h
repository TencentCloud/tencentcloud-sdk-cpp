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

#ifndef TENCENTCLOUD_IGTM_V20231024_MODEL_MONITORDETAIL_H_
#define TENCENTCLOUD_IGTM_V20231024_MODEL_MONITORDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 监控器详情
                */
                class MonitorDetail : public AbstractModel
                {
                public:
                    MonitorDetail();
                    ~MonitorDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取探测规则id
                     * @return MonitorId 探测规则id
                     * 
                     */
                    uint64_t GetMonitorId() const;

                    /**
                     * 设置探测规则id
                     * @param _monitorId 探测规则id
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MonitorName 监控器名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMonitorName() const;

                    /**
                     * 设置监控器名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _monitorName 监控器名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取所属用户
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uin 所属用户
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置所属用户
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uin 所属用户
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取监控节点id组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DetectorGroupIds 监控节点id组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<uint64_t> GetDetectorGroupIds() const;

                    /**
                     * 设置监控节点id组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _detectorGroupIds 监控节点id组
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取探测协议 PING TCP HTTP HTTPS
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckProtocol 探测协议 PING TCP HTTP HTTPS
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCheckProtocol() const;

                    /**
                     * 设置探测协议 PING TCP HTTP HTTPS
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _checkProtocol 探测协议 PING TCP HTTP HTTPS
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取探测周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckInterval 探测周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCheckInterval() const;

                    /**
                     * 设置探测周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _checkInterval 探测周期
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取发包数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PingNum 发包数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPingNum() const;

                    /**
                     * 设置发包数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pingNum 发包数量
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取tcp端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TcpPort tcp端口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTcpPort() const;

                    /**
                     * 设置tcp端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tcpPort tcp端口
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取探测 host
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Host 探测 host
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置探测 host
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _host 探测 host
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取探测路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Path 探测路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置探测路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _path 探测路径
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取返回值阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReturnCodeThreshold 返回值阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetReturnCodeThreshold() const;

                    /**
                     * 设置返回值阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _returnCodeThreshold 返回值阈值
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取是否开启3xx重定向跟随 ENABLED DISABLED
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableRedirect 是否开启3xx重定向跟随 ENABLED DISABLED
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEnableRedirect() const;

                    /**
                     * 设置是否开启3xx重定向跟随 ENABLED DISABLED
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableRedirect 是否开启3xx重定向跟随 ENABLED DISABLED
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取是否启用 sni
ENABLED DISABLED
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableSni 是否启用 sni
ENABLED DISABLED
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEnableSni() const;

                    /**
                     * 设置是否启用 sni
ENABLED DISABLED
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableSni 是否启用 sni
ENABLED DISABLED
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取丢包率上限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PacketLossRate 丢包率上限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPacketLossRate() const;

                    /**
                     * 设置丢包率上限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _packetLossRate 丢包率上限
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取探测超时
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Timeout 探测超时
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置探测超时
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeout 探测超时
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取失败次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailTimes 失败次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFailTimes() const;

                    /**
                     * 设置失败次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failTimes 失败次数
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取失败率上限100
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailRate 失败率上限100
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFailRate() const;

                    /**
                     * 设置失败率上限100
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failRate 失败率上限100
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedOn 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdOn 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedOn 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdatedOn() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedOn 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdatedOn(const std::string& _updatedOn);

                    /**
                     * 判断参数 UpdatedOn 是否已赋值
                     * @return UpdatedOn 是否已赋值
                     * 
                     */
                    bool UpdatedOnHasBeenSet() const;

                    /**
                     * 获取监控节点类型
AUTO INTERNAL OVERSEAS IPV6 ALL
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DetectorStyle 监控节点类型
AUTO INTERNAL OVERSEAS IPV6 ALL
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDetectorStyle() const;

                    /**
                     * 设置监控节点类型
AUTO INTERNAL OVERSEAS IPV6 ALL
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _detectorStyle 监控节点类型
AUTO INTERNAL OVERSEAS IPV6 ALL
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取探测次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DetectNum 探测次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDetectNum() const;

                    /**
                     * 设置探测次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _detectNum 探测次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDetectNum(const uint64_t& _detectNum);

                    /**
                     * 判断参数 DetectNum 是否已赋值
                     * @return DetectNum 是否已赋值
                     * 
                     */
                    bool DetectNumHasBeenSet() const;

                    /**
                     * 获取持续周期数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContinuePeriod 持续周期数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetContinuePeriod() const;

                    /**
                     * 设置持续周期数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _continuePeriod 持续周期数
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 探测规则id
                     */
                    uint64_t m_monitorId;
                    bool m_monitorIdHasBeenSet;

                    /**
                     * 监控器名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_monitorName;
                    bool m_monitorNameHasBeenSet;

                    /**
                     * 所属用户
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 监控节点id组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<uint64_t> m_detectorGroupIds;
                    bool m_detectorGroupIdsHasBeenSet;

                    /**
                     * 探测协议 PING TCP HTTP HTTPS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_checkProtocol;
                    bool m_checkProtocolHasBeenSet;

                    /**
                     * 探测周期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_checkInterval;
                    bool m_checkIntervalHasBeenSet;

                    /**
                     * 发包数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_pingNum;
                    bool m_pingNumHasBeenSet;

                    /**
                     * tcp端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_tcpPort;
                    bool m_tcpPortHasBeenSet;

                    /**
                     * 探测 host
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 探测路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 返回值阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_returnCodeThreshold;
                    bool m_returnCodeThresholdHasBeenSet;

                    /**
                     * 是否开启3xx重定向跟随 ENABLED DISABLED
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_enableRedirect;
                    bool m_enableRedirectHasBeenSet;

                    /**
                     * 是否启用 sni
ENABLED DISABLED
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_enableSni;
                    bool m_enableSniHasBeenSet;

                    /**
                     * 丢包率上限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_packetLossRate;
                    bool m_packetLossRateHasBeenSet;

                    /**
                     * 探测超时
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * 失败次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_failTimes;
                    bool m_failTimesHasBeenSet;

                    /**
                     * 失败率上限100
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_failRate;
                    bool m_failRateHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedOn;
                    bool m_updatedOnHasBeenSet;

                    /**
                     * 监控节点类型
AUTO INTERNAL OVERSEAS IPV6 ALL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_detectorStyle;
                    bool m_detectorStyleHasBeenSet;

                    /**
                     * 探测次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_detectNum;
                    bool m_detectNumHasBeenSet;

                    /**
                     * 持续周期数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_continuePeriod;
                    bool m_continuePeriodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IGTM_V20231024_MODEL_MONITORDETAIL_H_
