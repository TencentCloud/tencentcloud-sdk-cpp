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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MODERATIONPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MODERATIONPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/ModerationSupplierParam.h>
#include <tencentcloud/trtc/v20190722/model/SubscribeModerationUserIds.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 云端审核的控制参数。
                */
                class ModerationParams : public AbstractModel
                {
                public:
                    ModerationParams();
                    ~ModerationParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>AI 内容理解任务类型， 1:音频切片理解，2:视频截帧理解，3:音视切片+视频截帧理解  默认值1 </p><p>枚举值：</p><ul><li>1： 音频切片理解</li></ul>
                     * @return ModerationType <p>AI 内容理解任务类型， 1:音频切片理解，2:视频截帧理解，3:音视切片+视频截帧理解  默认值1 </p><p>枚举值：</p><ul><li>1： 音频切片理解</li></ul>
                     * 
                     */
                    uint64_t GetModerationType() const;

                    /**
                     * 设置<p>AI 内容理解任务类型， 1:音频切片理解，2:视频截帧理解，3:音视切片+视频截帧理解  默认值1 </p><p>枚举值：</p><ul><li>1： 音频切片理解</li></ul>
                     * @param _moderationType <p>AI 内容理解任务类型， 1:音频切片理解，2:视频截帧理解，3:音视切片+视频截帧理解  默认值1 </p><p>枚举值：</p><ul><li>1： 音频切片理解</li></ul>
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
                     * 获取<p>房间内持续没有用户（主播）上行推流的状态超过MaxIdleTime的时长，自动停止切片，单位：秒。默认值为 30 秒，该值需大于等于 5秒，且小于等于1800秒(0.5小时)。示例值：30</p>
                     * @return MaxIdleTime <p>房间内持续没有用户（主播）上行推流的状态超过MaxIdleTime的时长，自动停止切片，单位：秒。默认值为 30 秒，该值需大于等于 5秒，且小于等于1800秒(0.5小时)。示例值：30</p>
                     * 
                     */
                    uint64_t GetMaxIdleTime() const;

                    /**
                     * 设置<p>房间内持续没有用户（主播）上行推流的状态超过MaxIdleTime的时长，自动停止切片，单位：秒。默认值为 30 秒，该值需大于等于 5秒，且小于等于1800秒(0.5小时)。示例值：30</p>
                     * @param _maxIdleTime <p>房间内持续没有用户（主播）上行推流的状态超过MaxIdleTime的时长，自动停止切片，单位：秒。默认值为 30 秒，该值需大于等于 5秒，且小于等于1800秒(0.5小时)。示例值：30</p>
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
                     * 获取<p>音频切片时长，默认15s 示例值：15, 范围15-60s</p>
                     * @return SliceAudio <p>音频切片时长，默认15s 示例值：15, 范围15-60s</p>
                     * 
                     */
                    uint64_t GetSliceAudio() const;

                    /**
                     * 设置<p>音频切片时长，默认15s 示例值：15, 范围15-60s</p>
                     * @param _sliceAudio <p>音频切片时长，默认15s 示例值：15, 范围15-60s</p>
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
                     * 获取<p>视频截帧间隔时长，默认5s, 范围1-60s</p>
                     * @return SliceVideo <p>视频截帧间隔时长，默认5s, 范围1-60s</p>
                     * 
                     */
                    uint64_t GetSliceVideo() const;

                    /**
                     * 设置<p>视频截帧间隔时长，默认5s, 范围1-60s</p>
                     * @param _sliceVideo <p>视频截帧间隔时长，默认5s, 范围1-60s</p>
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
                     * 获取<p>供应商枚举，<br>trtc : trtc内容理解</p>
                     * @return ModerationSupplier <p>供应商枚举，<br>trtc : trtc内容理解</p>
                     * 
                     */
                    std::string GetModerationSupplier() const;

                    /**
                     * 设置<p>供应商枚举，<br>trtc : trtc内容理解</p>
                     * @param _moderationSupplier <p>供应商枚举，<br>trtc : trtc内容理解</p>
                     * 
                     */
                    void SetModerationSupplier(const std::string& _moderationSupplier);

                    /**
                     * 判断参数 ModerationSupplier 是否已赋值
                     * @return ModerationSupplier 是否已赋值
                     * 
                     */
                    bool ModerationSupplierHasBeenSet() const;

                    /**
                     * 获取<p>第三方内容理解供应商需要配置信息, ModerationSupplier为trtc时，这个参数可以不需要初始化</p>
                     * @return ModerationSupplierParam <p>第三方内容理解供应商需要配置信息, ModerationSupplier为trtc时，这个参数可以不需要初始化</p>
                     * 
                     */
                    ModerationSupplierParam GetModerationSupplierParam() const;

                    /**
                     * 设置<p>第三方内容理解供应商需要配置信息, ModerationSupplier为trtc时，这个参数可以不需要初始化</p>
                     * @param _moderationSupplierParam <p>第三方内容理解供应商需要配置信息, ModerationSupplier为trtc时，这个参数可以不需要初始化</p>
                     * 
                     */
                    void SetModerationSupplierParam(const ModerationSupplierParam& _moderationSupplierParam);

                    /**
                     * 判断参数 ModerationSupplierParam 是否已赋值
                     * @return ModerationSupplierParam 是否已赋值
                     * 
                     */
                    bool ModerationSupplierParamHasBeenSet() const;

                    /**
                     * 获取<p>是否保存文件:  0不保存文件 1保存所有文件 2仅保存命中文件</p>
                     * @return SaveModerationFile <p>是否保存文件:  0不保存文件 1保存所有文件 2仅保存命中文件</p>
                     * 
                     */
                    uint64_t GetSaveModerationFile() const;

                    /**
                     * 设置<p>是否保存文件:  0不保存文件 1保存所有文件 2仅保存命中文件</p>
                     * @param _saveModerationFile <p>是否保存文件:  0不保存文件 1保存所有文件 2仅保存命中文件</p>
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
                     * 获取<p>是否回调所有内容理解结果:0 默认回调所有结果 1 仅回调命中结果</p>
                     * @return CallbackAllResults <p>是否回调所有内容理解结果:0 默认回调所有结果 1 仅回调命中结果</p>
                     * 
                     */
                    uint64_t GetCallbackAllResults() const;

                    /**
                     * 设置<p>是否回调所有内容理解结果:0 默认回调所有结果 1 仅回调命中结果</p>
                     * @param _callbackAllResults <p>是否回调所有内容理解结果:0 默认回调所有结果 1 仅回调命中结果</p>
                     * 
                     */
                    void SetCallbackAllResults(const uint64_t& _callbackAllResults);

                    /**
                     * 判断参数 CallbackAllResults 是否已赋值
                     * @return CallbackAllResults 是否已赋值
                     * 
                     */
                    bool CallbackAllResultsHasBeenSet() const;

                    /**
                     * 获取<p>指定订阅流白名单或者黑名单。</p>
                     * @return SubscribeStreamUserIds <p>指定订阅流白名单或者黑名单。</p>
                     * 
                     */
                    SubscribeModerationUserIds GetSubscribeStreamUserIds() const;

                    /**
                     * 设置<p>指定订阅流白名单或者黑名单。</p>
                     * @param _subscribeStreamUserIds <p>指定订阅流白名单或者黑名单。</p>
                     * 
                     */
                    void SetSubscribeStreamUserIds(const SubscribeModerationUserIds& _subscribeStreamUserIds);

                    /**
                     * 判断参数 SubscribeStreamUserIds 是否已赋值
                     * @return SubscribeStreamUserIds 是否已赋值
                     * 
                     */
                    bool SubscribeStreamUserIdsHasBeenSet() const;

                private:

                    /**
                     * <p>AI 内容理解任务类型， 1:音频切片理解，2:视频截帧理解，3:音视切片+视频截帧理解  默认值1 </p><p>枚举值：</p><ul><li>1： 音频切片理解</li></ul>
                     */
                    uint64_t m_moderationType;
                    bool m_moderationTypeHasBeenSet;

                    /**
                     * <p>房间内持续没有用户（主播）上行推流的状态超过MaxIdleTime的时长，自动停止切片，单位：秒。默认值为 30 秒，该值需大于等于 5秒，且小于等于1800秒(0.5小时)。示例值：30</p>
                     */
                    uint64_t m_maxIdleTime;
                    bool m_maxIdleTimeHasBeenSet;

                    /**
                     * <p>音频切片时长，默认15s 示例值：15, 范围15-60s</p>
                     */
                    uint64_t m_sliceAudio;
                    bool m_sliceAudioHasBeenSet;

                    /**
                     * <p>视频截帧间隔时长，默认5s, 范围1-60s</p>
                     */
                    uint64_t m_sliceVideo;
                    bool m_sliceVideoHasBeenSet;

                    /**
                     * <p>供应商枚举，<br>trtc : trtc内容理解</p>
                     */
                    std::string m_moderationSupplier;
                    bool m_moderationSupplierHasBeenSet;

                    /**
                     * <p>第三方内容理解供应商需要配置信息, ModerationSupplier为trtc时，这个参数可以不需要初始化</p>
                     */
                    ModerationSupplierParam m_moderationSupplierParam;
                    bool m_moderationSupplierParamHasBeenSet;

                    /**
                     * <p>是否保存文件:  0不保存文件 1保存所有文件 2仅保存命中文件</p>
                     */
                    uint64_t m_saveModerationFile;
                    bool m_saveModerationFileHasBeenSet;

                    /**
                     * <p>是否回调所有内容理解结果:0 默认回调所有结果 1 仅回调命中结果</p>
                     */
                    uint64_t m_callbackAllResults;
                    bool m_callbackAllResultsHasBeenSet;

                    /**
                     * <p>指定订阅流白名单或者黑名单。</p>
                     */
                    SubscribeModerationUserIds m_subscribeStreamUserIds;
                    bool m_subscribeStreamUserIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MODERATIONPARAMS_H_
