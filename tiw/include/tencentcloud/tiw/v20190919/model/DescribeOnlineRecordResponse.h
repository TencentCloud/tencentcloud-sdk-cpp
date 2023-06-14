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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEONLINERECORDRESPONSE_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEONLINERECORDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiw/v20190919/model/OmittedDuration.h>
#include <tencentcloud/tiw/v20190919/model/VideoInfo.h>
#include <tencentcloud/tiw/v20190919/model/Interrupt.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * DescribeOnlineRecord返回参数结构体
                */
                class DescribeOnlineRecordResponse : public AbstractModel
                {
                public:
                    DescribeOnlineRecordResponse();
                    ~DescribeOnlineRecordResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取录制结束原因，
- AUTO: 房间内长时间没有音视频上行及白板操作导致自动停止录制
- USER_CALL: 主动调用了停止录制接口
- EXCEPTION: 录制异常结束
- FORCE_STOP: 强制停止录制，一般是因为暂停超过90分钟或者录制总时长超过24小时。
                     * @return FinishReason 录制结束原因，
- AUTO: 房间内长时间没有音视频上行及白板操作导致自动停止录制
- USER_CALL: 主动调用了停止录制接口
- EXCEPTION: 录制异常结束
- FORCE_STOP: 强制停止录制，一般是因为暂停超过90分钟或者录制总时长超过24小时。
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
                     * 获取需要查询结果的录制任务Id
                     * @return TaskId 需要查询结果的录制任务Id
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
                     * 获取录制任务状态
- PREPARED: 表示录制正在准备中（进房/启动录制服务等操作）
- RECORDING: 表示录制已开始
- PAUSED: 表示录制已暂停
- STOPPED: 表示录制已停止，正在处理并上传视频
- FINISHED: 表示视频处理并上传完成，成功生成录制结果
                     * @return Status 录制任务状态
- PREPARED: 表示录制正在准备中（进房/启动录制服务等操作）
- RECORDING: 表示录制已开始
- PAUSED: 表示录制已暂停
- STOPPED: 表示录制已停止，正在处理并上传视频
- FINISHED: 表示视频处理并上传完成，成功生成录制结果
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
                     * 获取录制用户Id
                     * @return RecordUserId 录制用户Id
                     * 
                     */
                    std::string GetRecordUserId() const;

                    /**
                     * 判断参数 RecordUserId 是否已赋值
                     * @return RecordUserId 是否已赋值
                     * 
                     */
                    bool RecordUserIdHasBeenSet() const;

                    /**
                     * 获取实际开始录制时间，Unix 时间戳，单位秒
                     * @return RecordStartTime 实际开始录制时间，Unix 时间戳，单位秒
                     * 
                     */
                    int64_t GetRecordStartTime() const;

                    /**
                     * 判断参数 RecordStartTime 是否已赋值
                     * @return RecordStartTime 是否已赋值
                     * 
                     */
                    bool RecordStartTimeHasBeenSet() const;

                    /**
                     * 获取实际停止录制时间，Unix 时间戳，单位秒
                     * @return RecordStopTime 实际停止录制时间，Unix 时间戳，单位秒
                     * 
                     */
                    int64_t GetRecordStopTime() const;

                    /**
                     * 判断参数 RecordStopTime 是否已赋值
                     * @return RecordStopTime 是否已赋值
                     * 
                     */
                    bool RecordStopTimeHasBeenSet() const;

                    /**
                     * 获取回放视频总时长（单位：毫秒）
                     * @return TotalTime 回放视频总时长（单位：毫秒）
                     * 
                     */
                    int64_t GetTotalTime() const;

                    /**
                     * 判断参数 TotalTime 是否已赋值
                     * @return TotalTime 是否已赋值
                     * 
                     */
                    bool TotalTimeHasBeenSet() const;

                    /**
                     * 获取录制过程中出现异常的次数
                     * @return ExceptionCnt 录制过程中出现异常的次数
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
                     * 获取拼接视频中被忽略的时间段，只有开启视频拼接功能的时候，这个参数才是有效的
                     * @return OmittedDurations 拼接视频中被忽略的时间段，只有开启视频拼接功能的时候，这个参数才是有效的
                     * 
                     */
                    std::vector<OmittedDuration> GetOmittedDurations() const;

                    /**
                     * 判断参数 OmittedDurations 是否已赋值
                     * @return OmittedDurations 是否已赋值
                     * 
                     */
                    bool OmittedDurationsHasBeenSet() const;

                    /**
                     * 获取录制视频列表
                     * @return VideoInfos 录制视频列表
                     * 
                     */
                    std::vector<VideoInfo> GetVideoInfos() const;

                    /**
                     * 判断参数 VideoInfos 是否已赋值
                     * @return VideoInfos 是否已赋值
                     * 
                     */
                    bool VideoInfosHasBeenSet() const;

                    /**
                     * 获取回放URL，需配合信令播放器使用。此字段仅适用于`视频生成模式`
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReplayUrl 回放URL，需配合信令播放器使用。此字段仅适用于`视频生成模式`
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReplayUrl() const;

                    /**
                     * 判断参数 ReplayUrl 是否已赋值
                     * @return ReplayUrl 是否已赋值
                     * 
                     */
                    bool ReplayUrlHasBeenSet() const;

                    /**
                     * 获取视频流在录制过程中断流次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Interrupts 视频流在录制过程中断流次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Interrupt> GetInterrupts() const;

                    /**
                     * 判断参数 Interrupts 是否已赋值
                     * @return Interrupts 是否已赋值
                     * 
                     */
                    bool InterruptsHasBeenSet() const;

                private:

                    /**
                     * 录制结束原因，
- AUTO: 房间内长时间没有音视频上行及白板操作导致自动停止录制
- USER_CALL: 主动调用了停止录制接口
- EXCEPTION: 录制异常结束
- FORCE_STOP: 强制停止录制，一般是因为暂停超过90分钟或者录制总时长超过24小时。
                     */
                    std::string m_finishReason;
                    bool m_finishReasonHasBeenSet;

                    /**
                     * 需要查询结果的录制任务Id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 录制任务状态
- PREPARED: 表示录制正在准备中（进房/启动录制服务等操作）
- RECORDING: 表示录制已开始
- PAUSED: 表示录制已暂停
- STOPPED: 表示录制已停止，正在处理并上传视频
- FINISHED: 表示视频处理并上传完成，成功生成录制结果
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
                     * 录制用户Id
                     */
                    std::string m_recordUserId;
                    bool m_recordUserIdHasBeenSet;

                    /**
                     * 实际开始录制时间，Unix 时间戳，单位秒
                     */
                    int64_t m_recordStartTime;
                    bool m_recordStartTimeHasBeenSet;

                    /**
                     * 实际停止录制时间，Unix 时间戳，单位秒
                     */
                    int64_t m_recordStopTime;
                    bool m_recordStopTimeHasBeenSet;

                    /**
                     * 回放视频总时长（单位：毫秒）
                     */
                    int64_t m_totalTime;
                    bool m_totalTimeHasBeenSet;

                    /**
                     * 录制过程中出现异常的次数
                     */
                    int64_t m_exceptionCnt;
                    bool m_exceptionCntHasBeenSet;

                    /**
                     * 拼接视频中被忽略的时间段，只有开启视频拼接功能的时候，这个参数才是有效的
                     */
                    std::vector<OmittedDuration> m_omittedDurations;
                    bool m_omittedDurationsHasBeenSet;

                    /**
                     * 录制视频列表
                     */
                    std::vector<VideoInfo> m_videoInfos;
                    bool m_videoInfosHasBeenSet;

                    /**
                     * 回放URL，需配合信令播放器使用。此字段仅适用于`视频生成模式`
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_replayUrl;
                    bool m_replayUrlHasBeenSet;

                    /**
                     * 视频流在录制过程中断流次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Interrupt> m_interrupts;
                    bool m_interruptsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEONLINERECORDRESPONSE_H_
