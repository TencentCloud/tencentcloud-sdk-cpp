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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DELIVERYKAFKAINFO_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DELIVERYKAFKAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * kafka投递的topic和path的信息
                */
                class DeliveryKafkaInfo : public AbstractModel
                {
                public:
                    DeliveryKafkaInfo();
                    ~DeliveryKafkaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取投递kafka的topic
                     * @return Topic 投递kafka的topic
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置投递kafka的topic
                     * @param _topic 投递kafka的topic
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
                     * 获取采集日志的path
                     * @return Path 采集日志的path
                     * 
                     */
                    std::vector<std::string> GetPath() const;

                    /**
                     * 设置采集日志的path
                     * @param _path 采集日志的path
                     * 
                     */
                    void SetPath(const std::vector<std::string>& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取default，默认换行符分行
time，按时间分行
custom, 选了custom那么CustomRule就要填入具体的自定义值
                     * @return LineRule default，默认换行符分行
time，按时间分行
custom, 选了custom那么CustomRule就要填入具体的自定义值
                     * 
                     */
                    std::string GetLineRule() const;

                    /**
                     * 设置default，默认换行符分行
time，按时间分行
custom, 选了custom那么CustomRule就要填入具体的自定义值
                     * @param _lineRule default，默认换行符分行
time，按时间分行
custom, 选了custom那么CustomRule就要填入具体的自定义值
                     * 
                     */
                    void SetLineRule(const std::string& _lineRule);

                    /**
                     * 判断参数 LineRule 是否已赋值
                     * @return LineRule 是否已赋值
                     * 
                     */
                    bool LineRuleHasBeenSet() const;

                    /**
                     * 获取自定义的分行值
                     * @return CustomRule 自定义的分行值
                     * 
                     */
                    std::string GetCustomRule() const;

                    /**
                     * 设置自定义的分行值
                     * @param _customRule 自定义的分行值
                     * 
                     */
                    void SetCustomRule(const std::string& _customRule);

                    /**
                     * 判断参数 CustomRule 是否已赋值
                     * @return CustomRule 是否已赋值
                     * 
                     */
                    bool CustomRuleHasBeenSet() const;

                private:

                    /**
                     * 投递kafka的topic
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * 采集日志的path
                     */
                    std::vector<std::string> m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * default，默认换行符分行
time，按时间分行
custom, 选了custom那么CustomRule就要填入具体的自定义值
                     */
                    std::string m_lineRule;
                    bool m_lineRuleHasBeenSet;

                    /**
                     * 自定义的分行值
                     */
                    std::string m_customRule;
                    bool m_customRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DELIVERYKAFKAINFO_H_
