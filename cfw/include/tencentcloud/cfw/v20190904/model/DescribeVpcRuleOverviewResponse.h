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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEVPCRULEOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEVPCRULEOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeVpcRuleOverview返回参数结构体
                */
                class DescribeVpcRuleOverviewResponse : public AbstractModel
                {
                public:
                    DescribeVpcRuleOverviewResponse();
                    ~DescribeVpcRuleOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取阻断策略规则数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StrategyNum 阻断策略规则数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetStrategyNum() const;

                    /**
                     * 判断参数 StrategyNum 是否已赋值
                     * @return StrategyNum 是否已赋值
                     */
                    bool StrategyNumHasBeenSet() const;

                    /**
                     * 获取启用规则数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartRuleNum 启用规则数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetStartRuleNum() const;

                    /**
                     * 判断参数 StartRuleNum 是否已赋值
                     * @return StartRuleNum 是否已赋值
                     */
                    bool StartRuleNumHasBeenSet() const;

                    /**
                     * 获取规则总量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total 规则总量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 阻断策略规则数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_strategyNum;
                    bool m_strategyNumHasBeenSet;

                    /**
                     * 启用规则数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_startRuleNum;
                    bool m_startRuleNumHasBeenSet;

                    /**
                     * 规则总量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEVPCRULEOVERVIEWRESPONSE_H_
