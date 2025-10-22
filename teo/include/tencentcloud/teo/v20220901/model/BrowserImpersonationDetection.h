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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_BROWSERIMPERSONATIONDETECTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_BROWSERIMPERSONATIONDETECTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/BrowserImpersonationDetectionRule.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 浏览器伪造识别规则（原主动特征识别规则）的配置。
                */
                class BrowserImpersonationDetection : public AbstractModel
                {
                public:
                    BrowserImpersonationDetection();
                    ~BrowserImpersonationDetection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取浏览器伪造识别规则的列表。使用 ModifySecurityPolicy 修改 Web 防护配置时： <br> <li>  若未指定 SecurityPolicy.BotManagement.BrowserImpersonationDetection 中的 Rules 参数，或 Rules 参数长度为零： 清空所有浏览器伪造识别规则配置。</li> <li> 若 SecurityPolicy.BotManagement 参数中，未指定 BrowserImpersonationDetection 参数值： 保持已有浏览器伪造识别规则配置，不做修改。</li>
                     * @return Rules 浏览器伪造识别规则的列表。使用 ModifySecurityPolicy 修改 Web 防护配置时： <br> <li>  若未指定 SecurityPolicy.BotManagement.BrowserImpersonationDetection 中的 Rules 参数，或 Rules 参数长度为零： 清空所有浏览器伪造识别规则配置。</li> <li> 若 SecurityPolicy.BotManagement 参数中，未指定 BrowserImpersonationDetection 参数值： 保持已有浏览器伪造识别规则配置，不做修改。</li>
                     * 
                     */
                    std::vector<BrowserImpersonationDetectionRule> GetRules() const;

                    /**
                     * 设置浏览器伪造识别规则的列表。使用 ModifySecurityPolicy 修改 Web 防护配置时： <br> <li>  若未指定 SecurityPolicy.BotManagement.BrowserImpersonationDetection 中的 Rules 参数，或 Rules 参数长度为零： 清空所有浏览器伪造识别规则配置。</li> <li> 若 SecurityPolicy.BotManagement 参数中，未指定 BrowserImpersonationDetection 参数值： 保持已有浏览器伪造识别规则配置，不做修改。</li>
                     * @param _rules 浏览器伪造识别规则的列表。使用 ModifySecurityPolicy 修改 Web 防护配置时： <br> <li>  若未指定 SecurityPolicy.BotManagement.BrowserImpersonationDetection 中的 Rules 参数，或 Rules 参数长度为零： 清空所有浏览器伪造识别规则配置。</li> <li> 若 SecurityPolicy.BotManagement 参数中，未指定 BrowserImpersonationDetection 参数值： 保持已有浏览器伪造识别规则配置，不做修改。</li>
                     * 
                     */
                    void SetRules(const std::vector<BrowserImpersonationDetectionRule>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * 浏览器伪造识别规则的列表。使用 ModifySecurityPolicy 修改 Web 防护配置时： <br> <li>  若未指定 SecurityPolicy.BotManagement.BrowserImpersonationDetection 中的 Rules 参数，或 Rules 参数长度为零： 清空所有浏览器伪造识别规则配置。</li> <li> 若 SecurityPolicy.BotManagement 参数中，未指定 BrowserImpersonationDetection 参数值： 保持已有浏览器伪造识别规则配置，不做修改。</li>
                     */
                    std::vector<BrowserImpersonationDetectionRule> m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BROWSERIMPERSONATIONDETECTION_H_
