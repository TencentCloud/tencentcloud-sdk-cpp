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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_FILTER_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_FILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * 云 API 通用过滤结构。多个 Filter 之间为 AND 关系；同一 Filter 内多个 Values 为 OR 关系。
                */
                class Filter : public AbstractModel
                {
                public:
                    Filter();
                    ~Filter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取过滤属性名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 过滤属性名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置过滤属性名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 过滤属性名
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取过滤值列表（同一 Filter 内多个值为 OR 关系）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Values 过滤值列表（同一 Filter 内多个值为 OR 关系）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置过滤值列表（同一 Filter 内多个值为 OR 关系）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _values 过滤值列表（同一 Filter 内多个值为 OR 关系）
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取是否精确匹配，默认 false（模糊匹配）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExactMatch 是否精确匹配，默认 false（模糊匹配）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetExactMatch() const;

                    /**
                     * 设置是否精确匹配，默认 false（模糊匹配）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _exactMatch 是否精确匹配，默认 false（模糊匹配）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExactMatch(const bool& _exactMatch);

                    /**
                     * 判断参数 ExactMatch 是否已赋值
                     * @return ExactMatch 是否已赋值
                     * 
                     */
                    bool ExactMatchHasBeenSet() const;

                private:

                    /**
                     * 过滤属性名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 过滤值列表（同一 Filter 内多个值为 OR 关系）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * 是否精确匹配，默认 false（模糊匹配）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_exactMatch;
                    bool m_exactMatchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_FILTER_H_
