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
                     * 获取<p>主叫号码</p>
                     * @return Caller <p>主叫号码</p>
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
                     * 获取<p>被叫号码</p>
                     * @return Callee <p>被叫号码</p>
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
                     * 获取<p>通话类型 1 呼出 2 呼入 3 音频呼入 5 预测式外呼 6 内线呼叫</p>
                     * @return CallType <p>通话类型 1 呼出 2 呼入 3 音频呼入 5 预测式外呼 6 内线呼叫</p>
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
                     * 获取<p>开始时间戳，Unix 秒级时间戳</p>
                     * @return StartTimeStamp <p>开始时间戳，Unix 秒级时间戳</p>
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
                     * 获取<p>振铃时间戳，UNIX 秒级时间戳</p>
                     * @return RingTimestamp <p>振铃时间戳，UNIX 秒级时间戳</p>
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
                     * 获取<p>接听时间戳，UNIX 秒级时间戳</p>
                     * @return AcceptTimestamp <p>接听时间戳，UNIX 秒级时间戳</p>
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
                     * 获取<p>结束时间戳，UNIX 秒级时间戳</p>
                     * @return EndedTimestamp <p>结束时间戳，UNIX 秒级时间戳</p>
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
                     * 获取<p>进入排队时间，Unix 秒级时间戳</p>
                     * @return QueuedTimestamp <p>进入排队时间，Unix 秒级时间戳</p>
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
                     * 获取<p>座席账号</p>
                     * @return StaffUserId <p>座席账号</p>
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
                     * 获取<p>参考 DescribeTelCdr 接口 EndStatus 字段</p>
                     * @return EndStatus <p>参考 DescribeTelCdr 接口 EndStatus 字段</p>
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
                     * 获取<p>排队技能组 ID</p>
                     * @return QueuedSkillGroupId <p>排队技能组 ID</p>
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
                     * 获取<p>排队技能组名称</p>
                     * @return QueuedSkillGroupName <p>排队技能组名称</p>
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
                     * 获取<p>录音链接，带鉴权和有效期，获取之后请在24 小时内拉取，不要持久化此链接。如此链接已过期，请重新调用此接口获取新的链接</p>
                     * @return RecordURL <p>录音链接，带鉴权和有效期，获取之后请在24 小时内拉取，不要持久化此链接。如此链接已过期，请重新调用此接口获取新的链接</p>
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
                     * 获取<p>录音转存第三方 COS 链接</p>
                     * @return CustomRecordURL <p>录音转存第三方 COS 链接</p>
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
                     * 获取<p>录音文本信息链接，带鉴权和有效期，获取之后请在24 小时拉取，不要持久化此链接。如此链接已过期，请重新调用此接口获取新的链接</p>
                     * @return AsrURL <p>录音文本信息链接，带鉴权和有效期，获取之后请在24 小时拉取，不要持久化此链接。如此链接已过期，请重新调用此接口获取新的链接</p>
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
                     * 获取<p>语音留言录音链接</p>
                     * @return VoicemailRecordURL <p>语音留言录音链接</p>
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
                     * 获取<p>语音留言录音文本信息链接，需在控制台购买离线语音识别套餐包并开启离线语音识别开关</p>
                     * @return VoicemailAsrURL <p>语音留言录音文本信息链接，需在控制台购买离线语音识别套餐包并开启离线语音识别开关</p>
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
                     * 获取<p>IVR 按键信息</p>
                     * @return IVRKeyPressed <p>IVR 按键信息</p>
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
                     * 获取<p>满意度按键信息</p>
                     * @return PostIVRKeyPressed <p>满意度按键信息</p>
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
                     * 获取<p>挂机方 seat 座席 user 用户 system 系统</p>
                     * @return HungUpSide <p>挂机方 seat 座席 user 用户 system 系统</p>
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
                     * 获取<p>客户自定义数据（User-to-User Interface）</p>
                     * @return UUI <p>客户自定义数据（User-to-User Interface）</p>
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
                     * 获取<p>通话中的事件列表</p>
                     * @return Events <p>通话中的事件列表</p>
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
                     * 获取<p>服务参与者列表</p>
                     * @return ServeParticipants <p>服务参与者列表</p>
                     * 
                     */
                    std::vector<ServeParticipant> GetServeParticipants() const;

                    /**
                     * 判断参数 ServeParticipants 是否已赋值
                     * @return ServeParticipants 是否已赋值
                     * 
                     */
                    bool ServeParticipantsHasBeenSet() const;

                    /**
                     * 获取<p>接通后系统挂断原因状态码</p><p><a href="https://cloud.tencent.com/document/product/679/123938">详见</a></p>
                     * @return SysHangupReason <p>接通后系统挂断原因状态码</p><p><a href="https://cloud.tencent.com/document/product/679/123938">详见</a></p>
                     * 
                     */
                    int64_t GetSysHangupReason() const;

                    /**
                     * 判断参数 SysHangupReason 是否已赋值
                     * @return SysHangupReason 是否已赋值
                     * 
                     */
                    bool SysHangupReasonHasBeenSet() const;

                    /**
                     * 获取<p>接通后系统挂断原因</p><p><a href="https://cloud.tencent.com/document/product/679/123938">详见</a></p>
                     * @return SysHangupReasonString <p>接通后系统挂断原因</p><p><a href="https://cloud.tencent.com/document/product/679/123938">详见</a></p>
                     * 
                     */
                    std::string GetSysHangupReasonString() const;

                    /**
                     * 判断参数 SysHangupReasonString 是否已赋值
                     * @return SysHangupReasonString 是否已赋值
                     * 
                     */
                    bool SysHangupReasonStringHasBeenSet() const;

                private:

                    /**
                     * <p>主叫号码</p>
                     */
                    std::string m_caller;
                    bool m_callerHasBeenSet;

                    /**
                     * <p>被叫号码</p>
                     */
                    std::string m_callee;
                    bool m_calleeHasBeenSet;

                    /**
                     * <p>通话类型 1 呼出 2 呼入 3 音频呼入 5 预测式外呼 6 内线呼叫</p>
                     */
                    int64_t m_callType;
                    bool m_callTypeHasBeenSet;

                    /**
                     * <p>开始时间戳，Unix 秒级时间戳</p>
                     */
                    int64_t m_startTimeStamp;
                    bool m_startTimeStampHasBeenSet;

                    /**
                     * <p>振铃时间戳，UNIX 秒级时间戳</p>
                     */
                    int64_t m_ringTimestamp;
                    bool m_ringTimestampHasBeenSet;

                    /**
                     * <p>接听时间戳，UNIX 秒级时间戳</p>
                     */
                    int64_t m_acceptTimestamp;
                    bool m_acceptTimestampHasBeenSet;

                    /**
                     * <p>结束时间戳，UNIX 秒级时间戳</p>
                     */
                    int64_t m_endedTimestamp;
                    bool m_endedTimestampHasBeenSet;

                    /**
                     * <p>进入排队时间，Unix 秒级时间戳</p>
                     */
                    int64_t m_queuedTimestamp;
                    bool m_queuedTimestampHasBeenSet;

                    /**
                     * <p>座席账号</p>
                     */
                    std::string m_staffUserId;
                    bool m_staffUserIdHasBeenSet;

                    /**
                     * <p>参考 DescribeTelCdr 接口 EndStatus 字段</p>
                     */
                    int64_t m_endStatus;
                    bool m_endStatusHasBeenSet;

                    /**
                     * <p>排队技能组 ID</p>
                     */
                    int64_t m_queuedSkillGroupId;
                    bool m_queuedSkillGroupIdHasBeenSet;

                    /**
                     * <p>排队技能组名称</p>
                     */
                    std::string m_queuedSkillGroupName;
                    bool m_queuedSkillGroupNameHasBeenSet;

                    /**
                     * <p>录音链接，带鉴权和有效期，获取之后请在24 小时内拉取，不要持久化此链接。如此链接已过期，请重新调用此接口获取新的链接</p>
                     */
                    std::string m_recordURL;
                    bool m_recordURLHasBeenSet;

                    /**
                     * <p>录音转存第三方 COS 链接</p>
                     */
                    std::string m_customRecordURL;
                    bool m_customRecordURLHasBeenSet;

                    /**
                     * <p>录音文本信息链接，带鉴权和有效期，获取之后请在24 小时拉取，不要持久化此链接。如此链接已过期，请重新调用此接口获取新的链接</p>
                     */
                    std::string m_asrURL;
                    bool m_asrURLHasBeenSet;

                    /**
                     * <p>语音留言录音链接</p>
                     */
                    std::vector<std::string> m_voicemailRecordURL;
                    bool m_voicemailRecordURLHasBeenSet;

                    /**
                     * <p>语音留言录音文本信息链接，需在控制台购买离线语音识别套餐包并开启离线语音识别开关</p>
                     */
                    std::vector<std::string> m_voicemailAsrURL;
                    bool m_voicemailAsrURLHasBeenSet;

                    /**
                     * <p>IVR 按键信息</p>
                     */
                    std::vector<IVRKeyPressedElement> m_iVRKeyPressed;
                    bool m_iVRKeyPressedHasBeenSet;

                    /**
                     * <p>满意度按键信息</p>
                     */
                    std::vector<IVRKeyPressedElement> m_postIVRKeyPressed;
                    bool m_postIVRKeyPressedHasBeenSet;

                    /**
                     * <p>挂机方 seat 座席 user 用户 system 系统</p>
                     */
                    std::string m_hungUpSide;
                    bool m_hungUpSideHasBeenSet;

                    /**
                     * <p>客户自定义数据（User-to-User Interface）</p>
                     */
                    std::string m_uUI;
                    bool m_uUIHasBeenSet;

                    /**
                     * <p>通话中的事件列表</p>
                     */
                    std::vector<SessionEvent> m_events;
                    bool m_eventsHasBeenSet;

                    /**
                     * <p>服务参与者列表</p>
                     */
                    std::vector<ServeParticipant> m_serveParticipants;
                    bool m_serveParticipantsHasBeenSet;

                    /**
                     * <p>接通后系统挂断原因状态码</p><p><a href="https://cloud.tencent.com/document/product/679/123938">详见</a></p>
                     */
                    int64_t m_sysHangupReason;
                    bool m_sysHangupReasonHasBeenSet;

                    /**
                     * <p>接通后系统挂断原因</p><p><a href="https://cloud.tencent.com/document/product/679/123938">详见</a></p>
                     */
                    std::string m_sysHangupReasonString;
                    bool m_sysHangupReasonStringHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBESESSIONDETAILRESPONSE_H_
