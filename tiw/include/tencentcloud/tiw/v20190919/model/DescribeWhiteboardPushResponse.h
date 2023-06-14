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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEWHITEBOARDPUSHRESPONSE_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEWHITEBOARDPUSHRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * DescribeWhiteboardPush返回参数结构体
                */
                class DescribeWhiteboardPushResponse : public AbstractModel
                {
                public:
                    DescribeWhiteboardPushResponse();
                    ~DescribeWhiteboardPushResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取推流结束原因，
- AUTO: 房间内长时间没有音视频上行及白板操作导致自动停止推流
- USER_CALL: 主动调用了停止推流接口
- EXCEPTION: 推流异常结束
                     * @return FinishReason 推流结束原因，
- AUTO: 房间内长时间没有音视频上行及白板操作导致自动停止推流
- USER_CALL: 主动调用了停止推流接口
- EXCEPTION: 推流异常结束
                     * 
                     */
                    std::string GetFinishReason() const;

                    /**
                     * 判断参数 FinishReason 是否已赋值
                     * @return FinishReason 是否已赋值
                     * 
                     */
                    bool FinishReasonHasBeenSet() const;

                    /**
                     * 获取需要查询结果的白板推流任务Id
                     * @return TaskId 需要查询结果的白板推流任务Id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取推流任务状态
- PREPARED: 表示推流正在准备中（进房/启动推流服务等操作）
- PUSHING: 表示推流已开始
- STOPPED: 表示推流已停止
                     * @return Status 推流任务状态
- PREPARED: 表示推流正在准备中（进房/启动推流服务等操作）
- PUSHING: 表示推流已开始
- STOPPED: 表示推流已停止
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取房间号
                     * @return RoomId 房间号
                     * 
                     */
                    int64_t GetRoomId() const;

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取白板的群组 Id
                     * @return GroupId 白板的群组 Id
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取推流用户Id
                     * @return PushUserId 推流用户Id
                     * 
                     */
                    std::string GetPushUserId() const;

                    /**
                     * 判断参数 PushUserId 是否已赋值
                     * @return PushUserId 是否已赋值
                     * 
                     */
                    bool PushUserIdHasBeenSet() const;

                    /**
                     * 获取实际开始推流时间，Unix 时间戳，单位秒
                     * @return PushStartTime 实际开始推流时间，Unix 时间戳，单位秒
                     * 
                     */
                    int64_t GetPushStartTime() const;

                    /**
                     * 判断参数 PushStartTime 是否已赋值
                     * @return PushStartTime 是否已赋值
                     * 
                     */
                    bool PushStartTimeHasBeenSet() const;

                    /**
                     * 获取实际停止推流时间，Unix 时间戳，单位秒
                     * @return PushStopTime 实际停止推流时间，Unix 时间戳，单位秒
                     * 
                     */
                    int64_t GetPushStopTime() const;

                    /**
                     * 判断参数 PushStopTime 是否已赋值
                     * @return PushStopTime 是否已赋值
                     * 
                     */
                    bool PushStopTimeHasBeenSet() const;

                    /**
                     * 获取推流过程中出现异常的次数
                     * @return ExceptionCnt 推流过程中出现异常的次数
                     * 
                     */
                    int64_t GetExceptionCnt() const;

                    /**
                     * 判断参数 ExceptionCnt 是否已赋值
                     * @return ExceptionCnt 是否已赋值
                     * 
                     */
                    bool ExceptionCntHasBeenSet() const;

                    /**
                     * 获取白板推流首帧对应的IM时间戳，可用于录制回放时IM聊天消息与白板推流视频进行同步对时。
                     * @return IMSyncTime 白板推流首帧对应的IM时间戳，可用于录制回放时IM聊天消息与白板推流视频进行同步对时。
                     * 
                     */
                    int64_t GetIMSyncTime() const;

                    /**
                     * 判断参数 IMSyncTime 是否已赋值
                     * @return IMSyncTime 是否已赋值
                     * 
                     */
                    bool IMSyncTimeHasBeenSet() const;

                    /**
                     * 获取备份推流任务结果信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Backup 备份推流任务结果信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBackup() const;

                    /**
                     * 判断参数 Backup 是否已赋值
                     * @return Backup 是否已赋值
                     * 
                     */
                    bool BackupHasBeenSet() const;

                private:

                    /**
                     * 推流结束原因，
- AUTO: 房间内长时间没有音视频上行及白板操作导致自动停止推流
- USER_CALL: 主动调用了停止推流接口
- EXCEPTION: 推流异常结束
                     */
                    std::string m_finishReason;
                    bool m_finishReasonHasBeenSet;

                    /**
                     * 需要查询结果的白板推流任务Id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 推流任务状态
- PREPARED: 表示推流正在准备中（进房/启动推流服务等操作）
- PUSHING: 表示推流已开始
- STOPPED: 表示推流已停止
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 房间号
                     */
                    int64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 白板的群组 Id
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 推流用户Id
                     */
                    std::string m_pushUserId;
                    bool m_pushUserIdHasBeenSet;

                    /**
                     * 实际开始推流时间，Unix 时间戳，单位秒
                     */
                    int64_t m_pushStartTime;
                    bool m_pushStartTimeHasBeenSet;

                    /**
                     * 实际停止推流时间，Unix 时间戳，单位秒
                     */
                    int64_t m_pushStopTime;
                    bool m_pushStopTimeHasBeenSet;

                    /**
                     * 推流过程中出现异常的次数
                     */
                    int64_t m_exceptionCnt;
                    bool m_exceptionCntHasBeenSet;

                    /**
                     * 白板推流首帧对应的IM时间戳，可用于录制回放时IM聊天消息与白板推流视频进行同步对时。
                     */
                    int64_t m_iMSyncTime;
                    bool m_iMSyncTimeHasBeenSet;

                    /**
                     * 备份推流任务结果信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_backup;
                    bool m_backupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEWHITEBOARDPUSHRESPONSE_H_
