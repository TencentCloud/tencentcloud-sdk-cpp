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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CONTAINERPORTITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CONTAINERPORTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 容器端口信息
                */
                class ContainerPortItem : public AbstractModel
                {
                public:
                    ContainerPortItem();
                    ~ContainerPortItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取监听进程名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessName 监听进程名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProcessName() const;

                    /**
                     * 设置监听进程名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _processName 监听进程名称
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
                     * 获取容器内监听端口
                     * @return ContainerPort 容器内监听端口
                     * 
                     */
                    int64_t GetContainerPort() const;

                    /**
                     * 设置容器内监听端口
                     * @param _containerPort 容器内监听端口
                     * 
                     */
                    void SetContainerPort(const int64_t& _containerPort);

                    /**
                     * 判断参数 ContainerPort 是否已赋值
                     * @return ContainerPort 是否已赋值
                     * 
                     */
                    bool ContainerPortHasBeenSet() const;

                    /**
                     * 获取进程运行用户
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunAs 进程运行用户
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunAs() const;

                    /**
                     * 设置进程运行用户
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runAs 进程运行用户
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunAs(const std::string& _runAs);

                    /**
                     * 判断参数 RunAs 是否已赋值
                     * @return RunAs 是否已赋值
                     * 
                     */
                    bool RunAsHasBeenSet() const;

                    /**
                     * 获取容器内进程ID
                     * @return ContainerPID 容器内进程ID
                     * 
                     */
                    int64_t GetContainerPID() const;

                    /**
                     * 设置容器内进程ID
                     * @param _containerPID 容器内进程ID
                     * 
                     */
                    void SetContainerPID(const int64_t& _containerPID);

                    /**
                     * 判断参数 ContainerPID 是否已赋值
                     * @return ContainerPID 是否已赋值
                     * 
                     */
                    bool ContainerPIDHasBeenSet() const;

                    /**
                     * 获取宿主机内网IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostInnerIP 宿主机内网IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHostInnerIP() const;

                    /**
                     * 设置宿主机内网IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hostInnerIP 宿主机内网IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHostInnerIP(const std::string& _hostInnerIP);

                    /**
                     * 判断参数 HostInnerIP 是否已赋值
                     * @return HostInnerIP 是否已赋值
                     * 
                     */
                    bool HostInnerIPHasBeenSet() const;

                    /**
                     * 获取宿主机外网IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostPublicIP 宿主机外网IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHostPublicIP() const;

                    /**
                     * 设置宿主机外网IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hostPublicIP 宿主机外网IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHostPublicIP(const std::string& _hostPublicIP);

                    /**
                     * 判断参数 HostPublicIP 是否已赋值
                     * @return HostPublicIP 是否已赋值
                     * 
                     */
                    bool HostPublicIPHasBeenSet() const;

                    /**
                     * 获取宿主机映射端口
                     * @return PublicPort 宿主机映射端口
                     * 
                     */
                    int64_t GetPublicPort() const;

                    /**
                     * 设置宿主机映射端口
                     * @param _publicPort 宿主机映射端口
                     * 
                     */
                    void SetPublicPort(const int64_t& _publicPort);

                    /**
                     * 判断参数 PublicPort 是否已赋值
                     * @return PublicPort 是否已赋值
                     * 
                     */
                    bool PublicPortHasBeenSet() const;

                    /**
                     * 获取网络协议类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProtocolType 网络协议类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProtocolType() const;

                    /**
                     * 设置网络协议类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _protocolType 网络协议类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProtocolType(const std::string& _protocolType);

                    /**
                     * 判断参数 ProtocolType 是否已赋值
                     * @return ProtocolType 是否已赋值
                     * 
                     */
                    bool ProtocolTypeHasBeenSet() const;

                private:

                    /**
                     * 监听进程名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_processName;
                    bool m_processNameHasBeenSet;

                    /**
                     * 容器内监听端口
                     */
                    int64_t m_containerPort;
                    bool m_containerPortHasBeenSet;

                    /**
                     * 进程运行用户
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runAs;
                    bool m_runAsHasBeenSet;

                    /**
                     * 容器内进程ID
                     */
                    int64_t m_containerPID;
                    bool m_containerPIDHasBeenSet;

                    /**
                     * 宿主机内网IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hostInnerIP;
                    bool m_hostInnerIPHasBeenSet;

                    /**
                     * 宿主机外网IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hostPublicIP;
                    bool m_hostPublicIPHasBeenSet;

                    /**
                     * 宿主机映射端口
                     */
                    int64_t m_publicPort;
                    bool m_publicPortHasBeenSet;

                    /**
                     * 网络协议类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_protocolType;
                    bool m_protocolTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CONTAINERPORTITEM_H_
