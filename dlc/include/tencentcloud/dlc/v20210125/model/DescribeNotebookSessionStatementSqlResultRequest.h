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
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务唯一ID
                     * @param _taskId 任务唯一ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取返回结果的最大行数，范围0~1000，默认为1000.
                     * @return MaxResults 返回结果的最大行数，范围0~1000，默认为1000.
                     * 
                     */
                    uint64_t GetMaxResults() const;

                    /**
                     * 设置返回结果的最大行数，范围0~1000，默认为1000.
                     * @param _maxResults 返回结果的最大行数，范围0~1000，默认为1000.
                     * 
                     */
                    void SetMaxResults(const uint64_t& _maxResults);

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     * 
                     */
                    bool MaxResultsHasBeenSet() const;

                    /**
                     * 获取上一次请求响应返回的分页信息。第一次可以不带，从头开始返回数据，每次返回MaxResults字段设置的数据量。
                     * @return NextToken 上一次请求响应返回的分页信息。第一次可以不带，从头开始返回数据，每次返回MaxResults字段设置的数据量。
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置上一次请求响应返回的分页信息。第一次可以不带，从头开始返回数据，每次返回MaxResults字段设置的数据量。
                     * @param _nextToken 上一次请求响应返回的分页信息。第一次可以不带，从头开始返回数据，每次返回MaxResults字段设置的数据量。
                     * 
                     */
                    void SetNextToken(const std::string& _nextToken);

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                    /**
                     * 获取批次Id
                     * @return BatchId 批次Id
                     * 
                     */
                    std::string GetBatchId() const;

                    /**
                     * 设置批次Id
                     * @param _batchId 批次Id
                     * 
                     */
                    void SetBatchId(const std::string& _batchId);

                    /**
                     * 判断参数 BatchId 是否已赋值
                     * @return BatchId 是否已赋值
                     * 
                     */
                    bool BatchIdHasBeenSet() const;

                    /**
                     * 获取返回结果集中字段值长度截取，如果超过该长度则截取到该长度
                     * @return DataFieldCutLen 返回结果集中字段值长度截取，如果超过该长度则截取到该长度
                     * 
                     */
                    int64_t GetDataFieldCutLen() const;

                    /**
                     * 设置返回结果集中字段值长度截取，如果超过该长度则截取到该长度
                     * @param _dataFieldCutLen 返回结果集中字段值长度截取，如果超过该长度则截取到该长度
                     * 
                     */
                    void SetDataFieldCutLen(const int64_t& _dataFieldCutLen);

                    /**
                     * 判断参数 DataFieldCutLen 是否已赋值
                     * @return DataFieldCutLen 是否已赋值
                     * 
                     */
                    bool DataFieldCutLenHasBeenSet() const;

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

                    /**
                     * 批次Id
                     */
                    std::string m_batchId;
                    bool m_batchIdHasBeenSet;

                    /**
                     * 返回结果集中字段值长度截取，如果超过该长度则截取到该长度
                     */
                    int64_t m_dataFieldCutLen;
                    bool m_dataFieldCutLenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBENOTEBOOKSESSIONSTATEMENTSQLRESULTREQUEST_H_
