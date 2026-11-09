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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_MODIFYDBINSTANCERESPONSE_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_MODIFYDBINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * ModifyDBInstance返回参数结构体
                */
                class ModifyDBInstanceResponse : public AbstractModel
                {
                public:
                    ModifyDBInstanceResponse();
                    ~ModifyDBInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>异步任务ID，DryRun=false时返回。根据此ID可以调用查询任务接口获取任务状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FlowId <p>异步任务ID，DryRun=false时返回。根据此ID可以调用查询任务接口获取任务状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFlowId() const;

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取<p>订单号，预付费场景下返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DealName <p>订单号，预付费场景下返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDealName() const;

                    /**
                     * 判断参数 DealName 是否已赋值
                     * @return DealName 是否已赋值
                     * 
                     */
                    bool DealNameHasBeenSet() const;

                    /**
                     * 获取<p>是否原地变配，DryRun=true时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsInPlaceModification <p>是否原地变配，DryRun=true时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsInPlaceModification() const;

                    /**
                     * 判断参数 IsInPlaceModification 是否已赋值
                     * @return IsInPlaceModification 是否已赋值
                     * 
                     */
                    bool IsInPlaceModificationHasBeenSet() const;

                    /**
                     * 获取<p>是否迁移变配，DryRun=true时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsMigrateModification <p>是否迁移变配，DryRun=true时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsMigrateModification() const;

                    /**
                     * 判断参数 IsMigrateModification 是否已赋值
                     * @return IsMigrateModification 是否已赋值
                     * 
                     */
                    bool IsMigrateModificationHasBeenSet() const;

                    /**
                     * 获取<p>变配计划描述，DryRun=true时返回，描述将执行的变配子流程编排</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyPlan <p>变配计划描述，DryRun=true时返回，描述将执行的变配子流程编排</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifyPlan() const;

                    /**
                     * 判断参数 ModifyPlan 是否已赋值
                     * @return ModifyPlan 是否已赋值
                     * 
                     */
                    bool ModifyPlanHasBeenSet() const;

                private:

                    /**
                     * <p>异步任务ID，DryRun=false时返回。根据此ID可以调用查询任务接口获取任务状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * <p>订单号，预付费场景下返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dealName;
                    bool m_dealNameHasBeenSet;

                    /**
                     * <p>是否原地变配，DryRun=true时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isInPlaceModification;
                    bool m_isInPlaceModificationHasBeenSet;

                    /**
                     * <p>是否迁移变配，DryRun=true时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isMigrateModification;
                    bool m_isMigrateModificationHasBeenSet;

                    /**
                     * <p>变配计划描述，DryRun=true时返回，描述将执行的变配子流程编排</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifyPlan;
                    bool m_modifyPlanHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_MODIFYDBINSTANCERESPONSE_H_
