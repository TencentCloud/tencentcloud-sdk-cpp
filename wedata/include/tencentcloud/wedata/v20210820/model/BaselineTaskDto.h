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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BASELINETASKDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BASELINETASKDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/StringListNode.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 基线关联任务
                */
                class BaselineTaskDto : public AbstractModel
                {
                public:
                    BaselineTaskDto();
                    ~BaselineTaskDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取变更记录id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 变更记录id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置变更记录id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 变更记录id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取基线id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BaselineId 基线id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBaselineId() const;

                    /**
                     * 设置基线id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _baselineId 基线id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBaselineId(const int64_t& _baselineId);

                    /**
                     * 判断参数 BaselineId 是否已赋值
                     * @return BaselineId 是否已赋值
                     * 
                     */
                    bool BaselineIdHasBeenSet() const;

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
                     * 获取任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskName 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskName 任务名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取任务运行平均时间/单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EstimatedCostTime 任务运行平均时间/单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEstimatedCostTime() const;

                    /**
                     * 设置任务运行平均时间/单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _estimatedCostTime 任务运行平均时间/单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEstimatedCostTime(const int64_t& _estimatedCostTime);

                    /**
                     * 判断参数 EstimatedCostTime 是否已赋值
                     * @return EstimatedCostTime 是否已赋值
                     * 
                     */
                    bool EstimatedCostTimeHasBeenSet() const;

                    /**
                     * 获取上游实例id,多个实例用,分开
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpstreamTaskIds 上游实例id,多个实例用,分开
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    StringListNode GetUpstreamTaskIds() const;

                    /**
                     * 设置上游实例id,多个实例用,分开
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _upstreamTaskIds 上游实例id,多个实例用,分开
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpstreamTaskIds(const StringListNode& _upstreamTaskIds);

                    /**
                     * 判断参数 UpstreamTaskIds 是否已赋值
                     * @return UpstreamTaskIds 是否已赋值
                     * 
                     */
                    bool UpstreamTaskIdsHasBeenSet() const;

                    /**
                     * 获取下游实例id,多个实例用,分开
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DownstreamTaskIds 下游实例id,多个实例用,分开
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    StringListNode GetDownstreamTaskIds() const;

                    /**
                     * 设置下游实例id,多个实例用,分开
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _downstreamTaskIds 下游实例id,多个实例用,分开
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDownstreamTaskIds(const StringListNode& _downstreamTaskIds);

                    /**
                     * 判断参数 DownstreamTaskIds 是否已赋值
                     * @return DownstreamTaskIds 是否已赋值
                     * 
                     */
                    bool DownstreamTaskIdsHasBeenSet() const;

                    /**
                     * 获取否是保障任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsPromiseTask 否是保障任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsPromiseTask() const;

                    /**
                     * 设置否是保障任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isPromiseTask 否是保障任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsPromiseTask(const bool& _isPromiseTask);

                    /**
                     * 判断参数 IsPromiseTask 是否已赋值
                     * @return IsPromiseTask 是否已赋值
                     * 
                     */
                    bool IsPromiseTaskHasBeenSet() const;

                    /**
                     * 获取当前用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserUin 当前用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserUin() const;

                    /**
                     * 设置当前用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userUin 当前用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserUin(const std::string& _userUin);

                    /**
                     * 判断参数 UserUin 是否已赋值
                     * @return UserUin 是否已赋值
                     * 
                     */
                    bool UserUinHasBeenSet() const;

                    /**
                     * 获取主账号uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerUin 主账号uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置主账号uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerUin 主账号uin
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
                     * 获取租户id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId 租户id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置租户id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId 租户id
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
                     * 获取工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowName 工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowName 工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkflowName(const std::string& _workflowName);

                    /**
                     * 判断参数 WorkflowName 是否已赋值
                     * @return WorkflowName 是否已赋值
                     * 
                     */
                    bool WorkflowNameHasBeenSet() const;

                    /**
                     * 获取工作流id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowId 工作流id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置工作流id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowId 工作流id
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
                     * 获取任务周期类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskCycle 任务周期类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskCycle() const;

                    /**
                     * 设置任务周期类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskCycle 任务周期类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskCycle(const std::string& _taskCycle);

                    /**
                     * 判断参数 TaskCycle 是否已赋值
                     * @return TaskCycle 是否已赋值
                     * 
                     */
                    bool TaskCycleHasBeenSet() const;

                    /**
                     * 获取任务负责人名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskInChargeUin 任务负责人名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskInChargeUin() const;

                    /**
                     * 设置任务负责人名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskInChargeUin 任务负责人名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskInChargeUin(const std::string& _taskInChargeUin);

                    /**
                     * 判断参数 TaskInChargeUin 是否已赋值
                     * @return TaskInChargeUin 是否已赋值
                     * 
                     */
                    bool TaskInChargeUinHasBeenSet() const;

                    /**
                     * 获取任务负责人uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskInChargeName 任务负责人uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskInChargeName() const;

                    /**
                     * 设置任务负责人uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskInChargeName 任务负责人uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskInChargeName(const std::string& _taskInChargeName);

                    /**
                     * 判断参数 TaskInChargeName 是否已赋值
                     * @return TaskInChargeName 是否已赋值
                     * 
                     */
                    bool TaskInChargeNameHasBeenSet() const;

                    /**
                     * 获取任务准入基准
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccessBenchmark 任务准入基准
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccessBenchmark() const;

                    /**
                     * 设置任务准入基准
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accessBenchmark 任务准入基准
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccessBenchmark(const std::string& _accessBenchmark);

                    /**
                     * 判断参数 AccessBenchmark 是否已赋值
                     * @return AccessBenchmark 是否已赋值
                     * 
                     */
                    bool AccessBenchmarkHasBeenSet() const;

                    /**
                     * 获取任务准入基准诊断信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccessBenchmarkDesc 任务准入基准诊断信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccessBenchmarkDesc() const;

                    /**
                     * 设置任务准入基准诊断信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accessBenchmarkDesc 任务准入基准诊断信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccessBenchmarkDesc(const std::string& _accessBenchmarkDesc);

                    /**
                     * 判断参数 AccessBenchmarkDesc 是否已赋值
                     * @return AccessBenchmarkDesc 是否已赋值
                     * 
                     */
                    bool AccessBenchmarkDescHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
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
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
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

                private:

                    /**
                     * 变更记录id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 基线id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_baselineId;
                    bool m_baselineIdHasBeenSet;

                    /**
                     * 任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 任务运行平均时间/单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_estimatedCostTime;
                    bool m_estimatedCostTimeHasBeenSet;

                    /**
                     * 上游实例id,多个实例用,分开
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StringListNode m_upstreamTaskIds;
                    bool m_upstreamTaskIdsHasBeenSet;

                    /**
                     * 下游实例id,多个实例用,分开
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StringListNode m_downstreamTaskIds;
                    bool m_downstreamTaskIdsHasBeenSet;

                    /**
                     * 否是保障任务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isPromiseTask;
                    bool m_isPromiseTaskHasBeenSet;

                    /**
                     * 当前用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userUin;
                    bool m_userUinHasBeenSet;

                    /**
                     * 主账号uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 租户id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * 工作流id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 任务周期类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskCycle;
                    bool m_taskCycleHasBeenSet;

                    /**
                     * 任务负责人名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskInChargeUin;
                    bool m_taskInChargeUinHasBeenSet;

                    /**
                     * 任务负责人uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskInChargeName;
                    bool m_taskInChargeNameHasBeenSet;

                    /**
                     * 任务准入基准
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accessBenchmark;
                    bool m_accessBenchmarkHasBeenSet;

                    /**
                     * 任务准入基准诊断信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accessBenchmarkDesc;
                    bool m_accessBenchmarkDescHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BASELINETASKDTO_H_
