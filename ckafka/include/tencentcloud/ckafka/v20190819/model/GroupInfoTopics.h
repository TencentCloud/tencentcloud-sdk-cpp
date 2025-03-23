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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_GROUPINFOTOPICS_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_GROUPINFOTOPICS_H_

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
                * GroupInfo内部topic对象
                */
                class GroupInfoTopics : public AbstractModel
                {
                public:
                    GroupInfoTopics();
                    ~GroupInfoTopics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分配的 topic 名称
                     * @return Topic 分配的 topic 名称
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置分配的 topic 名称
                     * @param _topic 分配的 topic 名称
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
                     * 获取分配的 partition 信息
                     * @return Partitions 分配的 partition 信息
                     * 
                     */
                    std::vector<int64_t> GetPartitions() const;

                    /**
                     * 设置分配的 partition 信息
                     * @param _partitions 分配的 partition 信息
                     * 
                     */
                    void SetPartitions(const std::vector<int64_t>& _partitions);

                    /**
                     * 判断参数 Partitions 是否已赋值
                     * @return Partitions 是否已赋值
                     * 
                     */
                    bool PartitionsHasBeenSet() const;

                private:

                    /**
                     * 分配的 topic 名称
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * 分配的 partition 信息
                     */
                    std::vector<int64_t> m_partitions;
                    bool m_partitionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_GROUPINFOTOPICS_H_
