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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBENOTEBOOKSESSIONSTATEMENTSQLRESULTREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBENOTEBOOKSESSIONSTATEMENTSQLRESULTREQUEST_H_

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
                * DescribeNotebookSessionStatementSqlResult请求参数结构体
                */
                class DescribeNotebookSessionStatementSqlResultRequest : public AbstractModel
                {
                public:
                    DescribeNotebookSessionStatementSqlResultRequest();
                    ~DescribeNotebookSessionStatementSqlResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务唯一ID
                     * @return TaskId 任务唯一ID
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务唯一ID
                     * @param TaskId 任务唯一ID
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取返回结果的最大行数，范围0~1000，默认为1000.
                     * @return MaxResults 返回结果的最大行数，范围0~1000，默认为1000.
                     */
                    uint64_t GetMaxResults() const;

                    /**
                     * 设置返回结果的最大行数，范围0~1000，默认为1000.
                     * @param MaxResults 返回结果的最大行数，范围0~1000，默认为1000.
                     */
                    void SetMaxResults(const uint64_t& _maxResults);

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     */
                    bool MaxResultsHasBeenSet() const;

                    /**
                     * 获取上一次请求响应返回的分页信息。第一次可以不带，从头开始返回数据，每次返回MaxResults字段设置的数据量。
                     * @return NextToken 上一次请求响应返回的分页信息。第一次可以不带，从头开始返回数据，每次返回MaxResults字段设置的数据量。
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置上一次请求响应返回的分页信息。第一次可以不带，从头开始返回数据，每次返回MaxResults字段设置的数据量。
                     * @param NextToken 上一次请求响应返回的分页信息。第一次可以不带，从头开始返回数据，每次返回MaxResults字段设置的数据量。
                     */
                    void SetNextToken(const std::string& _nextToken);

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     */
                    bool NextTokenHasBeenSet() const;

                private:

                    /**
                     * 任务唯一ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 返回结果的最大行数，范围0~1000，默认为1000.
                     */
                    uint64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * 上一次请求响应返回的分页信息。第一次可以不带，从头开始返回数据，每次返回MaxResults字段设置的数据量。
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBENOTEBOOKSESSIONSTATEMENTSQLRESULTREQUEST_H_
