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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_FILTERS_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_FILTERS_H_

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
                * filter过滤条件
                */
                class Filters : public AbstractModel
                {
                public:
                    Filters();
                    ~Filters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取无
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 无
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置无
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 无
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
                     * 获取无
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Values 无
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置无
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _values 无
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
                     * 获取模糊匹配
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExactMatch 模糊匹配
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExactMatch() const;

                    /**
                     * 设置模糊匹配
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _exactMatch 模糊匹配
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExactMatch(const std::string& _exactMatch);

                    /**
                     * 判断参数 ExactMatch 是否已赋值
                     * @return ExactMatch 是否已赋值
                     * 
                     */
                    bool ExactMatchHasBeenSet() const;

                private:

                    /**
                     * 无
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 无
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * 模糊匹配
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_exactMatch;
                    bool m_exactMatchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_FILTERS_H_
