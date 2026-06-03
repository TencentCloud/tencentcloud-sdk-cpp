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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEDATAHUBTOPICSREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEDATAHUBTOPICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeDatahubTopics请求参数结构体
                */
                class DescribeDatahubTopicsRequest : public AbstractModel
                {
                public:
                    DescribeDatahubTopicsRequest();
                    ~DescribeDatahubTopicsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>搜索词</p><p>对Name或TopicName或TopicId字段进行模糊匹配</p>
                     * @return SearchWord <p>搜索词</p><p>对Name或TopicName或TopicId字段进行模糊匹配</p>
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置<p>搜索词</p><p>对Name或TopicName或TopicId字段进行模糊匹配</p>
                     * @param _searchWord <p>搜索词</p><p>对Name或TopicName或TopicId字段进行模糊匹配</p>
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                    /**
                     * 获取<p>本次查询的偏移位置，默认为0</p>
                     * @return Offset <p>本次查询的偏移位置，默认为0</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>本次查询的偏移位置，默认为0</p>
                     * @param _offset <p>本次查询的偏移位置，默认为0</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>本次返回结果的最大个数</p><p>取值范围：[1, 100]</p><p>默认值：20</p>
                     * @return Limit <p>本次返回结果的最大个数</p><p>取值范围：[1, 100]</p><p>默认值：20</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>本次返回结果的最大个数</p><p>取值范围：[1, 100]</p><p>默认值：20</p>
                     * @param _limit <p>本次返回结果的最大个数</p><p>取值范围：[1, 100]</p><p>默认值：20</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>是否从连接查询topic列表</p><p>默认值：false</p>
                     * @return QueryFromConnectResource <p>是否从连接查询topic列表</p><p>默认值：false</p>
                     * 
                     */
                    bool GetQueryFromConnectResource() const;

                    /**
                     * 设置<p>是否从连接查询topic列表</p><p>默认值：false</p>
                     * @param _queryFromConnectResource <p>是否从连接查询topic列表</p><p>默认值：false</p>
                     * 
                     */
                    void SetQueryFromConnectResource(const bool& _queryFromConnectResource);

                    /**
                     * 判断参数 QueryFromConnectResource 是否已赋值
                     * @return QueryFromConnectResource 是否已赋值
                     * 
                     */
                    bool QueryFromConnectResourceHasBeenSet() const;

                    /**
                     * 获取<p>连接的ID</p>
                     * @return ConnectResourceId <p>连接的ID</p>
                     * 
                     */
                    std::string GetConnectResourceId() const;

                    /**
                     * 设置<p>连接的ID</p>
                     * @param _connectResourceId <p>连接的ID</p>
                     * 
                     */
                    void SetConnectResourceId(const std::string& _connectResourceId);

                    /**
                     * 判断参数 ConnectResourceId 是否已赋值
                     * @return ConnectResourceId 是否已赋值
                     * 
                     */
                    bool ConnectResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>topic资源表达式</p>
                     * @return TopicRegularExpression <p>topic资源表达式</p>
                     * 
                     */
                    std::string GetTopicRegularExpression() const;

                    /**
                     * 设置<p>topic资源表达式</p>
                     * @param _topicRegularExpression <p>topic资源表达式</p>
                     * 
                     */
                    void SetTopicRegularExpression(const std::string& _topicRegularExpression);

                    /**
                     * 判断参数 TopicRegularExpression 是否已赋值
                     * @return TopicRegularExpression 是否已赋值
                     * 
                     */
                    bool TopicRegularExpressionHasBeenSet() const;

                private:

                    /**
                     * <p>搜索词</p><p>对Name或TopicName或TopicId字段进行模糊匹配</p>
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * <p>本次查询的偏移位置，默认为0</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>本次返回结果的最大个数</p><p>取值范围：[1, 100]</p><p>默认值：20</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>是否从连接查询topic列表</p><p>默认值：false</p>
                     */
                    bool m_queryFromConnectResource;
                    bool m_queryFromConnectResourceHasBeenSet;

                    /**
                     * <p>连接的ID</p>
                     */
                    std::string m_connectResourceId;
                    bool m_connectResourceIdHasBeenSet;

                    /**
                     * <p>topic资源表达式</p>
                     */
                    std::string m_topicRegularExpression;
                    bool m_topicRegularExpressionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEDATAHUBTOPICSREQUEST_H_
