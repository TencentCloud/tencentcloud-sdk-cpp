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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETSENDINFODTO_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETSENDINFODTO_H_

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
                * 预算提醒
                */
                class BudgetSendInfoDto : public AbstractModel
                {
                public:
                    BudgetSendInfoDto();
                    ~BudgetSendInfoDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取通知周期,逗号隔开。
枚举值:
周一:1,
周二:2,
周天:7
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WeekDays 通知周期,逗号隔开。
枚举值:
周一:1,
周二:2,
周天:7
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<uint64_t> GetWeekDays() const;

                    /**
                     * 设置通知周期,逗号隔开。
枚举值:
周一:1,
周二:2,
周天:7
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _weekDays 通知周期,逗号隔开。
枚举值:
周一:1,
周二:2,
周天:7
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWeekDays(const std::vector<uint64_t>& _weekDays);

                    /**
                     * 判断参数 WeekDays 是否已赋值
                     * @return WeekDays 是否已赋值
                     * 
                     */
                    bool WeekDaysHasBeenSet() const;

                    /**
                     * 获取接收类型。
枚举值:
UIN 默认模式,
USER 用户,
GROUP 用户组。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReceiverType 接收类型。
枚举值:
UIN 默认模式,
USER 用户,
GROUP 用户组。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReceiverType() const;

                    /**
                     * 设置接收类型。
枚举值:
UIN 默认模式,
USER 用户,
GROUP 用户组。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _receiverType 接收类型。
枚举值:
UIN 默认模式,
USER 用户,
GROUP 用户组。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReceiverType(const std::string& _receiverType);

                    /**
                     * 判断参数 ReceiverType 是否已赋值
                     * @return ReceiverType 是否已赋值
                     * 
                     */
                    bool ReceiverTypeHasBeenSet() const;

                    /**
                     * 获取发送接收窗口HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 发送接收窗口HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置发送接收窗口HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 发送接收窗口HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取预算配置id（预算名称）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BudgetId 预算配置id（预算名称）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBudgetId() const;

                    /**
                     * 设置预算配置id（预算名称）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _budgetId 预算配置id（预算名称）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBudgetId(const int64_t& _budgetId);

                    /**
                     * 判断参数 BudgetId 是否已赋值
                     * @return BudgetId 是否已赋值
                     * 
                     */
                    bool BudgetIdHasBeenSet() const;

                    /**
                     * 获取接收渠道,逗号隔开;
枚举值:
TITLE 标题，
SITE 站内信,
EMAIL 邮件,
SMS 短信,
WECHAT 微信,
VOICE 语音,
QYWX 企业微信;
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NoticeWays 接收渠道,逗号隔开;
枚举值:
TITLE 标题，
SITE 站内信,
EMAIL 邮件,
SMS 短信,
WECHAT 微信,
VOICE 语音,
QYWX 企业微信;
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetNoticeWays() const;

                    /**
                     * 设置接收渠道,逗号隔开;
枚举值:
TITLE 标题，
SITE 站内信,
EMAIL 邮件,
SMS 短信,
WECHAT 微信,
VOICE 语音,
QYWX 企业微信;
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _noticeWays 接收渠道,逗号隔开;
枚举值:
TITLE 标题，
SITE 站内信,
EMAIL 邮件,
SMS 短信,
WECHAT 微信,
VOICE 语音,
QYWX 企业微信;
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNoticeWays(const std::vector<std::string>& _noticeWays);

                    /**
                     * 判断参数 NoticeWays 是否已赋值
                     * @return NoticeWays 是否已赋值
                     * 
                     */
                    bool NoticeWaysHasBeenSet() const;

                    /**
                     * 获取发送开始窗口HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 发送开始窗口HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置发送开始窗口HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 发送开始窗口HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取用户id,用户组id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReceiverIds 用户id,用户组id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<uint64_t> GetReceiverIds() const;

                    /**
                     * 设置用户id,用户组id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _receiverIds 用户id,用户组id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReceiverIds(const std::vector<uint64_t>& _receiverIds);

                    /**
                     * 判断参数 ReceiverIds 是否已赋值
                     * @return ReceiverIds 是否已赋值
                     * 
                     */
                    bool ReceiverIdsHasBeenSet() const;

                private:

                    /**
                     * 通知周期,逗号隔开。
枚举值:
周一:1,
周二:2,
周天:7
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<uint64_t> m_weekDays;
                    bool m_weekDaysHasBeenSet;

                    /**
                     * 接收类型。
枚举值:
UIN 默认模式,
USER 用户,
GROUP 用户组。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_receiverType;
                    bool m_receiverTypeHasBeenSet;

                    /**
                     * 发送接收窗口HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 预算配置id（预算名称）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_budgetId;
                    bool m_budgetIdHasBeenSet;

                    /**
                     * 接收渠道,逗号隔开;
枚举值:
TITLE 标题，
SITE 站内信,
EMAIL 邮件,
SMS 短信,
WECHAT 微信,
VOICE 语音,
QYWX 企业微信;
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_noticeWays;
                    bool m_noticeWaysHasBeenSet;

                    /**
                     * 发送开始窗口HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 用户id,用户组id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<uint64_t> m_receiverIds;
                    bool m_receiverIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETSENDINFODTO_H_
