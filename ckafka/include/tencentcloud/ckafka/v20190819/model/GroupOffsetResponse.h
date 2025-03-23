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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_GROUPOFFSETRESPONSE_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_GROUPOFFSETRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/GroupOffsetTopic.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 消费组偏移量返回结果
                */
                class GroupOffsetResponse : public AbstractModel
                {
                public:
                    GroupOffsetResponse();
                    ~GroupOffsetResponse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取符合调节的总结果数
                     * @return TotalCount 符合调节的总结果数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置符合调节的总结果数
                     * @param _totalCount 符合调节的总结果数
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取该主题分区数组，其中每个元素为一个 json object
                     * @return TopicList 该主题分区数组，其中每个元素为一个 json object
                     * 
                     */
                    std::vector<GroupOffsetTopic> GetTopicList() const;

                    /**
                     * 设置该主题分区数组，其中每个元素为一个 json object
                     * @param _topicList 该主题分区数组，其中每个元素为一个 json object
                     * 
                     */
                    void SetTopicList(const std::vector<GroupOffsetTopic>& _topicList);

                    /**
                     * 判断参数 TopicList 是否已赋值
                     * @return TopicList 是否已赋值
                     * 
                     */
                    bool TopicListHasBeenSet() const;

                private:

                    /**
                     * 符合调节的总结果数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 该主题分区数组，其中每个元素为一个 json object
                     */
                    std::vector<GroupOffsetTopic> m_topicList;
                    bool m_topicListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_GROUPOFFSETRESPONSE_H_
