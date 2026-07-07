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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEINTENTROUTERTIERSRESPONSE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEINTENTROUTERTIERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/IntentRouterTierDictItem.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeIntentRouterTiers返回参数结构体
                */
                class DescribeIntentRouterTiersResponse : public AbstractModel
                {
                public:
                    DescribeIntentRouterTiersResponse();
                    ~DescribeIntentRouterTiersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Tier 字典列表（按 tier_id 升序排列）</p>
                     * @return TierSet <p>Tier 字典列表（按 tier_id 升序排列）</p>
                     * 
                     */
                    std::vector<IntentRouterTierDictItem> GetTierSet() const;

                    /**
                     * 判断参数 TierSet 是否已赋值
                     * @return TierSet 是否已赋值
                     * 
                     */
                    bool TierSetHasBeenSet() const;

                    /**
                     * 获取<p>Tier 总条数</p>
                     * @return TotalCount <p>Tier 总条数</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * <p>Tier 字典列表（按 tier_id 升序排列）</p>
                     */
                    std::vector<IntentRouterTierDictItem> m_tierSet;
                    bool m_tierSetHasBeenSet;

                    /**
                     * <p>Tier 总条数</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEINTENTROUTERTIERSRESPONSE_H_
