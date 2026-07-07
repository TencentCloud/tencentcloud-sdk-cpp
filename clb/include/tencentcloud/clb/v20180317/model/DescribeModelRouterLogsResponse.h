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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEMODELROUTERLOGSRESPONSE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEMODELROUTERLOGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/ModelRouterLog.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeModelRouterLogs返回参数结构体
                */
                class DescribeModelRouterLogsResponse : public AbstractModel
                {
                public:
                    DescribeModelRouterLogsResponse();
                    ~DescribeModelRouterLogsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>日志列表</p>
                     * @return Logs <p>日志列表</p>
                     * 
                     */
                    std::vector<ModelRouterLog> GetLogs() const;

                    /**
                     * 判断参数 Logs 是否已赋值
                     * @return Logs 是否已赋值
                     * 
                     */
                    bool LogsHasBeenSet() const;

                    /**
                     * 获取<p>满足条件的数量</p>
                     * @return TotalCount <p>满足条件的数量</p>
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取<p>游标NextToken</p>
                     * @return NextToken <p>游标NextToken</p>
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                private:

                    /**
                     * <p>日志列表</p>
                     */
                    std::vector<ModelRouterLog> m_logs;
                    bool m_logsHasBeenSet;

                    /**
                     * <p>满足条件的数量</p>
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>游标NextToken</p>
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEMODELROUTERLOGSRESPONSE_H_
