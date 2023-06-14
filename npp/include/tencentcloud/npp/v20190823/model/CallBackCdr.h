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

#ifndef TENCENTCLOUD_NPP_V20190823_MODEL_CALLBACKCDR_H_
#define TENCENTCLOUD_NPP_V20190823_MODEL_CALLBACKCDR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Npp
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * 话单详情
                */
                class CallBackCdr : public AbstractModel
                {
                public:
                    CallBackCdr();
                    ~CallBackCdr() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取呼叫通话 ID
                     * @return CallId 呼叫通话 ID
                     * 
                     */
                    std::string GetCallId() const;

                    /**
                     * 设置呼叫通话 ID
                     * @param _callId 呼叫通话 ID
                     * 
                     */
                    void SetCallId(const std::string& _callId);

                    /**
                     * 判断参数 CallId 是否已赋值
                     * @return CallId 是否已赋值
                     * 
                     */
                    bool CallIdHasBeenSet() const;

                    /**
                     * 获取主叫号码
                     * @return Src 主叫号码
                     * 
                     */
                    std::string GetSrc() const;

                    /**
                     * 设置主叫号码
                     * @param _src 主叫号码
                     * 
                     */
                    void SetSrc(const std::string& _src);

                    /**
                     * 判断参数 Src 是否已赋值
                     * @return Src 是否已赋值
                     * 
                     */
                    bool SrcHasBeenSet() const;

                    /**
                     * 获取被叫号码
                     * @return Dst 被叫号码
                     * 
                     */
                    std::string GetDst() const;

                    /**
                     * 设置被叫号码
                     * @param _dst 被叫号码
                     * 
                     */
                    void SetDst(const std::string& _dst);

                    /**
                     * 判断参数 Dst 是否已赋值
                     * @return Dst 是否已赋值
                     * 
                     */
                    bool DstHasBeenSet() const;

                    /**
                     * 获取主叫呼叫开始时间
                     * @return StartSrcCallTime 主叫呼叫开始时间
                     * 
                     */
                    std::string GetStartSrcCallTime() const;

                    /**
                     * 设置主叫呼叫开始时间
                     * @param _startSrcCallTime 主叫呼叫开始时间
                     * 
                     */
                    void SetStartSrcCallTime(const std::string& _startSrcCallTime);

                    /**
                     * 判断参数 StartSrcCallTime 是否已赋值
                     * @return StartSrcCallTime 是否已赋值
                     * 
                     */
                    bool StartSrcCallTimeHasBeenSet() const;

                    /**
                     * 获取主叫响铃开始时间
                     * @return StartSrcRingTime 主叫响铃开始时间
                     * 
                     */
                    std::string GetStartSrcRingTime() const;

                    /**
                     * 设置主叫响铃开始时间
                     * @param _startSrcRingTime 主叫响铃开始时间
                     * 
                     */
                    void SetStartSrcRingTime(const std::string& _startSrcRingTime);

                    /**
                     * 判断参数 StartSrcRingTime 是否已赋值
                     * @return StartSrcRingTime 是否已赋值
                     * 
                     */
                    bool StartSrcRingTimeHasBeenSet() const;

                    /**
                     * 获取主叫接听时间
                     * @return SrcAcceptTime 主叫接听时间
                     * 
                     */
                    std::string GetSrcAcceptTime() const;

                    /**
                     * 设置主叫接听时间
                     * @param _srcAcceptTime 主叫接听时间
                     * 
                     */
                    void SetSrcAcceptTime(const std::string& _srcAcceptTime);

                    /**
                     * 判断参数 SrcAcceptTime 是否已赋值
                     * @return SrcAcceptTime 是否已赋值
                     * 
                     */
                    bool SrcAcceptTimeHasBeenSet() const;

                    /**
                     * 获取被叫呼叫开始时间
                     * @return StartDstCallTime 被叫呼叫开始时间
                     * 
                     */
                    std::string GetStartDstCallTime() const;

                    /**
                     * 设置被叫呼叫开始时间
                     * @param _startDstCallTime 被叫呼叫开始时间
                     * 
                     */
                    void SetStartDstCallTime(const std::string& _startDstCallTime);

                    /**
                     * 判断参数 StartDstCallTime 是否已赋值
                     * @return StartDstCallTime 是否已赋值
                     * 
                     */
                    bool StartDstCallTimeHasBeenSet() const;

                    /**
                     * 获取被叫响铃开始时间
                     * @return StartDstRingTime 被叫响铃开始时间
                     * 
                     */
                    std::string GetStartDstRingTime() const;

                    /**
                     * 设置被叫响铃开始时间
                     * @param _startDstRingTime 被叫响铃开始时间
                     * 
                     */
                    void SetStartDstRingTime(const std::string& _startDstRingTime);

                    /**
                     * 判断参数 StartDstRingTime 是否已赋值
                     * @return StartDstRingTime 是否已赋值
                     * 
                     */
                    bool StartDstRingTimeHasBeenSet() const;

                    /**
                     * 获取被叫接听时间
                     * @return DstAcceptTime 被叫接听时间
                     * 
                     */
                    std::string GetDstAcceptTime() const;

                    /**
                     * 设置被叫接听时间
                     * @param _dstAcceptTime 被叫接听时间
                     * 
                     */
                    void SetDstAcceptTime(const std::string& _dstAcceptTime);

                    /**
                     * 判断参数 DstAcceptTime 是否已赋值
                     * @return DstAcceptTime 是否已赋值
                     * 
                     */
                    bool DstAcceptTimeHasBeenSet() const;

                    /**
                     * 获取用户挂机通话结束时间
                     * @return EndCallTime 用户挂机通话结束时间
                     * 
                     */
                    std::string GetEndCallTime() const;

                    /**
                     * 设置用户挂机通话结束时间
                     * @param _endCallTime 用户挂机通话结束时间
                     * 
                     */
                    void SetEndCallTime(const std::string& _endCallTime);

                    /**
                     * 判断参数 EndCallTime 是否已赋值
                     * @return EndCallTime 是否已赋值
                     * 
                     */
                    bool EndCallTimeHasBeenSet() const;

                    /**
                     * 获取通话最后状态：0：未知状态 1：正常通话 2：主叫未接 3：主叫接听，被叫未接 4：主叫未接通 5：被叫未接通
                     * @return CallEndStatus 通话最后状态：0：未知状态 1：正常通话 2：主叫未接 3：主叫接听，被叫未接 4：主叫未接通 5：被叫未接通
                     * 
                     */
                    std::string GetCallEndStatus() const;

                    /**
                     * 设置通话最后状态：0：未知状态 1：正常通话 2：主叫未接 3：主叫接听，被叫未接 4：主叫未接通 5：被叫未接通
                     * @param _callEndStatus 通话最后状态：0：未知状态 1：正常通话 2：主叫未接 3：主叫接听，被叫未接 4：主叫未接通 5：被叫未接通
                     * 
                     */
                    void SetCallEndStatus(const std::string& _callEndStatus);

                    /**
                     * 判断参数 CallEndStatus 是否已赋值
                     * @return CallEndStatus 是否已赋值
                     * 
                     */
                    bool CallEndStatusHasBeenSet() const;

                    /**
                     * 获取通话计费时间
                     * @return Duration 通话计费时间
                     * 
                     */
                    std::string GetDuration() const;

                    /**
                     * 设置通话计费时间
                     * @param _duration 通话计费时间
                     * 
                     */
                    void SetDuration(const std::string& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取录音 URL，如果不录音或录音失败，该值为空
                     * @return RecordUrl 录音 URL，如果不录音或录音失败，该值为空
                     * 
                     */
                    std::string GetRecordUrl() const;

                    /**
                     * 设置录音 URL，如果不录音或录音失败，该值为空
                     * @param _recordUrl 录音 URL，如果不录音或录音失败，该值为空
                     * 
                     */
                    void SetRecordUrl(const std::string& _recordUrl);

                    /**
                     * 判断参数 RecordUrl 是否已赋值
                     * @return RecordUrl 是否已赋值
                     * 
                     */
                    bool RecordUrlHasBeenSet() const;

                    /**
                     * 获取通话类型(1: VOIP 2:IP TO PSTN 3: PSTN TO PSTN)，如果话单中没有该字段，默认值为回拨 3 (PSTN TO PSTN)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CallType 通话类型(1: VOIP 2:IP TO PSTN 3: PSTN TO PSTN)，如果话单中没有该字段，默认值为回拨 3 (PSTN TO PSTN)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCallType() const;

                    /**
                     * 设置通话类型(1: VOIP 2:IP TO PSTN 3: PSTN TO PSTN)，如果话单中没有该字段，默认值为回拨 3 (PSTN TO PSTN)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _callType 通话类型(1: VOIP 2:IP TO PSTN 3: PSTN TO PSTN)，如果话单中没有该字段，默认值为回拨 3 (PSTN TO PSTN)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCallType(const std::string& _callType);

                    /**
                     * 判断参数 CallType 是否已赋值
                     * @return CallType 是否已赋值
                     * 
                     */
                    bool CallTypeHasBeenSet() const;

                    /**
                     * 获取同回拨请求中的 bizId，如果回拨请求中带 bizId 会有该字段返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BizId 同回拨请求中的 bizId，如果回拨请求中带 bizId 会有该字段返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBizId() const;

                    /**
                     * 设置同回拨请求中的 bizId，如果回拨请求中带 bizId 会有该字段返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bizId 同回拨请求中的 bizId，如果回拨请求中带 bizId 会有该字段返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBizId(const std::string& _bizId);

                    /**
                     * 判断参数 BizId 是否已赋值
                     * @return BizId 是否已赋值
                     * 
                     */
                    bool BizIdHasBeenSet() const;

                    /**
                     * 获取订单 ID,最大长度不超过 64 个字节，对于一些有订单状态 App 相关应用（如达人帮接入 App 应用)，该字段只在帐单中带上，其它回调不附带该字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrderId 订单 ID,最大长度不超过 64 个字节，对于一些有订单状态 App 相关应用（如达人帮接入 App 应用)，该字段只在帐单中带上，其它回调不附带该字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置订单 ID,最大长度不超过 64 个字节，对于一些有订单状态 App 相关应用（如达人帮接入 App 应用)，该字段只在帐单中带上，其它回调不附带该字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _orderId 订单 ID,最大长度不超过 64 个字节，对于一些有订单状态 App 相关应用（如达人帮接入 App 应用)，该字段只在帐单中带上，其它回调不附带该字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                private:

                    /**
                     * 呼叫通话 ID
                     */
                    std::string m_callId;
                    bool m_callIdHasBeenSet;

                    /**
                     * 主叫号码
                     */
                    std::string m_src;
                    bool m_srcHasBeenSet;

                    /**
                     * 被叫号码
                     */
                    std::string m_dst;
                    bool m_dstHasBeenSet;

                    /**
                     * 主叫呼叫开始时间
                     */
                    std::string m_startSrcCallTime;
                    bool m_startSrcCallTimeHasBeenSet;

                    /**
                     * 主叫响铃开始时间
                     */
                    std::string m_startSrcRingTime;
                    bool m_startSrcRingTimeHasBeenSet;

                    /**
                     * 主叫接听时间
                     */
                    std::string m_srcAcceptTime;
                    bool m_srcAcceptTimeHasBeenSet;

                    /**
                     * 被叫呼叫开始时间
                     */
                    std::string m_startDstCallTime;
                    bool m_startDstCallTimeHasBeenSet;

                    /**
                     * 被叫响铃开始时间
                     */
                    std::string m_startDstRingTime;
                    bool m_startDstRingTimeHasBeenSet;

                    /**
                     * 被叫接听时间
                     */
                    std::string m_dstAcceptTime;
                    bool m_dstAcceptTimeHasBeenSet;

                    /**
                     * 用户挂机通话结束时间
                     */
                    std::string m_endCallTime;
                    bool m_endCallTimeHasBeenSet;

                    /**
                     * 通话最后状态：0：未知状态 1：正常通话 2：主叫未接 3：主叫接听，被叫未接 4：主叫未接通 5：被叫未接通
                     */
                    std::string m_callEndStatus;
                    bool m_callEndStatusHasBeenSet;

                    /**
                     * 通话计费时间
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 录音 URL，如果不录音或录音失败，该值为空
                     */
                    std::string m_recordUrl;
                    bool m_recordUrlHasBeenSet;

                    /**
                     * 通话类型(1: VOIP 2:IP TO PSTN 3: PSTN TO PSTN)，如果话单中没有该字段，默认值为回拨 3 (PSTN TO PSTN)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_callType;
                    bool m_callTypeHasBeenSet;

                    /**
                     * 同回拨请求中的 bizId，如果回拨请求中带 bizId 会有该字段返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bizId;
                    bool m_bizIdHasBeenSet;

                    /**
                     * 订单 ID,最大长度不超过 64 个字节，对于一些有订单状态 App 相关应用（如达人帮接入 App 应用)，该字段只在帐单中带上，其它回调不附带该字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NPP_V20190823_MODEL_CALLBACKCDR_H_
