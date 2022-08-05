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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_RECORDPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_RECORDPARAMS_H_

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
                * 云端录制控制参数。
                */
                class RecordParams : public AbstractModel
                {
                public:
                    RecordParams();
                    ~RecordParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取录制模式：
1：单流录制，分别录制房间的订阅UserId的音频和视频，将录制文件上传至云存储；
2：混流录制，将房间内订阅UserId的音视频混录成一个音视频文件，将录制文件上传至云存储；
                     * @return RecordMode 录制模式：
1：单流录制，分别录制房间的订阅UserId的音频和视频，将录制文件上传至云存储；
2：混流录制，将房间内订阅UserId的音视频混录成一个音视频文件，将录制文件上传至云存储；
                     */
                    uint64_t GetRecordMode() const;

                    /**
                     * 设置录制模式：
1：单流录制，分别录制房间的订阅UserId的音频和视频，将录制文件上传至云存储；
2：混流录制，将房间内订阅UserId的音视频混录成一个音视频文件，将录制文件上传至云存储；
                     * @param RecordMode 录制模式：
1：单流录制，分别录制房间的订阅UserId的音频和视频，将录制文件上传至云存储；
2：混流录制，将房间内订阅UserId的音视频混录成一个音视频文件，将录制文件上传至云存储；
                     */
                    void SetRecordMode(const uint64_t& _recordMode);

                    /**
                     * 判断参数 RecordMode 是否已赋值
                     * @return RecordMode 是否已赋值
                     */
                    bool RecordModeHasBeenSet() const;

                    /**
                     * 获取房间内持续没有主播的状态超过MaxIdleTime的时长，自动停止录制，单位：秒。默认值为 30 秒，该值需大于等于 5秒，且小于等于 86400秒(24小时)。
                     * @return MaxIdleTime 房间内持续没有主播的状态超过MaxIdleTime的时长，自动停止录制，单位：秒。默认值为 30 秒，该值需大于等于 5秒，且小于等于 86400秒(24小时)。
                     */
                    uint64_t GetMaxIdleTime() const;

                    /**
                     * 设置房间内持续没有主播的状态超过MaxIdleTime的时长，自动停止录制，单位：秒。默认值为 30 秒，该值需大于等于 5秒，且小于等于 86400秒(24小时)。
                     * @param MaxIdleTime 房间内持续没有主播的状态超过MaxIdleTime的时长，自动停止录制，单位：秒。默认值为 30 秒，该值需大于等于 5秒，且小于等于 86400秒(24小时)。
                     */
                    void SetMaxIdleTime(const uint64_t& _maxIdleTime);

                    /**
                     * 判断参数 MaxIdleTime 是否已赋值
                     * @return MaxIdleTime 是否已赋值
                     */
                    bool MaxIdleTimeHasBeenSet() const;

                    /**
                     * 获取录制的媒体流类型：
0：录制音频+视频流（默认）;
1：仅录制音频流；
2：仅录制视频流，
                     * @return StreamType 录制的媒体流类型：
0：录制音频+视频流（默认）;
1：仅录制音频流；
2：仅录制视频流，
                     */
                    uint64_t GetStreamType() const;

                    /**
                     * 设置录制的媒体流类型：
0：录制音频+视频流（默认）;
1：仅录制音频流；
2：仅录制视频流，
                     * @param StreamType 录制的媒体流类型：
0：录制音频+视频流（默认）;
1：仅录制音频流；
2：仅录制视频流，
                     */
                    void SetStreamType(const uint64_t& _streamType);

                    /**
                     * 判断参数 StreamType 是否已赋值
                     * @return StreamType 是否已赋值
                     */
                    bool StreamTypeHasBeenSet() const;

                    /**
                     * 获取指定订阅流白名单或者黑名单。
                     * @return SubscribeStreamUserIds 指定订阅流白名单或者黑名单。
                     */
                    SubscribeStreamUserIds GetSubscribeStreamUserIds() const;

                    /**
                     * 设置指定订阅流白名单或者黑名单。
                     * @param SubscribeStreamUserIds 指定订阅流白名单或者黑名单。
                     */
                    void SetSubscribeStreamUserIds(const SubscribeStreamUserIds& _subscribeStreamUserIds);

                    /**
                     * 判断参数 SubscribeStreamUserIds 是否已赋值
                     * @return SubscribeStreamUserIds 是否已赋值
                     */
                    bool SubscribeStreamUserIdsHasBeenSet() const;

                    /**
                     * 获取输出文件的格式，上传到云点播时此参数无效。0：(默认)输出文件为hls格式。1：输出文件格式为hls+mp4（hls录制完成后转mp4文件）
                     * @return OutputFormat 输出文件的格式，上传到云点播时此参数无效。0：(默认)输出文件为hls格式。1：输出文件格式为hls+mp4（hls录制完成后转mp4文件）
                     */
                    uint64_t GetOutputFormat() const;

                    /**
                     * 设置输出文件的格式，上传到云点播时此参数无效。0：(默认)输出文件为hls格式。1：输出文件格式为hls+mp4（hls录制完成后转mp4文件）
                     * @param OutputFormat 输出文件的格式，上传到云点播时此参数无效。0：(默认)输出文件为hls格式。1：输出文件格式为hls+mp4（hls录制完成后转mp4文件）
                     */
                    void SetOutputFormat(const uint64_t& _outputFormat);

                    /**
                     * 判断参数 OutputFormat 是否已赋值
                     * @return OutputFormat 是否已赋值
                     */
                    bool OutputFormatHasBeenSet() const;

                private:

                    /**
                     * 录制模式：
1：单流录制，分别录制房间的订阅UserId的音频和视频，将录制文件上传至云存储；
2：混流录制，将房间内订阅UserId的音视频混录成一个音视频文件，将录制文件上传至云存储；
                     */
                    uint64_t m_recordMode;
                    bool m_recordModeHasBeenSet;

                    /**
                     * 房间内持续没有主播的状态超过MaxIdleTime的时长，自动停止录制，单位：秒。默认值为 30 秒，该值需大于等于 5秒，且小于等于 86400秒(24小时)。
                     */
                    uint64_t m_maxIdleTime;
                    bool m_maxIdleTimeHasBeenSet;

                    /**
                     * 录制的媒体流类型：
0：录制音频+视频流（默认）;
1：仅录制音频流；
2：仅录制视频流，
                     */
                    uint64_t m_streamType;
                    bool m_streamTypeHasBeenSet;

                    /**
                     * 指定订阅流白名单或者黑名单。
                     */
                    SubscribeStreamUserIds m_subscribeStreamUserIds;
                    bool m_subscribeStreamUserIdsHasBeenSet;

                    /**
                     * 输出文件的格式，上传到云点播时此参数无效。0：(默认)输出文件为hls格式。1：输出文件格式为hls+mp4（hls录制完成后转mp4文件）
                     */
                    uint64_t m_outputFormat;
                    bool m_outputFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_RECORDPARAMS_H_
