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

                    /**
                     * 获取<p>子 Agent 执行来源</p><p>枚举值：</p><ul><li>0： 应用内子 Agent</li><li>1： 引用已发布的应用</li></ul>
                     * @return ProviderType <p>子 Agent 执行来源</p><p>枚举值：</p><ul><li>0： 应用内子 Agent</li><li>1： 引用已发布的应用</li></ul>
                     * 
                     */
                    int64_t GetProviderType() const;

                    /**
                     * 设置<p>子 Agent 执行来源</p><p>枚举值：</p><ul><li>0： 应用内子 Agent</li><li>1： 引用已发布的应用</li></ul>
                     * @param _providerType <p>子 Agent 执行来源</p><p>枚举值：</p><ul><li>0： 应用内子 Agent</li><li>1： 引用已发布的应用</li></ul>
                     * 
                     */
                    void SetProviderType(const int64_t& _providerType);

                    /**
                     * 判断参数 ProviderType 是否已赋值
                     * @return ProviderType 是否已赋值
                     * 
                     */
                    bool ProviderTypeHasBeenSet() const;

                    /**
                     * 获取<p>引用应用状态，ProviderType=1 时有效</p><p>枚举值：</p><ul><li>0： 来源应用可用</li><li>1： 来源应用不可用</li><li>2： 无权限</li><li>3： 嵌套引用: 来源应用线上生效配置中已含应用类子 Agent</li></ul>
                     * @return ReferenceAppStatus <p>引用应用状态，ProviderType=1 时有效</p><p>枚举值：</p><ul><li>0： 来源应用可用</li><li>1： 来源应用不可用</li><li>2： 无权限</li><li>3： 嵌套引用: 来源应用线上生效配置中已含应用类子 Agent</li></ul>
                     * 
                     */
                    int64_t GetReferenceAppStatus() const;

                    /**
                     * 设置<p>引用应用状态，ProviderType=1 时有效</p><p>枚举值：</p><ul><li>0： 来源应用可用</li><li>1： 来源应用不可用</li><li>2： 无权限</li><li>3： 嵌套引用: 来源应用线上生效配置中已含应用类子 Agent</li></ul>
                     * @param _referenceAppStatus <p>引用应用状态，ProviderType=1 时有效</p><p>枚举值：</p><ul><li>0： 来源应用可用</li><li>1： 来源应用不可用</li><li>2： 无权限</li><li>3： 嵌套引用: 来源应用线上生效配置中已含应用类子 Agent</li></ul>
                     * 
                     */
                    void SetReferenceAppStatus(const int64_t& _referenceAppStatus);

                    /**
                     * 判断参数 ReferenceAppStatus 是否已赋值
                     * @return ReferenceAppStatus 是否已赋值
                     * 
                     */
                    bool ReferenceAppStatusHasBeenSet() const;

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

                    /**
                     * <p>子 Agent 执行来源</p><p>枚举值：</p><ul><li>0： 应用内子 Agent</li><li>1： 引用已发布的应用</li></ul>
                     */
                    int64_t m_providerType;
                    bool m_providerTypeHasBeenSet;

                    /**
                     * <p>引用应用状态，ProviderType=1 时有效</p><p>枚举值：</p><ul><li>0： 来源应用可用</li><li>1： 来源应用不可用</li><li>2： 无权限</li><li>3： 嵌套引用: 来源应用线上生效配置中已含应用类子 Agent</li></ul>
                     */
                    int64_t m_referenceAppStatus;
                    bool m_referenceAppStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_AGENTSUMMARY_H_
