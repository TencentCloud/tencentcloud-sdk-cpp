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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_STARTWHITEBOARDPUSHREQUEST_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_STARTWHITEBOARDPUSHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiw/v20190919/model/Whiteboard.h>
#include <tencentcloud/tiw/v20190919/model/WhiteboardPushBackupParam.h>
#include <tencentcloud/tiw/v20190919/model/AuthParam.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * StartWhiteboardPush请求参数结构体
                */
                class StartWhiteboardPushRequest : public AbstractModel
                {
                public:
                    StartWhiteboardPushRequest();
                    ~StartWhiteboardPushRequest() = default;
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
                     * 获取需要推流的白板房间号，取值范围: (1, 4294967295)。

1. 在没有指定`GroupId`的情况下，白板推流默认以`RoomId`的字符串表达形式作为IM群组ID（比如RoomId为1234，则IM群组ID为"1234"），并加群进行信令同步，请在开始推流前确保相应IM群组已创建完成，否则会导致推流失败。
2. 在没有指定`TRTCRoomId`和`TRTCRoomIdStr`的情况下，默认会以`RoomId`作为白板流进行推流的TRTC房间号。
                     * @return RoomId 需要推流的白板房间号，取值范围: (1, 4294967295)。

1. 在没有指定`GroupId`的情况下，白板推流默认以`RoomId`的字符串表达形式作为IM群组ID（比如RoomId为1234，则IM群组ID为"1234"），并加群进行信令同步，请在开始推流前确保相应IM群组已创建完成，否则会导致推流失败。
2. 在没有指定`TRTCRoomId`和`TRTCRoomIdStr`的情况下，默认会以`RoomId`作为白板流进行推流的TRTC房间号。
                     * 
                     */
                    int64_t GetRoomId() const;

                    /**
                     * 设置需要推流的白板房间号，取值范围: (1, 4294967295)。

1. 在没有指定`GroupId`的情况下，白板推流默认以`RoomId`的字符串表达形式作为IM群组ID（比如RoomId为1234，则IM群组ID为"1234"），并加群进行信令同步，请在开始推流前确保相应IM群组已创建完成，否则会导致推流失败。
2. 在没有指定`TRTCRoomId`和`TRTCRoomIdStr`的情况下，默认会以`RoomId`作为白板流进行推流的TRTC房间号。
                     * @param _roomId 需要推流的白板房间号，取值范围: (1, 4294967295)。

1. 在没有指定`GroupId`的情况下，白板推流默认以`RoomId`的字符串表达形式作为IM群组ID（比如RoomId为1234，则IM群组ID为"1234"），并加群进行信令同步，请在开始推流前确保相应IM群组已创建完成，否则会导致推流失败。
2. 在没有指定`TRTCRoomId`和`TRTCRoomIdStr`的情况下，默认会以`RoomId`作为白板流进行推流的TRTC房间号。
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
                     * 获取用于白板推流服务进入白板房间的用户ID。在没有额外指定`IMAuthParam`和`TRTCAuthParam`的情况下，这个用户ID同时会用于IM登录、IM加群、TRTC进房推流等操作。
用户ID最大长度不能大于60个字节，该用户ID必须是一个单独的未同时在其他地方使用的用户ID，白板推流服务使用这个用户ID进入房间进行白板音视频推流，若该用户ID和其他地方同时在使用的用户ID重复，会导致白板推流服务与其他使用场景账号互踢，影响正常推流。
                     * @return PushUserId 用于白板推流服务进入白板房间的用户ID。在没有额外指定`IMAuthParam`和`TRTCAuthParam`的情况下，这个用户ID同时会用于IM登录、IM加群、TRTC进房推流等操作。
用户ID最大长度不能大于60个字节，该用户ID必须是一个单独的未同时在其他地方使用的用户ID，白板推流服务使用这个用户ID进入房间进行白板音视频推流，若该用户ID和其他地方同时在使用的用户ID重复，会导致白板推流服务与其他使用场景账号互踢，影响正常推流。
                     * 
                     */
                    std::string GetPushUserId() const;

                    /**
                     * 设置用于白板推流服务进入白板房间的用户ID。在没有额外指定`IMAuthParam`和`TRTCAuthParam`的情况下，这个用户ID同时会用于IM登录、IM加群、TRTC进房推流等操作。
用户ID最大长度不能大于60个字节，该用户ID必须是一个单独的未同时在其他地方使用的用户ID，白板推流服务使用这个用户ID进入房间进行白板音视频推流，若该用户ID和其他地方同时在使用的用户ID重复，会导致白板推流服务与其他使用场景账号互踢，影响正常推流。
                     * @param _pushUserId 用于白板推流服务进入白板房间的用户ID。在没有额外指定`IMAuthParam`和`TRTCAuthParam`的情况下，这个用户ID同时会用于IM登录、IM加群、TRTC进房推流等操作。
用户ID最大长度不能大于60个字节，该用户ID必须是一个单独的未同时在其他地方使用的用户ID，白板推流服务使用这个用户ID进入房间进行白板音视频推流，若该用户ID和其他地方同时在使用的用户ID重复，会导致白板推流服务与其他使用场景账号互踢，影响正常推流。
                     * 
                     */
                    void SetPushUserId(const std::string& _pushUserId);

                    /**
                     * 判断参数 PushUserId 是否已赋值
                     * @return PushUserId 是否已赋值
                     * 
                     */
                    bool PushUserIdHasBeenSet() const;

                    /**
                     * 获取与`PushUserId`对应的IM签名(usersig)。
                     * @return PushUserSig 与`PushUserId`对应的IM签名(usersig)。
                     * 
                     */
                    std::string GetPushUserSig() const;

                    /**
                     * 设置与`PushUserId`对应的IM签名(usersig)。
                     * @param _pushUserSig 与`PushUserId`对应的IM签名(usersig)。
                     * 
                     */
                    void SetPushUserSig(const std::string& _pushUserSig);

                    /**
                     * 判断参数 PushUserSig 是否已赋值
                     * @return PushUserSig 是否已赋值
                     * 
                     */
                    bool PushUserSigHasBeenSet() const;

                    /**
                     * 获取白板参数，例如白板宽高、背景颜色等
                     * @return Whiteboard 白板参数，例如白板宽高、背景颜色等
                     * 
                     */
                    Whiteboard GetWhiteboard() const;

                    /**
                     * 设置白板参数，例如白板宽高、背景颜色等
                     * @param _whiteboard 白板参数，例如白板宽高、背景颜色等
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
                     * 获取自动停止推流超时时间，单位秒，取值范围[300, 259200], 默认值为1800秒。

当白板超过设定时间没有操作的时候，白板推流服务会自动停止白板推流。
                     * @return AutoStopTimeout 自动停止推流超时时间，单位秒，取值范围[300, 259200], 默认值为1800秒。

当白板超过设定时间没有操作的时候，白板推流服务会自动停止白板推流。
                     * 
                     */
                    int64_t GetAutoStopTimeout() const;

                    /**
                     * 设置自动停止推流超时时间，单位秒，取值范围[300, 259200], 默认值为1800秒。

当白板超过设定时间没有操作的时候，白板推流服务会自动停止白板推流。
                     * @param _autoStopTimeout 自动停止推流超时时间，单位秒，取值范围[300, 259200], 默认值为1800秒。

当白板超过设定时间没有操作的时候，白板推流服务会自动停止白板推流。
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
                     * 获取对主白板推流任务进行操作时，是否同时同步操作备份任务
                     * @return AutoManageBackup 对主白板推流任务进行操作时，是否同时同步操作备份任务
                     * 
                     */
                    bool GetAutoManageBackup() const;

                    /**
                     * 设置对主白板推流任务进行操作时，是否同时同步操作备份任务
                     * @param _autoManageBackup 对主白板推流任务进行操作时，是否同时同步操作备份任务
                     * 
                     */
                    void SetAutoManageBackup(const bool& _autoManageBackup);

                    /**
                     * 判断参数 AutoManageBackup 是否已赋值
                     * @return AutoManageBackup 是否已赋值
                     * 
                     */
                    bool AutoManageBackupHasBeenSet() const;

                    /**
                     * 获取备份白板推流相关参数。

指定了备份参数的情况下，白板推流服务会在房间内新增一路白板画面视频流，即同一个房间内会有两路白板画面推流。
                     * @return Backup 备份白板推流相关参数。

指定了备份参数的情况下，白板推流服务会在房间内新增一路白板画面视频流，即同一个房间内会有两路白板画面推流。
                     * 
                     */
                    WhiteboardPushBackupParam GetBackup() const;

                    /**
                     * 设置备份白板推流相关参数。

指定了备份参数的情况下，白板推流服务会在房间内新增一路白板画面视频流，即同一个房间内会有两路白板画面推流。
                     * @param _backup 备份白板推流相关参数。

指定了备份参数的情况下，白板推流服务会在房间内新增一路白板画面视频流，即同一个房间内会有两路白板画面推流。
                     * 
                     */
                    void SetBackup(const WhiteboardPushBackupParam& _backup);

                    /**
                     * 判断参数 Backup 是否已赋值
                     * @return Backup 是否已赋值
                     * 
                     */
                    bool BackupHasBeenSet() const;

                    /**
                     * 获取TRTC高级权限控制参数，如果在实时音视频开启了高级权限控制功能，必须提供PrivateMapKey才能保证正常推流。
                     * @return PrivateMapKey TRTC高级权限控制参数，如果在实时音视频开启了高级权限控制功能，必须提供PrivateMapKey才能保证正常推流。
                     * 
                     */
                    std::string GetPrivateMapKey() const;

                    /**
                     * 设置TRTC高级权限控制参数，如果在实时音视频开启了高级权限控制功能，必须提供PrivateMapKey才能保证正常推流。
                     * @param _privateMapKey TRTC高级权限控制参数，如果在实时音视频开启了高级权限控制功能，必须提供PrivateMapKey才能保证正常推流。
                     * 
                     */
                    void SetPrivateMapKey(const std::string& _privateMapKey);

                    /**
                     * 判断参数 PrivateMapKey 是否已赋值
                     * @return PrivateMapKey 是否已赋值
                     * 
                     */
                    bool PrivateMapKeyHasBeenSet() const;

                    /**
                     * 获取白板推流视频帧率，取值范围[0, 30]，默认20fps
                     * @return VideoFPS 白板推流视频帧率，取值范围[0, 30]，默认20fps
                     * 
                     */
                    int64_t GetVideoFPS() const;

                    /**
                     * 设置白板推流视频帧率，取值范围[0, 30]，默认20fps
                     * @param _videoFPS 白板推流视频帧率，取值范围[0, 30]，默认20fps
                     * 
                     */
                    void SetVideoFPS(const int64_t& _videoFPS);

                    /**
                     * 判断参数 VideoFPS 是否已赋值
                     * @return VideoFPS 是否已赋值
                     * 
                     */
                    bool VideoFPSHasBeenSet() const;

                    /**
                     * 获取白板推流码率， 取值范围[0, 2000]，默认1200kbps。

这里的码率设置是一个参考值，实际推流的时候使用的是动态码率，所以真实码率不会固定为指定值，会在指定值附近波动。
                     * @return VideoBitrate 白板推流码率， 取值范围[0, 2000]，默认1200kbps。

这里的码率设置是一个参考值，实际推流的时候使用的是动态码率，所以真实码率不会固定为指定值，会在指定值附近波动。
                     * 
                     */
                    int64_t GetVideoBitrate() const;

                    /**
                     * 设置白板推流码率， 取值范围[0, 2000]，默认1200kbps。

这里的码率设置是一个参考值，实际推流的时候使用的是动态码率，所以真实码率不会固定为指定值，会在指定值附近波动。
                     * @param _videoBitrate 白板推流码率， 取值范围[0, 2000]，默认1200kbps。

这里的码率设置是一个参考值，实际推流的时候使用的是动态码率，所以真实码率不会固定为指定值，会在指定值附近波动。
                     * 
                     */
                    void SetVideoBitrate(const int64_t& _videoBitrate);

                    /**
                     * 判断参数 VideoBitrate 是否已赋值
                     * @return VideoBitrate 是否已赋值
                     * 
                     */
                    bool VideoBitrateHasBeenSet() const;

                    /**
                     * 获取在实时音视频云端录制模式选择为 `指定用户录制` 模式的时候是否自动录制白板推流。

默认在实时音视频的云端录制模式选择为 `指定用户录制` 模式的情况下，不会自动进行白板推流录制，如果希望进行白板推流录制，请将此参数设置为true。

如果实时音视频的云端录制模式选择为 `全局自动录制` 模式，可忽略此参数。
                     * @return AutoRecord 在实时音视频云端录制模式选择为 `指定用户录制` 模式的时候是否自动录制白板推流。

默认在实时音视频的云端录制模式选择为 `指定用户录制` 模式的情况下，不会自动进行白板推流录制，如果希望进行白板推流录制，请将此参数设置为true。

如果实时音视频的云端录制模式选择为 `全局自动录制` 模式，可忽略此参数。
                     * 
                     */
                    bool GetAutoRecord() const;

                    /**
                     * 设置在实时音视频云端录制模式选择为 `指定用户录制` 模式的时候是否自动录制白板推流。

默认在实时音视频的云端录制模式选择为 `指定用户录制` 模式的情况下，不会自动进行白板推流录制，如果希望进行白板推流录制，请将此参数设置为true。

如果实时音视频的云端录制模式选择为 `全局自动录制` 模式，可忽略此参数。
                     * @param _autoRecord 在实时音视频云端录制模式选择为 `指定用户录制` 模式的时候是否自动录制白板推流。

默认在实时音视频的云端录制模式选择为 `指定用户录制` 模式的情况下，不会自动进行白板推流录制，如果希望进行白板推流录制，请将此参数设置为true。

如果实时音视频的云端录制模式选择为 `全局自动录制` 模式，可忽略此参数。
                     * 
                     */
                    void SetAutoRecord(const bool& _autoRecord);

                    /**
                     * 判断参数 AutoRecord 是否已赋值
                     * @return AutoRecord 是否已赋值
                     * 
                     */
                    bool AutoRecordHasBeenSet() const;

                    /**
                     * 获取指定白板推流这路流在音视频云端录制中的RecordID，指定的RecordID会用于填充实时音视频云端录制完成后的回调消息中的 "userdefinerecordid" 字段内容，便于您更方便的识别录制回调，以及在点播媒体资源管理中查找相应的录制视频文件。

限制长度为64字节，只允许包含大小写英文字母（a-zA-Z）、数字（0-9）及下划线和连词符。

此字段设置后，不管`AutoRecord`字段取值如何，都将自动进行白板推流录制。

默认RecordId生成规则如下：
urlencode(SdkAppID_RoomID_PushUserID)

例如：
SdkAppID = 12345678，RoomID = 12345，PushUserID = push_user_1
那么：RecordId = 12345678_12345_push_user_1
                     * @return UserDefinedRecordId 指定白板推流这路流在音视频云端录制中的RecordID，指定的RecordID会用于填充实时音视频云端录制完成后的回调消息中的 "userdefinerecordid" 字段内容，便于您更方便的识别录制回调，以及在点播媒体资源管理中查找相应的录制视频文件。

限制长度为64字节，只允许包含大小写英文字母（a-zA-Z）、数字（0-9）及下划线和连词符。

此字段设置后，不管`AutoRecord`字段取值如何，都将自动进行白板推流录制。

默认RecordId生成规则如下：
urlencode(SdkAppID_RoomID_PushUserID)

例如：
SdkAppID = 12345678，RoomID = 12345，PushUserID = push_user_1
那么：RecordId = 12345678_12345_push_user_1
                     * 
                     */
                    std::string GetUserDefinedRecordId() const;

                    /**
                     * 设置指定白板推流这路流在音视频云端录制中的RecordID，指定的RecordID会用于填充实时音视频云端录制完成后的回调消息中的 "userdefinerecordid" 字段内容，便于您更方便的识别录制回调，以及在点播媒体资源管理中查找相应的录制视频文件。

限制长度为64字节，只允许包含大小写英文字母（a-zA-Z）、数字（0-9）及下划线和连词符。

此字段设置后，不管`AutoRecord`字段取值如何，都将自动进行白板推流录制。

默认RecordId生成规则如下：
urlencode(SdkAppID_RoomID_PushUserID)

例如：
SdkAppID = 12345678，RoomID = 12345，PushUserID = push_user_1
那么：RecordId = 12345678_12345_push_user_1
                     * @param _userDefinedRecordId 指定白板推流这路流在音视频云端录制中的RecordID，指定的RecordID会用于填充实时音视频云端录制完成后的回调消息中的 "userdefinerecordid" 字段内容，便于您更方便的识别录制回调，以及在点播媒体资源管理中查找相应的录制视频文件。

限制长度为64字节，只允许包含大小写英文字母（a-zA-Z）、数字（0-9）及下划线和连词符。

此字段设置后，不管`AutoRecord`字段取值如何，都将自动进行白板推流录制。

默认RecordId生成规则如下：
urlencode(SdkAppID_RoomID_PushUserID)

例如：
SdkAppID = 12345678，RoomID = 12345，PushUserID = push_user_1
那么：RecordId = 12345678_12345_push_user_1
                     * 
                     */
                    void SetUserDefinedRecordId(const std::string& _userDefinedRecordId);

                    /**
                     * 判断参数 UserDefinedRecordId 是否已赋值
                     * @return UserDefinedRecordId 是否已赋值
                     * 
                     */
                    bool UserDefinedRecordIdHasBeenSet() const;

                    /**
                     * 获取在实时音视频旁路推流模式选择为`指定用户旁路`模式的时候，是否自动旁路白板推流。

默认在实时音视频的旁路推流模式选择为 `指定用户旁路` 模式的情况下，不会自动旁路白板推流，如果希望旁路白板推流，请将此参数设置为true。

如果实时音视频的旁路推流模式选择为 `全局自动旁路` 模式，可忽略此参数。
                     * @return AutoPublish 在实时音视频旁路推流模式选择为`指定用户旁路`模式的时候，是否自动旁路白板推流。

默认在实时音视频的旁路推流模式选择为 `指定用户旁路` 模式的情况下，不会自动旁路白板推流，如果希望旁路白板推流，请将此参数设置为true。

如果实时音视频的旁路推流模式选择为 `全局自动旁路` 模式，可忽略此参数。
                     * 
                     */
                    bool GetAutoPublish() const;

                    /**
                     * 设置在实时音视频旁路推流模式选择为`指定用户旁路`模式的时候，是否自动旁路白板推流。

默认在实时音视频的旁路推流模式选择为 `指定用户旁路` 模式的情况下，不会自动旁路白板推流，如果希望旁路白板推流，请将此参数设置为true。

如果实时音视频的旁路推流模式选择为 `全局自动旁路` 模式，可忽略此参数。
                     * @param _autoPublish 在实时音视频旁路推流模式选择为`指定用户旁路`模式的时候，是否自动旁路白板推流。

默认在实时音视频的旁路推流模式选择为 `指定用户旁路` 模式的情况下，不会自动旁路白板推流，如果希望旁路白板推流，请将此参数设置为true。

如果实时音视频的旁路推流模式选择为 `全局自动旁路` 模式，可忽略此参数。
                     * 
                     */
                    void SetAutoPublish(const bool& _autoPublish);

                    /**
                     * 判断参数 AutoPublish 是否已赋值
                     * @return AutoPublish 是否已赋值
                     * 
                     */
                    bool AutoPublishHasBeenSet() const;

                    /**
                     * 获取指定实时音视频在旁路白板推流这路流时的StreamID，设置之后，您就可以在腾讯云直播 CDN 上通过标准直播方案（FLV或HLS）播放该用户的音视频流。

限制长度为64字节，只允许包含大小写英文字母（a-zA-Z）、数字（0-9）及下划线和连词符。

此字段设置后，不管`AutoPublish`字段取值如何，都将自动旁路白板推流。

默认StreamID生成规则如下：
urlencode(SdkAppID_RoomID_PushUserID_main)

例如：
SdkAppID = 12345678，RoomID = 12345，PushUserID = push_user_1
那么：StreamID = 12345678_12345_push_user_1_main
                     * @return UserDefinedStreamId 指定实时音视频在旁路白板推流这路流时的StreamID，设置之后，您就可以在腾讯云直播 CDN 上通过标准直播方案（FLV或HLS）播放该用户的音视频流。

限制长度为64字节，只允许包含大小写英文字母（a-zA-Z）、数字（0-9）及下划线和连词符。

此字段设置后，不管`AutoPublish`字段取值如何，都将自动旁路白板推流。

默认StreamID生成规则如下：
urlencode(SdkAppID_RoomID_PushUserID_main)

例如：
SdkAppID = 12345678，RoomID = 12345，PushUserID = push_user_1
那么：StreamID = 12345678_12345_push_user_1_main
                     * 
                     */
                    std::string GetUserDefinedStreamId() const;

                    /**
                     * 设置指定实时音视频在旁路白板推流这路流时的StreamID，设置之后，您就可以在腾讯云直播 CDN 上通过标准直播方案（FLV或HLS）播放该用户的音视频流。

限制长度为64字节，只允许包含大小写英文字母（a-zA-Z）、数字（0-9）及下划线和连词符。

此字段设置后，不管`AutoPublish`字段取值如何，都将自动旁路白板推流。

默认StreamID生成规则如下：
urlencode(SdkAppID_RoomID_PushUserID_main)

例如：
SdkAppID = 12345678，RoomID = 12345，PushUserID = push_user_1
那么：StreamID = 12345678_12345_push_user_1_main
                     * @param _userDefinedStreamId 指定实时音视频在旁路白板推流这路流时的StreamID，设置之后，您就可以在腾讯云直播 CDN 上通过标准直播方案（FLV或HLS）播放该用户的音视频流。

限制长度为64字节，只允许包含大小写英文字母（a-zA-Z）、数字（0-9）及下划线和连词符。

此字段设置后，不管`AutoPublish`字段取值如何，都将自动旁路白板推流。

默认StreamID生成规则如下：
urlencode(SdkAppID_RoomID_PushUserID_main)

例如：
SdkAppID = 12345678，RoomID = 12345，PushUserID = push_user_1
那么：StreamID = 12345678_12345_push_user_1_main
                     * 
                     */
                    void SetUserDefinedStreamId(const std::string& _userDefinedStreamId);

                    /**
                     * 判断参数 UserDefinedStreamId 是否已赋值
                     * @return UserDefinedStreamId 是否已赋值
                     * 
                     */
                    bool UserDefinedStreamIdHasBeenSet() const;

                    /**
                     * 获取内部参数，不需要关注此参数
                     * @return ExtraData 内部参数，不需要关注此参数
                     * 
                     */
                    std::string GetExtraData() const;

                    /**
                     * 设置内部参数，不需要关注此参数
                     * @param _extraData 内部参数，不需要关注此参数
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

在同时指定了`RoomId`与`TRTCRoomId`的情况下，优先使用`TRTCRoomId`作为白板流进行推流的TRTC房间号。

当指定了`TRTCRoomIdStr`的情况下，此字段将被忽略。
                     * @return TRTCRoomId TRTC数字类型房间号，取值范围: (1, 4294967295)。

在同时指定了`RoomId`与`TRTCRoomId`的情况下，优先使用`TRTCRoomId`作为白板流进行推流的TRTC房间号。

当指定了`TRTCRoomIdStr`的情况下，此字段将被忽略。
                     * 
                     */
                    int64_t GetTRTCRoomId() const;

                    /**
                     * 设置TRTC数字类型房间号，取值范围: (1, 4294967295)。

在同时指定了`RoomId`与`TRTCRoomId`的情况下，优先使用`TRTCRoomId`作为白板流进行推流的TRTC房间号。

当指定了`TRTCRoomIdStr`的情况下，此字段将被忽略。
                     * @param _tRTCRoomId TRTC数字类型房间号，取值范围: (1, 4294967295)。

在同时指定了`RoomId`与`TRTCRoomId`的情况下，优先使用`TRTCRoomId`作为白板流进行推流的TRTC房间号。

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

在指定了`TRTCRoomIdStr`的情况下，会优先使用`TRTCRoomIdStr`作为白板流进行推流的TRTC房间号。
                     * @return TRTCRoomIdStr TRTC字符串类型房间号。

在指定了`TRTCRoomIdStr`的情况下，会优先使用`TRTCRoomIdStr`作为白板流进行推流的TRTC房间号。
                     * 
                     */
                    std::string GetTRTCRoomIdStr() const;

                    /**
                     * 设置TRTC字符串类型房间号。

在指定了`TRTCRoomIdStr`的情况下，会优先使用`TRTCRoomIdStr`作为白板流进行推流的TRTC房间号。
                     * @param _tRTCRoomIdStr TRTC字符串类型房间号。

在指定了`TRTCRoomIdStr`的情况下，会优先使用`TRTCRoomIdStr`作为白板流进行推流的TRTC房间号。
                     * 
                     */
                    void SetTRTCRoomIdStr(const std::string& _tRTCRoomIdStr);

                    /**
                     * 判断参数 TRTCRoomIdStr 是否已赋值
                     * @return TRTCRoomIdStr 是否已赋值
                     * 
                     */
                    bool TRTCRoomIdStrHasBeenSet() const;

                    /**
                     * 获取IM鉴权信息参数，用于IM鉴权。
当白板信令所使用的IM应用与白板应用的SdkAppId不一致时，可以通过此参数提供对应IM应用鉴权信息。

如果提供了此参数，白板推流服务会优先使用此参数指定的SdkAppId作为白板信令的传输通道，否则使用公共参数中的SdkAppId作为白板信令的传输通道。
                     * @return IMAuthParam IM鉴权信息参数，用于IM鉴权。
当白板信令所使用的IM应用与白板应用的SdkAppId不一致时，可以通过此参数提供对应IM应用鉴权信息。

如果提供了此参数，白板推流服务会优先使用此参数指定的SdkAppId作为白板信令的传输通道，否则使用公共参数中的SdkAppId作为白板信令的传输通道。
                     * 
                     */
                    AuthParam GetIMAuthParam() const;

                    /**
                     * 设置IM鉴权信息参数，用于IM鉴权。
当白板信令所使用的IM应用与白板应用的SdkAppId不一致时，可以通过此参数提供对应IM应用鉴权信息。

如果提供了此参数，白板推流服务会优先使用此参数指定的SdkAppId作为白板信令的传输通道，否则使用公共参数中的SdkAppId作为白板信令的传输通道。
                     * @param _iMAuthParam IM鉴权信息参数，用于IM鉴权。
当白板信令所使用的IM应用与白板应用的SdkAppId不一致时，可以通过此参数提供对应IM应用鉴权信息。

如果提供了此参数，白板推流服务会优先使用此参数指定的SdkAppId作为白板信令的传输通道，否则使用公共参数中的SdkAppId作为白板信令的传输通道。
                     * 
                     */
                    void SetIMAuthParam(const AuthParam& _iMAuthParam);

                    /**
                     * 判断参数 IMAuthParam 是否已赋值
                     * @return IMAuthParam 是否已赋值
                     * 
                     */
                    bool IMAuthParamHasBeenSet() const;

                    /**
                     * 获取TRTC鉴权信息参数，用于TRTC进房推流鉴权。
当需要推流到的TRTC房间所对应的TRTC应用与白板应用的SdkAppId不一致时，可以通过此参数提供对应的TRTC应用鉴权信息。

如果提供了此参数，白板推流服务会优先使用此参数指定的SdkAppId作为白板推流的目标TRTC应用，否则使用公共参数中的SdkAppId作为白板推流的目标TRTC应用。
                     * @return TRTCAuthParam TRTC鉴权信息参数，用于TRTC进房推流鉴权。
当需要推流到的TRTC房间所对应的TRTC应用与白板应用的SdkAppId不一致时，可以通过此参数提供对应的TRTC应用鉴权信息。

如果提供了此参数，白板推流服务会优先使用此参数指定的SdkAppId作为白板推流的目标TRTC应用，否则使用公共参数中的SdkAppId作为白板推流的目标TRTC应用。
                     * 
                     */
                    AuthParam GetTRTCAuthParam() const;

                    /**
                     * 设置TRTC鉴权信息参数，用于TRTC进房推流鉴权。
当需要推流到的TRTC房间所对应的TRTC应用与白板应用的SdkAppId不一致时，可以通过此参数提供对应的TRTC应用鉴权信息。

如果提供了此参数，白板推流服务会优先使用此参数指定的SdkAppId作为白板推流的目标TRTC应用，否则使用公共参数中的SdkAppId作为白板推流的目标TRTC应用。
                     * @param _tRTCAuthParam TRTC鉴权信息参数，用于TRTC进房推流鉴权。
当需要推流到的TRTC房间所对应的TRTC应用与白板应用的SdkAppId不一致时，可以通过此参数提供对应的TRTC应用鉴权信息。

如果提供了此参数，白板推流服务会优先使用此参数指定的SdkAppId作为白板推流的目标TRTC应用，否则使用公共参数中的SdkAppId作为白板推流的目标TRTC应用。
                     * 
                     */
                    void SetTRTCAuthParam(const AuthParam& _tRTCAuthParam);

                    /**
                     * 判断参数 TRTCAuthParam 是否已赋值
                     * @return TRTCAuthParam 是否已赋值
                     * 
                     */
                    bool TRTCAuthParamHasBeenSet() const;

                    /**
                     * 获取指定白板推流时推流用户进TRTC房间的进房模式。默认为 TRTCAppSceneVideoCall

TRTCAppSceneVideoCall - 视频通话场景，即绝大多数时间都是两人或两人以上视频通话的场景，内部编码器和网络协议优化侧重流畅性，降低通话延迟和卡顿率。
TRTCAppSceneLIVE - 直播场景，即绝大多数时间都是一人直播，偶尔有多人视频互动的场景，内部编码器和网络协议优化侧重性能和兼容性，性能和清晰度表现更佳。
                     * @return TRTCEnterRoomMode 指定白板推流时推流用户进TRTC房间的进房模式。默认为 TRTCAppSceneVideoCall

TRTCAppSceneVideoCall - 视频通话场景，即绝大多数时间都是两人或两人以上视频通话的场景，内部编码器和网络协议优化侧重流畅性，降低通话延迟和卡顿率。
TRTCAppSceneLIVE - 直播场景，即绝大多数时间都是一人直播，偶尔有多人视频互动的场景，内部编码器和网络协议优化侧重性能和兼容性，性能和清晰度表现更佳。
                     * 
                     */
                    std::string GetTRTCEnterRoomMode() const;

                    /**
                     * 设置指定白板推流时推流用户进TRTC房间的进房模式。默认为 TRTCAppSceneVideoCall

TRTCAppSceneVideoCall - 视频通话场景，即绝大多数时间都是两人或两人以上视频通话的场景，内部编码器和网络协议优化侧重流畅性，降低通话延迟和卡顿率。
TRTCAppSceneLIVE - 直播场景，即绝大多数时间都是一人直播，偶尔有多人视频互动的场景，内部编码器和网络协议优化侧重性能和兼容性，性能和清晰度表现更佳。
                     * @param _tRTCEnterRoomMode 指定白板推流时推流用户进TRTC房间的进房模式。默认为 TRTCAppSceneVideoCall

TRTCAppSceneVideoCall - 视频通话场景，即绝大多数时间都是两人或两人以上视频通话的场景，内部编码器和网络协议优化侧重流畅性，降低通话延迟和卡顿率。
TRTCAppSceneLIVE - 直播场景，即绝大多数时间都是一人直播，偶尔有多人视频互动的场景，内部编码器和网络协议优化侧重性能和兼容性，性能和清晰度表现更佳。
                     * 
                     */
                    void SetTRTCEnterRoomMode(const std::string& _tRTCEnterRoomMode);

                    /**
                     * 判断参数 TRTCEnterRoomMode 是否已赋值
                     * @return TRTCEnterRoomMode 是否已赋值
                     * 
                     */
                    bool TRTCEnterRoomModeHasBeenSet() const;

                    /**
                     * 获取白板进行信令同步的 IM 群组 ID。
在没有指定`GroupId`的情况下，白板推流服务将使用 `RoomId` 的字符串形式作为同步白板信令的IM群组ID。
在指定了`GroupId`的情况下，白板推流将优先`GroupId`作为同步白板信令的群组ID。请在开始推流前确保指定的IM群组已创建完成，否则会导致推流失败。
                     * @return GroupId 白板进行信令同步的 IM 群组 ID。
在没有指定`GroupId`的情况下，白板推流服务将使用 `RoomId` 的字符串形式作为同步白板信令的IM群组ID。
在指定了`GroupId`的情况下，白板推流将优先`GroupId`作为同步白板信令的群组ID。请在开始推流前确保指定的IM群组已创建完成，否则会导致推流失败。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置白板进行信令同步的 IM 群组 ID。
在没有指定`GroupId`的情况下，白板推流服务将使用 `RoomId` 的字符串形式作为同步白板信令的IM群组ID。
在指定了`GroupId`的情况下，白板推流将优先`GroupId`作为同步白板信令的群组ID。请在开始推流前确保指定的IM群组已创建完成，否则会导致推流失败。
                     * @param _groupId 白板进行信令同步的 IM 群组 ID。
在没有指定`GroupId`的情况下，白板推流服务将使用 `RoomId` 的字符串形式作为同步白板信令的IM群组ID。
在指定了`GroupId`的情况下，白板推流将优先`GroupId`作为同步白板信令的群组ID。请在开始推流前确保指定的IM群组已创建完成，否则会导致推流失败。
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                private:

                    /**
                     * 客户的SdkAppId
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 需要推流的白板房间号，取值范围: (1, 4294967295)。

1. 在没有指定`GroupId`的情况下，白板推流默认以`RoomId`的字符串表达形式作为IM群组ID（比如RoomId为1234，则IM群组ID为"1234"），并加群进行信令同步，请在开始推流前确保相应IM群组已创建完成，否则会导致推流失败。
2. 在没有指定`TRTCRoomId`和`TRTCRoomIdStr`的情况下，默认会以`RoomId`作为白板流进行推流的TRTC房间号。
                     */
                    int64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 用于白板推流服务进入白板房间的用户ID。在没有额外指定`IMAuthParam`和`TRTCAuthParam`的情况下，这个用户ID同时会用于IM登录、IM加群、TRTC进房推流等操作。
用户ID最大长度不能大于60个字节，该用户ID必须是一个单独的未同时在其他地方使用的用户ID，白板推流服务使用这个用户ID进入房间进行白板音视频推流，若该用户ID和其他地方同时在使用的用户ID重复，会导致白板推流服务与其他使用场景账号互踢，影响正常推流。
                     */
                    std::string m_pushUserId;
                    bool m_pushUserIdHasBeenSet;

                    /**
                     * 与`PushUserId`对应的IM签名(usersig)。
                     */
                    std::string m_pushUserSig;
                    bool m_pushUserSigHasBeenSet;

                    /**
                     * 白板参数，例如白板宽高、背景颜色等
                     */
                    Whiteboard m_whiteboard;
                    bool m_whiteboardHasBeenSet;

                    /**
                     * 自动停止推流超时时间，单位秒，取值范围[300, 259200], 默认值为1800秒。

当白板超过设定时间没有操作的时候，白板推流服务会自动停止白板推流。
                     */
                    int64_t m_autoStopTimeout;
                    bool m_autoStopTimeoutHasBeenSet;

                    /**
                     * 对主白板推流任务进行操作时，是否同时同步操作备份任务
                     */
                    bool m_autoManageBackup;
                    bool m_autoManageBackupHasBeenSet;

                    /**
                     * 备份白板推流相关参数。

指定了备份参数的情况下，白板推流服务会在房间内新增一路白板画面视频流，即同一个房间内会有两路白板画面推流。
                     */
                    WhiteboardPushBackupParam m_backup;
                    bool m_backupHasBeenSet;

                    /**
                     * TRTC高级权限控制参数，如果在实时音视频开启了高级权限控制功能，必须提供PrivateMapKey才能保证正常推流。
                     */
                    std::string m_privateMapKey;
                    bool m_privateMapKeyHasBeenSet;

                    /**
                     * 白板推流视频帧率，取值范围[0, 30]，默认20fps
                     */
                    int64_t m_videoFPS;
                    bool m_videoFPSHasBeenSet;

                    /**
                     * 白板推流码率， 取值范围[0, 2000]，默认1200kbps。

这里的码率设置是一个参考值，实际推流的时候使用的是动态码率，所以真实码率不会固定为指定值，会在指定值附近波动。
                     */
                    int64_t m_videoBitrate;
                    bool m_videoBitrateHasBeenSet;

                    /**
                     * 在实时音视频云端录制模式选择为 `指定用户录制` 模式的时候是否自动录制白板推流。

默认在实时音视频的云端录制模式选择为 `指定用户录制` 模式的情况下，不会自动进行白板推流录制，如果希望进行白板推流录制，请将此参数设置为true。

如果实时音视频的云端录制模式选择为 `全局自动录制` 模式，可忽略此参数。
                     */
                    bool m_autoRecord;
                    bool m_autoRecordHasBeenSet;

                    /**
                     * 指定白板推流这路流在音视频云端录制中的RecordID，指定的RecordID会用于填充实时音视频云端录制完成后的回调消息中的 "userdefinerecordid" 字段内容，便于您更方便的识别录制回调，以及在点播媒体资源管理中查找相应的录制视频文件。

限制长度为64字节，只允许包含大小写英文字母（a-zA-Z）、数字（0-9）及下划线和连词符。

此字段设置后，不管`AutoRecord`字段取值如何，都将自动进行白板推流录制。

默认RecordId生成规则如下：
urlencode(SdkAppID_RoomID_PushUserID)

例如：
SdkAppID = 12345678，RoomID = 12345，PushUserID = push_user_1
那么：RecordId = 12345678_12345_push_user_1
                     */
                    std::string m_userDefinedRecordId;
                    bool m_userDefinedRecordIdHasBeenSet;

                    /**
                     * 在实时音视频旁路推流模式选择为`指定用户旁路`模式的时候，是否自动旁路白板推流。

默认在实时音视频的旁路推流模式选择为 `指定用户旁路` 模式的情况下，不会自动旁路白板推流，如果希望旁路白板推流，请将此参数设置为true。

如果实时音视频的旁路推流模式选择为 `全局自动旁路` 模式，可忽略此参数。
                     */
                    bool m_autoPublish;
                    bool m_autoPublishHasBeenSet;

                    /**
                     * 指定实时音视频在旁路白板推流这路流时的StreamID，设置之后，您就可以在腾讯云直播 CDN 上通过标准直播方案（FLV或HLS）播放该用户的音视频流。

限制长度为64字节，只允许包含大小写英文字母（a-zA-Z）、数字（0-9）及下划线和连词符。

此字段设置后，不管`AutoPublish`字段取值如何，都将自动旁路白板推流。

默认StreamID生成规则如下：
urlencode(SdkAppID_RoomID_PushUserID_main)

例如：
SdkAppID = 12345678，RoomID = 12345，PushUserID = push_user_1
那么：StreamID = 12345678_12345_push_user_1_main
                     */
                    std::string m_userDefinedStreamId;
                    bool m_userDefinedStreamIdHasBeenSet;

                    /**
                     * 内部参数，不需要关注此参数
                     */
                    std::string m_extraData;
                    bool m_extraDataHasBeenSet;

                    /**
                     * TRTC数字类型房间号，取值范围: (1, 4294967295)。

在同时指定了`RoomId`与`TRTCRoomId`的情况下，优先使用`TRTCRoomId`作为白板流进行推流的TRTC房间号。

当指定了`TRTCRoomIdStr`的情况下，此字段将被忽略。
                     */
                    int64_t m_tRTCRoomId;
                    bool m_tRTCRoomIdHasBeenSet;

                    /**
                     * TRTC字符串类型房间号。

在指定了`TRTCRoomIdStr`的情况下，会优先使用`TRTCRoomIdStr`作为白板流进行推流的TRTC房间号。
                     */
                    std::string m_tRTCRoomIdStr;
                    bool m_tRTCRoomIdStrHasBeenSet;

                    /**
                     * IM鉴权信息参数，用于IM鉴权。
当白板信令所使用的IM应用与白板应用的SdkAppId不一致时，可以通过此参数提供对应IM应用鉴权信息。

如果提供了此参数，白板推流服务会优先使用此参数指定的SdkAppId作为白板信令的传输通道，否则使用公共参数中的SdkAppId作为白板信令的传输通道。
                     */
                    AuthParam m_iMAuthParam;
                    bool m_iMAuthParamHasBeenSet;

                    /**
                     * TRTC鉴权信息参数，用于TRTC进房推流鉴权。
当需要推流到的TRTC房间所对应的TRTC应用与白板应用的SdkAppId不一致时，可以通过此参数提供对应的TRTC应用鉴权信息。

如果提供了此参数，白板推流服务会优先使用此参数指定的SdkAppId作为白板推流的目标TRTC应用，否则使用公共参数中的SdkAppId作为白板推流的目标TRTC应用。
                     */
                    AuthParam m_tRTCAuthParam;
                    bool m_tRTCAuthParamHasBeenSet;

                    /**
                     * 指定白板推流时推流用户进TRTC房间的进房模式。默认为 TRTCAppSceneVideoCall

TRTCAppSceneVideoCall - 视频通话场景，即绝大多数时间都是两人或两人以上视频通话的场景，内部编码器和网络协议优化侧重流畅性，降低通话延迟和卡顿率。
TRTCAppSceneLIVE - 直播场景，即绝大多数时间都是一人直播，偶尔有多人视频互动的场景，内部编码器和网络协议优化侧重性能和兼容性，性能和清晰度表现更佳。
                     */
                    std::string m_tRTCEnterRoomMode;
                    bool m_tRTCEnterRoomModeHasBeenSet;

                    /**
                     * 白板进行信令同步的 IM 群组 ID。
在没有指定`GroupId`的情况下，白板推流服务将使用 `RoomId` 的字符串形式作为同步白板信令的IM群组ID。
在指定了`GroupId`的情况下，白板推流将优先`GroupId`作为同步白板信令的群组ID。请在开始推流前确保指定的IM群组已创建完成，否则会导致推流失败。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_STARTWHITEBOARDPUSHREQUEST_H_
