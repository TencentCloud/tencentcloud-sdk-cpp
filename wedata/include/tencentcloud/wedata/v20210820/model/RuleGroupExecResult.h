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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEGROUPEXECRESULT_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEGROUPEXECRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/RuleExecResult.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 规则组执行结果
                */
                class RuleGroupExecResult : public AbstractModel
                {
                public:
                    RuleGroupExecResult();
                    ~RuleGroupExecResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则组执行ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleGroupExecId 规则组执行ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRuleGroupExecId() const;

                    /**
                     * 设置规则组执行ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleGroupExecId 规则组执行ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleGroupExecId(const uint64_t& _ruleGroupExecId);

                    /**
                     * 判断参数 RuleGroupExecId 是否已赋值
                     * @return RuleGroupExecId 是否已赋值
                     * 
                     */
                    bool RuleGroupExecIdHasBeenSet() const;

                    /**
                     * 获取规则组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleGroupId 规则组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRuleGroupId() const;

                    /**
                     * 设置规则组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleGroupId 规则组ID
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
                     * 获取执行触发类型（1：手动触发， 2：调度事中触发，3：周期调度触发）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerType 执行触发类型（1：手动触发， 2：调度事中触发，3：周期调度触发）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTriggerType() const;

                    /**
                     * 设置执行触发类型（1：手动触发， 2：调度事中触发，3：周期调度触发）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerType 执行触发类型（1：手动触发， 2：调度事中触发，3：周期调度触发）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTriggerType(const uint64_t& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取执行时间 yyyy-MM-dd HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecTime 执行时间 yyyy-MM-dd HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecTime() const;

                    /**
                     * 设置执行时间 yyyy-MM-dd HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _execTime 执行时间 yyyy-MM-dd HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecTime(const std::string& _execTime);

                    /**
                     * 判断参数 ExecTime 是否已赋值
                     * @return ExecTime 是否已赋值
                     * 
                     */
                    bool ExecTimeHasBeenSet() const;

                    /**
                     * 获取执行状态（1.已提交 2.检测中 3.正常 4.异常）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 执行状态（1.已提交 2.检测中 3.正常 4.异常）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置执行状态（1.已提交 2.检测中 3.正常 4.异常）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 执行状态（1.已提交 2.检测中 3.正常 4.异常）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取异常规则数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmRuleCount 异常规则数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAlarmRuleCount() const;

                    /**
                     * 设置异常规则数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmRuleCount 异常规则数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlarmRuleCount(const uint64_t& _alarmRuleCount);

                    /**
                     * 判断参数 AlarmRuleCount 是否已赋值
                     * @return AlarmRuleCount 是否已赋值
                     * 
                     */
                    bool AlarmRuleCountHasBeenSet() const;

                    /**
                     * 获取总规则数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalRuleCount 总规则数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotalRuleCount() const;

                    /**
                     * 设置总规则数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalRuleCount 总规则数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalRuleCount(const uint64_t& _totalRuleCount);

                    /**
                     * 判断参数 TotalRuleCount 是否已赋值
                     * @return TotalRuleCount 是否已赋值
                     * 
                     */
                    bool TotalRuleCountHasBeenSet() const;

                    /**
                     * 获取源表负责人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableOwnerName 源表负责人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableOwnerName() const;

                    /**
                     * 设置源表负责人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableOwnerName 源表负责人
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
                     * 获取源表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableName 源表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置源表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableName 源表名称
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
                     * 获取表id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableId 表id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置表id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableId 表id
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
                     * 获取数据源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceId 数据源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置数据源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceId 数据源ID
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
                     * 获取有无权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Permission 有无权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetPermission() const;

                    /**
                     * 设置有无权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _permission 有无权限
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
                     * 获取执行详情，调度计划或者关联生产任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecDetail 执行详情，调度计划或者关联生产任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecDetail() const;

                    /**
                     * 设置执行详情，调度计划或者关联生产任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _execDetail 执行详情，调度计划或者关联生产任务ID
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
                     * 获取实际执行引擎
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineType 实际执行引擎
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置实际执行引擎
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engineType 实际执行引擎
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEngineType(const std::string& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     * 
                     */
                    bool EngineTypeHasBeenSet() const;

                    /**
                     * 获取规则执行结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleExecResultVOList 规则执行结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RuleExecResult> GetRuleExecResultVOList() const;

                    /**
                     * 设置规则执行结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleExecResultVOList 规则执行结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleExecResultVOList(const std::vector<RuleExecResult>& _ruleExecResultVOList);

                    /**
                     * 判断参数 RuleExecResultVOList 是否已赋值
                     * @return RuleExecResultVOList 是否已赋值
                     * 
                     */
                    bool RuleExecResultVOListHasBeenSet() const;

                private:

                    /**
                     * 规则组执行ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ruleGroupExecId;
                    bool m_ruleGroupExecIdHasBeenSet;

                    /**
                     * 规则组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ruleGroupId;
                    bool m_ruleGroupIdHasBeenSet;

                    /**
                     * 执行触发类型（1：手动触发， 2：调度事中触发，3：周期调度触发）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * 执行时间 yyyy-MM-dd HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_execTime;
                    bool m_execTimeHasBeenSet;

                    /**
                     * 执行状态（1.已提交 2.检测中 3.正常 4.异常）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 异常规则数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_alarmRuleCount;
                    bool m_alarmRuleCountHasBeenSet;

                    /**
                     * 总规则数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalRuleCount;
                    bool m_totalRuleCountHasBeenSet;

                    /**
                     * 源表负责人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableOwnerName;
                    bool m_tableOwnerNameHasBeenSet;

                    /**
                     * 源表名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 表id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * 数据库id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseId;
                    bool m_databaseIdHasBeenSet;

                    /**
                     * 数据源ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * 有无权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_permission;
                    bool m_permissionHasBeenSet;

                    /**
                     * 执行详情，调度计划或者关联生产任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_execDetail;
                    bool m_execDetailHasBeenSet;

                    /**
                     * 实际执行引擎
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                    /**
                     * 规则执行结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RuleExecResult> m_ruleExecResultVOList;
                    bool m_ruleExecResultVOListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEGROUPEXECRESULT_H_
