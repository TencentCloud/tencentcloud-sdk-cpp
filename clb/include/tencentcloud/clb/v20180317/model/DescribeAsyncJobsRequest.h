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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEASYNCJOBSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEASYNCJOBSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeAsyncJobs请求参数结构体
                */
                class DescribeAsyncJobsRequest : public AbstractModel
                {
                public:
                    DescribeAsyncJobsRequest();
                    ~DescribeAsyncJobsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>请求ID列表</p>
                     * @return RequestIds <p>请求ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetRequestIds() const;

                    /**
                     * 设置<p>请求ID列表</p>
                     * @param _requestIds <p>请求ID列表</p>
                     * 
                     */
                    void SetRequestIds(const std::vector<std::string>& _requestIds);

                    /**
                     * 判断参数 RequestIds 是否已赋值
                     * @return RequestIds 是否已赋值
                     * 
                     */
                    bool RequestIdsHasBeenSet() const;

                    /**
                     * 获取<p>分页游标</p>
                     * @return NextToken <p>分页游标</p>
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置<p>分页游标</p>
                     * @param _nextToken <p>分页游标</p>
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
                     * 获取<p>本次查询最大数量</p><p>取值范围：[1, 100]</p><p>默认值：20</p>
                     * @return MaxResults <p>本次查询最大数量</p><p>取值范围：[1, 100]</p><p>默认值：20</p>
                     * 
                     */
                    uint64_t GetMaxResults() const;

                    /**
                     * 设置<p>本次查询最大数量</p><p>取值范围：[1, 100]</p><p>默认值：20</p>
                     * @param _maxResults <p>本次查询最大数量</p><p>取值范围：[1, 100]</p><p>默认值：20</p>
                     * 
                     */
                    void SetMaxResults(const uint64_t& _maxResults);

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     * 
                     */
                    bool MaxResultsHasBeenSet() const;

                private:

                    /**
                     * <p>请求ID列表</p>
                     */
                    std::vector<std::string> m_requestIds;
                    bool m_requestIdsHasBeenSet;

                    /**
                     * <p>分页游标</p>
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * <p>本次查询最大数量</p><p>取值范围：[1, 100]</p><p>默认值：20</p>
                     */
                    uint64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEASYNCJOBSREQUEST_H_
