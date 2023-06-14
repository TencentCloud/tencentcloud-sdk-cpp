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

#ifndef TENCENTCLOUD_NPP_V20190823_MODEL_VIRTURALNUMCDR_H_
#define TENCENTCLOUD_NPP_V20190823_MODEL_VIRTURALNUMCDR_H_

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
                * 直拨话单详情
                */
                class VirturalNumCdr : public AbstractModel
                {
                public:
                    VirturalNumCdr();
                    ~VirturalNumCdr() = default;
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
                     * 获取双方号码 + 中间号绑定 ID，该 ID 全局唯一
                     * @return BindId 双方号码 + 中间号绑定 ID，该 ID 全局唯一
                     * 
                     */
                    std::string GetBindId() const;

                    /**
                     * 设置双方号码 + 中间号绑定 ID，该 ID 全局唯一
                     * @param _bindId 双方号码 + 中间号绑定 ID，该 ID 全局唯一
                     * 
                     */
                    void SetBindId(const std::string& _bindId);

                    /**
                     * 判断参数 BindId 是否已赋值
                     * @return BindId 是否已赋值
                     * 
                     */
                    bool BindIdHasBeenSet() const;

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
                     * 获取主叫通讯录直拨虚拟保护号码
                     * @return DstVirtualNum 主叫通讯录直拨虚拟保护号码
                     * 
                     */
                    std::string GetDstVirtualNum() const;

                    /**
                     * 设置主叫通讯录直拨虚拟保护号码
                     * @param _dstVirtualNum 主叫通讯录直拨虚拟保护号码
                     * 
                     */
                    void SetDstVirtualNum(const std::string& _dstVirtualNum);

                    /**
                     * 判断参数 DstVirtualNum 是否已赋值
                     * @return DstVirtualNum 是否已赋值
                     * 
                     */
                    bool DstVirtualNumHasBeenSet() const;

                    /**
                     * 获取虚拟保护号码平台收到呼叫时间
                     * @return CallCenterAcceptTime 虚拟保护号码平台收到呼叫时间
                     * 
                     */
                    std::string GetCallCenterAcceptTime() const;

                    /**
                     * 设置虚拟保护号码平台收到呼叫时间
                     * @param _callCenterAcceptTime 虚拟保护号码平台收到呼叫时间
                     * 
                     */
                    void SetCallCenterAcceptTime(const std::string& _callCenterAcceptTime);

                    /**
                     * 判断参数 CallCenterAcceptTime 是否已赋值
                     * @return CallCenterAcceptTime 是否已赋值
                     * 
                     */
                    bool CallCenterAcceptTimeHasBeenSet() const;

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
                     * 获取通话最后状态：0：未知状态 1：正常通话 2：查询呼叫转移被叫号异常 3：未接通 4：未接听 5：拒接挂断 6：关机 7：空号 8：通话中 9：欠费 10：运营商线路或平台异常
                     * @return CallEndStatus 通话最后状态：0：未知状态 1：正常通话 2：查询呼叫转移被叫号异常 3：未接通 4：未接听 5：拒接挂断 6：关机 7：空号 8：通话中 9：欠费 10：运营商线路或平台异常
                     * 
                     */
                    std::string GetCallEndStatus() const;

                    /**
                     * 设置通话最后状态：0：未知状态 1：正常通话 2：查询呼叫转移被叫号异常 3：未接通 4：未接听 5：拒接挂断 6：关机 7：空号 8：通话中 9：欠费 10：运营商线路或平台异常
                     * @param _callEndStatus 通话最后状态：0：未知状态 1：正常通话 2：查询呼叫转移被叫号异常 3：未接通 4：未接听 5：拒接挂断 6：关机 7：空号 8：通话中 9：欠费 10：运营商线路或平台异常
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
                     * 获取主叫接通虚拟保护号码到通话结束通话时间
                     * @return SrcDuration 主叫接通虚拟保护号码到通话结束通话时间
                     * 
                     */
                    std::string GetSrcDuration() const;

                    /**
                     * 设置主叫接通虚拟保护号码到通话结束通话时间
                     * @param _srcDuration 主叫接通虚拟保护号码到通话结束通话时间
                     * 
                     */
                    void SetSrcDuration(const std::string& _srcDuration);

                    /**
                     * 判断参数 SrcDuration 是否已赋值
                     * @return SrcDuration 是否已赋值
                     * 
                     */
                    bool SrcDurationHasBeenSet() const;

                    /**
                     * 获取呼叫转接被叫接通到通话结束通话时间
                     * @return DstDuration 呼叫转接被叫接通到通话结束通话时间
                     * 
                     */
                    std::string GetDstDuration() const;

                    /**
                     * 设置呼叫转接被叫接通到通话结束通话时间
                     * @param _dstDuration 呼叫转接被叫接通到通话结束通话时间
                     * 
                     */
                    void SetDstDuration(const std::string& _dstDuration);

                    /**
                     * 判断参数 DstDuration 是否已赋值
                     * @return DstDuration 是否已赋值
                     * 
                     */
                    bool DstDurationHasBeenSet() const;

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

                private:

                    /**
                     * 呼叫通话 ID
                     */
                    std::string m_callId;
                    bool m_callIdHasBeenSet;

                    /**
                     * 双方号码 + 中间号绑定 ID，该 ID 全局唯一
                     */
                    std::string m_bindId;
                    bool m_bindIdHasBeenSet;

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
                     * 主叫通讯录直拨虚拟保护号码
                     */
                    std::string m_dstVirtualNum;
                    bool m_dstVirtualNumHasBeenSet;

                    /**
                     * 虚拟保护号码平台收到呼叫时间
                     */
                    std::string m_callCenterAcceptTime;
                    bool m_callCenterAcceptTimeHasBeenSet;

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
                     * 通话最后状态：0：未知状态 1：正常通话 2：查询呼叫转移被叫号异常 3：未接通 4：未接听 5：拒接挂断 6：关机 7：空号 8：通话中 9：欠费 10：运营商线路或平台异常
                     */
                    std::string m_callEndStatus;
                    bool m_callEndStatusHasBeenSet;

                    /**
                     * 主叫接通虚拟保护号码到通话结束通话时间
                     */
                    std::string m_srcDuration;
                    bool m_srcDurationHasBeenSet;

                    /**
                     * 呼叫转接被叫接通到通话结束通话时间
                     */
                    std::string m_dstDuration;
                    bool m_dstDurationHasBeenSet;

                    /**
                     * 录音 URL，如果不录音或录音失败，该值为空
                     */
                    std::string m_recordUrl;
                    bool m_recordUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NPP_V20190823_MODEL_VIRTURALNUMCDR_H_
