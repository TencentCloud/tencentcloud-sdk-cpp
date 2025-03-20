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

#ifndef TENCENTCLOUD_SVP_V20240125_MODEL_DESCRIBESAVINGPLANOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_SVP_V20240125_MODEL_DESCRIBESAVINGPLANOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/svp/v20240125/model/SavingPlanOverviewDetail.h>


namespace TencentCloud
{
    namespace Svp
    {
        namespace V20240125
        {
            namespace Model
            {
                /**
                * DescribeSavingPlanOverview返回参数结构体
                */
                class DescribeSavingPlanOverviewResponse : public AbstractModel
                {
                public:
                    DescribeSavingPlanOverviewResponse();
                    ~DescribeSavingPlanOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取节省计划总览明细数据	
                     * @return Overviews 节省计划总览明细数据	
                     * 
                     */
                    std::vector<SavingPlanOverviewDetail> GetOverviews() const;

                    /**
                     * 判断参数 Overviews 是否已赋值
                     * @return Overviews 是否已赋值
                     * 
                     */
                    bool OverviewsHasBeenSet() const;

                    /**
                     * 获取查询命中的节省计划总览明细数据总条数
                     * @return Total 查询命中的节省计划总览明细数据总条数
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 节省计划总览明细数据	
                     */
                    std::vector<SavingPlanOverviewDetail> m_overviews;
                    bool m_overviewsHasBeenSet;

                    /**
                     * 查询命中的节省计划总览明细数据总条数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SVP_V20240125_MODEL_DESCRIBESAVINGPLANOVERVIEWRESPONSE_H_
