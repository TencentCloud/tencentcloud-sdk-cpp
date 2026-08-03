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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_JOBPODENTITY_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_JOBPODENTITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 任务Pod信息
                */
                class JobPodEntity : public AbstractModel
                {
                public:
                    JobPodEntity();
                    ~JobPodEntity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Pod名称
                     * @return PodName Pod名称
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置Pod名称
                     * @param _podName Pod名称
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
                     * 获取Pod IP
                     * @return PodIp Pod IP
                     * 
                     */
                    std::string GetPodIp() const;

                    /**
                     * 设置Pod IP
                     * @param _podIp Pod IP
                     * 
                     */
                    void SetPodIp(const std::string& _podIp);

                    /**
                     * 判断参数 PodIp 是否已赋值
                     * @return PodIp 是否已赋值
                     * 
                     */
                    bool PodIpHasBeenSet() const;

                    /**
                     * 获取Pod状态
                     * @return Status Pod状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Pod状态
                     * @param _status Pod状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Pod阶段
                     * @return Phase Pod阶段
                     * 
                     */
                    std::string GetPhase() const;

                    /**
                     * 设置Pod阶段
                     * @param _phase Pod阶段
                     * 
                     */
                    void SetPhase(const std::string& _phase);

                    /**
                     * 判断参数 Phase 是否已赋值
                     * @return Phase 是否已赋值
                     * 
                     */
                    bool PhaseHasBeenSet() const;

                    /**
                     * 获取所属节点
                     * @return NodeName 所属节点
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置所属节点
                     * @param _nodeName 所属节点
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取节点IP
                     * @return NodeIp 节点IP
                     * 
                     */
                    std::string GetNodeIp() const;

                    /**
                     * 设置节点IP
                     * @param _nodeIp 节点IP
                     * 
                     */
                    void SetNodeIp(const std::string& _nodeIp);

                    /**
                     * 判断参数 NodeIp 是否已赋值
                     * @return NodeIp 是否已赋值
                     * 
                     */
                    bool NodeIpHasBeenSet() const;

                    /**
                     * 获取命名空间
                     * @return Namespace 命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间
                     * @param _namespace 命名空间
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取CPU请求
                     * @return CpuRequest CPU请求
                     * 
                     */
                    std::string GetCpuRequest() const;

                    /**
                     * 设置CPU请求
                     * @param _cpuRequest CPU请求
                     * 
                     */
                    void SetCpuRequest(const std::string& _cpuRequest);

                    /**
                     * 判断参数 CpuRequest 是否已赋值
                     * @return CpuRequest 是否已赋值
                     * 
                     */
                    bool CpuRequestHasBeenSet() const;

                    /**
                     * 获取CPU限制
                     * @return CpuLimit CPU限制
                     * 
                     */
                    std::string GetCpuLimit() const;

                    /**
                     * 设置CPU限制
                     * @param _cpuLimit CPU限制
                     * 
                     */
                    void SetCpuLimit(const std::string& _cpuLimit);

                    /**
                     * 判断参数 CpuLimit 是否已赋值
                     * @return CpuLimit 是否已赋值
                     * 
                     */
                    bool CpuLimitHasBeenSet() const;

                    /**
                     * 获取内存请求
                     * @return MemoryRequest 内存请求
                     * 
                     */
                    std::string GetMemoryRequest() const;

                    /**
                     * 设置内存请求
                     * @param _memoryRequest 内存请求
                     * 
                     */
                    void SetMemoryRequest(const std::string& _memoryRequest);

                    /**
                     * 判断参数 MemoryRequest 是否已赋值
                     * @return MemoryRequest 是否已赋值
                     * 
                     */
                    bool MemoryRequestHasBeenSet() const;

                    /**
                     * 获取内存限制
                     * @return MemoryLimit 内存限制
                     * 
                     */
                    std::string GetMemoryLimit() const;

                    /**
                     * 设置内存限制
                     * @param _memoryLimit 内存限制
                     * 
                     */
                    void SetMemoryLimit(const std::string& _memoryLimit);

                    /**
                     * 判断参数 MemoryLimit 是否已赋值
                     * @return MemoryLimit 是否已赋值
                     * 
                     */
                    bool MemoryLimitHasBeenSet() const;

                    /**
                     * 获取GPU数量
                     * @return GpuCount GPU数量
                     * 
                     */
                    std::string GetGpuCount() const;

                    /**
                     * 设置GPU数量
                     * @param _gpuCount GPU数量
                     * 
                     */
                    void SetGpuCount(const std::string& _gpuCount);

                    /**
                     * 判断参数 GpuCount 是否已赋值
                     * @return GpuCount 是否已赋值
                     * 
                     */
                    bool GpuCountHasBeenSet() const;

                    /**
                     * 获取容器镜像
                     * @return Image 容器镜像
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置容器镜像
                     * @param _image 容器镜像
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
                     * 获取Pod角色(head/worker)
                     * @return Role Pod角色(head/worker)
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置Pod角色(head/worker)
                     * @param _role Pod角色(head/worker)
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取启动时间
                     * @return StartTime 启动时间
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置启动时间
                     * @param _startTime 启动时间
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                private:

                    /**
                     * Pod名称
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * Pod IP
                     */
                    std::string m_podIp;
                    bool m_podIpHasBeenSet;

                    /**
                     * Pod状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Pod阶段
                     */
                    std::string m_phase;
                    bool m_phaseHasBeenSet;

                    /**
                     * 所属节点
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * 节点IP
                     */
                    std::string m_nodeIp;
                    bool m_nodeIpHasBeenSet;

                    /**
                     * 命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * CPU请求
                     */
                    std::string m_cpuRequest;
                    bool m_cpuRequestHasBeenSet;

                    /**
                     * CPU限制
                     */
                    std::string m_cpuLimit;
                    bool m_cpuLimitHasBeenSet;

                    /**
                     * 内存请求
                     */
                    std::string m_memoryRequest;
                    bool m_memoryRequestHasBeenSet;

                    /**
                     * 内存限制
                     */
                    std::string m_memoryLimit;
                    bool m_memoryLimitHasBeenSet;

                    /**
                     * GPU数量
                     */
                    std::string m_gpuCount;
                    bool m_gpuCountHasBeenSet;

                    /**
                     * 容器镜像
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * Pod角色(head/worker)
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * 创建时间
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 启动时间
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_JOBPODENTITY_H_
