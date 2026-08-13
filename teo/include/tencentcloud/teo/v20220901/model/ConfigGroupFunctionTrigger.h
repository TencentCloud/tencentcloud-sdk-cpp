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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CONFIGGROUPFUNCTIONTRIGGER_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CONFIGGROUPFUNCTIONTRIGGER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/ConfigGroupFunctionRegionSelection.h>
#include <tencentcloud/teo/v20220901/model/ConfigGroupFunctionWeightedSelection.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 边缘函数触发规则。
                */
                class ConfigGroupFunctionTrigger : public AbstractModel
                {
                public:
                    ConfigGroupFunctionTrigger();
                    ~ConfigGroupFunctionTrigger() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p><a href="https://cloud.tencent.com/document/product/1552/90438#33f65828-c6c6-4b66-a011-25a20b548d5d">匹配条件。</a></p>
                     * @return Condition <p><a href="https://cloud.tencent.com/document/product/1552/90438#33f65828-c6c6-4b66-a011-25a20b548d5d">匹配条件。</a></p>
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置<p><a href="https://cloud.tencent.com/document/product/1552/90438#33f65828-c6c6-4b66-a011-25a20b548d5d">匹配条件。</a></p>
                     * @param _condition <p><a href="https://cloud.tencent.com/document/product/1552/90438#33f65828-c6c6-4b66-a011-25a20b548d5d">匹配条件。</a></p>
                     * 
                     */
                    void SetCondition(const std::string& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     * 
                     */
                    bool ConditionHasBeenSet() const;

                    /**
                     * 获取<p>函数选择配置类型：</p><p>枚举值：</p><ul><li>direct： 直接指定执行函数</li><li>weight： 基于权重比选择函数</li><li>region： 基于客户端 IP 的国家/地区选择函数</li></ul>
                     * @return TriggerType <p>函数选择配置类型：</p><p>枚举值：</p><ul><li>direct： 直接指定执行函数</li><li>weight： 基于权重比选择函数</li><li>region： 基于客户端 IP 的国家/地区选择函数</li></ul>
                     * 
                     */
                    std::string GetTriggerType() const;

                    /**
                     * 设置<p>函数选择配置类型：</p><p>枚举值：</p><ul><li>direct： 直接指定执行函数</li><li>weight： 基于权重比选择函数</li><li>region： 基于客户端 IP 的国家/地区选择函数</li></ul>
                     * @param _triggerType <p>函数选择配置类型：</p><p>枚举值：</p><ul><li>direct： 直接指定执行函数</li><li>weight： 基于权重比选择函数</li><li>region： 基于客户端 IP 的国家/地区选择函数</li></ul>
                     * 
                     */
                    void SetTriggerType(const std::string& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

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
                     * 获取<p>基于客户端 IP 国家/地区的函数选择配置。</p>
                     * @return RegionMappingSelections <p>基于客户端 IP 国家/地区的函数选择配置。</p>
                     * 
                     */
                    std::vector<ConfigGroupFunctionRegionSelection> GetRegionMappingSelections() const;

                    /**
                     * 设置<p>基于客户端 IP 国家/地区的函数选择配置。</p>
                     * @param _regionMappingSelections <p>基于客户端 IP 国家/地区的函数选择配置。</p>
                     * 
                     */
                    void SetRegionMappingSelections(const std::vector<ConfigGroupFunctionRegionSelection>& _regionMappingSelections);

                    /**
                     * 判断参数 RegionMappingSelections 是否已赋值
                     * @return RegionMappingSelections 是否已赋值
                     * 
                     */
                    bool RegionMappingSelectionsHasBeenSet() const;

                    /**
                     * 获取<p>基于权重的函数选择配置。</p>
                     * @return WeightedSelections <p>基于权重的函数选择配置。</p>
                     * 
                     */
                    std::vector<ConfigGroupFunctionWeightedSelection> GetWeightedSelections() const;

                    /**
                     * 设置<p>基于权重的函数选择配置。</p>
                     * @param _weightedSelections <p>基于权重的函数选择配置。</p>
                     * 
                     */
                    void SetWeightedSelections(const std::vector<ConfigGroupFunctionWeightedSelection>& _weightedSelections);

                    /**
                     * 判断参数 WeightedSelections 是否已赋值
                     * @return WeightedSelections 是否已赋值
                     * 
                     */
                    bool WeightedSelectionsHasBeenSet() const;

                    /**
                     * 获取<p>规则描述。</p>
                     * @return Remark <p>规则描述。</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>规则描述。</p>
                     * @param _remark <p>规则描述。</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * <p><a href="https://cloud.tencent.com/document/product/1552/90438#33f65828-c6c6-4b66-a011-25a20b548d5d">匹配条件。</a></p>
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * <p>函数选择配置类型：</p><p>枚举值：</p><ul><li>direct： 直接指定执行函数</li><li>weight： 基于权重比选择函数</li><li>region： 基于客户端 IP 的国家/地区选择函数</li></ul>
                     */
                    std::string m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * <p>指定执行的函数，取值为函数在站点内的唯一标识。当 TriggerType 为 direct 时生效。</p>
                     */
                    std::string m_function;
                    bool m_functionHasBeenSet;

                    /**
                     * <p>基于客户端 IP 国家/地区的函数选择配置。</p>
                     */
                    std::vector<ConfigGroupFunctionRegionSelection> m_regionMappingSelections;
                    bool m_regionMappingSelectionsHasBeenSet;

                    /**
                     * <p>基于权重的函数选择配置。</p>
                     */
                    std::vector<ConfigGroupFunctionWeightedSelection> m_weightedSelections;
                    bool m_weightedSelectionsHasBeenSet;

                    /**
                     * <p>规则描述。</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CONFIGGROUPFUNCTIONTRIGGER_H_
