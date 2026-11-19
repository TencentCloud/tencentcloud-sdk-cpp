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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_SCHEDULEDTASKDETAIL_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_SCHEDULEDTASKDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 定时任务详情
                */
                class ScheduledTaskDetail : public AbstractModel
                {
                public:
                    ScheduledTaskDetail();
                    ~ScheduledTaskDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>定时任务唯一标识</p>
                     * @return ScheduledTaskId <p>定时任务唯一标识</p>
                     * 
                     */
                    std::string GetScheduledTaskId() const;

                    /**
                     * 设置<p>定时任务唯一标识</p>
                     * @param _scheduledTaskId <p>定时任务唯一标识</p>
                     * 
                     */
                    void SetScheduledTaskId(const std::string& _scheduledTaskId);

                    /**
                     * 判断参数 ScheduledTaskId 是否已赋值
                     * @return ScheduledTaskId 是否已赋值
                     * 
                     */
                    bool ScheduledTaskIdHasBeenSet() const;

                    /**
                     * 获取<p>任务名称</p>
                     * @return Name <p>任务名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>任务名称</p>
                     * @param _name <p>任务名称</p>
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
                     * 获取<p>任务提示词</p>
                     * @return Prompt <p>任务提示词</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>任务提示词</p>
                     * @param _prompt <p>任务提示词</p>
                     * 
                     */
                    void SetPrompt(const std::string& _prompt);

                    /**
                     * 判断参数 Prompt 是否已赋值
                     * @return Prompt 是否已赋值
                     * 
                     */
                    bool PromptHasBeenSet() const;

                    /**
                     * 获取<p>六段 cron 表达式</p>
                     * @return Schedule <p>六段 cron 表达式</p>
                     * 
                     */
                    std::string GetSchedule() const;

                    /**
                     * 设置<p>六段 cron 表达式</p>
                     * @param _schedule <p>六段 cron 表达式</p>
                     * 
                     */
                    void SetSchedule(const std::string& _schedule);

                    /**
                     * 判断参数 Schedule 是否已赋值
                     * @return Schedule 是否已赋值
                     * 
                     */
                    bool ScheduleHasBeenSet() const;

                    /**
                     * 获取<p>任务状态：1=ACTIVE，2=PAUSED</p>
                     * @return Status <p>任务状态：1=ACTIVE，2=PAUSED</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>任务状态：1=ACTIVE，2=PAUSED</p>
                     * @param _status <p>任务状态：1=ACTIVE，2=PAUSED</p>
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
                     * 获取<p>会话类型：1=数据分析，2=数据工程</p>
                     * @return SessionType <p>会话类型：1=数据分析，2=数据工程</p>
                     * 
                     */
                    int64_t GetSessionType() const;

                    /**
                     * 设置<p>会话类型：1=数据分析，2=数据工程</p>
                     * @param _sessionType <p>会话类型：1=数据分析，2=数据工程</p>
                     * 
                     */
                    void SetSessionType(const int64_t& _sessionType);

                    /**
                     * 判断参数 SessionType 是否已赋值
                     * @return SessionType 是否已赋值
                     * 
                     */
                    bool SessionTypeHasBeenSet() const;

                    /**
                     * 获取<p>分析空间 ID</p>
                     * @return AnalysisSpaceId <p>分析空间 ID</p>
                     * 
                     */
                    std::string GetAnalysisSpaceId() const;

                    /**
                     * 设置<p>分析空间 ID</p>
                     * @param _analysisSpaceId <p>分析空间 ID</p>
                     * 
                     */
                    void SetAnalysisSpaceId(const std::string& _analysisSpaceId);

                    /**
                     * 判断参数 AnalysisSpaceId 是否已赋值
                     * @return AnalysisSpaceId 是否已赋值
                     * 
                     */
                    bool AnalysisSpaceIdHasBeenSet() const;

                    /**
                     * 获取<p>工作空间 ID</p>
                     * @return WorkspaceId <p>工作空间 ID</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>工作空间 ID</p>
                     * @param _workspaceId <p>工作空间 ID</p>
                     * 
                     */
                    void SetWorkspaceId(const std::string& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取<p>创建人 UIN</p>
                     * @return CreateUserUin <p>创建人 UIN</p>
                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置<p>创建人 UIN</p>
                     * @param _createUserUin <p>创建人 UIN</p>
                     * 
                     */
                    void SetCreateUserUin(const std::string& _createUserUin);

                    /**
                     * 判断参数 CreateUserUin 是否已赋值
                     * @return CreateUserUin 是否已赋值
                     * 
                     */
                    bool CreateUserUinHasBeenSet() const;

                    /**
                     * 获取<p>创建时间，毫秒级 Unix 时间戳字符串</p>
                     * @return CreateTime <p>创建时间，毫秒级 Unix 时间戳字符串</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间，毫秒级 Unix 时间戳字符串</p>
                     * @param _createTime <p>创建时间，毫秒级 Unix 时间戳字符串</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>最近修改时间，毫秒级 Unix 时间戳字符串</p>
                     * @return ModifyTime <p>最近修改时间，毫秒级 Unix 时间戳字符串</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>最近修改时间，毫秒级 Unix 时间戳字符串</p>
                     * @param _modifyTime <p>最近修改时间，毫秒级 Unix 时间戳字符串</p>
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取<p>生效开始时间，上海时区本地零点的毫秒时间戳字符串；0 表示不传</p>
                     * @return StartTime <p>生效开始时间，上海时区本地零点的毫秒时间戳字符串；0 表示不传</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>生效开始时间，上海时区本地零点的毫秒时间戳字符串；0 表示不传</p>
                     * @param _startTime <p>生效开始时间，上海时区本地零点的毫秒时间戳字符串；0 表示不传</p>
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
                     * 获取<p>生效结束时间，上海时区本地零点的毫秒时间戳字符串；0 表示不传</p>
                     * @return EndTime <p>生效结束时间，上海时区本地零点的毫秒时间戳字符串；0 表示不传</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>生效结束时间，上海时区本地零点的毫秒时间戳字符串；0 表示不传</p>
                     * @param _endTime <p>生效结束时间，上海时区本地零点的毫秒时间戳字符串；0 表示不传</p>
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
                     * 获取<p>技能 ID 列表</p>
                     * @return SkillIds <p>技能 ID 列表</p>
                     * 
                     */
                    std::string GetSkillIds() const;

                    /**
                     * 设置<p>技能 ID 列表</p>
                     * @param _skillIds <p>技能 ID 列表</p>
                     * 
                     */
                    void SetSkillIds(const std::string& _skillIds);

                    /**
                     * 判断参数 SkillIds 是否已赋值
                     * @return SkillIds 是否已赋值
                     * 
                     */
                    bool SkillIdsHasBeenSet() const;

                    /**
                     * 获取<p>模型 ID</p>
                     * @return ModelId <p>模型 ID</p>
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置<p>模型 ID</p>
                     * @param _modelId <p>模型 ID</p>
                     * 
                     */
                    void SetModelId(const std::string& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * 
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取<p>调度类型：1=每天，2=间隔，3=单次</p>
                     * @return ScheduleType <p>调度类型：1=每天，2=间隔，3=单次</p>
                     * 
                     */
                    int64_t GetScheduleType() const;

                    /**
                     * 设置<p>调度类型：1=每天，2=间隔，3=单次</p>
                     * @param _scheduleType <p>调度类型：1=每天，2=间隔，3=单次</p>
                     * 
                     */
                    void SetScheduleType(const int64_t& _scheduleType);

                    /**
                     * 判断参数 ScheduleType 是否已赋值
                     * @return ScheduleType 是否已赋值
                     * 
                     */
                    bool ScheduleTypeHasBeenSet() const;

                    /**
                     * 获取<p>最近修改人 UIN</p>
                     * @return UpdateUserUin <p>最近修改人 UIN</p>
                     * 
                     */
                    std::string GetUpdateUserUin() const;

                    /**
                     * 设置<p>最近修改人 UIN</p>
                     * @param _updateUserUin <p>最近修改人 UIN</p>
                     * 
                     */
                    void SetUpdateUserUin(const std::string& _updateUserUin);

                    /**
                     * 判断参数 UpdateUserUin 是否已赋值
                     * @return UpdateUserUin 是否已赋值
                     * 
                     */
                    bool UpdateUserUinHasBeenSet() const;

                    /**
                     * 获取<p>mcpId列表（逗号分隔）</p>
                     * @return MCPIds <p>mcpId列表（逗号分隔）</p>
                     * 
                     */
                    std::string GetMCPIds() const;

                    /**
                     * 设置<p>mcpId列表（逗号分隔）</p>
                     * @param _mCPIds <p>mcpId列表（逗号分隔）</p>
                     * 
                     */
                    void SetMCPIds(const std::string& _mCPIds);

                    /**
                     * 判断参数 MCPIds 是否已赋值
                     * @return MCPIds 是否已赋值
                     * 
                     */
                    bool MCPIdsHasBeenSet() const;

                private:

                    /**
                     * <p>定时任务唯一标识</p>
                     */
                    std::string m_scheduledTaskId;
                    bool m_scheduledTaskIdHasBeenSet;

                    /**
                     * <p>任务名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>任务提示词</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>六段 cron 表达式</p>
                     */
                    std::string m_schedule;
                    bool m_scheduleHasBeenSet;

                    /**
                     * <p>任务状态：1=ACTIVE，2=PAUSED</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>会话类型：1=数据分析，2=数据工程</p>
                     */
                    int64_t m_sessionType;
                    bool m_sessionTypeHasBeenSet;

                    /**
                     * <p>分析空间 ID</p>
                     */
                    std::string m_analysisSpaceId;
                    bool m_analysisSpaceIdHasBeenSet;

                    /**
                     * <p>工作空间 ID</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>创建人 UIN</p>
                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                    /**
                     * <p>创建时间，毫秒级 Unix 时间戳字符串</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>最近修改时间，毫秒级 Unix 时间戳字符串</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>生效开始时间，上海时区本地零点的毫秒时间戳字符串；0 表示不传</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>生效结束时间，上海时区本地零点的毫秒时间戳字符串；0 表示不传</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>技能 ID 列表</p>
                     */
                    std::string m_skillIds;
                    bool m_skillIdsHasBeenSet;

                    /**
                     * <p>模型 ID</p>
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * <p>调度类型：1=每天，2=间隔，3=单次</p>
                     */
                    int64_t m_scheduleType;
                    bool m_scheduleTypeHasBeenSet;

                    /**
                     * <p>最近修改人 UIN</p>
                     */
                    std::string m_updateUserUin;
                    bool m_updateUserUinHasBeenSet;

                    /**
                     * <p>mcpId列表（逗号分隔）</p>
                     */
                    std::string m_mCPIds;
                    bool m_mCPIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_SCHEDULEDTASKDETAIL_H_
