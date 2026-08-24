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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEFILEBACKUPPLANSRESPONSE_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEFILEBACKUPPLANSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bdrc/v20260330/model/PlanInfo.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * DescribeFileBackupPlans返回参数结构体
                */
                class DescribeFileBackupPlansResponse : public AbstractModel
                {
                public:
                    DescribeFileBackupPlansResponse();
                    ~DescribeFileBackupPlansResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合条件的计划总数量
                     * @return TotalCount 符合条件的计划总数量
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
                     * 获取符合条件的计划详情
                     * @return PlanSet 符合条件的计划详情
                     * 
                     */
                    std::vector<PlanInfo> GetPlanSet() const;

                    /**
                     * 判断参数 PlanSet 是否已赋值
                     * @return PlanSet 是否已赋值
                     * 
                     */
                    bool PlanSetHasBeenSet() const;

                private:

                    /**
                     * 符合条件的计划总数量
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 符合条件的计划详情
                     */
                    std::vector<PlanInfo> m_planSet;
                    bool m_planSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEFILEBACKUPPLANSRESPONSE_H_
