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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INTEGRATIONTASKINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INTEGRATIONTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/IntegrationNodeInfo.h>
#include <tencentcloud/wedata/v20210820/model/RecordField.h>
#include <tencentcloud/wedata/v20210820/model/IntegrationNodeMapping.h>
#include <tencentcloud/wedata/v20210820/model/OfflineTaskAddParam.h>
#include <tencentcloud/wedata/v20210820/model/TaskImportInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 集成任务
                */
                class IntegrationTaskInfo : public AbstractModel
                {
                public:
                    IntegrationTaskInfo();
                    ~IntegrationTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务名称
                     * @return TaskName 任务名称
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称
                     * @param _taskName 任务名称
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取任务描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 任务描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置任务描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 任务描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取同步类型1.解决方案(整库迁移),2.单表同步
                     * @return SyncType 同步类型1.解决方案(整库迁移),2.单表同步
                     * 
                     */
                    int64_t GetSyncType() const;

                    /**
                     * 设置同步类型1.解决方案(整库迁移),2.单表同步
                     * @param _syncType 同步类型1.解决方案(整库迁移),2.单表同步
                     * 
                     */
                    void SetSyncType(const int64_t& _syncType);

                    /**
                     * 判断参数 SyncType 是否已赋值
                     * @return SyncType 是否已赋值
                     * 
                     */
                    bool SyncTypeHasBeenSet() const;

                    /**
                     * 获取201.实时,202.离线
                     * @return TaskType 201.实时,202.离线
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置201.实时,202.离线
                     * @param _taskType 201.实时,202.离线
                     * 
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取任务所属工作流id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowId 任务所属工作流id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置任务所属工作流id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowId 任务所属工作流id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkflowId(const std::string& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

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
                     * 获取任务调度id(oceanus or us等作业id)，非填项
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScheduleTaskId 任务调度id(oceanus or us等作业id)，非填项
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScheduleTaskId() const;

                    /**
                     * 设置任务调度id(oceanus or us等作业id)，非填项
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheduleTaskId 任务调度id(oceanus or us等作业id)，非填项
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScheduleTaskId(const std::string& _scheduleTaskId);

                    /**
                     * 判断参数 ScheduleTaskId 是否已赋值
                     * @return ScheduleTaskId 是否已赋值
                     * 
                     */
                    bool ScheduleTaskIdHasBeenSet() const;

                    /**
                     * 获取inlong任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskGroupId inlong任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskGroupId() const;

                    /**
                     * 设置inlong任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskGroupId inlong任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskGroupId(const std::string& _taskGroupId);

                    /**
                     * 判断参数 TaskGroupId 是否已赋值
                     * @return TaskGroupId 是否已赋值
                     * 
                     */
                    bool TaskGroupIdHasBeenSet() const;

                    /**
                     * 获取项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId 项目id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取创建人uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatorUin 创建人uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatorUin() const;

                    /**
                     * 设置创建人uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creatorUin 创建人uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatorUin(const std::string& _creatorUin);

                    /**
                     * 判断参数 CreatorUin 是否已赋值
                     * @return CreatorUin 是否已赋值
                     * 
                     */
                    bool CreatorUinHasBeenSet() const;

                    /**
                     * 获取操作人uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperatorUin 操作人uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOperatorUin() const;

                    /**
                     * 设置操作人uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operatorUin 操作人uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperatorUin(const std::string& _operatorUin);

                    /**
                     * 判断参数 OperatorUin 是否已赋值
                     * @return OperatorUin 是否已赋值
                     * 
                     */
                    bool OperatorUinHasBeenSet() const;

                    /**
                     * 获取owner uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerUin owner uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置owner uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerUin owner uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取应用id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId 应用id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置应用id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId 应用id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取0:新建(任务开发态默认状态)|1:未开始|2:操作中|3:运行中|4:暂停|5:任务停止中|6:停止|7:执行失败|20:异常|21:未知|
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 0:新建(任务开发态默认状态)|1:未开始|2:操作中|3:运行中|4:暂停|5:任务停止中|6:停止|7:执行失败|20:异常|21:未知|
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置0:新建(任务开发态默认状态)|1:未开始|2:操作中|3:运行中|4:暂停|5:任务停止中|6:停止|7:执行失败|20:异常|21:未知|
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 0:新建(任务开发态默认状态)|1:未开始|2:操作中|3:运行中|4:暂停|5:任务停止中|6:停止|7:执行失败|20:异常|21:未知|
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
                     * 获取节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Nodes 节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<IntegrationNodeInfo> GetNodes() const;

                    /**
                     * 设置节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodes 节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodes(const std::vector<IntegrationNodeInfo>& _nodes);

                    /**
                     * 判断参数 Nodes 是否已赋值
                     * @return Nodes 是否已赋值
                     * 
                     */
                    bool NodesHasBeenSet() const;

                    /**
                     * 获取执行资源id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutorId 执行资源id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutorId() const;

                    /**
                     * 设置执行资源id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executorId 执行资源id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutorId(const std::string& _executorId);

                    /**
                     * 判断参数 ExecutorId 是否已赋值
                     * @return ExecutorId 是否已赋值
                     * 
                     */
                    bool ExecutorIdHasBeenSet() const;

                    /**
                     * 获取任务配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Config 任务配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RecordField> GetConfig() const;

                    /**
                     * 设置任务配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _config 任务配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfig(const std::vector<RecordField>& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取任务扩展配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtConfig 任务扩展配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RecordField> GetExtConfig() const;

                    /**
                     * 设置任务扩展配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extConfig 任务扩展配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtConfig(const std::vector<RecordField>& _extConfig);

                    /**
                     * 判断参数 ExtConfig 是否已赋值
                     * @return ExtConfig 是否已赋值
                     * 
                     */
                    bool ExtConfigHasBeenSet() const;

                    /**
                     * 获取任务执行context信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecuteContext 任务执行context信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RecordField> GetExecuteContext() const;

                    /**
                     * 设置任务执行context信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executeContext 任务执行context信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecuteContext(const std::vector<RecordField>& _executeContext);

                    /**
                     * 判断参数 ExecuteContext 是否已赋值
                     * @return ExecuteContext 是否已赋值
                     * 
                     */
                    bool ExecuteContextHasBeenSet() const;

                    /**
                     * 获取节点映射
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Mappings 节点映射
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<IntegrationNodeMapping> GetMappings() const;

                    /**
                     * 设置节点映射
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mappings 节点映射
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMappings(const std::vector<IntegrationNodeMapping>& _mappings);

                    /**
                     * 判断参数 Mappings 是否已赋值
                     * @return Mappings 是否已赋值
                     * 
                     */
                    bool MappingsHasBeenSet() const;

                    /**
                     * 获取任务配置模式，0:画布 1:表单 3:脚本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskMode 任务配置模式，0:画布 1:表单 3:脚本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskMode() const;

                    /**
                     * 设置任务配置模式，0:画布 1:表单 3:脚本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskMode 任务配置模式，0:画布 1:表单 3:脚本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskMode(const std::string& _taskMode);

                    /**
                     * 判断参数 TaskMode 是否已赋值
                     * @return TaskMode 是否已赋值
                     * 
                     */
                    bool TaskModeHasBeenSet() const;

                    /**
                     * 获取责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Incharge 责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIncharge() const;

                    /**
                     * 设置责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _incharge 责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIncharge(const std::string& _incharge);

                    /**
                     * 判断参数 Incharge 是否已赋值
                     * @return Incharge 是否已赋值
                     * 
                     */
                    bool InchargeHasBeenSet() const;

                    /**
                     * 获取离线新增参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OfflineTaskAddEntity 离线新增参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OfflineTaskAddParam GetOfflineTaskAddEntity() const;

                    /**
                     * 设置离线新增参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _offlineTaskAddEntity 离线新增参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOfflineTaskAddEntity(const OfflineTaskAddParam& _offlineTaskAddEntity);

                    /**
                     * 判断参数 OfflineTaskAddEntity 是否已赋值
                     * @return OfflineTaskAddEntity 是否已赋值
                     * 
                     */
                    bool OfflineTaskAddEntityHasBeenSet() const;

                    /**
                     * 获取group name
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutorGroupName group name
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutorGroupName() const;

                    /**
                     * 设置group name
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executorGroupName group name
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutorGroupName(const std::string& _executorGroupName);

                    /**
                     * 判断参数 ExecutorGroupName 是否已赋值
                     * @return ExecutorGroupName 是否已赋值
                     * 
                     */
                    bool ExecutorGroupNameHasBeenSet() const;

                    /**
                     * 获取inlong manager url
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InLongManagerUrl inlong manager url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInLongManagerUrl() const;

                    /**
                     * 设置inlong manager url
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inLongManagerUrl inlong manager url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInLongManagerUrl(const std::string& _inLongManagerUrl);

                    /**
                     * 判断参数 InLongManagerUrl 是否已赋值
                     * @return InLongManagerUrl 是否已赋值
                     * 
                     */
                    bool InLongManagerUrlHasBeenSet() const;

                    /**
                     * 获取stream id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InLongStreamId stream id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInLongStreamId() const;

                    /**
                     * 设置stream id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inLongStreamId stream id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInLongStreamId(const std::string& _inLongStreamId);

                    /**
                     * 判断参数 InLongStreamId 是否已赋值
                     * @return InLongStreamId 是否已赋值
                     * 
                     */
                    bool InLongStreamIdHasBeenSet() const;

                    /**
                     * 获取version
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InLongManagerVersion version
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInLongManagerVersion() const;

                    /**
                     * 设置version
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inLongManagerVersion version
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInLongManagerVersion(const std::string& _inLongManagerVersion);

                    /**
                     * 判断参数 InLongManagerVersion 是否已赋值
                     * @return InLongManagerVersion 是否已赋值
                     * 
                     */
                    bool InLongManagerVersionHasBeenSet() const;

                    /**
                     * 获取inlong dataproxy url
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataProxyUrl inlong dataproxy url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetDataProxyUrl() const;

                    /**
                     * 设置inlong dataproxy url
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataProxyUrl inlong dataproxy url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataProxyUrl(const std::vector<std::string>& _dataProxyUrl);

                    /**
                     * 判断参数 DataProxyUrl 是否已赋值
                     * @return DataProxyUrl 是否已赋值
                     * 
                     */
                    bool DataProxyUrlHasBeenSet() const;

                    /**
                     * 获取任务版本是否已提交运维
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Submit 任务版本是否已提交运维
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSubmit() const;

                    /**
                     * 设置任务版本是否已提交运维
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _submit 任务版本是否已提交运维
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubmit(const bool& _submit);

                    /**
                     * 判断参数 Submit 是否已赋值
                     * @return Submit 是否已赋值
                     * 
                     */
                    bool SubmitHasBeenSet() const;

                    /**
                     * 获取数据源类型：MYSQL|POSTGRE|ORACLE|SQLSERVER|FTP|HIVE|HDFS|ICEBERG|KAFKA|HBASE|SPARK|VIRTUAL|TBASE|DB2|DM|GAUSSDB|GBASE|IMPALA|ES|S3_DATAINSIGHT|GREENPLUM|PHOENIX|SAP_HANA|SFTP|OCEANBASE|CLICKHOUSE|KUDU|VERTICA|REDIS|COS|DLC|DLCV1|DORIS|CKAFKA|DTS_KAFKA|S3|CDW|LOCAL|TDSQLC|TDSQL|TDSQL_MYSQL|MONGODB|INFORMIX|SYBASE|REST_API|SuperSQL|PRESTO|DR_SUM|TiDB|StarRocks|Trino|Kyuubi|GDB|TCHOUSE_X|TCHOUSE_P|TDSQL_POSTGRE
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputDatasourceType 数据源类型：MYSQL|POSTGRE|ORACLE|SQLSERVER|FTP|HIVE|HDFS|ICEBERG|KAFKA|HBASE|SPARK|VIRTUAL|TBASE|DB2|DM|GAUSSDB|GBASE|IMPALA|ES|S3_DATAINSIGHT|GREENPLUM|PHOENIX|SAP_HANA|SFTP|OCEANBASE|CLICKHOUSE|KUDU|VERTICA|REDIS|COS|DLC|DLCV1|DORIS|CKAFKA|DTS_KAFKA|S3|CDW|LOCAL|TDSQLC|TDSQL|TDSQL_MYSQL|MONGODB|INFORMIX|SYBASE|REST_API|SuperSQL|PRESTO|DR_SUM|TiDB|StarRocks|Trino|Kyuubi|GDB|TCHOUSE_X|TCHOUSE_P|TDSQL_POSTGRE
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInputDatasourceType() const;

                    /**
                     * 设置数据源类型：MYSQL|POSTGRE|ORACLE|SQLSERVER|FTP|HIVE|HDFS|ICEBERG|KAFKA|HBASE|SPARK|VIRTUAL|TBASE|DB2|DM|GAUSSDB|GBASE|IMPALA|ES|S3_DATAINSIGHT|GREENPLUM|PHOENIX|SAP_HANA|SFTP|OCEANBASE|CLICKHOUSE|KUDU|VERTICA|REDIS|COS|DLC|DLCV1|DORIS|CKAFKA|DTS_KAFKA|S3|CDW|LOCAL|TDSQLC|TDSQL|TDSQL_MYSQL|MONGODB|INFORMIX|SYBASE|REST_API|SuperSQL|PRESTO|DR_SUM|TiDB|StarRocks|Trino|Kyuubi|GDB|TCHOUSE_X|TCHOUSE_P|TDSQL_POSTGRE
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inputDatasourceType 数据源类型：MYSQL|POSTGRE|ORACLE|SQLSERVER|FTP|HIVE|HDFS|ICEBERG|KAFKA|HBASE|SPARK|VIRTUAL|TBASE|DB2|DM|GAUSSDB|GBASE|IMPALA|ES|S3_DATAINSIGHT|GREENPLUM|PHOENIX|SAP_HANA|SFTP|OCEANBASE|CLICKHOUSE|KUDU|VERTICA|REDIS|COS|DLC|DLCV1|DORIS|CKAFKA|DTS_KAFKA|S3|CDW|LOCAL|TDSQLC|TDSQL|TDSQL_MYSQL|MONGODB|INFORMIX|SYBASE|REST_API|SuperSQL|PRESTO|DR_SUM|TiDB|StarRocks|Trino|Kyuubi|GDB|TCHOUSE_X|TCHOUSE_P|TDSQL_POSTGRE
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInputDatasourceType(const std::string& _inputDatasourceType);

                    /**
                     * 判断参数 InputDatasourceType 是否已赋值
                     * @return InputDatasourceType 是否已赋值
                     * 
                     */
                    bool InputDatasourceTypeHasBeenSet() const;

                    /**
                     * 获取数据源类型：MYSQL|POSTGRE|ORACLE|SQLSERVER|FTP|HIVE|HDFS|ICEBERG|KAFKA|HBASE|SPARK|VIRTUAL|TBASE|DB2|DM|GAUSSDB|GBASE|IMPALA|ES|S3_DATAINSIGHT|GREENPLUM|PHOENIX|SAP_HANA|SFTP|OCEANBASE|CLICKHOUSE|KUDU|VERTICA|REDIS|COS|DLC|DLCV1|DORIS|CKAFKA|DTS_KAFKA|S3|CDW|LOCAL|TDSQLC|TDSQL|TDSQL_MYSQL|MONGODB|INFORMIX|SYBASE|REST_API|SuperSQL|PRESTO|DR_SUM|TiDB|StarRocks|Trino|Kyuubi|GDB|TCHOUSE_X|TCHOUSE_P|TDSQL_POSTGRE
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutputDatasourceType 数据源类型：MYSQL|POSTGRE|ORACLE|SQLSERVER|FTP|HIVE|HDFS|ICEBERG|KAFKA|HBASE|SPARK|VIRTUAL|TBASE|DB2|DM|GAUSSDB|GBASE|IMPALA|ES|S3_DATAINSIGHT|GREENPLUM|PHOENIX|SAP_HANA|SFTP|OCEANBASE|CLICKHOUSE|KUDU|VERTICA|REDIS|COS|DLC|DLCV1|DORIS|CKAFKA|DTS_KAFKA|S3|CDW|LOCAL|TDSQLC|TDSQL|TDSQL_MYSQL|MONGODB|INFORMIX|SYBASE|REST_API|SuperSQL|PRESTO|DR_SUM|TiDB|StarRocks|Trino|Kyuubi|GDB|TCHOUSE_X|TCHOUSE_P|TDSQL_POSTGRE
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOutputDatasourceType() const;

                    /**
                     * 设置数据源类型：MYSQL|POSTGRE|ORACLE|SQLSERVER|FTP|HIVE|HDFS|ICEBERG|KAFKA|HBASE|SPARK|VIRTUAL|TBASE|DB2|DM|GAUSSDB|GBASE|IMPALA|ES|S3_DATAINSIGHT|GREENPLUM|PHOENIX|SAP_HANA|SFTP|OCEANBASE|CLICKHOUSE|KUDU|VERTICA|REDIS|COS|DLC|DLCV1|DORIS|CKAFKA|DTS_KAFKA|S3|CDW|LOCAL|TDSQLC|TDSQL|TDSQL_MYSQL|MONGODB|INFORMIX|SYBASE|REST_API|SuperSQL|PRESTO|DR_SUM|TiDB|StarRocks|Trino|Kyuubi|GDB|TCHOUSE_X|TCHOUSE_P|TDSQL_POSTGRE
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outputDatasourceType 数据源类型：MYSQL|POSTGRE|ORACLE|SQLSERVER|FTP|HIVE|HDFS|ICEBERG|KAFKA|HBASE|SPARK|VIRTUAL|TBASE|DB2|DM|GAUSSDB|GBASE|IMPALA|ES|S3_DATAINSIGHT|GREENPLUM|PHOENIX|SAP_HANA|SFTP|OCEANBASE|CLICKHOUSE|KUDU|VERTICA|REDIS|COS|DLC|DLCV1|DORIS|CKAFKA|DTS_KAFKA|S3|CDW|LOCAL|TDSQLC|TDSQL|TDSQL_MYSQL|MONGODB|INFORMIX|SYBASE|REST_API|SuperSQL|PRESTO|DR_SUM|TiDB|StarRocks|Trino|Kyuubi|GDB|TCHOUSE_X|TCHOUSE_P|TDSQL_POSTGRE
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutputDatasourceType(const std::string& _outputDatasourceType);

                    /**
                     * 判断参数 OutputDatasourceType 是否已赋值
                     * @return OutputDatasourceType 是否已赋值
                     * 
                     */
                    bool OutputDatasourceTypeHasBeenSet() const;

                    /**
                     * 获取读取条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NumRecordsIn 读取条数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetNumRecordsIn() const;

                    /**
                     * 设置读取条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _numRecordsIn 读取条数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNumRecordsIn(const int64_t& _numRecordsIn);

                    /**
                     * 判断参数 NumRecordsIn 是否已赋值
                     * @return NumRecordsIn 是否已赋值
                     * 
                     */
                    bool NumRecordsInHasBeenSet() const;

                    /**
                     * 获取写入条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NumRecordsOut 写入条数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetNumRecordsOut() const;

                    /**
                     * 设置写入条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _numRecordsOut 写入条数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNumRecordsOut(const int64_t& _numRecordsOut);

                    /**
                     * 判断参数 NumRecordsOut 是否已赋值
                     * @return NumRecordsOut 是否已赋值
                     * 
                     */
                    bool NumRecordsOutHasBeenSet() const;

                    /**
                     * 获取读取延迟
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReaderDelay 读取延迟
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetReaderDelay() const;

                    /**
                     * 设置读取延迟
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _readerDelay 读取延迟
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReaderDelay(const double& _readerDelay);

                    /**
                     * 判断参数 ReaderDelay 是否已赋值
                     * @return ReaderDelay 是否已赋值
                     * 
                     */
                    bool ReaderDelayHasBeenSet() const;

                    /**
                     * 获取重启次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NumRestarts 重启次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetNumRestarts() const;

                    /**
                     * 设置重启次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _numRestarts 重启次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNumRestarts(const int64_t& _numRestarts);

                    /**
                     * 判断参数 NumRestarts 是否已赋值
                     * @return NumRestarts 是否已赋值
                     * 
                     */
                    bool NumRestartsHasBeenSet() const;

                    /**
                     * 获取任务创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 任务创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置任务创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 任务创建时间
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
                     * 获取任务更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 任务更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置任务更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 任务更新时间
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
                     * 获取任务最后一次运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastRunTime 任务最后一次运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastRunTime() const;

                    /**
                     * 设置任务最后一次运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastRunTime 任务最后一次运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastRunTime(const std::string& _lastRunTime);

                    /**
                     * 判断参数 LastRunTime 是否已赋值
                     * @return LastRunTime 是否已赋值
                     * 
                     */
                    bool LastRunTimeHasBeenSet() const;

                    /**
                     * 获取任务停止时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StopTime 任务停止时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStopTime() const;

                    /**
                     * 设置任务停止时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _stopTime 任务停止时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStopTime(const std::string& _stopTime);

                    /**
                     * 判断参数 StopTime 是否已赋值
                     * @return StopTime 是否已赋值
                     * 
                     */
                    bool StopTimeHasBeenSet() const;

                    /**
                     * 获取作业是否已提交
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HasVersion 作业是否已提交
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetHasVersion() const;

                    /**
                     * 设置作业是否已提交
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hasVersion 作业是否已提交
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHasVersion(const bool& _hasVersion);

                    /**
                     * 判断参数 HasVersion 是否已赋值
                     * @return HasVersion 是否已赋值
                     * 
                     */
                    bool HasVersionHasBeenSet() const;

                    /**
                     * 获取任务是否被锁定
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Locked 任务是否被锁定
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetLocked() const;

                    /**
                     * 设置任务是否被锁定
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _locked 任务是否被锁定
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLocked(const bool& _locked);

                    /**
                     * 判断参数 Locked 是否已赋值
                     * @return Locked 是否已赋值
                     * 
                     */
                    bool LockedHasBeenSet() const;

                    /**
                     * 获取任务锁定人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Locker 任务锁定人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLocker() const;

                    /**
                     * 设置任务锁定人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _locker 任务锁定人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLocker(const std::string& _locker);

                    /**
                     * 判断参数 Locker 是否已赋值
                     * @return Locker 是否已赋值
                     * 
                     */
                    bool LockerHasBeenSet() const;

                    /**
                     * 获取耗费资源量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunningCu 耗费资源量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetRunningCu() const;

                    /**
                     * 设置耗费资源量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runningCu 耗费资源量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunningCu(const double& _runningCu);

                    /**
                     * 判断参数 RunningCu 是否已赋值
                     * @return RunningCu 是否已赋值
                     * 
                     */
                    bool RunningCuHasBeenSet() const;

                    /**
                     * 获取该任务关联的告警规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskAlarmRegularList 该任务关联的告警规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetTaskAlarmRegularList() const;

                    /**
                     * 设置该任务关联的告警规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskAlarmRegularList 该任务关联的告警规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskAlarmRegularList(const std::vector<std::string>& _taskAlarmRegularList);

                    /**
                     * 判断参数 TaskAlarmRegularList 是否已赋值
                     * @return TaskAlarmRegularList 是否已赋值
                     * 
                     */
                    bool TaskAlarmRegularListHasBeenSet() const;

                    /**
                     * 获取实时任务资源分层情况： 0：进行中,1：成功 ,2：失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SwitchResource 实时任务资源分层情况： 0：进行中,1：成功 ,2：失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSwitchResource() const;

                    /**
                     * 设置实时任务资源分层情况： 0：进行中,1：成功 ,2：失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _switchResource 实时任务资源分层情况： 0：进行中,1：成功 ,2：失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSwitchResource(const int64_t& _switchResource);

                    /**
                     * 判断参数 SwitchResource 是否已赋值
                     * @return SwitchResource 是否已赋值
                     * 
                     */
                    bool SwitchResourceHasBeenSet() const;

                    /**
                     * 获取实时任务读取阶段：0：全部全量,1：部分全量,2：全部增量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReadPhase 实时任务读取阶段：0：全部全量,1：部分全量,2：全部增量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetReadPhase() const;

                    /**
                     * 设置实时任务读取阶段：0：全部全量,1：部分全量,2：全部增量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _readPhase 实时任务读取阶段：0：全部全量,1：部分全量,2：全部增量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReadPhase(const int64_t& _readPhase);

                    /**
                     * 判断参数 ReadPhase 是否已赋值
                     * @return ReadPhase 是否已赋值
                     * 
                     */
                    bool ReadPhaseHasBeenSet() const;

                    /**
                     * 获取实时任务版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceVersion 实时任务版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetInstanceVersion() const;

                    /**
                     * 设置实时任务版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceVersion 实时任务版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceVersion(const int64_t& _instanceVersion);

                    /**
                     * 判断参数 InstanceVersion 是否已赋值
                     * @return InstanceVersion 是否已赋值
                     * 
                     */
                    bool InstanceVersionHasBeenSet() const;

                    /**
                     * 获取离线任务导入到编排空间的任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ArrangeSpaceTaskId 离线任务导入到编排空间的任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetArrangeSpaceTaskId() const;

                    /**
                     * 设置离线任务导入到编排空间的任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _arrangeSpaceTaskId 离线任务导入到编排空间的任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetArrangeSpaceTaskId(const std::string& _arrangeSpaceTaskId);

                    /**
                     * 判断参数 ArrangeSpaceTaskId 是否已赋值
                     * @return ArrangeSpaceTaskId 是否已赋值
                     * 
                     */
                    bool ArrangeSpaceTaskIdHasBeenSet() const;

                    /**
                     * 获取离线任务状态区分1.未提交2.已提交3.已导出
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OfflineTaskStatus 离线任务状态区分1.未提交2.已提交3.已导出
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOfflineTaskStatus() const;

                    /**
                     * 设置离线任务状态区分1.未提交2.已提交3.已导出
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _offlineTaskStatus 离线任务状态区分1.未提交2.已提交3.已导出
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOfflineTaskStatus(const int64_t& _offlineTaskStatus);

                    /**
                     * 判断参数 OfflineTaskStatus 是否已赋值
                     * @return OfflineTaskStatus 是否已赋值
                     * 
                     */
                    bool OfflineTaskStatusHasBeenSet() const;

                    /**
                     * 获取导入到编排空间配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskImportInfo 导入到编排空间配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskImportInfo GetTaskImportInfo() const;

                    /**
                     * 设置导入到编排空间配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskImportInfo 导入到编排空间配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskImportInfo(const TaskImportInfo& _taskImportInfo);

                    /**
                     * 判断参数 TaskImportInfo 是否已赋值
                     * @return TaskImportInfo 是否已赋值
                     * 
                     */
                    bool TaskImportInfoHasBeenSet() const;

                    /**
                     * 获取业务延迟
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BusinessLatency 业务延迟
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBusinessLatency() const;

                    /**
                     * 设置业务延迟
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _businessLatency 业务延迟
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBusinessLatency(const int64_t& _businessLatency);

                    /**
                     * 判断参数 BusinessLatency 是否已赋值
                     * @return BusinessLatency 是否已赋值
                     * 
                     */
                    bool BusinessLatencyHasBeenSet() const;

                    /**
                     * 获取当前同步位点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CurrentSyncPosition 当前同步位点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCurrentSyncPosition() const;

                    /**
                     * 设置当前同步位点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _currentSyncPosition 当前同步位点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCurrentSyncPosition(const int64_t& _currentSyncPosition);

                    /**
                     * 判断参数 CurrentSyncPosition 是否已赋值
                     * @return CurrentSyncPosition 是否已赋值
                     * 
                     */
                    bool CurrentSyncPositionHasBeenSet() const;

                private:

                    /**
                     * 任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 任务描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 同步类型1.解决方案(整库迁移),2.单表同步
                     */
                    int64_t m_syncType;
                    bool m_syncTypeHasBeenSet;

                    /**
                     * 201.实时,202.离线
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 任务所属工作流id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务调度id(oceanus or us等作业id)，非填项
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scheduleTaskId;
                    bool m_scheduleTaskIdHasBeenSet;

                    /**
                     * inlong任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskGroupId;
                    bool m_taskGroupIdHasBeenSet;

                    /**
                     * 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 创建人uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * 操作人uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_operatorUin;
                    bool m_operatorUinHasBeenSet;

                    /**
                     * owner uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 应用id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 0:新建(任务开发态默认状态)|1:未开始|2:操作中|3:运行中|4:暂停|5:任务停止中|6:停止|7:执行失败|20:异常|21:未知|
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IntegrationNodeInfo> m_nodes;
                    bool m_nodesHasBeenSet;

                    /**
                     * 执行资源id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executorId;
                    bool m_executorIdHasBeenSet;

                    /**
                     * 任务配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RecordField> m_config;
                    bool m_configHasBeenSet;

                    /**
                     * 任务扩展配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RecordField> m_extConfig;
                    bool m_extConfigHasBeenSet;

                    /**
                     * 任务执行context信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RecordField> m_executeContext;
                    bool m_executeContextHasBeenSet;

                    /**
                     * 节点映射
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IntegrationNodeMapping> m_mappings;
                    bool m_mappingsHasBeenSet;

                    /**
                     * 任务配置模式，0:画布 1:表单 3:脚本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskMode;
                    bool m_taskModeHasBeenSet;

                    /**
                     * 责任人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_incharge;
                    bool m_inchargeHasBeenSet;

                    /**
                     * 离线新增参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OfflineTaskAddParam m_offlineTaskAddEntity;
                    bool m_offlineTaskAddEntityHasBeenSet;

                    /**
                     * group name
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executorGroupName;
                    bool m_executorGroupNameHasBeenSet;

                    /**
                     * inlong manager url
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inLongManagerUrl;
                    bool m_inLongManagerUrlHasBeenSet;

                    /**
                     * stream id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inLongStreamId;
                    bool m_inLongStreamIdHasBeenSet;

                    /**
                     * version
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inLongManagerVersion;
                    bool m_inLongManagerVersionHasBeenSet;

                    /**
                     * inlong dataproxy url
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_dataProxyUrl;
                    bool m_dataProxyUrlHasBeenSet;

                    /**
                     * 任务版本是否已提交运维
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_submit;
                    bool m_submitHasBeenSet;

                    /**
                     * 数据源类型：MYSQL|POSTGRE|ORACLE|SQLSERVER|FTP|HIVE|HDFS|ICEBERG|KAFKA|HBASE|SPARK|VIRTUAL|TBASE|DB2|DM|GAUSSDB|GBASE|IMPALA|ES|S3_DATAINSIGHT|GREENPLUM|PHOENIX|SAP_HANA|SFTP|OCEANBASE|CLICKHOUSE|KUDU|VERTICA|REDIS|COS|DLC|DLCV1|DORIS|CKAFKA|DTS_KAFKA|S3|CDW|LOCAL|TDSQLC|TDSQL|TDSQL_MYSQL|MONGODB|INFORMIX|SYBASE|REST_API|SuperSQL|PRESTO|DR_SUM|TiDB|StarRocks|Trino|Kyuubi|GDB|TCHOUSE_X|TCHOUSE_P|TDSQL_POSTGRE
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inputDatasourceType;
                    bool m_inputDatasourceTypeHasBeenSet;

                    /**
                     * 数据源类型：MYSQL|POSTGRE|ORACLE|SQLSERVER|FTP|HIVE|HDFS|ICEBERG|KAFKA|HBASE|SPARK|VIRTUAL|TBASE|DB2|DM|GAUSSDB|GBASE|IMPALA|ES|S3_DATAINSIGHT|GREENPLUM|PHOENIX|SAP_HANA|SFTP|OCEANBASE|CLICKHOUSE|KUDU|VERTICA|REDIS|COS|DLC|DLCV1|DORIS|CKAFKA|DTS_KAFKA|S3|CDW|LOCAL|TDSQLC|TDSQL|TDSQL_MYSQL|MONGODB|INFORMIX|SYBASE|REST_API|SuperSQL|PRESTO|DR_SUM|TiDB|StarRocks|Trino|Kyuubi|GDB|TCHOUSE_X|TCHOUSE_P|TDSQL_POSTGRE
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outputDatasourceType;
                    bool m_outputDatasourceTypeHasBeenSet;

                    /**
                     * 读取条数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_numRecordsIn;
                    bool m_numRecordsInHasBeenSet;

                    /**
                     * 写入条数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_numRecordsOut;
                    bool m_numRecordsOutHasBeenSet;

                    /**
                     * 读取延迟
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_readerDelay;
                    bool m_readerDelayHasBeenSet;

                    /**
                     * 重启次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_numRestarts;
                    bool m_numRestartsHasBeenSet;

                    /**
                     * 任务创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 任务更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 任务最后一次运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastRunTime;
                    bool m_lastRunTimeHasBeenSet;

                    /**
                     * 任务停止时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_stopTime;
                    bool m_stopTimeHasBeenSet;

                    /**
                     * 作业是否已提交
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_hasVersion;
                    bool m_hasVersionHasBeenSet;

                    /**
                     * 任务是否被锁定
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_locked;
                    bool m_lockedHasBeenSet;

                    /**
                     * 任务锁定人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_locker;
                    bool m_lockerHasBeenSet;

                    /**
                     * 耗费资源量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_runningCu;
                    bool m_runningCuHasBeenSet;

                    /**
                     * 该任务关联的告警规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_taskAlarmRegularList;
                    bool m_taskAlarmRegularListHasBeenSet;

                    /**
                     * 实时任务资源分层情况： 0：进行中,1：成功 ,2：失败
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_switchResource;
                    bool m_switchResourceHasBeenSet;

                    /**
                     * 实时任务读取阶段：0：全部全量,1：部分全量,2：全部增量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_readPhase;
                    bool m_readPhaseHasBeenSet;

                    /**
                     * 实时任务版本号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_instanceVersion;
                    bool m_instanceVersionHasBeenSet;

                    /**
                     * 离线任务导入到编排空间的任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_arrangeSpaceTaskId;
                    bool m_arrangeSpaceTaskIdHasBeenSet;

                    /**
                     * 离线任务状态区分1.未提交2.已提交3.已导出
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_offlineTaskStatus;
                    bool m_offlineTaskStatusHasBeenSet;

                    /**
                     * 导入到编排空间配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskImportInfo m_taskImportInfo;
                    bool m_taskImportInfoHasBeenSet;

                    /**
                     * 业务延迟
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_businessLatency;
                    bool m_businessLatencyHasBeenSet;

                    /**
                     * 当前同步位点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_currentSyncPosition;
                    bool m_currentSyncPositionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INTEGRATIONTASKINFO_H_
