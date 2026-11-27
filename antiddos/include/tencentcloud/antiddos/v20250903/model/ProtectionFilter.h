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

#ifndef TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_PROTECTIONFILTER_H_
#define TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_PROTECTIONFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20250903
        {
            namespace Model
            {
                /**
                * 用于按指定字段过滤查询结果，例如按防护实例 ID、名称、状态等过滤。多个 Filter 之间为逻辑与（AND）关系；同一 Filter 的多个 Values 之间为逻辑或（OR）关系。
                */
                class ProtectionFilter : public AbstractModel
                {
                public:
                    ProtectionFilter();
                    ~ProtectionFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>需要过滤的字段名。</p>
                     * @return Name <p>需要过滤的字段名。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>需要过滤的字段名。</p>
                     * @param _name <p>需要过滤的字段名。</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>对应字段的过滤值。</p>
                     * @return Values <p>对应字段的过滤值。</p>
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置<p>对应字段的过滤值。</p>
                     * @param _values <p>对应字段的过滤值。</p>
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                    /**
                     * 获取<p>是否启用模糊查询。</p>
                     * @return Fuzzy <p>是否启用模糊查询。</p>
                     * 
                     */
                    bool GetFuzzy() const;

                    /**
                     * 设置<p>是否启用模糊查询。</p>
                     * @param _fuzzy <p>是否启用模糊查询。</p>
                     * 
                     */
                    void SetFuzzy(const bool& _fuzzy);

                    /**
                     * 判断参数 Fuzzy 是否已赋值
                     * @return Fuzzy 是否已赋值
                     * 
                     */
                    bool FuzzyHasBeenSet() const;

                private:

                    /**
                     * <p>需要过滤的字段名。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>对应字段的过滤值。</p>
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * <p>是否启用模糊查询。</p>
                     */
                    bool m_fuzzy;
                    bool m_fuzzyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_PROTECTIONFILTER_H_
