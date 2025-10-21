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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETREMINDRECORDS_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETREMINDRECORDS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 预算历史详情
                */
                class BudgetRemindRecords : public AbstractModel
                {
                public:
                    BudgetRemindRecords();
                    ~BudgetRemindRecords() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取预算周期
                     * @return DateDesc 预算周期
                     * 
                     */
                    std::string GetDateDesc() const;

                    /**
                     * 设置预算周期
                     * @param _dateDesc 预算周期
                     * 
                     */
                    void SetDateDesc(const std::string& _dateDesc);

                    /**
                     * 判断参数 DateDesc 是否已赋值
                     * @return DateDesc 是否已赋值
                     * 
                     */
                    bool DateDescHasBeenSet() const;

                    /**
                     * 获取实际费用
                     * @return RealCost 实际费用
                     * 
                     */
                    std::string GetRealCost() const;

                    /**
                     * 设置实际费用
                     * @param _realCost 实际费用
                     * 
                     */
                    void SetRealCost(const std::string& _realCost);

                    /**
                     * 判断参数 RealCost 是否已赋值
                     * @return RealCost 是否已赋值
                     * 
                     */
                    bool RealCostHasBeenSet() const;

                    /**
                     * 获取预算值额度
                     * @return BudgetQuota 预算值额度
                     * 
                     */
                    std::string GetBudgetQuota() const;

                    /**
                     * 设置预算值额度
                     * @param _budgetQuota 预算值额度
                     * 
                     */
                    void SetBudgetQuota(const std::string& _budgetQuota);

                    /**
                     * 判断参数 BudgetQuota 是否已赋值
                     * @return BudgetQuota 是否已赋值
                     * 
                     */
                    bool BudgetQuotaHasBeenSet() const;

                    /**
                     * 获取提醒类型。
枚举值:
BUDGET 预算提醒,
WAVE 波动提醒.
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmType 提醒类型。
枚举值:
BUDGET 预算提醒,
WAVE 波动提醒.
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlarmType() const;

                    /**
                     * 设置提醒类型。
枚举值:
BUDGET 预算提醒,
WAVE 波动提醒.
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmType 提醒类型。
枚举值:
BUDGET 预算提醒,
WAVE 波动提醒.
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlarmType(const std::string& _alarmType);

                    /**
                     * 判断参数 AlarmType 是否已赋值
                     * @return AlarmType 是否已赋值
                     * 
                     */
                    bool AlarmTypeHasBeenSet() const;

                    /**
                     * 获取消息内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MessageContent 消息内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMessageContent() const;

                    /**
                     * 设置消息内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _messageContent 消息内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMessageContent(const std::string& _messageContent);

                    /**
                     * 判断参数 MessageContent 是否已赋值
                     * @return MessageContent 是否已赋值
                     * 
                     */
                    bool MessageContentHasBeenSet() const;

                    /**
                     * 获取发送时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SendTime 发送时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSendTime() const;

                    /**
                     * 设置发送时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sendTime 发送时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSendTime(const int64_t& _sendTime);

                    /**
                     * 判断参数 SendTime 是否已赋值
                     * @return SendTime 是否已赋值
                     * 
                     */
                    bool SendTimeHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
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
                     * 预算周期
                     */
                    std::string m_dateDesc;
                    bool m_dateDescHasBeenSet;

                    /**
                     * 实际费用
                     */
                    std::string m_realCost;
                    bool m_realCostHasBeenSet;

                    /**
                     * 预算值额度
                     */
                    std::string m_budgetQuota;
                    bool m_budgetQuotaHasBeenSet;

                    /**
                     * 提醒类型。
枚举值:
BUDGET 预算提醒,
WAVE 波动提醒.
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alarmType;
                    bool m_alarmTypeHasBeenSet;

                    /**
                     * 消息内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_messageContent;
                    bool m_messageContentHasBeenSet;

                    /**
                     * 发送时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sendTime;
                    bool m_sendTimeHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETREMINDRECORDS_H_
