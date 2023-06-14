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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_FLOWREALTIMESTATUSITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_FLOWREALTIMESTATUSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/FlowRealtimeStatusCommon.h>
#include <tencentcloud/mps/v20190612/model/FlowRealtimeStatusSRT.h>
#include <tencentcloud/mps/v20190612/model/FlowRealtimeStatusRTMP.h>
#include <tencentcloud/mps/v20190612/model/FlowRealtimeStatusRTP.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 流状态实时查询接口的流状态信息
                */
                class FlowRealtimeStatusItem : public AbstractModel
                {
                public:
                    FlowRealtimeStatusItem();
                    ~FlowRealtimeStatusItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取类型，Input|Output。
                     * @return Type 类型，Input|Output。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型，Input|Output。
                     * @param _type 类型，Input|Output。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取输入Id，如果Type为Input，此字段不为空。
                     * @return InputId 输入Id，如果Type为Input，此字段不为空。
                     * 
                     */
                    std::string GetInputId() const;

                    /**
                     * 设置输入Id，如果Type为Input，此字段不为空。
                     * @param _inputId 输入Id，如果Type为Input，此字段不为空。
                     * 
                     */
                    void SetInputId(const std::string& _inputId);

                    /**
                     * 判断参数 InputId 是否已赋值
                     * @return InputId 是否已赋值
                     * 
                     */
                    bool InputIdHasBeenSet() const;

                    /**
                     * 获取输出Id，如果Type为Output，此字段不为空。
                     * @return OutputId 输出Id，如果Type为Output，此字段不为空。
                     * 
                     */
                    std::string GetOutputId() const;

                    /**
                     * 设置输出Id，如果Type为Output，此字段不为空。
                     * @param _outputId 输出Id，如果Type为Output，此字段不为空。
                     * 
                     */
                    void SetOutputId(const std::string& _outputId);

                    /**
                     * 判断参数 OutputId 是否已赋值
                     * @return OutputId 是否已赋值
                     * 
                     */
                    bool OutputIdHasBeenSet() const;

                    /**
                     * 获取流Id。
                     * @return FlowId 流Id。
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置流Id。
                     * @param _flowId 流Id。
                     * 
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取协议， SRT | RTMP。
                     * @return Protocol 协议， SRT | RTMP。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议， SRT | RTMP。
                     * @param _protocol 协议， SRT | RTMP。
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取共同状态信息。
                     * @return CommonStatus 共同状态信息。
                     * 
                     */
                    FlowRealtimeStatusCommon GetCommonStatus() const;

                    /**
                     * 设置共同状态信息。
                     * @param _commonStatus 共同状态信息。
                     * 
                     */
                    void SetCommonStatus(const FlowRealtimeStatusCommon& _commonStatus);

                    /**
                     * 判断参数 CommonStatus 是否已赋值
                     * @return CommonStatus 是否已赋值
                     * 
                     */
                    bool CommonStatusHasBeenSet() const;

                    /**
                     * 获取如果是SRT协议则有此字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SRTStatus 如果是SRT协议则有此字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    FlowRealtimeStatusSRT GetSRTStatus() const;

                    /**
                     * 设置如果是SRT协议则有此字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sRTStatus 如果是SRT协议则有此字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSRTStatus(const FlowRealtimeStatusSRT& _sRTStatus);

                    /**
                     * 判断参数 SRTStatus 是否已赋值
                     * @return SRTStatus 是否已赋值
                     * 
                     */
                    bool SRTStatusHasBeenSet() const;

                    /**
                     * 获取如果是RTMP协议则有此字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RTMPStatus 如果是RTMP协议则有此字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    FlowRealtimeStatusRTMP GetRTMPStatus() const;

                    /**
                     * 设置如果是RTMP协议则有此字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rTMPStatus 如果是RTMP协议则有此字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRTMPStatus(const FlowRealtimeStatusRTMP& _rTMPStatus);

                    /**
                     * 判断参数 RTMPStatus 是否已赋值
                     * @return RTMPStatus 是否已赋值
                     * 
                     */
                    bool RTMPStatusHasBeenSet() const;

                    /**
                     * 获取服务器IP。
                     * @return ConnectServerIP 服务器IP。
                     * 
                     */
                    std::string GetConnectServerIP() const;

                    /**
                     * 设置服务器IP。
                     * @param _connectServerIP 服务器IP。
                     * 
                     */
                    void SetConnectServerIP(const std::string& _connectServerIP);

                    /**
                     * 判断参数 ConnectServerIP 是否已赋值
                     * @return ConnectServerIP 是否已赋值
                     * 
                     */
                    bool ConnectServerIPHasBeenSet() const;

                    /**
                     * 获取如果是RTP协议则有此字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RTPStatus 如果是RTP协议则有此字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    FlowRealtimeStatusRTP GetRTPStatus() const;

                    /**
                     * 设置如果是RTP协议则有此字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rTPStatus 如果是RTP协议则有此字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRTPStatus(const FlowRealtimeStatusRTP& _rTPStatus);

                    /**
                     * 判断参数 RTPStatus 是否已赋值
                     * @return RTPStatus 是否已赋值
                     * 
                     */
                    bool RTPStatusHasBeenSet() const;

                private:

                    /**
                     * 类型，Input|Output。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 输入Id，如果Type为Input，此字段不为空。
                     */
                    std::string m_inputId;
                    bool m_inputIdHasBeenSet;

                    /**
                     * 输出Id，如果Type为Output，此字段不为空。
                     */
                    std::string m_outputId;
                    bool m_outputIdHasBeenSet;

                    /**
                     * 流Id。
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 协议， SRT | RTMP。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 共同状态信息。
                     */
                    FlowRealtimeStatusCommon m_commonStatus;
                    bool m_commonStatusHasBeenSet;

                    /**
                     * 如果是SRT协议则有此字段。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FlowRealtimeStatusSRT m_sRTStatus;
                    bool m_sRTStatusHasBeenSet;

                    /**
                     * 如果是RTMP协议则有此字段。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FlowRealtimeStatusRTMP m_rTMPStatus;
                    bool m_rTMPStatusHasBeenSet;

                    /**
                     * 服务器IP。
                     */
                    std::string m_connectServerIP;
                    bool m_connectServerIPHasBeenSet;

                    /**
                     * 如果是RTP协议则有此字段。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FlowRealtimeStatusRTP m_rTPStatus;
                    bool m_rTPStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_FLOWREALTIMESTATUSITEM_H_
