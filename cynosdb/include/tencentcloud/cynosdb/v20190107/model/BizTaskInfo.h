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
                     * 获取任务id
                     * @return ID 任务id
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置任务id
                     * @param _iD 任务id
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
                     * 获取用户appid
                     * @return AppId 用户appid
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置用户appid
                     * @param _appId 用户appid
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
                     * 获取集群id
                     * @return ClusterId 集群id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群id
                     * @param _clusterId 集群id
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
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
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
                     * 获取任务创建时间
                     * @return CreateTime 任务创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置任务创建时间
                     * @param _createTime 任务创建时间
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
                     * 获取延迟执行时间
                     * @return DelayTime 延迟执行时间
                     * 
                     */
                    std::string GetDelayTime() const;

                    /**
                     * 设置延迟执行时间
                     * @param _delayTime 延迟执行时间
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
                     * 获取任务失败信息
                     * @return ErrMsg 任务失败信息
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置任务失败信息
                     * @param _errMsg 任务失败信息
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
                     * 获取异步任务流id
                     * @return FlowId 异步任务流id
                     * 
                     */
                    int64_t GetFlowId() const;

                    /**
                     * 设置异步任务流id
                     * @param _flowId 异步任务流id
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
                     * 获取任务输入信息
                     * @return Input 任务输入信息
                     * 
                     */
                    std::string GetInput() const;

                    /**
                     * 设置任务输入信息
                     * @param _input 任务输入信息
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
                     * 获取实例组id
                     * @return InstanceGrpId 实例组id
                     * @deprecated
                     */
                    std::string GetInstanceGrpId() const;

                    /**
                     * 设置实例组id
                     * @param _instanceGrpId 实例组id
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
                     * 获取实例组id
                     * @return InstanceGroupId 实例组id
                     * 
                     */
                    std::string GetInstanceGroupId() const;

                    /**
                     * 设置实例组id
                     * @param _instanceGroupId 实例组id
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
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
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
                     * 获取任务操作对象id
                     * @return ObjectId 任务操作对象id
                     * 
                     */
                    std::string GetObjectId() const;

                    /**
                     * 设置任务操作对象id
                     * @param _objectId 任务操作对象id
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
                     * 获取任务操作对象类型
                     * @return ObjectType 任务操作对象类型
                     * 
                     */
                    std::string GetObjectType() const;

                    /**
                     * 设置任务操作对象类型
                     * @param _objectType 任务操作对象类型
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
                     * 获取操作者uin
                     * @return Operator 操作者uin
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作者uin
                     * @param _operator 操作者uin
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
                     * 获取任务输出信息
                     * @return Output 任务输出信息
                     * 
                     */
                    std::string GetOutput() const;

                    /**
                     * 设置任务输出信息
                     * @param _output 任务输出信息
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
                     * 获取任务状态
                     * @return Status 任务状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态
                     * @param _status 任务状态
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
                     * 获取任务类型
                     * @return TaskType 任务类型
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置任务类型
                     * @param _taskType 任务类型
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
                     * 获取触发本任务的父任务ID
                     * @return TriggerTaskId 触发本任务的父任务ID
                     * 
                     */
                    int64_t GetTriggerTaskId() const;

                    /**
                     * 设置触发本任务的父任务ID
                     * @param _triggerTaskId 触发本任务的父任务ID
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
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
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
                     * 获取任务开始时间
                     * @return StartTime 任务开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置任务开始时间
                     * @param _startTime 任务开始时间
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
                     * 获取任务结束时间
                     * @return EndTime 任务结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置任务结束时间
                     * @param _endTime 任务结束时间
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
                     * 获取集群名称
                     * @return ClusterName 集群名称
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
                     * @param _clusterName 集群名称
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
                     * 获取实例名称
                     * @return InstanceName 实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param _instanceName 实例名称
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
                     * 获取任务进度
                     * @return Process 任务进度
                     * 
                     */
                    int64_t GetProcess() const;

                    /**
                     * 设置任务进度
                     * @param _process 任务进度
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
                     * 获取修改参数任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyParamsData 修改参数任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::vector<ModifyParamsData> GetModifyParamsData() const;

                    /**
                     * 设置修改参数任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifyParamsData 修改参数任务信息
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
                     * 获取创建集群任务信息
                     * @return CreateClustersData 创建集群任务信息
                     * 
                     */
                    CreateClustersData GetCreateClustersData() const;

                    /**
                     * 设置创建集群任务信息
                     * @param _createClustersData 创建集群任务信息
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
                     * 获取集群回档任务信息
                     * @return RollbackData 集群回档任务信息
                     * 
                     */
                    RollbackData GetRollbackData() const;

                    /**
                     * 设置集群回档任务信息
                     * @param _rollbackData 集群回档任务信息
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
                     * 获取实例变配任务信息
                     * @return ModifyInstanceData 实例变配任务信息
                     * 
                     */
                    ModifyInstanceData GetModifyInstanceData() const;

                    /**
                     * 设置实例变配任务信息
                     * @param _modifyInstanceData 实例变配任务信息
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
                     * 获取手动备份任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ManualBackupData 手动备份任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ManualBackupData GetManualBackupData() const;

                    /**
                     * 设置手动备份任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _manualBackupData 手动备份任务信息
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
                     * 获取修改内核版本任务信息
                     * @return ModifyDbVersionData 修改内核版本任务信息
                     * 
                     */
                    ModifyDbVersionData GetModifyDbVersionData() const;

                    /**
                     * 设置修改内核版本任务信息
                     * @param _modifyDbVersionData 修改内核版本任务信息
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
                     * 获取集群可用区信息
                     * @return ClusterSlaveData 集群可用区信息
                     * 
                     */
                    ClusterSlaveData GetClusterSlaveData() const;

                    /**
                     * 设置集群可用区信息
                     * @param _clusterSlaveData 集群可用区信息
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
                     * 获取转换集群日志
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SwitchClusterLogBin 转换集群日志
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SwitchClusterLogBin GetSwitchClusterLogBin() const;

                    /**
                     * 设置转换集群日志
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _switchClusterLogBin 转换集群日志
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
                     * 获取修改实例参数数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyInstanceParamsData 修改实例参数数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BizTaskModifyParamsData GetModifyInstanceParamsData() const;

                    /**
                     * 设置修改实例参数数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifyInstanceParamsData 修改实例参数数据
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
                     * 获取维护时间
                     * @return TaskMaintainInfo 维护时间
                     * 
                     */
                    TaskMaintainInfo GetTaskMaintainInfo() const;

                    /**
                     * 设置维护时间
                     * @param _taskMaintainInfo 维护时间
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
                     * 获取实例日志投递信息

                     * @return InstanceCLSDeliveryInfos 实例日志投递信息

                     * 
                     */
                    std::vector<InstanceCLSDeliveryInfo> GetInstanceCLSDeliveryInfos() const;

                    /**
                     * 设置实例日志投递信息

                     * @param _instanceCLSDeliveryInfos 实例日志投递信息

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
                     * 获取任务进度信息
                     * @return TaskProgressInfo 任务进度信息
                     * 
                     */
                    TaskProgressInfo GetTaskProgressInfo() const;

                    /**
                     * 设置任务进度信息
                     * @param _taskProgressInfo 任务进度信息
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
                     * 获取全球数据库网络任务
                     * @return GdnTaskInfo 全球数据库网络任务
                     * 
                     */
                    GdnTaskInfo GetGdnTaskInfo() const;

                    /**
                     * 设置全球数据库网络任务
                     * @param _gdnTaskInfo 全球数据库网络任务
                     * 
                     */
                    void SetGdnTaskInfo(const GdnTaskInfo& _gdnTaskInfo);

                    /**
                     * 判断参数 GdnTaskInfo 是否已赋值
                     * @return GdnTaskInfo 是否已赋值
                     * 
                     */
                    bool GdnTaskInfoHasBeenSet() const;

                private:

                    /**
                     * 任务id
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 用户appid
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 集群id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 任务创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 延迟执行时间
                     */
                    std::string m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * 任务失败信息
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * 异步任务流id
                     */
                    int64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 任务输入信息
                     */
                    std::string m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * 实例组id
                     */
                    std::string m_instanceGrpId;
                    bool m_instanceGrpIdHasBeenSet;

                    /**
                     * 实例组id
                     */
                    std::string m_instanceGroupId;
                    bool m_instanceGroupIdHasBeenSet;

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 任务操作对象id
                     */
                    std::string m_objectId;
                    bool m_objectIdHasBeenSet;

                    /**
                     * 任务操作对象类型
                     */
                    std::string m_objectType;
                    bool m_objectTypeHasBeenSet;

                    /**
                     * 操作者uin
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 任务输出信息
                     */
                    std::string m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * 任务状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务类型
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 触发本任务的父任务ID
                     */
                    int64_t m_triggerTaskId;
                    bool m_triggerTaskIdHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 任务开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 任务结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 任务进度
                     */
                    int64_t m_process;
                    bool m_processHasBeenSet;

                    /**
                     * 修改参数任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ModifyParamsData> m_modifyParamsData;
                    bool m_modifyParamsDataHasBeenSet;

                    /**
                     * 创建集群任务信息
                     */
                    CreateClustersData m_createClustersData;
                    bool m_createClustersDataHasBeenSet;

                    /**
                     * 集群回档任务信息
                     */
                    RollbackData m_rollbackData;
                    bool m_rollbackDataHasBeenSet;

                    /**
                     * 实例变配任务信息
                     */
                    ModifyInstanceData m_modifyInstanceData;
                    bool m_modifyInstanceDataHasBeenSet;

                    /**
                     * 手动备份任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ManualBackupData m_manualBackupData;
                    bool m_manualBackupDataHasBeenSet;

                    /**
                     * 修改内核版本任务信息
                     */
                    ModifyDbVersionData m_modifyDbVersionData;
                    bool m_modifyDbVersionDataHasBeenSet;

                    /**
                     * 集群可用区信息
                     */
                    ClusterSlaveData m_clusterSlaveData;
                    bool m_clusterSlaveDataHasBeenSet;

                    /**
                     * 转换集群日志
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SwitchClusterLogBin m_switchClusterLogBin;
                    bool m_switchClusterLogBinHasBeenSet;

                    /**
                     * 修改实例参数数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BizTaskModifyParamsData m_modifyInstanceParamsData;
                    bool m_modifyInstanceParamsDataHasBeenSet;

                    /**
                     * 维护时间
                     */
                    TaskMaintainInfo m_taskMaintainInfo;
                    bool m_taskMaintainInfoHasBeenSet;

                    /**
                     * 实例日志投递信息

                     */
                    std::vector<InstanceCLSDeliveryInfo> m_instanceCLSDeliveryInfos;
                    bool m_instanceCLSDeliveryInfosHasBeenSet;

                    /**
                     * 任务进度信息
                     */
                    TaskProgressInfo m_taskProgressInfo;
                    bool m_taskProgressInfoHasBeenSet;

                    /**
                     * 全球数据库网络任务
                     */
                    GdnTaskInfo m_gdnTaskInfo;
                    bool m_gdnTaskInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BIZTASKINFO_H_
