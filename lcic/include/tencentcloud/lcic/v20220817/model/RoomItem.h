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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_ROOMITEM_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_ROOMITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 房间列表
                */
                class RoomItem : public AbstractModel
                {
                public:
                    RoomItem();
                    ~RoomItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
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
                     * 获取房间ID
                     * @return RoomId 房间ID
                     * 
                     */
                    uint64_t GetRoomId() const;

                    /**
                     * 设置房间ID
                     * @param _roomId 房间ID
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
                     * 获取房间状态。0 未开始 ；1进行中  ；2 已结束；3已过期
                     * @return Status 房间状态。0 未开始 ；1进行中  ；2 已结束；3已过期
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置房间状态。0 未开始 ；1进行中  ；2 已结束；3已过期
                     * @param _status 房间状态。0 未开始 ；1进行中  ；2 已结束；3已过期
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
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
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
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
                     * 获取实际开始时间
                     * @return RealStartTime 实际开始时间
                     * 
                     */
                    uint64_t GetRealStartTime() const;

                    /**
                     * 设置实际开始时间
                     * @param _realStartTime 实际开始时间
                     * 
                     */
                    void SetRealStartTime(const uint64_t& _realStartTime);

                    /**
                     * 判断参数 RealStartTime 是否已赋值
                     * @return RealStartTime 是否已赋值
                     * 
                     */
                    bool RealStartTimeHasBeenSet() const;

                    /**
                     * 获取实际结束时间
                     * @return RealEndTime 实际结束时间
                     * 
                     */
                    uint64_t GetRealEndTime() const;

                    /**
                     * 设置实际结束时间
                     * @param _realEndTime 实际结束时间
                     * 
                     */
                    void SetRealEndTime(const uint64_t& _realEndTime);

                    /**
                     * 判断参数 RealEndTime 是否已赋值
                     * @return RealEndTime 是否已赋值
                     * 
                     */
                    bool RealEndTimeHasBeenSet() const;

                    /**
                     * 获取头像区域，摄像头视频画面的分辨率。可以有如下取值：
1 标清
2 高清
3 全高清
                     * @return Resolution 头像区域，摄像头视频画面的分辨率。可以有如下取值：
1 标清
2 高清
3 全高清
                     * 
                     */
                    uint64_t GetResolution() const;

                    /**
                     * 设置头像区域，摄像头视频画面的分辨率。可以有如下取值：
1 标清
2 高清
3 全高清
                     * @param _resolution 头像区域，摄像头视频画面的分辨率。可以有如下取值：
1 标清
2 高清
3 全高清
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
                     * 获取最大允许连麦人数。已废弃，使用字段 MaxMicNumber
                     * @return MaxRTCMember 最大允许连麦人数。已废弃，使用字段 MaxMicNumber
                     * 
                     */
                    uint64_t GetMaxRTCMember() const;

                    /**
                     * 设置最大允许连麦人数。已废弃，使用字段 MaxMicNumber
                     * @param _maxRTCMember 最大允许连麦人数。已废弃，使用字段 MaxMicNumber
                     * 
                     */
                    void SetMaxRTCMember(const uint64_t& _maxRTCMember);

                    /**
                     * 判断参数 MaxRTCMember 是否已赋值
                     * @return MaxRTCMember 是否已赋值
                     * 
                     */
                    bool MaxRTCMemberHasBeenSet() const;

                    /**
                     * 获取房间录制地址。已废弃，使用新字段 RecordUrl
                     * @return ReplayUrl 房间录制地址。已废弃，使用新字段 RecordUrl
                     * 
                     */
                    std::string GetReplayUrl() const;

                    /**
                     * 设置房间录制地址。已废弃，使用新字段 RecordUrl
                     * @param _replayUrl 房间录制地址。已废弃，使用新字段 RecordUrl
                     * 
                     */
                    void SetReplayUrl(const std::string& _replayUrl);

                    /**
                     * 判断参数 ReplayUrl 是否已赋值
                     * @return ReplayUrl 是否已赋值
                     * 
                     */
                    bool ReplayUrlHasBeenSet() const;

                    /**
                     * 获取录制地址（协议为https)。仅在房间结束后存在。
                     * @return RecordUrl 录制地址（协议为https)。仅在房间结束后存在。
                     * 
                     */
                    std::string GetRecordUrl() const;

                    /**
                     * 设置录制地址（协议为https)。仅在房间结束后存在。
                     * @param _recordUrl 录制地址（协议为https)。仅在房间结束后存在。
                     * 
                     */
                    void SetRecordUrl(const std::string& _recordUrl);

                    /**
                     * 判断参数 RecordUrl 是否已赋值
                     * @return RecordUrl 是否已赋值
                     * 
                     */
                    bool RecordUrlHasBeenSet() const;

                    /**
                     * 获取课堂同时最大可与老师进行连麦互动的人数，该参数支持正式上课/开播前调用修改房间修改。小班课取值范围[0,16]，大班课取值范围[0,1]，当取值为0时表示当前课堂/直播，不支持连麦互动。
                     * @return MaxMicNumber 课堂同时最大可与老师进行连麦互动的人数，该参数支持正式上课/开播前调用修改房间修改。小班课取值范围[0,16]，大班课取值范围[0,1]，当取值为0时表示当前课堂/直播，不支持连麦互动。
                     * 
                     */
                    uint64_t GetMaxMicNumber() const;

                    /**
                     * 设置课堂同时最大可与老师进行连麦互动的人数，该参数支持正式上课/开播前调用修改房间修改。小班课取值范围[0,16]，大班课取值范围[0,1]，当取值为0时表示当前课堂/直播，不支持连麦互动。
                     * @param _maxMicNumber 课堂同时最大可与老师进行连麦互动的人数，该参数支持正式上课/开播前调用修改房间修改。小班课取值范围[0,16]，大班课取值范围[0,1]，当取值为0时表示当前课堂/直播，不支持连麦互动。
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
                     * 获取打开学生麦克风/摄像头的授权开关 
                     * @return EnableDirectControl 打开学生麦克风/摄像头的授权开关 
                     * 
                     */
                    uint64_t GetEnableDirectControl() const;

                    /**
                     * 设置打开学生麦克风/摄像头的授权开关 
                     * @param _enableDirectControl 打开学生麦克风/摄像头的授权开关 
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
                     * 获取开启专注模式。 0 收看全部角色音视频(默认) 1 只看老师和助教
                     * @return InteractionMode 开启专注模式。 0 收看全部角色音视频(默认) 1 只看老师和助教
                     * 
                     */
                    int64_t GetInteractionMode() const;

                    /**
                     * 设置开启专注模式。 0 收看全部角色音视频(默认) 1 只看老师和助教
                     * @param _interactionMode 开启专注模式。 0 收看全部角色音视频(默认) 1 只看老师和助教
                     * 
                     */
                    void SetInteractionMode(const int64_t& _interactionMode);

                    /**
                     * 判断参数 InteractionMode 是否已赋值
                     * @return InteractionMode 是否已赋值
                     * 
                     */
                    bool InteractionModeHasBeenSet() const;

                    /**
                     * 获取横竖屏。0：横屏开播（默认值）; 1：竖屏开播，当前仅支持移动端的纯视频类型
                     * @return VideoOrientation 横竖屏。0：横屏开播（默认值）; 1：竖屏开播，当前仅支持移动端的纯视频类型
                     * 
                     */
                    int64_t GetVideoOrientation() const;

                    /**
                     * 设置横竖屏。0：横屏开播（默认值）; 1：竖屏开播，当前仅支持移动端的纯视频类型
                     * @param _videoOrientation 横竖屏。0：横屏开播（默认值）; 1：竖屏开播，当前仅支持移动端的纯视频类型
                     * 
                     */
                    void SetVideoOrientation(const int64_t& _videoOrientation);

                    /**
                     * 判断参数 VideoOrientation 是否已赋值
                     * @return VideoOrientation 是否已赋值
                     * 
                     */
                    bool VideoOrientationHasBeenSet() const;

                    /**
                     * 获取开启课后评分。 0：不开启(默认)  1：开启
                     * @return IsGradingRequiredPostClass 开启课后评分。 0：不开启(默认)  1：开启
                     * 
                     */
                    int64_t GetIsGradingRequiredPostClass() const;

                    /**
                     * 设置开启课后评分。 0：不开启(默认)  1：开启
                     * @param _isGradingRequiredPostClass 开启课后评分。 0：不开启(默认)  1：开启
                     * 
                     */
                    void SetIsGradingRequiredPostClass(const int64_t& _isGradingRequiredPostClass);

                    /**
                     * 判断参数 IsGradingRequiredPostClass 是否已赋值
                     * @return IsGradingRequiredPostClass 是否已赋值
                     * 
                     */
                    bool IsGradingRequiredPostClassHasBeenSet() const;

                    /**
                     * 获取房间类型。0:小班课（默认值）；1:大班课；2:1V1（后续扩展）
注：大班课的布局(layout)只有三分屏
                     * @return RoomType 房间类型。0:小班课（默认值）；1:大班课；2:1V1（后续扩展）
注：大班课的布局(layout)只有三分屏
                     * 
                     */
                    int64_t GetRoomType() const;

                    /**
                     * 设置房间类型。0:小班课（默认值）；1:大班课；2:1V1（后续扩展）
注：大班课的布局(layout)只有三分屏
                     * @param _roomType 房间类型。0:小班课（默认值）；1:大班课；2:1V1（后续扩展）
注：大班课的布局(layout)只有三分屏
                     * 
                     */
                    void SetRoomType(const int64_t& _roomType);

                    /**
                     * 判断参数 RoomType 是否已赋值
                     * @return RoomType 是否已赋值
                     * 
                     */
                    bool RoomTypeHasBeenSet() const;

                    /**
                     * 获取拖堂时间：单位分钟，0为不限制(默认值), -1为不能拖堂，大于0为拖堂的时间，最大值120分钟
                     * @return EndDelayTime 拖堂时间：单位分钟，0为不限制(默认值), -1为不能拖堂，大于0为拖堂的时间，最大值120分钟
                     * 
                     */
                    int64_t GetEndDelayTime() const;

                    /**
                     * 设置拖堂时间：单位分钟，0为不限制(默认值), -1为不能拖堂，大于0为拖堂的时间，最大值120分钟
                     * @param _endDelayTime 拖堂时间：单位分钟，0为不限制(默认值), -1为不能拖堂，大于0为拖堂的时间，最大值120分钟
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
                     * 获取直播类型：0 常规（默认）1 伪直播
                     * @return LiveType 直播类型：0 常规（默认）1 伪直播
                     * 
                     */
                    uint64_t GetLiveType() const;

                    /**
                     * 设置直播类型：0 常规（默认）1 伪直播
                     * @param _liveType 直播类型：0 常规（默认）1 伪直播
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
                     * 获取伪直播回放链接	
                     * @return RecordLiveUrl 伪直播回放链接	
                     * 
                     */
                    std::string GetRecordLiveUrl() const;

                    /**
                     * 设置伪直播回放链接	
                     * @param _recordLiveUrl 伪直播回放链接	
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
                     * 获取是否自动开始上课：0 不自动上课（默认） 1 自动上课 live_type=1的时候有效	
                     * @return EnableAutoStart 是否自动开始上课：0 不自动上课（默认） 1 自动上课 live_type=1的时候有效	
                     * 
                     */
                    uint64_t GetEnableAutoStart() const;

                    /**
                     * 设置是否自动开始上课：0 不自动上课（默认） 1 自动上课 live_type=1的时候有效	
                     * @param _enableAutoStart 是否自动开始上课：0 不自动上课（默认） 1 自动上课 live_type=1的时候有效	
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
                     * 获取录制文件背景图片，支持png、jpg、jpeg、bmp格式，暂不支持透明通道
                     * @return RecordBackground 录制文件背景图片，支持png、jpg、jpeg、bmp格式，暂不支持透明通道
                     * 
                     */
                    std::string GetRecordBackground() const;

                    /**
                     * 设置录制文件背景图片，支持png、jpg、jpeg、bmp格式，暂不支持透明通道
                     * @param _recordBackground 录制文件背景图片，支持png、jpg、jpeg、bmp格式，暂不支持透明通道
                     * 
                     */
                    void SetRecordBackground(const std::string& _recordBackground);

                    /**
                     * 判断参数 RecordBackground 是否已赋值
                     * @return RecordBackground 是否已赋值
                     * 
                     */
                    bool RecordBackgroundHasBeenSet() const;

                    /**
                     * 获取录制自定义场景，仅recordlayout=9的时候此参数有效,数据内容为用户自定义场景参数，数据格式为json键值对方式，其中键值对的value为string类型。
                     * @return RecordScene 录制自定义场景，仅recordlayout=9的时候此参数有效,数据内容为用户自定义场景参数，数据格式为json键值对方式，其中键值对的value为string类型。
                     * 
                     */
                    std::string GetRecordScene() const;

                    /**
                     * 设置录制自定义场景，仅recordlayout=9的时候此参数有效,数据内容为用户自定义场景参数，数据格式为json键值对方式，其中键值对的value为string类型。
                     * @param _recordScene 录制自定义场景，仅recordlayout=9的时候此参数有效,数据内容为用户自定义场景参数，数据格式为json键值对方式，其中键值对的value为string类型。
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
                     * 获取录制自定义语言，仅recordlayout=9的时候此参数有效
                     * @return RecordLang 录制自定义语言，仅recordlayout=9的时候此参数有效
                     * 
                     */
                    std::string GetRecordLang() const;

                    /**
                     * 设置录制自定义语言，仅recordlayout=9的时候此参数有效
                     * @param _recordLang 录制自定义语言，仅recordlayout=9的时候此参数有效
                     * 
                     */
                    void SetRecordLang(const std::string& _recordLang);

                    /**
                     * 判断参数 RecordLang 是否已赋值
                     * @return RecordLang 是否已赋值
                     * 
                     */
                    bool RecordLangHasBeenSet() const;

                    /**
                     * 获取板书截图生成类型。0 不生成板书；1 全量模式；2 单页去重模式
                     * @return WhiteBoardSnapshotMode 板书截图生成类型。0 不生成板书；1 全量模式；2 单页去重模式
                     * 
                     */
                    uint64_t GetWhiteBoardSnapshotMode() const;

                    /**
                     * 设置板书截图生成类型。0 不生成板书；1 全量模式；2 单页去重模式
                     * @param _whiteBoardSnapshotMode 板书截图生成类型。0 不生成板书；1 全量模式；2 单页去重模式
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
                     * 获取字幕转写功能开关：0关闭，1开启，默认关闭
                     * @return SubtitlesTranscription 字幕转写功能开关：0关闭，1开启，默认关闭
                     * 
                     */
                    uint64_t GetSubtitlesTranscription() const;

                    /**
                     * 设置字幕转写功能开关：0关闭，1开启，默认关闭
                     * @param _subtitlesTranscription 字幕转写功能开关：0关闭，1开启，默认关闭
                     * 
                     */
                    void SetSubtitlesTranscription(const uint64_t& _subtitlesTranscription);

                    /**
                     * 判断参数 SubtitlesTranscription 是否已赋值
                     * @return SubtitlesTranscription 是否已赋值
                     * 
                     */
                    bool SubtitlesTranscriptionHasBeenSet() const;

                private:

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 房间ID
                     */
                    uint64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 房间状态。0 未开始 ；1进行中  ；2 已结束；3已过期
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 开始时间
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 实际开始时间
                     */
                    uint64_t m_realStartTime;
                    bool m_realStartTimeHasBeenSet;

                    /**
                     * 实际结束时间
                     */
                    uint64_t m_realEndTime;
                    bool m_realEndTimeHasBeenSet;

                    /**
                     * 头像区域，摄像头视频画面的分辨率。可以有如下取值：
1 标清
2 高清
3 全高清
                     */
                    uint64_t m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * 最大允许连麦人数。已废弃，使用字段 MaxMicNumber
                     */
                    uint64_t m_maxRTCMember;
                    bool m_maxRTCMemberHasBeenSet;

                    /**
                     * 房间录制地址。已废弃，使用新字段 RecordUrl
                     */
                    std::string m_replayUrl;
                    bool m_replayUrlHasBeenSet;

                    /**
                     * 录制地址（协议为https)。仅在房间结束后存在。
                     */
                    std::string m_recordUrl;
                    bool m_recordUrlHasBeenSet;

                    /**
                     * 课堂同时最大可与老师进行连麦互动的人数，该参数支持正式上课/开播前调用修改房间修改。小班课取值范围[0,16]，大班课取值范围[0,1]，当取值为0时表示当前课堂/直播，不支持连麦互动。
                     */
                    uint64_t m_maxMicNumber;
                    bool m_maxMicNumberHasBeenSet;

                    /**
                     * 打开学生麦克风/摄像头的授权开关 
                     */
                    uint64_t m_enableDirectControl;
                    bool m_enableDirectControlHasBeenSet;

                    /**
                     * 开启专注模式。 0 收看全部角色音视频(默认) 1 只看老师和助教
                     */
                    int64_t m_interactionMode;
                    bool m_interactionModeHasBeenSet;

                    /**
                     * 横竖屏。0：横屏开播（默认值）; 1：竖屏开播，当前仅支持移动端的纯视频类型
                     */
                    int64_t m_videoOrientation;
                    bool m_videoOrientationHasBeenSet;

                    /**
                     * 开启课后评分。 0：不开启(默认)  1：开启
                     */
                    int64_t m_isGradingRequiredPostClass;
                    bool m_isGradingRequiredPostClassHasBeenSet;

                    /**
                     * 房间类型。0:小班课（默认值）；1:大班课；2:1V1（后续扩展）
注：大班课的布局(layout)只有三分屏
                     */
                    int64_t m_roomType;
                    bool m_roomTypeHasBeenSet;

                    /**
                     * 拖堂时间：单位分钟，0为不限制(默认值), -1为不能拖堂，大于0为拖堂的时间，最大值120分钟
                     */
                    int64_t m_endDelayTime;
                    bool m_endDelayTimeHasBeenSet;

                    /**
                     * 直播类型：0 常规（默认）1 伪直播
                     */
                    uint64_t m_liveType;
                    bool m_liveTypeHasBeenSet;

                    /**
                     * 伪直播回放链接	
                     */
                    std::string m_recordLiveUrl;
                    bool m_recordLiveUrlHasBeenSet;

                    /**
                     * 是否自动开始上课：0 不自动上课（默认） 1 自动上课 live_type=1的时候有效	
                     */
                    uint64_t m_enableAutoStart;
                    bool m_enableAutoStartHasBeenSet;

                    /**
                     * 录制文件背景图片，支持png、jpg、jpeg、bmp格式，暂不支持透明通道
                     */
                    std::string m_recordBackground;
                    bool m_recordBackgroundHasBeenSet;

                    /**
                     * 录制自定义场景，仅recordlayout=9的时候此参数有效,数据内容为用户自定义场景参数，数据格式为json键值对方式，其中键值对的value为string类型。
                     */
                    std::string m_recordScene;
                    bool m_recordSceneHasBeenSet;

                    /**
                     * 录制自定义语言，仅recordlayout=9的时候此参数有效
                     */
                    std::string m_recordLang;
                    bool m_recordLangHasBeenSet;

                    /**
                     * 板书截图生成类型。0 不生成板书；1 全量模式；2 单页去重模式
                     */
                    uint64_t m_whiteBoardSnapshotMode;
                    bool m_whiteBoardSnapshotModeHasBeenSet;

                    /**
                     * 字幕转写功能开关：0关闭，1开启，默认关闭
                     */
                    uint64_t m_subtitlesTranscription;
                    bool m_subtitlesTranscriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_ROOMITEM_H_
