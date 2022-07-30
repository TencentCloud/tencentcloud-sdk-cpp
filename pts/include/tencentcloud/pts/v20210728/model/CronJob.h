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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_CRONJOB_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_CRONJOB_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * 定时任务
                */
                class CronJob : public AbstractModel
                {
                public:
                    CronJob();
                    ~CronJob() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取定时任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CronJobId 定时任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCronJobId() const;

                    /**
                     * 设置定时任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CronJobId 定时任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCronJobId(const std::string& _cronJobId);

                    /**
                     * 判断参数 CronJobId 是否已赋值
                     * @return CronJobId 是否已赋值
                     */
                    bool CronJobIdHasBeenSet() const;

                    /**
                     * 获取定时任务名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 定时任务名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetName() const;

                    /**
                     * 设置定时任务名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Name 定时任务名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProjectId 项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取场景ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScenarioId 场景ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetScenarioId() const;

                    /**
                     * 设置场景ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ScenarioId 场景ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetScenarioId(const std::string& _scenarioId);

                    /**
                     * 判断参数 ScenarioId 是否已赋值
                     * @return ScenarioId 是否已赋值
                     */
                    bool ScenarioIdHasBeenSet() const;

                    /**
                     * 获取场景名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScenarioName 场景名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetScenarioName() const;

                    /**
                     * 设置场景名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ScenarioName 场景名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetScenarioName(const std::string& _scenarioName);

                    /**
                     * 判断参数 ScenarioName 是否已赋值
                     * @return ScenarioName 是否已赋值
                     */
                    bool ScenarioNameHasBeenSet() const;

                    /**
                     * 获取cron 表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CronExpression cron 表达式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCronExpression() const;

                    /**
                     * 设置cron 表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CronExpression cron 表达式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCronExpression(const std::string& _cronExpression);

                    /**
                     * 判断参数 CronExpression 是否已赋值
                     * @return CronExpression 是否已赋值
                     */
                    bool CronExpressionHasBeenSet() const;

                    /**
                     * 获取结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EndTime 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取中止原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AbortReason 中止原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetAbortReason() const;

                    /**
                     * 设置中止原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AbortReason 中止原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAbortReason(const int64_t& _abortReason);

                    /**
                     * 判断参数 AbortReason 是否已赋值
                     * @return AbortReason 是否已赋值
                     */
                    bool AbortReasonHasBeenSet() const;

                    /**
                     * 获取定时任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 定时任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置定时任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 定时任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Notice ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NoticeId Notice ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNoticeId() const;

                    /**
                     * 设置Notice ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NoticeId Notice ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNoticeId(const std::string& _noticeId);

                    /**
                     * 判断参数 NoticeId 是否已赋值
                     * @return NoticeId 是否已赋值
                     */
                    bool NoticeIdHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedAt 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreatedAt 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedAt 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UpdatedAt 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取执行频率类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrequencyType 执行频率类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetFrequencyType() const;

                    /**
                     * 设置执行频率类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FrequencyType 执行频率类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFrequencyType(const int64_t& _frequencyType);

                    /**
                     * 判断参数 FrequencyType 是否已赋值
                     * @return FrequencyType 是否已赋值
                     */
                    bool FrequencyTypeHasBeenSet() const;

                    /**
                     * 获取备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Note 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNote() const;

                    /**
                     * 设置备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Note 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNote(const std::string& _note);

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     */
                    bool NoteHasBeenSet() const;

                    /**
                     * 获取tom
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobOwner tom
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetJobOwner() const;

                    /**
                     * 设置tom
注意：此字段可能返回 null，表示取不到有效值。
                     * @param JobOwner tom
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetJobOwner(const std::string& _jobOwner);

                    /**
                     * 判断参数 JobOwner 是否已赋值
                     * @return JobOwner 是否已赋值
                     */
                    bool JobOwnerHasBeenSet() const;

                private:

                    /**
                     * 定时任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cronJobId;
                    bool m_cronJobIdHasBeenSet;

                    /**
                     * 定时任务名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 场景ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scenarioId;
                    bool m_scenarioIdHasBeenSet;

                    /**
                     * 场景名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scenarioName;
                    bool m_scenarioNameHasBeenSet;

                    /**
                     * cron 表达式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cronExpression;
                    bool m_cronExpressionHasBeenSet;

                    /**
                     * 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 中止原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_abortReason;
                    bool m_abortReasonHasBeenSet;

                    /**
                     * 定时任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Notice ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_noticeId;
                    bool m_noticeIdHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * 执行频率类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_frequencyType;
                    bool m_frequencyTypeHasBeenSet;

                    /**
                     * 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * tom
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobOwner;
                    bool m_jobOwnerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_CRONJOB_H_
