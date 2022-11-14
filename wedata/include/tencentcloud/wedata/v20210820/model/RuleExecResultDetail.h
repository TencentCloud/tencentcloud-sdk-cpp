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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEEXECRESULTDETAIL_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEEXECRESULTDETAIL_H_

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
                * 规则执行结果详情
                */
                class RuleExecResultDetail : public AbstractModel
                {
                public:
                    RuleExecResultDetail();
                    ~RuleExecResultDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceId 数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetDatasourceId() const;

                    /**
                     * 设置数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DatasourceId 数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDatasourceId(const uint64_t& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     */
                    bool DatasourceIdHasBeenSet() const;

                    /**
                     * 获取数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceName 数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDatasourceName() const;

                    /**
                     * 设置数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DatasourceName 数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDatasourceName(const std::string& _datasourceName);

                    /**
                     * 判断参数 DatasourceName 是否已赋值
                     * @return DatasourceName 是否已赋值
                     */
                    bool DatasourceNameHasBeenSet() const;

                    /**
                     * 获取数据库guid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseId 数据库guid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDatabaseId() const;

                    /**
                     * 设置数据库guid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DatabaseId 数据库guid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDatabaseId(const std::string& _databaseId);

                    /**
                     * 判断参数 DatabaseId 是否已赋值
                     * @return DatabaseId 是否已赋值
                     */
                    bool DatabaseIdHasBeenSet() const;

                    /**
                     * 获取数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseName 数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DatabaseName 数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceId 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取表guid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableId 表guid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置表guid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TableId 表guid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTableId(const std::string& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     */
                    bool TableIdHasBeenSet() const;

                    /**
                     * 获取表名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableName 表名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TableName 表名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取规则执行记录
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleExecResult 规则执行记录
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RuleExecResult GetRuleExecResult() const;

                    /**
                     * 设置规则执行记录
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RuleExecResult 规则执行记录
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRuleExecResult(const RuleExecResult& _ruleExecResult);

                    /**
                     * 判断参数 RuleExecResult 是否已赋值
                     * @return RuleExecResult 是否已赋值
                     */
                    bool RuleExecResultHasBeenSet() const;

                    /**
                     * 获取表负责人userId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableOwnerUserId 表负责人userId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetTableOwnerUserId() const;

                    /**
                     * 设置表负责人userId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TableOwnerUserId 表负责人userId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTableOwnerUserId(const uint64_t& _tableOwnerUserId);

                    /**
                     * 判断参数 TableOwnerUserId 是否已赋值
                     * @return TableOwnerUserId 是否已赋值
                     */
                    bool TableOwnerUserIdHasBeenSet() const;

                private:

                    /**
                     * 数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * 数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasourceName;
                    bool m_datasourceNameHasBeenSet;

                    /**
                     * 数据库guid
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
                     * 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 表guid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * 表名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 规则执行记录
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RuleExecResult m_ruleExecResult;
                    bool m_ruleExecResultHasBeenSet;

                    /**
                     * 表负责人userId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_tableOwnerUserId;
                    bool m_tableOwnerUserIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEEXECRESULTDETAIL_H_
