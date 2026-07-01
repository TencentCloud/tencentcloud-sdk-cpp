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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_QUALITYRULEGROUP_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_QUALITYRULEGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/QualityRuleGroupExecStrategy.h>
#include <tencentcloud/wedata/v20250806/model/QualityRuleGroupSubscribe.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 数据质量监控任务
                */
                class QualityRuleGroup : public AbstractModel
                {
                public:
                    QualityRuleGroup();
                    ~QualityRuleGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>规则组Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleGroupId <p>规则组Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRuleGroupId() const;

                    /**
                     * 设置<p>规则组Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleGroupId <p>规则组Id</p>
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
                     * 获取<p>数据源Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceId <p>数据源Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置<p>数据源Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceId <p>数据源Id</p>
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
                     * 获取<p>数据源名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceName <p>数据源名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatasourceName() const;

                    /**
                     * 设置<p>数据源名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceName <p>数据源名称</p>
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
                     * 获取<p>数据源类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceType <p>数据源类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDatasourceType() const;

                    /**
                     * 设置<p>数据源类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceType <p>数据源类型</p>
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
                     * 获取<p>监控类型 1.未配置, 2.关联生产调度, 3.离线周期检测</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MonitorType <p>监控类型 1.未配置, 2.关联生产调度, 3.离线周期检测</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMonitorType() const;

                    /**
                     * 设置<p>监控类型 1.未配置, 2.关联生产调度, 3.离线周期检测</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _monitorType <p>监控类型 1.未配置, 2.关联生产调度, 3.离线周期检测</p>
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
                     * 获取<p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime <p>更新时间</p>
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
                     * 获取<p>关联数据表名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableName <p>关联数据表名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置<p>关联数据表名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableName <p>关联数据表名称</p>
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
                     * 获取<p>关联数据表Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableId <p>关联数据表Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置<p>关联数据表Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableId <p>关联数据表Id</p>
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
                     * 获取<p>关联数据表负责人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableOwnerName <p>关联数据表负责人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableOwnerName() const;

                    /**
                     * 设置<p>关联数据表负责人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableOwnerName <p>关联数据表负责人</p>
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
                     * 获取<p>执行策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecStrategy <p>执行策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    QualityRuleGroupExecStrategy GetExecStrategy() const;

                    /**
                     * 设置<p>执行策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _execStrategy <p>执行策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecStrategy(const QualityRuleGroupExecStrategy& _execStrategy);

                    /**
                     * 判断参数 ExecStrategy 是否已赋值
                     * @return ExecStrategy 是否已赋值
                     * 
                     */
                    bool ExecStrategyHasBeenSet() const;

                    /**
                     * 获取<p>订阅信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Subscription <p>订阅信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    QualityRuleGroupSubscribe GetSubscription() const;

                    /**
                     * 设置<p>订阅信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subscription <p>订阅信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubscription(const QualityRuleGroupSubscribe& _subscription);

                    /**
                     * 判断参数 Subscription 是否已赋值
                     * @return Subscription 是否已赋值
                     * 
                     */
                    bool SubscriptionHasBeenSet() const;

                    /**
                     * 获取<p>数据库id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseId <p>数据库id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatabaseId() const;

                    /**
                     * 设置<p>数据库id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _databaseId <p>数据库id</p>
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
                     * 获取<p>数据库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseName <p>数据库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置<p>数据库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _databaseName <p>数据库名称</p>
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
                     * 获取<p>模式名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchemaName <p>模式名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置<p>模式名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schemaName <p>模式名称</p>
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
                     * 获取<p>是否有权限</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Permission <p>是否有权限</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetPermission() const;

                    /**
                     * 设置<p>是否有权限</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _permission <p>是否有权限</p>
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
                     * 获取<p>已经配置的规则数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleCount <p>已经配置的规则数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRuleCount() const;

                    /**
                     * 设置<p>已经配置的规则数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleCount <p>已经配置的规则数量</p>
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
                     * 获取<p>监控状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MonitorStatus <p>监控状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetMonitorStatus() const;

                    /**
                     * 设置<p>监控状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _monitorStatus <p>监控状态</p>
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
                     * 获取<p>表负责人UserId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableOwnerUserId <p>表负责人UserId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTableOwnerUserId() const;

                    /**
                     * 设置<p>表负责人UserId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableOwnerUserId <p>表负责人UserId</p>
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
                     * 获取<p>实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId <p>实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId <p>实例ID</p>
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
                     * 获取<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>是否已配置执行策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StrategyConfig <p>是否已配置执行策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetStrategyConfig() const;

                    /**
                     * 设置<p>是否已配置执行策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _strategyConfig <p>是否已配置执行策略</p>
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
                     * 获取<p>是否已配置执行策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubscribeConfig <p>是否已配置执行策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSubscribeConfig() const;

                    /**
                     * 设置<p>是否已配置执行策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subscribeConfig <p>是否已配置执行策略</p>
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
                     * 获取<p>数据源环境：0或者未返回.未定义，1.生产 2.开发</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DsEnvType <p>数据源环境：0或者未返回.未定义，1.生产 2.开发</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDsEnvType() const;

                    /**
                     * 设置<p>数据源环境：0或者未返回.未定义，1.生产 2.开发</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dsEnvType <p>数据源环境：0或者未返回.未定义，1.生产 2.开发</p>
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
                     * 获取<p>EMR集群部署方式：CVM/TKE</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterDeployType <p>EMR集群部署方式：CVM/TKE</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterDeployType() const;

                    /**
                     * 设置<p>EMR集群部署方式：CVM/TKE</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterDeployType <p>EMR集群部署方式：CVM/TKE</p>
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
                     * 获取<p>任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name <p>任务名称</p>
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
                     * 获取<p>执行详情</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecDetail <p>执行详情</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecDetail() const;

                    /**
                     * 设置<p>执行详情</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _execDetail <p>执行详情</p>
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
                     * 获取<p>事中关联任务数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PipelineTaskCount <p>事中关联任务数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPipelineTaskCount() const;

                    /**
                     * 设置<p>事中关联任务数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pipelineTaskCount <p>事中关联任务数量</p>
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
                     * 获取<p>有效规则数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableRuleCount <p>有效规则数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEnableRuleCount() const;

                    /**
                     * 设置<p>有效规则数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableRuleCount <p>有效规则数</p>
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
                     * 获取<p>任务描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description <p>任务描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>任务描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description <p>任务描述</p>
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
                     * 获取<p>监控创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateUserName <p>监控创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateUserName() const;

                    /**
                     * 设置<p>监控创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createUserName <p>监控创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateUserName(const std::string& _createUserName);

                    /**
                     * 判断参数 CreateUserName 是否已赋值
                     * @return CreateUserName 是否已赋值
                     * 
                     */
                    bool CreateUserNameHasBeenSet() const;

                    /**
                     * 获取<p>任务类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupType <p>任务类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupType() const;

                    /**
                     * 设置<p>任务类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupType <p>任务类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupType(const std::string& _groupType);

                    /**
                     * 判断参数 GroupType 是否已赋值
                     * @return GroupType 是否已赋值
                     * 
                     */
                    bool GroupTypeHasBeenSet() const;

                    /**
                     * 获取<p>任务id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AspectTaskId <p>任务id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAspectTaskId() const;

                    /**
                     * 设置<p>任务id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _aspectTaskId <p>任务id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAspectTaskId(const std::string& _aspectTaskId);

                    /**
                     * 判断参数 AspectTaskId 是否已赋值
                     * @return AspectTaskId 是否已赋值
                     * 
                     */
                    bool AspectTaskIdHasBeenSet() const;

                    /**
                     * 获取<p>数据目录名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CatalogName <p>数据目录名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCatalogName() const;

                    /**
                     * 设置<p>数据目录名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _catalogName <p>数据目录名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCatalogName(const std::string& _catalogName);

                    /**
                     * 判断参数 CatalogName 是否已赋值
                     * @return CatalogName 是否已赋值
                     * 
                     */
                    bool CatalogNameHasBeenSet() const;

                    /**
                     * 获取<p>负责人ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InChargeId <p>负责人ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInChargeId() const;

                    /**
                     * 设置<p>负责人ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inChargeId <p>负责人ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInChargeId(const std::string& _inChargeId);

                    /**
                     * 判断参数 InChargeId 是否已赋值
                     * @return InChargeId 是否已赋值
                     * 
                     */
                    bool InChargeIdHasBeenSet() const;

                    /**
                     * 获取<p>负责人名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InChargeName <p>负责人名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInChargeName() const;

                    /**
                     * 设置<p>负责人名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inChargeName <p>负责人名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInChargeName(const std::string& _inChargeName);

                    /**
                     * 判断参数 InChargeName 是否已赋值
                     * @return InChargeName 是否已赋值
                     * 
                     */
                    bool InChargeNameHasBeenSet() const;

                private:

                    /**
                     * <p>规则组Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ruleGroupId;
                    bool m_ruleGroupIdHasBeenSet;

                    /**
                     * <p>数据源Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * <p>数据源名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasourceName;
                    bool m_datasourceNameHasBeenSet;

                    /**
                     * <p>数据源类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_datasourceType;
                    bool m_datasourceTypeHasBeenSet;

                    /**
                     * <p>监控类型 1.未配置, 2.关联生产调度, 3.离线周期检测</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_monitorType;
                    bool m_monitorTypeHasBeenSet;

                    /**
                     * <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>关联数据表名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * <p>关联数据表Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * <p>关联数据表负责人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableOwnerName;
                    bool m_tableOwnerNameHasBeenSet;

                    /**
                     * <p>执行策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    QualityRuleGroupExecStrategy m_execStrategy;
                    bool m_execStrategyHasBeenSet;

                    /**
                     * <p>订阅信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    QualityRuleGroupSubscribe m_subscription;
                    bool m_subscriptionHasBeenSet;

                    /**
                     * <p>数据库id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseId;
                    bool m_databaseIdHasBeenSet;

                    /**
                     * <p>数据库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * <p>模式名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * <p>是否有权限</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_permission;
                    bool m_permissionHasBeenSet;

                    /**
                     * <p>已经配置的规则数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ruleCount;
                    bool m_ruleCountHasBeenSet;

                    /**
                     * <p>监控状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_monitorStatus;
                    bool m_monitorStatusHasBeenSet;

                    /**
                     * <p>表负责人UserId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_tableOwnerUserId;
                    bool m_tableOwnerUserIdHasBeenSet;

                    /**
                     * <p>实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>是否已配置执行策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_strategyConfig;
                    bool m_strategyConfigHasBeenSet;

                    /**
                     * <p>是否已配置执行策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_subscribeConfig;
                    bool m_subscribeConfigHasBeenSet;

                    /**
                     * <p>数据源环境：0或者未返回.未定义，1.生产 2.开发</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_dsEnvType;
                    bool m_dsEnvTypeHasBeenSet;

                    /**
                     * <p>EMR集群部署方式：CVM/TKE</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterDeployType;
                    bool m_clusterDeployTypeHasBeenSet;

                    /**
                     * <p>任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>执行详情</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_execDetail;
                    bool m_execDetailHasBeenSet;

                    /**
                     * <p>事中关联任务数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pipelineTaskCount;
                    bool m_pipelineTaskCountHasBeenSet;

                    /**
                     * <p>有效规则数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_enableRuleCount;
                    bool m_enableRuleCountHasBeenSet;

                    /**
                     * <p>任务描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>监控创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createUserName;
                    bool m_createUserNameHasBeenSet;

                    /**
                     * <p>任务类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                    /**
                     * <p>任务id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_aspectTaskId;
                    bool m_aspectTaskIdHasBeenSet;

                    /**
                     * <p>数据目录名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_catalogName;
                    bool m_catalogNameHasBeenSet;

                    /**
                     * <p>负责人ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inChargeId;
                    bool m_inChargeIdHasBeenSet;

                    /**
                     * <p>负责人名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inChargeName;
                    bool m_inChargeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_QUALITYRULEGROUP_H_
