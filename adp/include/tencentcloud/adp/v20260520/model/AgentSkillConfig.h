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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_AGENTSKILLCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_AGENTSKILLCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Agent 技能入参
                */
                class AgentSkillConfig : public AbstractModel
                {
                public:
                    AgentSkillConfig();
                    ~AgentSkillConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>技能ID</p>
                     * @return SkillId <p>技能ID</p>
                     * 
                     */
                    std::string GetSkillId() const;

                    /**
                     * 设置<p>技能ID</p>
                     * @param _skillId <p>技能ID</p>
                     * 
                     */
                    void SetSkillId(const std::string& _skillId);

                    /**
                     * 判断参数 SkillId 是否已赋值
                     * @return SkillId 是否已赋值
                     * 
                     */
                    bool SkillIdHasBeenSet() const;

                private:

                    /**
                     * <p>技能ID</p>
                     */
                    std::string m_skillId;
                    bool m_skillIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_AGENTSKILLCONFIG_H_
