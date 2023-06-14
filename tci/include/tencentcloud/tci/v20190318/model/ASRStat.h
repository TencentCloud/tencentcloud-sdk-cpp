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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_ASRSTAT_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_ASRSTAT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * 当前音频的统计结果
                */
                class ASRStat : public AbstractModel
                {
                public:
                    ASRStat();
                    ~ASRStat() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当前音频的平均语速
                     * @return AvgSpeed 当前音频的平均语速
                     * 
                     */
                    double GetAvgSpeed() const;

                    /**
                     * 设置当前音频的平均语速
                     * @param _avgSpeed 当前音频的平均语速
                     * 
                     */
                    void SetAvgSpeed(const double& _avgSpeed);

                    /**
                     * 判断参数 AvgSpeed 是否已赋值
                     * @return AvgSpeed 是否已赋值
                     * 
                     */
                    bool AvgSpeedHasBeenSet() const;

                    /**
                     * 获取Vad的平均音量
                     * @return AvgVolume Vad的平均音量
                     * 
                     */
                    double GetAvgVolume() const;

                    /**
                     * 设置Vad的平均音量
                     * @param _avgVolume Vad的平均音量
                     * 
                     */
                    void SetAvgVolume(const double& _avgVolume);

                    /**
                     * 判断参数 AvgVolume 是否已赋值
                     * @return AvgVolume 是否已赋值
                     * 
                     */
                    bool AvgVolumeHasBeenSet() const;

                    /**
                     * 获取Vad的最大音量
                     * @return MaxVolume Vad的最大音量
                     * 
                     */
                    double GetMaxVolume() const;

                    /**
                     * 设置Vad的最大音量
                     * @param _maxVolume Vad的最大音量
                     * 
                     */
                    void SetMaxVolume(const double& _maxVolume);

                    /**
                     * 判断参数 MaxVolume 是否已赋值
                     * @return MaxVolume 是否已赋值
                     * 
                     */
                    bool MaxVolumeHasBeenSet() const;

                    /**
                     * 获取Vad的最小音量
                     * @return MinVolume Vad的最小音量
                     * 
                     */
                    double GetMinVolume() const;

                    /**
                     * 设置Vad的最小音量
                     * @param _minVolume Vad的最小音量
                     * 
                     */
                    void SetMinVolume(const double& _minVolume);

                    /**
                     * 判断参数 MinVolume 是否已赋值
                     * @return MinVolume 是否已赋值
                     * 
                     */
                    bool MinVolumeHasBeenSet() const;

                    /**
                     * 获取当前音频的非发音时长
                     * @return MuteDuration 当前音频的非发音时长
                     * 
                     */
                    int64_t GetMuteDuration() const;

                    /**
                     * 设置当前音频的非发音时长
                     * @param _muteDuration 当前音频的非发音时长
                     * 
                     */
                    void SetMuteDuration(const int64_t& _muteDuration);

                    /**
                     * 判断参数 MuteDuration 是否已赋值
                     * @return MuteDuration 是否已赋值
                     * 
                     */
                    bool MuteDurationHasBeenSet() const;

                    /**
                     * 获取当前音频的发音时长
                     * @return SoundDuration 当前音频的发音时长
                     * 
                     */
                    int64_t GetSoundDuration() const;

                    /**
                     * 设置当前音频的发音时长
                     * @param _soundDuration 当前音频的发音时长
                     * 
                     */
                    void SetSoundDuration(const int64_t& _soundDuration);

                    /**
                     * 判断参数 SoundDuration 是否已赋值
                     * @return SoundDuration 是否已赋值
                     * 
                     */
                    bool SoundDurationHasBeenSet() const;

                    /**
                     * 获取当前音频的总时长
                     * @return TotalDuration 当前音频的总时长
                     * 
                     */
                    int64_t GetTotalDuration() const;

                    /**
                     * 设置当前音频的总时长
                     * @param _totalDuration 当前音频的总时长
                     * 
                     */
                    void SetTotalDuration(const int64_t& _totalDuration);

                    /**
                     * 判断参数 TotalDuration 是否已赋值
                     * @return TotalDuration 是否已赋值
                     * 
                     */
                    bool TotalDurationHasBeenSet() const;

                    /**
                     * 获取当前音频的句子总数
                     * @return VadNum 当前音频的句子总数
                     * 
                     */
                    int64_t GetVadNum() const;

                    /**
                     * 设置当前音频的句子总数
                     * @param _vadNum 当前音频的句子总数
                     * 
                     */
                    void SetVadNum(const int64_t& _vadNum);

                    /**
                     * 判断参数 VadNum 是否已赋值
                     * @return VadNum 是否已赋值
                     * 
                     */
                    bool VadNumHasBeenSet() const;

                    /**
                     * 获取当前音频的单词总数
                     * @return WordNum 当前音频的单词总数
                     * 
                     */
                    int64_t GetWordNum() const;

                    /**
                     * 设置当前音频的单词总数
                     * @param _wordNum 当前音频的单词总数
                     * 
                     */
                    void SetWordNum(const int64_t& _wordNum);

                    /**
                     * 判断参数 WordNum 是否已赋值
                     * @return WordNum 是否已赋值
                     * 
                     */
                    bool WordNumHasBeenSet() const;

                private:

                    /**
                     * 当前音频的平均语速
                     */
                    double m_avgSpeed;
                    bool m_avgSpeedHasBeenSet;

                    /**
                     * Vad的平均音量
                     */
                    double m_avgVolume;
                    bool m_avgVolumeHasBeenSet;

                    /**
                     * Vad的最大音量
                     */
                    double m_maxVolume;
                    bool m_maxVolumeHasBeenSet;

                    /**
                     * Vad的最小音量
                     */
                    double m_minVolume;
                    bool m_minVolumeHasBeenSet;

                    /**
                     * 当前音频的非发音时长
                     */
                    int64_t m_muteDuration;
                    bool m_muteDurationHasBeenSet;

                    /**
                     * 当前音频的发音时长
                     */
                    int64_t m_soundDuration;
                    bool m_soundDurationHasBeenSet;

                    /**
                     * 当前音频的总时长
                     */
                    int64_t m_totalDuration;
                    bool m_totalDurationHasBeenSet;

                    /**
                     * 当前音频的句子总数
                     */
                    int64_t m_vadNum;
                    bool m_vadNumHasBeenSet;

                    /**
                     * 当前音频的单词总数
                     */
                    int64_t m_wordNum;
                    bool m_wordNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_ASRSTAT_H_
