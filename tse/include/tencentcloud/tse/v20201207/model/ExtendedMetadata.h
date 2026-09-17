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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_EXTENDEDMETADATA_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_EXTENDEDMETADATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/AgentSkill.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 服务扩展元数据
                */
                class ExtendedMetadata : public AbstractModel
                {
                public:
                    ExtendedMetadata();
                    ~ExtendedMetadata() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>枚举类型</p>
                     * @return Type <p>枚举类型</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>枚举类型</p>
                     * @param _type <p>枚举类型</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>agent参数</p>
                     * @return AgentSkill <p>agent参数</p>
                     * 
                     */
                    AgentSkill GetAgentSkill() const;

                    /**
                     * 设置<p>agent参数</p>
                     * @param _agentSkill <p>agent参数</p>
                     * 
                     */
                    void SetAgentSkill(const AgentSkill& _agentSkill);

                    /**
                     * 判断参数 AgentSkill 是否已赋值
                     * @return AgentSkill 是否已赋值
                     * 
                     */
                    bool AgentSkillHasBeenSet() const;

                private:

                    /**
                     * <p>枚举类型</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>agent参数</p>
                     */
                    AgentSkill m_agentSkill;
                    bool m_agentSkillHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_EXTENDEDMETADATA_H_
