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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEPREDICTIVEDIALINGCAMPAIGNSELEMENT_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEPREDICTIVEDIALINGCAMPAIGNSELEMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 查询预测式外呼任务列表元素
                */
                class DescribePredictiveDialingCampaignsElement : public AbstractModel
                {
                public:
                    DescribePredictiveDialingCampaignsElement();
                    ~DescribePredictiveDialingCampaignsElement() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CampaignId 任务 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCampaignId() const;

                    /**
                     * 设置任务 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _campaignId 任务 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCampaignId(const int64_t& _campaignId);

                    /**
                     * 判断参数 CampaignId 是否已赋值
                     * @return CampaignId 是否已赋值
                     * 
                     */
                    bool CampaignIdHasBeenSet() const;

                    /**
                     * 获取任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 任务名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取任务状态 0 待开始 1 进行中 2 已暂停 3 已终止 4 已完成
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 任务状态 0 待开始 1 进行中 2 已暂停 3 已终止 4 已完成
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置任务状态 0 待开始 1 进行中 2 已暂停 3 已终止 4 已完成
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 任务状态 0 待开始 1 进行中 2 已暂停 3 已终止 4 已完成
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取任务状态原因 0 正常 1 手动结束 2 超时结束
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusReason 任务状态原因 0 正常 1 手动结束 2 超时结束
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatusReason() const;

                    /**
                     * 设置任务状态原因 0 正常 1 手动结束 2 超时结束
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statusReason 任务状态原因 0 正常 1 手动结束 2 超时结束
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatusReason(const int64_t& _statusReason);

                    /**
                     * 判断参数 StatusReason 是否已赋值
                     * @return StatusReason 是否已赋值
                     * 
                     */
                    bool StatusReasonHasBeenSet() const;

                    /**
                     * 获取被叫号码个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CalleeCount 被叫号码个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCalleeCount() const;

                    /**
                     * 设置被叫号码个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _calleeCount 被叫号码个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCalleeCount(const int64_t& _calleeCount);

                    /**
                     * 判断参数 CalleeCount 是否已赋值
                     * @return CalleeCount 是否已赋值
                     * 
                     */
                    bool CalleeCountHasBeenSet() const;

                    /**
                     * 获取已完成的被叫个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FinishedCalleeCount 已完成的被叫个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFinishedCalleeCount() const;

                    /**
                     * 设置已完成的被叫个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _finishedCalleeCount 已完成的被叫个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFinishedCalleeCount(const int64_t& _finishedCalleeCount);

                    /**
                     * 判断参数 FinishedCalleeCount 是否已赋值
                     * @return FinishedCalleeCount 是否已赋值
                     * 
                     */
                    bool FinishedCalleeCountHasBeenSet() const;

                    /**
                     * 获取相同应用内多个任务运行优先级，从高到底 1 - 5
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Priority 相同应用内多个任务运行优先级，从高到底 1 - 5
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置相同应用内多个任务运行优先级，从高到底 1 - 5
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _priority 相同应用内多个任务运行优先级，从高到底 1 - 5
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取使用的座席技能组 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SkillGroupId 使用的座席技能组 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSkillGroupId() const;

                    /**
                     * 设置使用的座席技能组 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _skillGroupId 使用的座席技能组 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSkillGroupId(const int64_t& _skillGroupId);

                    /**
                     * 判断参数 SkillGroupId 是否已赋值
                     * @return SkillGroupId 是否已赋值
                     * 
                     */
                    bool SkillGroupIdHasBeenSet() const;

                private:

                    /**
                     * 任务 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_campaignId;
                    bool m_campaignIdHasBeenSet;

                    /**
                     * 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 任务状态 0 待开始 1 进行中 2 已暂停 3 已终止 4 已完成
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务状态原因 0 正常 1 手动结束 2 超时结束
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_statusReason;
                    bool m_statusReasonHasBeenSet;

                    /**
                     * 被叫号码个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_calleeCount;
                    bool m_calleeCountHasBeenSet;

                    /**
                     * 已完成的被叫个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_finishedCalleeCount;
                    bool m_finishedCalleeCountHasBeenSet;

                    /**
                     * 相同应用内多个任务运行优先级，从高到底 1 - 5
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 使用的座席技能组 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_skillGroupId;
                    bool m_skillGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEPREDICTIVEDIALINGCAMPAIGNSELEMENT_H_
