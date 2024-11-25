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
2：合流录制，将房间内订阅UserId的音视频混录成一个音视频文件，将录制文件上传至云存储；
                     * @return RecordMode 录制模式：
1：单流录制，分别录制房间的订阅UserId的音频和视频，将录制文件上传至云存储；
2：合流录制，将房间内订阅UserId的音视频混录成一个音视频文件，将录制文件上传至云存储；
                     * 
                     */
                    uint64_t GetRecordMode() const;

                    /**
                     * 设置录制模式：
1：单流录制，分别录制房间的订阅UserId的音频和视频，将录制文件上传至云存储；
2：合流录制，将房间内订阅UserId的音视频混录成一个音视频文件，将录制文件上传至云存储；
                     * @param _recordMode 录制模式：
1：单流录制，分别录制房间的订阅UserId的音频和视频，将录制文件上传至云存储；
2：合流录制，将房间内订阅UserId的音视频混录成一个音视频文件，将录制文件上传至云存储；
                     * 
                     */
                    void SetRecordMode(const uint64_t& _recordMode);

                    /**
                     * 判断参数 RecordMode 是否已赋值
                     * @return RecordMode 是否已赋值
                     * 
                     */
                    bool RecordModeHasBeenSet() const;

                    /**
                     * 获取房间内持续没有主播的状态超过MaxIdleTime的时长，自动停止录制，单位：秒。默认值为 30 秒，该值需大于等于 5秒，且小于等于 86400秒(24小时)。
                     * @return MaxIdleTime 房间内持续没有主播的状态超过MaxIdleTime的时长，自动停止录制，单位：秒。默认值为 30 秒，该值需大于等于 5秒，且小于等于 86400秒(24小时)。
                     * 
                     */
                    uint64_t GetMaxIdleTime() const;

                    /**
                     * 设置房间内持续没有主播的状态超过MaxIdleTime的时长，自动停止录制，单位：秒。默认值为 30 秒，该值需大于等于 5秒，且小于等于 86400秒(24小时)。
                     * @param _maxIdleTime 房间内持续没有主播的状态超过MaxIdleTime的时长，自动停止录制，单位：秒。默认值为 30 秒，该值需大于等于 5秒，且小于等于 86400秒(24小时)。
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
                     * 获取录制的媒体流类型：
0：录制音频+视频流（默认）;
1：仅录制音频流；
2：仅录制视频流，
                     * @return StreamType 录制的媒体流类型：
0：录制音频+视频流（默认）;
1：仅录制音频流；
2：仅录制视频流，
                     * 
                     */
                    uint64_t GetStreamType() const;

                    /**
                     * 设置录制的媒体流类型：
0：录制音频+视频流（默认）;
1：仅录制音频流；
2：仅录制视频流，
                     * @param _streamType 录制的媒体流类型：
0：录制音频+视频流（默认）;
1：仅录制音频流；
2：仅录制视频流，
                     * 
                     */
                    void SetStreamType(const uint64_t& _streamType);

                    /**
                     * 判断参数 StreamType 是否已赋值
                     * @return StreamType 是否已赋值
                     * 
                     */
                    bool StreamTypeHasBeenSet() const;

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
                     * 获取输出文件的格式（存储至COS等第三方存储时有效）。0：(默认)输出文件为hls格式。1：输出文件格式为hls+mp4。2：输出文件格式为hls+aac 。3：输出文件格式为mp4。4：输出文件格式为aac。

存储到云点播VOD时此参数无效，存储到VOD时请通过TencentVod（https://cloud.tencent.com/document/api/647/44055#TencentVod）内的MediaType设置。
                     * @return OutputFormat 输出文件的格式（存储至COS等第三方存储时有效）。0：(默认)输出文件为hls格式。1：输出文件格式为hls+mp4。2：输出文件格式为hls+aac 。3：输出文件格式为mp4。4：输出文件格式为aac。

存储到云点播VOD时此参数无效，存储到VOD时请通过TencentVod（https://cloud.tencent.com/document/api/647/44055#TencentVod）内的MediaType设置。
                     * 
                     */
                    uint64_t GetOutputFormat() const;

                    /**
                     * 设置输出文件的格式（存储至COS等第三方存储时有效）。0：(默认)输出文件为hls格式。1：输出文件格式为hls+mp4。2：输出文件格式为hls+aac 。3：输出文件格式为mp4。4：输出文件格式为aac。

存储到云点播VOD时此参数无效，存储到VOD时请通过TencentVod（https://cloud.tencent.com/document/api/647/44055#TencentVod）内的MediaType设置。
                     * @param _outputFormat 输出文件的格式（存储至COS等第三方存储时有效）。0：(默认)输出文件为hls格式。1：输出文件格式为hls+mp4。2：输出文件格式为hls+aac 。3：输出文件格式为mp4。4：输出文件格式为aac。

存储到云点播VOD时此参数无效，存储到VOD时请通过TencentVod（https://cloud.tencent.com/document/api/647/44055#TencentVod）内的MediaType设置。
                     * 
                     */
                    void SetOutputFormat(const uint64_t& _outputFormat);

                    /**
                     * 判断参数 OutputFormat 是否已赋值
                     * @return OutputFormat 是否已赋值
                     * 
                     */
                    bool OutputFormatHasBeenSet() const;

                    /**
                     * 获取单流录制模式下，用户的音视频是否合并，0：单流音视频不合并（默认）。1：单流音视频合并成一个ts。合流录制此参数无需设置，默认音视频合并。
                     * @return AvMerge 单流录制模式下，用户的音视频是否合并，0：单流音视频不合并（默认）。1：单流音视频合并成一个ts。合流录制此参数无需设置，默认音视频合并。
                     * 
                     */
                    uint64_t GetAvMerge() const;

                    /**
                     * 设置单流录制模式下，用户的音视频是否合并，0：单流音视频不合并（默认）。1：单流音视频合并成一个ts。合流录制此参数无需设置，默认音视频合并。
                     * @param _avMerge 单流录制模式下，用户的音视频是否合并，0：单流音视频不合并（默认）。1：单流音视频合并成一个ts。合流录制此参数无需设置，默认音视频合并。
                     * 
                     */
                    void SetAvMerge(const uint64_t& _avMerge);

                    /**
                     * 判断参数 AvMerge 是否已赋值
                     * @return AvMerge 是否已赋值
                     * 
                     */
                    bool AvMergeHasBeenSet() const;

                    /**
                     * 获取如果是aac或者mp4文件格式，超过长度限制后，系统会自动拆分视频文件。单位：分钟。默认为1440min（24h），取值范围为1-1440。【单文件限制最大为2G，满足文件大小 >2G 或录制时长度 > 24h任意一个条件，文件都会自动切分】
Hls 格式录制此参数不生效。
                     * @return MaxMediaFileDuration 如果是aac或者mp4文件格式，超过长度限制后，系统会自动拆分视频文件。单位：分钟。默认为1440min（24h），取值范围为1-1440。【单文件限制最大为2G，满足文件大小 >2G 或录制时长度 > 24h任意一个条件，文件都会自动切分】
Hls 格式录制此参数不生效。
                     * 
                     */
                    uint64_t GetMaxMediaFileDuration() const;

                    /**
                     * 设置如果是aac或者mp4文件格式，超过长度限制后，系统会自动拆分视频文件。单位：分钟。默认为1440min（24h），取值范围为1-1440。【单文件限制最大为2G，满足文件大小 >2G 或录制时长度 > 24h任意一个条件，文件都会自动切分】
Hls 格式录制此参数不生效。
                     * @param _maxMediaFileDuration 如果是aac或者mp4文件格式，超过长度限制后，系统会自动拆分视频文件。单位：分钟。默认为1440min（24h），取值范围为1-1440。【单文件限制最大为2G，满足文件大小 >2G 或录制时长度 > 24h任意一个条件，文件都会自动切分】
Hls 格式录制此参数不生效。
                     * 
                     */
                    void SetMaxMediaFileDuration(const uint64_t& _maxMediaFileDuration);

                    /**
                     * 判断参数 MaxMediaFileDuration 是否已赋值
                     * @return MaxMediaFileDuration 是否已赋值
                     * 
                     */
                    bool MaxMediaFileDurationHasBeenSet() const;

                    /**
                     * 获取指定录制主辅流，0：主流+辅流（默认）；1:主流；2:辅流。
                     * @return MediaId 指定录制主辅流，0：主流+辅流（默认）；1:主流；2:辅流。
                     * 
                     */
                    uint64_t GetMediaId() const;

                    /**
                     * 设置指定录制主辅流，0：主流+辅流（默认）；1:主流；2:辅流。
                     * @param _mediaId 指定录制主辅流，0：主流+辅流（默认）；1:主流；2:辅流。
                     * 
                     */
                    void SetMediaId(const uint64_t& _mediaId);

                    /**
                     * 判断参数 MediaId 是否已赋值
                     * @return MediaId 是否已赋值
                     * 
                     */
                    bool MediaIdHasBeenSet() const;

                    /**
                     * 获取上行视频停止时，录制的补帧类型，0：补最后一帧 1：补黑帧
                     * @return FillType 上行视频停止时，录制的补帧类型，0：补最后一帧 1：补黑帧
                     * 
                     */
                    uint64_t GetFillType() const;

                    /**
                     * 设置上行视频停止时，录制的补帧类型，0：补最后一帧 1：补黑帧
                     * @param _fillType 上行视频停止时，录制的补帧类型，0：补最后一帧 1：补黑帧
                     * 
                     */
                    void SetFillType(const uint64_t& _fillType);

                    /**
                     * 判断参数 FillType 是否已赋值
                     * @return FillType 是否已赋值
                     * 
                     */
                    bool FillTypeHasBeenSet() const;

                private:

                    /**
                     * 录制模式：
1：单流录制，分别录制房间的订阅UserId的音频和视频，将录制文件上传至云存储；
2：合流录制，将房间内订阅UserId的音视频混录成一个音视频文件，将录制文件上传至云存储；
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
                     * 输出文件的格式（存储至COS等第三方存储时有效）。0：(默认)输出文件为hls格式。1：输出文件格式为hls+mp4。2：输出文件格式为hls+aac 。3：输出文件格式为mp4。4：输出文件格式为aac。

存储到云点播VOD时此参数无效，存储到VOD时请通过TencentVod（https://cloud.tencent.com/document/api/647/44055#TencentVod）内的MediaType设置。
                     */
                    uint64_t m_outputFormat;
                    bool m_outputFormatHasBeenSet;

                    /**
                     * 单流录制模式下，用户的音视频是否合并，0：单流音视频不合并（默认）。1：单流音视频合并成一个ts。合流录制此参数无需设置，默认音视频合并。
                     */
                    uint64_t m_avMerge;
                    bool m_avMergeHasBeenSet;

                    /**
                     * 如果是aac或者mp4文件格式，超过长度限制后，系统会自动拆分视频文件。单位：分钟。默认为1440min（24h），取值范围为1-1440。【单文件限制最大为2G，满足文件大小 >2G 或录制时长度 > 24h任意一个条件，文件都会自动切分】
Hls 格式录制此参数不生效。
                     */
                    uint64_t m_maxMediaFileDuration;
                    bool m_maxMediaFileDurationHasBeenSet;

                    /**
                     * 指定录制主辅流，0：主流+辅流（默认）；1:主流；2:辅流。
                     */
                    uint64_t m_mediaId;
                    bool m_mediaIdHasBeenSet;

                    /**
                     * 上行视频停止时，录制的补帧类型，0：补最后一帧 1：补黑帧
                     */
                    uint64_t m_fillType;
                    bool m_fillTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_RECORDPARAMS_H_
