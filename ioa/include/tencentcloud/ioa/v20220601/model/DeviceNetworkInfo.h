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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DEVICENETWORKINFO_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DEVICENETWORKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 分页的具体数据对象
                */
                class DeviceNetworkInfo : public AbstractModel
                {
                public:
                    DeviceNetworkInfo();
                    ~DeviceNetworkInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取本地地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LocalAddr 本地地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLocalAddr() const;

                    /**
                     * 设置本地地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _localAddr 本地地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLocalAddr(const std::string& _localAddr);

                    /**
                     * 判断参数 LocalAddr 是否已赋值
                     * @return LocalAddr 是否已赋值
                     * 
                     */
                    bool LocalAddrHasBeenSet() const;

                    /**
                     * 获取本地端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LocalPort 本地端口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLocalPort() const;

                    /**
                     * 设置本地端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _localPort 本地端口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLocalPort(const int64_t& _localPort);

                    /**
                     * 判断参数 LocalPort 是否已赋值
                     * @return LocalPort 是否已赋值
                     * 
                     */
                    bool LocalPortHasBeenSet() const;

                    /**
                     * 获取进程id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessId 进程id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetProcessId() const;

                    /**
                     * 设置进程id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _processId 进程id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProcessId(const int64_t& _processId);

                    /**
                     * 判断参数 ProcessId 是否已赋值
                     * @return ProcessId 是否已赋值
                     * 
                     */
                    bool ProcessIdHasBeenSet() const;

                    /**
                     * 获取进程名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessName 进程名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProcessName() const;

                    /**
                     * 设置进程名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _processName 进程名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProcessName(const std::string& _processName);

                    /**
                     * 判断参数 ProcessName 是否已赋值
                     * @return ProcessName 是否已赋值
                     * 
                     */
                    bool ProcessNameHasBeenSet() const;

                    /**
                     * 获取协议
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Protocol 协议
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _protocol 协议
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取远程地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RemoteAddr 远程地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemoteAddr() const;

                    /**
                     * 设置远程地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remoteAddr 远程地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemoteAddr(const std::string& _remoteAddr);

                    /**
                     * 判断参数 RemoteAddr 是否已赋值
                     * @return RemoteAddr 是否已赋值
                     * 
                     */
                    bool RemoteAddrHasBeenSet() const;

                    /**
                     * 获取远程端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RemotePort 远程端口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRemotePort() const;

                    /**
                     * 设置远程端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remotePort 远程端口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemotePort(const int64_t& _remotePort);

                    /**
                     * 判断参数 RemotePort 是否已赋值
                     * @return RemotePort 是否已赋值
                     * 
                     */
                    bool RemotePortHasBeenSet() const;

                    /**
                     * 获取状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return State 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _state 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetState(const int64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                private:

                    /**
                     * 本地地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_localAddr;
                    bool m_localAddrHasBeenSet;

                    /**
                     * 本地端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_localPort;
                    bool m_localPortHasBeenSet;

                    /**
                     * 进程id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_processId;
                    bool m_processIdHasBeenSet;

                    /**
                     * 进程名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_processName;
                    bool m_processNameHasBeenSet;

                    /**
                     * 协议
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 远程地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remoteAddr;
                    bool m_remoteAddrHasBeenSet;

                    /**
                     * 远程端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_remotePort;
                    bool m_remotePortHasBeenSet;

                    /**
                     * 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DEVICENETWORKINFO_H_
