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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEGROUP_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/RuleGroupExecStrategy.h>
#include <tencentcloud/wedata/v20210820/model/RuleGroupSubscribe.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 数据质量规则组
                */
                class RuleGroup : public AbstractModel
                {
                public:
                    RuleGroup();
                    ~RuleGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则组Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleGroupId 规则组Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRuleGroupId() const;

                    /**
                     * 设置规则组Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleGroupId 规则组Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleGroupId(const uint64_t& _ruleGroupId);

                    /**
                     * 判断参数 RuleGroupId 是否已赋值
                     * @return RuleGroupId 是否已赋值
                     * 
                     */
                    bool RuleGroupIdHasBeenSet() const;

                    /**
                     * 获取数据源Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceId 数据源Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置数据源Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceId 数据源Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatasourceId(const std::string& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     * 
                     */
                    bool DatasourceIdHasBeenSet() const;

                    /**
                     * 获取数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceName 数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatasourceName() const;

                    /**
                     * 设置数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceName 数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatasourceName(const std::string& _datasourceName);

                    /**
                     * 判断参数 DatasourceName 是否已赋值
                     * @return DatasourceName 是否已赋值
                     * 
                     */
                    bool DatasourceNameHasBeenSet() const;

                    /**
                     * 获取数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceType 数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDatasourceType() const;

                    /**
                     * 设置数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceType 数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatasourceType(const uint64_t& _datasourceType);

                    /**
                     * 判断参数 DatasourceType 是否已赋值
                     * @return DatasourceType 是否已赋值
                     * 
                     */
                    bool DatasourceTypeHasBeenSet() const;

                    /**
                     * 获取监控类型 1.未配置, 2.关联生产调度, 3.离线周期检测
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MonitorType 监控类型 1.未配置, 2.关联生产调度, 3.离线周期检测
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMonitorType() const;

                    /**
                     * 设置监控类型 1.未配置, 2.关联生产调度, 3.离线周期检测
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _monitorType 监控类型 1.未配置, 2.关联生产调度, 3.离线周期检测
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMonitorType(const uint64_t& _monitorType);

                    /**
                     * 判断参数 MonitorType 是否已赋值
                     * @return MonitorType 是否已赋值
                     * 
                     */
                    bool MonitorTypeHasBeenSet() const;

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

                    /**
                     * 获取关联数据表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableName 关联数据表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置关联数据表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableName 关联数据表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取关联数据表Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableId 关联数据表Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置关联数据表Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableId 关联数据表Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableId(const std::string& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     * 
                     */
                    bool TableIdHasBeenSet() const;

                    /**
                     * 获取关联数据表负责人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableOwnerName 关联数据表负责人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableOwnerName() const;

                    /**
                     * 设置关联数据表负责人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableOwnerName 关联数据表负责人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableOwnerName(const std::string& _tableOwnerName);

                    /**
                     * 判断参数 TableOwnerName 是否已赋值
                     * @return TableOwnerName 是否已赋值
                     * 
                     */
                    bool TableOwnerNameHasBeenSet() const;

                    /**
                     * 获取执行策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecStrategy 执行策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RuleGroupExecStrategy GetExecStrategy() const;

                    /**
                     * 设置执行策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _execStrategy 执行策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecStrategy(const RuleGroupExecStrategy& _execStrategy);

                    /**
                     * 判断参数 ExecStrategy 是否已赋值
                     * @return ExecStrategy 是否已赋值
                     * 
                     */
                    bool ExecStrategyHasBeenSet() const;

                    /**
                     * 获取执行策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Subscription 执行策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RuleGroupSubscribe GetSubscription() const;

                    /**
                     * 设置执行策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subscription 执行策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubscription(const RuleGroupSubscribe& _subscription);

                    /**
                     * 判断参数 Subscription 是否已赋值
                     * @return Subscription 是否已赋值
                     * 
                     */
                    bool SubscriptionHasBeenSet() const;

                    /**
                     * 获取数据库id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseId 数据库id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatabaseId() const;

                    /**
                     * 设置数据库id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _databaseId 数据库id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatabaseId(const std::string& _databaseId);

                    /**
                     * 判断参数 DatabaseId 是否已赋值
                     * @return DatabaseId 是否已赋值
                     * 
                     */
                    bool DatabaseIdHasBeenSet() const;

                    /**
                     * 获取数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseName 数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _databaseName 数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取模式名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchemaName 模式名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置模式名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schemaName 模式名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSchemaName(const std::string& _schemaName);

                    /**
                     * 判断参数 SchemaName 是否已赋值
                     * @return SchemaName 是否已赋值
                     * 
                     */
                    bool SchemaNameHasBeenSet() const;

                    /**
                     * 获取是否有权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Permission 是否有权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetPermission() const;

                    /**
                     * 设置是否有权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _permission 是否有权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPermission(const bool& _permission);

                    /**
                     * 判断参数 Permission 是否已赋值
                     * @return Permission 是否已赋值
                     * 
                     */
                    bool PermissionHasBeenSet() const;

                    /**
                     * 获取已经配置的规则数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleCount 已经配置的规则数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRuleCount() const;

                    /**
                     * 设置已经配置的规则数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleCount 已经配置的规则数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleCount(const uint64_t& _ruleCount);

                    /**
                     * 判断参数 RuleCount 是否已赋值
                     * @return RuleCount 是否已赋值
                     * 
                     */
                    bool RuleCountHasBeenSet() const;

                    /**
                     * 获取监控状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MonitorStatus 监控状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetMonitorStatus() const;

                    /**
                     * 设置监控状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _monitorStatus 监控状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMonitorStatus(const bool& _monitorStatus);

                    /**
                     * 判断参数 MonitorStatus 是否已赋值
                     * @return MonitorStatus 是否已赋值
                     * 
                     */
                    bool MonitorStatusHasBeenSet() const;

                    /**
                     * 获取表负责人UserId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableOwnerUserId 表负责人UserId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTableOwnerUserId() const;

                    /**
                     * 设置表负责人UserId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableOwnerUserId 表负责人UserId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableOwnerUserId(const uint64_t& _tableOwnerUserId);

                    /**
                     * 判断参数 TableOwnerUserId 是否已赋值
                     * @return TableOwnerUserId 是否已赋值
                     * 
                     */
                    bool TableOwnerUserIdHasBeenSet() const;

                    /**
                     * 获取实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId 实例ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取是否已配置执行策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StrategyConfig 是否已配置执行策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetStrategyConfig() const;

                    /**
                     * 设置是否已配置执行策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _strategyConfig 是否已配置执行策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStrategyConfig(const bool& _strategyConfig);

                    /**
                     * 判断参数 StrategyConfig 是否已赋值
                     * @return StrategyConfig 是否已赋值
                     * 
                     */
                    bool StrategyConfigHasBeenSet() const;

                    /**
                     * 获取是否已配置执行策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubscribeConfig 是否已配置执行策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSubscribeConfig() const;

                    /**
                     * 设置是否已配置执行策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subscribeConfig 是否已配置执行策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubscribeConfig(const bool& _subscribeConfig);

                    /**
                     * 判断参数 SubscribeConfig 是否已赋值
                     * @return SubscribeConfig 是否已赋值
                     * 
                     */
                    bool SubscribeConfigHasBeenSet() const;

                    /**
                     * 获取数据源环境：0或者未返回.未定义，1.生产 2.开发
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DsEnvType 数据源环境：0或者未返回.未定义，1.生产 2.开发
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDsEnvType() const;

                    /**
                     * 设置数据源环境：0或者未返回.未定义，1.生产 2.开发
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dsEnvType 数据源环境：0或者未返回.未定义，1.生产 2.开发
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDsEnvType(const int64_t& _dsEnvType);

                    /**
                     * 判断参数 DsEnvType 是否已赋值
                     * @return DsEnvType 是否已赋值
                     * 
                     */
                    bool DsEnvTypeHasBeenSet() const;

                    /**
                     * 获取EMR集群部署方式：CVM/TKE
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterDeployType EMR集群部署方式：CVM/TKE
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterDeployType() const;

                    /**
                     * 设置EMR集群部署方式：CVM/TKE
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterDeployType EMR集群部署方式：CVM/TKE
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterDeployType(const std::string& _clusterDeployType);

                    /**
                     * 判断参数 ClusterDeployType 是否已赋值
                     * @return ClusterDeployType 是否已赋值
                     * 
                     */
                    bool ClusterDeployTypeHasBeenSet() const;

                    /**
                     * 获取任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 任务名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取执行详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecDetail 执行详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecDetail() const;

                    /**
                     * 设置执行详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _execDetail 执行详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecDetail(const std::string& _execDetail);

                    /**
                     * 判断参数 ExecDetail 是否已赋值
                     * @return ExecDetail 是否已赋值
                     * 
                     */
                    bool ExecDetailHasBeenSet() const;

                    /**
                     * 获取事中关联任务数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PipelineTaskCount 事中关联任务数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPipelineTaskCount() const;

                    /**
                     * 设置事中关联任务数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pipelineTaskCount 事中关联任务数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPipelineTaskCount(const int64_t& _pipelineTaskCount);

                    /**
                     * 判断参数 PipelineTaskCount 是否已赋值
                     * @return PipelineTaskCount 是否已赋值
                     * 
                     */
                    bool PipelineTaskCountHasBeenSet() const;

                    /**
                     * 获取有效规则数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableRuleCount 有效规则数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEnableRuleCount() const;

                    /**
                     * 设置有效规则数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableRuleCount 有效规则数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnableRuleCount(const int64_t& _enableRuleCount);

                    /**
                     * 判断参数 EnableRuleCount 是否已赋值
                     * @return EnableRuleCount 是否已赋值
                     * 
                     */
                    bool EnableRuleCountHasBeenSet() const;

                    /**
                     * 获取任务描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 任务描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置任务描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 任务描述
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
                     * 获取监控创建人
                     * @return CreateUserName 监控创建人
                     * 
                     */
                    std::string GetCreateUserName() const;

                    /**
                     * 设置监控创建人
                     * @param _createUserName 监控创建人
                     * 
                     */
                    void SetCreateUserName(const std::string& _createUserName);

                    /**
                     * 判断参数 CreateUserName 是否已赋值
                     * @return CreateUserName 是否已赋值
                     * 
                     */
                    bool CreateUserNameHasBeenSet() const;

                private:

                    /**
                     * 规则组Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ruleGroupId;
                    bool m_ruleGroupIdHasBeenSet;

                    /**
                     * 数据源Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * 数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasourceName;
                    bool m_datasourceNameHasBeenSet;

                    /**
                     * 数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_datasourceType;
                    bool m_datasourceTypeHasBeenSet;

                    /**
                     * 监控类型 1.未配置, 2.关联生产调度, 3.离线周期检测
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_monitorType;
                    bool m_monitorTypeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 关联数据表名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 关联数据表Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * 关联数据表负责人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableOwnerName;
                    bool m_tableOwnerNameHasBeenSet;

                    /**
                     * 执行策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RuleGroupExecStrategy m_execStrategy;
                    bool m_execStrategyHasBeenSet;

                    /**
                     * 执行策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RuleGroupSubscribe m_subscription;
                    bool m_subscriptionHasBeenSet;

                    /**
                     * 数据库id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseId;
                    bool m_databaseIdHasBeenSet;

                    /**
                     * 数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 模式名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * 是否有权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_permission;
                    bool m_permissionHasBeenSet;

                    /**
                     * 已经配置的规则数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ruleCount;
                    bool m_ruleCountHasBeenSet;

                    /**
                     * 监控状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_monitorStatus;
                    bool m_monitorStatusHasBeenSet;

                    /**
                     * 表负责人UserId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_tableOwnerUserId;
                    bool m_tableOwnerUserIdHasBeenSet;

                    /**
                     * 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 是否已配置执行策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_strategyConfig;
                    bool m_strategyConfigHasBeenSet;

                    /**
                     * 是否已配置执行策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_subscribeConfig;
                    bool m_subscribeConfigHasBeenSet;

                    /**
                     * 数据源环境：0或者未返回.未定义，1.生产 2.开发
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_dsEnvType;
                    bool m_dsEnvTypeHasBeenSet;

                    /**
                     * EMR集群部署方式：CVM/TKE
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterDeployType;
                    bool m_clusterDeployTypeHasBeenSet;

                    /**
                     * 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 执行详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_execDetail;
                    bool m_execDetailHasBeenSet;

                    /**
                     * 事中关联任务数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pipelineTaskCount;
                    bool m_pipelineTaskCountHasBeenSet;

                    /**
                     * 有效规则数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_enableRuleCount;
                    bool m_enableRuleCountHasBeenSet;

                    /**
                     * 任务描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 监控创建人
                     */
                    std::string m_createUserName;
                    bool m_createUserNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEGROUP_H_
