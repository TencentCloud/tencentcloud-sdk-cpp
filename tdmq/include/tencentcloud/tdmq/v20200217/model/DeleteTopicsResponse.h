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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DELETETOPICSRESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DELETETOPICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/TopicRecord.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DeleteTopics返回参数结构体
                */
                class DeleteTopicsResponse : public AbstractModel
                {
                public:
                    DeleteTopicsResponse();
                    ~DeleteTopicsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取被删除的主题数组。
                     * @return TopicSets 被删除的主题数组。
                     * 
                     */
                    std::vector<TopicRecord> GetTopicSets() const;

                    /**
                     * 判断参数 TopicSets 是否已赋值
                     * @return TopicSets 是否已赋值
                     * 
                     */
                    bool TopicSetsHasBeenSet() const;

                private:

                    /**
                     * 被删除的主题数组。
                     */
                    std::vector<TopicRecord> m_topicSets;
                    bool m_topicSetsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DELETETOPICSRESPONSE_H_
