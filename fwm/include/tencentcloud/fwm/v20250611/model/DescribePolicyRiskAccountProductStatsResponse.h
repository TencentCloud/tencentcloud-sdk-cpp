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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_DESCRIBEPOLICYRISKACCOUNTPRODUCTSTATSRESPONSE_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_DESCRIBEPOLICYRISKACCOUNTPRODUCTSTATSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/fwm/v20250611/model/AccountStatsGroup.h>


namespace TencentCloud
{
    namespace Fwm
    {
        namespace V20250611
        {
            namespace Model
            {
                /**
                * DescribePolicyRiskAccountProductStats返回参数结构体
                */
                class DescribePolicyRiskAccountProductStatsResponse : public AbstractModel
                {
                public:
                    DescribePolicyRiskAccountProductStatsResponse();
                    ~DescribePolicyRiskAccountProductStatsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取按账号分组的风险统计列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountStats 按账号分组的风险统计列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AccountStatsGroup> GetAccountStats() const;

                    /**
                     * 判断参数 AccountStats 是否已赋值
                     * @return AccountStats 是否已赋值
                     * 
                     */
                    bool AccountStatsHasBeenSet() const;

                    /**
                     * 获取满足条件的账号总数
                     * @return TotalCount 满足条件的账号总数
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
                     * 获取超时未体检的账号数
                     * @return OverdueAccountCount 超时未体检的账号数
                     * 
                     */
                    int64_t GetOverdueAccountCount() const;

                    /**
                     * 判断参数 OverdueAccountCount 是否已赋值
                     * @return OverdueAccountCount 是否已赋值
                     * 
                     */
                    bool OverdueAccountCountHasBeenSet() const;

                    /**
                     * 获取超时未体检的产品数
                     * @return OverdueProductCount 超时未体检的产品数
                     * 
                     */
                    int64_t GetOverdueProductCount() const;

                    /**
                     * 判断参数 OverdueProductCount 是否已赋值
                     * @return OverdueProductCount 是否已赋值
                     * 
                     */
                    bool OverdueProductCountHasBeenSet() const;

                private:

                    /**
                     * 按账号分组的风险统计列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AccountStatsGroup> m_accountStats;
                    bool m_accountStatsHasBeenSet;

                    /**
                     * 满足条件的账号总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 超时未体检的账号数
                     */
                    int64_t m_overdueAccountCount;
                    bool m_overdueAccountCountHasBeenSet;

                    /**
                     * 超时未体检的产品数
                     */
                    int64_t m_overdueProductCount;
                    bool m_overdueProductCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_DESCRIBEPOLICYRISKACCOUNTPRODUCTSTATSRESPONSE_H_
