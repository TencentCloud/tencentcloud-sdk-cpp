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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBECLSTOPICSREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBECLSTOPICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeClsTopics请求参数结构体
                */
                class DescribeClsTopicsRequest : public AbstractModel
                {
                public:
                    DescribeClsTopicsRequest();
                    ~DescribeClsTopicsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>日志主题名称（模糊匹配），可为空</p>
                     * @return TopicName <p>日志主题名称（模糊匹配），可为空</p>
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置<p>日志主题名称（模糊匹配），可为空</p>
                     * @param _topicName <p>日志主题名称（模糊匹配），可为空</p>
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取<p>日志主题 ID（精确匹配），可为空</p>
                     * @return TopicId <p>日志主题 ID（精确匹配），可为空</p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>日志主题 ID（精确匹配），可为空</p>
                     * @param _topicId <p>日志主题 ID（精确匹配），可为空</p>
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取<p>分页偏移量，从 0 开始，默认 0</p>
                     * @return Offset <p>分页偏移量，从 0 开始，默认 0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量，从 0 开始，默认 0</p>
                     * @param _offset <p>分页偏移量，从 0 开始，默认 0</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>分页每页条数，默认 20，最大 100</p>
                     * @return Limit <p>分页每页条数，默认 20，最大 100</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>分页每页条数，默认 20，最大 100</p>
                     * @param _limit <p>分页每页条数，默认 20，最大 100</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * <p>日志主题名称（模糊匹配），可为空</p>
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * <p>日志主题 ID（精确匹配），可为空</p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>分页偏移量，从 0 开始，默认 0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>分页每页条数，默认 20，最大 100</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBECLSTOPICSREQUEST_H_
