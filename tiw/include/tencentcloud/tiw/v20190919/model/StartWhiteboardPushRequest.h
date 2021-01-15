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
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置客户的SdkAppId
                     * @param SdkAppId 客户的SdkAppId
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取需要推流白板的房间号，取值范围: (1, 4294967295)
                     * @return RoomId 需要推流白板的房间号，取值范围: (1, 4294967295)
                     */
                    int64_t GetRoomId() const;

                    /**
                     * 设置需要推流白板的房间号，取值范围: (1, 4294967295)
                     * @param RoomId 需要推流白板的房间号，取值范围: (1, 4294967295)
                     */
                    void SetRoomId(const int64_t& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取用于白板推流服务进房进行推流的用户ID，
该ID必须是一个单独的未在SDK中使用的ID，白板推流服务使用这个用户ID进入房间进行白板音视频推流，若该ID和SDK中使用的ID重复，会导致SDK和白板推流服务互踢，影响正常推流。
                     * @return PushUserId 用于白板推流服务进房进行推流的用户ID，
该ID必须是一个单独的未在SDK中使用的ID，白板推流服务使用这个用户ID进入房间进行白板音视频推流，若该ID和SDK中使用的ID重复，会导致SDK和白板推流服务互踢，影响正常推流。
                     */
                    std::string GetPushUserId() const;

                    /**
                     * 设置用于白板推流服务进房进行推流的用户ID，
该ID必须是一个单独的未在SDK中使用的ID，白板推流服务使用这个用户ID进入房间进行白板音视频推流，若该ID和SDK中使用的ID重复，会导致SDK和白板推流服务互踢，影响正常推流。
                     * @param PushUserId 用于白板推流服务进房进行推流的用户ID，
该ID必须是一个单独的未在SDK中使用的ID，白板推流服务使用这个用户ID进入房间进行白板音视频推流，若该ID和SDK中使用的ID重复，会导致SDK和白板推流服务互踢，影响正常推流。
                     */
                    void SetPushUserId(const std::string& _pushUserId);

                    /**
                     * 判断参数 PushUserId 是否已赋值
                     * @return PushUserId 是否已赋值
                     */
                    bool PushUserIdHasBeenSet() const;

                    /**
                     * 获取与PushUserId对应的签名
                     * @return PushUserSig 与PushUserId对应的签名
                     */
                    std::string GetPushUserSig() const;

                    /**
                     * 设置与PushUserId对应的签名
                     * @param PushUserSig 与PushUserId对应的签名
                     */
                    void SetPushUserSig(const std::string& _pushUserSig);

                    /**
                     * 判断参数 PushUserSig 是否已赋值
                     * @return PushUserSig 是否已赋值
                     */
                    bool PushUserSigHasBeenSet() const;

                    /**
                     * 获取白板参数，例如白板宽高、背景颜色等
                     * @return Whiteboard 白板参数，例如白板宽高、背景颜色等
                     */
                    Whiteboard GetWhiteboard() const;

                    /**
                     * 设置白板参数，例如白板宽高、背景颜色等
                     * @param Whiteboard 白板参数，例如白板宽高、背景颜色等
                     */
                    void SetWhiteboard(const Whiteboard& _whiteboard);

                    /**
                     * 判断参数 Whiteboard 是否已赋值
                     * @return Whiteboard 是否已赋值
                     */
                    bool WhiteboardHasBeenSet() const;

                    /**
                     * 获取自动停止推流超时时间，单位秒，取值范围[300, 259200], 默认值为1800秒。

当白板超过设定时间没有操作的时候，白板推流服务会自动停止白板推流。
                     * @return AutoStopTimeout 自动停止推流超时时间，单位秒，取值范围[300, 259200], 默认值为1800秒。

当白板超过设定时间没有操作的时候，白板推流服务会自动停止白板推流。
                     */
                    int64_t GetAutoStopTimeout() const;

                    /**
                     * 设置自动停止推流超时时间，单位秒，取值范围[300, 259200], 默认值为1800秒。

当白板超过设定时间没有操作的时候，白板推流服务会自动停止白板推流。
                     * @param AutoStopTimeout 自动停止推流超时时间，单位秒，取值范围[300, 259200], 默认值为1800秒。

当白板超过设定时间没有操作的时候，白板推流服务会自动停止白板推流。
                     */
                    void SetAutoStopTimeout(const int64_t& _autoStopTimeout);

                    /**
                     * 判断参数 AutoStopTimeout 是否已赋值
                     * @return AutoStopTimeout 是否已赋值
                     */
                    bool AutoStopTimeoutHasBeenSet() const;

                    /**
                     * 获取对主白板推流任务进行操作时，是否同时同步操作备份任务
                     * @return AutoManageBackup 对主白板推流任务进行操作时，是否同时同步操作备份任务
                     */
                    bool GetAutoManageBackup() const;

                    /**
                     * 设置对主白板推流任务进行操作时，是否同时同步操作备份任务
                     * @param AutoManageBackup 对主白板推流任务进行操作时，是否同时同步操作备份任务
                     */
                    void SetAutoManageBackup(const bool& _autoManageBackup);

                    /**
                     * 判断参数 AutoManageBackup 是否已赋值
                     * @return AutoManageBackup 是否已赋值
                     */
                    bool AutoManageBackupHasBeenSet() const;

                    /**
                     * 获取备份白板推流相关参数。

指定了备份参数的情况下，白板推流服务会在房间内新增一路白板画面视频流，即同一个房间内会有两路白板画面推流。
                     * @return Backup 备份白板推流相关参数。

指定了备份参数的情况下，白板推流服务会在房间内新增一路白板画面视频流，即同一个房间内会有两路白板画面推流。
                     */
                    WhiteboardPushBackupParam GetBackup() const;

                    /**
                     * 设置备份白板推流相关参数。

指定了备份参数的情况下，白板推流服务会在房间内新增一路白板画面视频流，即同一个房间内会有两路白板画面推流。
                     * @param Backup 备份白板推流相关参数。

指定了备份参数的情况下，白板推流服务会在房间内新增一路白板画面视频流，即同一个房间内会有两路白板画面推流。
                     */
                    void SetBackup(const WhiteboardPushBackupParam& _backup);

                    /**
                     * 判断参数 Backup 是否已赋值
                     * @return Backup 是否已赋值
                     */
                    bool BackupHasBeenSet() const;

                    /**
                     * 获取在实时音视频云端录制模式选择为 `指定用户录制` 模式的时候是否自动录制白板推流。

默认在实时音视频的云端录制模式选择为 `指定用户录制` 模式的情况下，不会自动进行白板推流录制，如果希望进行白板推流录制，请将此参数设置为true。

如果实时音视频的云端录制模式选择为 `全局自动录制` 模式，可忽略此参数。
                     * @return AutoRecord 在实时音视频云端录制模式选择为 `指定用户录制` 模式的时候是否自动录制白板推流。

默认在实时音视频的云端录制模式选择为 `指定用户录制` 模式的情况下，不会自动进行白板推流录制，如果希望进行白板推流录制，请将此参数设置为true。

如果实时音视频的云端录制模式选择为 `全局自动录制` 模式，可忽略此参数。
                     */
                    bool GetAutoRecord() const;

                    /**
                     * 设置在实时音视频云端录制模式选择为 `指定用户录制` 模式的时候是否自动录制白板推流。

默认在实时音视频的云端录制模式选择为 `指定用户录制` 模式的情况下，不会自动进行白板推流录制，如果希望进行白板推流录制，请将此参数设置为true。

如果实时音视频的云端录制模式选择为 `全局自动录制` 模式，可忽略此参数。
                     * @param AutoRecord 在实时音视频云端录制模式选择为 `指定用户录制` 模式的时候是否自动录制白板推流。

默认在实时音视频的云端录制模式选择为 `指定用户录制` 模式的情况下，不会自动进行白板推流录制，如果希望进行白板推流录制，请将此参数设置为true。

如果实时音视频的云端录制模式选择为 `全局自动录制` 模式，可忽略此参数。
                     */
                    void SetAutoRecord(const bool& _autoRecord);

                    /**
                     * 判断参数 AutoRecord 是否已赋值
                     * @return AutoRecord 是否已赋值
                     */
                    bool AutoRecordHasBeenSet() const;

                    /**
                     * 获取内部参数，不需要关注此参数
                     * @return ExtraData 内部参数，不需要关注此参数
                     */
                    std::string GetExtraData() const;

                    /**
                     * 设置内部参数，不需要关注此参数
                     * @param ExtraData 内部参数，不需要关注此参数
                     */
                    void SetExtraData(const std::string& _extraData);

                    /**
                     * 判断参数 ExtraData 是否已赋值
                     * @return ExtraData 是否已赋值
                     */
                    bool ExtraDataHasBeenSet() const;

                private:

                    /**
                     * 客户的SdkAppId
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 需要推流白板的房间号，取值范围: (1, 4294967295)
                     */
                    int64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 用于白板推流服务进房进行推流的用户ID，
该ID必须是一个单独的未在SDK中使用的ID，白板推流服务使用这个用户ID进入房间进行白板音视频推流，若该ID和SDK中使用的ID重复，会导致SDK和白板推流服务互踢，影响正常推流。
                     */
                    std::string m_pushUserId;
                    bool m_pushUserIdHasBeenSet;

                    /**
                     * 与PushUserId对应的签名
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
                     * 在实时音视频云端录制模式选择为 `指定用户录制` 模式的时候是否自动录制白板推流。

默认在实时音视频的云端录制模式选择为 `指定用户录制` 模式的情况下，不会自动进行白板推流录制，如果希望进行白板推流录制，请将此参数设置为true。

如果实时音视频的云端录制模式选择为 `全局自动录制` 模式，可忽略此参数。
                     */
                    bool m_autoRecord;
                    bool m_autoRecordHasBeenSet;

                    /**
                     * 内部参数，不需要关注此参数
                     */
                    std::string m_extraData;
                    bool m_extraDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_STARTWHITEBOARDPUSHREQUEST_H_
