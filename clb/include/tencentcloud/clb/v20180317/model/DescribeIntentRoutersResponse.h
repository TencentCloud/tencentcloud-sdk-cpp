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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEINTENTROUTERSRESPONSE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEINTENTROUTERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/IntentRouterItem.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeIntentRouters返回参数结构体
                */
                class DescribeIntentRoutersResponse : public AbstractModel
                {
                public:
                    DescribeIntentRoutersResponse();
                    ~DescribeIntentRoutersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>意图路由列表。</p>
                     * @return IntentRouterSet <p>意图路由列表。</p>
                     * 
                     */
                    std::vector<IntentRouterItem> GetIntentRouterSet() const;

                    /**
                     * 判断参数 IntentRouterSet 是否已赋值
                     * @return IntentRouterSet 是否已赋值
                     * 
                     */
                    bool IntentRouterSetHasBeenSet() const;

                    /**
                     * 获取<p>意图路由总数。</p>
                     * @return TotalCount <p>意图路由总数。</p>
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
                     * <p>意图路由列表。</p>
                     */
                    std::vector<IntentRouterItem> m_intentRouterSet;
                    bool m_intentRouterSetHasBeenSet;

                    /**
                     * <p>意图路由总数。</p>
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEINTENTROUTERSRESPONSE_H_
