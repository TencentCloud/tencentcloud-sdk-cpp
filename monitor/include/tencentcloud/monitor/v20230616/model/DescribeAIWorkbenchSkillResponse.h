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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEAIWORKBENCHSKILLRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEAIWORKBENCHSKILLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20230616/model/SkillInfo.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * DescribeAIWorkbenchSkill返回参数结构体
                */
                class DescribeAIWorkbenchSkillResponse : public AbstractModel
                {
                public:
                    DescribeAIWorkbenchSkillResponse();
                    ~DescribeAIWorkbenchSkillResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>技能信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Skill <p>技能信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SkillInfo GetSkill() const;

                    /**
                     * 判断参数 Skill 是否已赋值
                     * @return Skill 是否已赋值
                     * 
                     */
                    bool SkillHasBeenSet() const;

                private:

                    /**
                     * <p>技能信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SkillInfo m_skill;
                    bool m_skillHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEAIWORKBENCHSKILLRESPONSE_H_
