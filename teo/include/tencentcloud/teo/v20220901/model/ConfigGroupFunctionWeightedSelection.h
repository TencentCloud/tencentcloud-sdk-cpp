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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CONFIGGROUPFUNCTIONWEIGHTEDSELECTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CONFIGGROUPFUNCTIONWEIGHTEDSELECTION_H_

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
                * 权重策略配置。
                */
                class ConfigGroupFunctionWeightedSelection : public AbstractModel
                {
                public:
                    ConfigGroupFunctionWeightedSelection();
                    ~ConfigGroupFunctionWeightedSelection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>指定执行的函数，取值为函数在站点内的唯一标识。当 TriggerType 为 direct 时生效。</p>
                     * @return Function <p>指定执行的函数，取值为函数在站点内的唯一标识。当 TriggerType 为 direct 时生效。</p>
                     * 
                     */
                    std::string GetFunction() const;

                    /**
                     * 设置<p>指定执行的函数，取值为函数在站点内的唯一标识。当 TriggerType 为 direct 时生效。</p>
                     * @param _function <p>指定执行的函数，取值为函数在站点内的唯一标识。当 TriggerType 为 direct 时生效。</p>
                     * 
                     */
                    void SetFunction(const std::string& _function);

                    /**
                     * 判断参数 Function 是否已赋值
                     * @return Function 是否已赋值
                     * 
                     */
                    bool FunctionHasBeenSet() const;

                    /**
                     * 获取<p>选中权重。取值范围0-100，所有的权重之和需要为100。 选中概率计算方式为： weight/100。例如设置了两个函数 A 和 B ，其中 A 的权重为30，那么 B 的权重必须为70，最终选中 A 的概率为30%，选中 B 的概率为70%。</p>
                     * @return Weight <p>选中权重。取值范围0-100，所有的权重之和需要为100。 选中概率计算方式为： weight/100。例如设置了两个函数 A 和 B ，其中 A 的权重为30，那么 B 的权重必须为70，最终选中 A 的概率为30%，选中 B 的概率为70%。</p>
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置<p>选中权重。取值范围0-100，所有的权重之和需要为100。 选中概率计算方式为： weight/100。例如设置了两个函数 A 和 B ，其中 A 的权重为30，那么 B 的权重必须为70，最终选中 A 的概率为30%，选中 B 的概率为70%。</p>
                     * @param _weight <p>选中权重。取值范围0-100，所有的权重之和需要为100。 选中概率计算方式为： weight/100。例如设置了两个函数 A 和 B ，其中 A 的权重为30，那么 B 的权重必须为70，最终选中 A 的概率为30%，选中 B 的概率为70%。</p>
                     * 
                     */
                    void SetWeight(const uint64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                private:

                    /**
                     * <p>指定执行的函数，取值为函数在站点内的唯一标识。当 TriggerType 为 direct 时生效。</p>
                     */
                    std::string m_function;
                    bool m_functionHasBeenSet;

                    /**
                     * <p>选中权重。取值范围0-100，所有的权重之和需要为100。 选中概率计算方式为： weight/100。例如设置了两个函数 A 和 B ，其中 A 的权重为30，那么 B 的权重必须为70，最终选中 A 的概率为30%，选中 B 的概率为70%。</p>
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CONFIGGROUPFUNCTIONWEIGHTEDSELECTION_H_
