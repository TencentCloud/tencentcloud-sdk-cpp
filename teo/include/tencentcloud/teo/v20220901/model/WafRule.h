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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_WAFRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_WAFRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Waf规则
                */
                class WafRule : public AbstractModel
                {
                public:
                    WafRule();
                    ~WafRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取托管规则开关，取值有：
<li> on：开启；</li>
<li> off：关闭。</li>
                     * @return Switch 托管规则开关，取值有：
<li> on：开启；</li>
<li> off：关闭。</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置托管规则开关，取值有：
<li> on：开启；</li>
<li> off：关闭。</li>
                     * @param _switch 托管规则开关，取值有：
<li> on：开启；</li>
<li> off：关闭。</li>
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
                     * 获取黑名单ID列表，将规则ID加入本参数列表中代表该ID关闭，即该规则ID不再生效。
                     * @return BlockRuleIDs 黑名单ID列表，将规则ID加入本参数列表中代表该ID关闭，即该规则ID不再生效。
                     * 
                     */
                    std::vector<int64_t> GetBlockRuleIDs() const;

                    /**
                     * 设置黑名单ID列表，将规则ID加入本参数列表中代表该ID关闭，即该规则ID不再生效。
                     * @param _blockRuleIDs 黑名单ID列表，将规则ID加入本参数列表中代表该ID关闭，即该规则ID不再生效。
                     * 
                     */
                    void SetBlockRuleIDs(const std::vector<int64_t>& _blockRuleIDs);

                    /**
                     * 判断参数 BlockRuleIDs 是否已赋值
                     * @return BlockRuleIDs 是否已赋值
                     * 
                     */
                    bool BlockRuleIDsHasBeenSet() const;

                    /**
                     * 获取观察模式ID列表，将规则ID加入本参数列表中代表该ID使用观察模式生效，即该规则ID进入观察模式。
                     * @return ObserveRuleIDs 观察模式ID列表，将规则ID加入本参数列表中代表该ID使用观察模式生效，即该规则ID进入观察模式。
                     * 
                     */
                    std::vector<int64_t> GetObserveRuleIDs() const;

                    /**
                     * 设置观察模式ID列表，将规则ID加入本参数列表中代表该ID使用观察模式生效，即该规则ID进入观察模式。
                     * @param _observeRuleIDs 观察模式ID列表，将规则ID加入本参数列表中代表该ID使用观察模式生效，即该规则ID进入观察模式。
                     * 
                     */
                    void SetObserveRuleIDs(const std::vector<int64_t>& _observeRuleIDs);

                    /**
                     * 判断参数 ObserveRuleIDs 是否已赋值
                     * @return ObserveRuleIDs 是否已赋值
                     * 
                     */
                    bool ObserveRuleIDsHasBeenSet() const;

                private:

                    /**
                     * 托管规则开关，取值有：
<li> on：开启；</li>
<li> off：关闭。</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 黑名单ID列表，将规则ID加入本参数列表中代表该ID关闭，即该规则ID不再生效。
                     */
                    std::vector<int64_t> m_blockRuleIDs;
                    bool m_blockRuleIDsHasBeenSet;

                    /**
                     * 观察模式ID列表，将规则ID加入本参数列表中代表该ID使用观察模式生效，即该规则ID进入观察模式。
                     */
                    std::vector<int64_t> m_observeRuleIDs;
                    bool m_observeRuleIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_WAFRULE_H_
