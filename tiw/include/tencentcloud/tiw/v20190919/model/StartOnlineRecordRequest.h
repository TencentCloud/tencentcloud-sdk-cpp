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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_STARTONLINERECORDREQUEST_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_STARTONLINERECORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiw/v20190919/model/Concat.h>
#include <tencentcloud/tiw/v20190919/model/Whiteboard.h>
#include <tencentcloud/tiw/v20190919/model/MixStream.h>
#include <tencentcloud/tiw/v20190919/model/RecordControl.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * StartOnlineRecord请求参数结构体
                */
                class StartOnlineRecordRequest : public AbstractModel
                {
                public:
                    StartOnlineRecordRequest();
                    ~StartOnlineRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取客户的SdkAppId
                     * @return SdkAppId 客户的SdkAppId
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置客户的SdkAppId
                     * @param _sdkAppId 客户的SdkAppId
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取需要录制的白板房间号，取值范围: (1, 4294967295)。

1. 在没有指定`GroupId`的情况下，实时录制默认以`RoomId`的字符串表达形式作为同步白板信令的IM群组ID（比如`RoomId`为12358，则IM群组ID为"12358"），并加群进行信令同步，请在开始录制前确保相应IM群组已创建完成，否则会导致录制失败。
2. 在没有指定`TRTCRoomId`和`TRTCRoomIdStr`的情况下，默认会以`RoomId`作为TRTC房间号进房拉流进行录制。
                     * @return RoomId 需要录制的白板房间号，取值范围: (1, 4294967295)。

1. 在没有指定`GroupId`的情况下，实时录制默认以`RoomId`的字符串表达形式作为同步白板信令的IM群组ID（比如`RoomId`为12358，则IM群组ID为"12358"），并加群进行信令同步，请在开始录制前确保相应IM群组已创建完成，否则会导致录制失败。
2. 在没有指定`TRTCRoomId`和`TRTCRoomIdStr`的情况下，默认会以`RoomId`作为TRTC房间号进房拉流进行录制。
                     * 
                     */
                    int64_t GetRoomId() const;

                    /**
                     * 设置需要录制的白板房间号，取值范围: (1, 4294967295)。

1. 在没有指定`GroupId`的情况下，实时录制默认以`RoomId`的字符串表达形式作为同步白板信令的IM群组ID（比如`RoomId`为12358，则IM群组ID为"12358"），并加群进行信令同步，请在开始录制前确保相应IM群组已创建完成，否则会导致录制失败。
2. 在没有指定`TRTCRoomId`和`TRTCRoomIdStr`的情况下，默认会以`RoomId`作为TRTC房间号进房拉流进行录制。
                     * @param _roomId 需要录制的白板房间号，取值范围: (1, 4294967295)。

1. 在没有指定`GroupId`的情况下，实时录制默认以`RoomId`的字符串表达形式作为同步白板信令的IM群组ID（比如`RoomId`为12358，则IM群组ID为"12358"），并加群进行信令同步，请在开始录制前确保相应IM群组已创建完成，否则会导致录制失败。
2. 在没有指定`TRTCRoomId`和`TRTCRoomIdStr`的情况下，默认会以`RoomId`作为TRTC房间号进房拉流进行录制。
                     * 
                     */
                    void SetRoomId(const int64_t& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取用于录制服务进房的用户ID，最大长度不能大于60个字节，格式为`tic_record_user_${RoomId}_${Random}`，其中 `${RoomId} `与录制房间号对应，`${Random}`为一个随机字符串。
该ID必须是一个单独的未在SDK中使用的ID，录制服务使用这个用户ID进入房间进行音视频与白板录制，若该ID和SDK中使用的ID重复，会导致SDK和录制服务互踢，影响正常录制。
                     * @return RecordUserId 用于录制服务进房的用户ID，最大长度不能大于60个字节，格式为`tic_record_user_${RoomId}_${Random}`，其中 `${RoomId} `与录制房间号对应，`${Random}`为一个随机字符串。
该ID必须是一个单独的未在SDK中使用的ID，录制服务使用这个用户ID进入房间进行音视频与白板录制，若该ID和SDK中使用的ID重复，会导致SDK和录制服务互踢，影响正常录制。
                     * 
                     */
                    std::string GetRecordUserId() const;

                    /**
                     * 设置用于录制服务进房的用户ID，最大长度不能大于60个字节，格式为`tic_record_user_${RoomId}_${Random}`，其中 `${RoomId} `与录制房间号对应，`${Random}`为一个随机字符串。
该ID必须是一个单独的未在SDK中使用的ID，录制服务使用这个用户ID进入房间进行音视频与白板录制，若该ID和SDK中使用的ID重复，会导致SDK和录制服务互踢，影响正常录制。
                     * @param _recordUserId 用于录制服务进房的用户ID，最大长度不能大于60个字节，格式为`tic_record_user_${RoomId}_${Random}`，其中 `${RoomId} `与录制房间号对应，`${Random}`为一个随机字符串。
该ID必须是一个单独的未在SDK中使用的ID，录制服务使用这个用户ID进入房间进行音视频与白板录制，若该ID和SDK中使用的ID重复，会导致SDK和录制服务互踢，影响正常录制。
                     * 
                     */
                    void SetRecordUserId(const std::string& _recordUserId);

                    /**
                     * 判断参数 RecordUserId 是否已赋值
                     * @return RecordUserId 是否已赋值
                     * 
                     */
                    bool RecordUserIdHasBeenSet() const;

                    /**
                     * 获取与`RecordUserId`对应的IM签名
                     * @return RecordUserSig 与`RecordUserId`对应的IM签名
                     * 
                     */
                    std::string GetRecordUserSig() const;

                    /**
                     * 设置与`RecordUserId`对应的IM签名
                     * @param _recordUserSig 与`RecordUserId`对应的IM签名
                     * 
                     */
                    void SetRecordUserSig(const std::string& _recordUserSig);

                    /**
                     * 判断参数 RecordUserSig 是否已赋值
                     * @return RecordUserSig 是否已赋值
                     * 
                     */
                    bool RecordUserSigHasBeenSet() const;

                    /**
                     * 获取白板进行信令同步的 IM 群组 ID。
在没有指定`GroupId`的情况下，实时录制服务将使用 `RoomId` 的字符串形式作为同步白板信令的IM群组ID。
在指定了`GroupId`的情况下，实时录制将优先使用`GroupId`作为同步白板信令的群组ID。请在开始录制前确保相应的IM群组已创建完成，否则会导致录制失败。
                     * @return GroupId 白板进行信令同步的 IM 群组 ID。
在没有指定`GroupId`的情况下，实时录制服务将使用 `RoomId` 的字符串形式作为同步白板信令的IM群组ID。
在指定了`GroupId`的情况下，实时录制将优先使用`GroupId`作为同步白板信令的群组ID。请在开始录制前确保相应的IM群组已创建完成，否则会导致录制失败。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置白板进行信令同步的 IM 群组 ID。
在没有指定`GroupId`的情况下，实时录制服务将使用 `RoomId` 的字符串形式作为同步白板信令的IM群组ID。
在指定了`GroupId`的情况下，实时录制将优先使用`GroupId`作为同步白板信令的群组ID。请在开始录制前确保相应的IM群组已创建完成，否则会导致录制失败。
                     * @param _groupId 白板进行信令同步的 IM 群组 ID。
在没有指定`GroupId`的情况下，实时录制服务将使用 `RoomId` 的字符串形式作为同步白板信令的IM群组ID。
在指定了`GroupId`的情况下，实时录制将优先使用`GroupId`作为同步白板信令的群组ID。请在开始录制前确保相应的IM群组已创建完成，否则会导致录制失败。
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
                     * 获取录制视频拼接参数
                     * @return Concat 录制视频拼接参数
                     * 
                     */
                    Concat GetConcat() const;

                    /**
                     * 设置录制视频拼接参数
                     * @param _concat 录制视频拼接参数
                     * 
                     */
                    void SetConcat(const Concat& _concat);

                    /**
                     * 判断参数 Concat 是否已赋值
                     * @return Concat 是否已赋值
                     * 
                     */
                    bool ConcatHasBeenSet() const;

                    /**
                     * 获取录制白板参数，例如白板宽高等
                     * @return Whiteboard 录制白板参数，例如白板宽高等
                     * 
                     */
                    Whiteboard GetWhiteboard() const;

                    /**
                     * 设置录制白板参数，例如白板宽高等
                     * @param _whiteboard 录制白板参数，例如白板宽高等
                     * 
                     */
                    void SetWhiteboard(const Whiteboard& _whiteboard);

                    /**
                     * 判断参数 Whiteboard 是否已赋值
                     * @return Whiteboard 是否已赋值
                     * 
                     */
                    bool WhiteboardHasBeenSet() const;

                    /**
                     * 获取录制混流参数
特别说明：
1. 混流功能需要根据额外开通， 请联系腾讯云互动白板客服人员
2. 使用混流功能，必须提供 Extras 参数，且 Extras 参数中必须包含 "MIX_STREAM"
                     * @return MixStream 录制混流参数
特别说明：
1. 混流功能需要根据额外开通， 请联系腾讯云互动白板客服人员
2. 使用混流功能，必须提供 Extras 参数，且 Extras 参数中必须包含 "MIX_STREAM"
                     * 
                     */
                    MixStream GetMixStream() const;

                    /**
                     * 设置录制混流参数
特别说明：
1. 混流功能需要根据额外开通， 请联系腾讯云互动白板客服人员
2. 使用混流功能，必须提供 Extras 参数，且 Extras 参数中必须包含 "MIX_STREAM"
                     * @param _mixStream 录制混流参数
特别说明：
1. 混流功能需要根据额外开通， 请联系腾讯云互动白板客服人员
2. 使用混流功能，必须提供 Extras 参数，且 Extras 参数中必须包含 "MIX_STREAM"
                     * 
                     */
                    void SetMixStream(const MixStream& _mixStream);

                    /**
                     * 判断参数 MixStream 是否已赋值
                     * @return MixStream 是否已赋值
                     * 
                     */
                    bool MixStreamHasBeenSet() const;

                    /**
                     * 获取使用到的高级功能列表
可以选值列表：
MIX_STREAM - 混流功能
                     * @return Extras 使用到的高级功能列表
可以选值列表：
MIX_STREAM - 混流功能
                     * 
                     */
                    std::vector<std::string> GetExtras() const;

                    /**
                     * 设置使用到的高级功能列表
可以选值列表：
MIX_STREAM - 混流功能
                     * @param _extras 使用到的高级功能列表
可以选值列表：
MIX_STREAM - 混流功能
                     * 
                     */
                    void SetExtras(const std::vector<std::string>& _extras);

                    /**
                     * 判断参数 Extras 是否已赋值
                     * @return Extras 是否已赋值
                     * 
                     */
                    bool ExtrasHasBeenSet() const;

                    /**
                     * 获取是否需要在结果回调中返回各路流的纯音频录制文件，文件格式为mp3
                     * @return AudioFileNeeded 是否需要在结果回调中返回各路流的纯音频录制文件，文件格式为mp3
                     * 
                     */
                    bool GetAudioFileNeeded() const;

                    /**
                     * 设置是否需要在结果回调中返回各路流的纯音频录制文件，文件格式为mp3
                     * @param _audioFileNeeded 是否需要在结果回调中返回各路流的纯音频录制文件，文件格式为mp3
                     * 
                     */
                    void SetAudioFileNeeded(const bool& _audioFileNeeded);

                    /**
                     * 判断参数 AudioFileNeeded 是否已赋值
                     * @return AudioFileNeeded 是否已赋值
                     * 
                     */
                    bool AudioFileNeededHasBeenSet() const;

                    /**
                     * 获取录制控制参数，用于更精细地指定需要录制哪些流，某一路流是否禁用音频，是否只录制小画面等
                     * @return RecordControl 录制控制参数，用于更精细地指定需要录制哪些流，某一路流是否禁用音频，是否只录制小画面等
                     * 
                     */
                    RecordControl GetRecordControl() const;

                    /**
                     * 设置录制控制参数，用于更精细地指定需要录制哪些流，某一路流是否禁用音频，是否只录制小画面等
                     * @param _recordControl 录制控制参数，用于更精细地指定需要录制哪些流，某一路流是否禁用音频，是否只录制小画面等
                     * 
                     */
                    void SetRecordControl(const RecordControl& _recordControl);

                    /**
                     * 判断参数 RecordControl 是否已赋值
                     * @return RecordControl 是否已赋值
                     * 
                     */
                    bool RecordControlHasBeenSet() const;

                    /**
                     * 获取录制模式

REALTIME_MODE - 实时录制模式（默认）
VIDEO_GENERATION_MODE - 视频生成模式（内测中，需邮件申请开通）
                     * @return RecordMode 录制模式

REALTIME_MODE - 实时录制模式（默认）
VIDEO_GENERATION_MODE - 视频生成模式（内测中，需邮件申请开通）
                     * 
                     */
                    std::string GetRecordMode() const;

                    /**
                     * 设置录制模式

REALTIME_MODE - 实时录制模式（默认）
VIDEO_GENERATION_MODE - 视频生成模式（内测中，需邮件申请开通）
                     * @param _recordMode 录制模式

REALTIME_MODE - 实时录制模式（默认）
VIDEO_GENERATION_MODE - 视频生成模式（内测中，需邮件申请开通）
                     * 
                     */
                    void SetRecordMode(const std::string& _recordMode);

                    /**
                     * 判断参数 RecordMode 是否已赋值
                     * @return RecordMode 是否已赋值
                     * 
                     */
                    bool RecordModeHasBeenSet() const;

                    /**
                     * 获取聊天群组ID，此字段仅适用于`视频生成模式`

在`视频生成模式`下，默认会记录白板群组内的非白板信令消息，如果指定了`ChatGroupId`，则会记录指定群ID的聊天消息。
                     * @return ChatGroupId 聊天群组ID，此字段仅适用于`视频生成模式`

在`视频生成模式`下，默认会记录白板群组内的非白板信令消息，如果指定了`ChatGroupId`，则会记录指定群ID的聊天消息。
                     * 
                     */
                    std::string GetChatGroupId() const;

                    /**
                     * 设置聊天群组ID，此字段仅适用于`视频生成模式`

在`视频生成模式`下，默认会记录白板群组内的非白板信令消息，如果指定了`ChatGroupId`，则会记录指定群ID的聊天消息。
                     * @param _chatGroupId 聊天群组ID，此字段仅适用于`视频生成模式`

在`视频生成模式`下，默认会记录白板群组内的非白板信令消息，如果指定了`ChatGroupId`，则会记录指定群ID的聊天消息。
                     * 
                     */
                    void SetChatGroupId(const std::string& _chatGroupId);

                    /**
                     * 判断参数 ChatGroupId 是否已赋值
                     * @return ChatGroupId 是否已赋值
                     * 
                     */
                    bool ChatGroupIdHasBeenSet() const;

                    /**
                     * 获取自动停止录制超时时间，单位秒，取值范围[300, 86400], 默认值为300秒。

当超过设定时间房间内没有音视频上行且没有白板操作的时候，录制服务会自动停止当前录制任务。
                     * @return AutoStopTimeout 自动停止录制超时时间，单位秒，取值范围[300, 86400], 默认值为300秒。

当超过设定时间房间内没有音视频上行且没有白板操作的时候，录制服务会自动停止当前录制任务。
                     * 
                     */
                    int64_t GetAutoStopTimeout() const;

                    /**
                     * 设置自动停止录制超时时间，单位秒，取值范围[300, 86400], 默认值为300秒。

当超过设定时间房间内没有音视频上行且没有白板操作的时候，录制服务会自动停止当前录制任务。
                     * @param _autoStopTimeout 自动停止录制超时时间，单位秒，取值范围[300, 86400], 默认值为300秒。

当超过设定时间房间内没有音视频上行且没有白板操作的时候，录制服务会自动停止当前录制任务。
                     * 
                     */
                    void SetAutoStopTimeout(const int64_t& _autoStopTimeout);

                    /**
                     * 判断参数 AutoStopTimeout 是否已赋值
                     * @return AutoStopTimeout 是否已赋值
                     * 
                     */
                    bool AutoStopTimeoutHasBeenSet() const;

                    /**
                     * 获取内部参数，可忽略
                     * @return ExtraData 内部参数，可忽略
                     * 
                     */
                    std::string GetExtraData() const;

                    /**
                     * 设置内部参数，可忽略
                     * @param _extraData 内部参数，可忽略
                     * 
                     */
                    void SetExtraData(const std::string& _extraData);

                    /**
                     * 判断参数 ExtraData 是否已赋值
                     * @return ExtraData 是否已赋值
                     * 
                     */
                    bool ExtraDataHasBeenSet() const;

                    /**
                     * 获取TRTC数字类型房间号，取值范围: (1, 4294967295)。

在同时指定了`RoomId`与`TRTCRoomId`的情况下，优先使用`TRTCRoomId`作为实时录制拉TRTC流的TRTC房间号。

当指定了`TRTCRoomIdStr`的情况下，此字段将被忽略。
                     * @return TRTCRoomId TRTC数字类型房间号，取值范围: (1, 4294967295)。

在同时指定了`RoomId`与`TRTCRoomId`的情况下，优先使用`TRTCRoomId`作为实时录制拉TRTC流的TRTC房间号。

当指定了`TRTCRoomIdStr`的情况下，此字段将被忽略。
                     * 
                     */
                    int64_t GetTRTCRoomId() const;

                    /**
                     * 设置TRTC数字类型房间号，取值范围: (1, 4294967295)。

在同时指定了`RoomId`与`TRTCRoomId`的情况下，优先使用`TRTCRoomId`作为实时录制拉TRTC流的TRTC房间号。

当指定了`TRTCRoomIdStr`的情况下，此字段将被忽略。
                     * @param _tRTCRoomId TRTC数字类型房间号，取值范围: (1, 4294967295)。

在同时指定了`RoomId`与`TRTCRoomId`的情况下，优先使用`TRTCRoomId`作为实时录制拉TRTC流的TRTC房间号。

当指定了`TRTCRoomIdStr`的情况下，此字段将被忽略。
                     * 
                     */
                    void SetTRTCRoomId(const int64_t& _tRTCRoomId);

                    /**
                     * 判断参数 TRTCRoomId 是否已赋值
                     * @return TRTCRoomId 是否已赋值
                     * 
                     */
                    bool TRTCRoomIdHasBeenSet() const;

                    /**
                     * 获取TRTC字符串类型房间号。

在指定了`TRTCRoomIdStr`的情况下，会优先使用`TRTCRoomIdStr`作为实时录制拉TRTC流的TRTC房间号。
                     * @return TRTCRoomIdStr TRTC字符串类型房间号。

在指定了`TRTCRoomIdStr`的情况下，会优先使用`TRTCRoomIdStr`作为实时录制拉TRTC流的TRTC房间号。
                     * 
                     */
                    std::string GetTRTCRoomIdStr() const;

                    /**
                     * 设置TRTC字符串类型房间号。

在指定了`TRTCRoomIdStr`的情况下，会优先使用`TRTCRoomIdStr`作为实时录制拉TRTC流的TRTC房间号。
                     * @param _tRTCRoomIdStr TRTC字符串类型房间号。

在指定了`TRTCRoomIdStr`的情况下，会优先使用`TRTCRoomIdStr`作为实时录制拉TRTC流的TRTC房间号。
                     * 
                     */
                    void SetTRTCRoomIdStr(const std::string& _tRTCRoomIdStr);

                    /**
                     * 判断参数 TRTCRoomIdStr 是否已赋值
                     * @return TRTCRoomIdStr 是否已赋值
                     * 
                     */
                    bool TRTCRoomIdStrHasBeenSet() const;

                private:

                    /**
                     * 客户的SdkAppId
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 需要录制的白板房间号，取值范围: (1, 4294967295)。

1. 在没有指定`GroupId`的情况下，实时录制默认以`RoomId`的字符串表达形式作为同步白板信令的IM群组ID（比如`RoomId`为12358，则IM群组ID为"12358"），并加群进行信令同步，请在开始录制前确保相应IM群组已创建完成，否则会导致录制失败。
2. 在没有指定`TRTCRoomId`和`TRTCRoomIdStr`的情况下，默认会以`RoomId`作为TRTC房间号进房拉流进行录制。
                     */
                    int64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 用于录制服务进房的用户ID，最大长度不能大于60个字节，格式为`tic_record_user_${RoomId}_${Random}`，其中 `${RoomId} `与录制房间号对应，`${Random}`为一个随机字符串。
该ID必须是一个单独的未在SDK中使用的ID，录制服务使用这个用户ID进入房间进行音视频与白板录制，若该ID和SDK中使用的ID重复，会导致SDK和录制服务互踢，影响正常录制。
                     */
                    std::string m_recordUserId;
                    bool m_recordUserIdHasBeenSet;

                    /**
                     * 与`RecordUserId`对应的IM签名
                     */
                    std::string m_recordUserSig;
                    bool m_recordUserSigHasBeenSet;

                    /**
                     * 白板进行信令同步的 IM 群组 ID。
在没有指定`GroupId`的情况下，实时录制服务将使用 `RoomId` 的字符串形式作为同步白板信令的IM群组ID。
在指定了`GroupId`的情况下，实时录制将优先使用`GroupId`作为同步白板信令的群组ID。请在开始录制前确保相应的IM群组已创建完成，否则会导致录制失败。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 录制视频拼接参数
                     */
                    Concat m_concat;
                    bool m_concatHasBeenSet;

                    /**
                     * 录制白板参数，例如白板宽高等
                     */
                    Whiteboard m_whiteboard;
                    bool m_whiteboardHasBeenSet;

                    /**
                     * 录制混流参数
特别说明：
1. 混流功能需要根据额外开通， 请联系腾讯云互动白板客服人员
2. 使用混流功能，必须提供 Extras 参数，且 Extras 参数中必须包含 "MIX_STREAM"
                     */
                    MixStream m_mixStream;
                    bool m_mixStreamHasBeenSet;

                    /**
                     * 使用到的高级功能列表
可以选值列表：
MIX_STREAM - 混流功能
                     */
                    std::vector<std::string> m_extras;
                    bool m_extrasHasBeenSet;

                    /**
                     * 是否需要在结果回调中返回各路流的纯音频录制文件，文件格式为mp3
                     */
                    bool m_audioFileNeeded;
                    bool m_audioFileNeededHasBeenSet;

                    /**
                     * 录制控制参数，用于更精细地指定需要录制哪些流，某一路流是否禁用音频，是否只录制小画面等
                     */
                    RecordControl m_recordControl;
                    bool m_recordControlHasBeenSet;

                    /**
                     * 录制模式

REALTIME_MODE - 实时录制模式（默认）
VIDEO_GENERATION_MODE - 视频生成模式（内测中，需邮件申请开通）
                     */
                    std::string m_recordMode;
                    bool m_recordModeHasBeenSet;

                    /**
                     * 聊天群组ID，此字段仅适用于`视频生成模式`

在`视频生成模式`下，默认会记录白板群组内的非白板信令消息，如果指定了`ChatGroupId`，则会记录指定群ID的聊天消息。
                     */
                    std::string m_chatGroupId;
                    bool m_chatGroupIdHasBeenSet;

                    /**
                     * 自动停止录制超时时间，单位秒，取值范围[300, 86400], 默认值为300秒。

当超过设定时间房间内没有音视频上行且没有白板操作的时候，录制服务会自动停止当前录制任务。
                     */
                    int64_t m_autoStopTimeout;
                    bool m_autoStopTimeoutHasBeenSet;

                    /**
                     * 内部参数，可忽略
                     */
                    std::string m_extraData;
                    bool m_extraDataHasBeenSet;

                    /**
                     * TRTC数字类型房间号，取值范围: (1, 4294967295)。

在同时指定了`RoomId`与`TRTCRoomId`的情况下，优先使用`TRTCRoomId`作为实时录制拉TRTC流的TRTC房间号。

当指定了`TRTCRoomIdStr`的情况下，此字段将被忽略。
                     */
                    int64_t m_tRTCRoomId;
                    bool m_tRTCRoomIdHasBeenSet;

                    /**
                     * TRTC字符串类型房间号。

在指定了`TRTCRoomIdStr`的情况下，会优先使用`TRTCRoomIdStr`作为实时录制拉TRTC流的TRTC房间号。
                     */
                    std::string m_tRTCRoomIdStr;
                    bool m_tRTCRoomIdStrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_STARTONLINERECORDREQUEST_H_
