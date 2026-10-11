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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_JOBDETAILINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_JOBDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/KVPair.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 作业详情 POJO.
                */
                class JobDetailInfo : public AbstractModel
                {
                public:
                    JobDetailInfo();
                    ~JobDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>作业唯一标识.</p>
                     * @return JobId <p>作业唯一标识.</p>
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置<p>作业唯一标识.</p>
                     * @param _jobId <p>作业唯一标识.</p>
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取<p>作业名称.</p>
                     * @return JobName <p>作业名称.</p>
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置<p>作业名称.</p>
                     * @param _jobName <p>作业名称.</p>
                     * 
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     * 
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取<p>创建/提交者子账号 UIN。</p>
                     * @return CreatorSubUin <p>创建/提交者子账号 UIN。</p>
                     * 
                     */
                    std::string GetCreatorSubUin() const;

                    /**
                     * 设置<p>创建/提交者子账号 UIN。</p>
                     * @param _creatorSubUin <p>创建/提交者子账号 UIN。</p>
                     * 
                     */
                    void SetCreatorSubUin(const std::string& _creatorSubUin);

                    /**
                     * 判断参数 CreatorSubUin 是否已赋值
                     * @return CreatorSubUin 是否已赋值
                     * 
                     */
                    bool CreatorSubUinHasBeenSet() const;

                    /**
                     * 获取<p>作业状态.</p>
                     * @return State <p>作业状态.</p>
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置<p>作业状态.</p>
                     * @param _state <p>作业状态.</p>
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取<p>引擎大类.</p>
                     * @return MajorType <p>引擎大类.</p>
                     * 
                     */
                    std::string GetMajorType() const;

                    /**
                     * 设置<p>引擎大类.</p>
                     * @param _majorType <p>引擎大类.</p>
                     * 
                     */
                    void SetMajorType(const std::string& _majorType);

                    /**
                     * 判断参数 MajorType 是否已赋值
                     * @return MajorType 是否已赋值
                     * 
                     */
                    bool MajorTypeHasBeenSet() const;

                    /**
                     * 获取<p>引擎子类型.</p>
                     * @return MinorType <p>引擎子类型.</p>
                     * 
                     */
                    std::string GetMinorType() const;

                    /**
                     * 设置<p>引擎子类型.</p>
                     * @param _minorType <p>引擎子类型.</p>
                     * 
                     */
                    void SetMinorType(const std::string& _minorType);

                    /**
                     * 判断参数 MinorType 是否已赋值
                     * @return MinorType 是否已赋值
                     * 
                     */
                    bool MinorTypeHasBeenSet() const;

                    /**
                     * 获取<p>运行模式（WAREHOUSE / JOB）.</p>
                     * @return RunMode <p>运行模式（WAREHOUSE / JOB）.</p>
                     * 
                     */
                    std::string GetRunMode() const;

                    /**
                     * 设置<p>运行模式（WAREHOUSE / JOB）.</p>
                     * @param _runMode <p>运行模式（WAREHOUSE / JOB）.</p>
                     * 
                     */
                    void SetRunMode(const std::string& _runMode);

                    /**
                     * 判断参数 RunMode 是否已赋值
                     * @return RunMode 是否已赋值
                     * 
                     */
                    bool RunModeHasBeenSet() const;

                    /**
                     * 获取<p>计算仓库 ID，RunMode=WAREHOUSE 时非空.</p>
                     * @return WarehouseId <p>计算仓库 ID，RunMode=WAREHOUSE 时非空.</p>
                     * 
                     */
                    std::string GetWarehouseId() const;

                    /**
                     * 设置<p>计算仓库 ID，RunMode=WAREHOUSE 时非空.</p>
                     * @param _warehouseId <p>计算仓库 ID，RunMode=WAREHOUSE 时非空.</p>
                     * 
                     */
                    void SetWarehouseId(const std::string& _warehouseId);

                    /**
                     * 判断参数 WarehouseId 是否已赋值
                     * @return WarehouseId 是否已赋值
                     * 
                     */
                    bool WarehouseIdHasBeenSet() const;

                    /**
                     * 获取<p>资源分区编码.</p>
                     * @return PartitionCode <p>资源分区编码.</p>
                     * 
                     */
                    std::string GetPartitionCode() const;

                    /**
                     * 设置<p>资源分区编码.</p>
                     * @param _partitionCode <p>资源分区编码.</p>
                     * 
                     */
                    void SetPartitionCode(const std::string& _partitionCode);

                    /**
                     * 判断参数 PartitionCode 是否已赋值
                     * @return PartitionCode 是否已赋值
                     * 
                     */
                    bool PartitionCodeHasBeenSet() const;

                    /**
                     * 获取<p>资源分区展示名（解析不到时为空）.</p>
                     * @return PartitionName <p>资源分区展示名（解析不到时为空）.</p>
                     * 
                     */
                    std::string GetPartitionName() const;

                    /**
                     * 设置<p>资源分区展示名（解析不到时为空）.</p>
                     * @param _partitionName <p>资源分区展示名（解析不到时为空）.</p>
                     * 
                     */
                    void SetPartitionName(const std::string& _partitionName);

                    /**
                     * 判断参数 PartitionName 是否已赋值
                     * @return PartitionName 是否已赋值
                     * 
                     */
                    bool PartitionNameHasBeenSet() const;

                    /**
                     * 获取<p>队列名称.</p>
                     * @return QueueName <p>队列名称.</p>
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置<p>队列名称.</p>
                     * @param _queueName <p>队列名称.</p>
                     * 
                     */
                    void SetQueueName(const std::string& _queueName);

                    /**
                     * 判断参数 QueueName 是否已赋值
                     * @return QueueName 是否已赋值
                     * 
                     */
                    bool QueueNameHasBeenSet() const;

                    /**
                     * 获取<p>流作业 checkpoint 路径（MinorType=SPARK_STREAM 时非空）。同一流作业的多次运行必须复用同一路径，变更等于重置消费进度。</p>
                     * @return CheckpointLocation <p>流作业 checkpoint 路径（MinorType=SPARK_STREAM 时非空）。同一流作业的多次运行必须复用同一路径，变更等于重置消费进度。</p>
                     * 
                     */
                    std::string GetCheckpointLocation() const;

                    /**
                     * 设置<p>流作业 checkpoint 路径（MinorType=SPARK_STREAM 时非空）。同一流作业的多次运行必须复用同一路径，变更等于重置消费进度。</p>
                     * @param _checkpointLocation <p>流作业 checkpoint 路径（MinorType=SPARK_STREAM 时非空）。同一流作业的多次运行必须复用同一路径，变更等于重置消费进度。</p>
                     * 
                     */
                    void SetCheckpointLocation(const std::string& _checkpointLocation);

                    /**
                     * 判断参数 CheckpointLocation 是否已赋值
                     * @return CheckpointLocation 是否已赋值
                     * 
                     */
                    bool CheckpointLocationHasBeenSet() const;

                    /**
                     * 获取<p>创建时间（Unix 毫秒时间戳）.</p>
                     * @return CreateTime <p>创建时间（Unix 毫秒时间戳）.</p>
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置<p>创建时间（Unix 毫秒时间戳）.</p>
                     * @param _createTime <p>创建时间（Unix 毫秒时间戳）.</p>
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>提交时间（Unix 毫秒时间戳）.</p>
                     * @return SubmitTime <p>提交时间（Unix 毫秒时间戳）.</p>
                     * 
                     */
                    int64_t GetSubmitTime() const;

                    /**
                     * 设置<p>提交时间（Unix 毫秒时间戳）.</p>
                     * @param _submitTime <p>提交时间（Unix 毫秒时间戳）.</p>
                     * 
                     */
                    void SetSubmitTime(const int64_t& _submitTime);

                    /**
                     * 判断参数 SubmitTime 是否已赋值
                     * @return SubmitTime 是否已赋值
                     * 
                     */
                    bool SubmitTimeHasBeenSet() const;

                    /**
                     * 获取<p>完成时间（Unix 毫秒时间戳）.</p>
                     * @return FinishTime <p>完成时间（Unix 毫秒时间戳）.</p>
                     * 
                     */
                    int64_t GetFinishTime() const;

                    /**
                     * 设置<p>完成时间（Unix 毫秒时间戳）.</p>
                     * @param _finishTime <p>完成时间（Unix 毫秒时间戳）.</p>
                     * 
                     */
                    void SetFinishTime(const int64_t& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取<p>运行时长（毫秒）.</p>
                     * @return RunningTimeMs <p>运行时长（毫秒）.</p>
                     * 
                     */
                    int64_t GetRunningTimeMs() const;

                    /**
                     * 设置<p>运行时长（毫秒）.</p>
                     * @param _runningTimeMs <p>运行时长（毫秒）.</p>
                     * 
                     */
                    void SetRunningTimeMs(const int64_t& _runningTimeMs);

                    /**
                     * 判断参数 RunningTimeMs 是否已赋值
                     * @return RunningTimeMs 是否已赋值
                     * 
                     */
                    bool RunningTimeMsHasBeenSet() const;

                    /**
                     * 获取<p>计算仓库名称（详情接口反查填充，warehouse 模式下非空）.</p>
                     * @return WarehouseName <p>计算仓库名称（详情接口反查填充，warehouse 模式下非空）.</p>
                     * 
                     */
                    std::string GetWarehouseName() const;

                    /**
                     * 设置<p>计算仓库名称（详情接口反查填充，warehouse 模式下非空）.</p>
                     * @param _warehouseName <p>计算仓库名称（详情接口反查填充，warehouse 模式下非空）.</p>
                     * 
                     */
                    void SetWarehouseName(const std::string& _warehouseName);

                    /**
                     * 判断参数 WarehouseName 是否已赋值
                     * @return WarehouseName 是否已赋值
                     * 
                     */
                    bool WarehouseNameHasBeenSet() const;

                    /**
                     * 获取<p>流程 ID。</p>
                     * @return FlowId <p>流程 ID。</p>
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置<p>流程 ID。</p>
                     * @param _flowId <p>流程 ID。</p>
                     * 
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取<p>执行 ID。</p>
                     * @return ExecutionId <p>执行 ID。</p>
                     * 
                     */
                    std::string GetExecutionId() const;

                    /**
                     * 设置<p>执行 ID。</p>
                     * @param _executionId <p>执行 ID。</p>
                     * 
                     */
                    void SetExecutionId(const std::string& _executionId);

                    /**
                     * 判断参数 ExecutionId 是否已赋值
                     * @return ExecutionId 是否已赋值
                     * 
                     */
                    bool ExecutionIdHasBeenSet() const;

                    /**
                     * 获取<p>作业来源。</p>
                     * @return JobSource <p>作业来源。</p>
                     * 
                     */
                    std::string GetJobSource() const;

                    /**
                     * 设置<p>作业来源。</p>
                     * @param _jobSource <p>作业来源。</p>
                     * 
                     */
                    void SetJobSource(const std::string& _jobSource);

                    /**
                     * 判断参数 JobSource 是否已赋值
                     * @return JobSource 是否已赋值
                     * 
                     */
                    bool JobSourceHasBeenSet() const;

                    /**
                     * 获取<p>排队等待时长（毫秒）。</p>
                     * @return WaitingTimeMs <p>排队等待时长（毫秒）。</p>
                     * 
                     */
                    int64_t GetWaitingTimeMs() const;

                    /**
                     * 设置<p>排队等待时长（毫秒）。</p>
                     * @param _waitingTimeMs <p>排队等待时长（毫秒）。</p>
                     * 
                     */
                    void SetWaitingTimeMs(const int64_t& _waitingTimeMs);

                    /**
                     * 判断参数 WaitingTimeMs 是否已赋值
                     * @return WaitingTimeMs 是否已赋值
                     * 
                     */
                    bool WaitingTimeMsHasBeenSet() const;

                    /**
                     * 获取<p>Spark UI 历史链接。</p>
                     * @return HistoryUrl <p>Spark UI 历史链接。</p>
                     * 
                     */
                    std::string GetHistoryUrl() const;

                    /**
                     * 设置<p>Spark UI 历史链接。</p>
                     * @param _historyUrl <p>Spark UI 历史链接。</p>
                     * 
                     */
                    void SetHistoryUrl(const std::string& _historyUrl);

                    /**
                     * 判断参数 HistoryUrl 是否已赋值
                     * @return HistoryUrl 是否已赋值
                     * 
                     */
                    bool HistoryUrlHasBeenSet() const;

                    /**
                     * 获取<p>失败时的错误信息。</p>
                     * @return ErrorMessage <p>失败时的错误信息。</p>
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置<p>失败时的错误信息。</p>
                     * @param _errorMessage <p>失败时的错误信息。</p>
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
                     * 获取<p>自定义 Spark conf（JSON 字符串，由 job_config 组装）.</p>
                     * @return CustomProperties <p>自定义 Spark conf（JSON 字符串，由 job_config 组装）.</p>
                     * 
                     */
                    std::string GetCustomProperties() const;

                    /**
                     * 设置<p>自定义 Spark conf（JSON 字符串，由 job_config 组装）.</p>
                     * @param _customProperties <p>自定义 Spark conf（JSON 字符串，由 job_config 组装）.</p>
                     * 
                     */
                    void SetCustomProperties(const std::string& _customProperties);

                    /**
                     * 判断参数 CustomProperties 是否已赋值
                     * @return CustomProperties 是否已赋值
                     * 
                     */
                    bool CustomPropertiesHasBeenSet() const;

                    /**
                     * 获取<p>环境变量.</p>
                     * @return EnvVars <p>环境变量.</p>
                     * 
                     */
                    std::vector<KVPair> GetEnvVars() const;

                    /**
                     * 设置<p>环境变量.</p>
                     * @param _envVars <p>环境变量.</p>
                     * 
                     */
                    void SetEnvVars(const std::vector<KVPair>& _envVars);

                    /**
                     * 判断参数 EnvVars 是否已赋值
                     * @return EnvVars 是否已赋值
                     * 
                     */
                    bool EnvVarsHasBeenSet() const;

                    /**
                     * 获取<p>运行时/镜像。</p>
                     * @return RuntimeCode <p>运行时/镜像。</p>
                     * 
                     */
                    std::string GetRuntimeCode() const;

                    /**
                     * 设置<p>运行时/镜像。</p>
                     * @param _runtimeCode <p>运行时/镜像。</p>
                     * 
                     */
                    void SetRuntimeCode(const std::string& _runtimeCode);

                    /**
                     * 判断参数 RuntimeCode 是否已赋值
                     * @return RuntimeCode 是否已赋值
                     * 
                     */
                    bool RuntimeCodeHasBeenSet() const;

                    /**
                     * 获取<p>运行时展示名（如 Spark 3.5.5），与 RuntimeCode 配套；解析不到时为空。</p>
                     * @return RuntimeName <p>运行时展示名（如 Spark 3.5.5），与 RuntimeCode 配套；解析不到时为空。</p>
                     * 
                     */
                    std::string GetRuntimeName() const;

                    /**
                     * 设置<p>运行时展示名（如 Spark 3.5.5），与 RuntimeCode 配套；解析不到时为空。</p>
                     * @param _runtimeName <p>运行时展示名（如 Spark 3.5.5），与 RuntimeCode 配套；解析不到时为空。</p>
                     * 
                     */
                    void SetRuntimeName(const std::string& _runtimeName);

                    /**
                     * 判断参数 RuntimeName 是否已赋值
                     * @return RuntimeName 是否已赋值
                     * 
                     */
                    bool RuntimeNameHasBeenSet() const;

                    /**
                     * 获取<p>Catalog 版本码。</p>
                     * @return SysCatalogVersion <p>Catalog 版本码。</p>
                     * 
                     */
                    std::string GetSysCatalogVersion() const;

                    /**
                     * 设置<p>Catalog 版本码。</p>
                     * @param _sysCatalogVersion <p>Catalog 版本码。</p>
                     * 
                     */
                    void SetSysCatalogVersion(const std::string& _sysCatalogVersion);

                    /**
                     * 判断参数 SysCatalogVersion 是否已赋值
                     * @return SysCatalogVersion 是否已赋值
                     * 
                     */
                    bool SysCatalogVersionHasBeenSet() const;

                private:

                    /**
                     * <p>作业唯一标识.</p>
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * <p>作业名称.</p>
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * <p>创建/提交者子账号 UIN。</p>
                     */
                    std::string m_creatorSubUin;
                    bool m_creatorSubUinHasBeenSet;

                    /**
                     * <p>作业状态.</p>
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>引擎大类.</p>
                     */
                    std::string m_majorType;
                    bool m_majorTypeHasBeenSet;

                    /**
                     * <p>引擎子类型.</p>
                     */
                    std::string m_minorType;
                    bool m_minorTypeHasBeenSet;

                    /**
                     * <p>运行模式（WAREHOUSE / JOB）.</p>
                     */
                    std::string m_runMode;
                    bool m_runModeHasBeenSet;

                    /**
                     * <p>计算仓库 ID，RunMode=WAREHOUSE 时非空.</p>
                     */
                    std::string m_warehouseId;
                    bool m_warehouseIdHasBeenSet;

                    /**
                     * <p>资源分区编码.</p>
                     */
                    std::string m_partitionCode;
                    bool m_partitionCodeHasBeenSet;

                    /**
                     * <p>资源分区展示名（解析不到时为空）.</p>
                     */
                    std::string m_partitionName;
                    bool m_partitionNameHasBeenSet;

                    /**
                     * <p>队列名称.</p>
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * <p>流作业 checkpoint 路径（MinorType=SPARK_STREAM 时非空）。同一流作业的多次运行必须复用同一路径，变更等于重置消费进度。</p>
                     */
                    std::string m_checkpointLocation;
                    bool m_checkpointLocationHasBeenSet;

                    /**
                     * <p>创建时间（Unix 毫秒时间戳）.</p>
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>提交时间（Unix 毫秒时间戳）.</p>
                     */
                    int64_t m_submitTime;
                    bool m_submitTimeHasBeenSet;

                    /**
                     * <p>完成时间（Unix 毫秒时间戳）.</p>
                     */
                    int64_t m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * <p>运行时长（毫秒）.</p>
                     */
                    int64_t m_runningTimeMs;
                    bool m_runningTimeMsHasBeenSet;

                    /**
                     * <p>计算仓库名称（详情接口反查填充，warehouse 模式下非空）.</p>
                     */
                    std::string m_warehouseName;
                    bool m_warehouseNameHasBeenSet;

                    /**
                     * <p>流程 ID。</p>
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * <p>执行 ID。</p>
                     */
                    std::string m_executionId;
                    bool m_executionIdHasBeenSet;

                    /**
                     * <p>作业来源。</p>
                     */
                    std::string m_jobSource;
                    bool m_jobSourceHasBeenSet;

                    /**
                     * <p>排队等待时长（毫秒）。</p>
                     */
                    int64_t m_waitingTimeMs;
                    bool m_waitingTimeMsHasBeenSet;

                    /**
                     * <p>Spark UI 历史链接。</p>
                     */
                    std::string m_historyUrl;
                    bool m_historyUrlHasBeenSet;

                    /**
                     * <p>失败时的错误信息。</p>
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * <p>自定义 Spark conf（JSON 字符串，由 job_config 组装）.</p>
                     */
                    std::string m_customProperties;
                    bool m_customPropertiesHasBeenSet;

                    /**
                     * <p>环境变量.</p>
                     */
                    std::vector<KVPair> m_envVars;
                    bool m_envVarsHasBeenSet;

                    /**
                     * <p>运行时/镜像。</p>
                     */
                    std::string m_runtimeCode;
                    bool m_runtimeCodeHasBeenSet;

                    /**
                     * <p>运行时展示名（如 Spark 3.5.5），与 RuntimeCode 配套；解析不到时为空。</p>
                     */
                    std::string m_runtimeName;
                    bool m_runtimeNameHasBeenSet;

                    /**
                     * <p>Catalog 版本码。</p>
                     */
                    std::string m_sysCatalogVersion;
                    bool m_sysCatalogVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_JOBDETAILINFO_H_
