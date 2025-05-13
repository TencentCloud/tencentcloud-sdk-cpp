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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_INTELLIGENCERULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_INTELLIGENCERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/IntelligenceRuleItem.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 智能分析规则
                */
                class IntelligenceRule : public AbstractModel
                {
                public:
                    IntelligenceRule();
                    ~IntelligenceRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * @return Switch 开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * @param _switch 开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
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
                     * 获取规则详情。
                     * @return IntelligenceRuleItems 规则详情。
                     * 
                     */
                    std::vector<IntelligenceRuleItem> GetIntelligenceRuleItems() const;

                    /**
                     * 设置规则详情。
                     * @param _intelligenceRuleItems 规则详情。
                     * 
                     */
                    void SetIntelligenceRuleItems(const std::vector<IntelligenceRuleItem>& _intelligenceRuleItems);

                    /**
                     * 判断参数 IntelligenceRuleItems 是否已赋值
                     * @return IntelligenceRuleItems 是否已赋值
                     * 
                     */
                    bool IntelligenceRuleItemsHasBeenSet() const;

                private:

                    /**
                     * 开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 规则详情。
                     */
                    std::vector<IntelligenceRuleItem> m_intelligenceRuleItems;
                    bool m_intelligenceRuleItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INTELLIGENCERULE_H_
