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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBESKILLLISTRESPONSE_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBESKILLLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/SkillItem.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/SkillCounts.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * DescribeSkillList返回参数结构体
                */
                class DescribeSkillListResponse : public AbstractModel
                {
                public:
                    DescribeSkillListResponse();
                    ~DescribeSkillListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合条件的技能总数（按 ID 批量时为实际命中数）
                     * @return TotalCount 符合条件的技能总数（按 ID 批量时为实际命中数）
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
                     * 获取技能列表（仅列表展示所需字段，完整信息走 DescribeSkill）
                     * @return SkillSet 技能列表（仅列表展示所需字段，完整信息走 DescribeSkill）
                     * 
                     */
                    std::vector<SkillItem> GetSkillSet() const;

                    /**
                     * 判断参数 SkillSet 是否已赋值
                     * @return SkillSet 是否已赋值
                     * 
                     */
                    bool SkillSetHasBeenSet() const;

                    /**
                     * 获取全局计数（不受 keyword 影响）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Counts 全局计数（不受 keyword 影响）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SkillCounts GetCounts() const;

                    /**
                     * 判断参数 Counts 是否已赋值
                     * @return Counts 是否已赋值
                     * 
                     */
                    bool CountsHasBeenSet() const;

                private:

                    /**
                     * 符合条件的技能总数（按 ID 批量时为实际命中数）
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 技能列表（仅列表展示所需字段，完整信息走 DescribeSkill）
                     */
                    std::vector<SkillItem> m_skillSet;
                    bool m_skillSetHasBeenSet;

                    /**
                     * 全局计数（不受 keyword 影响）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SkillCounts m_counts;
                    bool m_countsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBESKILLLISTRESPONSE_H_
