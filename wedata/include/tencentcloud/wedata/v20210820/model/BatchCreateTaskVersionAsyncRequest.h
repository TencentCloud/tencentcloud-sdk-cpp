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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHCREATETASKVERSIONASYNCREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHCREATETASKVERSIONASYNCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/BatchCreateTaskVersionDTO.h>
#include <tencentcloud/wedata/v20210820/model/TaskMissingInstanceStrategy.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * BatchCreateTaskVersionAsync请求参数结构体
                */
                class BatchCreateTaskVersionAsyncRequest : public AbstractModel
                {
                public:
                    BatchCreateTaskVersionAsyncRequest();
                    ~BatchCreateTaskVersionAsyncRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务信息</p>
                     * @return Tasks <p>任务信息</p>
                     * 
                     */
                    std::vector<BatchCreateTaskVersionDTO> GetTasks() const;

                    /**
                     * 设置<p>任务信息</p>
                     * @param _tasks <p>任务信息</p>
                     * 
                     */
                    void SetTasks(const std::vector<BatchCreateTaskVersionDTO>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取<p>项目ID</p>
                     * @return ProjectId <p>项目ID</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>项目ID</p>
                     * @param _projectId <p>项目ID</p>
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
                     * 获取<p>是否自动运行</p>
                     * @return AutoRun <p>是否自动运行</p>
                     * 
                     */
                    bool GetAutoRun() const;

                    /**
                     * 设置<p>是否自动运行</p>
                     * @param _autoRun <p>是否自动运行</p>
                     * 
                     */
                    void SetAutoRun(const bool& _autoRun);

                    /**
                     * 判断参数 AutoRun 是否已赋值
                     * @return AutoRun 是否已赋值
                     * 
                     */
                    bool AutoRunHasBeenSet() const;

                    /**
                     * 获取<p>告警方式:email-邮件;sms-短信;wecom-企业微信</p>
                     * @return AlarmWays <p>告警方式:email-邮件;sms-短信;wecom-企业微信</p>
                     * 
                     */
                    std::string GetAlarmWays() const;

                    /**
                     * 设置<p>告警方式:email-邮件;sms-短信;wecom-企业微信</p>
                     * @param _alarmWays <p>告警方式:email-邮件;sms-短信;wecom-企业微信</p>
                     * 
                     */
                    void SetAlarmWays(const std::string& _alarmWays);

                    /**
                     * 判断参数 AlarmWays 是否已赋值
                     * @return AlarmWays 是否已赋值
                     * 
                     */
                    bool AlarmWaysHasBeenSet() const;

                    /**
                     * 获取<p>告警对象:1-项目管理员，2-任务责任人</p>
                     * @return AlarmRecipientTypes <p>告警对象:1-项目管理员，2-任务责任人</p>
                     * 
                     */
                    std::string GetAlarmRecipientTypes() const;

                    /**
                     * 设置<p>告警对象:1-项目管理员，2-任务责任人</p>
                     * @param _alarmRecipientTypes <p>告警对象:1-项目管理员，2-任务责任人</p>
                     * 
                     */
                    void SetAlarmRecipientTypes(const std::string& _alarmRecipientTypes);

                    /**
                     * 判断参数 AlarmRecipientTypes 是否已赋值
                     * @return AlarmRecipientTypes 是否已赋值
                     * 
                     */
                    bool AlarmRecipientTypesHasBeenSet() const;

                    /**
                     * 获取<p>是否需要校验父任务已经提交到调度</p>
                     * @return NeedCheckParentSubmitted <p>是否需要校验父任务已经提交到调度</p>
                     * 
                     */
                    bool GetNeedCheckParentSubmitted() const;

                    /**
                     * 设置<p>是否需要校验父任务已经提交到调度</p>
                     * @param _needCheckParentSubmitted <p>是否需要校验父任务已经提交到调度</p>
                     * 
                     */
                    void SetNeedCheckParentSubmitted(const bool& _needCheckParentSubmitted);

                    /**
                     * 判断参数 NeedCheckParentSubmitted 是否已赋值
                     * @return NeedCheckParentSubmitted 是否已赋值
                     * 
                     */
                    bool NeedCheckParentSubmittedHasBeenSet() const;

                    /**
                     * 获取<p>是否需要补录中间实例</p>
                     * @return EnableMakeUp <p>是否需要补录中间实例</p>
                     * 
                     */
                    bool GetEnableMakeUp() const;

                    /**
                     * 设置<p>是否需要补录中间实例</p>
                     * @param _enableMakeUp <p>是否需要补录中间实例</p>
                     * 
                     */
                    void SetEnableMakeUp(const bool& _enableMakeUp);

                    /**
                     * 判断参数 EnableMakeUp 是否已赋值
                     * @return EnableMakeUp 是否已赋值
                     * 
                     */
                    bool EnableMakeUpHasBeenSet() const;

                    /**
                     * 获取<p>指定审批人列表</p>
                     * @return AssignApprovalList <p>指定审批人列表</p>
                     * 
                     */
                    std::vector<std::string> GetAssignApprovalList() const;

                    /**
                     * 设置<p>指定审批人列表</p>
                     * @param _assignApprovalList <p>指定审批人列表</p>
                     * 
                     */
                    void SetAssignApprovalList(const std::vector<std::string>& _assignApprovalList);

                    /**
                     * 判断参数 AssignApprovalList 是否已赋值
                     * @return AssignApprovalList 是否已赋值
                     * 
                     */
                    bool AssignApprovalListHasBeenSet() const;

                    /**
                     * 获取<p>任务缺失实例处理策略</p><p>MAKEUP:补录缺失的实例;FORCE_SUCCESS:将缺失的实例置成功;SKIP:不处理，忽略缺失的实例</p>
                     * @return PerTaskMissingInstanceStrategy <p>任务缺失实例处理策略</p><p>MAKEUP:补录缺失的实例;FORCE_SUCCESS:将缺失的实例置成功;SKIP:不处理，忽略缺失的实例</p>
                     * 
                     */
                    std::vector<TaskMissingInstanceStrategy> GetPerTaskMissingInstanceStrategy() const;

                    /**
                     * 设置<p>任务缺失实例处理策略</p><p>MAKEUP:补录缺失的实例;FORCE_SUCCESS:将缺失的实例置成功;SKIP:不处理，忽略缺失的实例</p>
                     * @param _perTaskMissingInstanceStrategy <p>任务缺失实例处理策略</p><p>MAKEUP:补录缺失的实例;FORCE_SUCCESS:将缺失的实例置成功;SKIP:不处理，忽略缺失的实例</p>
                     * 
                     */
                    void SetPerTaskMissingInstanceStrategy(const std::vector<TaskMissingInstanceStrategy>& _perTaskMissingInstanceStrategy);

                    /**
                     * 判断参数 PerTaskMissingInstanceStrategy 是否已赋值
                     * @return PerTaskMissingInstanceStrategy 是否已赋值
                     * 
                     */
                    bool PerTaskMissingInstanceStrategyHasBeenSet() const;

                private:

                    /**
                     * <p>任务信息</p>
                     */
                    std::vector<BatchCreateTaskVersionDTO> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * <p>项目ID</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>是否自动运行</p>
                     */
                    bool m_autoRun;
                    bool m_autoRunHasBeenSet;

                    /**
                     * <p>告警方式:email-邮件;sms-短信;wecom-企业微信</p>
                     */
                    std::string m_alarmWays;
                    bool m_alarmWaysHasBeenSet;

                    /**
                     * <p>告警对象:1-项目管理员，2-任务责任人</p>
                     */
                    std::string m_alarmRecipientTypes;
                    bool m_alarmRecipientTypesHasBeenSet;

                    /**
                     * <p>是否需要校验父任务已经提交到调度</p>
                     */
                    bool m_needCheckParentSubmitted;
                    bool m_needCheckParentSubmittedHasBeenSet;

                    /**
                     * <p>是否需要补录中间实例</p>
                     */
                    bool m_enableMakeUp;
                    bool m_enableMakeUpHasBeenSet;

                    /**
                     * <p>指定审批人列表</p>
                     */
                    std::vector<std::string> m_assignApprovalList;
                    bool m_assignApprovalListHasBeenSet;

                    /**
                     * <p>任务缺失实例处理策略</p><p>MAKEUP:补录缺失的实例;FORCE_SUCCESS:将缺失的实例置成功;SKIP:不处理，忽略缺失的实例</p>
                     */
                    std::vector<TaskMissingInstanceStrategy> m_perTaskMissingInstanceStrategy;
                    bool m_perTaskMissingInstanceStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHCREATETASKVERSIONASYNCREQUEST_H_
