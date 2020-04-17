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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_GROUPPOD_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_GROUPPOD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 部署组实例列表
                */
                class GroupPod : public AbstractModel
                {
                public:
                    GroupPod();
                    ~GroupPod() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例名称(对应到kubernetes的pod名称)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PodName 实例名称(对应到kubernetes的pod名称)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置实例名称(对应到kubernetes的pod名称)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PodName 实例名称(对应到kubernetes的pod名称)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPodName(const std::string& _podName);

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     */
                    bool PodNameHasBeenSet() const;

                    /**
                     * 获取实例ID(对应到kubernetes的pod id)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PodId 实例ID(对应到kubernetes的pod id)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPodId() const;

                    /**
                     * 设置实例ID(对应到kubernetes的pod id)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PodId 实例ID(对应到kubernetes的pod id)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPodId(const std::string& _podId);

                    /**
                     * 判断参数 PodId 是否已赋值
                     * @return PodId 是否已赋值
                     */
                    bool PodIdHasBeenSet() const;

                    /**
                     * 获取实例状态，请参考后面的实例以及容器的状态定义
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 实例状态，请参考后面的实例以及容器的状态定义
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置实例状态，请参考后面的实例以及容器的状态定义
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 实例状态，请参考后面的实例以及容器的状态定义
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取实例处于当前状态的原因，例如容器下载镜像失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Reason 实例处于当前状态的原因，例如容器下载镜像失败
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetReason() const;

                    /**
                     * 设置实例处于当前状态的原因，例如容器下载镜像失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Reason 实例处于当前状态的原因，例如容器下载镜像失败
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取主机IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeIp 主机IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNodeIp() const;

                    /**
                     * 设置主机IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NodeIp 主机IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNodeIp(const std::string& _nodeIp);

                    /**
                     * 判断参数 NodeIp 是否已赋值
                     * @return NodeIp 是否已赋值
                     */
                    bool NodeIpHasBeenSet() const;

                    /**
                     * 获取实例IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ip 实例IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetIp() const;

                    /**
                     * 设置实例IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Ip 实例IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取实例中容器的重启次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RestartCount 实例中容器的重启次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetRestartCount() const;

                    /**
                     * 设置实例中容器的重启次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RestartCount 实例中容器的重启次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRestartCount(const int64_t& _restartCount);

                    /**
                     * 判断参数 RestartCount 是否已赋值
                     * @return RestartCount 是否已赋值
                     */
                    bool RestartCountHasBeenSet() const;

                    /**
                     * 获取实例中已就绪容器的个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReadyCount 实例中已就绪容器的个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetReadyCount() const;

                    /**
                     * 设置实例中已就绪容器的个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ReadyCount 实例中已就绪容器的个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetReadyCount(const int64_t& _readyCount);

                    /**
                     * 判断参数 ReadyCount 是否已赋值
                     * @return ReadyCount 是否已赋值
                     */
                    bool ReadyCountHasBeenSet() const;

                    /**
                     * 获取运行时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Runtime 运行时长
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRuntime() const;

                    /**
                     * 设置运行时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Runtime 运行时长
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRuntime(const std::string& _runtime);

                    /**
                     * 判断参数 Runtime 是否已赋值
                     * @return Runtime 是否已赋值
                     */
                    bool RuntimeHasBeenSet() const;

                    /**
                     * 获取实例启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedAt 实例启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置实例启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreatedAt 实例启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取服务实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceInstanceStatus 服务实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetServiceInstanceStatus() const;

                    /**
                     * 设置服务实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ServiceInstanceStatus 服务实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetServiceInstanceStatus(const std::string& _serviceInstanceStatus);

                    /**
                     * 判断参数 ServiceInstanceStatus 是否已赋值
                     * @return ServiceInstanceStatus 是否已赋值
                     */
                    bool ServiceInstanceStatusHasBeenSet() const;

                    /**
                     * 获取机器实例可使用状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceAvailableStatus 机器实例可使用状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInstanceAvailableStatus() const;

                    /**
                     * 设置机器实例可使用状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceAvailableStatus 机器实例可使用状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceAvailableStatus(const std::string& _instanceAvailableStatus);

                    /**
                     * 判断参数 InstanceAvailableStatus 是否已赋值
                     * @return InstanceAvailableStatus 是否已赋值
                     */
                    bool InstanceAvailableStatusHasBeenSet() const;

                    /**
                     * 获取机器实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceStatus 机器实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置机器实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceStatus 机器实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceStatus(const std::string& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     */
                    bool InstanceStatusHasBeenSet() const;

                private:

                    /**
                     * 实例名称(对应到kubernetes的pod名称)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * 实例ID(对应到kubernetes的pod id)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_podId;
                    bool m_podIdHasBeenSet;

                    /**
                     * 实例状态，请参考后面的实例以及容器的状态定义
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例处于当前状态的原因，例如容器下载镜像失败
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * 主机IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeIp;
                    bool m_nodeIpHasBeenSet;

                    /**
                     * 实例IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 实例中容器的重启次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_restartCount;
                    bool m_restartCountHasBeenSet;

                    /**
                     * 实例中已就绪容器的个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_readyCount;
                    bool m_readyCountHasBeenSet;

                    /**
                     * 运行时长
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runtime;
                    bool m_runtimeHasBeenSet;

                    /**
                     * 实例启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 服务实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceInstanceStatus;
                    bool m_serviceInstanceStatusHasBeenSet;

                    /**
                     * 机器实例可使用状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceAvailableStatus;
                    bool m_instanceAvailableStatusHasBeenSet;

                    /**
                     * 机器实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_GROUPPOD_H_
