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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_GETTOPICLISTRESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_GETTOPICLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/Topic_Simplification.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * GetTopicList返回参数结构体
                */
                class GetTopicListResponse : public AbstractModel
                {
                public:
                    GetTopicListResponse();
                    ~GetTopicListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取主题数量。
                     * @return TotalCount 主题数量。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取主题列表
                     * @return TopicList 主题列表
                     * 
                     */
                    std::vector<Topic_Simplification> GetTopicList() const;

                    /**
                     * 判断参数 TopicList 是否已赋值
                     * @return TopicList 是否已赋值
                     * 
                     */
                    bool TopicListHasBeenSet() const;

                private:

                    /**
                     * 主题数量。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 主题列表
                     */
                    std::vector<Topic_Simplification> m_topicList;
                    bool m_topicListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_GETTOPICLISTRESPONSE_H_
