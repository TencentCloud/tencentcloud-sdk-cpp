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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_AGENTSUMMARY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_AGENTSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AgentProfile.h>
#include <tencentcloud/adp/v20260520/model/AgentAdvancedConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Agent摘要信息
                */
                class AgentSummary : public AbstractModel
                {
                public:
                    AgentSummary();
                    ~AgentSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>AgentId</p>
                     * @return AgentId <p>AgentId</p>
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置<p>AgentId</p>
                     * @param _agentId <p>AgentId</p>
                     * 
                     */
                    void SetAgentId(const std::string& _agentId);

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     * 
                     */
                    bool AgentIdHasBeenSet() const;

                    /**
                     * 获取<p>Agent 身份画像</p>
                     * @return Profile <p>Agent 身份画像</p>
                     * 
                     */
                    AgentProfile GetProfile() const;

                    /**
                     * 设置<p>Agent 身份画像</p>
                     * @param _profile <p>Agent 身份画像</p>
                     * 
                     */
                    void SetProfile(const AgentProfile& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     * 
                     */
                    bool ProfileHasBeenSet() const;

                    /**
                     * 获取<p>高级设置;scope=0 时返回</p>
                     * @return AdvancedConfig <p>高级设置;scope=0 时返回</p>
                     * 
                     */
                    AgentAdvancedConfig GetAdvancedConfig() const;

                    /**
                     * 设置<p>高级设置;scope=0 时返回</p>
                     * @param _advancedConfig <p>高级设置;scope=0 时返回</p>
                     * 
                     */
                    void SetAdvancedConfig(const AgentAdvancedConfig& _advancedConfig);

                    /**
                     * 判断参数 AdvancedConfig 是否已赋值
                     * @return AdvancedConfig 是否已赋值
                     * 
                     */
                    bool AdvancedConfigHasBeenSet() const;

                private:

                    /**
                     * <p>AgentId</p>
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * <p>Agent 身份画像</p>
                     */
                    AgentProfile m_profile;
                    bool m_profileHasBeenSet;

                    /**
                     * <p>高级设置;scope=0 时返回</p>
                     */
                    AgentAdvancedConfig m_advancedConfig;
                    bool m_advancedConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_AGENTSUMMARY_H_
