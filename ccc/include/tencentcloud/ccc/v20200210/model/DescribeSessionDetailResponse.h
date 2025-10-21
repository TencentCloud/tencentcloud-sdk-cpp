/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBESESSIONDETAILRESPONSE_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBESESSIONDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/IVRKeyPressedElement.h>
#include <tencentcloud/ccc/v20200210/model/SessionEvent.h>
#include <tencentcloud/ccc/v20200210/model/ServeParticipant.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribeSessionDetail返回参数结构体
                */
                class DescribeSessionDetailResponse : public AbstractModel
                {
                public:
                    DescribeSessionDetailResponse();
                    ~DescribeSessionDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取主叫号码
                     * @return Caller 主叫号码
                     * 
                     */
                    std::string GetCaller() const;

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
                     * 判断参数 Callee 是否已赋值
                     * @return Callee 是否已赋值
                     * 
                     */
                    bool CalleeHasBeenSet() const;

                    /**
                     * 获取通话类型 1 呼出 2 呼入 3 音频呼入 5 预测式外呼 6 内线呼叫
                     * @return CallType 通话类型 1 呼出 2 呼入 3 音频呼入 5 预测式外呼 6 内线呼叫
                     * 
                     */
                    int64_t GetCallType() const;

                    /**
                     * 判断参数 CallType 是否已赋值
                     * @return CallType 是否已赋值
                     * 
                     */
                    bool CallTypeHasBeenSet() const;

                    /**
                     * 获取开始时间戳，Unix 秒级时间戳
                     * @return StartTimeStamp 开始时间戳，Unix 秒级时间戳
                     * 
                     */
                    int64_t GetStartTimeStamp() const;

                    /**
                     * 判断参数 StartTimeStamp 是否已赋值
                     * @return StartTimeStamp 是否已赋值
                     * 
                     */
                    bool StartTimeStampHasBeenSet() const;

                    /**
                     * 获取振铃时间戳，UNIX 秒级时间戳
                     * @return RingTimestamp 振铃时间戳，UNIX 秒级时间戳
                     * 
                     */
                    int64_t GetRingTimestamp() const;

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
                     * 判断参数 EndedTimestamp 是否已赋值
                     * @return EndedTimestamp 是否已赋值
                     * 
                     */
                    bool EndedTimestampHasBeenSet() const;

                    /**
                     * 获取进入排队时间，Unix 秒级时间戳
                     * @return QueuedTimestamp 进入排队时间，Unix 秒级时间戳
                     * 
                     */
                    int64_t GetQueuedTimestamp() const;

                    /**
                     * 判断参数 QueuedTimestamp 是否已赋值
                     * @return QueuedTimestamp 是否已赋值
                     * 
                     */
                    bool QueuedTimestampHasBeenSet() const;

                    /**
                     * 获取座席账号
                     * @return StaffUserId 座席账号
                     * 
                     */
                    std::string GetStaffUserId() const;

                    /**
                     * 判断参数 StaffUserId 是否已赋值
                     * @return StaffUserId 是否已赋值
                     * 
                     */
                    bool StaffUserIdHasBeenSet() const;

                    /**
                     * 获取参考 DescribeTelCdr 接口 EndStatus 字段
                     * @return EndStatus 参考 DescribeTelCdr 接口 EndStatus 字段
                     * 
                     */
                    int64_t GetEndStatus() const;

                    /**
                     * 判断参数 EndStatus 是否已赋值
                     * @return EndStatus 是否已赋值
                     * 
                     */
                    bool EndStatusHasBeenSet() const;

                    /**
                     * 获取排队技能组 ID
                     * @return QueuedSkillGroupId 排队技能组 ID
                     * 
                     */
                    int64_t GetQueuedSkillGroupId() const;

                    /**
                     * 判断参数 QueuedSkillGroupId 是否已赋值
                     * @return QueuedSkillGroupId 是否已赋值
                     * 
                     */
                    bool QueuedSkillGroupIdHasBeenSet() const;

                    /**
                     * 获取排队技能组名称
                     * @return QueuedSkillGroupName 排队技能组名称
                     * 
                     */
                    std::string GetQueuedSkillGroupName() const;

                    /**
                     * 判断参数 QueuedSkillGroupName 是否已赋值
                     * @return QueuedSkillGroupName 是否已赋值
                     * 
                     */
                    bool QueuedSkillGroupNameHasBeenSet() const;

                    /**
                     * 获取录音链接，带鉴权和有效期，获取之后请在短时间内拉取，不要持久化此链接
                     * @return RecordURL 录音链接，带鉴权和有效期，获取之后请在短时间内拉取，不要持久化此链接
                     * 
                     */
                    std::string GetRecordURL() const;

                    /**
                     * 判断参数 RecordURL 是否已赋值
                     * @return RecordURL 是否已赋值
                     * 
                     */
                    bool RecordURLHasBeenSet() const;

                    /**
                     * 获取录音转存第三方 COS 链接
                     * @return CustomRecordURL 录音转存第三方 COS 链接
                     * 
                     */
                    std::string GetCustomRecordURL() const;

                    /**
                     * 判断参数 CustomRecordURL 是否已赋值
                     * @return CustomRecordURL 是否已赋值
                     * 
                     */
                    bool CustomRecordURLHasBeenSet() const;

                    /**
                     * 获取录音文本信息链接，带鉴权和有效期，获取之后请在短时间内拉取，不要持久化此链接
                     * @return AsrURL 录音文本信息链接，带鉴权和有效期，获取之后请在短时间内拉取，不要持久化此链接
                     * 
                     */
                    std::string GetAsrURL() const;

                    /**
                     * 判断参数 AsrURL 是否已赋值
                     * @return AsrURL 是否已赋值
                     * 
                     */
                    bool AsrURLHasBeenSet() const;

                    /**
                     * 获取语音留言录音链接
                     * @return VoicemailRecordURL 语音留言录音链接
                     * 
                     */
                    std::vector<std::string> GetVoicemailRecordURL() const;

                    /**
                     * 判断参数 VoicemailRecordURL 是否已赋值
                     * @return VoicemailRecordURL 是否已赋值
                     * 
                     */
                    bool VoicemailRecordURLHasBeenSet() const;

                    /**
                     * 获取语音留言录音文本信息链接，需在控制台购买离线语音识别套餐包并开启离线语音识别开关
                     * @return VoicemailAsrURL 语音留言录音文本信息链接，需在控制台购买离线语音识别套餐包并开启离线语音识别开关
                     * 
                     */
                    std::vector<std::string> GetVoicemailAsrURL() const;

                    /**
                     * 判断参数 VoicemailAsrURL 是否已赋值
                     * @return VoicemailAsrURL 是否已赋值
                     * 
                     */
                    bool VoicemailAsrURLHasBeenSet() const;

                    /**
                     * 获取IVR 按键信息
                     * @return IVRKeyPressed IVR 按键信息
                     * 
                     */
                    std::vector<IVRKeyPressedElement> GetIVRKeyPressed() const;

                    /**
                     * 判断参数 IVRKeyPressed 是否已赋值
                     * @return IVRKeyPressed 是否已赋值
                     * 
                     */
                    bool IVRKeyPressedHasBeenSet() const;

                    /**
                     * 获取满意度按键信息
                     * @return PostIVRKeyPressed 满意度按键信息
                     * 
                     */
                    std::vector<IVRKeyPressedElement> GetPostIVRKeyPressed() const;

                    /**
                     * 判断参数 PostIVRKeyPressed 是否已赋值
                     * @return PostIVRKeyPressed 是否已赋值
                     * 
                     */
                    bool PostIVRKeyPressedHasBeenSet() const;

                    /**
                     * 获取挂机方 seat 座席 user 用户 system 系统
                     * @return HungUpSide 挂机方 seat 座席 user 用户 system 系统
                     * 
                     */
                    std::string GetHungUpSide() const;

                    /**
                     * 判断参数 HungUpSide 是否已赋值
                     * @return HungUpSide 是否已赋值
                     * 
                     */
                    bool HungUpSideHasBeenSet() const;

                    /**
                     * 获取客户自定义数据（User-to-User Interface）
                     * @return UUI 客户自定义数据（User-to-User Interface）
                     * 
                     */
                    std::string GetUUI() const;

                    /**
                     * 判断参数 UUI 是否已赋值
                     * @return UUI 是否已赋值
                     * 
                     */
                    bool UUIHasBeenSet() const;

                    /**
                     * 获取通话中的事件列表
                     * @return Events 通话中的事件列表
                     * 
                     */
                    std::vector<SessionEvent> GetEvents() const;

                    /**
                     * 判断参数 Events 是否已赋值
                     * @return Events 是否已赋值
                     * 
                     */
                    bool EventsHasBeenSet() const;

                    /**
                     * 获取服务参与者列表
                     * @return ServeParticipants 服务参与者列表
                     * 
                     */
                    std::vector<ServeParticipant> GetServeParticipants() const;

                    /**
                     * 判断参数 ServeParticipants 是否已赋值
                     * @return ServeParticipants 是否已赋值
                     * 
                     */
                    bool ServeParticipantsHasBeenSet() const;

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
                     * 通话类型 1 呼出 2 呼入 3 音频呼入 5 预测式外呼 6 内线呼叫
                     */
                    int64_t m_callType;
                    bool m_callTypeHasBeenSet;

                    /**
                     * 开始时间戳，Unix 秒级时间戳
                     */
                    int64_t m_startTimeStamp;
                    bool m_startTimeStampHasBeenSet;

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
                     * 进入排队时间，Unix 秒级时间戳
                     */
                    int64_t m_queuedTimestamp;
                    bool m_queuedTimestampHasBeenSet;

                    /**
                     * 座席账号
                     */
                    std::string m_staffUserId;
                    bool m_staffUserIdHasBeenSet;

                    /**
                     * 参考 DescribeTelCdr 接口 EndStatus 字段
                     */
                    int64_t m_endStatus;
                    bool m_endStatusHasBeenSet;

                    /**
                     * 排队技能组 ID
                     */
                    int64_t m_queuedSkillGroupId;
                    bool m_queuedSkillGroupIdHasBeenSet;

                    /**
                     * 排队技能组名称
                     */
                    std::string m_queuedSkillGroupName;
                    bool m_queuedSkillGroupNameHasBeenSet;

                    /**
                     * 录音链接，带鉴权和有效期，获取之后请在短时间内拉取，不要持久化此链接
                     */
                    std::string m_recordURL;
                    bool m_recordURLHasBeenSet;

                    /**
                     * 录音转存第三方 COS 链接
                     */
                    std::string m_customRecordURL;
                    bool m_customRecordURLHasBeenSet;

                    /**
                     * 录音文本信息链接，带鉴权和有效期，获取之后请在短时间内拉取，不要持久化此链接
                     */
                    std::string m_asrURL;
                    bool m_asrURLHasBeenSet;

                    /**
                     * 语音留言录音链接
                     */
                    std::vector<std::string> m_voicemailRecordURL;
                    bool m_voicemailRecordURLHasBeenSet;

                    /**
                     * 语音留言录音文本信息链接，需在控制台购买离线语音识别套餐包并开启离线语音识别开关
                     */
                    std::vector<std::string> m_voicemailAsrURL;
                    bool m_voicemailAsrURLHasBeenSet;

                    /**
                     * IVR 按键信息
                     */
                    std::vector<IVRKeyPressedElement> m_iVRKeyPressed;
                    bool m_iVRKeyPressedHasBeenSet;

                    /**
                     * 满意度按键信息
                     */
                    std::vector<IVRKeyPressedElement> m_postIVRKeyPressed;
                    bool m_postIVRKeyPressedHasBeenSet;

                    /**
                     * 挂机方 seat 座席 user 用户 system 系统
                     */
                    std::string m_hungUpSide;
                    bool m_hungUpSideHasBeenSet;

                    /**
                     * 客户自定义数据（User-to-User Interface）
                     */
                    std::string m_uUI;
                    bool m_uUIHasBeenSet;

                    /**
                     * 通话中的事件列表
                     */
                    std::vector<SessionEvent> m_events;
                    bool m_eventsHasBeenSet;

                    /**
                     * 服务参与者列表
                     */
                    std::vector<ServeParticipant> m_serveParticipants;
                    bool m_serveParticipantsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBESESSIONDETAILRESPONSE_H_
