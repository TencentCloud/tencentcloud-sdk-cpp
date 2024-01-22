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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_INSTANCE_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_INSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20220501/model/NativeNodeInfo.h>
#include <tencentcloud/tke/v20220501/model/RegularNodeInfo.h>
#include <tencentcloud/tke/v20220501/model/SuperNodeInfo.h>
#include <tencentcloud/tke/v20220501/model/ExternalNodeInfo.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailedReason 实例异常(或者处于初始化中)的原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFailedReason() const;

                    /**
                     * 设置实例异常(或者处于初始化中)的原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failedReason 实例异常(或者处于初始化中)的原因
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取实例的状态
- initializing创建中
- running 运行中
- failed 异常
                     * @return InstanceState 实例的状态
- initializing创建中
- running 运行中
- failed 异常
                     * 
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置实例的状态
- initializing创建中
- running 运行中
- failed 异常
                     * @param _instanceState 实例的状态
- initializing创建中
- running 运行中
- failed 异常
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
                     * 获取是否不可调度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Unschedulable 是否不可调度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetUnschedulable() const;

                    /**
                     * 设置是否不可调度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unschedulable 是否不可调度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUnschedulable(const bool& _unschedulable);

                    /**
                     * 判断参数 Unschedulable 是否已赋值
                     * @return Unschedulable 是否已赋值
                     * 
                     */
                    bool UnschedulableHasBeenSet() const;

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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodePoolId 资源池ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodePoolId() const;

                    /**
                     * 设置资源池ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodePoolId 资源池ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取原生节点参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Native 原生节点参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    NativeNodeInfo GetNative() const;

                    /**
                     * 设置原生节点参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _native 原生节点参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNative(const NativeNodeInfo& _native);

                    /**
                     * 判断参数 Native 是否已赋值
                     * @return Native 是否已赋值
                     * 
                     */
                    bool NativeHasBeenSet() const;

                    /**
                     * 获取普通节点参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Regular 普通节点参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RegularNodeInfo GetRegular() const;

                    /**
                     * 设置普通节点参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _regular 普通节点参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegular(const RegularNodeInfo& _regular);

                    /**
                     * 判断参数 Regular 是否已赋值
                     * @return Regular 是否已赋值
                     * 
                     */
                    bool RegularHasBeenSet() const;

                    /**
                     * 获取超级节点参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Super 超级节点参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SuperNodeInfo GetSuper() const;

                    /**
                     * 设置超级节点参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _super 超级节点参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSuper(const SuperNodeInfo& _super);

                    /**
                     * 判断参数 Super 是否已赋值
                     * @return Super 是否已赋值
                     * 
                     */
                    bool SuperHasBeenSet() const;

                    /**
                     * 获取第三方节点参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return External 第三方节点参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ExternalNodeInfo GetExternal() const;

                    /**
                     * 设置第三方节点参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _external 第三方节点参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExternal(const ExternalNodeInfo& _external);

                    /**
                     * 判断参数 External 是否已赋值
                     * @return External 是否已赋值
                     * 
                     */
                    bool ExternalHasBeenSet() const;

                    /**
                     * 获取节点类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeType 节点类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置节点类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeType 节点类型
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
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_failedReason;
                    bool m_failedReasonHasBeenSet;

                    /**
                     * 实例的状态
- initializing创建中
- running 运行中
- failed 异常
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * 是否不可调度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_unschedulable;
                    bool m_unschedulableHasBeenSet;

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
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodePoolId;
                    bool m_nodePoolIdHasBeenSet;

                    /**
                     * 原生节点参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    NativeNodeInfo m_native;
                    bool m_nativeHasBeenSet;

                    /**
                     * 普通节点参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RegularNodeInfo m_regular;
                    bool m_regularHasBeenSet;

                    /**
                     * 超级节点参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SuperNodeInfo m_super;
                    bool m_superHasBeenSet;

                    /**
                     * 第三方节点参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ExternalNodeInfo m_external;
                    bool m_externalHasBeenSet;

                    /**
                     * 节点类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_INSTANCE_H_
