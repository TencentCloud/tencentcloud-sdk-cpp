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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBESUBSCRIPTIONSRESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBESUBSCRIPTIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/Subscription.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeSubscriptions返回参数结构体
                */
                class DescribeSubscriptionsResponse : public AbstractModel
                {
                public:
                    DescribeSubscriptionsResponse();
                    ~DescribeSubscriptionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取订阅者集合数组。
                     * @return SubscriptionSets 订阅者集合数组。
                     * 
                     */
                    std::vector<Subscription> GetSubscriptionSets() const;

                    /**
                     * 判断参数 SubscriptionSets 是否已赋值
                     * @return SubscriptionSets 是否已赋值
                     * 
                     */
                    bool SubscriptionSetsHasBeenSet() const;

                    /**
                     * 获取数量。
                     * @return TotalCount 数量。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 订阅者集合数组。
                     */
                    std::vector<Subscription> m_subscriptionSets;
                    bool m_subscriptionSetsHasBeenSet;

                    /**
                     * 数量。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBESUBSCRIPTIONSRESPONSE_H_
