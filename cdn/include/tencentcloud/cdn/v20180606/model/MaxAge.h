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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_MAXAGE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_MAXAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/MaxAgeRule.h>
#include <tencentcloud/cdn/v20180606/model/MaxAgeCodeRule.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 浏览器缓存规则配置，用于设置 MaxAge 默认值，默认为关闭状态
                */
                class MaxAge : public AbstractModel
                {
                public:
                    MaxAge();
                    ~MaxAge() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取浏览器缓存配置开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Switch 浏览器缓存配置开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置浏览器缓存配置开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _switch 浏览器缓存配置开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取MaxAge 规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxAgeRules MaxAge 规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MaxAgeRule> GetMaxAgeRules() const;

                    /**
                     * 设置MaxAge 规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxAgeRules MaxAge 规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxAgeRules(const std::vector<MaxAgeRule>& _maxAgeRules);

                    /**
                     * 判断参数 MaxAgeRules 是否已赋值
                     * @return MaxAgeRules 是否已赋值
                     * 
                     */
                    bool MaxAgeRulesHasBeenSet() const;

                    /**
                     * 获取MaxAge 状态码相关规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxAgeCodeRule MaxAge 状态码相关规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MaxAgeCodeRule GetMaxAgeCodeRule() const;

                    /**
                     * 设置MaxAge 状态码相关规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxAgeCodeRule MaxAge 状态码相关规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxAgeCodeRule(const MaxAgeCodeRule& _maxAgeCodeRule);

                    /**
                     * 判断参数 MaxAgeCodeRule 是否已赋值
                     * @return MaxAgeCodeRule 是否已赋值
                     * 
                     */
                    bool MaxAgeCodeRuleHasBeenSet() const;

                private:

                    /**
                     * 浏览器缓存配置开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * MaxAge 规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MaxAgeRule> m_maxAgeRules;
                    bool m_maxAgeRulesHasBeenSet;

                    /**
                     * MaxAge 状态码相关规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MaxAgeCodeRule m_maxAgeCodeRule;
                    bool m_maxAgeCodeRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_MAXAGE_H_
