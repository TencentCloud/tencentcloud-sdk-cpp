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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBEASYNCJOBSREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBEASYNCJOBSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
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
                     * 获取分批次查询时每次显示的条目数。取值范围：1~100，默认值：20。
                     * @return MaxResults 分批次查询时每次显示的条目数。取值范围：1~100，默认值：20。
                     * 
                     */
                    uint64_t GetMaxResults() const;

                    /**
                     * 设置分批次查询时每次显示的条目数。取值范围：1~100，默认值：20。
                     * @param _maxResults 分批次查询时每次显示的条目数。取值范围：1~100，默认值：20。
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
                     * 获取是否拥有下一次查询的令牌（Token）。取值：  第一次查询和没有下一次查询时，均无需填写。 如果有下一次查询，取值为上一次 API 调用返回的 NextToken 值。
                     * @return NextToken 是否拥有下一次查询的令牌（Token）。取值：  第一次查询和没有下一次查询时，均无需填写。 如果有下一次查询，取值为上一次 API 调用返回的 NextToken 值。
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置是否拥有下一次查询的令牌（Token）。取值：  第一次查询和没有下一次查询时，均无需填写。 如果有下一次查询，取值为上一次 API 调用返回的 NextToken 值。
                     * @param _nextToken 是否拥有下一次查询的令牌（Token）。取值：  第一次查询和没有下一次查询时，均无需填写。 如果有下一次查询，取值为上一次 API 调用返回的 NextToken 值。
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
                     * 获取异步请求返回的RequestId列表
                     * @return RequestIds 异步请求返回的RequestId列表
                     * 
                     */
                    std::vector<std::string> GetRequestIds() const;

                    /**
                     * 设置异步请求返回的RequestId列表
                     * @param _requestIds 异步请求返回的RequestId列表
                     * 
                     */
                    void SetRequestIds(const std::vector<std::string>& _requestIds);

                    /**
                     * 判断参数 RequestIds 是否已赋值
                     * @return RequestIds 是否已赋值
                     * 
                     */
                    bool RequestIdsHasBeenSet() const;

                private:

                    /**
                     * 分批次查询时每次显示的条目数。取值范围：1~100，默认值：20。
                     */
                    uint64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * 是否拥有下一次查询的令牌（Token）。取值：  第一次查询和没有下一次查询时，均无需填写。 如果有下一次查询，取值为上一次 API 调用返回的 NextToken 值。
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * 异步请求返回的RequestId列表
                     */
                    std::vector<std::string> m_requestIds;
                    bool m_requestIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBEASYNCJOBSREQUEST_H_
