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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEQUOTAOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEQUOTAOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/AccountQuotaOverview.h>
#include <tencentcloud/ags/v20250920/model/QuotaGroupOverview.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * DescribeQuotaOverview返回参数结构体
                */
                class DescribeQuotaOverviewResponse : public AbstractModel
                {
                public:
                    DescribeQuotaOverviewResponse();
                    ~DescribeQuotaOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>主账号配额上限及全账号当前用量</p>
                     * @return AccountQuotaOverview <p>主账号配额上限及全账号当前用量</p>
                     * 
                     */
                    AccountQuotaOverview GetAccountQuotaOverview() const;

                    /**
                     * 判断参数 AccountQuotaOverview 是否已赋值
                     * @return AccountQuotaOverview 是否已赋值
                     * 
                     */
                    bool AccountQuotaOverviewHasBeenSet() const;

                    /**
                     * 获取<p>当前分页下的配额组配额与用量列表。没有数据时返回空数组。</p>
                     * @return QuotaGroupSet <p>当前分页下的配额组配额与用量列表。没有数据时返回空数组。</p>
                     * 
                     */
                    std::vector<QuotaGroupOverview> GetQuotaGroupSet() const;

                    /**
                     * 判断参数 QuotaGroupSet 是否已赋值
                     * @return QuotaGroupSet 是否已赋值
                     * 
                     */
                    bool QuotaGroupSetHasBeenSet() const;

                    /**
                     * 获取<p>满足过滤条件的配额组总数，不受当前分页大小影响。</p><p>单位：个</p>
                     * @return TotalCount <p>满足过滤条件的配额组总数，不受当前分页大小影响。</p><p>单位：个</p>
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
                     * 获取<p>本次查询完成时间，格式为 RFC3339</p>
                     * @return DataTime <p>本次查询完成时间，格式为 RFC3339</p>
                     * 
                     */
                    std::string GetDataTime() const;

                    /**
                     * 判断参数 DataTime 是否已赋值
                     * @return DataTime 是否已赋值
                     * 
                     */
                    bool DataTimeHasBeenSet() const;

                private:

                    /**
                     * <p>主账号配额上限及全账号当前用量</p>
                     */
                    AccountQuotaOverview m_accountQuotaOverview;
                    bool m_accountQuotaOverviewHasBeenSet;

                    /**
                     * <p>当前分页下的配额组配额与用量列表。没有数据时返回空数组。</p>
                     */
                    std::vector<QuotaGroupOverview> m_quotaGroupSet;
                    bool m_quotaGroupSetHasBeenSet;

                    /**
                     * <p>满足过滤条件的配额组总数，不受当前分页大小影响。</p><p>单位：个</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>本次查询完成时间，格式为 RFC3339</p>
                     */
                    std::string m_dataTime;
                    bool m_dataTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEQUOTAOVERVIEWRESPONSE_H_
