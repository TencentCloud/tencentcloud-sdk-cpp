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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELOADBALANCEROVERVIEWRESPONSE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELOADBALANCEROVERVIEWRESPONSE_H_

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
                * DescribeLoadBalancerOverview返回参数结构体
                */
                class DescribeLoadBalancerOverviewResponse : public AbstractModel
                {
                public:
                    DescribeLoadBalancerOverviewResponse();
                    ~DescribeLoadBalancerOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取负载均衡总数
                     * @return TotalCount 负载均衡总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取运行中的负载均衡数目
                     * @return RunningCount 运行中的负载均衡数目
                     * 
                     */
                    int64_t GetRunningCount() const;

                    /**
                     * 判断参数 RunningCount 是否已赋值
                     * @return RunningCount 是否已赋值
                     * 
                     */
                    bool RunningCountHasBeenSet() const;

                    /**
                     * 获取隔离中的负载均衡数目
                     * @return IsolationCount 隔离中的负载均衡数目
                     * 
                     */
                    int64_t GetIsolationCount() const;

                    /**
                     * 判断参数 IsolationCount 是否已赋值
                     * @return IsolationCount 是否已赋值
                     * 
                     */
                    bool IsolationCountHasBeenSet() const;

                    /**
                     * 获取即将到期的负载均衡数目
                     * @return WillExpireCount 即将到期的负载均衡数目
                     * 
                     */
                    int64_t GetWillExpireCount() const;

                    /**
                     * 判断参数 WillExpireCount 是否已赋值
                     * @return WillExpireCount 是否已赋值
                     * 
                     */
                    bool WillExpireCountHasBeenSet() const;

                private:

                    /**
                     * 负载均衡总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 运行中的负载均衡数目
                     */
                    int64_t m_runningCount;
                    bool m_runningCountHasBeenSet;

                    /**
                     * 隔离中的负载均衡数目
                     */
                    int64_t m_isolationCount;
                    bool m_isolationCountHasBeenSet;

                    /**
                     * 即将到期的负载均衡数目
                     */
                    int64_t m_willExpireCount;
                    bool m_willExpireCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELOADBALANCEROVERVIEWRESPONSE_H_
