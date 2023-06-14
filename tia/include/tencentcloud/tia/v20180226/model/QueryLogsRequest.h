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

#ifndef TENCENTCLOUD_TIA_V20180226_MODEL_QUERYLOGSREQUEST_H_
#define TENCENTCLOUD_TIA_V20180226_MODEL_QUERYLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tia
    {
        namespace V20180226
        {
            namespace Model
            {
                /**
                * QueryLogs请求参数结构体
                */
                class QueryLogsRequest : public AbstractModel
                {
                public:
                    QueryLogsRequest();
                    ~QueryLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务的名称
                     * @return JobName 任务的名称
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置任务的名称
                     * @param _jobName 任务的名称
                     * 
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     * 
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取任务所在集群的名称
                     * @return Cluster 任务所在集群的名称
                     * 
                     */
                    std::string GetCluster() const;

                    /**
                     * 设置任务所在集群的名称
                     * @param _cluster 任务所在集群的名称
                     * 
                     */
                    void SetCluster(const std::string& _cluster);

                    /**
                     * 判断参数 Cluster 是否已赋值
                     * @return Cluster 是否已赋值
                     * 
                     */
                    bool ClusterHasBeenSet() const;

                    /**
                     * 获取查询日志的开始时间，格式：2019-01-01 00:00:00
                     * @return StartTime 查询日志的开始时间，格式：2019-01-01 00:00:00
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询日志的开始时间，格式：2019-01-01 00:00:00
                     * @param _startTime 查询日志的开始时间，格式：2019-01-01 00:00:00
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取查询日志的结束时间，格式：2019-01-01 00:00:00
                     * @return EndTime 查询日志的结束时间，格式：2019-01-01 00:00:00
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询日志的结束时间，格式：2019-01-01 00:00:00
                     * @param _endTime 查询日志的结束时间，格式：2019-01-01 00:00:00
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取单次要返回的日志条数上限
                     * @return Limit 单次要返回的日志条数上限
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置单次要返回的日志条数上限
                     * @param _limit 单次要返回的日志条数上限
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
                     * 获取加载更多日志时使用，透传上次返回的 Context 值，获取后续的日志内容；使用 Context 翻页最多能获取 10000 条日志
                     * @return Context 加载更多日志时使用，透传上次返回的 Context 值，获取后续的日志内容；使用 Context 翻页最多能获取 10000 条日志
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置加载更多日志时使用，透传上次返回的 Context 值，获取后续的日志内容；使用 Context 翻页最多能获取 10000 条日志
                     * @param _context 加载更多日志时使用，透传上次返回的 Context 值，获取后续的日志内容；使用 Context 翻页最多能获取 10000 条日志
                     * 
                     */
                    void SetContext(const std::string& _context);

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                private:

                    /**
                     * 任务的名称
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * 任务所在集群的名称
                     */
                    std::string m_cluster;
                    bool m_clusterHasBeenSet;

                    /**
                     * 查询日志的开始时间，格式：2019-01-01 00:00:00
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询日志的结束时间，格式：2019-01-01 00:00:00
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 单次要返回的日志条数上限
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 加载更多日志时使用，透传上次返回的 Context 值，获取后续的日志内容；使用 Context 翻页最多能获取 10000 条日志
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIA_V20180226_MODEL_QUERYLOGSREQUEST_H_
