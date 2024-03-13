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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_PSTNSESSION_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_PSTNSESSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * PSTN 会话类型。
                */
                class PSTNSession : public AbstractModel
                {
                public:
                    PSTNSession();
                    ~PSTNSession() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取会话 ID
                     * @return SessionID 会话 ID
                     * 
                     */
                    std::string GetSessionID() const;

                    /**
                     * 设置会话 ID
                     * @param _sessionID 会话 ID
                     * 
                     */
                    void SetSessionID(const std::string& _sessionID);

                    /**
                     * 判断参数 SessionID 是否已赋值
                     * @return SessionID 是否已赋值
                     * 
                     */
                    bool SessionIDHasBeenSet() const;

                    /**
                     * 获取会话临时房间 ID
                     * @return RoomID 会话临时房间 ID
                     * 
                     */
                    std::string GetRoomID() const;

                    /**
                     * 设置会话临时房间 ID
                     * @param _roomID 会话临时房间 ID
                     * 
                     */
                    void SetRoomID(const std::string& _roomID);

                    /**
                     * 判断参数 RoomID 是否已赋值
                     * @return RoomID 是否已赋值
                     * 
                     */
                    bool RoomIDHasBeenSet() const;

                    /**
                     * 获取主叫
                     * @return Caller 主叫
                     * 
                     */
                    std::string GetCaller() const;

                    /**
                     * 设置主叫
                     * @param _caller 主叫
                     * 
                     */
                    void SetCaller(const std::string& _caller);

                    /**
                     * 判断参数 Caller 是否已赋值
                     * @return Caller 是否已赋值
                     * 
                     */
                    bool CallerHasBeenSet() const;

                    /**
                     * 获取被叫
                     * @return Callee 被叫
                     * 
                     */
                    std::string GetCallee() const;

                    /**
                     * 设置被叫
                     * @param _callee 被叫
                     * 
                     */
                    void SetCallee(const std::string& _callee);

                    /**
                     * 判断参数 Callee 是否已赋值
                     * @return Callee 是否已赋值
                     * 
                     */
                    bool CalleeHasBeenSet() const;

                    /**
                     * 获取开始时间，Unix 时间戳
                     * @return StartTimestamp 开始时间，Unix 时间戳
                     * 
                     */
                    int64_t GetStartTimestamp() const;

                    /**
                     * 设置开始时间，Unix 时间戳
                     * @param _startTimestamp 开始时间，Unix 时间戳
                     * 
                     */
                    void SetStartTimestamp(const int64_t& _startTimestamp);

                    /**
                     * 判断参数 StartTimestamp 是否已赋值
                     * @return StartTimestamp 是否已赋值
                     * 
                     */
                    bool StartTimestampHasBeenSet() const;

                    /**
                     * 获取振铃时间，Unix 时间戳
                     * @return RingTimestamp 振铃时间，Unix 时间戳
                     * 
                     */
                    int64_t GetRingTimestamp() const;

                    /**
                     * 设置振铃时间，Unix 时间戳
                     * @param _ringTimestamp 振铃时间，Unix 时间戳
                     * 
                     */
                    void SetRingTimestamp(const int64_t& _ringTimestamp);

                    /**
                     * 判断参数 RingTimestamp 是否已赋值
                     * @return RingTimestamp 是否已赋值
                     * 
                     */
                    bool RingTimestampHasBeenSet() const;

                    /**
                     * 获取接听时间，Unix 时间戳
                     * @return AcceptTimestamp 接听时间，Unix 时间戳
                     * 
                     */
                    int64_t GetAcceptTimestamp() const;

                    /**
                     * 设置接听时间，Unix 时间戳
                     * @param _acceptTimestamp 接听时间，Unix 时间戳
                     * 
                     */
                    void SetAcceptTimestamp(const int64_t& _acceptTimestamp);

                    /**
                     * 判断参数 AcceptTimestamp 是否已赋值
                     * @return AcceptTimestamp 是否已赋值
                     * 
                     */
                    bool AcceptTimestampHasBeenSet() const;

                    /**
                     * 获取座席邮箱
                     * @return StaffEmail 座席邮箱
                     * 
                     */
                    std::string GetStaffEmail() const;

                    /**
                     * 设置座席邮箱
                     * @param _staffEmail 座席邮箱
                     * 
                     */
                    void SetStaffEmail(const std::string& _staffEmail);

                    /**
                     * 判断参数 StaffEmail 是否已赋值
                     * @return StaffEmail 是否已赋值
                     * 
                     */
                    bool StaffEmailHasBeenSet() const;

                    /**
                     * 获取座席工号
                     * @return StaffNumber 座席工号
                     * 
                     */
                    std::string GetStaffNumber() const;

                    /**
                     * 设置座席工号
                     * @param _staffNumber 座席工号
                     * 
                     */
                    void SetStaffNumber(const std::string& _staffNumber);

                    /**
                     * 判断参数 StaffNumber 是否已赋值
                     * @return StaffNumber 是否已赋值
                     * 
                     */
                    bool StaffNumberHasBeenSet() const;

                    /**
                     * 获取会话状态
ringing 振铃中
seatJoining  等待座席接听
inProgress 进行中
finished 已完成
                     * @return SessionStatus 会话状态
ringing 振铃中
seatJoining  等待座席接听
inProgress 进行中
finished 已完成
                     * 
                     */
                    std::string GetSessionStatus() const;

                    /**
                     * 设置会话状态
ringing 振铃中
seatJoining  等待座席接听
inProgress 进行中
finished 已完成
                     * @param _sessionStatus 会话状态
ringing 振铃中
seatJoining  等待座席接听
inProgress 进行中
finished 已完成
                     * 
                     */
                    void SetSessionStatus(const std::string& _sessionStatus);

                    /**
                     * 判断参数 SessionStatus 是否已赋值
                     * @return SessionStatus 是否已赋值
                     * 
                     */
                    bool SessionStatusHasBeenSet() const;

                    /**
                     * 获取会话呼叫方向， 0 呼入 | 1 - 呼出
                     * @return Direction 会话呼叫方向， 0 呼入 | 1 - 呼出
                     * 
                     */
                    int64_t GetDirection() const;

                    /**
                     * 设置会话呼叫方向， 0 呼入 | 1 - 呼出
                     * @param _direction 会话呼叫方向， 0 呼入 | 1 - 呼出
                     * 
                     */
                    void SetDirection(const int64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取转外线使用的号码（转外线主叫）
                     * @return OutBoundCaller 转外线使用的号码（转外线主叫）
                     * 
                     */
                    std::string GetOutBoundCaller() const;

                    /**
                     * 设置转外线使用的号码（转外线主叫）
                     * @param _outBoundCaller 转外线使用的号码（转外线主叫）
                     * 
                     */
                    void SetOutBoundCaller(const std::string& _outBoundCaller);

                    /**
                     * 判断参数 OutBoundCaller 是否已赋值
                     * @return OutBoundCaller 是否已赋值
                     * 
                     */
                    bool OutBoundCallerHasBeenSet() const;

                    /**
                     * 获取转外线被叫
                     * @return OutBoundCallee 转外线被叫
                     * 
                     */
                    std::string GetOutBoundCallee() const;

                    /**
                     * 设置转外线被叫
                     * @param _outBoundCallee 转外线被叫
                     * 
                     */
                    void SetOutBoundCallee(const std::string& _outBoundCallee);

                    /**
                     * 判断参数 OutBoundCallee 是否已赋值
                     * @return OutBoundCallee 是否已赋值
                     * 
                     */
                    bool OutBoundCalleeHasBeenSet() const;

                    /**
                     * 获取主叫号码保护ID，开启号码保护映射功能时有效，且Caller字段置空
                     * @return ProtectedCaller 主叫号码保护ID，开启号码保护映射功能时有效，且Caller字段置空
                     * 
                     */
                    std::string GetProtectedCaller() const;

                    /**
                     * 设置主叫号码保护ID，开启号码保护映射功能时有效，且Caller字段置空
                     * @param _protectedCaller 主叫号码保护ID，开启号码保护映射功能时有效，且Caller字段置空
                     * 
                     */
                    void SetProtectedCaller(const std::string& _protectedCaller);

                    /**
                     * 判断参数 ProtectedCaller 是否已赋值
                     * @return ProtectedCaller 是否已赋值
                     * 
                     */
                    bool ProtectedCallerHasBeenSet() const;

                    /**
                     * 获取被叫号码保护ID，开启号码保护映射功能时有效，且Callee字段置空
                     * @return ProtectedCallee 被叫号码保护ID，开启号码保护映射功能时有效，且Callee字段置空
                     * 
                     */
                    std::string GetProtectedCallee() const;

                    /**
                     * 设置被叫号码保护ID，开启号码保护映射功能时有效，且Callee字段置空
                     * @param _protectedCallee 被叫号码保护ID，开启号码保护映射功能时有效，且Callee字段置空
                     * 
                     */
                    void SetProtectedCallee(const std::string& _protectedCallee);

                    /**
                     * 判断参数 ProtectedCallee 是否已赋值
                     * @return ProtectedCallee 是否已赋值
                     * 
                     */
                    bool ProtectedCalleeHasBeenSet() const;

                private:

                    /**
                     * 会话 ID
                     */
                    std::string m_sessionID;
                    bool m_sessionIDHasBeenSet;

                    /**
                     * 会话临时房间 ID
                     */
                    std::string m_roomID;
                    bool m_roomIDHasBeenSet;

                    /**
                     * 主叫
                     */
                    std::string m_caller;
                    bool m_callerHasBeenSet;

                    /**
                     * 被叫
                     */
                    std::string m_callee;
                    bool m_calleeHasBeenSet;

                    /**
                     * 开始时间，Unix 时间戳
                     */
                    int64_t m_startTimestamp;
                    bool m_startTimestampHasBeenSet;

                    /**
                     * 振铃时间，Unix 时间戳
                     */
                    int64_t m_ringTimestamp;
                    bool m_ringTimestampHasBeenSet;

                    /**
                     * 接听时间，Unix 时间戳
                     */
                    int64_t m_acceptTimestamp;
                    bool m_acceptTimestampHasBeenSet;

                    /**
                     * 座席邮箱
                     */
                    std::string m_staffEmail;
                    bool m_staffEmailHasBeenSet;

                    /**
                     * 座席工号
                     */
                    std::string m_staffNumber;
                    bool m_staffNumberHasBeenSet;

                    /**
                     * 会话状态
ringing 振铃中
seatJoining  等待座席接听
inProgress 进行中
finished 已完成
                     */
                    std::string m_sessionStatus;
                    bool m_sessionStatusHasBeenSet;

                    /**
                     * 会话呼叫方向， 0 呼入 | 1 - 呼出
                     */
                    int64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * 转外线使用的号码（转外线主叫）
                     */
                    std::string m_outBoundCaller;
                    bool m_outBoundCallerHasBeenSet;

                    /**
                     * 转外线被叫
                     */
                    std::string m_outBoundCallee;
                    bool m_outBoundCalleeHasBeenSet;

                    /**
                     * 主叫号码保护ID，开启号码保护映射功能时有效，且Caller字段置空
                     */
                    std::string m_protectedCaller;
                    bool m_protectedCallerHasBeenSet;

                    /**
                     * 被叫号码保护ID，开启号码保护映射功能时有效，且Callee字段置空
                     */
                    std::string m_protectedCallee;
                    bool m_protectedCalleeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_PSTNSESSION_H_
