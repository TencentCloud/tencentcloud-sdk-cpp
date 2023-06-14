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

#ifndef TENCENTCLOUD_CIS_V20180408_MODEL_CONTAINER_H_
#define TENCENTCLOUD_CIS_V20180408_MODEL_CONTAINER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cis/v20180408/model/EnvironmentVar.h>
#include <tencentcloud/cis/v20180408/model/ContainerState.h>


namespace TencentCloud
{
    namespace Cis
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * 容器实例中容器结构体
                */
                class Container : public AbstractModel
                {
                public:
                    Container();
                    ~Container() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取容器启动命令
                     * @return Command 容器启动命令
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置容器启动命令
                     * @param _command 容器启动命令
                     * 
                     */
                    void SetCommand(const std::string& _command);

                    /**
                     * 判断参数 Command 是否已赋值
                     * @return Command 是否已赋值
                     * 
                     */
                    bool CommandHasBeenSet() const;

                    /**
                     * 获取容器启动参数
                     * @return Args 容器启动参数
                     * 
                     */
                    std::vector<std::string> GetArgs() const;

                    /**
                     * 设置容器启动参数
                     * @param _args 容器启动参数
                     * 
                     */
                    void SetArgs(const std::vector<std::string>& _args);

                    /**
                     * 判断参数 Args 是否已赋值
                     * @return Args 是否已赋值
                     * 
                     */
                    bool ArgsHasBeenSet() const;

                    /**
                     * 获取容器环境变量
                     * @return EnvironmentVars 容器环境变量
                     * 
                     */
                    std::vector<EnvironmentVar> GetEnvironmentVars() const;

                    /**
                     * 设置容器环境变量
                     * @param _environmentVars 容器环境变量
                     * 
                     */
                    void SetEnvironmentVars(const std::vector<EnvironmentVar>& _environmentVars);

                    /**
                     * 判断参数 EnvironmentVars 是否已赋值
                     * @return EnvironmentVars 是否已赋值
                     * 
                     */
                    bool EnvironmentVarsHasBeenSet() const;

                    /**
                     * 获取镜像
                     * @return Image 镜像
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置镜像
                     * @param _image 镜像
                     * 
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取容器名，由小写字母、数字和 - 组成，由小写字母开头，小写字母或数字结尾，且长度不超过 63个字符
                     * @return Name 容器名，由小写字母、数字和 - 组成，由小写字母开头，小写字母或数字结尾，且长度不超过 63个字符
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置容器名，由小写字母、数字和 - 组成，由小写字母开头，小写字母或数字结尾，且长度不超过 63个字符
                     * @param _name 容器名，由小写字母、数字和 - 组成，由小写字母开头，小写字母或数字结尾，且长度不超过 63个字符
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取CPU，单位：核
                     * @return Cpu CPU，单位：核
                     * 
                     */
                    double GetCpu() const;

                    /**
                     * 设置CPU，单位：核
                     * @param _cpu CPU，单位：核
                     * 
                     */
                    void SetCpu(const double& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取内存，单位：Gi
                     * @return Memory 内存，单位：Gi
                     * 
                     */
                    double GetMemory() const;

                    /**
                     * 设置内存，单位：Gi
                     * @param _memory 内存，单位：Gi
                     * 
                     */
                    void SetMemory(const double& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取重启次数
                     * @return RestartCount 重启次数
                     * 
                     */
                    uint64_t GetRestartCount() const;

                    /**
                     * 设置重启次数
                     * @param _restartCount 重启次数
                     * 
                     */
                    void SetRestartCount(const uint64_t& _restartCount);

                    /**
                     * 判断参数 RestartCount 是否已赋值
                     * @return RestartCount 是否已赋值
                     * 
                     */
                    bool RestartCountHasBeenSet() const;

                    /**
                     * 获取当前状态
                     * @return CurrentState 当前状态
                     * 
                     */
                    ContainerState GetCurrentState() const;

                    /**
                     * 设置当前状态
                     * @param _currentState 当前状态
                     * 
                     */
                    void SetCurrentState(const ContainerState& _currentState);

                    /**
                     * 判断参数 CurrentState 是否已赋值
                     * @return CurrentState 是否已赋值
                     * 
                     */
                    bool CurrentStateHasBeenSet() const;

                    /**
                     * 获取上一次状态
                     * @return PreviousState 上一次状态
                     * 
                     */
                    ContainerState GetPreviousState() const;

                    /**
                     * 设置上一次状态
                     * @param _previousState 上一次状态
                     * 
                     */
                    void SetPreviousState(const ContainerState& _previousState);

                    /**
                     * 判断参数 PreviousState 是否已赋值
                     * @return PreviousState 是否已赋值
                     * 
                     */
                    bool PreviousStateHasBeenSet() const;

                    /**
                     * 获取容器工作目录
                     * @return WorkingDir 容器工作目录
                     * 
                     */
                    std::string GetWorkingDir() const;

                    /**
                     * 设置容器工作目录
                     * @param _workingDir 容器工作目录
                     * 
                     */
                    void SetWorkingDir(const std::string& _workingDir);

                    /**
                     * 判断参数 WorkingDir 是否已赋值
                     * @return WorkingDir 是否已赋值
                     * 
                     */
                    bool WorkingDirHasBeenSet() const;

                    /**
                     * 获取容器ID
                     * @return ContainerId 容器ID
                     * 
                     */
                    std::string GetContainerId() const;

                    /**
                     * 设置容器ID
                     * @param _containerId 容器ID
                     * 
                     */
                    void SetContainerId(const std::string& _containerId);

                    /**
                     * 判断参数 ContainerId 是否已赋值
                     * @return ContainerId 是否已赋值
                     * 
                     */
                    bool ContainerIdHasBeenSet() const;

                private:

                    /**
                     * 容器启动命令
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * 容器启动参数
                     */
                    std::vector<std::string> m_args;
                    bool m_argsHasBeenSet;

                    /**
                     * 容器环境变量
                     */
                    std::vector<EnvironmentVar> m_environmentVars;
                    bool m_environmentVarsHasBeenSet;

                    /**
                     * 镜像
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 容器名，由小写字母、数字和 - 组成，由小写字母开头，小写字母或数字结尾，且长度不超过 63个字符
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * CPU，单位：核
                     */
                    double m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存，单位：Gi
                     */
                    double m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 重启次数
                     */
                    uint64_t m_restartCount;
                    bool m_restartCountHasBeenSet;

                    /**
                     * 当前状态
                     */
                    ContainerState m_currentState;
                    bool m_currentStateHasBeenSet;

                    /**
                     * 上一次状态
                     */
                    ContainerState m_previousState;
                    bool m_previousStateHasBeenSet;

                    /**
                     * 容器工作目录
                     */
                    std::string m_workingDir;
                    bool m_workingDirHasBeenSet;

                    /**
                     * 容器ID
                     */
                    std::string m_containerId;
                    bool m_containerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIS_V20180408_MODEL_CONTAINER_H_
