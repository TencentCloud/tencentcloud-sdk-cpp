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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_PROCESSINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_PROCESSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 容器安全进程列表
                */
                class ProcessInfo : public AbstractModel
                {
                public:
                    ProcessInfo();
                    ~ProcessInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取进程启动时间
                     * @return StartTime 进程启动时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置进程启动时间
                     * @param _startTime 进程启动时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取运行用户
                     * @return RunAs 运行用户
                     * 
                     */
                    std::string GetRunAs() const;

                    /**
                     * 设置运行用户
                     * @param _runAs 运行用户
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
                     * 获取命令行参数
                     * @return CmdLine 命令行参数
                     * 
                     */
                    std::string GetCmdLine() const;

                    /**
                     * 设置命令行参数
                     * @param _cmdLine 命令行参数
                     * 
                     */
                    void SetCmdLine(const std::string& _cmdLine);

                    /**
                     * 判断参数 CmdLine 是否已赋值
                     * @return CmdLine 是否已赋值
                     * 
                     */
                    bool CmdLineHasBeenSet() const;

                    /**
                     * 获取Exe路径
                     * @return Exe Exe路径
                     * 
                     */
                    std::string GetExe() const;

                    /**
                     * 设置Exe路径
                     * @param _exe Exe路径
                     * 
                     */
                    void SetExe(const std::string& _exe);

                    /**
                     * 判断参数 Exe 是否已赋值
                     * @return Exe 是否已赋值
                     * 
                     */
                    bool ExeHasBeenSet() const;

                    /**
                     * 获取主机PID
                     * @return PID 主机PID
                     * 
                     */
                    uint64_t GetPID() const;

                    /**
                     * 设置主机PID
                     * @param _pID 主机PID
                     * 
                     */
                    void SetPID(const uint64_t& _pID);

                    /**
                     * 判断参数 PID 是否已赋值
                     * @return PID 是否已赋值
                     * 
                     */
                    bool PIDHasBeenSet() const;

                    /**
                     * 获取容器内pid
                     * @return ContainerPID 容器内pid
                     * 
                     */
                    uint64_t GetContainerPID() const;

                    /**
                     * 设置容器内pid
                     * @param _containerPID 容器内pid
                     * 
                     */
                    void SetContainerPID(const uint64_t& _containerPID);

                    /**
                     * 判断参数 ContainerPID 是否已赋值
                     * @return ContainerPID 是否已赋值
                     * 
                     */
                    bool ContainerPIDHasBeenSet() const;

                    /**
                     * 获取容器名称
                     * @return ContainerName 容器名称
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置容器名称
                     * @param _containerName 容器名称
                     * 
                     */
                    void SetContainerName(const std::string& _containerName);

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     * 
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取主机id
                     * @return HostID 主机id
                     * 
                     */
                    std::string GetHostID() const;

                    /**
                     * 设置主机id
                     * @param _hostID 主机id
                     * 
                     */
                    void SetHostID(const std::string& _hostID);

                    /**
                     * 判断参数 HostID 是否已赋值
                     * @return HostID 是否已赋值
                     * 
                     */
                    bool HostIDHasBeenSet() const;

                    /**
                     * 获取主机ip
                     * @return HostIP 主机ip
                     * 
                     */
                    std::string GetHostIP() const;

                    /**
                     * 设置主机ip
                     * @param _hostIP 主机ip
                     * 
                     */
                    void SetHostIP(const std::string& _hostIP);

                    /**
                     * 判断参数 HostIP 是否已赋值
                     * @return HostIP 是否已赋值
                     * 
                     */
                    bool HostIPHasBeenSet() const;

                    /**
                     * 获取进程名称
                     * @return ProcessName 进程名称
                     * 
                     */
                    std::string GetProcessName() const;

                    /**
                     * 设置进程名称
                     * @param _processName 进程名称
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
                     * 获取主机名称
                     * @return HostName 主机名称
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置主机名称
                     * @param _hostName 主机名称
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取外网ip
                     * @return PublicIp 外网ip
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置外网ip
                     * @param _publicIp 外网ip
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取节点id
                     * @return NodeID 节点id
                     * 
                     */
                    std::string GetNodeID() const;

                    /**
                     * 设置节点id
                     * @param _nodeID 节点id
                     * 
                     */
                    void SetNodeID(const std::string& _nodeID);

                    /**
                     * 判断参数 NodeID 是否已赋值
                     * @return NodeID 是否已赋值
                     * 
                     */
                    bool NodeIDHasBeenSet() const;

                    /**
                     * 获取podip
                     * @return PodIP podip
                     * 
                     */
                    std::string GetPodIP() const;

                    /**
                     * 设置podip
                     * @param _podIP podip
                     * 
                     */
                    void SetPodIP(const std::string& _podIP);

                    /**
                     * 判断参数 PodIP 是否已赋值
                     * @return PodIP 是否已赋值
                     * 
                     */
                    bool PodIPHasBeenSet() const;

                    /**
                     * 获取pod名称
                     * @return PodName pod名称
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置pod名称
                     * @param _podName pod名称
                     * 
                     */
                    void SetPodName(const std::string& _podName);

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     * 
                     */
                    bool PodNameHasBeenSet() const;

                    /**
                     * 获取节点类型
                     * @return NodeType 节点类型
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置节点类型
                     * @param _nodeType 节点类型
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取超级节点唯一id
                     * @return NodeUniqueID 超级节点唯一id
                     * 
                     */
                    std::string GetNodeUniqueID() const;

                    /**
                     * 设置超级节点唯一id
                     * @param _nodeUniqueID 超级节点唯一id
                     * 
                     */
                    void SetNodeUniqueID(const std::string& _nodeUniqueID);

                    /**
                     * 判断参数 NodeUniqueID 是否已赋值
                     * @return NodeUniqueID 是否已赋值
                     * 
                     */
                    bool NodeUniqueIDHasBeenSet() const;

                private:

                    /**
                     * 进程启动时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 运行用户
                     */
                    std::string m_runAs;
                    bool m_runAsHasBeenSet;

                    /**
                     * 命令行参数
                     */
                    std::string m_cmdLine;
                    bool m_cmdLineHasBeenSet;

                    /**
                     * Exe路径
                     */
                    std::string m_exe;
                    bool m_exeHasBeenSet;

                    /**
                     * 主机PID
                     */
                    uint64_t m_pID;
                    bool m_pIDHasBeenSet;

                    /**
                     * 容器内pid
                     */
                    uint64_t m_containerPID;
                    bool m_containerPIDHasBeenSet;

                    /**
                     * 容器名称
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * 主机id
                     */
                    std::string m_hostID;
                    bool m_hostIDHasBeenSet;

                    /**
                     * 主机ip
                     */
                    std::string m_hostIP;
                    bool m_hostIPHasBeenSet;

                    /**
                     * 进程名称
                     */
                    std::string m_processName;
                    bool m_processNameHasBeenSet;

                    /**
                     * 主机名称
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 外网ip
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * 节点id
                     */
                    std::string m_nodeID;
                    bool m_nodeIDHasBeenSet;

                    /**
                     * podip
                     */
                    std::string m_podIP;
                    bool m_podIPHasBeenSet;

                    /**
                     * pod名称
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * 节点类型
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * 超级节点唯一id
                     */
                    std::string m_nodeUniqueID;
                    bool m_nodeUniqueIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_PROCESSINFO_H_
