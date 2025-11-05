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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_AIAGENTINFO_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_AIAGENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 智能体信息
                */
                class AIAgentInfo : public AbstractModel
                {
                public:
                    AIAgentInfo();
                    ~AIAgentInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取智能体ID
                     * @return AIAgentId 智能体ID
                     * 
                     */
                    uint64_t GetAIAgentId() const;

                    /**
                     * 设置智能体ID
                     * @param _aIAgentId 智能体ID
                     * 
                     */
                    void SetAIAgentId(const uint64_t& _aIAgentId);

                    /**
                     * 判断参数 AIAgentId 是否已赋值
                     * @return AIAgentId 是否已赋值
                     * 
                     */
                    bool AIAgentIdHasBeenSet() const;

                    /**
                     * 获取智能体名称
                     * @return AIAgentName 智能体名称
                     * 
                     */
                    std::string GetAIAgentName() const;

                    /**
                     * 设置智能体名称
                     * @param _aIAgentName 智能体名称
                     * 
                     */
                    void SetAIAgentName(const std::string& _aIAgentName);

                    /**
                     * 判断参数 AIAgentName 是否已赋值
                     * @return AIAgentName 是否已赋值
                     * 
                     */
                    bool AIAgentNameHasBeenSet() const;

                private:

                    /**
                     * 智能体ID
                     */
                    uint64_t m_aIAgentId;
                    bool m_aIAgentIdHasBeenSet;

                    /**
                     * 智能体名称
                     */
                    std::string m_aIAgentName;
                    bool m_aIAgentNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_AIAGENTINFO_H_
