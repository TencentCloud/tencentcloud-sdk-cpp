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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_TRANSCODEDETAILINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_TRANSCODEDETAILINFO_H_

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
                * 转码详细信息。
                */
                class TranscodeDetailInfo : public AbstractModel
                {
                public:
                    TranscodeDetailInfo();
                    ~TranscodeDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取流名称。
                     * @return StreamName 流名称。
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置流名称。
                     * @param _streamName 流名称。
                     * 
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     * 
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取开始时间（北京时间），格式：yyyy-mm-dd HH:MM。
                     * @return StartTime 开始时间（北京时间），格式：yyyy-mm-dd HH:MM。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间（北京时间），格式：yyyy-mm-dd HH:MM。
                     * @param _startTime 开始时间（北京时间），格式：yyyy-mm-dd HH:MM。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间（北京时间），格式：yyyy-mm-dd HH:MM。
                     * @return EndTime 结束时间（北京时间），格式：yyyy-mm-dd HH:MM。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间（北京时间），格式：yyyy-mm-dd HH:MM。
                     * @param _endTime 结束时间（北京时间），格式：yyyy-mm-dd HH:MM。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取转码时长，单位：分钟。
注意：因推流过程中可能有中断重推情况，此处时长为真实转码时长累加值，并非结束时间和开始时间的间隔。
                     * @return Duration 转码时长，单位：分钟。
注意：因推流过程中可能有中断重推情况，此处时长为真实转码时长累加值，并非结束时间和开始时间的间隔。
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置转码时长，单位：分钟。
注意：因推流过程中可能有中断重推情况，此处时长为真实转码时长累加值，并非结束时间和开始时间的间隔。
                     * @param _duration 转码时长，单位：分钟。
注意：因推流过程中可能有中断重推情况，此处时长为真实转码时长累加值，并非结束时间和开始时间的间隔。
                     * 
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取编码方式，带模块，
示例：
liveprocessor_ACC:  音频转码，
liveprocessor_H264：直播转码-H264，
liveprocessor_H265： 直播转码-H265，
topspeed_H264：极速高清-H264，
topspeed_H265：极速高清-H265。
                     * @return ModuleCodec 编码方式，带模块，
示例：
liveprocessor_ACC:  音频转码，
liveprocessor_H264：直播转码-H264，
liveprocessor_H265： 直播转码-H265，
topspeed_H264：极速高清-H264，
topspeed_H265：极速高清-H265。
                     * 
                     */
                    std::string GetModuleCodec() const;

                    /**
                     * 设置编码方式，带模块，
示例：
liveprocessor_ACC:  音频转码，
liveprocessor_H264：直播转码-H264，
liveprocessor_H265： 直播转码-H265，
topspeed_H264：极速高清-H264，
topspeed_H265：极速高清-H265。
                     * @param _moduleCodec 编码方式，带模块，
示例：
liveprocessor_ACC:  音频转码，
liveprocessor_H264：直播转码-H264，
liveprocessor_H265： 直播转码-H265，
topspeed_H264：极速高清-H264，
topspeed_H265：极速高清-H265。
                     * 
                     */
                    void SetModuleCodec(const std::string& _moduleCodec);

                    /**
                     * 判断参数 ModuleCodec 是否已赋值
                     * @return ModuleCodec 是否已赋值
                     * 
                     */
                    bool ModuleCodecHasBeenSet() const;

                    /**
                     * 获取码率。
                     * @return Bitrate 码率。
                     * 
                     */
                    uint64_t GetBitrate() const;

                    /**
                     * 设置码率。
                     * @param _bitrate 码率。
                     * 
                     */
                    void SetBitrate(const uint64_t& _bitrate);

                    /**
                     * 判断参数 Bitrate 是否已赋值
                     * @return Bitrate 是否已赋值
                     * 
                     */
                    bool BitrateHasBeenSet() const;

                    /**
                     * 获取类型，包含：转码（Transcode），混流（MixStream），水印（WaterMark），快直播（Webrtc）。
                     * @return Type 类型，包含：转码（Transcode），混流（MixStream），水印（WaterMark），快直播（Webrtc）。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型，包含：转码（Transcode），混流（MixStream），水印（WaterMark），快直播（Webrtc）。
                     * @param _type 类型，包含：转码（Transcode），混流（MixStream），水印（WaterMark），快直播（Webrtc）。
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
                     * 获取推流域名。
                     * @return PushDomain 推流域名。
                     * 
                     */
                    std::string GetPushDomain() const;

                    /**
                     * 设置推流域名。
                     * @param _pushDomain 推流域名。
                     * 
                     */
                    void SetPushDomain(const std::string& _pushDomain);

                    /**
                     * 判断参数 PushDomain 是否已赋值
                     * @return PushDomain 是否已赋值
                     * 
                     */
                    bool PushDomainHasBeenSet() const;

                    /**
                     * 获取分辨率。
                     * @return Resolution 分辨率。
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置分辨率。
                     * @param _resolution 分辨率。
                     * 
                     */
                    void SetResolution(const std::string& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取地域：
Mainland：国内。
Overseas：海外。
                     * @return MainlandOrOversea 地域：
Mainland：国内。
Overseas：海外。
                     * 
                     */
                    std::string GetMainlandOrOversea() const;

                    /**
                     * 设置地域：
Mainland：国内。
Overseas：海外。
                     * @param _mainlandOrOversea 地域：
Mainland：国内。
Overseas：海外。
                     * 
                     */
                    void SetMainlandOrOversea(const std::string& _mainlandOrOversea);

                    /**
                     * 判断参数 MainlandOrOversea 是否已赋值
                     * @return MainlandOrOversea 是否已赋值
                     * 
                     */
                    bool MainlandOrOverseaHasBeenSet() const;

                private:

                    /**
                     * 流名称。
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * 开始时间（北京时间），格式：yyyy-mm-dd HH:MM。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间（北京时间），格式：yyyy-mm-dd HH:MM。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 转码时长，单位：分钟。
注意：因推流过程中可能有中断重推情况，此处时长为真实转码时长累加值，并非结束时间和开始时间的间隔。
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 编码方式，带模块，
示例：
liveprocessor_ACC:  音频转码，
liveprocessor_H264：直播转码-H264，
liveprocessor_H265： 直播转码-H265，
topspeed_H264：极速高清-H264，
topspeed_H265：极速高清-H265。
                     */
                    std::string m_moduleCodec;
                    bool m_moduleCodecHasBeenSet;

                    /**
                     * 码率。
                     */
                    uint64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * 类型，包含：转码（Transcode），混流（MixStream），水印（WaterMark），快直播（Webrtc）。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 推流域名。
                     */
                    std::string m_pushDomain;
                    bool m_pushDomainHasBeenSet;

                    /**
                     * 分辨率。
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * 地域：
Mainland：国内。
Overseas：海外。
                     */
                    std::string m_mainlandOrOversea;
                    bool m_mainlandOrOverseaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_TRANSCODEDETAILINFO_H_
