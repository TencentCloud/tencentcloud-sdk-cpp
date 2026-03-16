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
                * 第三方节点
                */
                class ExternalNode : public AbstractModel
                {
                public:
                    ExternalNode();
                    ~ExternalNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取第三方节点名称
                     * @return Name 第三方节点名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置第三方节点名称
                     * @param _name 第三方节点名称
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
                     * 获取第三方节点所属节点池
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodePoolId 第三方节点所属节点池
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodePoolId() const;

                    /**
                     * 设置第三方节点所属节点池
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodePoolId 第三方节点所属节点池
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
                     * 获取第三方IP地址
                     * @return IP 第三方IP地址
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置第三方IP地址
                     * @param _iP 第三方IP地址
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
                     * 获取第三方地域
                     * @return Location 第三方地域
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置第三方地域
                     * @param _location 第三方地域
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
                     * 获取第三方节点状态
                     * @return Status 第三方节点状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置第三方节点状态
                     * @param _status 第三方节点状态
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
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdTime 创建时间
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
                     * 获取异常原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Reason 异常原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置异常原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reason 异常原因
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
                     * 获取是否封锁。true表示已封锁，false表示未封锁
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Unschedulable 是否封锁。true表示已封锁，false表示未封锁
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetUnschedulable() const;

                    /**
                     * 设置是否封锁。true表示已封锁，false表示未封锁
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unschedulable 是否封锁。true表示已封锁，false表示未封锁
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
                     * 第三方节点名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 第三方节点所属节点池
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodePoolId;
                    bool m_nodePoolIdHasBeenSet;

                    /**
                     * 第三方IP地址
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * 第三方地域
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 第三方节点状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 异常原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * 是否封锁。true表示已封锁，false表示未封锁
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
