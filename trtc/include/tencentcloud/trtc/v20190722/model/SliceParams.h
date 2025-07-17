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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_SLICEPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_SLICEPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/SubscribeStreamUserIds.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 云端切片的控制参数。
                */
                class SliceParams : public AbstractModel
                {
                public:
                    SliceParams();
                    ~SliceParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取切片任务类型:
1:音频切片；
2:视频截帧；
3:音视切片+视频截帧
示例值：1 
                     * @return SliceType 切片任务类型:
1:音频切片；
2:视频截帧；
3:音视切片+视频截帧
示例值：1 
                     * 
                     */
                    uint64_t GetSliceType() const;

                    /**
                     * 设置切片任务类型:
1:音频切片；
2:视频截帧；
3:音视切片+视频截帧
示例值：1 
                     * @param _sliceType 切片任务类型:
1:音频切片；
2:视频截帧；
3:音视切片+视频截帧
示例值：1 
                     * 
                     */
                    void SetSliceType(const uint64_t& _sliceType);

                    /**
                     * 判断参数 SliceType 是否已赋值
                     * @return SliceType 是否已赋值
                     * 
                     */
                    bool SliceTypeHasBeenSet() const;

                    /**
                     * 获取房间内持续没有主播的状态超过MaxIdleTime的时长，自动停止录制，单位：秒。默认值为 30 秒，该值需大于等于 5秒，且小于等于 86400秒(24小时)。
示例值：30
                     * @return MaxIdleTime 房间内持续没有主播的状态超过MaxIdleTime的时长，自动停止录制，单位：秒。默认值为 30 秒，该值需大于等于 5秒，且小于等于 86400秒(24小时)。
示例值：30
                     * 
                     */
                    uint64_t GetMaxIdleTime() const;

                    /**
                     * 设置房间内持续没有主播的状态超过MaxIdleTime的时长，自动停止录制，单位：秒。默认值为 30 秒，该值需大于等于 5秒，且小于等于 86400秒(24小时)。
示例值：30
                     * @param _maxIdleTime 房间内持续没有主播的状态超过MaxIdleTime的时长，自动停止录制，单位：秒。默认值为 30 秒，该值需大于等于 5秒，且小于等于 86400秒(24小时)。
示例值：30
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
                     * 获取音频切片时长，默认15s 示例值：15
                     * @return SliceAudio 音频切片时长，默认15s 示例值：15
                     * 
                     */
                    uint64_t GetSliceAudio() const;

                    /**
                     * 设置音频切片时长，默认15s 示例值：15
                     * @param _sliceAudio 音频切片时长，默认15s 示例值：15
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
                     * 获取视频截帧间隔时长，默认5s， 示例值：5
                     * @return SliceVideo 视频截帧间隔时长，默认5s， 示例值：5
                     * 
                     */
                    uint64_t GetSliceVideo() const;

                    /**
                     * 设置视频截帧间隔时长，默认5s， 示例值：5
                     * @param _sliceVideo 视频截帧间隔时长，默认5s， 示例值：5
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
                     * 获取指定订阅流白名单或者黑名单。
                     * @return SubscribeStreamUserIds 指定订阅流白名单或者黑名单。
                     * 
                     */
                    SubscribeStreamUserIds GetSubscribeStreamUserIds() const;

                    /**
                     * 设置指定订阅流白名单或者黑名单。
                     * @param _subscribeStreamUserIds 指定订阅流白名单或者黑名单。
                     * 
                     */
                    void SetSubscribeStreamUserIds(const SubscribeStreamUserIds& _subscribeStreamUserIds);

                    /**
                     * 判断参数 SubscribeStreamUserIds 是否已赋值
                     * @return SubscribeStreamUserIds 是否已赋值
                     * 
                     */
                    bool SubscribeStreamUserIdsHasBeenSet() const;

                    /**
                     * 获取已废弃，从控制台配置回调url
                     * @return SliceCallbackUrl 已废弃，从控制台配置回调url
                     * 
                     */
                    std::string GetSliceCallbackUrl() const;

                    /**
                     * 设置已废弃，从控制台配置回调url
                     * @param _sliceCallbackUrl 已废弃，从控制台配置回调url
                     * 
                     */
                    void SetSliceCallbackUrl(const std::string& _sliceCallbackUrl);

                    /**
                     * 判断参数 SliceCallbackUrl 是否已赋值
                     * @return SliceCallbackUrl 是否已赋值
                     * 
                     */
                    bool SliceCallbackUrlHasBeenSet() const;

                private:

                    /**
                     * 切片任务类型:
1:音频切片；
2:视频截帧；
3:音视切片+视频截帧
示例值：1 
                     */
                    uint64_t m_sliceType;
                    bool m_sliceTypeHasBeenSet;

                    /**
                     * 房间内持续没有主播的状态超过MaxIdleTime的时长，自动停止录制，单位：秒。默认值为 30 秒，该值需大于等于 5秒，且小于等于 86400秒(24小时)。
示例值：30
                     */
                    uint64_t m_maxIdleTime;
                    bool m_maxIdleTimeHasBeenSet;

                    /**
                     * 音频切片时长，默认15s 示例值：15
                     */
                    uint64_t m_sliceAudio;
                    bool m_sliceAudioHasBeenSet;

                    /**
                     * 视频截帧间隔时长，默认5s， 示例值：5
                     */
                    uint64_t m_sliceVideo;
                    bool m_sliceVideoHasBeenSet;

                    /**
                     * 指定订阅流白名单或者黑名单。
                     */
                    SubscribeStreamUserIds m_subscribeStreamUserIds;
                    bool m_subscribeStreamUserIdsHasBeenSet;

                    /**
                     * 已废弃，从控制台配置回调url
                     */
                    std::string m_sliceCallbackUrl;
                    bool m_sliceCallbackUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_SLICEPARAMS_H_
