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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEJOBRESULTREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEJOBRESULTREQUEST_H_

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
                * DescribeJobResult请求参数结构体
                */
                class DescribeJobResultRequest : public AbstractModel
                {
                public:
                    DescribeJobResultRequest();
                    ~DescribeJobResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>作业唯一标识符（ID）。必填。</p>
                     * @return JobId <p>作业唯一标识符（ID）。必填。</p>
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置<p>作业唯一标识符（ID）。必填。</p>
                     * @param _jobId <p>作业唯一标识符（ID）。必填。</p>
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取<p>页码，从1开始，默认为1.</p>
                     * @return Page <p>页码，从1开始，默认为1.</p>
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置<p>页码，从1开始，默认为1.</p>
                     * @param _page <p>页码，从1开始，默认为1.</p>
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取<p>每页返回数量，默认为10.</p>
                     * @return PageSize <p>每页返回数量，默认为10.</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>每页返回数量，默认为10.</p>
                     * @param _pageSize <p>每页返回数量，默认为10.</p>
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取<p>Statement 序号（1-based），多语句作业时指定；缺省为 0，取整作业第一个结果集.</p>
                     * @return StatementIndex <p>Statement 序号（1-based），多语句作业时指定；缺省为 0，取整作业第一个结果集.</p>
                     * 
                     */
                    int64_t GetStatementIndex() const;

                    /**
                     * 设置<p>Statement 序号（1-based），多语句作业时指定；缺省为 0，取整作业第一个结果集.</p>
                     * @param _statementIndex <p>Statement 序号（1-based），多语句作业时指定；缺省为 0，取整作业第一个结果集.</p>
                     * 
                     */
                    void SetStatementIndex(const int64_t& _statementIndex);

                    /**
                     * 判断参数 StatementIndex 是否已赋值
                     * @return StatementIndex 是否已赋值
                     * 
                     */
                    bool StatementIndexHasBeenSet() const;

                private:

                    /**
                     * <p>作业唯一标识符（ID）。必填。</p>
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * <p>页码，从1开始，默认为1.</p>
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * <p>每页返回数量，默认为10.</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>Statement 序号（1-based），多语句作业时指定；缺省为 0，取整作业第一个结果集.</p>
                     */
                    int64_t m_statementIndex;
                    bool m_statementIndexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEJOBRESULTREQUEST_H_
