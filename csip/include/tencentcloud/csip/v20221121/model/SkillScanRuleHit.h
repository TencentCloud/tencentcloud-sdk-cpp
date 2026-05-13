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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SKILLSCANRULEHIT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SKILLSCANRULEHIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 命中规则项
                */
                class SkillScanRuleHit : public AbstractModel
                {
                public:
                    SkillScanRuleHit();
                    ~SkillScanRuleHit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取融合规则编号（9xxxx），可与 RuleCatalog 交叉引用
                     * @return RuleID 融合规则编号（9xxxx），可与 RuleCatalog 交叉引用
                     * 
                     */
                    std::string GetRuleID() const;

                    /**
                     * 设置融合规则编号（9xxxx），可与 RuleCatalog 交叉引用
                     * @param _ruleID 融合规则编号（9xxxx），可与 RuleCatalog 交叉引用
                     * 
                     */
                    void SetRuleID(const std::string& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取当前命中规则的具体发现描述，包含文件位置、行为特征、风险点等信息
                     * @return Description 当前命中规则的具体发现描述，包含文件位置、行为特征、风险点等信息
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置当前命中规则的具体发现描述，包含文件位置、行为特征、风险点等信息
                     * @param _description 当前命中规则的具体发现描述，包含文件位置、行为特征、风险点等信息
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 融合规则编号（9xxxx），可与 RuleCatalog 交叉引用
                     */
                    std::string m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * 当前命中规则的具体发现描述，包含文件位置、行为特征、风险点等信息
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SKILLSCANRULEHIT_H_
