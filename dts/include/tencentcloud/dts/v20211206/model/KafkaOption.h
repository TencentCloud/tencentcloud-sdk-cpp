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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_KAFKAOPTION_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_KAFKAOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/TopicRule.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 目标端为kafka时添加的同步选项字段
                */
                class KafkaOption : public AbstractModel
                {
                public:
                    KafkaOption();
                    ~KafkaOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取投递到kafka的数据类型，如Avro,Json,canal-pb,canal-json
                     * @return DataType 投递到kafka的数据类型，如Avro,Json,canal-pb,canal-json
                     * 
                     */
                    std::string GetDataType() const;

                    /**
                     * 设置投递到kafka的数据类型，如Avro,Json,canal-pb,canal-json
                     * @param _dataType 投递到kafka的数据类型，如Avro,Json,canal-pb,canal-json
                     * 
                     */
                    void SetDataType(const std::string& _dataType);

                    /**
                     * 判断参数 DataType 是否已赋值
                     * @return DataType 是否已赋值
                     * 
                     */
                    bool DataTypeHasBeenSet() const;

                    /**
                     * 获取同步topic策略，如Single（集中投递到单topic）,Multi (自定义topic名称)
                     * @return TopicType 同步topic策略，如Single（集中投递到单topic）,Multi (自定义topic名称)
                     * 
                     */
                    std::string GetTopicType() const;

                    /**
                     * 设置同步topic策略，如Single（集中投递到单topic）,Multi (自定义topic名称)
                     * @param _topicType 同步topic策略，如Single（集中投递到单topic）,Multi (自定义topic名称)
                     * 
                     */
                    void SetTopicType(const std::string& _topicType);

                    /**
                     * 判断参数 TopicType 是否已赋值
                     * @return TopicType 是否已赋值
                     * 
                     */
                    bool TopicTypeHasBeenSet() const;

                    /**
                     * 获取用于存储ddl的topic
                     * @return DDLTopicName 用于存储ddl的topic
                     * 
                     */
                    std::string GetDDLTopicName() const;

                    /**
                     * 设置用于存储ddl的topic
                     * @param _dDLTopicName 用于存储ddl的topic
                     * 
                     */
                    void SetDDLTopicName(const std::string& _dDLTopicName);

                    /**
                     * 判断参数 DDLTopicName 是否已赋值
                     * @return DDLTopicName 是否已赋值
                     * 
                     */
                    bool DDLTopicNameHasBeenSet() const;

                    /**
                     * 获取单topic和自定义topic的描述
                     * @return TopicRules 单topic和自定义topic的描述
                     * 
                     */
                    std::vector<TopicRule> GetTopicRules() const;

                    /**
                     * 设置单topic和自定义topic的描述
                     * @param _topicRules 单topic和自定义topic的描述
                     * 
                     */
                    void SetTopicRules(const std::vector<TopicRule>& _topicRules);

                    /**
                     * 判断参数 TopicRules 是否已赋值
                     * @return TopicRules 是否已赋值
                     * 
                     */
                    bool TopicRulesHasBeenSet() const;

                private:

                    /**
                     * 投递到kafka的数据类型，如Avro,Json,canal-pb,canal-json
                     */
                    std::string m_dataType;
                    bool m_dataTypeHasBeenSet;

                    /**
                     * 同步topic策略，如Single（集中投递到单topic）,Multi (自定义topic名称)
                     */
                    std::string m_topicType;
                    bool m_topicTypeHasBeenSet;

                    /**
                     * 用于存储ddl的topic
                     */
                    std::string m_dDLTopicName;
                    bool m_dDLTopicNameHasBeenSet;

                    /**
                     * 单topic和自定义topic的描述
                     */
                    std::vector<TopicRule> m_topicRules;
                    bool m_topicRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_KAFKAOPTION_H_
