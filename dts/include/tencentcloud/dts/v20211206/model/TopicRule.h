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
                * 单topic和自定义topic的描述
                */
                class TopicRule : public AbstractModel
                {
                public:
                    TopicRule();
                    ~TopicRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取topic名
                     * @return TopicName topic名
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置topic名
                     * @param _topicName topic名
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
                     * 获取topic分区策略，如 自定义topic：Random（随机投递），集中投递到单Topic：AllInPartitionZero（全部投递至partition0）、PartitionByTable(按表名分区)、PartitionByTableAndKey(按表名加主键分区)
                     * @return PartitionType topic分区策略，如 自定义topic：Random（随机投递），集中投递到单Topic：AllInPartitionZero（全部投递至partition0）、PartitionByTable(按表名分区)、PartitionByTableAndKey(按表名加主键分区)
                     * 
                     */
                    std::string GetPartitionType() const;

                    /**
                     * 设置topic分区策略，如 自定义topic：Random（随机投递），集中投递到单Topic：AllInPartitionZero（全部投递至partition0）、PartitionByTable(按表名分区)、PartitionByTableAndKey(按表名加主键分区)
                     * @param _partitionType topic分区策略，如 自定义topic：Random（随机投递），集中投递到单Topic：AllInPartitionZero（全部投递至partition0）、PartitionByTable(按表名分区)、PartitionByTableAndKey(按表名加主键分区)
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
                     * 获取库名匹配规则，仅“自定义topic”生效，如Regular（正则匹配）, Default(不符合匹配规则的剩余库)，数组中必须有一项为‘Default’
                     * @return DbMatchMode 库名匹配规则，仅“自定义topic”生效，如Regular（正则匹配）, Default(不符合匹配规则的剩余库)，数组中必须有一项为‘Default’
                     * 
                     */
                    std::string GetDbMatchMode() const;

                    /**
                     * 设置库名匹配规则，仅“自定义topic”生效，如Regular（正则匹配）, Default(不符合匹配规则的剩余库)，数组中必须有一项为‘Default’
                     * @param _dbMatchMode 库名匹配规则，仅“自定义topic”生效，如Regular（正则匹配）, Default(不符合匹配规则的剩余库)，数组中必须有一项为‘Default’
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
                     * 获取库名，仅“自定义topic”时，DbMatchMode=Regular生效
                     * @return DbName 库名，仅“自定义topic”时，DbMatchMode=Regular生效
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置库名，仅“自定义topic”时，DbMatchMode=Regular生效
                     * @param _dbName 库名，仅“自定义topic”时，DbMatchMode=Regular生效
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
                     * 获取表名匹配规则，仅“自定义topic”生效，如Regular（正则匹配）, Default(不符合匹配规则的剩余表)，数组中必须有一项为‘Default’
                     * @return TableMatchMode 表名匹配规则，仅“自定义topic”生效，如Regular（正则匹配）, Default(不符合匹配规则的剩余表)，数组中必须有一项为‘Default’
                     * 
                     */
                    std::string GetTableMatchMode() const;

                    /**
                     * 设置表名匹配规则，仅“自定义topic”生效，如Regular（正则匹配）, Default(不符合匹配规则的剩余表)，数组中必须有一项为‘Default’
                     * @param _tableMatchMode 表名匹配规则，仅“自定义topic”生效，如Regular（正则匹配）, Default(不符合匹配规则的剩余表)，数组中必须有一项为‘Default’
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
                     * 获取表名，仅“自定义topic”时，TableMatchMode=Regular生效
                     * @return TableName 表名，仅“自定义topic”时，TableMatchMode=Regular生效
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表名，仅“自定义topic”时，TableMatchMode=Regular生效
                     * @param _tableName 表名，仅“自定义topic”时，TableMatchMode=Regular生效
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                private:

                    /**
                     * topic名
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * topic分区策略，如 自定义topic：Random（随机投递），集中投递到单Topic：AllInPartitionZero（全部投递至partition0）、PartitionByTable(按表名分区)、PartitionByTableAndKey(按表名加主键分区)
                     */
                    std::string m_partitionType;
                    bool m_partitionTypeHasBeenSet;

                    /**
                     * 库名匹配规则，仅“自定义topic”生效，如Regular（正则匹配）, Default(不符合匹配规则的剩余库)，数组中必须有一项为‘Default’
                     */
                    std::string m_dbMatchMode;
                    bool m_dbMatchModeHasBeenSet;

                    /**
                     * 库名，仅“自定义topic”时，DbMatchMode=Regular生效
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * 表名匹配规则，仅“自定义topic”生效，如Regular（正则匹配）, Default(不符合匹配规则的剩余表)，数组中必须有一项为‘Default’
                     */
                    std::string m_tableMatchMode;
                    bool m_tableMatchModeHasBeenSet;

                    /**
                     * 表名，仅“自定义topic”时，TableMatchMode=Regular生效
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_TOPICRULE_H_
