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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_FLOWLOGINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_FLOWLOGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 传输流日志信息。
                */
                class FlowLogInfo : public AbstractModel
                {
                public:
                    FlowLogInfo();
                    ~FlowLogInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取时间戳，单位为秒。
                     * @return Timestamp 时间戳，单位为秒。
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置时间戳，单位为秒。
                     * @param _timestamp 时间戳，单位为秒。
                     * 
                     */
                    void SetTimestamp(const int64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取输入输出类型（input/output）。
                     * @return Type 输入输出类型（input/output）。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置输入输出类型（input/output）。
                     * @param _type 输入输出类型（input/output）。
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
                     * 获取输入或输出Id。
                     * @return InputOutputId 输入或输出Id。
                     * 
                     */
                    std::string GetInputOutputId() const;

                    /**
                     * 设置输入或输出Id。
                     * @param _inputOutputId 输入或输出Id。
                     * 
                     */
                    void SetInputOutputId(const std::string& _inputOutputId);

                    /**
                     * 判断参数 InputOutputId 是否已赋值
                     * @return InputOutputId 是否已赋值
                     * 
                     */
                    bool InputOutputIdHasBeenSet() const;

                    /**
                     * 获取协议。
                     * @return Protocol 协议。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议。
                     * @param _protocol 协议。
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
                     * 获取事件代码。
                     * @return EventCode 事件代码。
                     * 
                     */
                    std::string GetEventCode() const;

                    /**
                     * 设置事件代码。
                     * @param _eventCode 事件代码。
                     * 
                     */
                    void SetEventCode(const std::string& _eventCode);

                    /**
                     * 判断参数 EventCode 是否已赋值
                     * @return EventCode 是否已赋值
                     * 
                     */
                    bool EventCodeHasBeenSet() const;

                    /**
                     * 获取事件信息。
                     * @return EventMessage 事件信息。
                     * 
                     */
                    std::string GetEventMessage() const;

                    /**
                     * 设置事件信息。
                     * @param _eventMessage 事件信息。
                     * 
                     */
                    void SetEventMessage(const std::string& _eventMessage);

                    /**
                     * 判断参数 EventMessage 是否已赋值
                     * @return EventMessage 是否已赋值
                     * 
                     */
                    bool EventMessageHasBeenSet() const;

                    /**
                     * 获取对端IP。
                     * @return RemoteIp 对端IP。
                     * 
                     */
                    std::string GetRemoteIp() const;

                    /**
                     * 设置对端IP。
                     * @param _remoteIp 对端IP。
                     * 
                     */
                    void SetRemoteIp(const std::string& _remoteIp);

                    /**
                     * 判断参数 RemoteIp 是否已赋值
                     * @return RemoteIp 是否已赋值
                     * 
                     */
                    bool RemoteIpHasBeenSet() const;

                    /**
                     * 获取对端端口。
                     * @return RemotePort 对端端口。
                     * 
                     */
                    std::string GetRemotePort() const;

                    /**
                     * 设置对端端口。
                     * @param _remotePort 对端端口。
                     * 
                     */
                    void SetRemotePort(const std::string& _remotePort);

                    /**
                     * 判断参数 RemotePort 是否已赋值
                     * @return RemotePort 是否已赋值
                     * 
                     */
                    bool RemotePortHasBeenSet() const;

                    /**
                     * 获取主备通道，0为主通道，1为备通道。
                     * @return Pipeline 主备通道，0为主通道，1为备通道。
                     * 
                     */
                    std::string GetPipeline() const;

                    /**
                     * 设置主备通道，0为主通道，1为备通道。
                     * @param _pipeline 主备通道，0为主通道，1为备通道。
                     * 
                     */
                    void SetPipeline(const std::string& _pipeline);

                    /**
                     * 判断参数 Pipeline 是否已赋值
                     * @return Pipeline 是否已赋值
                     * 
                     */
                    bool PipelineHasBeenSet() const;

                    /**
                     * 获取输入或输出的名称。
                     * @return InputOutputName 输入或输出的名称。
                     * 
                     */
                    std::string GetInputOutputName() const;

                    /**
                     * 设置输入或输出的名称。
                     * @param _inputOutputName 输入或输出的名称。
                     * 
                     */
                    void SetInputOutputName(const std::string& _inputOutputName);

                    /**
                     * 判断参数 InputOutputName 是否已赋值
                     * @return InputOutputName 是否已赋值
                     * 
                     */
                    bool InputOutputNameHasBeenSet() const;

                private:

                    /**
                     * 时间戳，单位为秒。
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 输入输出类型（input/output）。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 输入或输出Id。
                     */
                    std::string m_inputOutputId;
                    bool m_inputOutputIdHasBeenSet;

                    /**
                     * 协议。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 事件代码。
                     */
                    std::string m_eventCode;
                    bool m_eventCodeHasBeenSet;

                    /**
                     * 事件信息。
                     */
                    std::string m_eventMessage;
                    bool m_eventMessageHasBeenSet;

                    /**
                     * 对端IP。
                     */
                    std::string m_remoteIp;
                    bool m_remoteIpHasBeenSet;

                    /**
                     * 对端端口。
                     */
                    std::string m_remotePort;
                    bool m_remotePortHasBeenSet;

                    /**
                     * 主备通道，0为主通道，1为备通道。
                     */
                    std::string m_pipeline;
                    bool m_pipelineHasBeenSet;

                    /**
                     * 输入或输出的名称。
                     */
                    std::string m_inputOutputName;
                    bool m_inputOutputNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_FLOWLOGINFO_H_
