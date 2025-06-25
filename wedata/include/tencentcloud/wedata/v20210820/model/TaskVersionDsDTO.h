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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKVERSIONDSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKVERSIONDSDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskDsDTO.h>
#include <tencentcloud/wedata/v20210820/model/ParameterTaskDsDto.h>
#include <tencentcloud/wedata/v20210820/model/ParameterTaskInDsDto.h>
#include <tencentcloud/wedata/v20210820/model/ParameterTaskOutDsDto.h>
#include <tencentcloud/wedata/v20210820/model/TaskLinkDsDTO.h>
#include <tencentcloud/wedata/v20210820/model/EventPublisherDTO.h>
#include <tencentcloud/wedata/v20210820/model/TaskDataRegistryDTO.h>
#include <tencentcloud/wedata/v20210820/model/TaskCycleLinkDTO.h>
#include <tencentcloud/wedata/v20210820/model/EventListenerDTO.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * TaskVersionVO
                */
                class TaskVersionDsDTO : public AbstractModel
                {
                public:
                    TaskVersionDsDTO();
                    ~TaskVersionDsDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取版本ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionId 版本ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置版本ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _versionId 版本ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersionId(const std::string& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                    /**
                     * 获取任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId 任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionNum 版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersionNum() const;

                    /**
                     * 设置版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _versionNum 版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersionNum(const std::string& _versionNum);

                    /**
                     * 判断参数 VersionNum 是否已赋值
                     * @return VersionNum 是否已赋值
                     * 
                     */
                    bool VersionNumHasBeenSet() const;

                    /**
                     * 获取版本备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionRemark 版本备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersionRemark() const;

                    /**
                     * 设置版本备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _versionRemark 版本备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersionRemark(const std::string& _versionRemark);

                    /**
                     * 判断参数 VersionRemark 是否已赋值
                     * @return VersionRemark 是否已赋值
                     * 
                     */
                    bool VersionRemarkHasBeenSet() const;

                    /**
                     * 获取版本创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Creator 版本创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置版本创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creator 版本创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取版本创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 版本创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置版本创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 版本创建时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取版本更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 版本更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置版本更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 版本更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取最新调度计划变更时间 生产态存储
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastSchedulerCommitTime 最新调度计划变更时间 生产态存储
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastSchedulerCommitTime() const;

                    /**
                     * 设置最新调度计划变更时间 生产态存储
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastSchedulerCommitTime 最新调度计划变更时间 生产态存储
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastSchedulerCommitTime(const std::string& _lastSchedulerCommitTime);

                    /**
                     * 判断参数 LastSchedulerCommitTime 是否已赋值
                     * @return LastSchedulerCommitTime 是否已赋值
                     * 
                     */
                    bool LastSchedulerCommitTimeHasBeenSet() const;

                    /**
                     * 获取版本是否正在使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UsedVersion 版本是否正在使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUsedVersion() const;

                    /**
                     * 设置版本是否正在使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _usedVersion 版本是否正在使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUsedVersion(const int64_t& _usedVersion);

                    /**
                     * 判断参数 UsedVersion 是否已赋值
                     * @return UsedVersion 是否已赋值
                     * 
                     */
                    bool UsedVersionHasBeenSet() const;

                    /**
                     * 获取任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskInfo 任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskDsDTO GetTaskInfo() const;

                    /**
                     * 设置任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskInfo 任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskInfo(const TaskDsDTO& _taskInfo);

                    /**
                     * 判断参数 TaskInfo 是否已赋值
                     * @return TaskInfo 是否已赋值
                     * 
                     */
                    bool TaskInfoHasBeenSet() const;

                    /**
                     * 获取任务参数信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskParaInfo 任务参数信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ParameterTaskDsDto> GetTaskParaInfo() const;

                    /**
                     * 设置任务参数信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskParaInfo 任务参数信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskParaInfo(const std::vector<ParameterTaskDsDto>& _taskParaInfo);

                    /**
                     * 判断参数 TaskParaInfo 是否已赋值
                     * @return TaskParaInfo 是否已赋值
                     * 
                     */
                    bool TaskParaInfoHasBeenSet() const;

                    /**
                     * 获取TaskInputParam输入参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskInputParam TaskInputParam输入参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ParameterTaskInDsDto> GetTaskInputParam() const;

                    /**
                     * 设置TaskInputParam输入参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskInputParam TaskInputParam输入参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskInputParam(const std::vector<ParameterTaskInDsDto>& _taskInputParam);

                    /**
                     * 判断参数 TaskInputParam 是否已赋值
                     * @return TaskInputParam 是否已赋值
                     * 
                     */
                    bool TaskInputParamHasBeenSet() const;

                    /**
                     * 获取TaskOutputParam输出参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskOutputParam TaskOutputParam输出参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ParameterTaskOutDsDto> GetTaskOutputParam() const;

                    /**
                     * 设置TaskOutputParam输出参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskOutputParam TaskOutputParam输出参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskOutputParam(const std::vector<ParameterTaskOutDsDto>& _taskOutputParam);

                    /**
                     * 判断参数 TaskOutputParam 是否已赋值
                     * @return TaskOutputParam 是否已赋值
                     * 
                     */
                    bool TaskOutputParamHasBeenSet() const;

                    /**
                     * 获取任务上游依赖信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskLinkInfo 任务上游依赖信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TaskLinkDsDTO> GetTaskLinkInfo() const;

                    /**
                     * 设置任务上游依赖信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskLinkInfo 任务上游依赖信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskLinkInfo(const std::vector<TaskLinkDsDTO>& _taskLinkInfo);

                    /**
                     * 判断参数 TaskLinkInfo 是否已赋值
                     * @return TaskLinkInfo 是否已赋值
                     * 
                     */
                    bool TaskLinkInfoHasBeenSet() const;

                    /**
                     * 获取审批状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApproveStatus 审批状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApproveStatus() const;

                    /**
                     * 设置审批状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _approveStatus 审批状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApproveStatus(const std::string& _approveStatus);

                    /**
                     * 判断参数 ApproveStatus 是否已赋值
                     * @return ApproveStatus 是否已赋值
                     * 
                     */
                    bool ApproveStatusHasBeenSet() const;

                    /**
                     * 获取审批人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApproveName 审批人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApproveName() const;

                    /**
                     * 设置审批人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _approveName 审批人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApproveName(const std::string& _approveName);

                    /**
                     * 判断参数 ApproveName 是否已赋值
                     * @return ApproveName 是否已赋值
                     * 
                     */
                    bool ApproveNameHasBeenSet() const;

                    /**
                     * 获取任务事件绑定
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskEventPublisher 任务事件绑定
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<EventPublisherDTO> GetTaskEventPublisher() const;

                    /**
                     * 设置任务事件绑定
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskEventPublisher 任务事件绑定
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskEventPublisher(const std::vector<EventPublisherDTO>& _taskEventPublisher);

                    /**
                     * 判断参数 TaskEventPublisher 是否已赋值
                     * @return TaskEventPublisher 是否已赋值
                     * 
                     */
                    bool TaskEventPublisherHasBeenSet() const;

                    /**
                     * 获取任务产出登记信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskRegisterOutputTable 任务产出登记信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TaskDataRegistryDTO> GetTaskRegisterOutputTable() const;

                    /**
                     * 设置任务产出登记信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskRegisterOutputTable 任务产出登记信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskRegisterOutputTable(const std::vector<TaskDataRegistryDTO>& _taskRegisterOutputTable);

                    /**
                     * 判断参数 TaskRegisterOutputTable 是否已赋值
                     * @return TaskRegisterOutputTable 是否已赋值
                     * 
                     */
                    bool TaskRegisterOutputTableHasBeenSet() const;

                    /**
                     * 获取循环依赖信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskCycleLinkInfo 循环依赖信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TaskCycleLinkDTO> GetTaskCycleLinkInfo() const;

                    /**
                     * 设置循环依赖信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskCycleLinkInfo 循环依赖信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskCycleLinkInfo(const std::vector<TaskCycleLinkDTO>& _taskCycleLinkInfo);

                    /**
                     * 判断参数 TaskCycleLinkInfo 是否已赋值
                     * @return TaskCycleLinkInfo 是否已赋值
                     * 
                     */
                    bool TaskCycleLinkInfoHasBeenSet() const;

                    /**
                     * 获取事件监听信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskEventListener 事件监听信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<EventListenerDTO> GetTaskEventListener() const;

                    /**
                     * 设置事件监听信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskEventListener 事件监听信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskEventListener(const std::vector<EventListenerDTO>& _taskEventListener);

                    /**
                     * 判断参数 TaskEventListener 是否已赋值
                     * @return TaskEventListener 是否已赋值
                     * 
                     */
                    bool TaskEventListenerHasBeenSet() const;

                    /**
                     * 获取审批时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApproveTime 审批时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApproveTime() const;

                    /**
                     * 设置审批时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _approveTime 审批时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApproveTime(const std::string& _approveTime);

                    /**
                     * 判断参数 ApproveTime 是否已赋值
                     * @return ApproveTime 是否已赋值
                     * 
                     */
                    bool ApproveTimeHasBeenSet() const;

                private:

                    /**
                     * 版本ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * 任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 版本号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_versionNum;
                    bool m_versionNumHasBeenSet;

                    /**
                     * 版本备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_versionRemark;
                    bool m_versionRemarkHasBeenSet;

                    /**
                     * 版本创建人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 版本创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 版本更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 最新调度计划变更时间 生产态存储
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastSchedulerCommitTime;
                    bool m_lastSchedulerCommitTimeHasBeenSet;

                    /**
                     * 版本是否正在使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_usedVersion;
                    bool m_usedVersionHasBeenSet;

                    /**
                     * 任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskDsDTO m_taskInfo;
                    bool m_taskInfoHasBeenSet;

                    /**
                     * 任务参数信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ParameterTaskDsDto> m_taskParaInfo;
                    bool m_taskParaInfoHasBeenSet;

                    /**
                     * TaskInputParam输入参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ParameterTaskInDsDto> m_taskInputParam;
                    bool m_taskInputParamHasBeenSet;

                    /**
                     * TaskOutputParam输出参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ParameterTaskOutDsDto> m_taskOutputParam;
                    bool m_taskOutputParamHasBeenSet;

                    /**
                     * 任务上游依赖信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TaskLinkDsDTO> m_taskLinkInfo;
                    bool m_taskLinkInfoHasBeenSet;

                    /**
                     * 审批状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_approveStatus;
                    bool m_approveStatusHasBeenSet;

                    /**
                     * 审批人名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_approveName;
                    bool m_approveNameHasBeenSet;

                    /**
                     * 任务事件绑定
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EventPublisherDTO> m_taskEventPublisher;
                    bool m_taskEventPublisherHasBeenSet;

                    /**
                     * 任务产出登记信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TaskDataRegistryDTO> m_taskRegisterOutputTable;
                    bool m_taskRegisterOutputTableHasBeenSet;

                    /**
                     * 循环依赖信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TaskCycleLinkDTO> m_taskCycleLinkInfo;
                    bool m_taskCycleLinkInfoHasBeenSet;

                    /**
                     * 事件监听信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EventListenerDTO> m_taskEventListener;
                    bool m_taskEventListenerHasBeenSet;

                    /**
                     * 审批时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_approveTime;
                    bool m_approveTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKVERSIONDSDTO_H_
