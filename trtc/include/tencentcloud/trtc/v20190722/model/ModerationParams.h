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
                     * 获取审核任务类型， 1:音频切片审核，2:视频截帧审核，3:音视切片审核+视频截帧审核  默认值1 
                     * @return ModerationType 审核任务类型， 1:音频切片审核，2:视频截帧审核，3:音视切片审核+视频截帧审核  默认值1 
                     * 
                     */
                    uint64_t GetModerationType() const;

                    /**
                     * 设置审核任务类型， 1:音频切片审核，2:视频截帧审核，3:音视切片审核+视频截帧审核  默认值1 
                     * @param _moderationType 审核任务类型， 1:音频切片审核，2:视频截帧审核，3:音视切片审核+视频截帧审核  默认值1 
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
                     * 获取房间内持续没有用户（主播）上行推流的状态超过MaxIdleTime的时长，自动停止切片，单位：秒。默认值为 30 秒，该值需大于等于 5秒，且小于等于1800秒(0.5小时)。示例值：30 
                     * @return MaxIdleTime 房间内持续没有用户（主播）上行推流的状态超过MaxIdleTime的时长，自动停止切片，单位：秒。默认值为 30 秒，该值需大于等于 5秒，且小于等于1800秒(0.5小时)。示例值：30 
                     * 
                     */
                    uint64_t GetMaxIdleTime() const;

                    /**
                     * 设置房间内持续没有用户（主播）上行推流的状态超过MaxIdleTime的时长，自动停止切片，单位：秒。默认值为 30 秒，该值需大于等于 5秒，且小于等于1800秒(0.5小时)。示例值：30 
                     * @param _maxIdleTime 房间内持续没有用户（主播）上行推流的状态超过MaxIdleTime的时长，自动停止切片，单位：秒。默认值为 30 秒，该值需大于等于 5秒，且小于等于1800秒(0.5小时)。示例值：30 
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
                     * 获取音频切片时长，默认15s 示例值：15, 范围15-60s
                     * @return SliceAudio 音频切片时长，默认15s 示例值：15, 范围15-60s
                     * 
                     */
                    uint64_t GetSliceAudio() const;

                    /**
                     * 设置音频切片时长，默认15s 示例值：15, 范围15-60s
                     * @param _sliceAudio 音频切片时长，默认15s 示例值：15, 范围15-60s
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
                     * 获取视频截帧间隔时长，默认5s, 范围1-60s
                     * @return SliceVideo 视频截帧间隔时长，默认5s, 范围1-60s
                     * 
                     */
                    uint64_t GetSliceVideo() const;

                    /**
                     * 设置视频截帧间隔时长，默认5s, 范围1-60s
                     * @param _sliceVideo 视频截帧间隔时长，默认5s, 范围1-60s
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
                     * 获取供应商枚举，
trtc : trtc内容理解（支持 1:音频切片审核，2:视频截帧审核，3:音视切片审核+视频截帧审核）
tianyu : 天御内容安全 （支持 1:音频切片审核，2:视频截帧审核，3:音视切片审核+视频截帧审核）
ace  : ACE内容安全 （支持 1:音频切片审核，2:视频截帧审核，3:音视切片审核+视频截帧审核）
shumei : 数美审核（支持 1:音频切片审核，2:视频截帧审核，3:音视切片审核+视频截帧审核）
yidun : 网易易盾审核 （支持 1:音频切片审核，2:视频截帧审核，3:音视切片审核+视频截帧审核）
                     * @return ModerationSupplier 供应商枚举，
trtc : trtc内容理解（支持 1:音频切片审核，2:视频截帧审核，3:音视切片审核+视频截帧审核）
tianyu : 天御内容安全 （支持 1:音频切片审核，2:视频截帧审核，3:音视切片审核+视频截帧审核）
ace  : ACE内容安全 （支持 1:音频切片审核，2:视频截帧审核，3:音视切片审核+视频截帧审核）
shumei : 数美审核（支持 1:音频切片审核，2:视频截帧审核，3:音视切片审核+视频截帧审核）
yidun : 网易易盾审核 （支持 1:音频切片审核，2:视频截帧审核，3:音视切片审核+视频截帧审核）
                     * 
                     */
                    std::string GetModerationSupplier() const;

                    /**
                     * 设置供应商枚举，
trtc : trtc内容理解（支持 1:音频切片审核，2:视频截帧审核，3:音视切片审核+视频截帧审核）
tianyu : 天御内容安全 （支持 1:音频切片审核，2:视频截帧审核，3:音视切片审核+视频截帧审核）
ace  : ACE内容安全 （支持 1:音频切片审核，2:视频截帧审核，3:音视切片审核+视频截帧审核）
shumei : 数美审核（支持 1:音频切片审核，2:视频截帧审核，3:音视切片审核+视频截帧审核）
yidun : 网易易盾审核 （支持 1:音频切片审核，2:视频截帧审核，3:音视切片审核+视频截帧审核）
                     * @param _moderationSupplier 供应商枚举，
trtc : trtc内容理解（支持 1:音频切片审核，2:视频截帧审核，3:音视切片审核+视频截帧审核）
tianyu : 天御内容安全 （支持 1:音频切片审核，2:视频截帧审核，3:音视切片审核+视频截帧审核）
ace  : ACE内容安全 （支持 1:音频切片审核，2:视频截帧审核，3:音视切片审核+视频截帧审核）
shumei : 数美审核（支持 1:音频切片审核，2:视频截帧审核，3:音视切片审核+视频截帧审核）
yidun : 网易易盾审核 （支持 1:音频切片审核，2:视频截帧审核，3:音视切片审核+视频截帧审核）
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
                     * 获取第三方审核商送审需要配置信息, ModerationSupplier为trtc时，这个参数可以不需要初始化
                     * @return ModerationSupplierParam 第三方审核商送审需要配置信息, ModerationSupplier为trtc时，这个参数可以不需要初始化
                     * 
                     */
                    ModerationSupplierParam GetModerationSupplierParam() const;

                    /**
                     * 设置第三方审核商送审需要配置信息, ModerationSupplier为trtc时，这个参数可以不需要初始化
                     * @param _moderationSupplierParam 第三方审核商送审需要配置信息, ModerationSupplier为trtc时，这个参数可以不需要初始化
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
                     * 获取是否保存文件:  0不保存文件 1保存所有文件 2仅保存命中文件
                     * @return SaveModerationFile 是否保存文件:  0不保存文件 1保存所有文件 2仅保存命中文件
                     * 
                     */
                    uint64_t GetSaveModerationFile() const;

                    /**
                     * 设置是否保存文件:  0不保存文件 1保存所有文件 2仅保存命中文件
                     * @param _saveModerationFile 是否保存文件:  0不保存文件 1保存所有文件 2仅保存命中文件
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
                     * 获取是否回调所有审核结果:0 默认回调所有结果 1 仅回调命中结果 
                     * @return CallbackAllResults 是否回调所有审核结果:0 默认回调所有结果 1 仅回调命中结果 
                     * 
                     */
                    uint64_t GetCallbackAllResults() const;

                    /**
                     * 设置是否回调所有审核结果:0 默认回调所有结果 1 仅回调命中结果 
                     * @param _callbackAllResults 是否回调所有审核结果:0 默认回调所有结果 1 仅回调命中结果 
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
                     * 获取指定订阅流白名单或者黑名单。
                     * @return SubscribeStreamUserIds 指定订阅流白名单或者黑名单。
                     * 
                     */
                    SubscribeModerationUserIds GetSubscribeStreamUserIds() const;

                    /**
                     * 设置指定订阅流白名单或者黑名单。
                     * @param _subscribeStreamUserIds 指定订阅流白名单或者黑名单。
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
                     * 审核任务类型， 1:音频切片审核，2:视频截帧审核，3:音视切片审核+视频截帧审核  默认值1 
                     */
                    uint64_t m_moderationType;
                    bool m_moderationTypeHasBeenSet;

                    /**
                     * 房间内持续没有用户（主播）上行推流的状态超过MaxIdleTime的时长，自动停止切片，单位：秒。默认值为 30 秒，该值需大于等于 5秒，且小于等于1800秒(0.5小时)。示例值：30 
                     */
                    uint64_t m_maxIdleTime;
                    bool m_maxIdleTimeHasBeenSet;

                    /**
                     * 音频切片时长，默认15s 示例值：15, 范围15-60s
                     */
                    uint64_t m_sliceAudio;
                    bool m_sliceAudioHasBeenSet;

                    /**
                     * 视频截帧间隔时长，默认5s, 范围1-60s
                     */
                    uint64_t m_sliceVideo;
                    bool m_sliceVideoHasBeenSet;

                    /**
                     * 供应商枚举，
trtc : trtc内容理解（支持 1:音频切片审核，2:视频截帧审核，3:音视切片审核+视频截帧审核）
tianyu : 天御内容安全 （支持 1:音频切片审核，2:视频截帧审核，3:音视切片审核+视频截帧审核）
ace  : ACE内容安全 （支持 1:音频切片审核，2:视频截帧审核，3:音视切片审核+视频截帧审核）
shumei : 数美审核（支持 1:音频切片审核，2:视频截帧审核，3:音视切片审核+视频截帧审核）
yidun : 网易易盾审核 （支持 1:音频切片审核，2:视频截帧审核，3:音视切片审核+视频截帧审核）
                     */
                    std::string m_moderationSupplier;
                    bool m_moderationSupplierHasBeenSet;

                    /**
                     * 第三方审核商送审需要配置信息, ModerationSupplier为trtc时，这个参数可以不需要初始化
                     */
                    ModerationSupplierParam m_moderationSupplierParam;
                    bool m_moderationSupplierParamHasBeenSet;

                    /**
                     * 是否保存文件:  0不保存文件 1保存所有文件 2仅保存命中文件
                     */
                    uint64_t m_saveModerationFile;
                    bool m_saveModerationFileHasBeenSet;

                    /**
                     * 是否回调所有审核结果:0 默认回调所有结果 1 仅回调命中结果 
                     */
                    uint64_t m_callbackAllResults;
                    bool m_callbackAllResultsHasBeenSet;

                    /**
                     * 指定订阅流白名单或者黑名单。
                     */
                    SubscribeModerationUserIds m_subscribeStreamUserIds;
                    bool m_subscribeStreamUserIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MODERATIONPARAMS_H_
