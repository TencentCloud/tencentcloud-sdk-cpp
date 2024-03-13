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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_GETCLUSTERLEVELPRICERESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_GETCLUSTERLEVELPRICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * GetClusterLevelPrice返回参数结构体
                */
                class GetClusterLevelPriceResponse : public AbstractModel
                {
                public:
                    GetClusterLevelPriceResponse();
                    ~GetClusterLevelPriceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取询价结果，单位：分，打折后
                     * @return Cost 询价结果，单位：分，打折后
                     * 
                     */
                    uint64_t GetCost() const;

                    /**
                     * 判断参数 Cost 是否已赋值
                     * @return Cost 是否已赋值
                     * 
                     */
                    bool CostHasBeenSet() const;

                    /**
                     * 获取询价结果，单位：分，折扣前
                     * @return TotalCost 询价结果，单位：分，折扣前
                     * 
                     */
                    uint64_t GetTotalCost() const;

                    /**
                     * 判断参数 TotalCost 是否已赋值
                     * @return TotalCost 是否已赋值
                     * 
                     */
                    bool TotalCostHasBeenSet() const;

                    /**
                     * 获取总的折扣，100表示100%不打折
                     * @return Policy 总的折扣，100表示100%不打折
                     * 
                     */
                    double GetPolicy() const;

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     * 
                     */
                    bool PolicyHasBeenSet() const;

                private:

                    /**
                     * 询价结果，单位：分，打折后
                     */
                    uint64_t m_cost;
                    bool m_costHasBeenSet;

                    /**
                     * 询价结果，单位：分，折扣前
                     */
                    uint64_t m_totalCost;
                    bool m_totalCostHasBeenSet;

                    /**
                     * 总的折扣，100表示100%不打折
                     */
                    double m_policy;
                    bool m_policyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_GETCLUSTERLEVELPRICERESPONSE_H_
