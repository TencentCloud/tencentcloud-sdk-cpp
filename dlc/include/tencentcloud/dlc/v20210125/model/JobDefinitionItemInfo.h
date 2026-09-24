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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_JOBDEFINITIONITEMINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_JOBDEFINITIONITEMINFO_H_

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
                * 作业定义列表项 POJO（精简版）.
                */
                class JobDefinitionItemInfo : public AbstractModel
                {
                public:
                    JobDefinitionItemInfo();
                    ~JobDefinitionItemInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>作业定义唯一标识符（ID）。</p>
                     * @return JobDefinitionId <p>作业定义唯一标识符（ID）。</p>
                     * 
                     */
                    std::string GetJobDefinitionId() const;

                    /**
                     * 设置<p>作业定义唯一标识符（ID）。</p>
                     * @param _jobDefinitionId <p>作业定义唯一标识符（ID）。</p>
                     * 
                     */
                    void SetJobDefinitionId(const std::string& _jobDefinitionId);

                    /**
                     * 判断参数 JobDefinitionId 是否已赋值
                     * @return JobDefinitionId 是否已赋值
                     * 
                     */
                    bool JobDefinitionIdHasBeenSet() const;

                    /**
                     * 获取<p>作业定义名称。</p>
                     * @return Name <p>作业定义名称。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>作业定义名称。</p>
                     * @param _name <p>作业定义名称。</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>作业定义描述。</p>
                     * @return Description <p>作业定义描述。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>作业定义描述。</p>
                     * @param _description <p>作业定义描述。</p>
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
                     * 获取<p>作业主类型。</p>
                     * @return MajorType <p>作业主类型。</p>
                     * 
                     */
                    std::string GetMajorType() const;

                    /**
                     * 设置<p>作业主类型。</p>
                     * @param _majorType <p>作业主类型。</p>
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
                     * 获取<p>作业子类型。</p>
                     * @return MinorType <p>作业子类型。</p>
                     * 
                     */
                    std::string GetMinorType() const;

                    /**
                     * 设置<p>作业子类型。</p>
                     * @param _minorType <p>作业子类型。</p>
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
                     * 获取<p>创建者（子账号 UIN）。</p>
                     * @return CreatorSubUin <p>创建者（子账号 UIN）。</p>
                     * 
                     */
                    std::string GetCreatorSubUin() const;

                    /**
                     * 设置<p>创建者（子账号 UIN）。</p>
                     * @param _creatorSubUin <p>创建者（子账号 UIN）。</p>
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
                     * 获取<p>创建时间（Unix 毫秒时间戳）。</p>
                     * @return CreateTime <p>创建时间（Unix 毫秒时间戳）。</p>
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置<p>创建时间（Unix 毫秒时间戳）。</p>
                     * @param _createTime <p>创建时间（Unix 毫秒时间戳）。</p>
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
                     * 获取<p>更新时间（Unix 毫秒时间戳）。</p>
                     * @return UpdateTime <p>更新时间（Unix 毫秒时间戳）。</p>
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间（Unix 毫秒时间戳）。</p>
                     * @param _updateTime <p>更新时间（Unix 毫秒时间戳）。</p>
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>分区编码。</p>
                     * @return PartitionCode <p>分区编码。</p>
                     * 
                     */
                    std::string GetPartitionCode() const;

                    /**
                     * 设置<p>分区编码。</p>
                     * @param _partitionCode <p>分区编码。</p>
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
                     * 获取<p>分区展示名（解析不到时为空）。</p>
                     * @return PartitionName <p>分区展示名（解析不到时为空）。</p>
                     * 
                     */
                    std::string GetPartitionName() const;

                    /**
                     * 设置<p>分区展示名（解析不到时为空）。</p>
                     * @param _partitionName <p>分区展示名（解析不到时为空）。</p>
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
                     * 获取<p>队列名称。</p>
                     * @return QueueName <p>队列名称。</p>
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置<p>队列名称。</p>
                     * @param _queueName <p>队列名称。</p>
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
                     * 获取<p>运行模式: JOB | WAREHOUSE.</p>
                     * @return RunMode <p>运行模式: JOB | WAREHOUSE.</p>
                     * 
                     */
                    std::string GetRunMode() const;

                    /**
                     * 设置<p>运行模式: JOB | WAREHOUSE.</p>
                     * @param _runMode <p>运行模式: JOB | WAREHOUSE.</p>
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
                     * 获取<p>计算仓库 ID, RunMode=WAREHOUSE 时非空.</p>
                     * @return WarehouseId <p>计算仓库 ID, RunMode=WAREHOUSE 时非空.</p>
                     * 
                     */
                    std::string GetWarehouseId() const;

                    /**
                     * 设置<p>计算仓库 ID, RunMode=WAREHOUSE 时非空.</p>
                     * @param _warehouseId <p>计算仓库 ID, RunMode=WAREHOUSE 时非空.</p>
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
                     * 获取<p>请求时间窗口（InstanceTimeRange，默认 7 天）内的作业实例数。</p>
                     * @return InstanceCount <p>请求时间窗口（InstanceTimeRange，默认 7 天）内的作业实例数。</p>
                     * 
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置<p>请求时间窗口（InstanceTimeRange，默认 7 天）内的作业实例数。</p>
                     * @param _instanceCount <p>请求时间窗口（InstanceTimeRange，默认 7 天）内的作业实例数。</p>
                     * 
                     */
                    void SetInstanceCount(const int64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取<p>运行时/镜像编码（可选值见 DescribeSparkRuntimes）。JOB 模式取定义自身配置，WAREHOUSE 模式取所属计算仓库运行时；解析不到时为空。</p>
                     * @return RuntimeCode <p>运行时/镜像编码（可选值见 DescribeSparkRuntimes）。JOB 模式取定义自身配置，WAREHOUSE 模式取所属计算仓库运行时；解析不到时为空。</p>
                     * 
                     */
                    std::string GetRuntimeCode() const;

                    /**
                     * 设置<p>运行时/镜像编码（可选值见 DescribeSparkRuntimes）。JOB 模式取定义自身配置，WAREHOUSE 模式取所属计算仓库运行时；解析不到时为空。</p>
                     * @param _runtimeCode <p>运行时/镜像编码（可选值见 DescribeSparkRuntimes）。JOB 模式取定义自身配置，WAREHOUSE 模式取所属计算仓库运行时；解析不到时为空。</p>
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
                     * 获取<p>计算仓库名称（列表整页按去重后的仓库反查填充；warehouse 模式下非空，仓库已销毁时仍回填历史名称）。</p>
                     * @return WarehouseName <p>计算仓库名称（列表整页按去重后的仓库反查填充；warehouse 模式下非空，仓库已销毁时仍回填历史名称）。</p>
                     * 
                     */
                    std::string GetWarehouseName() const;

                    /**
                     * 设置<p>计算仓库名称（列表整页按去重后的仓库反查填充；warehouse 模式下非空，仓库已销毁时仍回填历史名称）。</p>
                     * @param _warehouseName <p>计算仓库名称（列表整页按去重后的仓库反查填充；warehouse 模式下非空，仓库已销毁时仍回填历史名称）。</p>
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
                     * <p>作业定义唯一标识符（ID）。</p>
                     */
                    std::string m_jobDefinitionId;
                    bool m_jobDefinitionIdHasBeenSet;

                    /**
                     * <p>作业定义名称。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>作业定义描述。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>作业主类型。</p>
                     */
                    std::string m_majorType;
                    bool m_majorTypeHasBeenSet;

                    /**
                     * <p>作业子类型。</p>
                     */
                    std::string m_minorType;
                    bool m_minorTypeHasBeenSet;

                    /**
                     * <p>流作业 checkpoint 路径（MinorType=SPARK_STREAM 时非空）。同一流作业的多次运行必须复用同一路径，变更等于重置消费进度。</p>
                     */
                    std::string m_checkpointLocation;
                    bool m_checkpointLocationHasBeenSet;

                    /**
                     * <p>创建者（子账号 UIN）。</p>
                     */
                    std::string m_creatorSubUin;
                    bool m_creatorSubUinHasBeenSet;

                    /**
                     * <p>创建时间（Unix 毫秒时间戳）。</p>
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间（Unix 毫秒时间戳）。</p>
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>分区编码。</p>
                     */
                    std::string m_partitionCode;
                    bool m_partitionCodeHasBeenSet;

                    /**
                     * <p>分区展示名（解析不到时为空）。</p>
                     */
                    std::string m_partitionName;
                    bool m_partitionNameHasBeenSet;

                    /**
                     * <p>队列名称。</p>
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * <p>运行模式: JOB | WAREHOUSE.</p>
                     */
                    std::string m_runMode;
                    bool m_runModeHasBeenSet;

                    /**
                     * <p>计算仓库 ID, RunMode=WAREHOUSE 时非空.</p>
                     */
                    std::string m_warehouseId;
                    bool m_warehouseIdHasBeenSet;

                    /**
                     * <p>请求时间窗口（InstanceTimeRange，默认 7 天）内的作业实例数。</p>
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * <p>运行时/镜像编码（可选值见 DescribeSparkRuntimes）。JOB 模式取定义自身配置，WAREHOUSE 模式取所属计算仓库运行时；解析不到时为空。</p>
                     */
                    std::string m_runtimeCode;
                    bool m_runtimeCodeHasBeenSet;

                    /**
                     * <p>运行时展示名（如 Spark 3.5.5），与 RuntimeCode 配套；解析不到时为空。</p>
                     */
                    std::string m_runtimeName;
                    bool m_runtimeNameHasBeenSet;

                    /**
                     * <p>计算仓库名称（列表整页按去重后的仓库反查填充；warehouse 模式下非空，仓库已销毁时仍回填历史名称）。</p>
                     */
                    std::string m_warehouseName;
                    bool m_warehouseNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_JOBDEFINITIONITEMINFO_H_
