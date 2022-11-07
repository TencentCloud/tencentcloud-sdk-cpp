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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKINSTANCEDETAIL_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKINSTANCEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 离线任务实例详情
                */
                class TaskInstanceDetail : public AbstractModel
                {
                public:
                    TaskInstanceDetail();
                    ~TaskInstanceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例id
                     * @return TaskRunId 实例id
                     */
                    std::string GetTaskRunId() const;

                    /**
                     * 设置实例id
                     * @param TaskRunId 实例id
                     */
                    void SetTaskRunId(const std::string& _taskRunId);

                    /**
                     * 判断参数 TaskRunId 是否已赋值
                     * @return TaskRunId 是否已赋值
                     */
                    bool TaskRunIdHasBeenSet() const;

                    /**
                     * 获取任务id
                     * @return TaskId 任务id
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务id
                     * @param TaskId 任务id
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取实例数据运行时间
                     * @return CurRunDate 实例数据运行时间
                     */
                    std::string GetCurRunDate() const;

                    /**
                     * 设置实例数据运行时间
                     * @param CurRunDate 实例数据运行时间
                     */
                    void SetCurRunDate(const std::string& _curRunDate);

                    /**
                     * 判断参数 CurRunDate 是否已赋值
                     * @return CurRunDate 是否已赋值
                     */
                    bool CurRunDateHasBeenSet() const;

                    /**
                     * 获取实例实际运行时间
                     * @return IssueDate 实例实际运行时间
                     */
                    std::string GetIssueDate() const;

                    /**
                     * 设置实例实际运行时间
                     * @param IssueDate 实例实际运行时间
                     */
                    void SetIssueDate(const std::string& _issueDate);

                    /**
                     * 判断参数 IssueDate 是否已赋值
                     * @return IssueDate 是否已赋值
                     */
                    bool IssueDateHasBeenSet() const;

                    /**
                     * 获取InLong任务Id
                     * @return InlongTaskId InLong任务Id
                     */
                    std::string GetInlongTaskId() const;

                    /**
                     * 设置InLong任务Id
                     * @param InlongTaskId InLong任务Id
                     */
                    void SetInlongTaskId(const std::string& _inlongTaskId);

                    /**
                     * 判断参数 InlongTaskId 是否已赋值
                     * @return InlongTaskId 是否已赋值
                     */
                    bool InlongTaskIdHasBeenSet() const;

                    /**
                     * 获取执行资源组id
                     * @return ExecutorGroupId 执行资源组id
                     */
                    std::string GetExecutorGroupId() const;

                    /**
                     * 设置执行资源组id
                     * @param ExecutorGroupId 执行资源组id
                     */
                    void SetExecutorGroupId(const std::string& _executorGroupId);

                    /**
                     * 判断参数 ExecutorGroupId 是否已赋值
                     * @return ExecutorGroupId 是否已赋值
                     */
                    bool ExecutorGroupIdHasBeenSet() const;

                    /**
                     * 获取任务类型(1 调试运行,2 调度执行)
                     * @return TaskRunType 任务类型(1 调试运行,2 调度执行)
                     */
                    uint64_t GetTaskRunType() const;

                    /**
                     * 设置任务类型(1 调试运行,2 调度执行)
                     * @param TaskRunType 任务类型(1 调试运行,2 调度执行)
                     */
                    void SetTaskRunType(const uint64_t& _taskRunType);

                    /**
                     * 判断参数 TaskRunType 是否已赋值
                     * @return TaskRunType 是否已赋值
                     */
                    bool TaskRunTypeHasBeenSet() const;

                    /**
                     * 获取任务状态(1 正在执行,2 成功,3 失败,4 等待终止,5 正在终止,6 已终止,7 终止失败,9 等待执行)
                     * @return State 任务状态(1 正在执行,2 成功,3 失败,4 等待终止,5 正在终止,6 已终止,7 终止失败,9 等待执行)
                     */
                    uint64_t GetState() const;

                    /**
                     * 设置任务状态(1 正在执行,2 成功,3 失败,4 等待终止,5 正在终止,6 已终止,7 终止失败,9 等待执行)
                     * @param State 任务状态(1 正在执行,2 成功,3 失败,4 等待终止,5 正在终止,6 已终止,7 终止失败,9 等待执行)
                     */
                    void SetState(const uint64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取实例开始运行时间，格式：yyyy-MM-dd HH:mm:ss
                     * @return StartTime 实例开始运行时间，格式：yyyy-MM-dd HH:mm:ss
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置实例开始运行时间，格式：yyyy-MM-dd HH:mm:ss
                     * @param StartTime 实例开始运行时间，格式：yyyy-MM-dd HH:mm:ss
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取实例结束运行时间，格式：yyyy-MM-dd HH:mm:ss
                     * @return EndTime 实例结束运行时间，格式：yyyy-MM-dd HH:mm:ss
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置实例结束运行时间，格式：yyyy-MM-dd HH:mm:ss
                     * @param EndTime 实例结束运行时间，格式：yyyy-MM-dd HH:mm:ss
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Broker IP
                     * @return BrokerIp Broker IP
                     */
                    std::string GetBrokerIp() const;

                    /**
                     * 设置Broker IP
                     * @param BrokerIp Broker IP
                     */
                    void SetBrokerIp(const std::string& _brokerIp);

                    /**
                     * 判断参数 BrokerIp 是否已赋值
                     * @return BrokerIp 是否已赋值
                     */
                    bool BrokerIpHasBeenSet() const;

                    /**
                     * 获取运行实例的EKS Pod名称
                     * @return PodName 运行实例的EKS Pod名称
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置运行实例的EKS Pod名称
                     * @param PodName 运行实例的EKS Pod名称
                     */
                    void SetPodName(const std::string& _podName);

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     */
                    bool PodNameHasBeenSet() const;

                    /**
                     * 获取下一个调度周期的数据运行时间
                     * @return NextRunDate 下一个调度周期的数据运行时间
                     */
                    std::string GetNextRunDate() const;

                    /**
                     * 设置下一个调度周期的数据运行时间
                     * @param NextRunDate 下一个调度周期的数据运行时间
                     */
                    void SetNextRunDate(const std::string& _nextRunDate);

                    /**
                     * 判断参数 NextRunDate 是否已赋值
                     * @return NextRunDate 是否已赋值
                     */
                    bool NextRunDateHasBeenSet() const;

                    /**
                     * 获取创建者的账号Id
                     * @return CreateUin 创建者的账号Id
                     */
                    uint64_t GetCreateUin() const;

                    /**
                     * 设置创建者的账号Id
                     * @param CreateUin 创建者的账号Id
                     */
                    void SetCreateUin(const uint64_t& _createUin);

                    /**
                     * 判断参数 CreateUin 是否已赋值
                     * @return CreateUin 是否已赋值
                     */
                    bool CreateUinHasBeenSet() const;

                    /**
                     * 获取操作者的账号Id
                     * @return OperatorUin 操作者的账号Id
                     */
                    uint64_t GetOperatorUin() const;

                    /**
                     * 设置操作者的账号Id
                     * @param OperatorUin 操作者的账号Id
                     */
                    void SetOperatorUin(const uint64_t& _operatorUin);

                    /**
                     * 判断参数 OperatorUin 是否已赋值
                     * @return OperatorUin 是否已赋值
                     */
                    bool OperatorUinHasBeenSet() const;

                    /**
                     * 获取拥有者的账号Id
                     * @return OwnerUin 拥有者的账号Id
                     */
                    uint64_t GetOwnerUin() const;

                    /**
                     * 设置拥有者的账号Id
                     * @param OwnerUin 拥有者的账号Id
                     */
                    void SetOwnerUin(const uint64_t& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取App Id
                     * @return AppId App Id
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置App Id
                     * @param AppId App Id
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取WeData项目id
                     * @return ProjectId WeData项目id
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置WeData项目id
                     * @param ProjectId WeData项目id
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param CreateTime 创建时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param UpdateTime 更新时间
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取任务名称
                     * @return TaskName 任务名称
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称
                     * @param TaskName 任务名称
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     */
                    bool TaskNameHasBeenSet() const;

                private:

                    /**
                     * 实例id
                     */
                    std::string m_taskRunId;
                    bool m_taskRunIdHasBeenSet;

                    /**
                     * 任务id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 实例数据运行时间
                     */
                    std::string m_curRunDate;
                    bool m_curRunDateHasBeenSet;

                    /**
                     * 实例实际运行时间
                     */
                    std::string m_issueDate;
                    bool m_issueDateHasBeenSet;

                    /**
                     * InLong任务Id
                     */
                    std::string m_inlongTaskId;
                    bool m_inlongTaskIdHasBeenSet;

                    /**
                     * 执行资源组id
                     */
                    std::string m_executorGroupId;
                    bool m_executorGroupIdHasBeenSet;

                    /**
                     * 任务类型(1 调试运行,2 调度执行)
                     */
                    uint64_t m_taskRunType;
                    bool m_taskRunTypeHasBeenSet;

                    /**
                     * 任务状态(1 正在执行,2 成功,3 失败,4 等待终止,5 正在终止,6 已终止,7 终止失败,9 等待执行)
                     */
                    uint64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 实例开始运行时间，格式：yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 实例结束运行时间，格式：yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Broker IP
                     */
                    std::string m_brokerIp;
                    bool m_brokerIpHasBeenSet;

                    /**
                     * 运行实例的EKS Pod名称
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * 下一个调度周期的数据运行时间
                     */
                    std::string m_nextRunDate;
                    bool m_nextRunDateHasBeenSet;

                    /**
                     * 创建者的账号Id
                     */
                    uint64_t m_createUin;
                    bool m_createUinHasBeenSet;

                    /**
                     * 操作者的账号Id
                     */
                    uint64_t m_operatorUin;
                    bool m_operatorUinHasBeenSet;

                    /**
                     * 拥有者的账号Id
                     */
                    uint64_t m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * App Id
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * WeData项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKINSTANCEDETAIL_H_
