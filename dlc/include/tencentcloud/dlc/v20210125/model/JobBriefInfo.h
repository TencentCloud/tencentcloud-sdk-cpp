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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_JOBBRIEFINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_JOBBRIEFINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 入站作业摘要（DescribeJobList.Items[] 元素）.
                */
                class JobBriefInfo : public AbstractModel
                {
                public:
                    JobBriefInfo();
                    ~JobBriefInfo() = default;
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
                     * 获取<p>计算仓库名称（列表整页批量反查填充；warehouse 模式下非空）.</p>
                     * @return WarehouseName <p>计算仓库名称（列表整页批量反查填充；warehouse 模式下非空）.</p>
                     * 
                     */
                    std::string GetWarehouseName() const;

                    /**
                     * 设置<p>计算仓库名称（列表整页批量反查填充；warehouse 模式下非空）.</p>
                     * @param _warehouseName <p>计算仓库名称（列表整页批量反查填充；warehouse 模式下非空）.</p>
                     * 
                     */
                    void SetWarehouseName(const std::string& _warehouseName);

                    /**
                     * 判断参数 WarehouseName 是否已赋值
                     * @return WarehouseName 是否已赋值
                     * 
                     */
                    bool WarehouseNameHasBeenSet() const;

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
                     * <p>计算仓库名称（列表整页批量反查填充；warehouse 模式下非空）.</p>
                     */
                    std::string m_warehouseName;
                    bool m_warehouseNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_JOBBRIEFINFO_H_
