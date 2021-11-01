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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_TELCDRINFO_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_TELCDRINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/SeatUserInfo.h>
#include <tencentcloud/ccc/v20200210/model/ServeParticipant.h>
#include <tencentcloud/ccc/v20200210/model/IVRKeyPressedElement.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 电话话单信息
                */
                class TelCdrInfo : public AbstractModel
                {
                public:
                    TelCdrInfo();
                    ~TelCdrInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主叫号码
                     * @return Caller 主叫号码
                     */
                    std::string GetCaller() const;

                    /**
                     * 设置主叫号码
                     * @param Caller 主叫号码
                     */
                    void SetCaller(const std::string& _caller);

                    /**
                     * 判断参数 Caller 是否已赋值
                     * @return Caller 是否已赋值
                     */
                    bool CallerHasBeenSet() const;

                    /**
                     * 获取被叫号码
                     * @return Callee 被叫号码
                     */
                    std::string GetCallee() const;

                    /**
                     * 设置被叫号码
                     * @param Callee 被叫号码
                     */
                    void SetCallee(const std::string& _callee);

                    /**
                     * 判断参数 Callee 是否已赋值
                     * @return Callee 是否已赋值
                     */
                    bool CalleeHasBeenSet() const;

                    /**
                     * 获取呼叫发起时间戳，Unix 时间戳
                     * @return Time 呼叫发起时间戳，Unix 时间戳
                     */
                    int64_t GetTime() const;

                    /**
                     * 设置呼叫发起时间戳，Unix 时间戳
                     * @param Time 呼叫发起时间戳，Unix 时间戳
                     */
                    void SetTime(const int64_t& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取呼入呼出方向 0 呼入 1 呼出
                     * @return Direction 呼入呼出方向 0 呼入 1 呼出
                     */
                    int64_t GetDirection() const;

                    /**
                     * 设置呼入呼出方向 0 呼入 1 呼出
                     * @param Direction 呼入呼出方向 0 呼入 1 呼出
                     */
                    void SetDirection(const int64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取通话时长
                     * @return Duration 通话时长
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置通话时长
                     * @param Duration 通话时长
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取录音信息
                     * @return RecordURL 录音信息
                     */
                    std::string GetRecordURL() const;

                    /**
                     * 设置录音信息
                     * @param RecordURL 录音信息
                     */
                    void SetRecordURL(const std::string& _recordURL);

                    /**
                     * 判断参数 RecordURL 是否已赋值
                     * @return RecordURL 是否已赋值
                     */
                    bool RecordURLHasBeenSet() const;

                    /**
                     * 获取坐席信息
                     * @return SeatUser 坐席信息
                     */
                    SeatUserInfo GetSeatUser() const;

                    /**
                     * 设置坐席信息
                     * @param SeatUser 坐席信息
                     */
                    void SetSeatUser(const SeatUserInfo& _seatUser);

                    /**
                     * 判断参数 SeatUser 是否已赋值
                     * @return SeatUser 是否已赋值
                     */
                    bool SeatUserHasBeenSet() const;

                    /**
                     * 获取结束状态
0	错误
1	正常结束
2	未接通
17	坐席未接
100	黑名单
101	坐席转接
102	IVR 期间用户放弃
103	会话排队期间用户放弃
104	会话振铃期间用户放弃
105	无坐席在线
106	非工作时间
107	IVR后直接结束
201	未知状态
202	未接听
203	拒接挂断
204	关机
205	空号
206	通话中
207	欠费
208	运营商线路异常
209	主叫取消
210	不在服务区
                     * @return EndStatus 结束状态
0	错误
1	正常结束
2	未接通
17	坐席未接
100	黑名单
101	坐席转接
102	IVR 期间用户放弃
103	会话排队期间用户放弃
104	会话振铃期间用户放弃
105	无坐席在线
106	非工作时间
107	IVR后直接结束
201	未知状态
202	未接听
203	拒接挂断
204	关机
205	空号
206	通话中
207	欠费
208	运营商线路异常
209	主叫取消
210	不在服务区
                     */
                    int64_t GetEndStatus() const;

                    /**
                     * 设置结束状态
0	错误
1	正常结束
2	未接通
17	坐席未接
100	黑名单
101	坐席转接
102	IVR 期间用户放弃
103	会话排队期间用户放弃
104	会话振铃期间用户放弃
105	无坐席在线
106	非工作时间
107	IVR后直接结束
201	未知状态
202	未接听
203	拒接挂断
204	关机
205	空号
206	通话中
207	欠费
208	运营商线路异常
209	主叫取消
210	不在服务区
                     * @param EndStatus 结束状态
0	错误
1	正常结束
2	未接通
17	坐席未接
100	黑名单
101	坐席转接
102	IVR 期间用户放弃
103	会话排队期间用户放弃
104	会话振铃期间用户放弃
105	无坐席在线
106	非工作时间
107	IVR后直接结束
201	未知状态
202	未接听
203	拒接挂断
204	关机
205	空号
206	通话中
207	欠费
208	运营商线路异常
209	主叫取消
210	不在服务区
                     */
                    void SetEndStatus(const int64_t& _endStatus);

                    /**
                     * 判断参数 EndStatus 是否已赋值
                     * @return EndStatus 是否已赋值
                     */
                    bool EndStatusHasBeenSet() const;

                    /**
                     * 获取技能组名称
                     * @return SkillGroup 技能组名称
                     */
                    std::string GetSkillGroup() const;

                    /**
                     * 设置技能组名称
                     * @param SkillGroup 技能组名称
                     */
                    void SetSkillGroup(const std::string& _skillGroup);

                    /**
                     * 判断参数 SkillGroup 是否已赋值
                     * @return SkillGroup 是否已赋值
                     */
                    bool SkillGroupHasBeenSet() const;

                    /**
                     * 获取主叫归属地
                     * @return CallerLocation 主叫归属地
                     */
                    std::string GetCallerLocation() const;

                    /**
                     * 设置主叫归属地
                     * @param CallerLocation 主叫归属地
                     */
                    void SetCallerLocation(const std::string& _callerLocation);

                    /**
                     * 判断参数 CallerLocation 是否已赋值
                     * @return CallerLocation 是否已赋值
                     */
                    bool CallerLocationHasBeenSet() const;

                    /**
                     * 获取IVR 阶段耗时
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IVRDuration IVR 阶段耗时
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetIVRDuration() const;

                    /**
                     * 设置IVR 阶段耗时
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IVRDuration IVR 阶段耗时
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIVRDuration(const int64_t& _iVRDuration);

                    /**
                     * 判断参数 IVRDuration 是否已赋值
                     * @return IVRDuration 是否已赋值
                     */
                    bool IVRDurationHasBeenSet() const;

                    /**
                     * 获取振铃时间戳，UNIX 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RingTimestamp 振铃时间戳，UNIX 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetRingTimestamp() const;

                    /**
                     * 设置振铃时间戳，UNIX 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RingTimestamp 振铃时间戳，UNIX 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRingTimestamp(const int64_t& _ringTimestamp);

                    /**
                     * 判断参数 RingTimestamp 是否已赋值
                     * @return RingTimestamp 是否已赋值
                     */
                    bool RingTimestampHasBeenSet() const;

                    /**
                     * 获取接听时间戳，UNIX 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AcceptTimestamp 接听时间戳，UNIX 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetAcceptTimestamp() const;

                    /**
                     * 设置接听时间戳，UNIX 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AcceptTimestamp 接听时间戳，UNIX 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAcceptTimestamp(const int64_t& _acceptTimestamp);

                    /**
                     * 判断参数 AcceptTimestamp 是否已赋值
                     * @return AcceptTimestamp 是否已赋值
                     */
                    bool AcceptTimestampHasBeenSet() const;

                    /**
                     * 获取结束时间戳，UNIX 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndedTimestamp 结束时间戳，UNIX 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetEndedTimestamp() const;

                    /**
                     * 设置结束时间戳，UNIX 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EndedTimestamp 结束时间戳，UNIX 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEndedTimestamp(const int64_t& _endedTimestamp);

                    /**
                     * 判断参数 EndedTimestamp 是否已赋值
                     * @return EndedTimestamp 是否已赋值
                     */
                    bool EndedTimestampHasBeenSet() const;

                    /**
                     * 获取IVR 按键信息 ，e.g. ["1","2","3"]
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IVRKeyPressed IVR 按键信息 ，e.g. ["1","2","3"]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetIVRKeyPressed() const;

                    /**
                     * 设置IVR 按键信息 ，e.g. ["1","2","3"]
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IVRKeyPressed IVR 按键信息 ，e.g. ["1","2","3"]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIVRKeyPressed(const std::vector<std::string>& _iVRKeyPressed);

                    /**
                     * 判断参数 IVRKeyPressed 是否已赋值
                     * @return IVRKeyPressed 是否已赋值
                     */
                    bool IVRKeyPressedHasBeenSet() const;

                    /**
                     * 获取挂机方 seat 坐席 user 用户
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HungUpSide 挂机方 seat 坐席 user 用户
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetHungUpSide() const;

                    /**
                     * 设置挂机方 seat 坐席 user 用户
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HungUpSide 挂机方 seat 坐席 user 用户
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHungUpSide(const std::string& _hungUpSide);

                    /**
                     * 判断参数 HungUpSide 是否已赋值
                     * @return HungUpSide 是否已赋值
                     */
                    bool HungUpSideHasBeenSet() const;

                    /**
                     * 获取服务参与者列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServeParticipants 服务参与者列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ServeParticipant> GetServeParticipants() const;

                    /**
                     * 设置服务参与者列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ServeParticipants 服务参与者列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetServeParticipants(const std::vector<ServeParticipant>& _serveParticipants);

                    /**
                     * 判断参数 ServeParticipants 是否已赋值
                     * @return ServeParticipants 是否已赋值
                     */
                    bool ServeParticipantsHasBeenSet() const;

                    /**
                     * 获取技能组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SkillGroupId 技能组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetSkillGroupId() const;

                    /**
                     * 设置技能组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SkillGroupId 技能组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSkillGroupId(const int64_t& _skillGroupId);

                    /**
                     * 判断参数 SkillGroupId 是否已赋值
                     * @return SkillGroupId 是否已赋值
                     */
                    bool SkillGroupIdHasBeenSet() const;

                    /**
                     * 获取error                   错误
ok                       正常结束
unconnected      未接通
seatGiveUp         坐席未接
blackList             黑名单
seatForward       坐席转接
ivrGiveUp           IVR 期间用户放弃
waitingGiveUp   会话排队期间用户放弃
ringingGiveUp   会话振铃期间用户放弃
noSeatOnline     无坐席在线
notWorkTime     非工作时间
ivrEnd                 IVR后直接结束
unknown            未知状态
notAnswer          未接听
userReject          拒接挂断
powerOff            关机
numberNotExist  空号
busy                    通话中
outOfCredit        欠费
operatorError     运营商线路异常
callerCancel        主叫取消
notInService       不在服务区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndStatusString error                   错误
ok                       正常结束
unconnected      未接通
seatGiveUp         坐席未接
blackList             黑名单
seatForward       坐席转接
ivrGiveUp           IVR 期间用户放弃
waitingGiveUp   会话排队期间用户放弃
ringingGiveUp   会话振铃期间用户放弃
noSeatOnline     无坐席在线
notWorkTime     非工作时间
ivrEnd                 IVR后直接结束
unknown            未知状态
notAnswer          未接听
userReject          拒接挂断
powerOff            关机
numberNotExist  空号
busy                    通话中
outOfCredit        欠费
operatorError     运营商线路异常
callerCancel        主叫取消
notInService       不在服务区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEndStatusString() const;

                    /**
                     * 设置error                   错误
ok                       正常结束
unconnected      未接通
seatGiveUp         坐席未接
blackList             黑名单
seatForward       坐席转接
ivrGiveUp           IVR 期间用户放弃
waitingGiveUp   会话排队期间用户放弃
ringingGiveUp   会话振铃期间用户放弃
noSeatOnline     无坐席在线
notWorkTime     非工作时间
ivrEnd                 IVR后直接结束
unknown            未知状态
notAnswer          未接听
userReject          拒接挂断
powerOff            关机
numberNotExist  空号
busy                    通话中
outOfCredit        欠费
operatorError     运营商线路异常
callerCancel        主叫取消
notInService       不在服务区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EndStatusString error                   错误
ok                       正常结束
unconnected      未接通
seatGiveUp         坐席未接
blackList             黑名单
seatForward       坐席转接
ivrGiveUp           IVR 期间用户放弃
waitingGiveUp   会话排队期间用户放弃
ringingGiveUp   会话振铃期间用户放弃
noSeatOnline     无坐席在线
notWorkTime     非工作时间
ivrEnd                 IVR后直接结束
unknown            未知状态
notAnswer          未接听
userReject          拒接挂断
powerOff            关机
numberNotExist  空号
busy                    通话中
outOfCredit        欠费
operatorError     运营商线路异常
callerCancel        主叫取消
notInService       不在服务区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEndStatusString(const std::string& _endStatusString);

                    /**
                     * 判断参数 EndStatusString 是否已赋值
                     * @return EndStatusString 是否已赋值
                     */
                    bool EndStatusStringHasBeenSet() const;

                    /**
                     * 获取会话开始时间戳，UNIX 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTimestamp 会话开始时间戳，UNIX 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetStartTimestamp() const;

                    /**
                     * 设置会话开始时间戳，UNIX 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StartTimestamp 会话开始时间戳，UNIX 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStartTimestamp(const int64_t& _startTimestamp);

                    /**
                     * 判断参数 StartTimestamp 是否已赋值
                     * @return StartTimestamp 是否已赋值
                     */
                    bool StartTimestampHasBeenSet() const;

                    /**
                     * 获取进入排队时间，Unix 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueuedTimestamp 进入排队时间，Unix 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetQueuedTimestamp() const;

                    /**
                     * 设置进入排队时间，Unix 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param QueuedTimestamp 进入排队时间，Unix 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetQueuedTimestamp(const int64_t& _queuedTimestamp);

                    /**
                     * 判断参数 QueuedTimestamp 是否已赋值
                     * @return QueuedTimestamp 是否已赋值
                     */
                    bool QueuedTimestampHasBeenSet() const;

                    /**
                     * 获取后置IVR按键信息（e.g. [{"Key":"1","Label":"非常满意"}]）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PostIVRKeyPressed 后置IVR按键信息（e.g. [{"Key":"1","Label":"非常满意"}]）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IVRKeyPressedElement> GetPostIVRKeyPressed() const;

                    /**
                     * 设置后置IVR按键信息（e.g. [{"Key":"1","Label":"非常满意"}]）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PostIVRKeyPressed 后置IVR按键信息（e.g. [{"Key":"1","Label":"非常满意"}]）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPostIVRKeyPressed(const std::vector<IVRKeyPressedElement>& _postIVRKeyPressed);

                    /**
                     * 判断参数 PostIVRKeyPressed 是否已赋值
                     * @return PostIVRKeyPressed 是否已赋值
                     */
                    bool PostIVRKeyPressedHasBeenSet() const;

                    /**
                     * 获取排队技能组Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueuedSkillGroupId 排队技能组Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetQueuedSkillGroupId() const;

                    /**
                     * 设置排队技能组Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param QueuedSkillGroupId 排队技能组Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetQueuedSkillGroupId(const int64_t& _queuedSkillGroupId);

                    /**
                     * 判断参数 QueuedSkillGroupId 是否已赋值
                     * @return QueuedSkillGroupId 是否已赋值
                     */
                    bool QueuedSkillGroupIdHasBeenSet() const;

                    /**
                     * 获取会话 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SessionId 会话 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置会话 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SessionId 会话 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取主叫号码保护ID，开启号码保护映射功能时有效，且Caller字段置空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProtectedCaller 主叫号码保护ID，开启号码保护映射功能时有效，且Caller字段置空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProtectedCaller() const;

                    /**
                     * 设置主叫号码保护ID，开启号码保护映射功能时有效，且Caller字段置空
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProtectedCaller 主叫号码保护ID，开启号码保护映射功能时有效，且Caller字段置空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProtectedCaller(const std::string& _protectedCaller);

                    /**
                     * 判断参数 ProtectedCaller 是否已赋值
                     * @return ProtectedCaller 是否已赋值
                     */
                    bool ProtectedCallerHasBeenSet() const;

                    /**
                     * 获取被叫号码保护ID，开启号码保护映射功能时有效，且Callee字段置空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProtectedCallee 被叫号码保护ID，开启号码保护映射功能时有效，且Callee字段置空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProtectedCallee() const;

                    /**
                     * 设置被叫号码保护ID，开启号码保护映射功能时有效，且Callee字段置空
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProtectedCallee 被叫号码保护ID，开启号码保护映射功能时有效，且Callee字段置空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProtectedCallee(const std::string& _protectedCallee);

                    /**
                     * 判断参数 ProtectedCallee 是否已赋值
                     * @return ProtectedCallee 是否已赋值
                     */
                    bool ProtectedCalleeHasBeenSet() const;

                private:

                    /**
                     * 主叫号码
                     */
                    std::string m_caller;
                    bool m_callerHasBeenSet;

                    /**
                     * 被叫号码
                     */
                    std::string m_callee;
                    bool m_calleeHasBeenSet;

                    /**
                     * 呼叫发起时间戳，Unix 时间戳
                     */
                    int64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 呼入呼出方向 0 呼入 1 呼出
                     */
                    int64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * 通话时长
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 录音信息
                     */
                    std::string m_recordURL;
                    bool m_recordURLHasBeenSet;

                    /**
                     * 坐席信息
                     */
                    SeatUserInfo m_seatUser;
                    bool m_seatUserHasBeenSet;

                    /**
                     * 结束状态
0	错误
1	正常结束
2	未接通
17	坐席未接
100	黑名单
101	坐席转接
102	IVR 期间用户放弃
103	会话排队期间用户放弃
104	会话振铃期间用户放弃
105	无坐席在线
106	非工作时间
107	IVR后直接结束
201	未知状态
202	未接听
203	拒接挂断
204	关机
205	空号
206	通话中
207	欠费
208	运营商线路异常
209	主叫取消
210	不在服务区
                     */
                    int64_t m_endStatus;
                    bool m_endStatusHasBeenSet;

                    /**
                     * 技能组名称
                     */
                    std::string m_skillGroup;
                    bool m_skillGroupHasBeenSet;

                    /**
                     * 主叫归属地
                     */
                    std::string m_callerLocation;
                    bool m_callerLocationHasBeenSet;

                    /**
                     * IVR 阶段耗时
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_iVRDuration;
                    bool m_iVRDurationHasBeenSet;

                    /**
                     * 振铃时间戳，UNIX 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_ringTimestamp;
                    bool m_ringTimestampHasBeenSet;

                    /**
                     * 接听时间戳，UNIX 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_acceptTimestamp;
                    bool m_acceptTimestampHasBeenSet;

                    /**
                     * 结束时间戳，UNIX 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_endedTimestamp;
                    bool m_endedTimestampHasBeenSet;

                    /**
                     * IVR 按键信息 ，e.g. ["1","2","3"]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_iVRKeyPressed;
                    bool m_iVRKeyPressedHasBeenSet;

                    /**
                     * 挂机方 seat 坐席 user 用户
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hungUpSide;
                    bool m_hungUpSideHasBeenSet;

                    /**
                     * 服务参与者列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ServeParticipant> m_serveParticipants;
                    bool m_serveParticipantsHasBeenSet;

                    /**
                     * 技能组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_skillGroupId;
                    bool m_skillGroupIdHasBeenSet;

                    /**
                     * error                   错误
ok                       正常结束
unconnected      未接通
seatGiveUp         坐席未接
blackList             黑名单
seatForward       坐席转接
ivrGiveUp           IVR 期间用户放弃
waitingGiveUp   会话排队期间用户放弃
ringingGiveUp   会话振铃期间用户放弃
noSeatOnline     无坐席在线
notWorkTime     非工作时间
ivrEnd                 IVR后直接结束
unknown            未知状态
notAnswer          未接听
userReject          拒接挂断
powerOff            关机
numberNotExist  空号
busy                    通话中
outOfCredit        欠费
operatorError     运营商线路异常
callerCancel        主叫取消
notInService       不在服务区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endStatusString;
                    bool m_endStatusStringHasBeenSet;

                    /**
                     * 会话开始时间戳，UNIX 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_startTimestamp;
                    bool m_startTimestampHasBeenSet;

                    /**
                     * 进入排队时间，Unix 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_queuedTimestamp;
                    bool m_queuedTimestampHasBeenSet;

                    /**
                     * 后置IVR按键信息（e.g. [{"Key":"1","Label":"非常满意"}]）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IVRKeyPressedElement> m_postIVRKeyPressed;
                    bool m_postIVRKeyPressedHasBeenSet;

                    /**
                     * 排队技能组Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_queuedSkillGroupId;
                    bool m_queuedSkillGroupIdHasBeenSet;

                    /**
                     * 会话 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 主叫号码保护ID，开启号码保护映射功能时有效，且Caller字段置空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_protectedCaller;
                    bool m_protectedCallerHasBeenSet;

                    /**
                     * 被叫号码保护ID，开启号码保护映射功能时有效，且Callee字段置空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_protectedCallee;
                    bool m_protectedCalleeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_TELCDRINFO_H_
