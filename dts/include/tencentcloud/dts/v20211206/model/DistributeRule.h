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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DISTRIBUTERULE_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DISTRIBUTERULE_H_

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
                * 订阅任务的kafka分区规则。符合库名和表名正则表达式的数据将按照RuleType计算该条数据将被投递的kafka分区。如果配置了多个规则，将按照配置的顺序，第一条命中的规则生效。
                */
                class DistributeRule : public AbstractModel
                {
                public:
                    DistributeRule();
                    ~DistributeRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则类型。非mongo产品的枚举值为: table-按表名分区，pk-按表名+主键分区，cols-按列名分区。mongo的枚举值为：collection-按集合名分区、collectionAndObjectId-按集合+主键分区。
                     * @return RuleType 规则类型。非mongo产品的枚举值为: table-按表名分区，pk-按表名+主键分区，cols-按列名分区。mongo的枚举值为：collection-按集合名分区、collectionAndObjectId-按集合+主键分区。
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置规则类型。非mongo产品的枚举值为: table-按表名分区，pk-按表名+主键分区，cols-按列名分区。mongo的枚举值为：collection-按集合名分区、collectionAndObjectId-按集合+主键分区。
                     * @param _ruleType 规则类型。非mongo产品的枚举值为: table-按表名分区，pk-按表名+主键分区，cols-按列名分区。mongo的枚举值为：collection-按集合名分区、collectionAndObjectId-按集合+主键分区。
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取库名匹配规则，请填写正则表达式
                     * @return DbPattern 库名匹配规则，请填写正则表达式
                     * 
                     */
                    std::string GetDbPattern() const;

                    /**
                     * 设置库名匹配规则，请填写正则表达式
                     * @param _dbPattern 库名匹配规则，请填写正则表达式
                     * 
                     */
                    void SetDbPattern(const std::string& _dbPattern);

                    /**
                     * 判断参数 DbPattern 是否已赋值
                     * @return DbPattern 是否已赋值
                     * 
                     */
                    bool DbPatternHasBeenSet() const;

                    /**
                     * 获取表名匹配规则，如果 DatabaseType 为 mongodb，则匹配集合名
                     * @return TablePattern 表名匹配规则，如果 DatabaseType 为 mongodb，则匹配集合名
                     * 
                     */
                    std::string GetTablePattern() const;

                    /**
                     * 设置表名匹配规则，如果 DatabaseType 为 mongodb，则匹配集合名
                     * @param _tablePattern 表名匹配规则，如果 DatabaseType 为 mongodb，则匹配集合名
                     * 
                     */
                    void SetTablePattern(const std::string& _tablePattern);

                    /**
                     * 判断参数 TablePattern 是否已赋值
                     * @return TablePattern 是否已赋值
                     * 
                     */
                    bool TablePatternHasBeenSet() const;

                    /**
                     * 获取列名。如果 RuleType 为 cols，此项必填。订阅任务会用该列的值计算分区。mongo没有按列分区，因此也不用传这个字段。
                     * @return Columns 列名。如果 RuleType 为 cols，此项必填。订阅任务会用该列的值计算分区。mongo没有按列分区，因此也不用传这个字段。
                     * 
                     */
                    std::vector<std::string> GetColumns() const;

                    /**
                     * 设置列名。如果 RuleType 为 cols，此项必填。订阅任务会用该列的值计算分区。mongo没有按列分区，因此也不用传这个字段。
                     * @param _columns 列名。如果 RuleType 为 cols，此项必填。订阅任务会用该列的值计算分区。mongo没有按列分区，因此也不用传这个字段。
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
                     * 规则类型。非mongo产品的枚举值为: table-按表名分区，pk-按表名+主键分区，cols-按列名分区。mongo的枚举值为：collection-按集合名分区、collectionAndObjectId-按集合+主键分区。
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 库名匹配规则，请填写正则表达式
                     */
                    std::string m_dbPattern;
                    bool m_dbPatternHasBeenSet;

                    /**
                     * 表名匹配规则，如果 DatabaseType 为 mongodb，则匹配集合名
                     */
                    std::string m_tablePattern;
                    bool m_tablePatternHasBeenSet;

                    /**
                     * 列名。如果 RuleType 为 cols，此项必填。订阅任务会用该列的值计算分区。mongo没有按列分区，因此也不用传这个字段。
                     */
                    std::vector<std::string> m_columns;
                    bool m_columnsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DISTRIBUTERULE_H_
