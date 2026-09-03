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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DEPLOYMENTREPLICAINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DEPLOYMENTREPLICAINFO_H_

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
                * 部署副本信息
                */
                class DeploymentReplicaInfo : public AbstractModel
                {
                public:
                    DeploymentReplicaInfo();
                    ~DeploymentReplicaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>关联的部署ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeploymentId <p>关联的部署ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDeploymentId() const;

                    /**
                     * 设置<p>关联的部署ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deploymentId <p>关联的部署ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeploymentId(const uint64_t& _deploymentId);

                    /**
                     * 判断参数 DeploymentId 是否已赋值
                     * @return DeploymentId 是否已赋值
                     * 
                     */
                    bool DeploymentIdHasBeenSet() const;

                    /**
                     * 获取<p>副本名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>副本名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>副本名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name <p>副本名称</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>副本状态（Running/Pending/Failed/Terminated）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>副本状态（Running/Pending/Failed/Terminated）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>副本状态（Running/Pending/Failed/Terminated）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>副本状态（Running/Pending/Failed/Terminated）</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>重启次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RestartCount <p>重启次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRestartCount() const;

                    /**
                     * 设置<p>重启次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _restartCount <p>重启次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRestartCount(const int64_t& _restartCount);

                    /**
                     * 判断参数 RestartCount 是否已赋值
                     * @return RestartCount 是否已赋值
                     * 
                     */
                    bool RestartCountHasBeenSet() const;

                    /**
                     * 获取<p>节点类型（head/worker）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeType <p>节点类型（head/worker）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置<p>节点类型（head/worker）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeType <p>节点类型（head/worker）</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>启动时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime <p>启动时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>启动时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime <p>启动时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>Pod IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PodIp <p>Pod IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPodIp() const;

                    /**
                     * 设置<p>Pod IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _podIp <p>Pod IP</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>节点名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeName <p>节点名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置<p>节点名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeName <p>节点名称</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>节点 IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeIp <p>节点 IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeIp() const;

                    /**
                     * 设置<p>节点 IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeIp <p>节点 IP</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Namespace <p>命名空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置<p>命名空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespace <p>命名空间</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>CPU 请求</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CpuRequest <p>CPU 请求</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCpuRequest() const;

                    /**
                     * 设置<p>CPU 请求</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpuRequest <p>CPU 请求</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>CPU 限制</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CpuLimit <p>CPU 限制</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCpuLimit() const;

                    /**
                     * 设置<p>CPU 限制</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpuLimit <p>CPU 限制</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemoryRequest <p>内存请求</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMemoryRequest() const;

                    /**
                     * 设置<p>内存请求</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memoryRequest <p>内存请求</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemoryLimit <p>内存限制</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMemoryLimit() const;

                    /**
                     * 设置<p>内存限制</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memoryLimit <p>内存限制</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>GPU 数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GpuCount <p>GPU 数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetGpuCount() const;

                    /**
                     * 设置<p>GPU 数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gpuCount <p>GPU 数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGpuCount(const int64_t& _gpuCount);

                    /**
                     * 判断参数 GpuCount 是否已赋值
                     * @return GpuCount 是否已赋值
                     * 
                     */
                    bool GpuCountHasBeenSet() const;

                    /**
                     * 获取<p>容器镜像</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Image <p>容器镜像</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置<p>容器镜像</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _image <p>容器镜像</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>创建时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>创建时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置<p>创建时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>创建时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>关联的部署ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_deploymentId;
                    bool m_deploymentIdHasBeenSet;

                    /**
                     * <p>副本名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>副本状态（Running/Pending/Failed/Terminated）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>重启次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_restartCount;
                    bool m_restartCountHasBeenSet;

                    /**
                     * <p>节点类型（head/worker）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * <p>启动时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>Pod IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_podIp;
                    bool m_podIpHasBeenSet;

                    /**
                     * <p>节点名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * <p>节点 IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeIp;
                    bool m_nodeIpHasBeenSet;

                    /**
                     * <p>命名空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * <p>CPU 请求</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cpuRequest;
                    bool m_cpuRequestHasBeenSet;

                    /**
                     * <p>CPU 限制</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cpuLimit;
                    bool m_cpuLimitHasBeenSet;

                    /**
                     * <p>内存请求</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_memoryRequest;
                    bool m_memoryRequestHasBeenSet;

                    /**
                     * <p>内存限制</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_memoryLimit;
                    bool m_memoryLimitHasBeenSet;

                    /**
                     * <p>GPU 数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_gpuCount;
                    bool m_gpuCountHasBeenSet;

                    /**
                     * <p>容器镜像</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * <p>创建时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DEPLOYMENTREPLICAINFO_H_
