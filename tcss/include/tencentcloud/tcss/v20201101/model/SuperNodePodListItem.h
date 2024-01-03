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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_SUPERNODEPODLISTITEM_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_SUPERNODEPODLISTITEM_H_

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
                * 超级节点Pod列表Item信息
                */
                class SuperNodePodListItem : public AbstractModel
                {
                public:
                    SuperNodePodListItem();
                    ~SuperNodePodListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取podIP
                     * @return PodIP podIP
                     * 
                     */
                    std::string GetPodIP() const;

                    /**
                     * 设置podIP
                     * @param _podIP podIP
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
                     * 获取节点唯一id
                     * @return NodeUniqueID 节点唯一id
                     * 
                     */
                    std::string GetNodeUniqueID() const;

                    /**
                     * 设置节点唯一id
                     * @param _nodeUniqueID 节点唯一id
                     * 
                     */
                    void SetNodeUniqueID(const std::string& _nodeUniqueID);

                    /**
                     * 判断参数 NodeUniqueID 是否已赋值
                     * @return NodeUniqueID 是否已赋值
                     * 
                     */
                    bool NodeUniqueIDHasBeenSet() const;

                    /**
                     * 获取运行状态
                     * @return Status 运行状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置运行状态
                     * @param _status 运行状态
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
                     * 获取cpu需求核数
                     * @return CpuRequest cpu需求核数
                     * 
                     */
                    int64_t GetCpuRequest() const;

                    /**
                     * 设置cpu需求核数
                     * @param _cpuRequest cpu需求核数
                     * 
                     */
                    void SetCpuRequest(const int64_t& _cpuRequest);

                    /**
                     * 判断参数 CpuRequest 是否已赋值
                     * @return CpuRequest 是否已赋值
                     * 
                     */
                    bool CpuRequestHasBeenSet() const;

                    /**
                     * 获取cpu限制核数
                     * @return CpuLimit cpu限制核数
                     * 
                     */
                    int64_t GetCpuLimit() const;

                    /**
                     * 设置cpu限制核数
                     * @param _cpuLimit cpu限制核数
                     * 
                     */
                    void SetCpuLimit(const int64_t& _cpuLimit);

                    /**
                     * 判断参数 CpuLimit 是否已赋值
                     * @return CpuLimit 是否已赋值
                     * 
                     */
                    bool CpuLimitHasBeenSet() const;

                    /**
                     * 获取内存需求大小
                     * @return MemRequest 内存需求大小
                     * 
                     */
                    int64_t GetMemRequest() const;

                    /**
                     * 设置内存需求大小
                     * @param _memRequest 内存需求大小
                     * 
                     */
                    void SetMemRequest(const int64_t& _memRequest);

                    /**
                     * 判断参数 MemRequest 是否已赋值
                     * @return MemRequest 是否已赋值
                     * 
                     */
                    bool MemRequestHasBeenSet() const;

                    /**
                     * 获取内存限制大小
                     * @return MemLimit 内存限制大小
                     * 
                     */
                    int64_t GetMemLimit() const;

                    /**
                     * 设置内存限制大小
                     * @param _memLimit 内存限制大小
                     * 
                     */
                    void SetMemLimit(const int64_t& _memLimit);

                    /**
                     * 判断参数 MemLimit 是否已赋值
                     * @return MemLimit 是否已赋值
                     * 
                     */
                    bool MemLimitHasBeenSet() const;

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
                     * 获取工作负载名称
                     * @return DeploymentName 工作负载名称
                     * 
                     */
                    std::string GetDeploymentName() const;

                    /**
                     * 设置工作负载名称
                     * @param _deploymentName 工作负载名称
                     * 
                     */
                    void SetDeploymentName(const std::string& _deploymentName);

                    /**
                     * 判断参数 DeploymentName 是否已赋值
                     * @return DeploymentName 是否已赋值
                     * 
                     */
                    bool DeploymentNameHasBeenSet() const;

                    /**
                     * 获取工作负载id
                     * @return DeploymentID 工作负载id
                     * 
                     */
                    std::string GetDeploymentID() const;

                    /**
                     * 设置工作负载id
                     * @param _deploymentID 工作负载id
                     * 
                     */
                    void SetDeploymentID(const std::string& _deploymentID);

                    /**
                     * 判断参数 DeploymentID 是否已赋值
                     * @return DeploymentID 是否已赋值
                     * 
                     */
                    bool DeploymentIDHasBeenSet() const;

                    /**
                     * 获取启动时间
                     * @return StartTime 启动时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置启动时间
                     * @param _startTime 启动时间
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
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取关联容器个数
                     * @return RelateContainerCount 关联容器个数
                     * 
                     */
                    uint64_t GetRelateContainerCount() const;

                    /**
                     * 设置关联容器个数
                     * @param _relateContainerCount 关联容器个数
                     * 
                     */
                    void SetRelateContainerCount(const uint64_t& _relateContainerCount);

                    /**
                     * 判断参数 RelateContainerCount 是否已赋值
                     * @return RelateContainerCount 是否已赋值
                     * 
                     */
                    bool RelateContainerCountHasBeenSet() const;

                    /**
                     * 获取运行时间
                     * @return RunningTime 运行时间
                     * 
                     */
                    std::string GetRunningTime() const;

                    /**
                     * 设置运行时间
                     * @param _runningTime 运行时间
                     * 
                     */
                    void SetRunningTime(const std::string& _runningTime);

                    /**
                     * 判断参数 RunningTime 是否已赋值
                     * @return RunningTime 是否已赋值
                     * 
                     */
                    bool RunningTimeHasBeenSet() const;

                    /**
                     * 获取PodUid
                     * @return PodUid PodUid
                     * 
                     */
                    std::string GetPodUid() const;

                    /**
                     * 设置PodUid
                     * @param _podUid PodUid
                     * 
                     */
                    void SetPodUid(const std::string& _podUid);

                    /**
                     * 判断参数 PodUid 是否已赋值
                     * @return PodUid 是否已赋值
                     * 
                     */
                    bool PodUidHasBeenSet() const;

                    /**
                     * 获取计费核数
                     * @return ChargeCoresCnt 计费核数
                     * 
                     */
                    uint64_t GetChargeCoresCnt() const;

                    /**
                     * 设置计费核数
                     * @param _chargeCoresCnt 计费核数
                     * 
                     */
                    void SetChargeCoresCnt(const uint64_t& _chargeCoresCnt);

                    /**
                     * 判断参数 ChargeCoresCnt 是否已赋值
                     * @return ChargeCoresCnt 是否已赋值
                     * 
                     */
                    bool ChargeCoresCntHasBeenSet() const;

                    /**
                     * 获取防护状态
                     * @return DefendStatus 防护状态
                     * 
                     */
                    std::string GetDefendStatus() const;

                    /**
                     * 设置防护状态
                     * @param _defendStatus 防护状态
                     * 
                     */
                    void SetDefendStatus(const std::string& _defendStatus);

                    /**
                     * 判断参数 DefendStatus 是否已赋值
                     * @return DefendStatus 是否已赋值
                     * 
                     */
                    bool DefendStatusHasBeenSet() const;

                private:

                    /**
                     * pod名称
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * podIP
                     */
                    std::string m_podIP;
                    bool m_podIPHasBeenSet;

                    /**
                     * 节点唯一id
                     */
                    std::string m_nodeUniqueID;
                    bool m_nodeUniqueIDHasBeenSet;

                    /**
                     * 运行状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * cpu需求核数
                     */
                    int64_t m_cpuRequest;
                    bool m_cpuRequestHasBeenSet;

                    /**
                     * cpu限制核数
                     */
                    int64_t m_cpuLimit;
                    bool m_cpuLimitHasBeenSet;

                    /**
                     * 内存需求大小
                     */
                    int64_t m_memRequest;
                    bool m_memRequestHasBeenSet;

                    /**
                     * 内存限制大小
                     */
                    int64_t m_memLimit;
                    bool m_memLimitHasBeenSet;

                    /**
                     * 命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 工作负载名称
                     */
                    std::string m_deploymentName;
                    bool m_deploymentNameHasBeenSet;

                    /**
                     * 工作负载id
                     */
                    std::string m_deploymentID;
                    bool m_deploymentIDHasBeenSet;

                    /**
                     * 启动时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 关联容器个数
                     */
                    uint64_t m_relateContainerCount;
                    bool m_relateContainerCountHasBeenSet;

                    /**
                     * 运行时间
                     */
                    std::string m_runningTime;
                    bool m_runningTimeHasBeenSet;

                    /**
                     * PodUid
                     */
                    std::string m_podUid;
                    bool m_podUidHasBeenSet;

                    /**
                     * 计费核数
                     */
                    uint64_t m_chargeCoresCnt;
                    bool m_chargeCoresCntHasBeenSet;

                    /**
                     * 防护状态
                     */
                    std::string m_defendStatus;
                    bool m_defendStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_SUPERNODEPODLISTITEM_H_
