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

#ifndef TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_SPEEDLIMITRULES_H_
#define TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_SPEEDLIMITRULES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20250903/model/SpeedLimitRule.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20250903
        {
            namespace Model
            {
                /**
                * 端口限速规则列表。
                */
                class SpeedLimitRules : public AbstractModel
                {
                public:
                    SpeedLimitRules();
                    ~SpeedLimitRules() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>端口限速规则列表。</p>
                     * @return Rules <p>端口限速规则列表。</p>
                     * 
                     */
                    std::vector<SpeedLimitRule> GetRules() const;

                    /**
                     * 设置<p>端口限速规则列表。</p>
                     * @param _rules <p>端口限速规则列表。</p>
                     * 
                     */
                    void SetRules(const std::vector<SpeedLimitRule>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * <p>端口限速规则列表。</p>
                     */
                    std::vector<SpeedLimitRule> m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_SPEEDLIMITRULES_H_
