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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICDETAILRESPONSE_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/TopicDetail.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 主题详情返回实体
                */
                class TopicDetailResponse : public AbstractModel
                {
                public:
                    TopicDetailResponse();
                    ~TopicDetailResponse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取返回的主题详情列表
                     * @return TopicList 返回的主题详情列表
                     * 
                     */
                    std::vector<TopicDetail> GetTopicList() const;

                    /**
                     * 设置返回的主题详情列表
                     * @param _topicList 返回的主题详情列表
                     * 
                     */
                    void SetTopicList(const std::vector<TopicDetail>& _topicList);

                    /**
                     * 判断参数 TopicList 是否已赋值
                     * @return TopicList 是否已赋值
                     * 
                     */
                    bool TopicListHasBeenSet() const;

                    /**
                     * 获取符合条件的所有主题详情数量
                     * @return TotalCount 符合条件的所有主题详情数量
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置符合条件的所有主题详情数量
                     * @param _totalCount 符合条件的所有主题详情数量
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 返回的主题详情列表
                     */
                    std::vector<TopicDetail> m_topicList;
                    bool m_topicListHasBeenSet;

                    /**
                     * 符合条件的所有主题详情数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICDETAILRESPONSE_H_
