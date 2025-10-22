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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_ALARMRECEIVERGROUP_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_ALARMRECEIVERGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/QuietPeriod.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 告警接收组
                */
                class AlarmReceiverGroup : public AbstractModel
                {
                public:
                    AlarmReceiverGroup();
                    ~AlarmReceiverGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警接收人类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmRecipientType 告警接收人类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAlarmRecipientType() const;

                    /**
                     * 设置告警接收人类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmRecipientType 告警接收人类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlarmRecipientType(const uint64_t& _alarmRecipientType);

                    /**
                     * 判断参数 AlarmRecipientType 是否已赋值
                     * @return AlarmRecipientType 是否已赋值
                     * 
                     */
                    bool AlarmRecipientTypeHasBeenSet() const;

                    /**
                     * 获取告警接收人ID，多个用逗号隔开
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmRecipientId 告警接收人ID，多个用逗号隔开
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlarmRecipientId() const;

                    /**
                     * 设置告警接收人ID，多个用逗号隔开
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmRecipientId 告警接收人ID，多个用逗号隔开
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlarmRecipientId(const std::string& _alarmRecipientId);

                    /**
                     * 判断参数 AlarmRecipientId 是否已赋值
                     * @return AlarmRecipientId 是否已赋值
                     * 
                     */
                    bool AlarmRecipientIdHasBeenSet() const;

                    /**
                     * 获取告警接收人名称，多个用逗号隔开
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmRecipientName 告警接收人名称，多个用逗号隔开
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlarmRecipientName() const;

                    /**
                     * 设置告警接收人名称，多个用逗号隔开
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmRecipientName 告警接收人名称，多个用逗号隔开
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlarmRecipientName(const std::string& _alarmRecipientName);

                    /**
                     * 判断参数 AlarmRecipientName 是否已赋值
                     * @return AlarmRecipientName 是否已赋值
                     * 
                     */
                    bool AlarmRecipientNameHasBeenSet() const;

                    /**
                     * 获取告警方式，多个用逗号隔开
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmWay 告警方式，多个用逗号隔开
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlarmWay() const;

                    /**
                     * 设置告警方式，多个用逗号隔开
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmWay 告警方式，多个用逗号隔开
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlarmWay(const std::string& _alarmWay);

                    /**
                     * 判断参数 AlarmWay 是否已赋值
                     * @return AlarmWay 是否已赋值
                     * 
                     */
                    bool AlarmWayHasBeenSet() const;

                    /**
                     * 获取免打扰时间段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QuietPeriods 免打扰时间段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<QuietPeriod> GetQuietPeriods() const;

                    /**
                     * 设置免打扰时间段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _quietPeriods 免打扰时间段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQuietPeriods(const std::vector<QuietPeriod>& _quietPeriods);

                    /**
                     * 判断参数 QuietPeriods 是否已赋值
                     * @return QuietPeriods 是否已赋值
                     * 
                     */
                    bool QuietPeriodsHasBeenSet() const;

                    /**
                     * 获取告警渠道规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmMessageRule 告警渠道规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlarmMessageRule() const;

                    /**
                     * 设置告警渠道规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmMessageRule 告警渠道规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlarmMessageRule(const std::string& _alarmMessageRule);

                    /**
                     * 判断参数 AlarmMessageRule 是否已赋值
                     * @return AlarmMessageRule 是否已赋值
                     * 
                     */
                    bool AlarmMessageRuleHasBeenSet() const;

                private:

                    /**
                     * 告警接收人类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_alarmRecipientType;
                    bool m_alarmRecipientTypeHasBeenSet;

                    /**
                     * 告警接收人ID，多个用逗号隔开
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alarmRecipientId;
                    bool m_alarmRecipientIdHasBeenSet;

                    /**
                     * 告警接收人名称，多个用逗号隔开
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alarmRecipientName;
                    bool m_alarmRecipientNameHasBeenSet;

                    /**
                     * 告警方式，多个用逗号隔开
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alarmWay;
                    bool m_alarmWayHasBeenSet;

                    /**
                     * 免打扰时间段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<QuietPeriod> m_quietPeriods;
                    bool m_quietPeriodsHasBeenSet;

                    /**
                     * 告警渠道规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alarmMessageRule;
                    bool m_alarmMessageRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_ALARMRECEIVERGROUP_H_
