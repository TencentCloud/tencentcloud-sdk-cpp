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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_WAREHOUSEINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_WAREHOUSEINFO_H_

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
                * 计算仓库基础信息（对外 API 响应，DescribeWarehouses 列表结构）.
                */
                class WarehouseInfo : public AbstractModel
                {
                public:
                    WarehouseInfo();
                    ~WarehouseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>仓库 id（格式 "dlc-wh-xxxxxxxx"）.</p>
                     * @return WarehouseId <p>仓库 id（格式 "dlc-wh-xxxxxxxx"）.</p>
                     * 
                     */
                    std::string GetWarehouseId() const;

                    /**
                     * 设置<p>仓库 id（格式 "dlc-wh-xxxxxxxx"）.</p>
                     * @param _warehouseId <p>仓库 id（格式 "dlc-wh-xxxxxxxx"）.</p>
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
                     * 获取<p>仓库名称，租户内唯一。</p>
                     * @return Name <p>仓库名称，租户内唯一。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>仓库名称，租户内唯一。</p>
                     * @param _name <p>仓库名称，租户内唯一。</p>
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
                     * 获取<p>创建者子账号 UIN。</p>
                     * @return CreatorSubUin <p>创建者子账号 UIN。</p>
                     * 
                     */
                    std::string GetCreatorSubUin() const;

                    /**
                     * 设置<p>创建者子账号 UIN。</p>
                     * @param _creatorSubUin <p>创建者子账号 UIN。</p>
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
                     * 获取<p>仓库描述信息。</p>
                     * @return Description <p>仓库描述信息。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>仓库描述信息。</p>
                     * @param _description <p>仓库描述信息。</p>
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
                     * 获取<p>fermion 合并后的单一状态。取值：STARTING / RUNNING / STOPPING / STOPPED / UPDATING / UNAVAILABLE / DESTROYING（销毁中，只读：不接受任何生命周期操作）。</p>
                     * @return State <p>fermion 合并后的单一状态。取值：STARTING / RUNNING / STOPPING / STOPPED / UPDATING / UNAVAILABLE / DESTROYING（销毁中，只读：不接受任何生命周期操作）。</p>
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置<p>fermion 合并后的单一状态。取值：STARTING / RUNNING / STOPPING / STOPPED / UPDATING / UNAVAILABLE / DESTROYING（销毁中，只读：不接受任何生命周期操作）。</p>
                     * @param _state <p>fermion 合并后的单一状态。取值：STARTING / RUNNING / STOPPING / STOPPED / UPDATING / UNAVAILABLE / DESTROYING（销毁中，只读：不接受任何生命周期操作）。</p>
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
                     * 获取<p>资源池编码.</p>
                     * @return PartitionCode <p>资源池编码.</p>
                     * 
                     */
                    std::string GetPartitionCode() const;

                    /**
                     * 设置<p>资源池编码.</p>
                     * @param _partitionCode <p>资源池编码.</p>
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
                     * 获取<p>资源池展示名（解析不到时为空）.</p>
                     * @return PartitionName <p>资源池展示名（解析不到时为空）.</p>
                     * 
                     */
                    std::string GetPartitionName() const;

                    /**
                     * 设置<p>资源池展示名（解析不到时为空）.</p>
                     * @param _partitionName <p>资源池展示名（解析不到时为空）.</p>
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
                     * 获取<p>资源组/队列名。</p>
                     * @return QueueName <p>资源组/队列名。</p>
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置<p>资源组/队列名。</p>
                     * @param _queueName <p>资源组/队列名。</p>
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
                     * 获取<p>创建时间（毫秒时间戳）。</p>
                     * @return CreateTime <p>创建时间（毫秒时间戳）。</p>
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置<p>创建时间（毫秒时间戳）。</p>
                     * @param _createTime <p>创建时间（毫秒时间戳）。</p>
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
                     * 获取<p>最后更新时间（毫秒时间戳）。</p>
                     * @return UpdateTime <p>最后更新时间（毫秒时间戳）。</p>
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置<p>最后更新时间（毫秒时间戳）。</p>
                     * @param _updateTime <p>最后更新时间（毫秒时间戳）。</p>
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
                     * 获取<p>活跃集群数（describe 与 list 均返回）。集群明细等完整快照仅 DescribeWarehouseDetail 的 Observability 返回。</p>
                     * @return ActiveClusters <p>活跃集群数（describe 与 list 均返回）。集群明细等完整快照仅 DescribeWarehouseDetail 的 Observability 返回。</p>
                     * 
                     */
                    int64_t GetActiveClusters() const;

                    /**
                     * 设置<p>活跃集群数（describe 与 list 均返回）。集群明细等完整快照仅 DescribeWarehouseDetail 的 Observability 返回。</p>
                     * @param _activeClusters <p>活跃集群数（describe 与 list 均返回）。集群明细等完整快照仅 DescribeWarehouseDetail 的 Observability 返回。</p>
                     * 
                     */
                    void SetActiveClusters(const int64_t& _activeClusters);

                    /**
                     * 判断参数 ActiveClusters 是否已赋值
                     * @return ActiveClusters 是否已赋值
                     * 
                     */
                    bool ActiveClustersHasBeenSet() const;

                    /**
                     * 获取<p>最小集群数（即最小实例数下限；describe 与 list 均返回）.</p>
                     * @return MinClusters <p>最小集群数（即最小实例数下限；describe 与 list 均返回）.</p>
                     * 
                     */
                    int64_t GetMinClusters() const;

                    /**
                     * 设置<p>最小集群数（即最小实例数下限；describe 与 list 均返回）.</p>
                     * @param _minClusters <p>最小集群数（即最小实例数下限；describe 与 list 均返回）.</p>
                     * 
                     */
                    void SetMinClusters(const int64_t& _minClusters);

                    /**
                     * 判断参数 MinClusters 是否已赋值
                     * @return MinClusters 是否已赋值
                     * 
                     */
                    bool MinClustersHasBeenSet() const;

                    /**
                     * 获取<p>最大集群数（即最大实例数上限；describe 与 list 均返回）.</p>
                     * @return MaxClusters <p>最大集群数（即最大实例数上限；describe 与 list 均返回）.</p>
                     * 
                     */
                    int64_t GetMaxClusters() const;

                    /**
                     * 设置<p>最大集群数（即最大实例数上限；describe 与 list 均返回）.</p>
                     * @param _maxClusters <p>最大集群数（即最大实例数上限；describe 与 list 均返回）.</p>
                     * 
                     */
                    void SetMaxClusters(const int64_t& _maxClusters);

                    /**
                     * 判断参数 MaxClusters 是否已赋值
                     * @return MaxClusters 是否已赋值
                     * 
                     */
                    bool MaxClustersHasBeenSet() const;

                    /**
                     * 获取<p>运行时/镜像.</p>
                     * @return RuntimeCode <p>运行时/镜像.</p>
                     * 
                     */
                    std::string GetRuntimeCode() const;

                    /**
                     * 设置<p>运行时/镜像.</p>
                     * @param _runtimeCode <p>运行时/镜像.</p>
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
                     * 获取<p>运行时展示名（如 Spark 3.5.5），与 RuntimeCode 配套；解析不到时为空.</p>
                     * @return RuntimeName <p>运行时展示名（如 Spark 3.5.5），与 RuntimeCode 配套；解析不到时为空.</p>
                     * 
                     */
                    std::string GetRuntimeName() const;

                    /**
                     * 设置<p>运行时展示名（如 Spark 3.5.5），与 RuntimeCode 配套；解析不到时为空.</p>
                     * @param _runtimeName <p>运行时展示名（如 Spark 3.5.5），与 RuntimeCode 配套；解析不到时为空.</p>
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
                     * 获取<p>Catalog 版本码.</p>
                     * @return SysCatalogVersion <p>Catalog 版本码.</p>
                     * 
                     */
                    std::string GetSysCatalogVersion() const;

                    /**
                     * 设置<p>Catalog 版本码.</p>
                     * @param _sysCatalogVersion <p>Catalog 版本码.</p>
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
                     * 获取<p>静态运行参数（RuntimeConf）：spark.* KV 的 JSON 字符串（如 "{\"spark.sql.shuffle.partitions\":\"400\"}"），spark-submit 时生效。</p>
                     * @return RuntimeConf <p>静态运行参数（RuntimeConf）：spark.* KV 的 JSON 字符串（如 "{\"spark.sql.shuffle.partitions\":\"400\"}"），spark-submit 时生效。</p>
                     * 
                     */
                    std::string GetRuntimeConf() const;

                    /**
                     * 设置<p>静态运行参数（RuntimeConf）：spark.* KV 的 JSON 字符串（如 "{\"spark.sql.shuffle.partitions\":\"400\"}"），spark-submit 时生效。</p>
                     * @param _runtimeConf <p>静态运行参数（RuntimeConf）：spark.* KV 的 JSON 字符串（如 "{\"spark.sql.shuffle.partitions\":\"400\"}"），spark-submit 时生效。</p>
                     * 
                     */
                    void SetRuntimeConf(const std::string& _runtimeConf);

                    /**
                     * 判断参数 RuntimeConf 是否已赋值
                     * @return RuntimeConf 是否已赋值
                     * 
                     */
                    bool RuntimeConfHasBeenSet() const;

                    /**
                     * 获取<p>动态参数（DynamicProperties）：spark.* KV 的 JSON 字符串，运行期生效（会话级，openSession 弱注入，即改即生效）。</p>
                     * @return DynamicProperties <p>动态参数（DynamicProperties）：spark.* KV 的 JSON 字符串，运行期生效（会话级，openSession 弱注入，即改即生效）。</p>
                     * 
                     */
                    std::string GetDynamicProperties() const;

                    /**
                     * 设置<p>动态参数（DynamicProperties）：spark.* KV 的 JSON 字符串，运行期生效（会话级，openSession 弱注入，即改即生效）。</p>
                     * @param _dynamicProperties <p>动态参数（DynamicProperties）：spark.* KV 的 JSON 字符串，运行期生效（会话级，openSession 弱注入，即改即生效）。</p>
                     * 
                     */
                    void SetDynamicProperties(const std::string& _dynamicProperties);

                    /**
                     * 判断参数 DynamicProperties 是否已赋值
                     * @return DynamicProperties 是否已赋值
                     * 
                     */
                    bool DynamicPropertiesHasBeenSet() const;

                private:

                    /**
                     * <p>仓库 id（格式 "dlc-wh-xxxxxxxx"）.</p>
                     */
                    std::string m_warehouseId;
                    bool m_warehouseIdHasBeenSet;

                    /**
                     * <p>仓库名称，租户内唯一。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>创建者子账号 UIN。</p>
                     */
                    std::string m_creatorSubUin;
                    bool m_creatorSubUinHasBeenSet;

                    /**
                     * <p>仓库描述信息。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>fermion 合并后的单一状态。取值：STARTING / RUNNING / STOPPING / STOPPED / UPDATING / UNAVAILABLE / DESTROYING（销毁中，只读：不接受任何生命周期操作）。</p>
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>资源池编码.</p>
                     */
                    std::string m_partitionCode;
                    bool m_partitionCodeHasBeenSet;

                    /**
                     * <p>资源池展示名（解析不到时为空）.</p>
                     */
                    std::string m_partitionName;
                    bool m_partitionNameHasBeenSet;

                    /**
                     * <p>资源组/队列名。</p>
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * <p>创建时间（毫秒时间戳）。</p>
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>最后更新时间（毫秒时间戳）。</p>
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>活跃集群数（describe 与 list 均返回）。集群明细等完整快照仅 DescribeWarehouseDetail 的 Observability 返回。</p>
                     */
                    int64_t m_activeClusters;
                    bool m_activeClustersHasBeenSet;

                    /**
                     * <p>最小集群数（即最小实例数下限；describe 与 list 均返回）.</p>
                     */
                    int64_t m_minClusters;
                    bool m_minClustersHasBeenSet;

                    /**
                     * <p>最大集群数（即最大实例数上限；describe 与 list 均返回）.</p>
                     */
                    int64_t m_maxClusters;
                    bool m_maxClustersHasBeenSet;

                    /**
                     * <p>运行时/镜像.</p>
                     */
                    std::string m_runtimeCode;
                    bool m_runtimeCodeHasBeenSet;

                    /**
                     * <p>运行时展示名（如 Spark 3.5.5），与 RuntimeCode 配套；解析不到时为空.</p>
                     */
                    std::string m_runtimeName;
                    bool m_runtimeNameHasBeenSet;

                    /**
                     * <p>Catalog 版本码.</p>
                     */
                    std::string m_sysCatalogVersion;
                    bool m_sysCatalogVersionHasBeenSet;

                    /**
                     * <p>环境变量.</p>
                     */
                    std::vector<KVPair> m_envVars;
                    bool m_envVarsHasBeenSet;

                    /**
                     * <p>静态运行参数（RuntimeConf）：spark.* KV 的 JSON 字符串（如 "{\"spark.sql.shuffle.partitions\":\"400\"}"），spark-submit 时生效。</p>
                     */
                    std::string m_runtimeConf;
                    bool m_runtimeConfHasBeenSet;

                    /**
                     * <p>动态参数（DynamicProperties）：spark.* KV 的 JSON 字符串，运行期生效（会话级，openSession 弱注入，即改即生效）。</p>
                     */
                    std::string m_dynamicProperties;
                    bool m_dynamicPropertiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_WAREHOUSEINFO_H_
