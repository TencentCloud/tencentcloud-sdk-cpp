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
#include <tencentcloud/wedata/v20210820/model/IntegrationTag.h>
#include <tencentcloud/wedata/v20210820/model/LastOperateInfo.h>


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
                     * 获取<p>任务名称</p>
                     * @return TaskName <p>任务名称</p>
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>任务名称</p>
                     * @param _taskName <p>任务名称</p>
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
                     * 获取<p>任务描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description <p>任务描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>任务描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description <p>任务描述</p>
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
                     * 获取<p>同步类型1.解决方案(整库迁移),2.单表同步</p>
                     * @return SyncType <p>同步类型1.解决方案(整库迁移),2.单表同步</p>
                     * 
                     */
                    int64_t GetSyncType() const;

                    /**
                     * 设置<p>同步类型1.解决方案(整库迁移),2.单表同步</p>
                     * @param _syncType <p>同步类型1.解决方案(整库迁移),2.单表同步</p>
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
                     * 获取<p>201.实时,202.离线</p>
                     * @return TaskType <p>201.实时,202.离线</p>
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置<p>201.实时,202.离线</p>
                     * @param _taskType <p>201.实时,202.离线</p>
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
                     * 获取<p>任务所属工作流id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowId <p>任务所属工作流id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置<p>任务所属工作流id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowId <p>任务所属工作流id</p>
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
                     * 获取<p>任务id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId <p>任务id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId <p>任务id</p>
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
                     * 获取<p>任务调度id(oceanus or us等作业id)，非填项</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScheduleTaskId <p>任务调度id(oceanus or us等作业id)，非填项</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScheduleTaskId() const;

                    /**
                     * 设置<p>任务调度id(oceanus or us等作业id)，非填项</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheduleTaskId <p>任务调度id(oceanus or us等作业id)，非填项</p>
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
                     * 获取<p>inlong任务id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskGroupId <p>inlong任务id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskGroupId() const;

                    /**
                     * 设置<p>inlong任务id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskGroupId <p>inlong任务id</p>
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
                     * 获取<p>项目id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId <p>项目id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>项目id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId <p>项目id</p>
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
                     * 获取<p>创建人uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatorUin <p>创建人uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatorUin() const;

                    /**
                     * 设置<p>创建人uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creatorUin <p>创建人uin</p>
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
                     * 获取<p>操作人uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperatorUin <p>操作人uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOperatorUin() const;

                    /**
                     * 设置<p>操作人uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operatorUin <p>操作人uin</p>
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
                     * 获取<p>owner uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerUin <p>owner uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置<p>owner uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerUin <p>owner uin</p>
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
                     * 获取<p>应用id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId <p>应用id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId <p>应用id</p>
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
                     * 获取<p>0:新建(任务开发态默认状态)|1:未开始|2:操作中|3:运行中|4:暂停|5:任务停止中|6:停止|7:执行失败|20:异常|21:未知|</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>0:新建(任务开发态默认状态)|1:未开始|2:操作中|3:运行中|4:暂停|5:任务停止中|6:停止|7:执行失败|20:异常|21:未知|</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>0:新建(任务开发态默认状态)|1:未开始|2:操作中|3:运行中|4:暂停|5:任务停止中|6:停止|7:执行失败|20:异常|21:未知|</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>0:新建(任务开发态默认状态)|1:未开始|2:操作中|3:运行中|4:暂停|5:任务停止中|6:停止|7:执行失败|20:异常|21:未知|</p>
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
                     * 获取<p>节点列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Nodes <p>节点列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<IntegrationNodeInfo> GetNodes() const;

                    /**
                     * 设置<p>节点列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodes <p>节点列表</p>
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
                     * 获取<p>执行资源id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutorId <p>执行资源id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutorId() const;

                    /**
                     * 设置<p>执行资源id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executorId <p>执行资源id</p>
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
                     * 获取<p>任务配置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Config <p>任务配置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RecordField> GetConfig() const;

                    /**
                     * 设置<p>任务配置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _config <p>任务配置信息</p>
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
                     * 获取<p>任务扩展配置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtConfig <p>任务扩展配置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RecordField> GetExtConfig() const;

                    /**
                     * 设置<p>任务扩展配置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extConfig <p>任务扩展配置信息</p>
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
                     * 获取<p>任务执行context信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecuteContext <p>任务执行context信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RecordField> GetExecuteContext() const;

                    /**
                     * 设置<p>任务执行context信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executeContext <p>任务执行context信息</p>
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
                     * 获取<p>节点映射</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Mappings <p>节点映射</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<IntegrationNodeMapping> GetMappings() const;

                    /**
                     * 设置<p>节点映射</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mappings <p>节点映射</p>
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
                     * 获取<p>任务配置模式，0:画布 1:表单 3:脚本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskMode <p>任务配置模式，0:画布 1:表单 3:脚本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskMode() const;

                    /**
                     * 设置<p>任务配置模式，0:画布 1:表单 3:脚本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskMode <p>任务配置模式，0:画布 1:表单 3:脚本</p>
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
                     * 获取<p>责任人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Incharge <p>责任人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIncharge() const;

                    /**
                     * 设置<p>责任人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _incharge <p>责任人</p>
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
                     * 获取<p>离线新增参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OfflineTaskAddEntity <p>离线新增参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OfflineTaskAddParam GetOfflineTaskAddEntity() const;

                    /**
                     * 设置<p>离线新增参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _offlineTaskAddEntity <p>离线新增参数</p>
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
                     * 获取<p>group name</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutorGroupName <p>group name</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutorGroupName() const;

                    /**
                     * 设置<p>group name</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executorGroupName <p>group name</p>
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
                     * 获取<p>inlong manager url</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InLongManagerUrl <p>inlong manager url</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInLongManagerUrl() const;

                    /**
                     * 设置<p>inlong manager url</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inLongManagerUrl <p>inlong manager url</p>
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
                     * 获取<p>stream id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InLongStreamId <p>stream id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInLongStreamId() const;

                    /**
                     * 设置<p>stream id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inLongStreamId <p>stream id</p>
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
                     * 获取<p>version</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InLongManagerVersion <p>version</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInLongManagerVersion() const;

                    /**
                     * 设置<p>version</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inLongManagerVersion <p>version</p>
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
                     * 获取<p>inlong dataproxy url</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataProxyUrl <p>inlong dataproxy url</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetDataProxyUrl() const;

                    /**
                     * 设置<p>inlong dataproxy url</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataProxyUrl <p>inlong dataproxy url</p>
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
                     * 获取<p>任务版本是否已提交运维</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Submit <p>任务版本是否已提交运维</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSubmit() const;

                    /**
                     * 设置<p>任务版本是否已提交运维</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _submit <p>任务版本是否已提交运维</p>
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
                     * 获取<p>数据源类型：MYSQL|POSTGRE|ORACLE|SQLSERVER|FTP|HIVE|HDFS|ICEBERG|KAFKA|HBASE|SPARK|VIRTUAL|TBASE|DB2|DM|GAUSSDB|GBASE|IMPALA|ES|S3_DATAINSIGHT|GREENPLUM|PHOENIX|SAP_HANA|SFTP|OCEANBASE|CLICKHOUSE|KUDU|VERTICA|REDIS|COS|DLC|DLCV1|DORIS|CKAFKA|DTS_KAFKA|S3|CDW|LOCAL|TDSQLC|TDSQL|TDSQL_MYSQL|MONGODB|INFORMIX|SYBASE|REST_API|SuperSQL|PRESTO|DR_SUM|TiDB|StarRocks|Trino|Kyuubi|GDB|TCHOUSE_X|TCHOUSE_P|TDSQL_POSTGRE</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputDatasourceType <p>数据源类型：MYSQL|POSTGRE|ORACLE|SQLSERVER|FTP|HIVE|HDFS|ICEBERG|KAFKA|HBASE|SPARK|VIRTUAL|TBASE|DB2|DM|GAUSSDB|GBASE|IMPALA|ES|S3_DATAINSIGHT|GREENPLUM|PHOENIX|SAP_HANA|SFTP|OCEANBASE|CLICKHOUSE|KUDU|VERTICA|REDIS|COS|DLC|DLCV1|DORIS|CKAFKA|DTS_KAFKA|S3|CDW|LOCAL|TDSQLC|TDSQL|TDSQL_MYSQL|MONGODB|INFORMIX|SYBASE|REST_API|SuperSQL|PRESTO|DR_SUM|TiDB|StarRocks|Trino|Kyuubi|GDB|TCHOUSE_X|TCHOUSE_P|TDSQL_POSTGRE</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInputDatasourceType() const;

                    /**
                     * 设置<p>数据源类型：MYSQL|POSTGRE|ORACLE|SQLSERVER|FTP|HIVE|HDFS|ICEBERG|KAFKA|HBASE|SPARK|VIRTUAL|TBASE|DB2|DM|GAUSSDB|GBASE|IMPALA|ES|S3_DATAINSIGHT|GREENPLUM|PHOENIX|SAP_HANA|SFTP|OCEANBASE|CLICKHOUSE|KUDU|VERTICA|REDIS|COS|DLC|DLCV1|DORIS|CKAFKA|DTS_KAFKA|S3|CDW|LOCAL|TDSQLC|TDSQL|TDSQL_MYSQL|MONGODB|INFORMIX|SYBASE|REST_API|SuperSQL|PRESTO|DR_SUM|TiDB|StarRocks|Trino|Kyuubi|GDB|TCHOUSE_X|TCHOUSE_P|TDSQL_POSTGRE</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inputDatasourceType <p>数据源类型：MYSQL|POSTGRE|ORACLE|SQLSERVER|FTP|HIVE|HDFS|ICEBERG|KAFKA|HBASE|SPARK|VIRTUAL|TBASE|DB2|DM|GAUSSDB|GBASE|IMPALA|ES|S3_DATAINSIGHT|GREENPLUM|PHOENIX|SAP_HANA|SFTP|OCEANBASE|CLICKHOUSE|KUDU|VERTICA|REDIS|COS|DLC|DLCV1|DORIS|CKAFKA|DTS_KAFKA|S3|CDW|LOCAL|TDSQLC|TDSQL|TDSQL_MYSQL|MONGODB|INFORMIX|SYBASE|REST_API|SuperSQL|PRESTO|DR_SUM|TiDB|StarRocks|Trino|Kyuubi|GDB|TCHOUSE_X|TCHOUSE_P|TDSQL_POSTGRE</p>
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
                     * 获取<p>数据源类型：MYSQL|POSTGRE|ORACLE|SQLSERVER|FTP|HIVE|HDFS|ICEBERG|KAFKA|HBASE|SPARK|VIRTUAL|TBASE|DB2|DM|GAUSSDB|GBASE|IMPALA|ES|S3_DATAINSIGHT|GREENPLUM|PHOENIX|SAP_HANA|SFTP|OCEANBASE|CLICKHOUSE|KUDU|VERTICA|REDIS|COS|DLC|DLCV1|DORIS|CKAFKA|DTS_KAFKA|S3|CDW|LOCAL|TDSQLC|TDSQL|TDSQL_MYSQL|MONGODB|INFORMIX|SYBASE|REST_API|SuperSQL|PRESTO|DR_SUM|TiDB|StarRocks|Trino|Kyuubi|GDB|TCHOUSE_X|TCHOUSE_P|TDSQL_POSTGRE</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutputDatasourceType <p>数据源类型：MYSQL|POSTGRE|ORACLE|SQLSERVER|FTP|HIVE|HDFS|ICEBERG|KAFKA|HBASE|SPARK|VIRTUAL|TBASE|DB2|DM|GAUSSDB|GBASE|IMPALA|ES|S3_DATAINSIGHT|GREENPLUM|PHOENIX|SAP_HANA|SFTP|OCEANBASE|CLICKHOUSE|KUDU|VERTICA|REDIS|COS|DLC|DLCV1|DORIS|CKAFKA|DTS_KAFKA|S3|CDW|LOCAL|TDSQLC|TDSQL|TDSQL_MYSQL|MONGODB|INFORMIX|SYBASE|REST_API|SuperSQL|PRESTO|DR_SUM|TiDB|StarRocks|Trino|Kyuubi|GDB|TCHOUSE_X|TCHOUSE_P|TDSQL_POSTGRE</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOutputDatasourceType() const;

                    /**
                     * 设置<p>数据源类型：MYSQL|POSTGRE|ORACLE|SQLSERVER|FTP|HIVE|HDFS|ICEBERG|KAFKA|HBASE|SPARK|VIRTUAL|TBASE|DB2|DM|GAUSSDB|GBASE|IMPALA|ES|S3_DATAINSIGHT|GREENPLUM|PHOENIX|SAP_HANA|SFTP|OCEANBASE|CLICKHOUSE|KUDU|VERTICA|REDIS|COS|DLC|DLCV1|DORIS|CKAFKA|DTS_KAFKA|S3|CDW|LOCAL|TDSQLC|TDSQL|TDSQL_MYSQL|MONGODB|INFORMIX|SYBASE|REST_API|SuperSQL|PRESTO|DR_SUM|TiDB|StarRocks|Trino|Kyuubi|GDB|TCHOUSE_X|TCHOUSE_P|TDSQL_POSTGRE</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outputDatasourceType <p>数据源类型：MYSQL|POSTGRE|ORACLE|SQLSERVER|FTP|HIVE|HDFS|ICEBERG|KAFKA|HBASE|SPARK|VIRTUAL|TBASE|DB2|DM|GAUSSDB|GBASE|IMPALA|ES|S3_DATAINSIGHT|GREENPLUM|PHOENIX|SAP_HANA|SFTP|OCEANBASE|CLICKHOUSE|KUDU|VERTICA|REDIS|COS|DLC|DLCV1|DORIS|CKAFKA|DTS_KAFKA|S3|CDW|LOCAL|TDSQLC|TDSQL|TDSQL_MYSQL|MONGODB|INFORMIX|SYBASE|REST_API|SuperSQL|PRESTO|DR_SUM|TiDB|StarRocks|Trino|Kyuubi|GDB|TCHOUSE_X|TCHOUSE_P|TDSQL_POSTGRE</p>
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
                     * 获取<p>读取条数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NumRecordsIn <p>读取条数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetNumRecordsIn() const;

                    /**
                     * 设置<p>读取条数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _numRecordsIn <p>读取条数</p>
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
                     * 获取<p>写入条数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NumRecordsOut <p>写入条数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetNumRecordsOut() const;

                    /**
                     * 设置<p>写入条数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _numRecordsOut <p>写入条数</p>
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
                     * 获取<p>读取延迟</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReaderDelay <p>读取延迟</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetReaderDelay() const;

                    /**
                     * 设置<p>读取延迟</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _readerDelay <p>读取延迟</p>
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
                     * 获取<p>重启次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NumRestarts <p>重启次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetNumRestarts() const;

                    /**
                     * 设置<p>重启次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _numRestarts <p>重启次数</p>
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
                     * 获取<p>任务创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>任务创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>任务创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>任务创建时间</p>
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
                     * 获取<p>任务更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime <p>任务更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>任务更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime <p>任务更新时间</p>
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
                     * 获取<p>任务最后一次运行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastRunTime <p>任务最后一次运行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastRunTime() const;

                    /**
                     * 设置<p>任务最后一次运行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastRunTime <p>任务最后一次运行时间</p>
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
                     * 获取<p>任务停止时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StopTime <p>任务停止时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStopTime() const;

                    /**
                     * 设置<p>任务停止时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _stopTime <p>任务停止时间</p>
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
                     * 获取<p>作业是否已提交</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HasVersion <p>作业是否已提交</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetHasVersion() const;

                    /**
                     * 设置<p>作业是否已提交</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hasVersion <p>作业是否已提交</p>
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
                     * 获取<p>任务是否被锁定</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Locked <p>任务是否被锁定</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetLocked() const;

                    /**
                     * 设置<p>任务是否被锁定</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _locked <p>任务是否被锁定</p>
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
                     * 获取<p>任务锁定人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Locker <p>任务锁定人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLocker() const;

                    /**
                     * 设置<p>任务锁定人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _locker <p>任务锁定人</p>
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
                     * 获取<p>耗费资源量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunningCu <p>耗费资源量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetRunningCu() const;

                    /**
                     * 设置<p>耗费资源量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runningCu <p>耗费资源量</p>
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
                     * 获取<p>该任务关联的告警规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskAlarmRegularList <p>该任务关联的告警规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetTaskAlarmRegularList() const;

                    /**
                     * 设置<p>该任务关联的告警规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskAlarmRegularList <p>该任务关联的告警规则</p>
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
                     * 获取<p>实时任务资源分层情况： 0：进行中,1：成功 ,2：失败</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SwitchResource <p>实时任务资源分层情况： 0：进行中,1：成功 ,2：失败</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSwitchResource() const;

                    /**
                     * 设置<p>实时任务资源分层情况： 0：进行中,1：成功 ,2：失败</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _switchResource <p>实时任务资源分层情况： 0：进行中,1：成功 ,2：失败</p>
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
                     * 获取<p>实时任务读取阶段：0：全部全量,1：部分全量,2：全部增量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReadPhase <p>实时任务读取阶段：0：全部全量,1：部分全量,2：全部增量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetReadPhase() const;

                    /**
                     * 设置<p>实时任务读取阶段：0：全部全量,1：部分全量,2：全部增量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _readPhase <p>实时任务读取阶段：0：全部全量,1：部分全量,2：全部增量</p>
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
                     * 获取<p>实时任务版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceVersion <p>实时任务版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetInstanceVersion() const;

                    /**
                     * 设置<p>实时任务版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceVersion <p>实时任务版本号</p>
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
                     * 获取<p>离线任务导入到编排空间的任务id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ArrangeSpaceTaskId <p>离线任务导入到编排空间的任务id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetArrangeSpaceTaskId() const;

                    /**
                     * 设置<p>离线任务导入到编排空间的任务id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _arrangeSpaceTaskId <p>离线任务导入到编排空间的任务id</p>
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
                     * 获取<p>离线任务状态区分1.未提交2.已提交3.已导出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OfflineTaskStatus <p>离线任务状态区分1.未提交2.已提交3.已导出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOfflineTaskStatus() const;

                    /**
                     * 设置<p>离线任务状态区分1.未提交2.已提交3.已导出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _offlineTaskStatus <p>离线任务状态区分1.未提交2.已提交3.已导出</p>
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
                     * 获取<p>导入到编排空间配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskImportInfo <p>导入到编排空间配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskImportInfo GetTaskImportInfo() const;

                    /**
                     * 设置<p>导入到编排空间配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskImportInfo <p>导入到编排空间配置</p>
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
                     * 获取<p>业务延迟</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BusinessLatency <p>业务延迟</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBusinessLatency() const;

                    /**
                     * 设置<p>业务延迟</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _businessLatency <p>业务延迟</p>
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
                     * 获取<p>当前同步位点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CurrentSyncPosition <p>当前同步位点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCurrentSyncPosition() const;

                    /**
                     * 设置<p>当前同步位点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _currentSyncPosition <p>当前同步位点</p>
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

                    /**
                     * 获取<p>标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagList <p>标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<IntegrationTag> GetTagList() const;

                    /**
                     * 设置<p>标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagList <p>标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTagList(const std::vector<IntegrationTag>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取<p>错误信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorMessage <p>错误信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置<p>错误信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorMessage <p>错误信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取<p>任务子状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskSubType <p>任务子状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTaskSubType() const;

                    /**
                     * 设置<p>任务子状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskSubType <p>任务子状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskSubType(const int64_t& _taskSubType);

                    /**
                     * 判断参数 TaskSubType 是否已赋值
                     * @return TaskSubType 是否已赋值
                     * 
                     */
                    bool TaskSubTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否存在SavePoint, 0-存在, 1-不存在, null 为未知</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NotExistsCheckPoint <p>是否存在SavePoint, 0-存在, 1-不存在, null 为未知</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetNotExistsCheckPoint() const;

                    /**
                     * 设置<p>是否存在SavePoint, 0-存在, 1-不存在, null 为未知</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _notExistsCheckPoint <p>是否存在SavePoint, 0-存在, 1-不存在, null 为未知</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNotExistsCheckPoint(const int64_t& _notExistsCheckPoint);

                    /**
                     * 判断参数 NotExistsCheckPoint 是否已赋值
                     * @return NotExistsCheckPoint 是否已赋值
                     * 
                     */
                    bool NotExistsCheckPointHasBeenSet() const;

                    /**
                     * 获取<p>savepiontPath</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SavePointId <p>savepiontPath</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSavePointId() const;

                    /**
                     * 设置<p>savepiontPath</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _savePointId <p>savepiontPath</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSavePointId(const std::string& _savePointId);

                    /**
                     * 判断参数 SavePointId 是否已赋值
                     * @return SavePointId 是否已赋值
                     * 
                     */
                    bool SavePointIdHasBeenSet() const;

                    /**
                     * 获取<p>savepiontId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SavePointPath <p>savepiontId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSavePointPath() const;

                    /**
                     * 设置<p>savepiontId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _savePointPath <p>savepiontId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSavePointPath(const std::string& _savePointPath);

                    /**
                     * 判断参数 SavePointPath 是否已赋值
                     * @return SavePointPath 是否已赋值
                     * 
                     */
                    bool SavePointPathHasBeenSet() const;

                    /**
                     * 获取<p>最近一次操作信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastOperateInfo <p>最近一次操作信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LastOperateInfo GetLastOperateInfo() const;

                    /**
                     * 设置<p>最近一次操作信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastOperateInfo <p>最近一次操作信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastOperateInfo(const LastOperateInfo& _lastOperateInfo);

                    /**
                     * 判断参数 LastOperateInfo 是否已赋值
                     * @return LastOperateInfo 是否已赋值
                     * 
                     */
                    bool LastOperateInfoHasBeenSet() const;

                private:

                    /**
                     * <p>任务名称</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>任务描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>同步类型1.解决方案(整库迁移),2.单表同步</p>
                     */
                    int64_t m_syncType;
                    bool m_syncTypeHasBeenSet;

                    /**
                     * <p>201.实时,202.离线</p>
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>任务所属工作流id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * <p>任务id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务调度id(oceanus or us等作业id)，非填项</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scheduleTaskId;
                    bool m_scheduleTaskIdHasBeenSet;

                    /**
                     * <p>inlong任务id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskGroupId;
                    bool m_taskGroupIdHasBeenSet;

                    /**
                     * <p>项目id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>创建人uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * <p>操作人uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_operatorUin;
                    bool m_operatorUinHasBeenSet;

                    /**
                     * <p>owner uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * <p>应用id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>0:新建(任务开发态默认状态)|1:未开始|2:操作中|3:运行中|4:暂停|5:任务停止中|6:停止|7:执行失败|20:异常|21:未知|</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>节点列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IntegrationNodeInfo> m_nodes;
                    bool m_nodesHasBeenSet;

                    /**
                     * <p>执行资源id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executorId;
                    bool m_executorIdHasBeenSet;

                    /**
                     * <p>任务配置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RecordField> m_config;
                    bool m_configHasBeenSet;

                    /**
                     * <p>任务扩展配置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RecordField> m_extConfig;
                    bool m_extConfigHasBeenSet;

                    /**
                     * <p>任务执行context信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RecordField> m_executeContext;
                    bool m_executeContextHasBeenSet;

                    /**
                     * <p>节点映射</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IntegrationNodeMapping> m_mappings;
                    bool m_mappingsHasBeenSet;

                    /**
                     * <p>任务配置模式，0:画布 1:表单 3:脚本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskMode;
                    bool m_taskModeHasBeenSet;

                    /**
                     * <p>责任人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_incharge;
                    bool m_inchargeHasBeenSet;

                    /**
                     * <p>离线新增参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OfflineTaskAddParam m_offlineTaskAddEntity;
                    bool m_offlineTaskAddEntityHasBeenSet;

                    /**
                     * <p>group name</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executorGroupName;
                    bool m_executorGroupNameHasBeenSet;

                    /**
                     * <p>inlong manager url</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inLongManagerUrl;
                    bool m_inLongManagerUrlHasBeenSet;

                    /**
                     * <p>stream id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inLongStreamId;
                    bool m_inLongStreamIdHasBeenSet;

                    /**
                     * <p>version</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inLongManagerVersion;
                    bool m_inLongManagerVersionHasBeenSet;

                    /**
                     * <p>inlong dataproxy url</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_dataProxyUrl;
                    bool m_dataProxyUrlHasBeenSet;

                    /**
                     * <p>任务版本是否已提交运维</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_submit;
                    bool m_submitHasBeenSet;

                    /**
                     * <p>数据源类型：MYSQL|POSTGRE|ORACLE|SQLSERVER|FTP|HIVE|HDFS|ICEBERG|KAFKA|HBASE|SPARK|VIRTUAL|TBASE|DB2|DM|GAUSSDB|GBASE|IMPALA|ES|S3_DATAINSIGHT|GREENPLUM|PHOENIX|SAP_HANA|SFTP|OCEANBASE|CLICKHOUSE|KUDU|VERTICA|REDIS|COS|DLC|DLCV1|DORIS|CKAFKA|DTS_KAFKA|S3|CDW|LOCAL|TDSQLC|TDSQL|TDSQL_MYSQL|MONGODB|INFORMIX|SYBASE|REST_API|SuperSQL|PRESTO|DR_SUM|TiDB|StarRocks|Trino|Kyuubi|GDB|TCHOUSE_X|TCHOUSE_P|TDSQL_POSTGRE</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inputDatasourceType;
                    bool m_inputDatasourceTypeHasBeenSet;

                    /**
                     * <p>数据源类型：MYSQL|POSTGRE|ORACLE|SQLSERVER|FTP|HIVE|HDFS|ICEBERG|KAFKA|HBASE|SPARK|VIRTUAL|TBASE|DB2|DM|GAUSSDB|GBASE|IMPALA|ES|S3_DATAINSIGHT|GREENPLUM|PHOENIX|SAP_HANA|SFTP|OCEANBASE|CLICKHOUSE|KUDU|VERTICA|REDIS|COS|DLC|DLCV1|DORIS|CKAFKA|DTS_KAFKA|S3|CDW|LOCAL|TDSQLC|TDSQL|TDSQL_MYSQL|MONGODB|INFORMIX|SYBASE|REST_API|SuperSQL|PRESTO|DR_SUM|TiDB|StarRocks|Trino|Kyuubi|GDB|TCHOUSE_X|TCHOUSE_P|TDSQL_POSTGRE</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outputDatasourceType;
                    bool m_outputDatasourceTypeHasBeenSet;

                    /**
                     * <p>读取条数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_numRecordsIn;
                    bool m_numRecordsInHasBeenSet;

                    /**
                     * <p>写入条数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_numRecordsOut;
                    bool m_numRecordsOutHasBeenSet;

                    /**
                     * <p>读取延迟</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_readerDelay;
                    bool m_readerDelayHasBeenSet;

                    /**
                     * <p>重启次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_numRestarts;
                    bool m_numRestartsHasBeenSet;

                    /**
                     * <p>任务创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>任务更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>任务最后一次运行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastRunTime;
                    bool m_lastRunTimeHasBeenSet;

                    /**
                     * <p>任务停止时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_stopTime;
                    bool m_stopTimeHasBeenSet;

                    /**
                     * <p>作业是否已提交</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_hasVersion;
                    bool m_hasVersionHasBeenSet;

                    /**
                     * <p>任务是否被锁定</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_locked;
                    bool m_lockedHasBeenSet;

                    /**
                     * <p>任务锁定人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_locker;
                    bool m_lockerHasBeenSet;

                    /**
                     * <p>耗费资源量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_runningCu;
                    bool m_runningCuHasBeenSet;

                    /**
                     * <p>该任务关联的告警规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_taskAlarmRegularList;
                    bool m_taskAlarmRegularListHasBeenSet;

                    /**
                     * <p>实时任务资源分层情况： 0：进行中,1：成功 ,2：失败</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_switchResource;
                    bool m_switchResourceHasBeenSet;

                    /**
                     * <p>实时任务读取阶段：0：全部全量,1：部分全量,2：全部增量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_readPhase;
                    bool m_readPhaseHasBeenSet;

                    /**
                     * <p>实时任务版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_instanceVersion;
                    bool m_instanceVersionHasBeenSet;

                    /**
                     * <p>离线任务导入到编排空间的任务id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_arrangeSpaceTaskId;
                    bool m_arrangeSpaceTaskIdHasBeenSet;

                    /**
                     * <p>离线任务状态区分1.未提交2.已提交3.已导出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_offlineTaskStatus;
                    bool m_offlineTaskStatusHasBeenSet;

                    /**
                     * <p>导入到编排空间配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskImportInfo m_taskImportInfo;
                    bool m_taskImportInfoHasBeenSet;

                    /**
                     * <p>业务延迟</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_businessLatency;
                    bool m_businessLatencyHasBeenSet;

                    /**
                     * <p>当前同步位点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_currentSyncPosition;
                    bool m_currentSyncPositionHasBeenSet;

                    /**
                     * <p>标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IntegrationTag> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * <p>错误信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * <p>任务子状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_taskSubType;
                    bool m_taskSubTypeHasBeenSet;

                    /**
                     * <p>是否存在SavePoint, 0-存在, 1-不存在, null 为未知</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_notExistsCheckPoint;
                    bool m_notExistsCheckPointHasBeenSet;

                    /**
                     * <p>savepiontPath</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_savePointId;
                    bool m_savePointIdHasBeenSet;

                    /**
                     * <p>savepiontId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_savePointPath;
                    bool m_savePointPathHasBeenSet;

                    /**
                     * <p>最近一次操作信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LastOperateInfo m_lastOperateInfo;
                    bool m_lastOperateInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INTEGRATIONTASKINFO_H_
