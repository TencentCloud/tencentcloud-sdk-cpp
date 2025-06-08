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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_EXCEPTIONRULES_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_EXCEPTIONRULES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/ExceptionRule.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Web安全的例外规则
                */
                class ExceptionRules : public AbstractModel
                {
                public:
                    ExceptionRules();
                    ~ExceptionRules() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取例外规则的定义列表。使用 ModifySecurityPolicy 修改 Web 防护配置时: <li>若未指定 Rules 参数，或 Rules 参数长度为零：清空所有例外规则配置。</li><li>若 SecurityPolicy 参数中，未指定 ExceptionRules 参数值：保持已有例外规则配置，不做修改。</li>
                     * @return Rules 例外规则的定义列表。使用 ModifySecurityPolicy 修改 Web 防护配置时: <li>若未指定 Rules 参数，或 Rules 参数长度为零：清空所有例外规则配置。</li><li>若 SecurityPolicy 参数中，未指定 ExceptionRules 参数值：保持已有例外规则配置，不做修改。</li>
                     * 
                     */
                    std::vector<ExceptionRule> GetRules() const;

                    /**
                     * 设置例外规则的定义列表。使用 ModifySecurityPolicy 修改 Web 防护配置时: <li>若未指定 Rules 参数，或 Rules 参数长度为零：清空所有例外规则配置。</li><li>若 SecurityPolicy 参数中，未指定 ExceptionRules 参数值：保持已有例外规则配置，不做修改。</li>
                     * @param _rules 例外规则的定义列表。使用 ModifySecurityPolicy 修改 Web 防护配置时: <li>若未指定 Rules 参数，或 Rules 参数长度为零：清空所有例外规则配置。</li><li>若 SecurityPolicy 参数中，未指定 ExceptionRules 参数值：保持已有例外规则配置，不做修改。</li>
                     * 
                     */
                    void SetRules(const std::vector<ExceptionRule>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * 例外规则的定义列表。使用 ModifySecurityPolicy 修改 Web 防护配置时: <li>若未指定 Rules 参数，或 Rules 参数长度为零：清空所有例外规则配置。</li><li>若 SecurityPolicy 参数中，未指定 ExceptionRules 参数值：保持已有例外规则配置，不做修改。</li>
                     */
                    std::vector<ExceptionRule> m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_EXCEPTIONRULES_H_
