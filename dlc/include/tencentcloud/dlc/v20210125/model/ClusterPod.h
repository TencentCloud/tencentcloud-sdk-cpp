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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CLUSTERPOD_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CLUSTERPOD_H_

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
                * 集群pod详情
                */
                class ClusterPod : public AbstractModel
                {
                public:
                    ClusterPod();
                    ~ClusterPod() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Pod名称</p>
                     * @return PodName <p>Pod名称</p>
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置<p>Pod名称</p>
                     * @param _podName <p>Pod名称</p>
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
                     * 获取<p>Pod IP</p>
                     * @return PodIp <p>Pod IP</p>
                     * 
                     */
                    std::string GetPodIp() const;

                    /**
                     * 设置<p>Pod IP</p>
                     * @param _podIp <p>Pod IP</p>
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
                     * 获取<p>Pod状态</p>
                     * @return Status <p>Pod状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Pod状态</p>
                     * @param _status <p>Pod状态</p>
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
                     * 获取<p>Pod阶段</p>
                     * @return Phase <p>Pod阶段</p>
                     * 
                     */
                    std::string GetPhase() const;

                    /**
                     * 设置<p>Pod阶段</p>
                     * @param _phase <p>Pod阶段</p>
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
                     * 获取<p>所属节点</p>
                     * @return NodeName <p>所属节点</p>
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置<p>所属节点</p>
                     * @param _nodeName <p>所属节点</p>
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
                     * 获取<p>节点IP</p>
                     * @return NodeIp <p>节点IP</p>
                     * 
                     */
                    std::string GetNodeIp() const;

                    /**
                     * 设置<p>节点IP</p>
                     * @param _nodeIp <p>节点IP</p>
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
                     * 获取<p>命名空间</p>
                     * @return Namespace <p>命名空间</p>
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置<p>命名空间</p>
                     * @param _namespace <p>命名空间</p>
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
                     * 获取<p>CPU请求</p>
                     * @return CpuRequest <p>CPU请求</p>
                     * 
                     */
                    std::string GetCpuRequest() const;

                    /**
                     * 设置<p>CPU请求</p>
                     * @param _cpuRequest <p>CPU请求</p>
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
                     * 获取<p>CPU限制</p>
                     * @return CpuLimit <p>CPU限制</p>
                     * 
                     */
                    std::string GetCpuLimit() const;

                    /**
                     * 设置<p>CPU限制</p>
                     * @param _cpuLimit <p>CPU限制</p>
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
                     * 获取<p>内存请求</p>
                     * @return MemoryRequest <p>内存请求</p>
                     * 
                     */
                    std::string GetMemoryRequest() const;

                    /**
                     * 设置<p>内存请求</p>
                     * @param _memoryRequest <p>内存请求</p>
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
                     * 获取<p>内存限制</p>
                     * @return MemoryLimit <p>内存限制</p>
                     * 
                     */
                    std::string GetMemoryLimit() const;

                    /**
                     * 设置<p>内存限制</p>
                     * @param _memoryLimit <p>内存限制</p>
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
                     * 获取<p>GPU数量</p>
                     * @return GpuCount <p>GPU数量</p>
                     * 
                     */
                    std::string GetGpuCount() const;

                    /**
                     * 设置<p>GPU数量</p>
                     * @param _gpuCount <p>GPU数量</p>
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
                     * 获取<p>容器镜像</p>
                     * @return Image <p>容器镜像</p>
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置<p>容器镜像</p>
                     * @param _image <p>容器镜像</p>
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
                     * 获取<p>Pod角色(head/worker)</p>
                     * @return Role <p>Pod角色(head/worker)</p>
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置<p>Pod角色(head/worker)</p>
                     * @param _role <p>Pod角色(head/worker)</p>
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
                     * 获取<p>创建时间（毫秒时间戳）</p>
                     * @return CreateTime <p>创建时间（毫秒时间戳）</p>
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置<p>创建时间（毫秒时间戳）</p>
                     * @param _createTime <p>创建时间（毫秒时间戳）</p>
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
                     * 获取<p>启动时间（毫秒时间戳）</p>
                     * @return StartTime <p>启动时间（毫秒时间戳）</p>
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置<p>启动时间（毫秒时间戳）</p>
                     * @param _startTime <p>启动时间（毫秒时间戳）</p>
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
                     * <p>Pod名称</p>
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * <p>Pod IP</p>
                     */
                    std::string m_podIp;
                    bool m_podIpHasBeenSet;

                    /**
                     * <p>Pod状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Pod阶段</p>
                     */
                    std::string m_phase;
                    bool m_phaseHasBeenSet;

                    /**
                     * <p>所属节点</p>
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * <p>节点IP</p>
                     */
                    std::string m_nodeIp;
                    bool m_nodeIpHasBeenSet;

                    /**
                     * <p>命名空间</p>
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * <p>CPU请求</p>
                     */
                    std::string m_cpuRequest;
                    bool m_cpuRequestHasBeenSet;

                    /**
                     * <p>CPU限制</p>
                     */
                    std::string m_cpuLimit;
                    bool m_cpuLimitHasBeenSet;

                    /**
                     * <p>内存请求</p>
                     */
                    std::string m_memoryRequest;
                    bool m_memoryRequestHasBeenSet;

                    /**
                     * <p>内存限制</p>
                     */
                    std::string m_memoryLimit;
                    bool m_memoryLimitHasBeenSet;

                    /**
                     * <p>GPU数量</p>
                     */
                    std::string m_gpuCount;
                    bool m_gpuCountHasBeenSet;

                    /**
                     * <p>容器镜像</p>
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * <p>Pod角色(head/worker)</p>
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * <p>创建时间（毫秒时间戳）</p>
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>启动时间（毫秒时间戳）</p>
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CLUSTERPOD_H_
