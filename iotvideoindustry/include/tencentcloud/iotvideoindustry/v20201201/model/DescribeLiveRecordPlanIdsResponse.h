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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBELIVERECORDPLANIDSRESPONSE_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBELIVERECORDPLANIDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/LiveRecordPlanItem.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * DescribeLiveRecordPlanIds返回参数结构体
                */
                class DescribeLiveRecordPlanIdsResponse : public AbstractModel
                {
                public:
                    DescribeLiveRecordPlanIdsResponse();
                    ~DescribeLiveRecordPlanIdsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总个数
                     * @return TotalCount 总个数
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
                     * 获取计划数组
                     * @return Plans 计划数组
                     * 
                     */
                    std::vector<LiveRecordPlanItem> GetPlans() const;

                    /**
                     * 判断参数 Plans 是否已赋值
                     * @return Plans 是否已赋值
                     * 
                     */
                    bool PlansHasBeenSet() const;

                private:

                    /**
                     * 总个数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 计划数组
                     */
                    std::vector<LiveRecordPlanItem> m_plans;
                    bool m_plansHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBELIVERECORDPLANIDSRESPONSE_H_
