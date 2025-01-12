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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_SESSIONDEVICEDETAIL_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_SESSIONDEVICEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trro/v20220325/model/MultiNet.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * 会话数据详单（按设备区分）
                */
                class SessionDeviceDetail : public AbstractModel
                {
                public:
                    SessionDeviceDetail();
                    ~SessionDeviceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备类型：field或remote
                     * @return DeviceType 设备类型：field或remote
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置设备类型：field或remote
                     * @param _deviceType 设备类型：field或remote
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取起始点位时间，单位：秒
                     * @return StartTime 起始点位时间，单位：秒
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置起始点位时间，单位：秒
                     * @param _startTime 起始点位时间，单位：秒
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束点位时间，单位：秒
                     * @return EndTime 结束点位时间，单位：秒
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置结束点位时间，单位：秒
                     * @param _endTime 结束点位时间，单位：秒
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取会话ID
                     * @return SessionId 会话ID
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置会话ID
                     * @param _sessionId 会话ID
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取码率，单位：kbps
                     * @return Rate 码率，单位：kbps
                     * 
                     */
                    std::vector<int64_t> GetRate() const;

                    /**
                     * 设置码率，单位：kbps
                     * @param _rate 码率，单位：kbps
                     * 
                     */
                    void SetRate(const std::vector<int64_t>& _rate);

                    /**
                     * 判断参数 Rate 是否已赋值
                     * @return Rate 是否已赋值
                     * 
                     */
                    bool RateHasBeenSet() const;

                    /**
                     * 获取帧率
                     * @return Fps 帧率
                     * 
                     */
                    std::vector<int64_t> GetFps() const;

                    /**
                     * 设置帧率
                     * @param _fps 帧率
                     * 
                     */
                    void SetFps(const std::vector<int64_t>& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     * 
                     */
                    bool FpsHasBeenSet() const;

                    /**
                     * 获取丢包率，单位：%
                     * @return Lost 丢包率，单位：%
                     * 
                     */
                    std::vector<double> GetLost() const;

                    /**
                     * 设置丢包率，单位：%
                     * @param _lost 丢包率，单位：%
                     * 
                     */
                    void SetLost(const std::vector<double>& _lost);

                    /**
                     * 判断参数 Lost 是否已赋值
                     * @return Lost 是否已赋值
                     * 
                     */
                    bool LostHasBeenSet() const;

                    /**
                     * 获取网络时延，单位：ms
                     * @return NetworkLatency 网络时延，单位：ms
                     * 
                     */
                    std::vector<int64_t> GetNetworkLatency() const;

                    /**
                     * 设置网络时延，单位：ms
                     * @param _networkLatency 网络时延，单位：ms
                     * 
                     */
                    void SetNetworkLatency(const std::vector<int64_t>& _networkLatency);

                    /**
                     * 判断参数 NetworkLatency 是否已赋值
                     * @return NetworkLatency 是否已赋值
                     * 
                     */
                    bool NetworkLatencyHasBeenSet() const;

                    /**
                     * 获取视频时延，单位：ms
                     * @return VideoLatency 视频时延，单位：ms
                     * 
                     */
                    std::vector<int64_t> GetVideoLatency() const;

                    /**
                     * 设置视频时延，单位：ms
                     * @param _videoLatency 视频时延，单位：ms
                     * 
                     */
                    void SetVideoLatency(const std::vector<int64_t>& _videoLatency);

                    /**
                     * 判断参数 VideoLatency 是否已赋值
                     * @return VideoLatency 是否已赋值
                     * 
                     */
                    bool VideoLatencyHasBeenSet() const;

                    /**
                     * 获取CPU使用率，单位：%
                     * @return CpuUsed CPU使用率，单位：%
                     * 
                     */
                    std::vector<double> GetCpuUsed() const;

                    /**
                     * 设置CPU使用率，单位：%
                     * @param _cpuUsed CPU使用率，单位：%
                     * 
                     */
                    void SetCpuUsed(const std::vector<double>& _cpuUsed);

                    /**
                     * 判断参数 CpuUsed 是否已赋值
                     * @return CpuUsed 是否已赋值
                     * 
                     */
                    bool CpuUsedHasBeenSet() const;

                    /**
                     * 获取内存使用率，单位：%
                     * @return MemUsed 内存使用率，单位：%
                     * 
                     */
                    std::vector<double> GetMemUsed() const;

                    /**
                     * 设置内存使用率，单位：%
                     * @param _memUsed 内存使用率，单位：%
                     * 
                     */
                    void SetMemUsed(const std::vector<double>& _memUsed);

                    /**
                     * 判断参数 MemUsed 是否已赋值
                     * @return MemUsed 是否已赋值
                     * 
                     */
                    bool MemUsedHasBeenSet() const;

                    /**
                     * 获取时间偏移量，单位：秒
                     * @return TimeOffset 时间偏移量，单位：秒
                     * 
                     */
                    std::vector<uint64_t> GetTimeOffset() const;

                    /**
                     * 设置时间偏移量，单位：秒
                     * @param _timeOffset 时间偏移量，单位：秒
                     * 
                     */
                    void SetTimeOffset(const std::vector<uint64_t>& _timeOffset);

                    /**
                     * 判断参数 TimeOffset 是否已赋值
                     * @return TimeOffset 是否已赋值
                     * 
                     */
                    bool TimeOffsetHasBeenSet() const;

                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取设备ID
                     * @return DeviceId 设备ID
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备ID
                     * @param _deviceId 设备ID
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取sdk版本
                     * @return Ver sdk版本
                     * 
                     */
                    std::string GetVer() const;

                    /**
                     * 设置sdk版本
                     * @param _ver sdk版本
                     * 
                     */
                    void SetVer(const std::string& _ver);

                    /**
                     * 判断参数 Ver 是否已赋值
                     * @return Ver 是否已赋值
                     * 
                     */
                    bool VerHasBeenSet() const;

                    /**
                     * 获取模式(p2p/server)
                     * @return SdkMode 模式(p2p/server)
                     * 
                     */
                    std::string GetSdkMode() const;

                    /**
                     * 设置模式(p2p/server)
                     * @param _sdkMode 模式(p2p/server)
                     * 
                     */
                    void SetSdkMode(const std::string& _sdkMode);

                    /**
                     * 判断参数 SdkMode 是否已赋值
                     * @return SdkMode 是否已赋值
                     * 
                     */
                    bool SdkModeHasBeenSet() const;

                    /**
                     * 获取解码耗时，单位：ms
                     * @return DecodeCost 解码耗时，单位：ms
                     * 
                     */
                    std::vector<int64_t> GetDecodeCost() const;

                    /**
                     * 设置解码耗时，单位：ms
                     * @param _decodeCost 解码耗时，单位：ms
                     * 
                     */
                    void SetDecodeCost(const std::vector<int64_t>& _decodeCost);

                    /**
                     * 判断参数 DecodeCost 是否已赋值
                     * @return DecodeCost 是否已赋值
                     * 
                     */
                    bool DecodeCostHasBeenSet() const;

                    /**
                     * 获取【已废弃，使用RenderCost】
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RenderConst 【已废弃，使用RenderCost】
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::vector<int64_t> GetRenderConst() const;

                    /**
                     * 设置【已废弃，使用RenderCost】
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _renderConst 【已废弃，使用RenderCost】
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetRenderConst(const std::vector<int64_t>& _renderConst);

                    /**
                     * 判断参数 RenderConst 是否已赋值
                     * @return RenderConst 是否已赋值
                     * @deprecated
                     */
                    bool RenderConstHasBeenSet() const;

                    /**
                     * 获取卡顿k100
                     * @return K100 卡顿k100
                     * 
                     */
                    std::vector<double> GetK100() const;

                    /**
                     * 设置卡顿k100
                     * @param _k100 卡顿k100
                     * 
                     */
                    void SetK100(const std::vector<double>& _k100);

                    /**
                     * 判断参数 K100 是否已赋值
                     * @return K100 是否已赋值
                     * 
                     */
                    bool K100HasBeenSet() const;

                    /**
                     * 获取卡顿k150
                     * @return K150 卡顿k150
                     * 
                     */
                    std::vector<double> GetK150() const;

                    /**
                     * 设置卡顿k150
                     * @param _k150 卡顿k150
                     * 
                     */
                    void SetK150(const std::vector<double>& _k150);

                    /**
                     * 判断参数 K150 是否已赋值
                     * @return K150 是否已赋值
                     * 
                     */
                    bool K150HasBeenSet() const;

                    /**
                     * 获取nack请求数
                     * @return NACK nack请求数
                     * 
                     */
                    std::vector<int64_t> GetNACK() const;

                    /**
                     * 设置nack请求数
                     * @param _nACK nack请求数
                     * 
                     */
                    void SetNACK(const std::vector<int64_t>& _nACK);

                    /**
                     * 判断参数 NACK 是否已赋值
                     * @return NACK 是否已赋值
                     * 
                     */
                    bool NACKHasBeenSet() const;

                    /**
                     * 获取服务端调控码率,单位：kbps
                     * @return BitRateEstimate 服务端调控码率,单位：kbps
                     * 
                     */
                    std::vector<int64_t> GetBitRateEstimate() const;

                    /**
                     * 设置服务端调控码率,单位：kbps
                     * @param _bitRateEstimate 服务端调控码率,单位：kbps
                     * 
                     */
                    void SetBitRateEstimate(const std::vector<int64_t>& _bitRateEstimate);

                    /**
                     * 判断参数 BitRateEstimate 是否已赋值
                     * @return BitRateEstimate 是否已赋值
                     * 
                     */
                    bool BitRateEstimateHasBeenSet() const;

                    /**
                     * 获取宽度
                     * @return Width 宽度
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置宽度
                     * @param _width 宽度
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取高度
                     * @return Height 高度
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置高度
                     * @param _height 高度
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取编码耗时，单位：ms
                     * @return EncodeCost 编码耗时，单位：ms
                     * 
                     */
                    std::vector<int64_t> GetEncodeCost() const;

                    /**
                     * 设置编码耗时，单位：ms
                     * @param _encodeCost 编码耗时，单位：ms
                     * 
                     */
                    void SetEncodeCost(const std::vector<int64_t>& _encodeCost);

                    /**
                     * 判断参数 EncodeCost 是否已赋值
                     * @return EncodeCost 是否已赋值
                     * 
                     */
                    bool EncodeCostHasBeenSet() const;

                    /**
                     * 获取采集耗时，单位：ms
                     * @return CaptureCost 采集耗时，单位：ms
                     * 
                     */
                    std::vector<int64_t> GetCaptureCost() const;

                    /**
                     * 设置采集耗时，单位：ms
                     * @param _captureCost 采集耗时，单位：ms
                     * 
                     */
                    void SetCaptureCost(const std::vector<int64_t>& _captureCost);

                    /**
                     * 判断参数 CaptureCost 是否已赋值
                     * @return CaptureCost 是否已赋值
                     * 
                     */
                    bool CaptureCostHasBeenSet() const;

                    /**
                     * 获取渲染耗时，单位：ms
                     * @return RenderCost 渲染耗时，单位：ms
                     * 
                     */
                    std::vector<int64_t> GetRenderCost() const;

                    /**
                     * 设置渲染耗时，单位：ms
                     * @param _renderCost 渲染耗时，单位：ms
                     * 
                     */
                    void SetRenderCost(const std::vector<int64_t>& _renderCost);

                    /**
                     * 判断参数 RenderCost 是否已赋值
                     * @return RenderCost 是否已赋值
                     * 
                     */
                    bool RenderCostHasBeenSet() const;

                    /**
                     * 获取配置宽度
                     * @return ConfigWidth 配置宽度
                     * 
                     */
                    int64_t GetConfigWidth() const;

                    /**
                     * 设置配置宽度
                     * @param _configWidth 配置宽度
                     * 
                     */
                    void SetConfigWidth(const int64_t& _configWidth);

                    /**
                     * 判断参数 ConfigWidth 是否已赋值
                     * @return ConfigWidth 是否已赋值
                     * 
                     */
                    bool ConfigWidthHasBeenSet() const;

                    /**
                     * 获取配置高度
                     * @return ConfigHeight 配置高度
                     * 
                     */
                    int64_t GetConfigHeight() const;

                    /**
                     * 设置配置高度
                     * @param _configHeight 配置高度
                     * 
                     */
                    void SetConfigHeight(const int64_t& _configHeight);

                    /**
                     * 判断参数 ConfigHeight 是否已赋值
                     * @return ConfigHeight 是否已赋值
                     * 
                     */
                    bool ConfigHeightHasBeenSet() const;

                    /**
                     * 获取平均帧间隔
                     * @return FrameDelta 平均帧间隔
                     * 
                     */
                    std::vector<int64_t> GetFrameDelta() const;

                    /**
                     * 设置平均帧间隔
                     * @param _frameDelta 平均帧间隔
                     * 
                     */
                    void SetFrameDelta(const std::vector<int64_t>& _frameDelta);

                    /**
                     * 判断参数 FrameDelta 是否已赋值
                     * @return FrameDelta 是否已赋值
                     * 
                     */
                    bool FrameDeltaHasBeenSet() const;

                    /**
                     * 获取最大帧间隔
                     * @return MaxFrameDelta 最大帧间隔
                     * 
                     */
                    std::vector<int64_t> GetMaxFrameDelta() const;

                    /**
                     * 设置最大帧间隔
                     * @param _maxFrameDelta 最大帧间隔
                     * 
                     */
                    void SetMaxFrameDelta(const std::vector<int64_t>& _maxFrameDelta);

                    /**
                     * 判断参数 MaxFrameDelta 是否已赋值
                     * @return MaxFrameDelta 是否已赋值
                     * 
                     */
                    bool MaxFrameDeltaHasBeenSet() const;

                    /**
                     * 获取总码率评估,单位：kbps
                     * @return TotalBitrateEstimate 总码率评估,单位：kbps
                     * 
                     */
                    std::vector<int64_t> GetTotalBitrateEstimate() const;

                    /**
                     * 设置总码率评估,单位：kbps
                     * @param _totalBitrateEstimate 总码率评估,单位：kbps
                     * 
                     */
                    void SetTotalBitrateEstimate(const std::vector<int64_t>& _totalBitrateEstimate);

                    /**
                     * 判断参数 TotalBitrateEstimate 是否已赋值
                     * @return TotalBitrateEstimate 是否已赋值
                     * 
                     */
                    bool TotalBitrateEstimateHasBeenSet() const;

                    /**
                     * 获取帧间隔大于100ms的卡顿时长
                     * @return Lag100Duration 帧间隔大于100ms的卡顿时长
                     * 
                     */
                    std::vector<int64_t> GetLag100Duration() const;

                    /**
                     * 设置帧间隔大于100ms的卡顿时长
                     * @param _lag100Duration 帧间隔大于100ms的卡顿时长
                     * 
                     */
                    void SetLag100Duration(const std::vector<int64_t>& _lag100Duration);

                    /**
                     * 判断参数 Lag100Duration 是否已赋值
                     * @return Lag100Duration 是否已赋值
                     * 
                     */
                    bool Lag100DurationHasBeenSet() const;

                    /**
                     * 获取帧间隔大于150ms的卡顿时长
                     * @return Lag150Duration 帧间隔大于150ms的卡顿时长
                     * 
                     */
                    std::vector<int64_t> GetLag150Duration() const;

                    /**
                     * 设置帧间隔大于150ms的卡顿时长
                     * @param _lag150Duration 帧间隔大于150ms的卡顿时长
                     * 
                     */
                    void SetLag150Duration(const std::vector<int64_t>& _lag150Duration);

                    /**
                     * 判断参数 Lag150Duration 是否已赋值
                     * @return Lag150Duration 是否已赋值
                     * 
                     */
                    bool Lag150DurationHasBeenSet() const;

                    /**
                     * 获取是否开启多网：0 单网，1 多网
                     * @return MultiMode 是否开启多网：0 单网，1 多网
                     * 
                     */
                    int64_t GetMultiMode() const;

                    /**
                     * 设置是否开启多网：0 单网，1 多网
                     * @param _multiMode 是否开启多网：0 单网，1 多网
                     * 
                     */
                    void SetMultiMode(const int64_t& _multiMode);

                    /**
                     * 判断参数 MultiMode 是否已赋值
                     * @return MultiMode 是否已赋值
                     * 
                     */
                    bool MultiModeHasBeenSet() const;

                    /**
                     * 获取多网卡信息
                     * @return MultiNet 多网卡信息
                     * 
                     */
                    std::vector<MultiNet> GetMultiNet() const;

                    /**
                     * 设置多网卡信息
                     * @param _multiNet 多网卡信息
                     * 
                     */
                    void SetMultiNet(const std::vector<MultiNet>& _multiNet);

                    /**
                     * 判断参数 MultiNet 是否已赋值
                     * @return MultiNet 是否已赋值
                     * 
                     */
                    bool MultiNetHasBeenSet() const;

                private:

                    /**
                     * 设备类型：field或remote
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 起始点位时间，单位：秒
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束点位时间，单位：秒
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 会话ID
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 码率，单位：kbps
                     */
                    std::vector<int64_t> m_rate;
                    bool m_rateHasBeenSet;

                    /**
                     * 帧率
                     */
                    std::vector<int64_t> m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * 丢包率，单位：%
                     */
                    std::vector<double> m_lost;
                    bool m_lostHasBeenSet;

                    /**
                     * 网络时延，单位：ms
                     */
                    std::vector<int64_t> m_networkLatency;
                    bool m_networkLatencyHasBeenSet;

                    /**
                     * 视频时延，单位：ms
                     */
                    std::vector<int64_t> m_videoLatency;
                    bool m_videoLatencyHasBeenSet;

                    /**
                     * CPU使用率，单位：%
                     */
                    std::vector<double> m_cpuUsed;
                    bool m_cpuUsedHasBeenSet;

                    /**
                     * 内存使用率，单位：%
                     */
                    std::vector<double> m_memUsed;
                    bool m_memUsedHasBeenSet;

                    /**
                     * 时间偏移量，单位：秒
                     */
                    std::vector<uint64_t> m_timeOffset;
                    bool m_timeOffsetHasBeenSet;

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 设备ID
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * sdk版本
                     */
                    std::string m_ver;
                    bool m_verHasBeenSet;

                    /**
                     * 模式(p2p/server)
                     */
                    std::string m_sdkMode;
                    bool m_sdkModeHasBeenSet;

                    /**
                     * 解码耗时，单位：ms
                     */
                    std::vector<int64_t> m_decodeCost;
                    bool m_decodeCostHasBeenSet;

                    /**
                     * 【已废弃，使用RenderCost】
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_renderConst;
                    bool m_renderConstHasBeenSet;

                    /**
                     * 卡顿k100
                     */
                    std::vector<double> m_k100;
                    bool m_k100HasBeenSet;

                    /**
                     * 卡顿k150
                     */
                    std::vector<double> m_k150;
                    bool m_k150HasBeenSet;

                    /**
                     * nack请求数
                     */
                    std::vector<int64_t> m_nACK;
                    bool m_nACKHasBeenSet;

                    /**
                     * 服务端调控码率,单位：kbps
                     */
                    std::vector<int64_t> m_bitRateEstimate;
                    bool m_bitRateEstimateHasBeenSet;

                    /**
                     * 宽度
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 高度
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 编码耗时，单位：ms
                     */
                    std::vector<int64_t> m_encodeCost;
                    bool m_encodeCostHasBeenSet;

                    /**
                     * 采集耗时，单位：ms
                     */
                    std::vector<int64_t> m_captureCost;
                    bool m_captureCostHasBeenSet;

                    /**
                     * 渲染耗时，单位：ms
                     */
                    std::vector<int64_t> m_renderCost;
                    bool m_renderCostHasBeenSet;

                    /**
                     * 配置宽度
                     */
                    int64_t m_configWidth;
                    bool m_configWidthHasBeenSet;

                    /**
                     * 配置高度
                     */
                    int64_t m_configHeight;
                    bool m_configHeightHasBeenSet;

                    /**
                     * 平均帧间隔
                     */
                    std::vector<int64_t> m_frameDelta;
                    bool m_frameDeltaHasBeenSet;

                    /**
                     * 最大帧间隔
                     */
                    std::vector<int64_t> m_maxFrameDelta;
                    bool m_maxFrameDeltaHasBeenSet;

                    /**
                     * 总码率评估,单位：kbps
                     */
                    std::vector<int64_t> m_totalBitrateEstimate;
                    bool m_totalBitrateEstimateHasBeenSet;

                    /**
                     * 帧间隔大于100ms的卡顿时长
                     */
                    std::vector<int64_t> m_lag100Duration;
                    bool m_lag100DurationHasBeenSet;

                    /**
                     * 帧间隔大于150ms的卡顿时长
                     */
                    std::vector<int64_t> m_lag150Duration;
                    bool m_lag150DurationHasBeenSet;

                    /**
                     * 是否开启多网：0 单网，1 多网
                     */
                    int64_t m_multiMode;
                    bool m_multiModeHasBeenSet;

                    /**
                     * 多网卡信息
                     */
                    std::vector<MultiNet> m_multiNet;
                    bool m_multiNetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_SESSIONDEVICEDETAIL_H_
