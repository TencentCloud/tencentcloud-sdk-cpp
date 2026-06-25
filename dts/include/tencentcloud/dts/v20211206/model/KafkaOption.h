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
#include <tencentcloud/dts/v20211206/model/KeyValuePairOption.h>


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
                     * 获取<p>投递到kafka的数据类型，如Avro,Json,canal-pb,canal-json,debezium</p>
                     * @return DataType <p>投递到kafka的数据类型，如Avro,Json,canal-pb,canal-json,debezium</p>
                     * 
                     */
                    std::string GetDataType() const;

                    /**
                     * 设置<p>投递到kafka的数据类型，如Avro,Json,canal-pb,canal-json,debezium</p>
                     * @param _dataType <p>投递到kafka的数据类型，如Avro,Json,canal-pb,canal-json,debezium</p>
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
                     * 获取<p>同步topic策略，如Single（集中投递到单topic）,Multi (自定义topic名称)</p>
                     * @return TopicType <p>同步topic策略，如Single（集中投递到单topic）,Multi (自定义topic名称)</p>
                     * 
                     */
                    std::string GetTopicType() const;

                    /**
                     * 设置<p>同步topic策略，如Single（集中投递到单topic）,Multi (自定义topic名称)</p>
                     * @param _topicType <p>同步topic策略，如Single（集中投递到单topic）,Multi (自定义topic名称)</p>
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
                     * 获取<p>用于存储ddl的topic</p>
                     * @return DDLTopicName <p>用于存储ddl的topic</p>
                     * 
                     */
                    std::string GetDDLTopicName() const;

                    /**
                     * 设置<p>用于存储ddl的topic</p>
                     * @param _dDLTopicName <p>用于存储ddl的topic</p>
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
                     * 获取<p>单topic和自定义topic的描述</p>
                     * @return TopicRules <p>单topic和自定义topic的描述</p>
                     * 
                     */
                    std::vector<TopicRule> GetTopicRules() const;

                    /**
                     * 设置<p>单topic和自定义topic的描述</p>
                     * @param _topicRules <p>单topic和自定义topic的描述</p>
                     * 
                     */
                    void SetTopicRules(const std::vector<TopicRule>& _topicRules);

                    /**
                     * 判断参数 TopicRules 是否已赋值
                     * @return TopicRules 是否已赋值
                     * 
                     */
                    bool TopicRulesHasBeenSet() const;

                    /**
                     * 获取<p>其他附加信息，对于特定数据类型可设置额外参数。比如针对Canal兼容的功能支持：&quot;canalOfficialFormat&quot;:&quot;on&quot;表示打开Canal兼容功能，默认不带。针对大消息跳过的功能支持：&quot;skipLargeMessage&quot;:&quot;on&quot;表示开启跳过大消息，默认不带；开启时需同时设置&quot;maxMessageSizeMB&quot;为1~100的正整数字符串，表示最大消息大小阈值（MB），超过该大小的消息将被跳过，默认不带。</p>
                     * @return DataOption <p>其他附加信息，对于特定数据类型可设置额外参数。比如针对Canal兼容的功能支持：&quot;canalOfficialFormat&quot;:&quot;on&quot;表示打开Canal兼容功能，默认不带。针对大消息跳过的功能支持：&quot;skipLargeMessage&quot;:&quot;on&quot;表示开启跳过大消息，默认不带；开启时需同时设置&quot;maxMessageSizeMB&quot;为1~100的正整数字符串，表示最大消息大小阈值（MB），超过该大小的消息将被跳过，默认不带。</p>
                     * 
                     */
                    std::vector<KeyValuePairOption> GetDataOption() const;

                    /**
                     * 设置<p>其他附加信息，对于特定数据类型可设置额外参数。比如针对Canal兼容的功能支持：&quot;canalOfficialFormat&quot;:&quot;on&quot;表示打开Canal兼容功能，默认不带。针对大消息跳过的功能支持：&quot;skipLargeMessage&quot;:&quot;on&quot;表示开启跳过大消息，默认不带；开启时需同时设置&quot;maxMessageSizeMB&quot;为1~100的正整数字符串，表示最大消息大小阈值（MB），超过该大小的消息将被跳过，默认不带。</p>
                     * @param _dataOption <p>其他附加信息，对于特定数据类型可设置额外参数。比如针对Canal兼容的功能支持：&quot;canalOfficialFormat&quot;:&quot;on&quot;表示打开Canal兼容功能，默认不带。针对大消息跳过的功能支持：&quot;skipLargeMessage&quot;:&quot;on&quot;表示开启跳过大消息，默认不带；开启时需同时设置&quot;maxMessageSizeMB&quot;为1~100的正整数字符串，表示最大消息大小阈值（MB），超过该大小的消息将被跳过，默认不带。</p>
                     * 
                     */
                    void SetDataOption(const std::vector<KeyValuePairOption>& _dataOption);

                    /**
                     * 判断参数 DataOption 是否已赋值
                     * @return DataOption 是否已赋值
                     * 
                     */
                    bool DataOptionHasBeenSet() const;

                private:

                    /**
                     * <p>投递到kafka的数据类型，如Avro,Json,canal-pb,canal-json,debezium</p>
                     */
                    std::string m_dataType;
                    bool m_dataTypeHasBeenSet;

                    /**
                     * <p>同步topic策略，如Single（集中投递到单topic）,Multi (自定义topic名称)</p>
                     */
                    std::string m_topicType;
                    bool m_topicTypeHasBeenSet;

                    /**
                     * <p>用于存储ddl的topic</p>
                     */
                    std::string m_dDLTopicName;
                    bool m_dDLTopicNameHasBeenSet;

                    /**
                     * <p>单topic和自定义topic的描述</p>
                     */
                    std::vector<TopicRule> m_topicRules;
                    bool m_topicRulesHasBeenSet;

                    /**
                     * <p>其他附加信息，对于特定数据类型可设置额外参数。比如针对Canal兼容的功能支持：&quot;canalOfficialFormat&quot;:&quot;on&quot;表示打开Canal兼容功能，默认不带。针对大消息跳过的功能支持：&quot;skipLargeMessage&quot;:&quot;on&quot;表示开启跳过大消息，默认不带；开启时需同时设置&quot;maxMessageSizeMB&quot;为1~100的正整数字符串，表示最大消息大小阈值（MB），超过该大小的消息将被跳过，默认不带。</p>
                     */
                    std::vector<KeyValuePairOption> m_dataOption;
                    bool m_dataOptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_KAFKAOPTION_H_
