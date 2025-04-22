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
                     * 
                     */
                    std::string GetCaller() const;

                    /**
                     * 设置主叫号码
                     * @param _caller 主叫号码
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
                     * 获取被叫号码
                     * @return Callee 被叫号码
                     * 
                     */
                    std::string GetCallee() const;

                    /**
                     * 设置被叫号码
                     * @param _callee 被叫号码
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
                     * 获取呼叫发起时间戳，Unix 时间戳
                     * @return Time 呼叫发起时间戳，Unix 时间戳
                     * 
                     */
                    int64_t GetTime() const;

                    /**
                     * 设置呼叫发起时间戳，Unix 时间戳
                     * @param _time 呼叫发起时间戳，Unix 时间戳
                     * 
                     */
                    void SetTime(const int64_t& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取呼入呼出方向 0 呼入 1 呼出
                     * @return Direction 呼入呼出方向 0 呼入 1 呼出
                     * 
                     */
                    int64_t GetDirection() const;

                    /**
                     * 设置呼入呼出方向 0 呼入 1 呼出
                     * @param _direction 呼入呼出方向 0 呼入 1 呼出
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
                     * 获取通话类型 1 呼出 2 呼入 3 音频呼入 5 预测式外呼 6 内线呼叫
                     * @return CallType 通话类型 1 呼出 2 呼入 3 音频呼入 5 预测式外呼 6 内线呼叫
                     * 
                     */
                    int64_t GetCallType() const;

                    /**
                     * 设置通话类型 1 呼出 2 呼入 3 音频呼入 5 预测式外呼 6 内线呼叫
                     * @param _callType 通话类型 1 呼出 2 呼入 3 音频呼入 5 预测式外呼 6 内线呼叫
                     * 
                     */
                    void SetCallType(const int64_t& _callType);

                    /**
                     * 判断参数 CallType 是否已赋值
                     * @return CallType 是否已赋值
                     * 
                     */
                    bool CallTypeHasBeenSet() const;

                    /**
                     * 获取通话时长
                     * @return Duration 通话时长
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置通话时长
                     * @param _duration 通话时长
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取录音信息
                     * @return RecordURL 录音信息
                     * 
                     */
                    std::string GetRecordURL() const;

                    /**
                     * 设置录音信息
                     * @param _recordURL 录音信息
                     * 
                     */
                    void SetRecordURL(const std::string& _recordURL);

                    /**
                     * 判断参数 RecordURL 是否已赋值
                     * @return RecordURL 是否已赋值
                     * 
                     */
                    bool RecordURLHasBeenSet() const;

                    /**
                     * 获取录音 ID
                     * @return RecordId 录音 ID
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置录音 ID
                     * @param _recordId 录音 ID
                     * 
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取座席信息
                     * @return SeatUser 座席信息
                     * 
                     */
                    SeatUserInfo GetSeatUser() const;

                    /**
                     * 设置座席信息
                     * @param _seatUser 座席信息
                     * 
                     */
                    void SetSeatUser(const SeatUserInfo& _seatUser);

                    /**
                     * 判断参数 SeatUser 是否已赋值
                     * @return SeatUser 是否已赋值
                     * 
                     */
                    bool SeatUserHasBeenSet() const;

                    /**
                     * 获取EndStatus与EndStatusString一一对应，具体枚举如下：

**场景	         EndStatus	EndStatusString	状态说明**

电话呼入&呼出	1	        ok	                        正常通话

电话呼入&呼出	0	        error	                异常结束

电话呼入	             102	        ivrGiveUp	        IVR 期间用户放弃

电话呼入	             103	        waitingGiveUp	       排队时用户放弃

电话呼入	             104	        ringingGiveUp	       振铃时用户放弃

电话呼入	             105	        noSeatOnline	       无座席在线

电话呼入              106	       notWorkTime	       非工作时间   

电话呼入	            107	       ivrEnd	               IVR 后直接结束

电话呼入	            100	      blackList 黑名单 

电话呼出               2	              unconnected	未接通

电话呼出             108	        restrictedCallee	被叫因高风险受限

电话呼出             109	        tooManyRequest	    外呼超频限制

电话呼出             110	        restrictedArea	    外呼区域限制

电话呼出             111	        restrictedTime	外呼时间限制
                         
电话呼出             201            unknown	未知状态

电话呼出             202            notAnswer	 被叫未接听

电话呼出            203	    userReject	被叫拒接挂断

电话呼出	          204	    powerOff	被叫关机

电话呼出           205            numberNotExist	被叫空号

电话呼出	         206	           busy	被叫忙

电话呼出   	        207	           outOfCredit	被叫欠费

电话呼出	         208	           operatorError	运营商线路异常

电话呼出         	209	           callerCancel	主叫取消

电话呼出	        210	           notInService	被叫不在服务区

电话呼入&呼出	211    clientError    客户端错误
电话呼出        212     carrierBlocked      运营商拦截
                     * @return EndStatus EndStatus与EndStatusString一一对应，具体枚举如下：

**场景	         EndStatus	EndStatusString	状态说明**

电话呼入&呼出	1	        ok	                        正常通话

电话呼入&呼出	0	        error	                异常结束

电话呼入	             102	        ivrGiveUp	        IVR 期间用户放弃

电话呼入	             103	        waitingGiveUp	       排队时用户放弃

电话呼入	             104	        ringingGiveUp	       振铃时用户放弃

电话呼入	             105	        noSeatOnline	       无座席在线

电话呼入              106	       notWorkTime	       非工作时间   

电话呼入	            107	       ivrEnd	               IVR 后直接结束

电话呼入	            100	      blackList 黑名单 

电话呼出               2	              unconnected	未接通

电话呼出             108	        restrictedCallee	被叫因高风险受限

电话呼出             109	        tooManyRequest	    外呼超频限制

电话呼出             110	        restrictedArea	    外呼区域限制

电话呼出             111	        restrictedTime	外呼时间限制
                         
电话呼出             201            unknown	未知状态

电话呼出             202            notAnswer	 被叫未接听

电话呼出            203	    userReject	被叫拒接挂断

电话呼出	          204	    powerOff	被叫关机

电话呼出           205            numberNotExist	被叫空号

电话呼出	         206	           busy	被叫忙

电话呼出   	        207	           outOfCredit	被叫欠费

电话呼出	         208	           operatorError	运营商线路异常

电话呼出         	209	           callerCancel	主叫取消

电话呼出	        210	           notInService	被叫不在服务区

电话呼入&呼出	211    clientError    客户端错误
电话呼出        212     carrierBlocked      运营商拦截
                     * 
                     */
                    int64_t GetEndStatus() const;

                    /**
                     * 设置EndStatus与EndStatusString一一对应，具体枚举如下：

**场景	         EndStatus	EndStatusString	状态说明**

电话呼入&呼出	1	        ok	                        正常通话

电话呼入&呼出	0	        error	                异常结束

电话呼入	             102	        ivrGiveUp	        IVR 期间用户放弃

电话呼入	             103	        waitingGiveUp	       排队时用户放弃

电话呼入	             104	        ringingGiveUp	       振铃时用户放弃

电话呼入	             105	        noSeatOnline	       无座席在线

电话呼入              106	       notWorkTime	       非工作时间   

电话呼入	            107	       ivrEnd	               IVR 后直接结束

电话呼入	            100	      blackList 黑名单 

电话呼出               2	              unconnected	未接通

电话呼出             108	        restrictedCallee	被叫因高风险受限

电话呼出             109	        tooManyRequest	    外呼超频限制

电话呼出             110	        restrictedArea	    外呼区域限制

电话呼出             111	        restrictedTime	外呼时间限制
                         
电话呼出             201            unknown	未知状态

电话呼出             202            notAnswer	 被叫未接听

电话呼出            203	    userReject	被叫拒接挂断

电话呼出	          204	    powerOff	被叫关机

电话呼出           205            numberNotExist	被叫空号

电话呼出	         206	           busy	被叫忙

电话呼出   	        207	           outOfCredit	被叫欠费

电话呼出	         208	           operatorError	运营商线路异常

电话呼出         	209	           callerCancel	主叫取消

电话呼出	        210	           notInService	被叫不在服务区

电话呼入&呼出	211    clientError    客户端错误
电话呼出        212     carrierBlocked      运营商拦截
                     * @param _endStatus EndStatus与EndStatusString一一对应，具体枚举如下：

**场景	         EndStatus	EndStatusString	状态说明**

电话呼入&呼出	1	        ok	                        正常通话

电话呼入&呼出	0	        error	                异常结束

电话呼入	             102	        ivrGiveUp	        IVR 期间用户放弃

电话呼入	             103	        waitingGiveUp	       排队时用户放弃

电话呼入	             104	        ringingGiveUp	       振铃时用户放弃

电话呼入	             105	        noSeatOnline	       无座席在线

电话呼入              106	       notWorkTime	       非工作时间   

电话呼入	            107	       ivrEnd	               IVR 后直接结束

电话呼入	            100	      blackList 黑名单 

电话呼出               2	              unconnected	未接通

电话呼出             108	        restrictedCallee	被叫因高风险受限

电话呼出             109	        tooManyRequest	    外呼超频限制

电话呼出             110	        restrictedArea	    外呼区域限制

电话呼出             111	        restrictedTime	外呼时间限制
                         
电话呼出             201            unknown	未知状态

电话呼出             202            notAnswer	 被叫未接听

电话呼出            203	    userReject	被叫拒接挂断

电话呼出	          204	    powerOff	被叫关机

电话呼出           205            numberNotExist	被叫空号

电话呼出	         206	           busy	被叫忙

电话呼出   	        207	           outOfCredit	被叫欠费

电话呼出	         208	           operatorError	运营商线路异常

电话呼出         	209	           callerCancel	主叫取消

电话呼出	        210	           notInService	被叫不在服务区

电话呼入&呼出	211    clientError    客户端错误
电话呼出        212     carrierBlocked      运营商拦截
                     * 
                     */
                    void SetEndStatus(const int64_t& _endStatus);

                    /**
                     * 判断参数 EndStatus 是否已赋值
                     * @return EndStatus 是否已赋值
                     * 
                     */
                    bool EndStatusHasBeenSet() const;

                    /**
                     * 获取技能组名称
                     * @return SkillGroup 技能组名称
                     * 
                     */
                    std::string GetSkillGroup() const;

                    /**
                     * 设置技能组名称
                     * @param _skillGroup 技能组名称
                     * 
                     */
                    void SetSkillGroup(const std::string& _skillGroup);

                    /**
                     * 判断参数 SkillGroup 是否已赋值
                     * @return SkillGroup 是否已赋值
                     * 
                     */
                    bool SkillGroupHasBeenSet() const;

                    /**
                     * 获取主叫归属地
                     * @return CallerLocation 主叫归属地
                     * 
                     */
                    std::string GetCallerLocation() const;

                    /**
                     * 设置主叫归属地
                     * @param _callerLocation 主叫归属地
                     * 
                     */
                    void SetCallerLocation(const std::string& _callerLocation);

                    /**
                     * 判断参数 CallerLocation 是否已赋值
                     * @return CallerLocation 是否已赋值
                     * 
                     */
                    bool CallerLocationHasBeenSet() const;

                    /**
                     * 获取IVR 阶段耗时
                     * @return IVRDuration IVR 阶段耗时
                     * 
                     */
                    int64_t GetIVRDuration() const;

                    /**
                     * 设置IVR 阶段耗时
                     * @param _iVRDuration IVR 阶段耗时
                     * 
                     */
                    void SetIVRDuration(const int64_t& _iVRDuration);

                    /**
                     * 判断参数 IVRDuration 是否已赋值
                     * @return IVRDuration 是否已赋值
                     * 
                     */
                    bool IVRDurationHasBeenSet() const;

                    /**
                     * 获取振铃时间戳，UNIX 秒级时间戳
                     * @return RingTimestamp 振铃时间戳，UNIX 秒级时间戳
                     * 
                     */
                    int64_t GetRingTimestamp() const;

                    /**
                     * 设置振铃时间戳，UNIX 秒级时间戳
                     * @param _ringTimestamp 振铃时间戳，UNIX 秒级时间戳
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
                     * 获取接听时间戳，UNIX 秒级时间戳
                     * @return AcceptTimestamp 接听时间戳，UNIX 秒级时间戳
                     * 
                     */
                    int64_t GetAcceptTimestamp() const;

                    /**
                     * 设置接听时间戳，UNIX 秒级时间戳
                     * @param _acceptTimestamp 接听时间戳，UNIX 秒级时间戳
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
                     * 获取结束时间戳，UNIX 秒级时间戳
                     * @return EndedTimestamp 结束时间戳，UNIX 秒级时间戳
                     * 
                     */
                    int64_t GetEndedTimestamp() const;

                    /**
                     * 设置结束时间戳，UNIX 秒级时间戳
                     * @param _endedTimestamp 结束时间戳，UNIX 秒级时间戳
                     * 
                     */
                    void SetEndedTimestamp(const int64_t& _endedTimestamp);

                    /**
                     * 判断参数 EndedTimestamp 是否已赋值
                     * @return EndedTimestamp 是否已赋值
                     * 
                     */
                    bool EndedTimestampHasBeenSet() const;

                    /**
                     * 获取IVR 按键信息 ，e.g. ["1","2","3"]
                     * @return IVRKeyPressed IVR 按键信息 ，e.g. ["1","2","3"]
                     * 
                     */
                    std::vector<std::string> GetIVRKeyPressed() const;

                    /**
                     * 设置IVR 按键信息 ，e.g. ["1","2","3"]
                     * @param _iVRKeyPressed IVR 按键信息 ，e.g. ["1","2","3"]
                     * 
                     */
                    void SetIVRKeyPressed(const std::vector<std::string>& _iVRKeyPressed);

                    /**
                     * 判断参数 IVRKeyPressed 是否已赋值
                     * @return IVRKeyPressed 是否已赋值
                     * 
                     */
                    bool IVRKeyPressedHasBeenSet() const;

                    /**
                     * 获取挂机方 seat 座席 user 用户 system 系统
                     * @return HungUpSide 挂机方 seat 座席 user 用户 system 系统
                     * 
                     */
                    std::string GetHungUpSide() const;

                    /**
                     * 设置挂机方 seat 座席 user 用户 system 系统
                     * @param _hungUpSide 挂机方 seat 座席 user 用户 system 系统
                     * 
                     */
                    void SetHungUpSide(const std::string& _hungUpSide);

                    /**
                     * 判断参数 HungUpSide 是否已赋值
                     * @return HungUpSide 是否已赋值
                     * 
                     */
                    bool HungUpSideHasBeenSet() const;

                    /**
                     * 获取服务参与者列表
                     * @return ServeParticipants 服务参与者列表
                     * 
                     */
                    std::vector<ServeParticipant> GetServeParticipants() const;

                    /**
                     * 设置服务参与者列表
                     * @param _serveParticipants 服务参与者列表
                     * 
                     */
                    void SetServeParticipants(const std::vector<ServeParticipant>& _serveParticipants);

                    /**
                     * 判断参数 ServeParticipants 是否已赋值
                     * @return ServeParticipants 是否已赋值
                     * 
                     */
                    bool ServeParticipantsHasBeenSet() const;

                    /**
                     * 获取技能组ID
                     * @return SkillGroupId 技能组ID
                     * 
                     */
                    int64_t GetSkillGroupId() const;

                    /**
                     * 设置技能组ID
                     * @param _skillGroupId 技能组ID
                     * 
                     */
                    void SetSkillGroupId(const int64_t& _skillGroupId);

                    /**
                     * 判断参数 SkillGroupId 是否已赋值
                     * @return SkillGroupId 是否已赋值
                     * 
                     */
                    bool SkillGroupIdHasBeenSet() const;

                    /**
                     * 获取EndStatus与EndStatusString一一对应，具体枚举如下：

**场景	         EndStatus	EndStatusString	状态说明**

电话呼入&呼出	1	        ok	                        正常通话

电话呼入&呼出	0	        error	                异常结束

电话呼入	             102	        ivrGiveUp	        IVR 期间用户放弃

电话呼入	             103	        waitingGiveUp	       排队时用户放弃

电话呼入	             104	        ringingGiveUp	       振铃时用户放弃

电话呼入	             105	        noSeatOnline	       无座席在线

电话呼入              106	       notWorkTime	       非工作时间   

电话呼入	            107	       ivrEnd	               IVR 后直接结束

电话呼入	            100	      blackList 黑名单 

电话呼出               2	              unconnected	未接通

电话呼出             108	        restrictedCallee	被叫因高风险受限

电话呼出             109	        tooManyRequest	    外呼超频限制

电话呼出             110	        restrictedArea	    外呼区域限制

电话呼出             111	        restrictedTime	外呼时间限制
                         
电话呼出             201            unknown	未知状态

电话呼出             202            notAnswer	 被叫未接听

电话呼出            203	    userReject	被叫拒接挂断

电话呼出	          204	    powerOff	被叫关机

电话呼出           205            numberNotExist	被叫空号

电话呼出	         206	           busy	被叫忙

电话呼出   	        207	           outOfCredit	被叫欠费

电话呼出	         208	           operatorError	运营商线路异常

电话呼出         	209	           callerCancel	主叫取消

电话呼出	        210	           notInService	被叫不在服务区

电话呼入&呼出	211    clientError    客户端错误
电话呼出        212     carrierBlocked      运营商拦截
                     * @return EndStatusString EndStatus与EndStatusString一一对应，具体枚举如下：

**场景	         EndStatus	EndStatusString	状态说明**

电话呼入&呼出	1	        ok	                        正常通话

电话呼入&呼出	0	        error	                异常结束

电话呼入	             102	        ivrGiveUp	        IVR 期间用户放弃

电话呼入	             103	        waitingGiveUp	       排队时用户放弃

电话呼入	             104	        ringingGiveUp	       振铃时用户放弃

电话呼入	             105	        noSeatOnline	       无座席在线

电话呼入              106	       notWorkTime	       非工作时间   

电话呼入	            107	       ivrEnd	               IVR 后直接结束

电话呼入	            100	      blackList 黑名单 

电话呼出               2	              unconnected	未接通

电话呼出             108	        restrictedCallee	被叫因高风险受限

电话呼出             109	        tooManyRequest	    外呼超频限制

电话呼出             110	        restrictedArea	    外呼区域限制

电话呼出             111	        restrictedTime	外呼时间限制
                         
电话呼出             201            unknown	未知状态

电话呼出             202            notAnswer	 被叫未接听

电话呼出            203	    userReject	被叫拒接挂断

电话呼出	          204	    powerOff	被叫关机

电话呼出           205            numberNotExist	被叫空号

电话呼出	         206	           busy	被叫忙

电话呼出   	        207	           outOfCredit	被叫欠费

电话呼出	         208	           operatorError	运营商线路异常

电话呼出         	209	           callerCancel	主叫取消

电话呼出	        210	           notInService	被叫不在服务区

电话呼入&呼出	211    clientError    客户端错误
电话呼出        212     carrierBlocked      运营商拦截
                     * 
                     */
                    std::string GetEndStatusString() const;

                    /**
                     * 设置EndStatus与EndStatusString一一对应，具体枚举如下：

**场景	         EndStatus	EndStatusString	状态说明**

电话呼入&呼出	1	        ok	                        正常通话

电话呼入&呼出	0	        error	                异常结束

电话呼入	             102	        ivrGiveUp	        IVR 期间用户放弃

电话呼入	             103	        waitingGiveUp	       排队时用户放弃

电话呼入	             104	        ringingGiveUp	       振铃时用户放弃

电话呼入	             105	        noSeatOnline	       无座席在线

电话呼入              106	       notWorkTime	       非工作时间   

电话呼入	            107	       ivrEnd	               IVR 后直接结束

电话呼入	            100	      blackList 黑名单 

电话呼出               2	              unconnected	未接通

电话呼出             108	        restrictedCallee	被叫因高风险受限

电话呼出             109	        tooManyRequest	    外呼超频限制

电话呼出             110	        restrictedArea	    外呼区域限制

电话呼出             111	        restrictedTime	外呼时间限制
                         
电话呼出             201            unknown	未知状态

电话呼出             202            notAnswer	 被叫未接听

电话呼出            203	    userReject	被叫拒接挂断

电话呼出	          204	    powerOff	被叫关机

电话呼出           205            numberNotExist	被叫空号

电话呼出	         206	           busy	被叫忙

电话呼出   	        207	           outOfCredit	被叫欠费

电话呼出	         208	           operatorError	运营商线路异常

电话呼出         	209	           callerCancel	主叫取消

电话呼出	        210	           notInService	被叫不在服务区

电话呼入&呼出	211    clientError    客户端错误
电话呼出        212     carrierBlocked      运营商拦截
                     * @param _endStatusString EndStatus与EndStatusString一一对应，具体枚举如下：

**场景	         EndStatus	EndStatusString	状态说明**

电话呼入&呼出	1	        ok	                        正常通话

电话呼入&呼出	0	        error	                异常结束

电话呼入	             102	        ivrGiveUp	        IVR 期间用户放弃

电话呼入	             103	        waitingGiveUp	       排队时用户放弃

电话呼入	             104	        ringingGiveUp	       振铃时用户放弃

电话呼入	             105	        noSeatOnline	       无座席在线

电话呼入              106	       notWorkTime	       非工作时间   

电话呼入	            107	       ivrEnd	               IVR 后直接结束

电话呼入	            100	      blackList 黑名单 

电话呼出               2	              unconnected	未接通

电话呼出             108	        restrictedCallee	被叫因高风险受限

电话呼出             109	        tooManyRequest	    外呼超频限制

电话呼出             110	        restrictedArea	    外呼区域限制

电话呼出             111	        restrictedTime	外呼时间限制
                         
电话呼出             201            unknown	未知状态

电话呼出             202            notAnswer	 被叫未接听

电话呼出            203	    userReject	被叫拒接挂断

电话呼出	          204	    powerOff	被叫关机

电话呼出           205            numberNotExist	被叫空号

电话呼出	         206	           busy	被叫忙

电话呼出   	        207	           outOfCredit	被叫欠费

电话呼出	         208	           operatorError	运营商线路异常

电话呼出         	209	           callerCancel	主叫取消

电话呼出	        210	           notInService	被叫不在服务区

电话呼入&呼出	211    clientError    客户端错误
电话呼出        212     carrierBlocked      运营商拦截
                     * 
                     */
                    void SetEndStatusString(const std::string& _endStatusString);

                    /**
                     * 判断参数 EndStatusString 是否已赋值
                     * @return EndStatusString 是否已赋值
                     * 
                     */
                    bool EndStatusStringHasBeenSet() const;

                    /**
                     * 获取会话开始时间戳，UNIX 秒级时间戳
                     * @return StartTimestamp 会话开始时间戳，UNIX 秒级时间戳
                     * 
                     */
                    int64_t GetStartTimestamp() const;

                    /**
                     * 设置会话开始时间戳，UNIX 秒级时间戳
                     * @param _startTimestamp 会话开始时间戳，UNIX 秒级时间戳
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
                     * 获取进入排队时间，Unix 秒级时间戳
                     * @return QueuedTimestamp 进入排队时间，Unix 秒级时间戳
                     * 
                     */
                    int64_t GetQueuedTimestamp() const;

                    /**
                     * 设置进入排队时间，Unix 秒级时间戳
                     * @param _queuedTimestamp 进入排队时间，Unix 秒级时间戳
                     * 
                     */
                    void SetQueuedTimestamp(const int64_t& _queuedTimestamp);

                    /**
                     * 判断参数 QueuedTimestamp 是否已赋值
                     * @return QueuedTimestamp 是否已赋值
                     * 
                     */
                    bool QueuedTimestampHasBeenSet() const;

                    /**
                     * 获取后置IVR按键信息（e.g. [{"Key":"1","Label":"非常满意"}]）
                     * @return PostIVRKeyPressed 后置IVR按键信息（e.g. [{"Key":"1","Label":"非常满意"}]）
                     * 
                     */
                    std::vector<IVRKeyPressedElement> GetPostIVRKeyPressed() const;

                    /**
                     * 设置后置IVR按键信息（e.g. [{"Key":"1","Label":"非常满意"}]）
                     * @param _postIVRKeyPressed 后置IVR按键信息（e.g. [{"Key":"1","Label":"非常满意"}]）
                     * 
                     */
                    void SetPostIVRKeyPressed(const std::vector<IVRKeyPressedElement>& _postIVRKeyPressed);

                    /**
                     * 判断参数 PostIVRKeyPressed 是否已赋值
                     * @return PostIVRKeyPressed 是否已赋值
                     * 
                     */
                    bool PostIVRKeyPressedHasBeenSet() const;

                    /**
                     * 获取排队技能组Id
                     * @return QueuedSkillGroupId 排队技能组Id
                     * 
                     */
                    int64_t GetQueuedSkillGroupId() const;

                    /**
                     * 设置排队技能组Id
                     * @param _queuedSkillGroupId 排队技能组Id
                     * 
                     */
                    void SetQueuedSkillGroupId(const int64_t& _queuedSkillGroupId);

                    /**
                     * 判断参数 QueuedSkillGroupId 是否已赋值
                     * @return QueuedSkillGroupId 是否已赋值
                     * 
                     */
                    bool QueuedSkillGroupIdHasBeenSet() const;

                    /**
                     * 获取会话 ID
                     * @return SessionId 会话 ID
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置会话 ID
                     * @param _sessionId 会话 ID
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

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

                    /**
                     * 获取客户自定义数据（User-to-User Interface）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uui 客户自定义数据（User-to-User Interface）
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetUui() const;

                    /**
                     * 设置客户自定义数据（User-to-User Interface）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uui 客户自定义数据（User-to-User Interface）
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetUui(const std::string& _uui);

                    /**
                     * 判断参数 Uui 是否已赋值
                     * @return Uui 是否已赋值
                     * @deprecated
                     */
                    bool UuiHasBeenSet() const;

                    /**
                     * 获取客户自定义数据（User-to-User Interface）
                     * @return UUI 客户自定义数据（User-to-User Interface）
                     * 
                     */
                    std::string GetUUI() const;

                    /**
                     * 设置客户自定义数据（User-to-User Interface）
                     * @param _uUI 客户自定义数据（User-to-User Interface）
                     * 
                     */
                    void SetUUI(const std::string& _uUI);

                    /**
                     * 判断参数 UUI 是否已赋值
                     * @return UUI 是否已赋值
                     * 
                     */
                    bool UUIHasBeenSet() const;

                    /**
                     * 获取IVR按键信息（e.g. [{"Key":"1","Label":"非常满意"}]）
                     * @return IVRKeyPressedEx IVR按键信息（e.g. [{"Key":"1","Label":"非常满意"}]）
                     * 
                     */
                    std::vector<IVRKeyPressedElement> GetIVRKeyPressedEx() const;

                    /**
                     * 设置IVR按键信息（e.g. [{"Key":"1","Label":"非常满意"}]）
                     * @param _iVRKeyPressedEx IVR按键信息（e.g. [{"Key":"1","Label":"非常满意"}]）
                     * 
                     */
                    void SetIVRKeyPressedEx(const std::vector<IVRKeyPressedElement>& _iVRKeyPressedEx);

                    /**
                     * 判断参数 IVRKeyPressedEx 是否已赋值
                     * @return IVRKeyPressedEx 是否已赋值
                     * 
                     */
                    bool IVRKeyPressedExHasBeenSet() const;

                    /**
                     * 获取获取录音ASR文本信息地址
                     * @return AsrUrl 获取录音ASR文本信息地址
                     * 
                     */
                    std::string GetAsrUrl() const;

                    /**
                     * 设置获取录音ASR文本信息地址
                     * @param _asrUrl 获取录音ASR文本信息地址
                     * 
                     */
                    void SetAsrUrl(const std::string& _asrUrl);

                    /**
                     * 判断参数 AsrUrl 是否已赋值
                     * @return AsrUrl 是否已赋值
                     * 
                     */
                    bool AsrUrlHasBeenSet() const;

                    /**
                     * 获取AsrUrl的状态：Complete
已完成;
Processing
正在生成中;
NotExists
无记录(未开启生成离线asr或者无套餐包)
                     * @return AsrStatus AsrUrl的状态：Complete
已完成;
Processing
正在生成中;
NotExists
无记录(未开启生成离线asr或者无套餐包)
                     * 
                     */
                    std::string GetAsrStatus() const;

                    /**
                     * 设置AsrUrl的状态：Complete
已完成;
Processing
正在生成中;
NotExists
无记录(未开启生成离线asr或者无套餐包)
                     * @param _asrStatus AsrUrl的状态：Complete
已完成;
Processing
正在生成中;
NotExists
无记录(未开启生成离线asr或者无套餐包)
                     * 
                     */
                    void SetAsrStatus(const std::string& _asrStatus);

                    /**
                     * 判断参数 AsrStatus 是否已赋值
                     * @return AsrStatus 是否已赋值
                     * 
                     */
                    bool AsrStatusHasBeenSet() const;

                    /**
                     * 获取录音转存第三方COS地址
                     * @return CustomRecordURL 录音转存第三方COS地址
                     * 
                     */
                    std::string GetCustomRecordURL() const;

                    /**
                     * 设置录音转存第三方COS地址
                     * @param _customRecordURL 录音转存第三方COS地址
                     * 
                     */
                    void SetCustomRecordURL(const std::string& _customRecordURL);

                    /**
                     * 判断参数 CustomRecordURL 是否已赋值
                     * @return CustomRecordURL 是否已赋值
                     * 
                     */
                    bool CustomRecordURLHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取排队技能组名称
                     * @return QueuedSkillGroupName 排队技能组名称
                     * 
                     */
                    std::string GetQueuedSkillGroupName() const;

                    /**
                     * 设置排队技能组名称
                     * @param _queuedSkillGroupName 排队技能组名称
                     * 
                     */
                    void SetQueuedSkillGroupName(const std::string& _queuedSkillGroupName);

                    /**
                     * 判断参数 QueuedSkillGroupName 是否已赋值
                     * @return QueuedSkillGroupName 是否已赋值
                     * 
                     */
                    bool QueuedSkillGroupNameHasBeenSet() const;

                    /**
                     * 获取通话中语音留言录音URL
                     * @return VoicemailRecordURL 通话中语音留言录音URL
                     * 
                     */
                    std::vector<std::string> GetVoicemailRecordURL() const;

                    /**
                     * 设置通话中语音留言录音URL
                     * @param _voicemailRecordURL 通话中语音留言录音URL
                     * 
                     */
                    void SetVoicemailRecordURL(const std::vector<std::string>& _voicemailRecordURL);

                    /**
                     * 判断参数 VoicemailRecordURL 是否已赋值
                     * @return VoicemailRecordURL 是否已赋值
                     * 
                     */
                    bool VoicemailRecordURLHasBeenSet() const;

                    /**
                     * 获取通话中语音留言ASR文本信息地址
                     * @return VoicemailAsrURL 通话中语音留言ASR文本信息地址
                     * 
                     */
                    std::vector<std::string> GetVoicemailAsrURL() const;

                    /**
                     * 设置通话中语音留言ASR文本信息地址
                     * @param _voicemailAsrURL 通话中语音留言ASR文本信息地址
                     * 
                     */
                    void SetVoicemailAsrURL(const std::vector<std::string>& _voicemailAsrURL);

                    /**
                     * 判断参数 VoicemailAsrURL 是否已赋值
                     * @return VoicemailAsrURL 是否已赋值
                     * 
                     */
                    bool VoicemailAsrURLHasBeenSet() const;

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
                     * 通话类型 1 呼出 2 呼入 3 音频呼入 5 预测式外呼 6 内线呼叫
                     */
                    int64_t m_callType;
                    bool m_callTypeHasBeenSet;

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
                     * 录音 ID
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * 座席信息
                     */
                    SeatUserInfo m_seatUser;
                    bool m_seatUserHasBeenSet;

                    /**
                     * EndStatus与EndStatusString一一对应，具体枚举如下：

**场景	         EndStatus	EndStatusString	状态说明**

电话呼入&呼出	1	        ok	                        正常通话

电话呼入&呼出	0	        error	                异常结束

电话呼入	             102	        ivrGiveUp	        IVR 期间用户放弃

电话呼入	             103	        waitingGiveUp	       排队时用户放弃

电话呼入	             104	        ringingGiveUp	       振铃时用户放弃

电话呼入	             105	        noSeatOnline	       无座席在线

电话呼入              106	       notWorkTime	       非工作时间   

电话呼入	            107	       ivrEnd	               IVR 后直接结束

电话呼入	            100	      blackList 黑名单 

电话呼出               2	              unconnected	未接通

电话呼出             108	        restrictedCallee	被叫因高风险受限

电话呼出             109	        tooManyRequest	    外呼超频限制

电话呼出             110	        restrictedArea	    外呼区域限制

电话呼出             111	        restrictedTime	外呼时间限制
                         
电话呼出             201            unknown	未知状态

电话呼出             202            notAnswer	 被叫未接听

电话呼出            203	    userReject	被叫拒接挂断

电话呼出	          204	    powerOff	被叫关机

电话呼出           205            numberNotExist	被叫空号

电话呼出	         206	           busy	被叫忙

电话呼出   	        207	           outOfCredit	被叫欠费

电话呼出	         208	           operatorError	运营商线路异常

电话呼出         	209	           callerCancel	主叫取消

电话呼出	        210	           notInService	被叫不在服务区

电话呼入&呼出	211    clientError    客户端错误
电话呼出        212     carrierBlocked      运营商拦截
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
                     */
                    int64_t m_iVRDuration;
                    bool m_iVRDurationHasBeenSet;

                    /**
                     * 振铃时间戳，UNIX 秒级时间戳
                     */
                    int64_t m_ringTimestamp;
                    bool m_ringTimestampHasBeenSet;

                    /**
                     * 接听时间戳，UNIX 秒级时间戳
                     */
                    int64_t m_acceptTimestamp;
                    bool m_acceptTimestampHasBeenSet;

                    /**
                     * 结束时间戳，UNIX 秒级时间戳
                     */
                    int64_t m_endedTimestamp;
                    bool m_endedTimestampHasBeenSet;

                    /**
                     * IVR 按键信息 ，e.g. ["1","2","3"]
                     */
                    std::vector<std::string> m_iVRKeyPressed;
                    bool m_iVRKeyPressedHasBeenSet;

                    /**
                     * 挂机方 seat 座席 user 用户 system 系统
                     */
                    std::string m_hungUpSide;
                    bool m_hungUpSideHasBeenSet;

                    /**
                     * 服务参与者列表
                     */
                    std::vector<ServeParticipant> m_serveParticipants;
                    bool m_serveParticipantsHasBeenSet;

                    /**
                     * 技能组ID
                     */
                    int64_t m_skillGroupId;
                    bool m_skillGroupIdHasBeenSet;

                    /**
                     * EndStatus与EndStatusString一一对应，具体枚举如下：

**场景	         EndStatus	EndStatusString	状态说明**

电话呼入&呼出	1	        ok	                        正常通话

电话呼入&呼出	0	        error	                异常结束

电话呼入	             102	        ivrGiveUp	        IVR 期间用户放弃

电话呼入	             103	        waitingGiveUp	       排队时用户放弃

电话呼入	             104	        ringingGiveUp	       振铃时用户放弃

电话呼入	             105	        noSeatOnline	       无座席在线

电话呼入              106	       notWorkTime	       非工作时间   

电话呼入	            107	       ivrEnd	               IVR 后直接结束

电话呼入	            100	      blackList 黑名单 

电话呼出               2	              unconnected	未接通

电话呼出             108	        restrictedCallee	被叫因高风险受限

电话呼出             109	        tooManyRequest	    外呼超频限制

电话呼出             110	        restrictedArea	    外呼区域限制

电话呼出             111	        restrictedTime	外呼时间限制
                         
电话呼出             201            unknown	未知状态

电话呼出             202            notAnswer	 被叫未接听

电话呼出            203	    userReject	被叫拒接挂断

电话呼出	          204	    powerOff	被叫关机

电话呼出           205            numberNotExist	被叫空号

电话呼出	         206	           busy	被叫忙

电话呼出   	        207	           outOfCredit	被叫欠费

电话呼出	         208	           operatorError	运营商线路异常

电话呼出         	209	           callerCancel	主叫取消

电话呼出	        210	           notInService	被叫不在服务区

电话呼入&呼出	211    clientError    客户端错误
电话呼出        212     carrierBlocked      运营商拦截
                     */
                    std::string m_endStatusString;
                    bool m_endStatusStringHasBeenSet;

                    /**
                     * 会话开始时间戳，UNIX 秒级时间戳
                     */
                    int64_t m_startTimestamp;
                    bool m_startTimestampHasBeenSet;

                    /**
                     * 进入排队时间，Unix 秒级时间戳
                     */
                    int64_t m_queuedTimestamp;
                    bool m_queuedTimestampHasBeenSet;

                    /**
                     * 后置IVR按键信息（e.g. [{"Key":"1","Label":"非常满意"}]）
                     */
                    std::vector<IVRKeyPressedElement> m_postIVRKeyPressed;
                    bool m_postIVRKeyPressedHasBeenSet;

                    /**
                     * 排队技能组Id
                     */
                    int64_t m_queuedSkillGroupId;
                    bool m_queuedSkillGroupIdHasBeenSet;

                    /**
                     * 会话 ID
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

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

                    /**
                     * 客户自定义数据（User-to-User Interface）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uui;
                    bool m_uuiHasBeenSet;

                    /**
                     * 客户自定义数据（User-to-User Interface）
                     */
                    std::string m_uUI;
                    bool m_uUIHasBeenSet;

                    /**
                     * IVR按键信息（e.g. [{"Key":"1","Label":"非常满意"}]）
                     */
                    std::vector<IVRKeyPressedElement> m_iVRKeyPressedEx;
                    bool m_iVRKeyPressedExHasBeenSet;

                    /**
                     * 获取录音ASR文本信息地址
                     */
                    std::string m_asrUrl;
                    bool m_asrUrlHasBeenSet;

                    /**
                     * AsrUrl的状态：Complete
已完成;
Processing
正在生成中;
NotExists
无记录(未开启生成离线asr或者无套餐包)
                     */
                    std::string m_asrStatus;
                    bool m_asrStatusHasBeenSet;

                    /**
                     * 录音转存第三方COS地址
                     */
                    std::string m_customRecordURL;
                    bool m_customRecordURLHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 排队技能组名称
                     */
                    std::string m_queuedSkillGroupName;
                    bool m_queuedSkillGroupNameHasBeenSet;

                    /**
                     * 通话中语音留言录音URL
                     */
                    std::vector<std::string> m_voicemailRecordURL;
                    bool m_voicemailRecordURLHasBeenSet;

                    /**
                     * 通话中语音留言ASR文本信息地址
                     */
                    std::vector<std::string> m_voicemailAsrURL;
                    bool m_voicemailAsrURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_TELCDRINFO_H_
