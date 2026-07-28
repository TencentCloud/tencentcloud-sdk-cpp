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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_LIVEMODERATIONPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_LIVEMODERATIONPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 直播流ai内容理解参数
                */
                class LiveModerationParams : public AbstractModel
                {
                public:
                    LiveModerationParams();
                    ~LiveModerationParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>AI 内容理解任务类型</p><p>枚举值：</p><ul><li>1： 音频切片理解</li><li>2： 视频截帧理解</li><li>3： 音视切片+视频截帧理解 </li></ul><p>默认值：3</p>
                     * @return ModerationType <p>AI 内容理解任务类型</p><p>枚举值：</p><ul><li>1： 音频切片理解</li><li>2： 视频截帧理解</li><li>3： 音视切片+视频截帧理解 </li></ul><p>默认值：3</p>
                     * 
                     */
                    uint64_t GetModerationType() const;

                    /**
                     * 设置<p>AI 内容理解任务类型</p><p>枚举值：</p><ul><li>1： 音频切片理解</li><li>2： 视频截帧理解</li><li>3： 音视切片+视频截帧理解 </li></ul><p>默认值：3</p>
                     * @param _moderationType <p>AI 内容理解任务类型</p><p>枚举值：</p><ul><li>1： 音频切片理解</li><li>2： 视频截帧理解</li><li>3： 音视切片+视频截帧理解 </li></ul><p>默认值：3</p>
                     * 
                     */
                    void SetModerationType(const uint64_t& _moderationType);

                    /**
                     * 判断参数 ModerationType 是否已赋值
                     * @return ModerationType 是否已赋值
                     * 
                     */
                    bool ModerationTypeHasBeenSet() const;

                    /**
                     * 获取<p>持续没有上行推流的状态超过MaxIdleTime的时长，自动停止切片。</p><p>取值范围：[30, 1800]</p><p>单位：秒</p><p>默认值：30</p>
                     * @return MaxIdleTime <p>持续没有上行推流的状态超过MaxIdleTime的时长，自动停止切片。</p><p>取值范围：[30, 1800]</p><p>单位：秒</p><p>默认值：30</p>
                     * 
                     */
                    uint64_t GetMaxIdleTime() const;

                    /**
                     * 设置<p>持续没有上行推流的状态超过MaxIdleTime的时长，自动停止切片。</p><p>取值范围：[30, 1800]</p><p>单位：秒</p><p>默认值：30</p>
                     * @param _maxIdleTime <p>持续没有上行推流的状态超过MaxIdleTime的时长，自动停止切片。</p><p>取值范围：[30, 1800]</p><p>单位：秒</p><p>默认值：30</p>
                     * 
                     */
                    void SetMaxIdleTime(const uint64_t& _maxIdleTime);

                    /**
                     * 判断参数 MaxIdleTime 是否已赋值
                     * @return MaxIdleTime 是否已赋值
                     * 
                     */
                    bool MaxIdleTimeHasBeenSet() const;

                    /**
                     * 获取<p>视频截帧间隔</p><p>取值范围：[1, 60]</p><p>单位：秒</p><p>默认值：5</p>
                     * @return SliceVideo <p>视频截帧间隔</p><p>取值范围：[1, 60]</p><p>单位：秒</p><p>默认值：5</p>
                     * 
                     */
                    uint64_t GetSliceVideo() const;

                    /**
                     * 设置<p>视频截帧间隔</p><p>取值范围：[1, 60]</p><p>单位：秒</p><p>默认值：5</p>
                     * @param _sliceVideo <p>视频截帧间隔</p><p>取值范围：[1, 60]</p><p>单位：秒</p><p>默认值：5</p>
                     * 
                     */
                    void SetSliceVideo(const uint64_t& _sliceVideo);

                    /**
                     * 判断参数 SliceVideo 是否已赋值
                     * @return SliceVideo 是否已赋值
                     * 
                     */
                    bool SliceVideoHasBeenSet() const;

                    /**
                     * 获取<p>音频切片时长</p><p>取值范围：[5, 60]</p><p>单位：秒</p><p>默认值：15</p>
                     * @return SliceAudio <p>音频切片时长</p><p>取值范围：[5, 60]</p><p>单位：秒</p><p>默认值：15</p>
                     * 
                     */
                    uint64_t GetSliceAudio() const;

                    /**
                     * 设置<p>音频切片时长</p><p>取值范围：[5, 60]</p><p>单位：秒</p><p>默认值：15</p>
                     * @param _sliceAudio <p>音频切片时长</p><p>取值范围：[5, 60]</p><p>单位：秒</p><p>默认值：15</p>
                     * 
                     */
                    void SetSliceAudio(const uint64_t& _sliceAudio);

                    /**
                     * 判断参数 SliceAudio 是否已赋值
                     * @return SliceAudio 是否已赋值
                     * 
                     */
                    bool SliceAudioHasBeenSet() const;

                    /**
                     * 获取<p>是否保存文件</p><p>枚举值：</p><ul><li>0： 0不保存</li><li>1： 1保存所有</li><li>2： 仅命中</li></ul><p>默认值：1</p>
                     * @return SaveModerationFile <p>是否保存文件</p><p>枚举值：</p><ul><li>0： 0不保存</li><li>1： 1保存所有</li><li>2： 仅命中</li></ul><p>默认值：1</p>
                     * 
                     */
                    uint64_t GetSaveModerationFile() const;

                    /**
                     * 设置<p>是否保存文件</p><p>枚举值：</p><ul><li>0： 0不保存</li><li>1： 1保存所有</li><li>2： 仅命中</li></ul><p>默认值：1</p>
                     * @param _saveModerationFile <p>是否保存文件</p><p>枚举值：</p><ul><li>0： 0不保存</li><li>1： 1保存所有</li><li>2： 仅命中</li></ul><p>默认值：1</p>
                     * 
                     */
                    void SetSaveModerationFile(const uint64_t& _saveModerationFile);

                    /**
                     * 判断参数 SaveModerationFile 是否已赋值
                     * @return SaveModerationFile 是否已赋值
                     * 
                     */
                    bool SaveModerationFileHasBeenSet() const;

                    /**
                     * 获取<p>是否回调所有内容理解结果</p><p>枚举值：</p><ul><li>0： 回调所有结果</li><li>1： 仅回调命中结果</li></ul><p>默认值：0</p>
                     * @return CallbackAllResults <p>是否回调所有内容理解结果</p><p>枚举值：</p><ul><li>0： 回调所有结果</li><li>1： 仅回调命中结果</li></ul><p>默认值：0</p>
                     * 
                     */
                    uint64_t GetCallbackAllResults() const;

                    /**
                     * 设置<p>是否回调所有内容理解结果</p><p>枚举值：</p><ul><li>0： 回调所有结果</li><li>1： 仅回调命中结果</li></ul><p>默认值：0</p>
                     * @param _callbackAllResults <p>是否回调所有内容理解结果</p><p>枚举值：</p><ul><li>0： 回调所有结果</li><li>1： 仅回调命中结果</li></ul><p>默认值：0</p>
                     * 
                     */
                    void SetCallbackAllResults(const uint64_t& _callbackAllResults);

                    /**
                     * 判断参数 CallbackAllResults 是否已赋值
                     * @return CallbackAllResults 是否已赋值
                     * 
                     */
                    bool CallbackAllResultsHasBeenSet() const;

                private:

                    /**
                     * <p>AI 内容理解任务类型</p><p>枚举值：</p><ul><li>1： 音频切片理解</li><li>2： 视频截帧理解</li><li>3： 音视切片+视频截帧理解 </li></ul><p>默认值：3</p>
                     */
                    uint64_t m_moderationType;
                    bool m_moderationTypeHasBeenSet;

                    /**
                     * <p>持续没有上行推流的状态超过MaxIdleTime的时长，自动停止切片。</p><p>取值范围：[30, 1800]</p><p>单位：秒</p><p>默认值：30</p>
                     */
                    uint64_t m_maxIdleTime;
                    bool m_maxIdleTimeHasBeenSet;

                    /**
                     * <p>视频截帧间隔</p><p>取值范围：[1, 60]</p><p>单位：秒</p><p>默认值：5</p>
                     */
                    uint64_t m_sliceVideo;
                    bool m_sliceVideoHasBeenSet;

                    /**
                     * <p>音频切片时长</p><p>取值范围：[5, 60]</p><p>单位：秒</p><p>默认值：15</p>
                     */
                    uint64_t m_sliceAudio;
                    bool m_sliceAudioHasBeenSet;

                    /**
                     * <p>是否保存文件</p><p>枚举值：</p><ul><li>0： 0不保存</li><li>1： 1保存所有</li><li>2： 仅命中</li></ul><p>默认值：1</p>
                     */
                    uint64_t m_saveModerationFile;
                    bool m_saveModerationFileHasBeenSet;

                    /**
                     * <p>是否回调所有内容理解结果</p><p>枚举值：</p><ul><li>0： 回调所有结果</li><li>1： 仅回调命中结果</li></ul><p>默认值：0</p>
                     */
                    uint64_t m_callbackAllResults;
                    bool m_callbackAllResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_LIVEMODERATIONPARAMS_H_
