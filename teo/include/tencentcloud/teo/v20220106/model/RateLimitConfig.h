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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_RATELIMITCONFIG_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_RATELIMITCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/RateLimitUserRule.h>
#include <tencentcloud/teo/v20220106/model/RateLimitTemplate.h>
#include <tencentcloud/teo/v20220106/model/RateLimitIntelligence.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * RateLimit配置
                */
                class RateLimitConfig : public AbstractModel
                {
                public:
                    RateLimitConfig();
                    ~RateLimitConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取开关
                     * @return Switch 开关
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置开关
                     * @param Switch 开关
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取用户规则
                     * @return UserRules 用户规则
                     */
                    std::vector<RateLimitUserRule> GetUserRules() const;

                    /**
                     * 设置用户规则
                     * @param UserRules 用户规则
                     */
                    void SetUserRules(const std::vector<RateLimitUserRule>& _userRules);

                    /**
                     * 判断参数 UserRules 是否已赋值
                     * @return UserRules 是否已赋值
                     */
                    bool UserRulesHasBeenSet() const;

                    /**
                     * 获取默认模板
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Template 默认模板
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RateLimitTemplate GetTemplate() const;

                    /**
                     * 设置默认模板
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Template 默认模板
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTemplate(const RateLimitTemplate& _template);

                    /**
                     * 判断参数 Template 是否已赋值
                     * @return Template 是否已赋值
                     */
                    bool TemplateHasBeenSet() const;

                    /**
                     * 获取智能客户端过滤
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Intelligence 智能客户端过滤
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RateLimitIntelligence GetIntelligence() const;

                    /**
                     * 设置智能客户端过滤
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Intelligence 智能客户端过滤
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIntelligence(const RateLimitIntelligence& _intelligence);

                    /**
                     * 判断参数 Intelligence 是否已赋值
                     * @return Intelligence 是否已赋值
                     */
                    bool IntelligenceHasBeenSet() const;

                private:

                    /**
                     * 开关
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 用户规则
                     */
                    std::vector<RateLimitUserRule> m_userRules;
                    bool m_userRulesHasBeenSet;

                    /**
                     * 默认模板
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RateLimitTemplate m_template;
                    bool m_templateHasBeenSet;

                    /**
                     * 智能客户端过滤
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RateLimitIntelligence m_intelligence;
                    bool m_intelligenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_RATELIMITCONFIG_H_
