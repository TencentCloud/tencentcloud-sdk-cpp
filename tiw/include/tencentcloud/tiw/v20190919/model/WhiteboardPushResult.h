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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_WHITEBOARDPUSHRESULT_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_WHITEBOARDPUSHRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 白板推流任务结果
                */
                class WhiteboardPushResult : public AbstractModel
                {
                public:
                    WhiteboardPushResult();
                    ~WhiteboardPushResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取AUTO - 自动停止推流， USER_CALL - 用户主动调用停止推流
                     * @return FinishReason AUTO - 自动停止推流， USER_CALL - 用户主动调用停止推流
                     */
                    std::string GetFinishReason() const;

                    /**
                     * 设置AUTO - 自动停止推流， USER_CALL - 用户主动调用停止推流
                     * @param FinishReason AUTO - 自动停止推流， USER_CALL - 用户主动调用停止推流
                     */
                    void SetFinishReason(const std::string& _finishReason);

                    /**
                     * 判断参数 FinishReason 是否已赋值
                     * @return FinishReason 是否已赋值
                     */
                    bool FinishReasonHasBeenSet() const;

                    /**
                     * 获取异常数
                     * @return ExceptionCnt 异常数
                     */
                    int64_t GetExceptionCnt() const;

                    /**
                     * 设置异常数
                     * @param ExceptionCnt 异常数
                     */
                    void SetExceptionCnt(const int64_t& _exceptionCnt);

                    /**
                     * 判断参数 ExceptionCnt 是否已赋值
                     * @return ExceptionCnt 是否已赋值
                     */
                    bool ExceptionCntHasBeenSet() const;

                    /**
                     * 获取房间号
                     * @return RoomId 房间号
                     */
                    int64_t GetRoomId() const;

                    /**
                     * 设置房间号
                     * @param RoomId 房间号
                     */
                    void SetRoomId(const int64_t& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取IM群组ID
                     * @return GroupId IM群组ID
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置IM群组ID
                     * @param GroupId IM群组ID
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取推流真实开始时间
                     * @return PushStartTime 推流真实开始时间
                     */
                    int64_t GetPushStartTime() const;

                    /**
                     * 设置推流真实开始时间
                     * @param PushStartTime 推流真实开始时间
                     */
                    void SetPushStartTime(const int64_t& _pushStartTime);

                    /**
                     * 判断参数 PushStartTime 是否已赋值
                     * @return PushStartTime 是否已赋值
                     */
                    bool PushStartTimeHasBeenSet() const;

                    /**
                     * 获取推流结束时间
                     * @return PushStopTime 推流结束时间
                     */
                    int64_t GetPushStopTime() const;

                    /**
                     * 设置推流结束时间
                     * @param PushStopTime 推流结束时间
                     */
                    void SetPushStopTime(const int64_t& _pushStopTime);

                    /**
                     * 判断参数 PushStopTime 是否已赋值
                     * @return PushStopTime 是否已赋值
                     */
                    bool PushStopTimeHasBeenSet() const;

                    /**
                     * 获取白板推流首帧对应的IM时间戳，可用于录制回放时IM聊天消息与白板推流视频进行同步对时。
                     * @return IMSyncTime 白板推流首帧对应的IM时间戳，可用于录制回放时IM聊天消息与白板推流视频进行同步对时。
                     */
                    int64_t GetIMSyncTime() const;

                    /**
                     * 设置白板推流首帧对应的IM时间戳，可用于录制回放时IM聊天消息与白板推流视频进行同步对时。
                     * @param IMSyncTime 白板推流首帧对应的IM时间戳，可用于录制回放时IM聊天消息与白板推流视频进行同步对时。
                     */
                    void SetIMSyncTime(const int64_t& _iMSyncTime);

                    /**
                     * 判断参数 IMSyncTime 是否已赋值
                     * @return IMSyncTime 是否已赋值
                     */
                    bool IMSyncTimeHasBeenSet() const;

                    /**
                     * 获取任务失败错误码
                     * @return ErrorCode 任务失败错误码
                     */
                    int64_t GetErrorCode() const;

                    /**
                     * 设置任务失败错误码
                     * @param ErrorCode 任务失败错误码
                     */
                    void SetErrorCode(const int64_t& _errorCode);

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取错误信息
                     * @return ErrorMsg 错误信息
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 设置错误信息
                     * @param ErrorMsg 错误信息
                     */
                    void SetErrorMsg(const std::string& _errorMsg);

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     */
                    bool ErrorMsgHasBeenSet() const;

                private:

                    /**
                     * AUTO - 自动停止推流， USER_CALL - 用户主动调用停止推流
                     */
                    std::string m_finishReason;
                    bool m_finishReasonHasBeenSet;

                    /**
                     * 异常数
                     */
                    int64_t m_exceptionCnt;
                    bool m_exceptionCntHasBeenSet;

                    /**
                     * 房间号
                     */
                    int64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * IM群组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 推流真实开始时间
                     */
                    int64_t m_pushStartTime;
                    bool m_pushStartTimeHasBeenSet;

                    /**
                     * 推流结束时间
                     */
                    int64_t m_pushStopTime;
                    bool m_pushStopTimeHasBeenSet;

                    /**
                     * 白板推流首帧对应的IM时间戳，可用于录制回放时IM聊天消息与白板推流视频进行同步对时。
                     */
                    int64_t m_iMSyncTime;
                    bool m_iMSyncTimeHasBeenSet;

                    /**
                     * 任务失败错误码
                     */
                    int64_t m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * 错误信息
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_WHITEBOARDPUSHRESULT_H_
