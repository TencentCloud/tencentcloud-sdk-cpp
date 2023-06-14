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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_SESSIONDEVICEDETAIL_H_
