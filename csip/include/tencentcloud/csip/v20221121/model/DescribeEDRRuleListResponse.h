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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEDRRULELISTRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEDRRULELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/EDRRule.h>
#include <tencentcloud/csip/v20221121/model/AttackStageCount.h>
#include <tencentcloud/csip/v20221121/model/DetectTypeCount.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeEDRRuleList返回参数结构体
                */
                class DescribeEDRRuleListResponse : public AbstractModel
                {
                public:
                    DescribeEDRRuleListResponse();
                    ~DescribeEDRRuleListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>总数</p>
                     * @return TotalCount <p>总数</p>
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
                     * 获取<p>列表</p>
                     * @return List <p>列表</p>
                     * 
                     */
                    std::vector<EDRRule> GetList() const;

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                    /**
                     * 获取<p>攻击阶段对应的策略数量</p>
                     * @return AttackStageCounts <p>攻击阶段对应的策略数量</p>
                     * 
                     */
                    std::vector<AttackStageCount> GetAttackStageCounts() const;

                    /**
                     * 判断参数 AttackStageCounts 是否已赋值
                     * @return AttackStageCounts 是否已赋值
                     * 
                     */
                    bool AttackStageCountsHasBeenSet() const;

                    /**
                     * 获取<p>检测方式对应的策略数量</p>
                     * @return DetectTypeCounts <p>检测方式对应的策略数量</p>
                     * 
                     */
                    std::vector<DetectTypeCount> GetDetectTypeCounts() const;

                    /**
                     * 判断参数 DetectTypeCounts 是否已赋值
                     * @return DetectTypeCounts 是否已赋值
                     * 
                     */
                    bool DetectTypeCountsHasBeenSet() const;

                private:

                    /**
                     * <p>总数</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>列表</p>
                     */
                    std::vector<EDRRule> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * <p>攻击阶段对应的策略数量</p>
                     */
                    std::vector<AttackStageCount> m_attackStageCounts;
                    bool m_attackStageCountsHasBeenSet;

                    /**
                     * <p>检测方式对应的策略数量</p>
                     */
                    std::vector<DetectTypeCount> m_detectTypeCounts;
                    bool m_detectTypeCountsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEDRRULELISTRESPONSE_H_
