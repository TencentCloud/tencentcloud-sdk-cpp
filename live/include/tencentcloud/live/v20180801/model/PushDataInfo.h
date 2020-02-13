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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_PUSHDATAINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_PUSHDATAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 推流数据信息
                */
                class PushDataInfo : public AbstractModel
                {
                public:
                    PushDataInfo();
                    ~PushDataInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取流名称。
                     * @return StreamName 流名称。
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置流名称。
                     * @param StreamName 流名称。
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取推流路径。
                     * @return AppName 推流路径。
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置推流路径。
                     * @param AppName 推流路径。
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取推流客户端ip。
                     * @return ClientIp 推流客户端ip。
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置推流客户端ip。
                     * @param ClientIp 推流客户端ip。
                     */
                    void SetClientIp(const std::string& _clientIp);

                    /**
                     * 判断参数 ClientIp 是否已赋值
                     * @return ClientIp 是否已赋值
                     */
                    bool ClientIpHasBeenSet() const;

                    /**
                     * 获取接流服务器ip。
                     * @return ServerIp 接流服务器ip。
                     */
                    std::string GetServerIp() const;

                    /**
                     * 设置接流服务器ip。
                     * @param ServerIp 接流服务器ip。
                     */
                    void SetServerIp(const std::string& _serverIp);

                    /**
                     * 判断参数 ServerIp 是否已赋值
                     * @return ServerIp 是否已赋值
                     */
                    bool ServerIpHasBeenSet() const;

                    /**
                     * 获取推流视频帧率，单位是Hz。
                     * @return VideoFps 推流视频帧率，单位是Hz。
                     */
                    uint64_t GetVideoFps() const;

                    /**
                     * 设置推流视频帧率，单位是Hz。
                     * @param VideoFps 推流视频帧率，单位是Hz。
                     */
                    void SetVideoFps(const uint64_t& _videoFps);

                    /**
                     * 判断参数 VideoFps 是否已赋值
                     * @return VideoFps 是否已赋值
                     */
                    bool VideoFpsHasBeenSet() const;

                    /**
                     * 获取推流视频码率，单位是bps。
                     * @return VideoSpeed 推流视频码率，单位是bps。
                     */
                    uint64_t GetVideoSpeed() const;

                    /**
                     * 设置推流视频码率，单位是bps。
                     * @param VideoSpeed 推流视频码率，单位是bps。
                     */
                    void SetVideoSpeed(const uint64_t& _videoSpeed);

                    /**
                     * 判断参数 VideoSpeed 是否已赋值
                     * @return VideoSpeed 是否已赋值
                     */
                    bool VideoSpeedHasBeenSet() const;

                    /**
                     * 获取推流音频帧率，单位是Hz。
                     * @return AudioFps 推流音频帧率，单位是Hz。
                     */
                    uint64_t GetAudioFps() const;

                    /**
                     * 设置推流音频帧率，单位是Hz。
                     * @param AudioFps 推流音频帧率，单位是Hz。
                     */
                    void SetAudioFps(const uint64_t& _audioFps);

                    /**
                     * 判断参数 AudioFps 是否已赋值
                     * @return AudioFps 是否已赋值
                     */
                    bool AudioFpsHasBeenSet() const;

                    /**
                     * 获取推流音频码率，单位是bps。
                     * @return AudioSpeed 推流音频码率，单位是bps。
                     */
                    uint64_t GetAudioSpeed() const;

                    /**
                     * 设置推流音频码率，单位是bps。
                     * @param AudioSpeed 推流音频码率，单位是bps。
                     */
                    void SetAudioSpeed(const uint64_t& _audioSpeed);

                    /**
                     * 判断参数 AudioSpeed 是否已赋值
                     * @return AudioSpeed 是否已赋值
                     */
                    bool AudioSpeedHasBeenSet() const;

                    /**
                     * 获取推流域名。
                     * @return PushDomain 推流域名。
                     */
                    std::string GetPushDomain() const;

                    /**
                     * 设置推流域名。
                     * @param PushDomain 推流域名。
                     */
                    void SetPushDomain(const std::string& _pushDomain);

                    /**
                     * 判断参数 PushDomain 是否已赋值
                     * @return PushDomain 是否已赋值
                     */
                    bool PushDomainHasBeenSet() const;

                    /**
                     * 获取推流开始时间。
                     * @return BeginPushTime 推流开始时间。
                     */
                    std::string GetBeginPushTime() const;

                    /**
                     * 设置推流开始时间。
                     * @param BeginPushTime 推流开始时间。
                     */
                    void SetBeginPushTime(const std::string& _beginPushTime);

                    /**
                     * 判断参数 BeginPushTime 是否已赋值
                     * @return BeginPushTime 是否已赋值
                     */
                    bool BeginPushTimeHasBeenSet() const;

                    /**
                     * 获取音频编码格式，
例："AAC"。
                     * @return Acodec 音频编码格式，
例："AAC"。
                     */
                    std::string GetAcodec() const;

                    /**
                     * 设置音频编码格式，
例："AAC"。
                     * @param Acodec 音频编码格式，
例："AAC"。
                     */
                    void SetAcodec(const std::string& _acodec);

                    /**
                     * 判断参数 Acodec 是否已赋值
                     * @return Acodec 是否已赋值
                     */
                    bool AcodecHasBeenSet() const;

                    /**
                     * 获取视频编码格式，
例："H264"。
                     * @return Vcodec 视频编码格式，
例："H264"。
                     */
                    std::string GetVcodec() const;

                    /**
                     * 设置视频编码格式，
例："H264"。
                     * @param Vcodec 视频编码格式，
例："H264"。
                     */
                    void SetVcodec(const std::string& _vcodec);

                    /**
                     * 判断参数 Vcodec 是否已赋值
                     * @return Vcodec 是否已赋值
                     */
                    bool VcodecHasBeenSet() const;

                    /**
                     * 获取分辨率。
                     * @return Resolution 分辨率。
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置分辨率。
                     * @param Resolution 分辨率。
                     */
                    void SetResolution(const std::string& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取采样率。
                     * @return AsampleRate 采样率。
                     */
                    uint64_t GetAsampleRate() const;

                    /**
                     * 设置采样率。
                     * @param AsampleRate 采样率。
                     */
                    void SetAsampleRate(const uint64_t& _asampleRate);

                    /**
                     * 判断参数 AsampleRate 是否已赋值
                     * @return AsampleRate 是否已赋值
                     */
                    bool AsampleRateHasBeenSet() const;

                private:

                    /**
                     * 流名称。
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * 推流路径。
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 推流客户端ip。
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                    /**
                     * 接流服务器ip。
                     */
                    std::string m_serverIp;
                    bool m_serverIpHasBeenSet;

                    /**
                     * 推流视频帧率，单位是Hz。
                     */
                    uint64_t m_videoFps;
                    bool m_videoFpsHasBeenSet;

                    /**
                     * 推流视频码率，单位是bps。
                     */
                    uint64_t m_videoSpeed;
                    bool m_videoSpeedHasBeenSet;

                    /**
                     * 推流音频帧率，单位是Hz。
                     */
                    uint64_t m_audioFps;
                    bool m_audioFpsHasBeenSet;

                    /**
                     * 推流音频码率，单位是bps。
                     */
                    uint64_t m_audioSpeed;
                    bool m_audioSpeedHasBeenSet;

                    /**
                     * 推流域名。
                     */
                    std::string m_pushDomain;
                    bool m_pushDomainHasBeenSet;

                    /**
                     * 推流开始时间。
                     */
                    std::string m_beginPushTime;
                    bool m_beginPushTimeHasBeenSet;

                    /**
                     * 音频编码格式，
例："AAC"。
                     */
                    std::string m_acodec;
                    bool m_acodecHasBeenSet;

                    /**
                     * 视频编码格式，
例："H264"。
                     */
                    std::string m_vcodec;
                    bool m_vcodecHasBeenSet;

                    /**
                     * 分辨率。
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * 采样率。
                     */
                    uint64_t m_asampleRate;
                    bool m_asampleRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_PUSHDATAINFO_H_
