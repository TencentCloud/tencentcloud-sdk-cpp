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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_TOPICRULE_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_TOPICRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 单topic和自定义topic的描述。投递到单topic时，该数组的最后一项会被视为默认分区策略，所有未匹配到的数据都会按该策略投递，默认策略只支持 投递至partition0、按表名、表名+主键三种。
                */
                class TopicRule : public AbstractModel
                {
                public:
                    TopicRule();
                    ~TopicRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取topic名。单topic时，所有的TopicName必须相同
                     * @return TopicName topic名。单topic时，所有的TopicName必须相同
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置topic名。单topic时，所有的TopicName必须相同
                     * @param _topicName topic名。单topic时，所有的TopicName必须相同
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取topic分区策略，自定义topic时支持：Random（随机投递），集中投递到单Topic时支持：AllInPartitionZero（全部投递至partition0）、PartitionByTable(按表名分区)、PartitionByTableAndKey(按表名加主键分区)、PartitionByCols(按列分区)
                     * @return PartitionType topic分区策略，自定义topic时支持：Random（随机投递），集中投递到单Topic时支持：AllInPartitionZero（全部投递至partition0）、PartitionByTable(按表名分区)、PartitionByTableAndKey(按表名加主键分区)、PartitionByCols(按列分区)
                     * 
                     */
                    std::string GetPartitionType() const;

                    /**
                     * 设置topic分区策略，自定义topic时支持：Random（随机投递），集中投递到单Topic时支持：AllInPartitionZero（全部投递至partition0）、PartitionByTable(按表名分区)、PartitionByTableAndKey(按表名加主键分区)、PartitionByCols(按列分区)
                     * @param _partitionType topic分区策略，自定义topic时支持：Random（随机投递），集中投递到单Topic时支持：AllInPartitionZero（全部投递至partition0）、PartitionByTable(按表名分区)、PartitionByTableAndKey(按表名加主键分区)、PartitionByCols(按列分区)
                     * 
                     */
                    void SetPartitionType(const std::string& _partitionType);

                    /**
                     * 判断参数 PartitionType 是否已赋值
                     * @return PartitionType 是否已赋值
                     * 
                     */
                    bool PartitionTypeHasBeenSet() const;

                    /**
                     * 获取库名匹配规则，如Regular（正则匹配）, Default(不符合匹配规则的剩余库)，数组中最后一项必须为‘Default’
                     * @return DbMatchMode 库名匹配规则，如Regular（正则匹配）, Default(不符合匹配规则的剩余库)，数组中最后一项必须为‘Default’
                     * 
                     */
                    std::string GetDbMatchMode() const;

                    /**
                     * 设置库名匹配规则，如Regular（正则匹配）, Default(不符合匹配规则的剩余库)，数组中最后一项必须为‘Default’
                     * @param _dbMatchMode 库名匹配规则，如Regular（正则匹配）, Default(不符合匹配规则的剩余库)，数组中最后一项必须为‘Default’
                     * 
                     */
                    void SetDbMatchMode(const std::string& _dbMatchMode);

                    /**
                     * 判断参数 DbMatchMode 是否已赋值
                     * @return DbMatchMode 是否已赋值
                     * 
                     */
                    bool DbMatchModeHasBeenSet() const;

                    /**
                     * 获取库名，DbMatchMode=Regular时生效
                     * @return DbName 库名，DbMatchMode=Regular时生效
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置库名，DbMatchMode=Regular时生效
                     * @param _dbName 库名，DbMatchMode=Regular时生效
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取表名匹配规则，如Regular（正则匹配）, Default(不符合匹配规则的剩余表)，数组中最后一项必须为‘Default’
                     * @return TableMatchMode 表名匹配规则，如Regular（正则匹配）, Default(不符合匹配规则的剩余表)，数组中最后一项必须为‘Default’
                     * 
                     */
                    std::string GetTableMatchMode() const;

                    /**
                     * 设置表名匹配规则，如Regular（正则匹配）, Default(不符合匹配规则的剩余表)，数组中最后一项必须为‘Default’
                     * @param _tableMatchMode 表名匹配规则，如Regular（正则匹配）, Default(不符合匹配规则的剩余表)，数组中最后一项必须为‘Default’
                     * 
                     */
                    void SetTableMatchMode(const std::string& _tableMatchMode);

                    /**
                     * 判断参数 TableMatchMode 是否已赋值
                     * @return TableMatchMode 是否已赋值
                     * 
                     */
                    bool TableMatchModeHasBeenSet() const;

                    /**
                     * 获取表名，仅TableMatchMode=Regular时生效
                     * @return TableName 表名，仅TableMatchMode=Regular时生效
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表名，仅TableMatchMode=Regular时生效
                     * @param _tableName 表名，仅TableMatchMode=Regular时生效
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
                     * 获取按列分区时需要选择配置列名，可以选择多列
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Columns 按列分区时需要选择配置列名，可以选择多列
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetColumns() const;

                    /**
                     * 设置按列分区时需要选择配置列名，可以选择多列
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columns 按列分区时需要选择配置列名，可以选择多列
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColumns(const std::vector<std::string>& _columns);

                    /**
                     * 判断参数 Columns 是否已赋值
                     * @return Columns 是否已赋值
                     * 
                     */
                    bool ColumnsHasBeenSet() const;

                private:

                    /**
                     * topic名。单topic时，所有的TopicName必须相同
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * topic分区策略，自定义topic时支持：Random（随机投递），集中投递到单Topic时支持：AllInPartitionZero（全部投递至partition0）、PartitionByTable(按表名分区)、PartitionByTableAndKey(按表名加主键分区)、PartitionByCols(按列分区)
                     */
                    std::string m_partitionType;
                    bool m_partitionTypeHasBeenSet;

                    /**
                     * 库名匹配规则，如Regular（正则匹配）, Default(不符合匹配规则的剩余库)，数组中最后一项必须为‘Default’
                     */
                    std::string m_dbMatchMode;
                    bool m_dbMatchModeHasBeenSet;

                    /**
                     * 库名，DbMatchMode=Regular时生效
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * 表名匹配规则，如Regular（正则匹配）, Default(不符合匹配规则的剩余表)，数组中最后一项必须为‘Default’
                     */
                    std::string m_tableMatchMode;
                    bool m_tableMatchModeHasBeenSet;

                    /**
                     * 表名，仅TableMatchMode=Regular时生效
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 按列分区时需要选择配置列名，可以选择多列
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_columns;
                    bool m_columnsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_TOPICRULE_H_
