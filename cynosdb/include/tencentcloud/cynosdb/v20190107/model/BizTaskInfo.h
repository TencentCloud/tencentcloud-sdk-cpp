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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BIZTASKINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BIZTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyParamsData.h>
#include <tencentcloud/cynosdb/v20190107/model/CreateClustersData.h>
#include <tencentcloud/cynosdb/v20190107/model/RollbackData.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyInstanceData.h>
#include <tencentcloud/cynosdb/v20190107/model/ManualBackupData.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyDbVersionData.h>
#include <tencentcloud/cynosdb/v20190107/model/ClusterSlaveData.h>
#include <tencentcloud/cynosdb/v20190107/model/SwitchClusterLogBin.h>
#include <tencentcloud/cynosdb/v20190107/model/BizTaskModifyParamsData.h>
#include <tencentcloud/cynosdb/v20190107/model/TaskMaintainInfo.h>
#include <tencentcloud/cynosdb/v20190107/model/InstanceCLSDeliveryInfo.h>
#include <tencentcloud/cynosdb/v20190107/model/TaskProgressInfo.h>
#include <tencentcloud/cynosdb/v20190107/model/GdnTaskInfo.h>
#include <tencentcloud/cynosdb/v20190107/model/AIOptimizerTaskData.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 任务信息
                */
                class BizTaskInfo : public AbstractModel
                {
                public:
                    BizTaskInfo();
                    ~BizTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务id</p>
                     * @return ID <p>任务id</p>
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置<p>任务id</p>
                     * @param _iD <p>任务id</p>
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>用户appid</p>
                     * @return AppId <p>用户appid</p>
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置<p>用户appid</p>
                     * @param _appId <p>用户appid</p>
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>集群id</p>
                     * @return ClusterId <p>集群id</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群id</p>
                     * @param _clusterId <p>集群id</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>地域</p>
                     * @return Region <p>地域</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>地域</p>
                     * @param _region <p>地域</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>任务创建时间</p>
                     * @return CreateTime <p>任务创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>任务创建时间</p>
                     * @param _createTime <p>任务创建时间</p>
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
                     * 获取<p>延迟执行时间</p>
                     * @return DelayTime <p>延迟执行时间</p>
                     * 
                     */
                    std::string GetDelayTime() const;

                    /**
                     * 设置<p>延迟执行时间</p>
                     * @param _delayTime <p>延迟执行时间</p>
                     * 
                     */
                    void SetDelayTime(const std::string& _delayTime);

                    /**
                     * 判断参数 DelayTime 是否已赋值
                     * @return DelayTime 是否已赋值
                     * 
                     */
                    bool DelayTimeHasBeenSet() const;

                    /**
                     * 获取<p>任务失败信息</p>
                     * @return ErrMsg <p>任务失败信息</p>
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置<p>任务失败信息</p>
                     * @param _errMsg <p>任务失败信息</p>
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                    /**
                     * 获取<p>异步任务流id</p>
                     * @return FlowId <p>异步任务流id</p>
                     * 
                     */
                    int64_t GetFlowId() const;

                    /**
                     * 设置<p>异步任务流id</p>
                     * @param _flowId <p>异步任务流id</p>
                     * 
                     */
                    void SetFlowId(const int64_t& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取<p>任务输入信息</p>
                     * @return Input <p>任务输入信息</p>
                     * 
                     */
                    std::string GetInput() const;

                    /**
                     * 设置<p>任务输入信息</p>
                     * @param _input <p>任务输入信息</p>
                     * 
                     */
                    void SetInput(const std::string& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取<p>实例组id</p>
                     * @return InstanceGrpId <p>实例组id</p>
                     * @deprecated
                     */
                    std::string GetInstanceGrpId() const;

                    /**
                     * 设置<p>实例组id</p>
                     * @param _instanceGrpId <p>实例组id</p>
                     * @deprecated
                     */
                    void SetInstanceGrpId(const std::string& _instanceGrpId);

                    /**
                     * 判断参数 InstanceGrpId 是否已赋值
                     * @return InstanceGrpId 是否已赋值
                     * @deprecated
                     */
                    bool InstanceGrpIdHasBeenSet() const;

                    /**
                     * 获取<p>实例组id</p>
                     * @return InstanceGroupId <p>实例组id</p>
                     * 
                     */
                    std::string GetInstanceGroupId() const;

                    /**
                     * 设置<p>实例组id</p>
                     * @param _instanceGroupId <p>实例组id</p>
                     * 
                     */
                    void SetInstanceGroupId(const std::string& _instanceGroupId);

                    /**
                     * 判断参数 InstanceGroupId 是否已赋值
                     * @return InstanceGroupId 是否已赋值
                     * 
                     */
                    bool InstanceGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>实例id</p>
                     * @return InstanceId <p>实例id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例id</p>
                     * @param _instanceId <p>实例id</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>任务操作对象id</p>
                     * @return ObjectId <p>任务操作对象id</p>
                     * 
                     */
                    std::string GetObjectId() const;

                    /**
                     * 设置<p>任务操作对象id</p>
                     * @param _objectId <p>任务操作对象id</p>
                     * 
                     */
                    void SetObjectId(const std::string& _objectId);

                    /**
                     * 判断参数 ObjectId 是否已赋值
                     * @return ObjectId 是否已赋值
                     * 
                     */
                    bool ObjectIdHasBeenSet() const;

                    /**
                     * 获取<p>任务操作对象类型</p>
                     * @return ObjectType <p>任务操作对象类型</p>
                     * 
                     */
                    std::string GetObjectType() const;

                    /**
                     * 设置<p>任务操作对象类型</p>
                     * @param _objectType <p>任务操作对象类型</p>
                     * 
                     */
                    void SetObjectType(const std::string& _objectType);

                    /**
                     * 判断参数 ObjectType 是否已赋值
                     * @return ObjectType 是否已赋值
                     * 
                     */
                    bool ObjectTypeHasBeenSet() const;

                    /**
                     * 获取<p>操作者uin</p>
                     * @return Operator <p>操作者uin</p>
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置<p>操作者uin</p>
                     * @param _operator <p>操作者uin</p>
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取<p>任务输出信息</p>
                     * @return Output <p>任务输出信息</p>
                     * 
                     */
                    std::string GetOutput() const;

                    /**
                     * 设置<p>任务输出信息</p>
                     * @param _output <p>任务输出信息</p>
                     * 
                     */
                    void SetOutput(const std::string& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取<p>任务状态</p>
                     * @return Status <p>任务状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>任务状态</p>
                     * @param _status <p>任务状态</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>任务类型</p>
                     * @return TaskType <p>任务类型</p>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置<p>任务类型</p>
                     * @param _taskType <p>任务类型</p>
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取<p>触发本任务的父任务ID</p>
                     * @return TriggerTaskId <p>触发本任务的父任务ID</p>
                     * 
                     */
                    int64_t GetTriggerTaskId() const;

                    /**
                     * 设置<p>触发本任务的父任务ID</p>
                     * @param _triggerTaskId <p>触发本任务的父任务ID</p>
                     * 
                     */
                    void SetTriggerTaskId(const int64_t& _triggerTaskId);

                    /**
                     * 判断参数 TriggerTaskId 是否已赋值
                     * @return TriggerTaskId 是否已赋值
                     * 
                     */
                    bool TriggerTaskIdHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p>
                     * @return UpdateTime <p>更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
                     * @param _updateTime <p>更新时间</p>
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
                     * 获取<p>任务开始时间</p>
                     * @return StartTime <p>任务开始时间</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>任务开始时间</p>
                     * @param _startTime <p>任务开始时间</p>
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
                     * 获取<p>任务结束时间</p>
                     * @return EndTime <p>任务结束时间</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>任务结束时间</p>
                     * @param _endTime <p>任务结束时间</p>
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
                     * 获取<p>集群名称</p>
                     * @return ClusterName <p>集群名称</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>集群名称</p>
                     * @param _clusterName <p>集群名称</p>
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取<p>实例名称</p>
                     * @return InstanceName <p>实例名称</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称</p>
                     * @param _instanceName <p>实例名称</p>
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>任务进度</p>
                     * @return Process <p>任务进度</p>
                     * 
                     */
                    int64_t GetProcess() const;

                    /**
                     * 设置<p>任务进度</p>
                     * @param _process <p>任务进度</p>
                     * 
                     */
                    void SetProcess(const int64_t& _process);

                    /**
                     * 判断参数 Process 是否已赋值
                     * @return Process 是否已赋值
                     * 
                     */
                    bool ProcessHasBeenSet() const;

                    /**
                     * 获取<p>修改参数任务信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyParamsData <p>修改参数任务信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::vector<ModifyParamsData> GetModifyParamsData() const;

                    /**
                     * 设置<p>修改参数任务信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifyParamsData <p>修改参数任务信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetModifyParamsData(const std::vector<ModifyParamsData>& _modifyParamsData);

                    /**
                     * 判断参数 ModifyParamsData 是否已赋值
                     * @return ModifyParamsData 是否已赋值
                     * @deprecated
                     */
                    bool ModifyParamsDataHasBeenSet() const;

                    /**
                     * 获取<p>创建集群任务信息</p>
                     * @return CreateClustersData <p>创建集群任务信息</p>
                     * 
                     */
                    CreateClustersData GetCreateClustersData() const;

                    /**
                     * 设置<p>创建集群任务信息</p>
                     * @param _createClustersData <p>创建集群任务信息</p>
                     * 
                     */
                    void SetCreateClustersData(const CreateClustersData& _createClustersData);

                    /**
                     * 判断参数 CreateClustersData 是否已赋值
                     * @return CreateClustersData 是否已赋值
                     * 
                     */
                    bool CreateClustersDataHasBeenSet() const;

                    /**
                     * 获取<p>集群回档任务信息</p>
                     * @return RollbackData <p>集群回档任务信息</p>
                     * 
                     */
                    RollbackData GetRollbackData() const;

                    /**
                     * 设置<p>集群回档任务信息</p>
                     * @param _rollbackData <p>集群回档任务信息</p>
                     * 
                     */
                    void SetRollbackData(const RollbackData& _rollbackData);

                    /**
                     * 判断参数 RollbackData 是否已赋值
                     * @return RollbackData 是否已赋值
                     * 
                     */
                    bool RollbackDataHasBeenSet() const;

                    /**
                     * 获取<p>实例变配任务信息</p>
                     * @return ModifyInstanceData <p>实例变配任务信息</p>
                     * 
                     */
                    ModifyInstanceData GetModifyInstanceData() const;

                    /**
                     * 设置<p>实例变配任务信息</p>
                     * @param _modifyInstanceData <p>实例变配任务信息</p>
                     * 
                     */
                    void SetModifyInstanceData(const ModifyInstanceData& _modifyInstanceData);

                    /**
                     * 判断参数 ModifyInstanceData 是否已赋值
                     * @return ModifyInstanceData 是否已赋值
                     * 
                     */
                    bool ModifyInstanceDataHasBeenSet() const;

                    /**
                     * 获取<p>手动备份任务信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ManualBackupData <p>手动备份任务信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ManualBackupData GetManualBackupData() const;

                    /**
                     * 设置<p>手动备份任务信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _manualBackupData <p>手动备份任务信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetManualBackupData(const ManualBackupData& _manualBackupData);

                    /**
                     * 判断参数 ManualBackupData 是否已赋值
                     * @return ManualBackupData 是否已赋值
                     * 
                     */
                    bool ManualBackupDataHasBeenSet() const;

                    /**
                     * 获取<p>修改内核版本任务信息</p>
                     * @return ModifyDbVersionData <p>修改内核版本任务信息</p>
                     * 
                     */
                    ModifyDbVersionData GetModifyDbVersionData() const;

                    /**
                     * 设置<p>修改内核版本任务信息</p>
                     * @param _modifyDbVersionData <p>修改内核版本任务信息</p>
                     * 
                     */
                    void SetModifyDbVersionData(const ModifyDbVersionData& _modifyDbVersionData);

                    /**
                     * 判断参数 ModifyDbVersionData 是否已赋值
                     * @return ModifyDbVersionData 是否已赋值
                     * 
                     */
                    bool ModifyDbVersionDataHasBeenSet() const;

                    /**
                     * 获取<p>集群可用区信息</p>
                     * @return ClusterSlaveData <p>集群可用区信息</p>
                     * 
                     */
                    ClusterSlaveData GetClusterSlaveData() const;

                    /**
                     * 设置<p>集群可用区信息</p>
                     * @param _clusterSlaveData <p>集群可用区信息</p>
                     * 
                     */
                    void SetClusterSlaveData(const ClusterSlaveData& _clusterSlaveData);

                    /**
                     * 判断参数 ClusterSlaveData 是否已赋值
                     * @return ClusterSlaveData 是否已赋值
                     * 
                     */
                    bool ClusterSlaveDataHasBeenSet() const;

                    /**
                     * 获取<p>转换集群日志</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SwitchClusterLogBin <p>转换集群日志</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SwitchClusterLogBin GetSwitchClusterLogBin() const;

                    /**
                     * 设置<p>转换集群日志</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _switchClusterLogBin <p>转换集群日志</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSwitchClusterLogBin(const SwitchClusterLogBin& _switchClusterLogBin);

                    /**
                     * 判断参数 SwitchClusterLogBin 是否已赋值
                     * @return SwitchClusterLogBin 是否已赋值
                     * 
                     */
                    bool SwitchClusterLogBinHasBeenSet() const;

                    /**
                     * 获取<p>修改实例参数数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyInstanceParamsData <p>修改实例参数数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BizTaskModifyParamsData GetModifyInstanceParamsData() const;

                    /**
                     * 设置<p>修改实例参数数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifyInstanceParamsData <p>修改实例参数数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifyInstanceParamsData(const BizTaskModifyParamsData& _modifyInstanceParamsData);

                    /**
                     * 判断参数 ModifyInstanceParamsData 是否已赋值
                     * @return ModifyInstanceParamsData 是否已赋值
                     * 
                     */
                    bool ModifyInstanceParamsDataHasBeenSet() const;

                    /**
                     * 获取<p>维护时间</p>
                     * @return TaskMaintainInfo <p>维护时间</p>
                     * 
                     */
                    TaskMaintainInfo GetTaskMaintainInfo() const;

                    /**
                     * 设置<p>维护时间</p>
                     * @param _taskMaintainInfo <p>维护时间</p>
                     * 
                     */
                    void SetTaskMaintainInfo(const TaskMaintainInfo& _taskMaintainInfo);

                    /**
                     * 判断参数 TaskMaintainInfo 是否已赋值
                     * @return TaskMaintainInfo 是否已赋值
                     * 
                     */
                    bool TaskMaintainInfoHasBeenSet() const;

                    /**
                     * 获取<p>实例日志投递信息</p>
                     * @return InstanceCLSDeliveryInfos <p>实例日志投递信息</p>
                     * 
                     */
                    std::vector<InstanceCLSDeliveryInfo> GetInstanceCLSDeliveryInfos() const;

                    /**
                     * 设置<p>实例日志投递信息</p>
                     * @param _instanceCLSDeliveryInfos <p>实例日志投递信息</p>
                     * 
                     */
                    void SetInstanceCLSDeliveryInfos(const std::vector<InstanceCLSDeliveryInfo>& _instanceCLSDeliveryInfos);

                    /**
                     * 判断参数 InstanceCLSDeliveryInfos 是否已赋值
                     * @return InstanceCLSDeliveryInfos 是否已赋值
                     * 
                     */
                    bool InstanceCLSDeliveryInfosHasBeenSet() const;

                    /**
                     * 获取<p>任务进度信息</p>
                     * @return TaskProgressInfo <p>任务进度信息</p>
                     * 
                     */
                    TaskProgressInfo GetTaskProgressInfo() const;

                    /**
                     * 设置<p>任务进度信息</p>
                     * @param _taskProgressInfo <p>任务进度信息</p>
                     * 
                     */
                    void SetTaskProgressInfo(const TaskProgressInfo& _taskProgressInfo);

                    /**
                     * 判断参数 TaskProgressInfo 是否已赋值
                     * @return TaskProgressInfo 是否已赋值
                     * 
                     */
                    bool TaskProgressInfoHasBeenSet() const;

                    /**
                     * 获取<p>全球数据库网络任务</p>
                     * @return GdnTaskInfo <p>全球数据库网络任务</p>
                     * 
                     */
                    GdnTaskInfo GetGdnTaskInfo() const;

                    /**
                     * 设置<p>全球数据库网络任务</p>
                     * @param _gdnTaskInfo <p>全球数据库网络任务</p>
                     * 
                     */
                    void SetGdnTaskInfo(const GdnTaskInfo& _gdnTaskInfo);

                    /**
                     * 判断参数 GdnTaskInfo 是否已赋值
                     * @return GdnTaskInfo 是否已赋值
                     * 
                     */
                    bool GdnTaskInfoHasBeenSet() const;

                    /**
                     * 获取<p>保险箱id</p>
                     * @return VaultId <p>保险箱id</p>
                     * 
                     */
                    std::string GetVaultId() const;

                    /**
                     * 设置<p>保险箱id</p>
                     * @param _vaultId <p>保险箱id</p>
                     * 
                     */
                    void SetVaultId(const std::string& _vaultId);

                    /**
                     * 判断参数 VaultId 是否已赋值
                     * @return VaultId 是否已赋值
                     * 
                     */
                    bool VaultIdHasBeenSet() const;

                    /**
                     * 获取<p>保险箱名称</p>
                     * @return VaultName <p>保险箱名称</p>
                     * 
                     */
                    std::string GetVaultName() const;

                    /**
                     * 设置<p>保险箱名称</p>
                     * @param _vaultName <p>保险箱名称</p>
                     * 
                     */
                    void SetVaultName(const std::string& _vaultName);

                    /**
                     * 判断参数 VaultName 是否已赋值
                     * @return VaultName 是否已赋值
                     * 
                     */
                    bool VaultNameHasBeenSet() const;

                    /**
                     * 获取<p>AI优化器任务信息</p>
                     * @return AIOptimizerTaskData <p>AI优化器任务信息</p>
                     * 
                     */
                    AIOptimizerTaskData GetAIOptimizerTaskData() const;

                    /**
                     * 设置<p>AI优化器任务信息</p>
                     * @param _aIOptimizerTaskData <p>AI优化器任务信息</p>
                     * 
                     */
                    void SetAIOptimizerTaskData(const AIOptimizerTaskData& _aIOptimizerTaskData);

                    /**
                     * 判断参数 AIOptimizerTaskData 是否已赋值
                     * @return AIOptimizerTaskData 是否已赋值
                     * 
                     */
                    bool AIOptimizerTaskDataHasBeenSet() const;

                private:

                    /**
                     * <p>任务id</p>
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>用户appid</p>
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>集群id</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>地域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>任务创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>延迟执行时间</p>
                     */
                    std::string m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * <p>任务失败信息</p>
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * <p>异步任务流id</p>
                     */
                    int64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * <p>任务输入信息</p>
                     */
                    std::string m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * <p>实例组id</p>
                     */
                    std::string m_instanceGrpId;
                    bool m_instanceGrpIdHasBeenSet;

                    /**
                     * <p>实例组id</p>
                     */
                    std::string m_instanceGroupId;
                    bool m_instanceGroupIdHasBeenSet;

                    /**
                     * <p>实例id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>任务操作对象id</p>
                     */
                    std::string m_objectId;
                    bool m_objectIdHasBeenSet;

                    /**
                     * <p>任务操作对象类型</p>
                     */
                    std::string m_objectType;
                    bool m_objectTypeHasBeenSet;

                    /**
                     * <p>操作者uin</p>
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>任务输出信息</p>
                     */
                    std::string m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * <p>任务状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>任务类型</p>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>触发本任务的父任务ID</p>
                     */
                    int64_t m_triggerTaskId;
                    bool m_triggerTaskIdHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>任务开始时间</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>任务结束时间</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>集群名称</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>实例名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>任务进度</p>
                     */
                    int64_t m_process;
                    bool m_processHasBeenSet;

                    /**
                     * <p>修改参数任务信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ModifyParamsData> m_modifyParamsData;
                    bool m_modifyParamsDataHasBeenSet;

                    /**
                     * <p>创建集群任务信息</p>
                     */
                    CreateClustersData m_createClustersData;
                    bool m_createClustersDataHasBeenSet;

                    /**
                     * <p>集群回档任务信息</p>
                     */
                    RollbackData m_rollbackData;
                    bool m_rollbackDataHasBeenSet;

                    /**
                     * <p>实例变配任务信息</p>
                     */
                    ModifyInstanceData m_modifyInstanceData;
                    bool m_modifyInstanceDataHasBeenSet;

                    /**
                     * <p>手动备份任务信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ManualBackupData m_manualBackupData;
                    bool m_manualBackupDataHasBeenSet;

                    /**
                     * <p>修改内核版本任务信息</p>
                     */
                    ModifyDbVersionData m_modifyDbVersionData;
                    bool m_modifyDbVersionDataHasBeenSet;

                    /**
                     * <p>集群可用区信息</p>
                     */
                    ClusterSlaveData m_clusterSlaveData;
                    bool m_clusterSlaveDataHasBeenSet;

                    /**
                     * <p>转换集群日志</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SwitchClusterLogBin m_switchClusterLogBin;
                    bool m_switchClusterLogBinHasBeenSet;

                    /**
                     * <p>修改实例参数数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BizTaskModifyParamsData m_modifyInstanceParamsData;
                    bool m_modifyInstanceParamsDataHasBeenSet;

                    /**
                     * <p>维护时间</p>
                     */
                    TaskMaintainInfo m_taskMaintainInfo;
                    bool m_taskMaintainInfoHasBeenSet;

                    /**
                     * <p>实例日志投递信息</p>
                     */
                    std::vector<InstanceCLSDeliveryInfo> m_instanceCLSDeliveryInfos;
                    bool m_instanceCLSDeliveryInfosHasBeenSet;

                    /**
                     * <p>任务进度信息</p>
                     */
                    TaskProgressInfo m_taskProgressInfo;
                    bool m_taskProgressInfoHasBeenSet;

                    /**
                     * <p>全球数据库网络任务</p>
                     */
                    GdnTaskInfo m_gdnTaskInfo;
                    bool m_gdnTaskInfoHasBeenSet;

                    /**
                     * <p>保险箱id</p>
                     */
                    std::string m_vaultId;
                    bool m_vaultIdHasBeenSet;

                    /**
                     * <p>保险箱名称</p>
                     */
                    std::string m_vaultName;
                    bool m_vaultNameHasBeenSet;

                    /**
                     * <p>AI优化器任务信息</p>
                     */
                    AIOptimizerTaskData m_aIOptimizerTaskData;
                    bool m_aIOptimizerTaskDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BIZTASKINFO_H_
