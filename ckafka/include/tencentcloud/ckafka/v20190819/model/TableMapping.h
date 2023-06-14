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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_TABLEMAPPING_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_TABLEMAPPING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Table、Topic路由
                */
                class TableMapping : public AbstractModel
                {
                public:
                    TableMapping();
                    ~TableMapping() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取库名
                     * @return Database 库名
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置库名
                     * @param _database 库名
                     * 
                     */
                    void SetDatabase(const std::string& _database);

                    /**
                     * 判断参数 Database 是否已赋值
                     * @return Database 是否已赋值
                     * 
                     */
                    bool DatabaseHasBeenSet() const;

                    /**
                     * 获取表名，多个表,（逗号）隔开
                     * @return Table 表名，多个表,（逗号）隔开
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 设置表名，多个表,（逗号）隔开
                     * @param _table 表名，多个表,（逗号）隔开
                     * 
                     */
                    void SetTable(const std::string& _table);

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     * 
                     */
                    bool TableHasBeenSet() const;

                    /**
                     * 获取Topic名称
                     * @return Topic Topic名称
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置Topic名称
                     * @param _topic Topic名称
                     * 
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取Topic ID
                     * @return TopicId Topic ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Topic ID
                     * @param _topicId Topic ID
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                private:

                    /**
                     * 库名
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * 表名，多个表,（逗号）隔开
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * Topic名称
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * Topic ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_TABLEMAPPING_H_
