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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEASYNCSEARCHRESULTREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEASYNCSEARCHRESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeAsyncSearchResult请求参数结构体
                */
                class DescribeAsyncSearchResultRequest : public AbstractModel
                {
                public:
                    DescribeAsyncSearchResultRequest();
                    ~DescribeAsyncSearchResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取异步检索任务ID
                     * @return AsyncSearchTaskId 异步检索任务ID
                     */
                    std::string GetAsyncSearchTaskId() const;

                    /**
                     * 设置异步检索任务ID
                     * @param AsyncSearchTaskId 异步检索任务ID
                     */
                    void SetAsyncSearchTaskId(const std::string& _asyncSearchTaskId);

                    /**
                     * 判断参数 AsyncSearchTaskId 是否已赋值
                     * @return AsyncSearchTaskId 是否已赋值
                     */
                    bool AsyncSearchTaskIdHasBeenSet() const;

                    /**
                     * 获取日志集ID
                     * @return TopicId 日志集ID
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置日志集ID
                     * @param TopicId 日志集ID
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取加载更多日志时使用，透传上次返回的Context值，获取后续的日志内容
                     * @return Context 加载更多日志时使用，透传上次返回的Context值，获取后续的日志内容
                     */
                    std::string GetContext() const;

                    /**
                     * 设置加载更多日志时使用，透传上次返回的Context值，获取后续的日志内容
                     * @param Context 加载更多日志时使用，透传上次返回的Context值，获取后续的日志内容
                     */
                    void SetContext(const std::string& _context);

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取单次调用返回的日志条数，默认为20，最大为500
                     * @return Limit 单次调用返回的日志条数，默认为20，最大为500
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置单次调用返回的日志条数，默认为20，最大为500
                     * @param Limit 单次调用返回的日志条数，默认为20，最大为500
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 异步检索任务ID
                     */
                    std::string m_asyncSearchTaskId;
                    bool m_asyncSearchTaskIdHasBeenSet;

                    /**
                     * 日志集ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 加载更多日志时使用，透传上次返回的Context值，获取后续的日志内容
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * 单次调用返回的日志条数，默认为20，最大为500
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEASYNCSEARCHRESULTREQUEST_H_
