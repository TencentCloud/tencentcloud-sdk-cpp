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
                     * 获取<p>设备类型：field或remote</p>
                     * @return DeviceType <p>设备类型：field或remote</p>
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置<p>设备类型：field或remote</p>
                     * @param _deviceType <p>设备类型：field或remote</p>
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
                     * 获取<p>起始点位时间，单位：秒</p>
                     * @return StartTime <p>起始点位时间，单位：秒</p>
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置<p>起始点位时间，单位：秒</p>
                     * @param _startTime <p>起始点位时间，单位：秒</p>
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
                     * 获取<p>结束点位时间，单位：秒</p>
                     * @return EndTime <p>结束点位时间，单位：秒</p>
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置<p>结束点位时间，单位：秒</p>
                     * @param _endTime <p>结束点位时间，单位：秒</p>
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
                     * 获取<p>会话ID</p>
                     * @return SessionId <p>会话ID</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>会话ID</p>
                     * @param _sessionId <p>会话ID</p>
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
                     * 获取<p>码率，单位：kbps</p>
                     * @return Rate <p>码率，单位：kbps</p>
                     * 
                     */
                    std::vector<int64_t> GetRate() const;

                    /**
                     * 设置<p>码率，单位：kbps</p>
                     * @param _rate <p>码率，单位：kbps</p>
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
                     * 获取<p>帧率</p>
                     * @return Fps <p>帧率</p>
                     * 
                     */
                    std::vector<int64_t> GetFps() const;

                    /**
                     * 设置<p>帧率</p>
                     * @param _fps <p>帧率</p>
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
                     * 获取<p>丢包率，单位：%</p>
                     * @return Lost <p>丢包率，单位：%</p>
                     * 
                     */
                    std::vector<double> GetLost() const;

                    /**
                     * 设置<p>丢包率，单位：%</p>
                     * @param _lost <p>丢包率，单位：%</p>
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
                     * 获取<p>网络时延，单位：ms</p>
                     * @return NetworkLatency <p>网络时延，单位：ms</p>
                     * 
                     */
                    std::vector<int64_t> GetNetworkLatency() const;

                    /**
                     * 设置<p>网络时延，单位：ms</p>
                     * @param _networkLatency <p>网络时延，单位：ms</p>
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
                     * 获取<p>视频时延，单位：ms</p>
                     * @return VideoLatency <p>视频时延，单位：ms</p>
                     * 
                     */
                    std::vector<int64_t> GetVideoLatency() const;

                    /**
                     * 设置<p>视频时延，单位：ms</p>
                     * @param _videoLatency <p>视频时延，单位：ms</p>
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
                     * 获取<p>CPU使用率，单位：%</p>
                     * @return CpuUsed <p>CPU使用率，单位：%</p>
                     * 
                     */
                    std::vector<double> GetCpuUsed() const;

                    /**
                     * 设置<p>CPU使用率，单位：%</p>
                     * @param _cpuUsed <p>CPU使用率，单位：%</p>
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
                     * 获取<p>内存使用率，单位：%</p>
                     * @return MemUsed <p>内存使用率，单位：%</p>
                     * 
                     */
                    std::vector<double> GetMemUsed() const;

                    /**
                     * 设置<p>内存使用率，单位：%</p>
                     * @param _memUsed <p>内存使用率，单位：%</p>
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
                     * 获取<p>时间偏移量，单位：秒</p>
                     * @return TimeOffset <p>时间偏移量，单位：秒</p>
                     * 
                     */
                    std::vector<uint64_t> GetTimeOffset() const;

                    /**
                     * 设置<p>时间偏移量，单位：秒</p>
                     * @param _timeOffset <p>时间偏移量，单位：秒</p>
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
                     * 获取<p>项目ID</p>
                     * @return ProjectId <p>项目ID</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>项目ID</p>
                     * @param _projectId <p>项目ID</p>
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
                     * 获取<p>设备ID</p>
                     * @return DeviceId <p>设备ID</p>
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置<p>设备ID</p>
                     * @param _deviceId <p>设备ID</p>
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
                     * 获取<p>sdk版本</p>
                     * @return Ver <p>sdk版本</p>
                     * 
                     */
                    std::string GetVer() const;

                    /**
                     * 设置<p>sdk版本</p>
                     * @param _ver <p>sdk版本</p>
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
                     * 获取<p>模式(p2p/server)</p>
                     * @return SdkMode <p>模式(p2p/server)</p>
                     * 
                     */
                    std::string GetSdkMode() const;

                    /**
                     * 设置<p>模式(p2p/server)</p>
                     * @param _sdkMode <p>模式(p2p/server)</p>
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
                     * 获取<p>解码耗时，单位：ms</p>
                     * @return DecodeCost <p>解码耗时，单位：ms</p>
                     * 
                     */
                    std::vector<int64_t> GetDecodeCost() const;

                    /**
                     * 设置<p>解码耗时，单位：ms</p>
                     * @param _decodeCost <p>解码耗时，单位：ms</p>
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
                     * 获取<p>【已废弃，使用RenderCost】</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RenderConst <p>【已废弃，使用RenderCost】</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::vector<int64_t> GetRenderConst() const;

                    /**
                     * 设置<p>【已废弃，使用RenderCost】</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _renderConst <p>【已废弃，使用RenderCost】</p>
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
                     * 获取<p>卡顿k100</p>
                     * @return K100 <p>卡顿k100</p>
                     * 
                     */
                    std::vector<double> GetK100() const;

                    /**
                     * 设置<p>卡顿k100</p>
                     * @param _k100 <p>卡顿k100</p>
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
                     * 获取<p>卡顿k150</p>
                     * @return K150 <p>卡顿k150</p>
                     * 
                     */
                    std::vector<double> GetK150() const;

                    /**
                     * 设置<p>卡顿k150</p>
                     * @param _k150 <p>卡顿k150</p>
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
                     * 获取<p>nack请求数</p>
                     * @return NACK <p>nack请求数</p>
                     * 
                     */
                    std::vector<int64_t> GetNACK() const;

                    /**
                     * 设置<p>nack请求数</p>
                     * @param _nACK <p>nack请求数</p>
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
                     * 获取<p>服务端调控码率,单位：kbps</p>
                     * @return BitRateEstimate <p>服务端调控码率,单位：kbps</p>
                     * 
                     */
                    std::vector<int64_t> GetBitRateEstimate() const;

                    /**
                     * 设置<p>服务端调控码率,单位：kbps</p>
                     * @param _bitRateEstimate <p>服务端调控码率,单位：kbps</p>
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
                     * 获取<p>宽度</p>
                     * @return Width <p>宽度</p>
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置<p>宽度</p>
                     * @param _width <p>宽度</p>
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
                     * 获取<p>高度</p>
                     * @return Height <p>高度</p>
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置<p>高度</p>
                     * @param _height <p>高度</p>
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
                     * 获取<p>编码耗时，单位：ms</p>
                     * @return EncodeCost <p>编码耗时，单位：ms</p>
                     * 
                     */
                    std::vector<int64_t> GetEncodeCost() const;

                    /**
                     * 设置<p>编码耗时，单位：ms</p>
                     * @param _encodeCost <p>编码耗时，单位：ms</p>
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
                     * 获取<p>采集耗时，单位：ms</p>
                     * @return CaptureCost <p>采集耗时，单位：ms</p>
                     * 
                     */
                    std::vector<int64_t> GetCaptureCost() const;

                    /**
                     * 设置<p>采集耗时，单位：ms</p>
                     * @param _captureCost <p>采集耗时，单位：ms</p>
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
                     * 获取<p>渲染耗时，单位：ms</p>
                     * @return RenderCost <p>渲染耗时，单位：ms</p>
                     * 
                     */
                    std::vector<int64_t> GetRenderCost() const;

                    /**
                     * 设置<p>渲染耗时，单位：ms</p>
                     * @param _renderCost <p>渲染耗时，单位：ms</p>
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
                     * 获取<p>配置宽度</p>
                     * @return ConfigWidth <p>配置宽度</p>
                     * 
                     */
                    int64_t GetConfigWidth() const;

                    /**
                     * 设置<p>配置宽度</p>
                     * @param _configWidth <p>配置宽度</p>
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
                     * 获取<p>配置高度</p>
                     * @return ConfigHeight <p>配置高度</p>
                     * 
                     */
                    int64_t GetConfigHeight() const;

                    /**
                     * 设置<p>配置高度</p>
                     * @param _configHeight <p>配置高度</p>
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
                     * 获取<p>平均帧间隔</p>
                     * @return FrameDelta <p>平均帧间隔</p>
                     * 
                     */
                    std::vector<int64_t> GetFrameDelta() const;

                    /**
                     * 设置<p>平均帧间隔</p>
                     * @param _frameDelta <p>平均帧间隔</p>
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
                     * 获取<p>最大帧间隔</p>
                     * @return MaxFrameDelta <p>最大帧间隔</p>
                     * 
                     */
                    std::vector<int64_t> GetMaxFrameDelta() const;

                    /**
                     * 设置<p>最大帧间隔</p>
                     * @param _maxFrameDelta <p>最大帧间隔</p>
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
                     * 获取<p>总码率评估,单位：kbps</p>
                     * @return TotalBitrateEstimate <p>总码率评估,单位：kbps</p>
                     * 
                     */
                    std::vector<int64_t> GetTotalBitrateEstimate() const;

                    /**
                     * 设置<p>总码率评估,单位：kbps</p>
                     * @param _totalBitrateEstimate <p>总码率评估,单位：kbps</p>
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
                     * 获取<p>帧间隔大于100ms的卡顿时长</p>
                     * @return Lag100Duration <p>帧间隔大于100ms的卡顿时长</p>
                     * 
                     */
                    std::vector<int64_t> GetLag100Duration() const;

                    /**
                     * 设置<p>帧间隔大于100ms的卡顿时长</p>
                     * @param _lag100Duration <p>帧间隔大于100ms的卡顿时长</p>
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
                     * 获取<p>帧间隔大于150ms的卡顿时长</p>
                     * @return Lag150Duration <p>帧间隔大于150ms的卡顿时长</p>
                     * 
                     */
                    std::vector<int64_t> GetLag150Duration() const;

                    /**
                     * 设置<p>帧间隔大于150ms的卡顿时长</p>
                     * @param _lag150Duration <p>帧间隔大于150ms的卡顿时长</p>
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
                     * 获取<p>是否开启多网：0 单网，1 多网</p>
                     * @return MultiMode <p>是否开启多网：0 单网，1 多网</p>
                     * 
                     */
                    int64_t GetMultiMode() const;

                    /**
                     * 设置<p>是否开启多网：0 单网，1 多网</p>
                     * @param _multiMode <p>是否开启多网：0 单网，1 多网</p>
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
                     * 获取<p>多网卡信息</p>
                     * @return MultiNet <p>多网卡信息</p>
                     * 
                     */
                    std::vector<MultiNet> GetMultiNet() const;

                    /**
                     * 设置<p>多网卡信息</p>
                     * @param _multiNet <p>多网卡信息</p>
                     * 
                     */
                    void SetMultiNet(const std::vector<MultiNet>& _multiNet);

                    /**
                     * 判断参数 MultiNet 是否已赋值
                     * @return MultiNet 是否已赋值
                     * 
                     */
                    bool MultiNetHasBeenSet() const;

                    /**
                     * 获取<p>现场设备和远端设备消息通道往返延迟</p><p>单位：毫秒ms</p>
                     * @return ControlLatency <p>现场设备和远端设备消息通道往返延迟</p><p>单位：毫秒ms</p>
                     * 
                     */
                    std::vector<int64_t> GetControlLatency() const;

                    /**
                     * 设置<p>现场设备和远端设备消息通道往返延迟</p><p>单位：毫秒ms</p>
                     * @param _controlLatency <p>现场设备和远端设备消息通道往返延迟</p><p>单位：毫秒ms</p>
                     * 
                     */
                    void SetControlLatency(const std::vector<int64_t>& _controlLatency);

                    /**
                     * 判断参数 ControlLatency 是否已赋值
                     * @return ControlLatency 是否已赋值
                     * 
                     */
                    bool ControlLatencyHasBeenSet() const;

                private:

                    /**
                     * <p>设备类型：field或remote</p>
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * <p>起始点位时间，单位：秒</p>
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束点位时间，单位：秒</p>
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>会话ID</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>码率，单位：kbps</p>
                     */
                    std::vector<int64_t> m_rate;
                    bool m_rateHasBeenSet;

                    /**
                     * <p>帧率</p>
                     */
                    std::vector<int64_t> m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * <p>丢包率，单位：%</p>
                     */
                    std::vector<double> m_lost;
                    bool m_lostHasBeenSet;

                    /**
                     * <p>网络时延，单位：ms</p>
                     */
                    std::vector<int64_t> m_networkLatency;
                    bool m_networkLatencyHasBeenSet;

                    /**
                     * <p>视频时延，单位：ms</p>
                     */
                    std::vector<int64_t> m_videoLatency;
                    bool m_videoLatencyHasBeenSet;

                    /**
                     * <p>CPU使用率，单位：%</p>
                     */
                    std::vector<double> m_cpuUsed;
                    bool m_cpuUsedHasBeenSet;

                    /**
                     * <p>内存使用率，单位：%</p>
                     */
                    std::vector<double> m_memUsed;
                    bool m_memUsedHasBeenSet;

                    /**
                     * <p>时间偏移量，单位：秒</p>
                     */
                    std::vector<uint64_t> m_timeOffset;
                    bool m_timeOffsetHasBeenSet;

                    /**
                     * <p>项目ID</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>设备ID</p>
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * <p>sdk版本</p>
                     */
                    std::string m_ver;
                    bool m_verHasBeenSet;

                    /**
                     * <p>模式(p2p/server)</p>
                     */
                    std::string m_sdkMode;
                    bool m_sdkModeHasBeenSet;

                    /**
                     * <p>解码耗时，单位：ms</p>
                     */
                    std::vector<int64_t> m_decodeCost;
                    bool m_decodeCostHasBeenSet;

                    /**
                     * <p>【已废弃，使用RenderCost】</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_renderConst;
                    bool m_renderConstHasBeenSet;

                    /**
                     * <p>卡顿k100</p>
                     */
                    std::vector<double> m_k100;
                    bool m_k100HasBeenSet;

                    /**
                     * <p>卡顿k150</p>
                     */
                    std::vector<double> m_k150;
                    bool m_k150HasBeenSet;

                    /**
                     * <p>nack请求数</p>
                     */
                    std::vector<int64_t> m_nACK;
                    bool m_nACKHasBeenSet;

                    /**
                     * <p>服务端调控码率,单位：kbps</p>
                     */
                    std::vector<int64_t> m_bitRateEstimate;
                    bool m_bitRateEstimateHasBeenSet;

                    /**
                     * <p>宽度</p>
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * <p>高度</p>
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * <p>编码耗时，单位：ms</p>
                     */
                    std::vector<int64_t> m_encodeCost;
                    bool m_encodeCostHasBeenSet;

                    /**
                     * <p>采集耗时，单位：ms</p>
                     */
                    std::vector<int64_t> m_captureCost;
                    bool m_captureCostHasBeenSet;

                    /**
                     * <p>渲染耗时，单位：ms</p>
                     */
                    std::vector<int64_t> m_renderCost;
                    bool m_renderCostHasBeenSet;

                    /**
                     * <p>配置宽度</p>
                     */
                    int64_t m_configWidth;
                    bool m_configWidthHasBeenSet;

                    /**
                     * <p>配置高度</p>
                     */
                    int64_t m_configHeight;
                    bool m_configHeightHasBeenSet;

                    /**
                     * <p>平均帧间隔</p>
                     */
                    std::vector<int64_t> m_frameDelta;
                    bool m_frameDeltaHasBeenSet;

                    /**
                     * <p>最大帧间隔</p>
                     */
                    std::vector<int64_t> m_maxFrameDelta;
                    bool m_maxFrameDeltaHasBeenSet;

                    /**
                     * <p>总码率评估,单位：kbps</p>
                     */
                    std::vector<int64_t> m_totalBitrateEstimate;
                    bool m_totalBitrateEstimateHasBeenSet;

                    /**
                     * <p>帧间隔大于100ms的卡顿时长</p>
                     */
                    std::vector<int64_t> m_lag100Duration;
                    bool m_lag100DurationHasBeenSet;

                    /**
                     * <p>帧间隔大于150ms的卡顿时长</p>
                     */
                    std::vector<int64_t> m_lag150Duration;
                    bool m_lag150DurationHasBeenSet;

                    /**
                     * <p>是否开启多网：0 单网，1 多网</p>
                     */
                    int64_t m_multiMode;
                    bool m_multiModeHasBeenSet;

                    /**
                     * <p>多网卡信息</p>
                     */
                    std::vector<MultiNet> m_multiNet;
                    bool m_multiNetHasBeenSet;

                    /**
                     * <p>现场设备和远端设备消息通道往返延迟</p><p>单位：毫秒ms</p>
                     */
                    std::vector<int64_t> m_controlLatency;
                    bool m_controlLatencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_SESSIONDEVICEDETAIL_H_
