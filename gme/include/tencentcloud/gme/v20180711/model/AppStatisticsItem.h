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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_APPSTATISTICSITEM_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_APPSTATISTICSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gme/v20180711/model/RealTimeSpeechStatisticsItem.h>
#include <tencentcloud/gme/v20180711/model/VoiceMessageStatisticsItem.h>
#include <tencentcloud/gme/v20180711/model/VoiceFilterStatisticsItem.h>
#include <tencentcloud/gme/v20180711/model/AudioTextStatisticsItem.h>
#include <tencentcloud/gme/v20180711/model/StreamTextStatisticsItem.h>
#include <tencentcloud/gme/v20180711/model/OverseaTextStatisticsItem.h>
#include <tencentcloud/gme/v20180711/model/RealtimeTextStatisticsItem.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * 应用用量统计数据
                */
                class AppStatisticsItem : public AbstractModel
                {
                public:
                    AppStatisticsItem();
                    ~AppStatisticsItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实时语音统计数据
                     * @return RealtimeSpeechStatisticsItem 实时语音统计数据
                     * 
                     */
                    RealTimeSpeechStatisticsItem GetRealtimeSpeechStatisticsItem() const;

                    /**
                     * 设置实时语音统计数据
                     * @param _realtimeSpeechStatisticsItem 实时语音统计数据
                     * 
                     */
                    void SetRealtimeSpeechStatisticsItem(const RealTimeSpeechStatisticsItem& _realtimeSpeechStatisticsItem);

                    /**
                     * 判断参数 RealtimeSpeechStatisticsItem 是否已赋值
                     * @return RealtimeSpeechStatisticsItem 是否已赋值
                     * 
                     */
                    bool RealtimeSpeechStatisticsItemHasBeenSet() const;

                    /**
                     * 获取语音消息统计数据
                     * @return VoiceMessageStatisticsItem 语音消息统计数据
                     * 
                     */
                    VoiceMessageStatisticsItem GetVoiceMessageStatisticsItem() const;

                    /**
                     * 设置语音消息统计数据
                     * @param _voiceMessageStatisticsItem 语音消息统计数据
                     * 
                     */
                    void SetVoiceMessageStatisticsItem(const VoiceMessageStatisticsItem& _voiceMessageStatisticsItem);

                    /**
                     * 判断参数 VoiceMessageStatisticsItem 是否已赋值
                     * @return VoiceMessageStatisticsItem 是否已赋值
                     * 
                     */
                    bool VoiceMessageStatisticsItemHasBeenSet() const;

                    /**
                     * 获取语音过滤统计数据
                     * @return VoiceFilterStatisticsItem 语音过滤统计数据
                     * 
                     */
                    VoiceFilterStatisticsItem GetVoiceFilterStatisticsItem() const;

                    /**
                     * 设置语音过滤统计数据
                     * @param _voiceFilterStatisticsItem 语音过滤统计数据
                     * 
                     */
                    void SetVoiceFilterStatisticsItem(const VoiceFilterStatisticsItem& _voiceFilterStatisticsItem);

                    /**
                     * 判断参数 VoiceFilterStatisticsItem 是否已赋值
                     * @return VoiceFilterStatisticsItem 是否已赋值
                     * 
                     */
                    bool VoiceFilterStatisticsItemHasBeenSet() const;

                    /**
                     * 获取统计时间
                     * @return Date 统计时间
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置统计时间
                     * @param _date 统计时间
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取录音转文本用量统计数据
                     * @return AudioTextStatisticsItem 录音转文本用量统计数据
                     * 
                     */
                    AudioTextStatisticsItem GetAudioTextStatisticsItem() const;

                    /**
                     * 设置录音转文本用量统计数据
                     * @param _audioTextStatisticsItem 录音转文本用量统计数据
                     * 
                     */
                    void SetAudioTextStatisticsItem(const AudioTextStatisticsItem& _audioTextStatisticsItem);

                    /**
                     * 判断参数 AudioTextStatisticsItem 是否已赋值
                     * @return AudioTextStatisticsItem 是否已赋值
                     * 
                     */
                    bool AudioTextStatisticsItemHasBeenSet() const;

                    /**
                     * 获取流式转文本用量数据
                     * @return StreamTextStatisticsItem 流式转文本用量数据
                     * 
                     */
                    StreamTextStatisticsItem GetStreamTextStatisticsItem() const;

                    /**
                     * 设置流式转文本用量数据
                     * @param _streamTextStatisticsItem 流式转文本用量数据
                     * 
                     */
                    void SetStreamTextStatisticsItem(const StreamTextStatisticsItem& _streamTextStatisticsItem);

                    /**
                     * 判断参数 StreamTextStatisticsItem 是否已赋值
                     * @return StreamTextStatisticsItem 是否已赋值
                     * 
                     */
                    bool StreamTextStatisticsItemHasBeenSet() const;

                    /**
                     * 获取海外转文本用量数据
                     * @return OverseaTextStatisticsItem 海外转文本用量数据
                     * 
                     */
                    OverseaTextStatisticsItem GetOverseaTextStatisticsItem() const;

                    /**
                     * 设置海外转文本用量数据
                     * @param _overseaTextStatisticsItem 海外转文本用量数据
                     * 
                     */
                    void SetOverseaTextStatisticsItem(const OverseaTextStatisticsItem& _overseaTextStatisticsItem);

                    /**
                     * 判断参数 OverseaTextStatisticsItem 是否已赋值
                     * @return OverseaTextStatisticsItem 是否已赋值
                     * 
                     */
                    bool OverseaTextStatisticsItemHasBeenSet() const;

                    /**
                     * 获取实时语音转文本用量数据
                     * @return RealtimeTextStatisticsItem 实时语音转文本用量数据
                     * 
                     */
                    RealtimeTextStatisticsItem GetRealtimeTextStatisticsItem() const;

                    /**
                     * 设置实时语音转文本用量数据
                     * @param _realtimeTextStatisticsItem 实时语音转文本用量数据
                     * 
                     */
                    void SetRealtimeTextStatisticsItem(const RealtimeTextStatisticsItem& _realtimeTextStatisticsItem);

                    /**
                     * 判断参数 RealtimeTextStatisticsItem 是否已赋值
                     * @return RealtimeTextStatisticsItem 是否已赋值
                     * 
                     */
                    bool RealtimeTextStatisticsItemHasBeenSet() const;

                private:

                    /**
                     * 实时语音统计数据
                     */
                    RealTimeSpeechStatisticsItem m_realtimeSpeechStatisticsItem;
                    bool m_realtimeSpeechStatisticsItemHasBeenSet;

                    /**
                     * 语音消息统计数据
                     */
                    VoiceMessageStatisticsItem m_voiceMessageStatisticsItem;
                    bool m_voiceMessageStatisticsItemHasBeenSet;

                    /**
                     * 语音过滤统计数据
                     */
                    VoiceFilterStatisticsItem m_voiceFilterStatisticsItem;
                    bool m_voiceFilterStatisticsItemHasBeenSet;

                    /**
                     * 统计时间
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 录音转文本用量统计数据
                     */
                    AudioTextStatisticsItem m_audioTextStatisticsItem;
                    bool m_audioTextStatisticsItemHasBeenSet;

                    /**
                     * 流式转文本用量数据
                     */
                    StreamTextStatisticsItem m_streamTextStatisticsItem;
                    bool m_streamTextStatisticsItemHasBeenSet;

                    /**
                     * 海外转文本用量数据
                     */
                    OverseaTextStatisticsItem m_overseaTextStatisticsItem;
                    bool m_overseaTextStatisticsItemHasBeenSet;

                    /**
                     * 实时语音转文本用量数据
                     */
                    RealtimeTextStatisticsItem m_realtimeTextStatisticsItem;
                    bool m_realtimeTextStatisticsItemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_APPSTATISTICSITEM_H_
