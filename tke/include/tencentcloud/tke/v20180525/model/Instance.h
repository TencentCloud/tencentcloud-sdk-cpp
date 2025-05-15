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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_INSTANCE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_INSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/InstanceAdvancedSettings.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 集群的实例信息
                */
                class Instance : public AbstractModel
                {
                public:
                    Instance();
                    ~Instance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取节点角色, MASTER, WORKER, ETCD, MASTER_ETCD,ALL, 默认为WORKER
                     * @return InstanceRole 节点角色, MASTER, WORKER, ETCD, MASTER_ETCD,ALL, 默认为WORKER
                     * 
                     */
                    std::string GetInstanceRole() const;

                    /**
                     * 设置节点角色, MASTER, WORKER, ETCD, MASTER_ETCD,ALL, 默认为WORKER
                     * @param _instanceRole 节点角色, MASTER, WORKER, ETCD, MASTER_ETCD,ALL, 默认为WORKER
                     * 
                     */
                    void SetInstanceRole(const std::string& _instanceRole);

                    /**
                     * 判断参数 InstanceRole 是否已赋值
                     * @return InstanceRole 是否已赋值
                     * 
                     */
                    bool InstanceRoleHasBeenSet() const;

                    /**
                     * 获取实例异常(或者处于初始化中)的原因
                     * @return FailedReason 实例异常(或者处于初始化中)的原因
                     * 
                     */
                    std::string GetFailedReason() const;

                    /**
                     * 设置实例异常(或者处于初始化中)的原因
                     * @param _failedReason 实例异常(或者处于初始化中)的原因
                     * 
                     */
                    void SetFailedReason(const std::string& _failedReason);

                    /**
                     * 判断参数 FailedReason 是否已赋值
                     * @return FailedReason 是否已赋值
                     * 
                     */
                    bool FailedReasonHasBeenSet() const;

                    /**
                     * 获取实例的状态（running 运行中，initializing 初始化中，failed 异常）
                     * @return InstanceState 实例的状态（running 运行中，initializing 初始化中，failed 异常）
                     * 
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置实例的状态（running 运行中，initializing 初始化中，failed 异常）
                     * @param _instanceState 实例的状态（running 运行中，initializing 初始化中，failed 异常）
                     * 
                     */
                    void SetInstanceState(const std::string& _instanceState);

                    /**
                     * 判断参数 InstanceState 是否已赋值
                     * @return InstanceState 是否已赋值
                     * 
                     */
                    bool InstanceStateHasBeenSet() const;

                    /**
                     * 获取实例是否封锁状态
                     * @return DrainStatus 实例是否封锁状态
                     * 
                     */
                    std::string GetDrainStatus() const;

                    /**
                     * 设置实例是否封锁状态
                     * @param _drainStatus 实例是否封锁状态
                     * 
                     */
                    void SetDrainStatus(const std::string& _drainStatus);

                    /**
                     * 判断参数 DrainStatus 是否已赋值
                     * @return DrainStatus 是否已赋值
                     * 
                     */
                    bool DrainStatusHasBeenSet() const;

                    /**
                     * 获取节点配置
                     * @return InstanceAdvancedSettings 节点配置
                     * 
                     */
                    InstanceAdvancedSettings GetInstanceAdvancedSettings() const;

                    /**
                     * 设置节点配置
                     * @param _instanceAdvancedSettings 节点配置
                     * 
                     */
                    void SetInstanceAdvancedSettings(const InstanceAdvancedSettings& _instanceAdvancedSettings);

                    /**
                     * 判断参数 InstanceAdvancedSettings 是否已赋值
                     * @return InstanceAdvancedSettings 是否已赋值
                     * 
                     */
                    bool InstanceAdvancedSettingsHasBeenSet() const;

                    /**
                     * 获取添加时间
                     * @return CreatedTime 添加时间
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置添加时间
                     * @param _createdTime 添加时间
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取节点内网IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LanIP 节点内网IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLanIP() const;

                    /**
                     * 设置节点内网IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lanIP 节点内网IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLanIP(const std::string& _lanIP);

                    /**
                     * 判断参数 LanIP 是否已赋值
                     * @return LanIP 是否已赋值
                     * 
                     */
                    bool LanIPHasBeenSet() const;

                    /**
                     * 获取资源池ID
                     * @return NodePoolId 资源池ID
                     * 
                     */
                    std::string GetNodePoolId() const;

                    /**
                     * 设置资源池ID
                     * @param _nodePoolId 资源池ID
                     * 
                     */
                    void SetNodePoolId(const std::string& _nodePoolId);

                    /**
                     * 判断参数 NodePoolId 是否已赋值
                     * @return NodePoolId 是否已赋值
                     * 
                     */
                    bool NodePoolIdHasBeenSet() const;

                    /**
                     * 获取自动伸缩组ID
                     * @return AutoscalingGroupId 自动伸缩组ID
                     * 
                     */
                    std::string GetAutoscalingGroupId() const;

                    /**
                     * 设置自动伸缩组ID
                     * @param _autoscalingGroupId 自动伸缩组ID
                     * 
                     */
                    void SetAutoscalingGroupId(const std::string& _autoscalingGroupId);

                    /**
                     * 判断参数 AutoscalingGroupId 是否已赋值
                     * @return AutoscalingGroupId 是否已赋值
                     * 
                     */
                    bool AutoscalingGroupIdHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 节点角色, MASTER, WORKER, ETCD, MASTER_ETCD,ALL, 默认为WORKER
                     */
                    std::string m_instanceRole;
                    bool m_instanceRoleHasBeenSet;

                    /**
                     * 实例异常(或者处于初始化中)的原因
                     */
                    std::string m_failedReason;
                    bool m_failedReasonHasBeenSet;

                    /**
                     * 实例的状态（running 运行中，initializing 初始化中，failed 异常）
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * 实例是否封锁状态
                     */
                    std::string m_drainStatus;
                    bool m_drainStatusHasBeenSet;

                    /**
                     * 节点配置
                     */
                    InstanceAdvancedSettings m_instanceAdvancedSettings;
                    bool m_instanceAdvancedSettingsHasBeenSet;

                    /**
                     * 添加时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 节点内网IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lanIP;
                    bool m_lanIPHasBeenSet;

                    /**
                     * 资源池ID
                     */
                    std::string m_nodePoolId;
                    bool m_nodePoolIdHasBeenSet;

                    /**
                     * 自动伸缩组ID
                     */
                    std::string m_autoscalingGroupId;
                    bool m_autoscalingGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_INSTANCE_H_
