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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_MODIFYJOBDEFINITIONREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_MODIFYJOBDEFINITIONREQUEST_H_

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
                * ModifyJobDefinition请求参数结构体
                */
                class ModifyJobDefinitionRequest : public AbstractModel
                {
                public:
                    ModifyJobDefinitionRequest();
                    ~ModifyJobDefinitionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>作业定义 ID。必填。</p>
                     * @return JobDefinitionId <p>作业定义 ID。必填。</p>
                     * 
                     */
                    std::string GetJobDefinitionId() const;

                    /**
                     * 设置<p>作业定义 ID。必填。</p>
                     * @param _jobDefinitionId <p>作业定义 ID。必填。</p>
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
                     * 获取<p>作业定义名称。创建后不可修改：仅接受与当前名称相同的值（回显），传不同值报错；不传表示不修改。</p>
                     * @return Name <p>作业定义名称。创建后不可修改：仅接受与当前名称相同的值（回显），传不同值报错；不传表示不修改。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>作业定义名称。创建后不可修改：仅接受与当前名称相同的值（回显），传不同值报错；不传表示不修改。</p>
                     * @param _name <p>作业定义名称。创建后不可修改：仅接受与当前名称相同的值（回显），传不同值报错；不传表示不修改。</p>
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
                     * 获取<p>修改后的作业定义描述。</p>
                     * @return Description <p>修改后的作业定义描述。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>修改后的作业定义描述。</p>
                     * @param _description <p>修改后的作业定义描述。</p>
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
                     * 获取<p>引擎大类（当前仅支持 SPARK）。</p>
                     * @return MajorType <p>引擎大类（当前仅支持 SPARK）。</p>
                     * 
                     */
                    std::string GetMajorType() const;

                    /**
                     * 设置<p>引擎大类（当前仅支持 SPARK）。</p>
                     * @param _majorType <p>引擎大类（当前仅支持 SPARK）。</p>
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
                     * 获取<p>作业子类型，SPARK_SQL / SPARK_BATCH / SPARK_STREAM；非必填。</p>
                     * @return MinorType <p>作业子类型，SPARK_SQL / SPARK_BATCH / SPARK_STREAM；非必填。</p>
                     * 
                     */
                    std::string GetMinorType() const;

                    /**
                     * 设置<p>作业子类型，SPARK_SQL / SPARK_BATCH / SPARK_STREAM；非必填。</p>
                     * @param _minorType <p>作业子类型，SPARK_SQL / SPARK_BATCH / SPARK_STREAM；非必填。</p>
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
                     * 获取<p>流作业 checkpoint 路径（如 cosn://bucket/path/checkpoint），非必填，传了即覆盖。SPARK_STREAM 定义必须非空；变更等于重置消费进度。</p>
                     * @return CheckpointLocation <p>流作业 checkpoint 路径（如 cosn://bucket/path/checkpoint），非必填，传了即覆盖。SPARK_STREAM 定义必须非空；变更等于重置消费进度。</p>
                     * 
                     */
                    std::string GetCheckpointLocation() const;

                    /**
                     * 设置<p>流作业 checkpoint 路径（如 cosn://bucket/path/checkpoint），非必填，传了即覆盖。SPARK_STREAM 定义必须非空；变更等于重置消费进度。</p>
                     * @param _checkpointLocation <p>流作业 checkpoint 路径（如 cosn://bucket/path/checkpoint），非必填，传了即覆盖。SPARK_STREAM 定义必须非空；变更等于重置消费进度。</p>
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
                     * 获取<p>资源分区代码，仅目标 RunMode=JOB 可传（QueueName 非空时必填）；目标 RunMode=WAREHOUSE 时禁止传。</p>
                     * @return PartitionCode <p>资源分区代码，仅目标 RunMode=JOB 可传（QueueName 非空时必填）；目标 RunMode=WAREHOUSE 时禁止传。</p>
                     * 
                     */
                    std::string GetPartitionCode() const;

                    /**
                     * 设置<p>资源分区代码，仅目标 RunMode=JOB 可传（QueueName 非空时必填）；目标 RunMode=WAREHOUSE 时禁止传。</p>
                     * @param _partitionCode <p>资源分区代码，仅目标 RunMode=JOB 可传（QueueName 非空时必填）；目标 RunMode=WAREHOUSE 时禁止传。</p>
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
                     * 获取<p>队列名称，仅目标 RunMode=JOB 可传且须与 PartitionCode 成对；目标 RunMode=WAREHOUSE 时禁止传。</p>
                     * @return QueueName <p>队列名称，仅目标 RunMode=JOB 可传且须与 PartitionCode 成对；目标 RunMode=WAREHOUSE 时禁止传。</p>
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置<p>队列名称，仅目标 RunMode=JOB 可传且须与 PartitionCode 成对；目标 RunMode=WAREHOUSE 时禁止传。</p>
                     * @param _queueName <p>队列名称，仅目标 RunMode=JOB 可传且须与 PartitionCode 成对；目标 RunMode=WAREHOUSE 时禁止传。</p>
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
                     * 获取<p>运行时/镜像编码，可选（null=沿用当前值）。仅对 JOB 模式定义生效；目标 RunMode=WAREHOUSE 时禁止传。</p>
                     * @return RuntimeCode <p>运行时/镜像编码，可选（null=沿用当前值）。仅对 JOB 模式定义生效；目标 RunMode=WAREHOUSE 时禁止传。</p>
                     * 
                     */
                    std::string GetRuntimeCode() const;

                    /**
                     * 设置<p>运行时/镜像编码，可选（null=沿用当前值）。仅对 JOB 模式定义生效；目标 RunMode=WAREHOUSE 时禁止传。</p>
                     * @param _runtimeCode <p>运行时/镜像编码，可选（null=沿用当前值）。仅对 JOB 模式定义生效；目标 RunMode=WAREHOUSE 时禁止传。</p>
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
                     * 获取<p>内置 Catalog 版本码（取值为 DescribeSysCatalogList 返回的目录子类型），可选（null=沿用当前值）。</p>
                     * @return SysCatalogVersion <p>内置 Catalog 版本码（取值为 DescribeSysCatalogList 返回的目录子类型），可选（null=沿用当前值）。</p>
                     * 
                     */
                    std::string GetSysCatalogVersion() const;

                    /**
                     * 设置<p>内置 Catalog 版本码（取值为 DescribeSysCatalogList 返回的目录子类型），可选（null=沿用当前值）。</p>
                     * @param _sysCatalogVersion <p>内置 Catalog 版本码（取值为 DescribeSysCatalogList 返回的目录子类型），可选（null=沿用当前值）。</p>
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
                     * 获取<p>自定义 Spark conf（JSON 字符串，亦接受多行 key=value 文本，归一化为 JSON 存储、出参恒为 JSON），非必填，传了即整串覆盖。</p>
                     * @return CustomProperties <p>自定义 Spark conf（JSON 字符串，亦接受多行 key=value 文本，归一化为 JSON 存储、出参恒为 JSON），非必填，传了即整串覆盖。</p>
                     * 
                     */
                    std::string GetCustomProperties() const;

                    /**
                     * 设置<p>自定义 Spark conf（JSON 字符串，亦接受多行 key=value 文本，归一化为 JSON 存储、出参恒为 JSON），非必填，传了即整串覆盖。</p>
                     * @param _customProperties <p>自定义 Spark conf（JSON 字符串，亦接受多行 key=value 文本，归一化为 JSON 存储、出参恒为 JSON），非必填，传了即整串覆盖。</p>
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
                     * 获取<p>环境变量（KEY=VALUE）列表，非必填，传了即整体覆盖。仅对 JOB 模式定义生效；目标 RunMode=WAREHOUSE 时禁止传。</p>
                     * @return EnvVars <p>环境变量（KEY=VALUE）列表，非必填，传了即整体覆盖。仅对 JOB 模式定义生效；目标 RunMode=WAREHOUSE 时禁止传。</p>
                     * 
                     */
                    std::vector<KVPair> GetEnvVars() const;

                    /**
                     * 设置<p>环境变量（KEY=VALUE）列表，非必填，传了即整体覆盖。仅对 JOB 模式定义生效；目标 RunMode=WAREHOUSE 时禁止传。</p>
                     * @param _envVars <p>环境变量（KEY=VALUE）列表，非必填，传了即整体覆盖。仅对 JOB 模式定义生效；目标 RunMode=WAREHOUSE 时禁止传。</p>
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
                     * 获取<p>目标运行模式：WAREHOUSE / JOB；未传=保持不变。切换模式时两种模式的参数集严格隔离（切换 WAREHOUSE 须提供 WarehouseId 且禁传 JOB 模式专属字段，反之亦然）。</p>
                     * @return RunMode <p>目标运行模式：WAREHOUSE / JOB；未传=保持不变。切换模式时两种模式的参数集严格隔离（切换 WAREHOUSE 须提供 WarehouseId 且禁传 JOB 模式专属字段，反之亦然）。</p>
                     * 
                     */
                    std::string GetRunMode() const;

                    /**
                     * 设置<p>目标运行模式：WAREHOUSE / JOB；未传=保持不变。切换模式时两种模式的参数集严格隔离（切换 WAREHOUSE 须提供 WarehouseId 且禁传 JOB 模式专属字段，反之亦然）。</p>
                     * @param _runMode <p>目标运行模式：WAREHOUSE / JOB；未传=保持不变。切换模式时两种模式的参数集严格隔离（切换 WAREHOUSE 须提供 WarehouseId 且禁传 JOB 模式专属字段，反之亦然）。</p>
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
                     * 获取<p>计算仓库 ID。仅目标 RunMode=WAREHOUSE 时可传（必填）；未传 RunMode 或目标为 JOB 时禁止传。</p>
                     * @return WarehouseId <p>计算仓库 ID。仅目标 RunMode=WAREHOUSE 时可传（必填）；未传 RunMode 或目标为 JOB 时禁止传。</p>
                     * 
                     */
                    std::string GetWarehouseId() const;

                    /**
                     * 设置<p>计算仓库 ID。仅目标 RunMode=WAREHOUSE 时可传（必填）；未传 RunMode 或目标为 JOB 时禁止传。</p>
                     * @param _warehouseId <p>计算仓库 ID。仅目标 RunMode=WAREHOUSE 时可传（必填）；未传 RunMode 或目标为 JOB 时禁止传。</p>
                     * 
                     */
                    void SetWarehouseId(const std::string& _warehouseId);

                    /**
                     * 判断参数 WarehouseId 是否已赋值
                     * @return WarehouseId 是否已赋值
                     * 
                     */
                    bool WarehouseIdHasBeenSet() const;

                private:

                    /**
                     * <p>作业定义 ID。必填。</p>
                     */
                    std::string m_jobDefinitionId;
                    bool m_jobDefinitionIdHasBeenSet;

                    /**
                     * <p>作业定义名称。创建后不可修改：仅接受与当前名称相同的值（回显），传不同值报错；不传表示不修改。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>修改后的作业定义描述。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>引擎大类（当前仅支持 SPARK）。</p>
                     */
                    std::string m_majorType;
                    bool m_majorTypeHasBeenSet;

                    /**
                     * <p>作业子类型，SPARK_SQL / SPARK_BATCH / SPARK_STREAM；非必填。</p>
                     */
                    std::string m_minorType;
                    bool m_minorTypeHasBeenSet;

                    /**
                     * <p>流作业 checkpoint 路径（如 cosn://bucket/path/checkpoint），非必填，传了即覆盖。SPARK_STREAM 定义必须非空；变更等于重置消费进度。</p>
                     */
                    std::string m_checkpointLocation;
                    bool m_checkpointLocationHasBeenSet;

                    /**
                     * <p>资源分区代码，仅目标 RunMode=JOB 可传（QueueName 非空时必填）；目标 RunMode=WAREHOUSE 时禁止传。</p>
                     */
                    std::string m_partitionCode;
                    bool m_partitionCodeHasBeenSet;

                    /**
                     * <p>队列名称，仅目标 RunMode=JOB 可传且须与 PartitionCode 成对；目标 RunMode=WAREHOUSE 时禁止传。</p>
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * <p>运行时/镜像编码，可选（null=沿用当前值）。仅对 JOB 模式定义生效；目标 RunMode=WAREHOUSE 时禁止传。</p>
                     */
                    std::string m_runtimeCode;
                    bool m_runtimeCodeHasBeenSet;

                    /**
                     * <p>内置 Catalog 版本码（取值为 DescribeSysCatalogList 返回的目录子类型），可选（null=沿用当前值）。</p>
                     */
                    std::string m_sysCatalogVersion;
                    bool m_sysCatalogVersionHasBeenSet;

                    /**
                     * <p>自定义 Spark conf（JSON 字符串，亦接受多行 key=value 文本，归一化为 JSON 存储、出参恒为 JSON），非必填，传了即整串覆盖。</p>
                     */
                    std::string m_customProperties;
                    bool m_customPropertiesHasBeenSet;

                    /**
                     * <p>环境变量（KEY=VALUE）列表，非必填，传了即整体覆盖。仅对 JOB 模式定义生效；目标 RunMode=WAREHOUSE 时禁止传。</p>
                     */
                    std::vector<KVPair> m_envVars;
                    bool m_envVarsHasBeenSet;

                    /**
                     * <p>目标运行模式：WAREHOUSE / JOB；未传=保持不变。切换模式时两种模式的参数集严格隔离（切换 WAREHOUSE 须提供 WarehouseId 且禁传 JOB 模式专属字段，反之亦然）。</p>
                     */
                    std::string m_runMode;
                    bool m_runModeHasBeenSet;

                    /**
                     * <p>计算仓库 ID。仅目标 RunMode=WAREHOUSE 时可传（必填）；未传 RunMode 或目标为 JOB 时禁止传。</p>
                     */
                    std::string m_warehouseId;
                    bool m_warehouseIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_MODIFYJOBDEFINITIONREQUEST_H_
