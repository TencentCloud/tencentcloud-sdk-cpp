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
                     * 获取<p>时间戳，单位为秒。</p>
                     * @return Timestamp <p>时间戳，单位为秒。</p>
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置<p>时间戳，单位为秒。</p>
                     * @param _timestamp <p>时间戳，单位为秒。</p>
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
                     * 获取<p>输入输出类型（input/output）。</p>
                     * @return Type <p>输入输出类型（input/output）。</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>输入输出类型（input/output）。</p>
                     * @param _type <p>输入输出类型（input/output）。</p>
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
                     * 获取<p>输入或输出Id。</p>
                     * @return InputOutputId <p>输入或输出Id。</p>
                     * 
                     */
                    std::string GetInputOutputId() const;

                    /**
                     * 设置<p>输入或输出Id。</p>
                     * @param _inputOutputId <p>输入或输出Id。</p>
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
                     * 获取<p>协议。</p>
                     * @return Protocol <p>协议。</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>协议。</p>
                     * @param _protocol <p>协议。</p>
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
                     * 获取<p>事件代码。</p>
                     * @return EventCode <p>事件代码。</p>
                     * 
                     */
                    std::string GetEventCode() const;

                    /**
                     * 设置<p>事件代码。</p>
                     * @param _eventCode <p>事件代码。</p>
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
                     * 获取<p>事件信息。</p>
                     * @return EventMessage <p>事件信息。</p>
                     * 
                     */
                    std::string GetEventMessage() const;

                    /**
                     * 设置<p>事件信息。</p>
                     * @param _eventMessage <p>事件信息。</p>
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
                     * 获取<p>对端IP。</p>
                     * @return RemoteIp <p>对端IP。</p>
                     * 
                     */
                    std::string GetRemoteIp() const;

                    /**
                     * 设置<p>对端IP。</p>
                     * @param _remoteIp <p>对端IP。</p>
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
                     * 获取<p>对端端口。</p>
                     * @return RemotePort <p>对端端口。</p>
                     * 
                     */
                    std::string GetRemotePort() const;

                    /**
                     * 设置<p>对端端口。</p>
                     * @param _remotePort <p>对端端口。</p>
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
                     * 获取<p>主备通道，0为主通道，1为备通道。</p>
                     * @return Pipeline <p>主备通道，0为主通道，1为备通道。</p>
                     * 
                     */
                    std::string GetPipeline() const;

                    /**
                     * 设置<p>主备通道，0为主通道，1为备通道。</p>
                     * @param _pipeline <p>主备通道，0为主通道，1为备通道。</p>
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
                     * 获取<p>输入或输出的名称。</p>
                     * @return InputOutputName <p>输入或输出的名称。</p>
                     * 
                     */
                    std::string GetInputOutputName() const;

                    /**
                     * 设置<p>输入或输出的名称。</p>
                     * @param _inputOutputName <p>输入或输出的名称。</p>
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
                     * <p>时间戳，单位为秒。</p>
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * <p>输入输出类型（input/output）。</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>输入或输出Id。</p>
                     */
                    std::string m_inputOutputId;
                    bool m_inputOutputIdHasBeenSet;

                    /**
                     * <p>协议。</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>事件代码。</p>
                     */
                    std::string m_eventCode;
                    bool m_eventCodeHasBeenSet;

                    /**
                     * <p>事件信息。</p>
                     */
                    std::string m_eventMessage;
                    bool m_eventMessageHasBeenSet;

                    /**
                     * <p>对端IP。</p>
                     */
                    std::string m_remoteIp;
                    bool m_remoteIpHasBeenSet;

                    /**
                     * <p>对端端口。</p>
                     */
                    std::string m_remotePort;
                    bool m_remotePortHasBeenSet;

                    /**
                     * <p>主备通道，0为主通道，1为备通道。</p>
                     */
                    std::string m_pipeline;
                    bool m_pipelineHasBeenSet;

                    /**
                     * <p>输入或输出的名称。</p>
                     */
                    std::string m_inputOutputName;
                    bool m_inputOutputNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_FLOWLOGINFO_H_
