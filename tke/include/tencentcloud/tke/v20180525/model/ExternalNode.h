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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_EXTERNALNODE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_EXTERNALNODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 注册节点
                */
                class ExternalNode : public AbstractModel
                {
                public:
                    ExternalNode();
                    ~ExternalNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>注册节点名称</p>
                     * @return Name <p>注册节点名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>注册节点名称</p>
                     * @param _name <p>注册节点名称</p>
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
                     * 获取<p>注册节点所属节点池</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodePoolId <p>注册节点所属节点池</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodePoolId() const;

                    /**
                     * 设置<p>注册节点所属节点池</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodePoolId <p>注册节点所属节点池</p>
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
                     * 获取<p>注册节点IP地址</p>
                     * @return IP <p>注册节点IP地址</p>
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置<p>注册节点IP地址</p>
                     * @param _iP <p>注册节点IP地址</p>
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取<p>注册节点地域</p>
                     * @return Location <p>注册节点地域</p>
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置<p>注册节点地域</p>
                     * @param _location <p>注册节点地域</p>
                     * 
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取<p>注册节点状态</p><p>枚举值：</p><ul><li>Running： 运行中</li><li>Failed： 异常状态</li><li>Terminating： 删除中</li><li>Draining： 驱逐中</li></ul>
                     * @return Status <p>注册节点状态</p><p>枚举值：</p><ul><li>Running： 运行中</li><li>Failed： 异常状态</li><li>Terminating： 删除中</li><li>Draining： 驱逐中</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>注册节点状态</p><p>枚举值：</p><ul><li>Running： 运行中</li><li>Failed： 异常状态</li><li>Terminating： 删除中</li><li>Draining： 驱逐中</li></ul>
                     * @param _status <p>注册节点状态</p><p>枚举值：</p><ul><li>Running： 运行中</li><li>Failed： 异常状态</li><li>Terminating： 删除中</li><li>Draining： 驱逐中</li></ul>
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
                     * 获取<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedTime <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdTime <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>异常原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Reason <p>异常原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置<p>异常原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reason <p>异常原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取<p>是否封锁。true表示已封锁，false表示未封锁</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Unschedulable <p>是否封锁。true表示已封锁，false表示未封锁</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetUnschedulable() const;

                    /**
                     * 设置<p>是否封锁。true表示已封锁，false表示未封锁</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unschedulable <p>是否封锁。true表示已封锁，false表示未封锁</p>
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

                private:

                    /**
                     * <p>注册节点名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>注册节点所属节点池</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodePoolId;
                    bool m_nodePoolIdHasBeenSet;

                    /**
                     * <p>注册节点IP地址</p>
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * <p>注册节点地域</p>
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * <p>注册节点状态</p><p>枚举值：</p><ul><li>Running： 运行中</li><li>Failed： 异常状态</li><li>Terminating： 删除中</li><li>Draining： 驱逐中</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>异常原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * <p>是否封锁。true表示已封锁，false表示未封锁</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_unschedulable;
                    bool m_unschedulableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_EXTERNALNODE_H_
