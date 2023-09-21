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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_QUERYRANGEMETRICREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_QUERYRANGEMETRICREQUEST_H_

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
                * QueryRangeMetric请求参数结构体
                */
                class QueryRangeMetricRequest : public AbstractModel
                {
                public:
                    QueryRangeMetricRequest();
                    ~QueryRangeMetricRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取指标主题ID
                     * @return TopicId 指标主题ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置指标主题ID
                     * @param _topicId 指标主题ID
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
                     * 获取查询语句，使用PromQL语法
                     * @return Query 查询语句，使用PromQL语法
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置查询语句，使用PromQL语法
                     * @param _query 查询语句，使用PromQL语法
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取查询起始时间，秒级Unix时间戳
                     * @return Start 查询起始时间，秒级Unix时间戳
                     * 
                     */
                    uint64_t GetStart() const;

                    /**
                     * 设置查询起始时间，秒级Unix时间戳
                     * @param _start 查询起始时间，秒级Unix时间戳
                     * 
                     */
                    void SetStart(const uint64_t& _start);

                    /**
                     * 判断参数 Start 是否已赋值
                     * @return Start 是否已赋值
                     * 
                     */
                    bool StartHasBeenSet() const;

                    /**
                     * 获取查询结束时间，秒级Unix时间戳
                     * @return End 查询结束时间，秒级Unix时间戳
                     * 
                     */
                    uint64_t GetEnd() const;

                    /**
                     * 设置查询结束时间，秒级Unix时间戳
                     * @param _end 查询结束时间，秒级Unix时间戳
                     * 
                     */
                    void SetEnd(const uint64_t& _end);

                    /**
                     * 判断参数 End 是否已赋值
                     * @return End 是否已赋值
                     * 
                     */
                    bool EndHasBeenSet() const;

                    /**
                     * 获取查询时间间隔，单位秒
                     * @return Step 查询时间间隔，单位秒
                     * 
                     */
                    uint64_t GetStep() const;

                    /**
                     * 设置查询时间间隔，单位秒
                     * @param _step 查询时间间隔，单位秒
                     * 
                     */
                    void SetStep(const uint64_t& _step);

                    /**
                     * 判断参数 Step 是否已赋值
                     * @return Step 是否已赋值
                     * 
                     */
                    bool StepHasBeenSet() const;

                private:

                    /**
                     * 指标主题ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 查询语句，使用PromQL语法
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 查询起始时间，秒级Unix时间戳
                     */
                    uint64_t m_start;
                    bool m_startHasBeenSet;

                    /**
                     * 查询结束时间，秒级Unix时间戳
                     */
                    uint64_t m_end;
                    bool m_endHasBeenSet;

                    /**
                     * 查询时间间隔，单位秒
                     */
                    uint64_t m_step;
                    bool m_stepHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_QUERYRANGEMETRICREQUEST_H_
