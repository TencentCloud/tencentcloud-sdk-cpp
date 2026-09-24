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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATEJOBREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATEJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateJob请求参数结构体
                */
                class CreateJobRequest : public AbstractModel
                {
                public:
                    CreateJobRequest();
                    ~CreateJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>作业名称，长度 ≤256；可省略，省略时服务端回退为 JobId。</p>
                     * @return JobName <p>作业名称，长度 ≤256；可省略，省略时服务端回退为 JobId。</p>
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置<p>作业名称，长度 ≤256；可省略，省略时服务端回退为 JobId。</p>
                     * @param _jobName <p>作业名称，长度 ≤256；可省略，省略时服务端回退为 JobId。</p>
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
                     * 获取<p>流作业 checkpoint 路径（如 cosn://bucket/path/checkpoint）。MinorType=SPARK_STREAM 时必填；同一作业的多次运行必须复用同一路径，变更等于重置消费进度。</p>
                     * @return CheckpointLocation <p>流作业 checkpoint 路径（如 cosn://bucket/path/checkpoint）。MinorType=SPARK_STREAM 时必填；同一作业的多次运行必须复用同一路径，变更等于重置消费进度。</p>
                     * 
                     */
                    std::string GetCheckpointLocation() const;

                    /**
                     * 设置<p>流作业 checkpoint 路径（如 cosn://bucket/path/checkpoint）。MinorType=SPARK_STREAM 时必填；同一作业的多次运行必须复用同一路径，变更等于重置消费进度。</p>
                     * @param _checkpointLocation <p>流作业 checkpoint 路径（如 cosn://bucket/path/checkpoint）。MinorType=SPARK_STREAM 时必填；同一作业的多次运行必须复用同一路径，变更等于重置消费进度。</p>
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
                     * 获取<p>引擎大类，非必传，缺省 SPARK；当前仅支持 SPARK。</p>
                     * @return MajorType <p>引擎大类，非必传，缺省 SPARK；当前仅支持 SPARK。</p>
                     * 
                     */
                    std::string GetMajorType() const;

                    /**
                     * 设置<p>引擎大类，非必传，缺省 SPARK；当前仅支持 SPARK。</p>
                     * @param _majorType <p>引擎大类，非必传，缺省 SPARK；当前仅支持 SPARK。</p>
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
                     * 获取<p>作业子类型，决定入口形态：SPARK_SQL（SQL 作业，Entrypoint.Statement 必填）/ SPARK_BATCH（批处理作业，Entrypoint.EntryFile 必填）/ SPARK_STREAM（流作业，EntryFile 与 CheckpointLocation 必填）。</p>
                     * @return MinorType <p>作业子类型，决定入口形态：SPARK_SQL（SQL 作业，Entrypoint.Statement 必填）/ SPARK_BATCH（批处理作业，Entrypoint.EntryFile 必填）/ SPARK_STREAM（流作业，EntryFile 与 CheckpointLocation 必填）。</p>
                     * 
                     */
                    std::string GetMinorType() const;

                    /**
                     * 设置<p>作业子类型，决定入口形态：SPARK_SQL（SQL 作业，Entrypoint.Statement 必填）/ SPARK_BATCH（批处理作业，Entrypoint.EntryFile 必填）/ SPARK_STREAM（流作业，EntryFile 与 CheckpointLocation 必填）。</p>
                     * @param _minorType <p>作业子类型，决定入口形态：SPARK_SQL（SQL 作业，Entrypoint.Statement 必填）/ SPARK_BATCH（批处理作业，Entrypoint.EntryFile 必填）/ SPARK_STREAM（流作业，EntryFile 与 CheckpointLocation 必填）。</p>
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
                     * 获取<p>工作流实例关联 ID（长度 ≤64）：同一工作流/会话的多条 SQL 作业传相同 FlowId，可共享同一 Spark 会话、复用已就绪引擎。MinorType=SPARK_SQL 时必填；FlowId 非空时必须同时传 ExecutionId。WAREHOUSE 模式下 FlowId 即会话句柄（一个 FlowId 只对应一个会话）：会话过期或已销毁后须换新 FlowId，否则返回 FailedOperation.FlowIdNotExists。</p>
                     * @return FlowId <p>工作流实例关联 ID（长度 ≤64）：同一工作流/会话的多条 SQL 作业传相同 FlowId，可共享同一 Spark 会话、复用已就绪引擎。MinorType=SPARK_SQL 时必填；FlowId 非空时必须同时传 ExecutionId。WAREHOUSE 模式下 FlowId 即会话句柄（一个 FlowId 只对应一个会话）：会话过期或已销毁后须换新 FlowId，否则返回 FailedOperation.FlowIdNotExists。</p>
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置<p>工作流实例关联 ID（长度 ≤64）：同一工作流/会话的多条 SQL 作业传相同 FlowId，可共享同一 Spark 会话、复用已就绪引擎。MinorType=SPARK_SQL 时必填；FlowId 非空时必须同时传 ExecutionId。WAREHOUSE 模式下 FlowId 即会话句柄（一个 FlowId 只对应一个会话）：会话过期或已销毁后须换新 FlowId，否则返回 FailedOperation.FlowIdNotExists。</p>
                     * @param _flowId <p>工作流实例关联 ID（长度 ≤64）：同一工作流/会话的多条 SQL 作业传相同 FlowId，可共享同一 Spark 会话、复用已就绪引擎。MinorType=SPARK_SQL 时必填；FlowId 非空时必须同时传 ExecutionId。WAREHOUSE 模式下 FlowId 即会话句柄（一个 FlowId 只对应一个会话）：会话过期或已销毁后须换新 FlowId，否则返回 FailedOperation.FlowIdNotExists。</p>
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
                     * 获取<p>工作流内部执行标识（长度 ≤64），同一 FlowId 下每次提交须唯一（如自增序号/UUID）。用于重复提交防重：同一账号下命中未删除的同 (FlowId, ExecutionId) 作业时返回 FailedOperation.FlowExecutionConflict。FlowId 非空时必填（SPARK_SQL 因 FlowId 必填而必填）。</p>
                     * @return ExecutionId <p>工作流内部执行标识（长度 ≤64），同一 FlowId 下每次提交须唯一（如自增序号/UUID）。用于重复提交防重：同一账号下命中未删除的同 (FlowId, ExecutionId) 作业时返回 FailedOperation.FlowExecutionConflict。FlowId 非空时必填（SPARK_SQL 因 FlowId 必填而必填）。</p>
                     * 
                     */
                    std::string GetExecutionId() const;

                    /**
                     * 设置<p>工作流内部执行标识（长度 ≤64），同一 FlowId 下每次提交须唯一（如自增序号/UUID）。用于重复提交防重：同一账号下命中未删除的同 (FlowId, ExecutionId) 作业时返回 FailedOperation.FlowExecutionConflict。FlowId 非空时必填（SPARK_SQL 因 FlowId 必填而必填）。</p>
                     * @param _executionId <p>工作流内部执行标识（长度 ≤64），同一 FlowId 下每次提交须唯一（如自增序号/UUID）。用于重复提交防重：同一账号下命中未删除的同 (FlowId, ExecutionId) 作业时返回 FailedOperation.FlowExecutionConflict。FlowId 非空时必填（SPARK_SQL 因 FlowId 必填而必填）。</p>
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
                     * 获取<p>运行模式，必填。WAREHOUSE / JOB.</p>
                     * @return RunMode <p>运行模式，必填。WAREHOUSE / JOB.</p>
                     * 
                     */
                    std::string GetRunMode() const;

                    /**
                     * 设置<p>运行模式，必填。WAREHOUSE / JOB.</p>
                     * @param _runMode <p>运行模式，必填。WAREHOUSE / JOB.</p>
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
                     * 获取<p>计算仓库 ID。RunMode=WAREHOUSE 时必填（仓库需处于 RUNNING，或 STOPPED 且 AutoStart 开启（提交后冷启动拉起））；RunMode=JOB 时必须为空。</p>
                     * @return WarehouseId <p>计算仓库 ID。RunMode=WAREHOUSE 时必填（仓库需处于 RUNNING，或 STOPPED 且 AutoStart 开启（提交后冷启动拉起））；RunMode=JOB 时必须为空。</p>
                     * 
                     */
                    std::string GetWarehouseId() const;

                    /**
                     * 设置<p>计算仓库 ID。RunMode=WAREHOUSE 时必填（仓库需处于 RUNNING，或 STOPPED 且 AutoStart 开启（提交后冷启动拉起））；RunMode=JOB 时必须为空。</p>
                     * @param _warehouseId <p>计算仓库 ID。RunMode=WAREHOUSE 时必填（仓库需处于 RUNNING，或 STOPPED 且 AutoStart 开启（提交后冷启动拉起））；RunMode=JOB 时必须为空。</p>
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
                     * 获取<p>运行时/镜像编码（可选值见 DescribeSparkRuntimes）。RunMode=JOB 时必填；RunMode=WAREHOUSE 时忽略。</p>
                     * @return RuntimeCode <p>运行时/镜像编码（可选值见 DescribeSparkRuntimes）。RunMode=JOB 时必填；RunMode=WAREHOUSE 时忽略。</p>
                     * 
                     */
                    std::string GetRuntimeCode() const;

                    /**
                     * 设置<p>运行时/镜像编码（可选值见 DescribeSparkRuntimes）。RunMode=JOB 时必填；RunMode=WAREHOUSE 时忽略。</p>
                     * @param _runtimeCode <p>运行时/镜像编码（可选值见 DescribeSparkRuntimes）。RunMode=JOB 时必填；RunMode=WAREHOUSE 时忽略。</p>
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
                     * 获取<p>内置 Catalog 版本码（取值为 DescribeSysCatalogList 返回的目录子类型）。RunMode=JOB 时条件必填：未传时若可用（enabled）SysCatalog 唯一则自动选中，多个/零个报错；RunMode=WAREHOUSE 时禁止传。</p>
                     * @return SysCatalogVersion <p>内置 Catalog 版本码（取值为 DescribeSysCatalogList 返回的目录子类型）。RunMode=JOB 时条件必填：未传时若可用（enabled）SysCatalog 唯一则自动选中，多个/零个报错；RunMode=WAREHOUSE 时禁止传。</p>
                     * 
                     */
                    std::string GetSysCatalogVersion() const;

                    /**
                     * 设置<p>内置 Catalog 版本码（取值为 DescribeSysCatalogList 返回的目录子类型）。RunMode=JOB 时条件必填：未传时若可用（enabled）SysCatalog 唯一则自动选中，多个/零个报错；RunMode=WAREHOUSE 时禁止传。</p>
                     * @param _sysCatalogVersion <p>内置 Catalog 版本码（取值为 DescribeSysCatalogList 返回的目录子类型）。RunMode=JOB 时条件必填：未传时若可用（enabled）SysCatalog 唯一则自动选中，多个/零个报错；RunMode=WAREHOUSE 时禁止传。</p>
                     * 
                     */
                    void SetSysCatalogVersion(const std::string& _sysCatalogVersion);

                    /**
                     * 判断参数 SysCatalogVersion 是否已赋值
                     * @return SysCatalogVersion 是否已赋值
                     * 
                     */
                    bool SysCatalogVersionHasBeenSet() const;

                    /**
                     * 获取<p>资源分区代码，仅 RunMode=JOB 可传（QueueName 非空时必填）；RunMode=WAREHOUSE 时禁止传。</p>
                     * @return PartitionCode <p>资源分区代码，仅 RunMode=JOB 可传（QueueName 非空时必填）；RunMode=WAREHOUSE 时禁止传。</p>
                     * 
                     */
                    std::string GetPartitionCode() const;

                    /**
                     * 设置<p>资源分区代码，仅 RunMode=JOB 可传（QueueName 非空时必填）；RunMode=WAREHOUSE 时禁止传。</p>
                     * @param _partitionCode <p>资源分区代码，仅 RunMode=JOB 可传（QueueName 非空时必填）；RunMode=WAREHOUSE 时禁止传。</p>
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
                     * 获取<p>队列名称，必须与 PartitionCode 成对使用（RunMode=JOB 下可选）；RunMode=WAREHOUSE 下被仓库反查值覆盖，无需传。</p>
                     * @return QueueName <p>队列名称，必须与 PartitionCode 成对使用（RunMode=JOB 下可选）；RunMode=WAREHOUSE 下被仓库反查值覆盖，无需传。</p>
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置<p>队列名称，必须与 PartitionCode 成对使用（RunMode=JOB 下可选）；RunMode=WAREHOUSE 下被仓库反查值覆盖，无需传。</p>
                     * @param _queueName <p>队列名称，必须与 PartitionCode 成对使用（RunMode=JOB 下可选）；RunMode=WAREHOUSE 下被仓库反查值覆盖，无需传。</p>
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
                     * 获取<p>自定义 Spark conf（JSON 字符串，亦接受多行 key=value 文本，归一化为 JSON 存储、出参恒为 JSON），作为 SPARK_CUSTOM 配置通道落库，两种运行模式均生效。</p>
                     * @return CustomProperties <p>自定义 Spark conf（JSON 字符串，亦接受多行 key=value 文本，归一化为 JSON 存储、出参恒为 JSON），作为 SPARK_CUSTOM 配置通道落库，两种运行模式均生效。</p>
                     * 
                     */
                    std::string GetCustomProperties() const;

                    /**
                     * 设置<p>自定义 Spark conf（JSON 字符串，亦接受多行 key=value 文本，归一化为 JSON 存储、出参恒为 JSON），作为 SPARK_CUSTOM 配置通道落库，两种运行模式均生效。</p>
                     * @param _customProperties <p>自定义 Spark conf（JSON 字符串，亦接受多行 key=value 文本，归一化为 JSON 存储、出参恒为 JSON），作为 SPARK_CUSTOM 配置通道落库，两种运行模式均生效。</p>
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
                     * 获取<p>环境变量（KEY=VALUE）列表。仅 RunMode=JOB 可传；RunMode=WAREHOUSE 时禁止传。</p>
                     * @return EnvVars <p>环境变量（KEY=VALUE）列表。仅 RunMode=JOB 可传；RunMode=WAREHOUSE 时禁止传。</p>
                     * 
                     */
                    std::vector<KVPair> GetEnvVars() const;

                    /**
                     * 设置<p>环境变量（KEY=VALUE）列表。仅 RunMode=JOB 可传；RunMode=WAREHOUSE 时禁止传。</p>
                     * @param _envVars <p>环境变量（KEY=VALUE）列表。仅 RunMode=JOB 可传；RunMode=WAREHOUSE 时禁止传。</p>
                     * 
                     */
                    void SetEnvVars(const std::vector<KVPair>& _envVars);

                    /**
                     * 判断参数 EnvVars 是否已赋值
                     * @return EnvVars 是否已赋值
                     * 
                     */
                    bool EnvVarsHasBeenSet() const;

                private:

                    /**
                     * <p>作业名称，长度 ≤256；可省略，省略时服务端回退为 JobId。</p>
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * <p>流作业 checkpoint 路径（如 cosn://bucket/path/checkpoint）。MinorType=SPARK_STREAM 时必填；同一作业的多次运行必须复用同一路径，变更等于重置消费进度。</p>
                     */
                    std::string m_checkpointLocation;
                    bool m_checkpointLocationHasBeenSet;

                    /**
                     * <p>引擎大类，非必传，缺省 SPARK；当前仅支持 SPARK。</p>
                     */
                    std::string m_majorType;
                    bool m_majorTypeHasBeenSet;

                    /**
                     * <p>作业子类型，决定入口形态：SPARK_SQL（SQL 作业，Entrypoint.Statement 必填）/ SPARK_BATCH（批处理作业，Entrypoint.EntryFile 必填）/ SPARK_STREAM（流作业，EntryFile 与 CheckpointLocation 必填）。</p>
                     */
                    std::string m_minorType;
                    bool m_minorTypeHasBeenSet;

                    /**
                     * <p>工作流实例关联 ID（长度 ≤64）：同一工作流/会话的多条 SQL 作业传相同 FlowId，可共享同一 Spark 会话、复用已就绪引擎。MinorType=SPARK_SQL 时必填；FlowId 非空时必须同时传 ExecutionId。WAREHOUSE 模式下 FlowId 即会话句柄（一个 FlowId 只对应一个会话）：会话过期或已销毁后须换新 FlowId，否则返回 FailedOperation.FlowIdNotExists。</p>
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * <p>工作流内部执行标识（长度 ≤64），同一 FlowId 下每次提交须唯一（如自增序号/UUID）。用于重复提交防重：同一账号下命中未删除的同 (FlowId, ExecutionId) 作业时返回 FailedOperation.FlowExecutionConflict。FlowId 非空时必填（SPARK_SQL 因 FlowId 必填而必填）。</p>
                     */
                    std::string m_executionId;
                    bool m_executionIdHasBeenSet;

                    /**
                     * <p>运行模式，必填。WAREHOUSE / JOB.</p>
                     */
                    std::string m_runMode;
                    bool m_runModeHasBeenSet;

                    /**
                     * <p>计算仓库 ID。RunMode=WAREHOUSE 时必填（仓库需处于 RUNNING，或 STOPPED 且 AutoStart 开启（提交后冷启动拉起））；RunMode=JOB 时必须为空。</p>
                     */
                    std::string m_warehouseId;
                    bool m_warehouseIdHasBeenSet;

                    /**
                     * <p>运行时/镜像编码（可选值见 DescribeSparkRuntimes）。RunMode=JOB 时必填；RunMode=WAREHOUSE 时忽略。</p>
                     */
                    std::string m_runtimeCode;
                    bool m_runtimeCodeHasBeenSet;

                    /**
                     * <p>内置 Catalog 版本码（取值为 DescribeSysCatalogList 返回的目录子类型）。RunMode=JOB 时条件必填：未传时若可用（enabled）SysCatalog 唯一则自动选中，多个/零个报错；RunMode=WAREHOUSE 时禁止传。</p>
                     */
                    std::string m_sysCatalogVersion;
                    bool m_sysCatalogVersionHasBeenSet;

                    /**
                     * <p>资源分区代码，仅 RunMode=JOB 可传（QueueName 非空时必填）；RunMode=WAREHOUSE 时禁止传。</p>
                     */
                    std::string m_partitionCode;
                    bool m_partitionCodeHasBeenSet;

                    /**
                     * <p>队列名称，必须与 PartitionCode 成对使用（RunMode=JOB 下可选）；RunMode=WAREHOUSE 下被仓库反查值覆盖，无需传。</p>
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * <p>自定义 Spark conf（JSON 字符串，亦接受多行 key=value 文本，归一化为 JSON 存储、出参恒为 JSON），作为 SPARK_CUSTOM 配置通道落库，两种运行模式均生效。</p>
                     */
                    std::string m_customProperties;
                    bool m_customPropertiesHasBeenSet;

                    /**
                     * <p>环境变量（KEY=VALUE）列表。仅 RunMode=JOB 可传；RunMode=WAREHOUSE 时禁止传。</p>
                     */
                    std::vector<KVPair> m_envVars;
                    bool m_envVarsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATEJOBREQUEST_H_
