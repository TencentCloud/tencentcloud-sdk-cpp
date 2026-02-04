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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_MODIFYROOMREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_MODIFYROOMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * ModifyRoom请求参数结构体
                */
                class ModifyRoomRequest : public AbstractModel
                {
                public:
                    ModifyRoomRequest();
                    ~ModifyRoomRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>房间ID。</p>
                     * @return RoomId <p>房间ID。</p>
                     * 
                     */
                    uint64_t GetRoomId() const;

                    /**
                     * 设置<p>房间ID。</p>
                     * @param _roomId <p>房间ID。</p>
                     * 
                     */
                    void SetRoomId(const uint64_t& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取<p>低代码互动课堂的SdkAppId</p>
                     * @return SdkAppId <p>低代码互动课堂的SdkAppId</p>
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置<p>低代码互动课堂的SdkAppId</p>
                     * @param _sdkAppId <p>低代码互动课堂的SdkAppId</p>
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取<p>预定的房间开始时间，unix时间戳（秒）。直播开始后不允许修改。</p>
                     * @return StartTime <p>预定的房间开始时间，unix时间戳（秒）。直播开始后不允许修改。</p>
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置<p>预定的房间开始时间，unix时间戳（秒）。直播开始后不允许修改。</p>
                     * @param _startTime <p>预定的房间开始时间，unix时间戳（秒）。直播开始后不允许修改。</p>
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>预定的房间结束时间，unix时间戳（秒）。直播开始后不允许修改。</p>
                     * @return EndTime <p>预定的房间结束时间，unix时间戳（秒）。直播开始后不允许修改。</p>
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置<p>预定的房间结束时间，unix时间戳（秒）。直播开始后不允许修改。</p>
                     * @param _endTime <p>预定的房间结束时间，unix时间戳（秒）。直播开始后不允许修改。</p>
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>老师ID。直播开始后不允许修改。</p>
                     * @return TeacherId <p>老师ID。直播开始后不允许修改。</p>
                     * 
                     */
                    std::string GetTeacherId() const;

                    /**
                     * 设置<p>老师ID。直播开始后不允许修改。</p>
                     * @param _teacherId <p>老师ID。直播开始后不允许修改。</p>
                     * 
                     */
                    void SetTeacherId(const std::string& _teacherId);

                    /**
                     * 判断参数 TeacherId 是否已赋值
                     * @return TeacherId 是否已赋值
                     * 
                     */
                    bool TeacherIdHasBeenSet() const;

                    /**
                     * 获取<p>房间名称。<br>字符数不超过256</p>
                     * @return Name <p>房间名称。<br>字符数不超过256</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>房间名称。<br>字符数不超过256</p>
                     * @param _name <p>房间名称。<br>字符数不超过256</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>分辨率。可以有如下取值：<br>1 标清<br>2 高清<br>3 全高清<br>直播开始后不允许修改。</p>
                     * @return Resolution <p>分辨率。可以有如下取值：<br>1 标清<br>2 高清<br>3 全高清<br>直播开始后不允许修改。</p>
                     * 
                     */
                    uint64_t GetResolution() const;

                    /**
                     * 设置<p>分辨率。可以有如下取值：<br>1 标清<br>2 高清<br>3 全高清<br>直播开始后不允许修改。</p>
                     * @param _resolution <p>分辨率。可以有如下取值：<br>1 标清<br>2 高清<br>3 全高清<br>直播开始后不允许修改。</p>
                     * 
                     */
                    void SetResolution(const uint64_t& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取<p>设置房间/课堂同时最大可与老师进行连麦互动的人数，该参数支持正式上课/开播前调用修改房间修改。小班课取值范围[0,16]，大班课取值范围[0,1]，当取值为0时表示当前课堂/直播，不支持连麦互动。</p>
                     * @return MaxMicNumber <p>设置房间/课堂同时最大可与老师进行连麦互动的人数，该参数支持正式上课/开播前调用修改房间修改。小班课取值范围[0,16]，大班课取值范围[0,1]，当取值为0时表示当前课堂/直播，不支持连麦互动。</p>
                     * 
                     */
                    uint64_t GetMaxMicNumber() const;

                    /**
                     * 设置<p>设置房间/课堂同时最大可与老师进行连麦互动的人数，该参数支持正式上课/开播前调用修改房间修改。小班课取值范围[0,16]，大班课取值范围[0,1]，当取值为0时表示当前课堂/直播，不支持连麦互动。</p>
                     * @param _maxMicNumber <p>设置房间/课堂同时最大可与老师进行连麦互动的人数，该参数支持正式上课/开播前调用修改房间修改。小班课取值范围[0,16]，大班课取值范围[0,1]，当取值为0时表示当前课堂/直播，不支持连麦互动。</p>
                     * 
                     */
                    void SetMaxMicNumber(const uint64_t& _maxMicNumber);

                    /**
                     * 判断参数 MaxMicNumber 是否已赋值
                     * @return MaxMicNumber 是否已赋值
                     * 
                     */
                    bool MaxMicNumberHasBeenSet() const;

                    /**
                     * 获取<p>进入房间时是否自动连麦。可以有以下取值：<br>0 不自动连麦（默认值）<br>1 自动连麦<br>直播开始后不允许修改。</p>
                     * @return AutoMic <p>进入房间时是否自动连麦。可以有以下取值：<br>0 不自动连麦（默认值）<br>1 自动连麦<br>直播开始后不允许修改。</p>
                     * 
                     */
                    uint64_t GetAutoMic() const;

                    /**
                     * 设置<p>进入房间时是否自动连麦。可以有以下取值：<br>0 不自动连麦（默认值）<br>1 自动连麦<br>直播开始后不允许修改。</p>
                     * @param _autoMic <p>进入房间时是否自动连麦。可以有以下取值：<br>0 不自动连麦（默认值）<br>1 自动连麦<br>直播开始后不允许修改。</p>
                     * 
                     */
                    void SetAutoMic(const uint64_t& _autoMic);

                    /**
                     * 判断参数 AutoMic 是否已赋值
                     * @return AutoMic 是否已赋值
                     * 
                     */
                    bool AutoMicHasBeenSet() const;

                    /**
                     * 获取<p>高音质模式。可以有以下取值：<br>0 不开启高音质（默认值）<br>1 开启高音质<br>直播开始后不允许修改。</p>
                     * @return AudioQuality <p>高音质模式。可以有以下取值：<br>0 不开启高音质（默认值）<br>1 开启高音质<br>直播开始后不允许修改。</p>
                     * 
                     */
                    uint64_t GetAudioQuality() const;

                    /**
                     * 设置<p>高音质模式。可以有以下取值：<br>0 不开启高音质（默认值）<br>1 开启高音质<br>直播开始后不允许修改。</p>
                     * @param _audioQuality <p>高音质模式。可以有以下取值：<br>0 不开启高音质（默认值）<br>1 开启高音质<br>直播开始后不允许修改。</p>
                     * 
                     */
                    void SetAudioQuality(const uint64_t& _audioQuality);

                    /**
                     * 判断参数 AudioQuality 是否已赋值
                     * @return AudioQuality 是否已赋值
                     * 
                     */
                    bool AudioQualityHasBeenSet() const;

                    /**
                     * 获取<p>房间子类型，可以有以下取值：<br>videodoc 文档+视频<br>video 纯视频<br>直播开始后不允许修改。</p>
                     * @return SubType <p>房间子类型，可以有以下取值：<br>videodoc 文档+视频<br>video 纯视频<br>直播开始后不允许修改。</p>
                     * 
                     */
                    std::string GetSubType() const;

                    /**
                     * 设置<p>房间子类型，可以有以下取值：<br>videodoc 文档+视频<br>video 纯视频<br>直播开始后不允许修改。</p>
                     * @param _subType <p>房间子类型，可以有以下取值：<br>videodoc 文档+视频<br>video 纯视频<br>直播开始后不允许修改。</p>
                     * 
                     */
                    void SetSubType(const std::string& _subType);

                    /**
                     * 判断参数 SubType 是否已赋值
                     * @return SubType 是否已赋值
                     * 
                     */
                    bool SubTypeHasBeenSet() const;

                    /**
                     * 获取<p>禁止录制。可以有以下取值：<br>0 不禁止录制（默认值）<br>1 禁止录制<br>直播开始后不允许修改。</p>
                     * @return DisableRecord <p>禁止录制。可以有以下取值：<br>0 不禁止录制（默认值）<br>1 禁止录制<br>直播开始后不允许修改。</p>
                     * 
                     */
                    uint64_t GetDisableRecord() const;

                    /**
                     * 设置<p>禁止录制。可以有以下取值：<br>0 不禁止录制（默认值）<br>1 禁止录制<br>直播开始后不允许修改。</p>
                     * @param _disableRecord <p>禁止录制。可以有以下取值：<br>0 不禁止录制（默认值）<br>1 禁止录制<br>直播开始后不允许修改。</p>
                     * 
                     */
                    void SetDisableRecord(const uint64_t& _disableRecord);

                    /**
                     * 判断参数 DisableRecord 是否已赋值
                     * @return DisableRecord 是否已赋值
                     * 
                     */
                    bool DisableRecordHasBeenSet() const;

                    /**
                     * 获取<p>助教Id列表。直播开始后不允许修改。</p>
                     * @return Assistants <p>助教Id列表。直播开始后不允许修改。</p>
                     * 
                     */
                    std::vector<std::string> GetAssistants() const;

                    /**
                     * 设置<p>助教Id列表。直播开始后不允许修改。</p>
                     * @param _assistants <p>助教Id列表。直播开始后不允许修改。</p>
                     * 
                     */
                    void SetAssistants(const std::vector<std::string>& _assistants);

                    /**
                     * 判断参数 Assistants 是否已赋值
                     * @return Assistants 是否已赋值
                     * 
                     */
                    bool AssistantsHasBeenSet() const;

                    /**
                     * 获取<p>房间绑定的群组ID。直播开始后不允许修改。</p>
                     * @return GroupId <p>房间绑定的群组ID。直播开始后不允许修改。</p>
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置<p>房间绑定的群组ID。直播开始后不允许修改。</p>
                     * @param _groupId <p>房间绑定的群组ID。直播开始后不允许修改。</p>
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取<p>打开学生麦克风/摄像头的授权开关。直播开始后不允许修改。</p>
                     * @return EnableDirectControl <p>打开学生麦克风/摄像头的授权开关。直播开始后不允许修改。</p>
                     * 
                     */
                    uint64_t GetEnableDirectControl() const;

                    /**
                     * 设置<p>打开学生麦克风/摄像头的授权开关。直播开始后不允许修改。</p>
                     * @param _enableDirectControl <p>打开学生麦克风/摄像头的授权开关。直播开始后不允许修改。</p>
                     * 
                     */
                    void SetEnableDirectControl(const uint64_t& _enableDirectControl);

                    /**
                     * 判断参数 EnableDirectControl 是否已赋值
                     * @return EnableDirectControl 是否已赋值
                     * 
                     */
                    bool EnableDirectControlHasBeenSet() const;

                    /**
                     * 获取<p>开启专注模式。<br>0 收看全部角色音视频(默认)<br>1 只看老师和助教</p>
                     * @return InteractionMode <p>开启专注模式。<br>0 收看全部角色音视频(默认)<br>1 只看老师和助教</p>
                     * 
                     */
                    uint64_t GetInteractionMode() const;

                    /**
                     * 设置<p>开启专注模式。<br>0 收看全部角色音视频(默认)<br>1 只看老师和助教</p>
                     * @param _interactionMode <p>开启专注模式。<br>0 收看全部角色音视频(默认)<br>1 只看老师和助教</p>
                     * 
                     */
                    void SetInteractionMode(const uint64_t& _interactionMode);

                    /**
                     * 判断参数 InteractionMode 是否已赋值
                     * @return InteractionMode 是否已赋值
                     * 
                     */
                    bool InteractionModeHasBeenSet() const;

                    /**
                     * 获取<p>横竖屏。0：横屏开播（默认值）; 1：竖屏开播，当前仅支持移动端的纯视频类型</p>
                     * @return VideoOrientation <p>横竖屏。0：横屏开播（默认值）; 1：竖屏开播，当前仅支持移动端的纯视频类型</p>
                     * 
                     */
                    uint64_t GetVideoOrientation() const;

                    /**
                     * 设置<p>横竖屏。0：横屏开播（默认值）; 1：竖屏开播，当前仅支持移动端的纯视频类型</p>
                     * @param _videoOrientation <p>横竖屏。0：横屏开播（默认值）; 1：竖屏开播，当前仅支持移动端的纯视频类型</p>
                     * 
                     */
                    void SetVideoOrientation(const uint64_t& _videoOrientation);

                    /**
                     * 判断参数 VideoOrientation 是否已赋值
                     * @return VideoOrientation 是否已赋值
                     * 
                     */
                    bool VideoOrientationHasBeenSet() const;

                    /**
                     * 获取<p>开启课后评分。 0：不开启(默认)  1：开启</p>
                     * @return IsGradingRequiredPostClass <p>开启课后评分。 0：不开启(默认)  1：开启</p>
                     * 
                     */
                    uint64_t GetIsGradingRequiredPostClass() const;

                    /**
                     * 设置<p>开启课后评分。 0：不开启(默认)  1：开启</p>
                     * @param _isGradingRequiredPostClass <p>开启课后评分。 0：不开启(默认)  1：开启</p>
                     * 
                     */
                    void SetIsGradingRequiredPostClass(const uint64_t& _isGradingRequiredPostClass);

                    /**
                     * 判断参数 IsGradingRequiredPostClass 是否已赋值
                     * @return IsGradingRequiredPostClass 是否已赋值
                     * 
                     */
                    bool IsGradingRequiredPostClassHasBeenSet() const;

                    /**
                     * 获取<p>房间类型: 0 小班课（默认值）; 1 大班课; 2 1V1 （预留参数、暂未开放)<br>注：大班课的布局(layout)只有三分屏</p>
                     * @return RoomType <p>房间类型: 0 小班课（默认值）; 1 大班课; 2 1V1 （预留参数、暂未开放)<br>注：大班课的布局(layout)只有三分屏</p>
                     * 
                     */
                    uint64_t GetRoomType() const;

                    /**
                     * 设置<p>房间类型: 0 小班课（默认值）; 1 大班课; 2 1V1 （预留参数、暂未开放)<br>注：大班课的布局(layout)只有三分屏</p>
                     * @param _roomType <p>房间类型: 0 小班课（默认值）; 1 大班课; 2 1V1 （预留参数、暂未开放)<br>注：大班课的布局(layout)只有三分屏</p>
                     * 
                     */
                    void SetRoomType(const uint64_t& _roomType);

                    /**
                     * 判断参数 RoomType 是否已赋值
                     * @return RoomType 是否已赋值
                     * 
                     */
                    bool RoomTypeHasBeenSet() const;

                    /**
                     * 获取<p>录制模板。仅可修改还未开始的房间。录制模板枚举值参考：https://cloud.tencent.com/document/product/1639/89744</p>
                     * @return RecordLayout <p>录制模板。仅可修改还未开始的房间。录制模板枚举值参考：https://cloud.tencent.com/document/product/1639/89744</p>
                     * 
                     */
                    uint64_t GetRecordLayout() const;

                    /**
                     * 设置<p>录制模板。仅可修改还未开始的房间。录制模板枚举值参考：https://cloud.tencent.com/document/product/1639/89744</p>
                     * @param _recordLayout <p>录制模板。仅可修改还未开始的房间。录制模板枚举值参考：https://cloud.tencent.com/document/product/1639/89744</p>
                     * 
                     */
                    void SetRecordLayout(const uint64_t& _recordLayout);

                    /**
                     * 判断参数 RecordLayout 是否已赋值
                     * @return RecordLayout 是否已赋值
                     * 
                     */
                    bool RecordLayoutHasBeenSet() const;

                    /**
                     * 获取<p>拖堂时间：单位分钟，0为不限制(默认值), -1为不能拖堂，大于0为拖堂的时间，最大值120分钟</p>
                     * @return EndDelayTime <p>拖堂时间：单位分钟，0为不限制(默认值), -1为不能拖堂，大于0为拖堂的时间，最大值120分钟</p>
                     * 
                     */
                    int64_t GetEndDelayTime() const;

                    /**
                     * 设置<p>拖堂时间：单位分钟，0为不限制(默认值), -1为不能拖堂，大于0为拖堂的时间，最大值120分钟</p>
                     * @param _endDelayTime <p>拖堂时间：单位分钟，0为不限制(默认值), -1为不能拖堂，大于0为拖堂的时间，最大值120分钟</p>
                     * 
                     */
                    void SetEndDelayTime(const int64_t& _endDelayTime);

                    /**
                     * 判断参数 EndDelayTime 是否已赋值
                     * @return EndDelayTime 是否已赋值
                     * 
                     */
                    bool EndDelayTimeHasBeenSet() const;

                    /**
                     * 获取<p>直播方式：0 常规模式（默认）1 回放直播模式（伪直播）。 目前支持从回放直播模式（伪直播）改为常规模式，不支持从常规模式改为回放直播模式（伪直播）</p>
                     * @return LiveType <p>直播方式：0 常规模式（默认）1 回放直播模式（伪直播）。 目前支持从回放直播模式（伪直播）改为常规模式，不支持从常规模式改为回放直播模式（伪直播）</p>
                     * 
                     */
                    uint64_t GetLiveType() const;

                    /**
                     * 设置<p>直播方式：0 常规模式（默认）1 回放直播模式（伪直播）。 目前支持从回放直播模式（伪直播）改为常规模式，不支持从常规模式改为回放直播模式（伪直播）</p>
                     * @param _liveType <p>直播方式：0 常规模式（默认）1 回放直播模式（伪直播）。 目前支持从回放直播模式（伪直播）改为常规模式，不支持从常规模式改为回放直播模式（伪直播）</p>
                     * 
                     */
                    void SetLiveType(const uint64_t& _liveType);

                    /**
                     * 判断参数 LiveType 是否已赋值
                     * @return LiveType 是否已赋值
                     * 
                     */
                    bool LiveTypeHasBeenSet() const;

                    /**
                     * 获取<p>伪直播链接。 支持的协议以及格式： 协议：HTTP、HTTPS、RTMP、HLS 。格式：FLV、MP3、MP4、MPEG-TS、MOV、MKV、M4A。视频编码：H.264、VP8。音频编码：AAC、OPUS。</p><p>注意：伪直播视频规格建议最高使用1080p 30fps，4k视频会有兼容性问题导致直播失败。</p>
                     * @return RecordLiveUrl <p>伪直播链接。 支持的协议以及格式： 协议：HTTP、HTTPS、RTMP、HLS 。格式：FLV、MP3、MP4、MPEG-TS、MOV、MKV、M4A。视频编码：H.264、VP8。音频编码：AAC、OPUS。</p><p>注意：伪直播视频规格建议最高使用1080p 30fps，4k视频会有兼容性问题导致直播失败。</p>
                     * 
                     */
                    std::string GetRecordLiveUrl() const;

                    /**
                     * 设置<p>伪直播链接。 支持的协议以及格式： 协议：HTTP、HTTPS、RTMP、HLS 。格式：FLV、MP3、MP4、MPEG-TS、MOV、MKV、M4A。视频编码：H.264、VP8。音频编码：AAC、OPUS。</p><p>注意：伪直播视频规格建议最高使用1080p 30fps，4k视频会有兼容性问题导致直播失败。</p>
                     * @param _recordLiveUrl <p>伪直播链接。 支持的协议以及格式： 协议：HTTP、HTTPS、RTMP、HLS 。格式：FLV、MP3、MP4、MPEG-TS、MOV、MKV、M4A。视频编码：H.264、VP8。音频编码：AAC、OPUS。</p><p>注意：伪直播视频规格建议最高使用1080p 30fps，4k视频会有兼容性问题导致直播失败。</p>
                     * 
                     */
                    void SetRecordLiveUrl(const std::string& _recordLiveUrl);

                    /**
                     * 判断参数 RecordLiveUrl 是否已赋值
                     * @return RecordLiveUrl 是否已赋值
                     * 
                     */
                    bool RecordLiveUrlHasBeenSet() const;

                    /**
                     * 获取<p>是否自动开始上课：0 不自动上课（默认） 1 自动上课 live_type=1的时候有效</p>
                     * @return EnableAutoStart <p>是否自动开始上课：0 不自动上课（默认） 1 自动上课 live_type=1的时候有效</p>
                     * 
                     */
                    uint64_t GetEnableAutoStart() const;

                    /**
                     * 设置<p>是否自动开始上课：0 不自动上课（默认） 1 自动上课 live_type=1的时候有效</p>
                     * @param _enableAutoStart <p>是否自动开始上课：0 不自动上课（默认） 1 自动上课 live_type=1的时候有效</p>
                     * 
                     */
                    void SetEnableAutoStart(const uint64_t& _enableAutoStart);

                    /**
                     * 判断参数 EnableAutoStart 是否已赋值
                     * @return EnableAutoStart 是否已赋值
                     * 
                     */
                    bool EnableAutoStartHasBeenSet() const;

                    /**
                     * 获取<p>录制自定义场景，仅recordlayout=9的时候此参数有效,数据内容为用户自定义场景参数，数据格式为json键值对方式，其中键值对的value为string类型。</p>
                     * @return RecordScene <p>录制自定义场景，仅recordlayout=9的时候此参数有效,数据内容为用户自定义场景参数，数据格式为json键值对方式，其中键值对的value为string类型。</p>
                     * 
                     */
                    std::string GetRecordScene() const;

                    /**
                     * 设置<p>录制自定义场景，仅recordlayout=9的时候此参数有效,数据内容为用户自定义场景参数，数据格式为json键值对方式，其中键值对的value为string类型。</p>
                     * @param _recordScene <p>录制自定义场景，仅recordlayout=9的时候此参数有效,数据内容为用户自定义场景参数，数据格式为json键值对方式，其中键值对的value为string类型。</p>
                     * 
                     */
                    void SetRecordScene(const std::string& _recordScene);

                    /**
                     * 判断参数 RecordScene 是否已赋值
                     * @return RecordScene 是否已赋值
                     * 
                     */
                    bool RecordSceneHasBeenSet() const;

                    /**
                     * 获取<p>录制自定义语言，仅recordlayout=9的时候此参数有效</p>
                     * @return RecordLang <p>录制自定义语言，仅recordlayout=9的时候此参数有效</p>
                     * @deprecated
                     */
                    std::string GetRecordLang() const;

                    /**
                     * 设置<p>录制自定义语言，仅recordlayout=9的时候此参数有效</p>
                     * @param _recordLang <p>录制自定义语言，仅recordlayout=9的时候此参数有效</p>
                     * @deprecated
                     */
                    void SetRecordLang(const std::string& _recordLang);

                    /**
                     * 判断参数 RecordLang 是否已赋值
                     * @return RecordLang 是否已赋值
                     * @deprecated
                     */
                    bool RecordLangHasBeenSet() const;

                    /**
                     * 获取<p>板书截图生成类型。0 不生成板书；1 全量模式；2 单页去重模式</p>
                     * @return WhiteBoardSnapshotMode <p>板书截图生成类型。0 不生成板书；1 全量模式；2 单页去重模式</p>
                     * 
                     */
                    uint64_t GetWhiteBoardSnapshotMode() const;

                    /**
                     * 设置<p>板书截图生成类型。0 不生成板书；1 全量模式；2 单页去重模式</p>
                     * @param _whiteBoardSnapshotMode <p>板书截图生成类型。0 不生成板书；1 全量模式；2 单页去重模式</p>
                     * 
                     */
                    void SetWhiteBoardSnapshotMode(const uint64_t& _whiteBoardSnapshotMode);

                    /**
                     * 判断参数 WhiteBoardSnapshotMode 是否已赋值
                     * @return WhiteBoardSnapshotMode 是否已赋值
                     * 
                     */
                    bool WhiteBoardSnapshotModeHasBeenSet() const;

                    /**
                     * 获取<p>字幕转写功能开关。可以有以下取值：<br>0 不开启字幕转写功能（默认值）<br>1 自动转写模式：上课自动开启，下课自动停止<br>2 手动转写模式：支持老师或者助教通过客户端API手动开启/关闭字幕转写<br>设置0和1时客户端均不展示手动开关，设置2时老师或者助教端展示字幕转写开关</p>
                     * @return SubtitlesTranscription <p>字幕转写功能开关。可以有以下取值：<br>0 不开启字幕转写功能（默认值）<br>1 自动转写模式：上课自动开启，下课自动停止<br>2 手动转写模式：支持老师或者助教通过客户端API手动开启/关闭字幕转写<br>设置0和1时客户端均不展示手动开关，设置2时老师或者助教端展示字幕转写开关</p>
                     * 
                     */
                    uint64_t GetSubtitlesTranscription() const;

                    /**
                     * 设置<p>字幕转写功能开关。可以有以下取值：<br>0 不开启字幕转写功能（默认值）<br>1 自动转写模式：上课自动开启，下课自动停止<br>2 手动转写模式：支持老师或者助教通过客户端API手动开启/关闭字幕转写<br>设置0和1时客户端均不展示手动开关，设置2时老师或者助教端展示字幕转写开关</p>
                     * @param _subtitlesTranscription <p>字幕转写功能开关。可以有以下取值：<br>0 不开启字幕转写功能（默认值）<br>1 自动转写模式：上课自动开启，下课自动停止<br>2 手动转写模式：支持老师或者助教通过客户端API手动开启/关闭字幕转写<br>设置0和1时客户端均不展示手动开关，设置2时老师或者助教端展示字幕转写开关</p>
                     * 
                     */
                    void SetSubtitlesTranscription(const uint64_t& _subtitlesTranscription);

                    /**
                     * 判断参数 SubtitlesTranscription 是否已赋值
                     * @return SubtitlesTranscription 是否已赋值
                     * 
                     */
                    bool SubtitlesTranscriptionHasBeenSet() const;

                    /**
                     * 获取<p>嘉宾Id列表。当圆桌会议模式（RoomType==3）时生效</p>
                     * @return Guests <p>嘉宾Id列表。当圆桌会议模式（RoomType==3）时生效</p>
                     * 
                     */
                    std::vector<std::string> GetGuests() const;

                    /**
                     * 设置<p>嘉宾Id列表。当圆桌会议模式（RoomType==3）时生效</p>
                     * @param _guests <p>嘉宾Id列表。当圆桌会议模式（RoomType==3）时生效</p>
                     * 
                     */
                    void SetGuests(const std::vector<std::string>& _guests);

                    /**
                     * 判断参数 Guests 是否已赋值
                     * @return Guests 是否已赋值
                     * 
                     */
                    bool GuestsHasBeenSet() const;

                    /**
                     * 获取<p>录制文件合并开关。0 关闭 1 开启 注：只有在一节课多次启用手动录制时，此功能才有效</p>
                     * @return RecordMerge <p>录制文件合并开关。0 关闭 1 开启 注：只有在一节课多次启用手动录制时，此功能才有效</p>
                     * 
                     */
                    uint64_t GetRecordMerge() const;

                    /**
                     * 设置<p>录制文件合并开关。0 关闭 1 开启 注：只有在一节课多次启用手动录制时，此功能才有效</p>
                     * @param _recordMerge <p>录制文件合并开关。0 关闭 1 开启 注：只有在一节课多次启用手动录制时，此功能才有效</p>
                     * 
                     */
                    void SetRecordMerge(const uint64_t& _recordMerge);

                    /**
                     * 判断参数 RecordMerge 是否已赋值
                     * @return RecordMerge 是否已赋值
                     * 
                     */
                    bool RecordMergeHasBeenSet() const;

                private:

                    /**
                     * <p>房间ID。</p>
                     */
                    uint64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * <p>低代码互动课堂的SdkAppId</p>
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * <p>预定的房间开始时间，unix时间戳（秒）。直播开始后不允许修改。</p>
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>预定的房间结束时间，unix时间戳（秒）。直播开始后不允许修改。</p>
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>老师ID。直播开始后不允许修改。</p>
                     */
                    std::string m_teacherId;
                    bool m_teacherIdHasBeenSet;

                    /**
                     * <p>房间名称。<br>字符数不超过256</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>分辨率。可以有如下取值：<br>1 标清<br>2 高清<br>3 全高清<br>直播开始后不允许修改。</p>
                     */
                    uint64_t m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * <p>设置房间/课堂同时最大可与老师进行连麦互动的人数，该参数支持正式上课/开播前调用修改房间修改。小班课取值范围[0,16]，大班课取值范围[0,1]，当取值为0时表示当前课堂/直播，不支持连麦互动。</p>
                     */
                    uint64_t m_maxMicNumber;
                    bool m_maxMicNumberHasBeenSet;

                    /**
                     * <p>进入房间时是否自动连麦。可以有以下取值：<br>0 不自动连麦（默认值）<br>1 自动连麦<br>直播开始后不允许修改。</p>
                     */
                    uint64_t m_autoMic;
                    bool m_autoMicHasBeenSet;

                    /**
                     * <p>高音质模式。可以有以下取值：<br>0 不开启高音质（默认值）<br>1 开启高音质<br>直播开始后不允许修改。</p>
                     */
                    uint64_t m_audioQuality;
                    bool m_audioQualityHasBeenSet;

                    /**
                     * <p>房间子类型，可以有以下取值：<br>videodoc 文档+视频<br>video 纯视频<br>直播开始后不允许修改。</p>
                     */
                    std::string m_subType;
                    bool m_subTypeHasBeenSet;

                    /**
                     * <p>禁止录制。可以有以下取值：<br>0 不禁止录制（默认值）<br>1 禁止录制<br>直播开始后不允许修改。</p>
                     */
                    uint64_t m_disableRecord;
                    bool m_disableRecordHasBeenSet;

                    /**
                     * <p>助教Id列表。直播开始后不允许修改。</p>
                     */
                    std::vector<std::string> m_assistants;
                    bool m_assistantsHasBeenSet;

                    /**
                     * <p>房间绑定的群组ID。直播开始后不允许修改。</p>
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>打开学生麦克风/摄像头的授权开关。直播开始后不允许修改。</p>
                     */
                    uint64_t m_enableDirectControl;
                    bool m_enableDirectControlHasBeenSet;

                    /**
                     * <p>开启专注模式。<br>0 收看全部角色音视频(默认)<br>1 只看老师和助教</p>
                     */
                    uint64_t m_interactionMode;
                    bool m_interactionModeHasBeenSet;

                    /**
                     * <p>横竖屏。0：横屏开播（默认值）; 1：竖屏开播，当前仅支持移动端的纯视频类型</p>
                     */
                    uint64_t m_videoOrientation;
                    bool m_videoOrientationHasBeenSet;

                    /**
                     * <p>开启课后评分。 0：不开启(默认)  1：开启</p>
                     */
                    uint64_t m_isGradingRequiredPostClass;
                    bool m_isGradingRequiredPostClassHasBeenSet;

                    /**
                     * <p>房间类型: 0 小班课（默认值）; 1 大班课; 2 1V1 （预留参数、暂未开放)<br>注：大班课的布局(layout)只有三分屏</p>
                     */
                    uint64_t m_roomType;
                    bool m_roomTypeHasBeenSet;

                    /**
                     * <p>录制模板。仅可修改还未开始的房间。录制模板枚举值参考：https://cloud.tencent.com/document/product/1639/89744</p>
                     */
                    uint64_t m_recordLayout;
                    bool m_recordLayoutHasBeenSet;

                    /**
                     * <p>拖堂时间：单位分钟，0为不限制(默认值), -1为不能拖堂，大于0为拖堂的时间，最大值120分钟</p>
                     */
                    int64_t m_endDelayTime;
                    bool m_endDelayTimeHasBeenSet;

                    /**
                     * <p>直播方式：0 常规模式（默认）1 回放直播模式（伪直播）。 目前支持从回放直播模式（伪直播）改为常规模式，不支持从常规模式改为回放直播模式（伪直播）</p>
                     */
                    uint64_t m_liveType;
                    bool m_liveTypeHasBeenSet;

                    /**
                     * <p>伪直播链接。 支持的协议以及格式： 协议：HTTP、HTTPS、RTMP、HLS 。格式：FLV、MP3、MP4、MPEG-TS、MOV、MKV、M4A。视频编码：H.264、VP8。音频编码：AAC、OPUS。</p><p>注意：伪直播视频规格建议最高使用1080p 30fps，4k视频会有兼容性问题导致直播失败。</p>
                     */
                    std::string m_recordLiveUrl;
                    bool m_recordLiveUrlHasBeenSet;

                    /**
                     * <p>是否自动开始上课：0 不自动上课（默认） 1 自动上课 live_type=1的时候有效</p>
                     */
                    uint64_t m_enableAutoStart;
                    bool m_enableAutoStartHasBeenSet;

                    /**
                     * <p>录制自定义场景，仅recordlayout=9的时候此参数有效,数据内容为用户自定义场景参数，数据格式为json键值对方式，其中键值对的value为string类型。</p>
                     */
                    std::string m_recordScene;
                    bool m_recordSceneHasBeenSet;

                    /**
                     * <p>录制自定义语言，仅recordlayout=9的时候此参数有效</p>
                     */
                    std::string m_recordLang;
                    bool m_recordLangHasBeenSet;

                    /**
                     * <p>板书截图生成类型。0 不生成板书；1 全量模式；2 单页去重模式</p>
                     */
                    uint64_t m_whiteBoardSnapshotMode;
                    bool m_whiteBoardSnapshotModeHasBeenSet;

                    /**
                     * <p>字幕转写功能开关。可以有以下取值：<br>0 不开启字幕转写功能（默认值）<br>1 自动转写模式：上课自动开启，下课自动停止<br>2 手动转写模式：支持老师或者助教通过客户端API手动开启/关闭字幕转写<br>设置0和1时客户端均不展示手动开关，设置2时老师或者助教端展示字幕转写开关</p>
                     */
                    uint64_t m_subtitlesTranscription;
                    bool m_subtitlesTranscriptionHasBeenSet;

                    /**
                     * <p>嘉宾Id列表。当圆桌会议模式（RoomType==3）时生效</p>
                     */
                    std::vector<std::string> m_guests;
                    bool m_guestsHasBeenSet;

                    /**
                     * <p>录制文件合并开关。0 关闭 1 开启 注：只有在一节课多次启用手动录制时，此功能才有效</p>
                     */
                    uint64_t m_recordMerge;
                    bool m_recordMergeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_MODIFYROOMREQUEST_H_
