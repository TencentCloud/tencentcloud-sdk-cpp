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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_LOADBALANCEROPERATIONLOCKSITEM_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_LOADBALANCEROPERATIONLOCKSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * 应用型负载均衡操作锁配置。
                */
                class LoadBalancerOperationLocksItem : public AbstractModel
                {
                public:
                    LoadBalancerOperationLocksItem();
                    ~LoadBalancerOperationLocksItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取锁定的原因。在**LoadBalancerStatus**为**Abnormal**时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LockReason 锁定的原因。在**LoadBalancerStatus**为**Abnormal**时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLockReason() const;

                    /**
                     * 设置锁定的原因。在**LoadBalancerStatus**为**Abnormal**时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lockReason 锁定的原因。在**LoadBalancerStatus**为**Abnormal**时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLockReason(const std::string& _lockReason);

                    /**
                     * 判断参数 LockReason 是否已赋值
                     * @return LockReason 是否已赋值
                     * 
                     */
                    bool LockReasonHasBeenSet() const;

                    /**
                     * 获取锁定的类型。取值 ：

- **SecurityLocked**：安全锁定。

- **RelatedResourceLocked**：关联锁定。

- **FinancialLocked**：欠费锁定。

- **ResidualLocked**：残留锁定。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LockType 锁定的类型。取值 ：

- **SecurityLocked**：安全锁定。

- **RelatedResourceLocked**：关联锁定。

- **FinancialLocked**：欠费锁定。

- **ResidualLocked**：残留锁定。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLockType() const;

                    /**
                     * 设置锁定的类型。取值 ：

- **SecurityLocked**：安全锁定。

- **RelatedResourceLocked**：关联锁定。

- **FinancialLocked**：欠费锁定。

- **ResidualLocked**：残留锁定。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lockType 锁定的类型。取值 ：

- **SecurityLocked**：安全锁定。

- **RelatedResourceLocked**：关联锁定。

- **FinancialLocked**：欠费锁定。

- **ResidualLocked**：残留锁定。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLockType(const std::string& _lockType);

                    /**
                     * 判断参数 LockType 是否已赋值
                     * @return LockType 是否已赋值
                     * 
                     */
                    bool LockTypeHasBeenSet() const;

                private:

                    /**
                     * 锁定的原因。在**LoadBalancerStatus**为**Abnormal**时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lockReason;
                    bool m_lockReasonHasBeenSet;

                    /**
                     * 锁定的类型。取值 ：

- **SecurityLocked**：安全锁定。

- **RelatedResourceLocked**：关联锁定。

- **FinancialLocked**：欠费锁定。

- **ResidualLocked**：残留锁定。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lockType;
                    bool m_lockTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_LOADBALANCEROPERATIONLOCKSITEM_H_
