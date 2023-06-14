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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_CREATECRONJOBREQUEST_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_CREATECRONJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateCronJob请求参数结构体
                */
                class CreateCronJobRequest : public AbstractModel
                {
                public:
                    CreateCronJobRequest();
                    ~CreateCronJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取定时任务名字
                     * @return Name 定时任务名字
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置定时任务名字
                     * @param _name 定时任务名字
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
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取场景ID
                     * @return ScenarioId 场景ID
                     * 
                     */
                    std::string GetScenarioId() const;

                    /**
                     * 设置场景ID
                     * @param _scenarioId 场景ID
                     * 
                     */
                    void SetScenarioId(const std::string& _scenarioId);

                    /**
                     * 判断参数 ScenarioId 是否已赋值
                     * @return ScenarioId 是否已赋值
                     * 
                     */
                    bool ScenarioIdHasBeenSet() const;

                    /**
                     * 获取场景名称
                     * @return ScenarioName 场景名称
                     * 
                     */
                    std::string GetScenarioName() const;

                    /**
                     * 设置场景名称
                     * @param _scenarioName 场景名称
                     * 
                     */
                    void SetScenarioName(const std::string& _scenarioName);

                    /**
                     * 判断参数 ScenarioName 是否已赋值
                     * @return ScenarioName 是否已赋值
                     * 
                     */
                    bool ScenarioNameHasBeenSet() const;

                    /**
                     * 获取执行频率类型，1:只执行一次; 2:日粒度; 3:周粒度; 4:高级
                     * @return FrequencyType 执行频率类型，1:只执行一次; 2:日粒度; 3:周粒度; 4:高级
                     * 
                     */
                    int64_t GetFrequencyType() const;

                    /**
                     * 设置执行频率类型，1:只执行一次; 2:日粒度; 3:周粒度; 4:高级
                     * @param _frequencyType 执行频率类型，1:只执行一次; 2:日粒度; 3:周粒度; 4:高级
                     * 
                     */
                    void SetFrequencyType(const int64_t& _frequencyType);

                    /**
                     * 判断参数 FrequencyType 是否已赋值
                     * @return FrequencyType 是否已赋值
                     * 
                     */
                    bool FrequencyTypeHasBeenSet() const;

                    /**
                     * 获取cron表达式
                     * @return CronExpression cron表达式
                     * 
                     */
                    std::string GetCronExpression() const;

                    /**
                     * 设置cron表达式
                     * @param _cronExpression cron表达式
                     * 
                     */
                    void SetCronExpression(const std::string& _cronExpression);

                    /**
                     * 判断参数 CronExpression 是否已赋值
                     * @return CronExpression 是否已赋值
                     * 
                     */
                    bool CronExpressionHasBeenSet() const;

                    /**
                     * 获取任务发起人
                     * @return JobOwner 任务发起人
                     * 
                     */
                    std::string GetJobOwner() const;

                    /**
                     * 设置任务发起人
                     * @param _jobOwner 任务发起人
                     * 
                     */
                    void SetJobOwner(const std::string& _jobOwner);

                    /**
                     * 判断参数 JobOwner 是否已赋值
                     * @return JobOwner 是否已赋值
                     * 
                     */
                    bool JobOwnerHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
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
                     * 获取Notice ID
                     * @return NoticeId Notice ID
                     * 
                     */
                    std::string GetNoticeId() const;

                    /**
                     * 设置Notice ID
                     * @param _noticeId Notice ID
                     * 
                     */
                    void SetNoticeId(const std::string& _noticeId);

                    /**
                     * 判断参数 NoticeId 是否已赋值
                     * @return NoticeId 是否已赋值
                     * 
                     */
                    bool NoticeIdHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Note 备注
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置备注
                     * @param _note 备注
                     * 
                     */
                    void SetNote(const std::string& _note);

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     * 
                     */
                    bool NoteHasBeenSet() const;

                private:

                    /**
                     * 定时任务名字
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 场景ID
                     */
                    std::string m_scenarioId;
                    bool m_scenarioIdHasBeenSet;

                    /**
                     * 场景名称
                     */
                    std::string m_scenarioName;
                    bool m_scenarioNameHasBeenSet;

                    /**
                     * 执行频率类型，1:只执行一次; 2:日粒度; 3:周粒度; 4:高级
                     */
                    int64_t m_frequencyType;
                    bool m_frequencyTypeHasBeenSet;

                    /**
                     * cron表达式
                     */
                    std::string m_cronExpression;
                    bool m_cronExpressionHasBeenSet;

                    /**
                     * 任务发起人
                     */
                    std::string m_jobOwner;
                    bool m_jobOwnerHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Notice ID
                     */
                    std::string m_noticeId;
                    bool m_noticeIdHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_CREATECRONJOBREQUEST_H_
