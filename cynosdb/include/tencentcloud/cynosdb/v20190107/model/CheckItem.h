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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CHECKITEM_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CHECKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 校验项
                */
                class CheckItem : public AbstractModel
                {
                public:
                    CheckItem();
                    ~CheckItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取校验项名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Item 校验项名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetItem() const;

                    /**
                     * 设置校验项名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _item 校验项名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetItem(const std::string& _item);

                    /**
                     * 判断参数 Item 是否已赋值
                     * @return Item 是否已赋值
                     * 
                     */
                    bool ItemHasBeenSet() const;

                    /**
                     * 获取该项的校验结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Result 该项的校验结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置该项的校验结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _result 该项的校验结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取校验不通过的详细说明和修改建议
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CurrentValue 校验不通过的详细说明和修改建议
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCurrentValue() const;

                    /**
                     * 设置校验不通过的详细说明和修改建议
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _currentValue 校验不通过的详细说明和修改建议
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCurrentValue(const std::string& _currentValue);

                    /**
                     * 判断参数 CurrentValue 是否已赋值
                     * @return CurrentValue 是否已赋值
                     * 
                     */
                    bool CurrentValueHasBeenSet() const;

                    /**
                     * 获取校验不通过的详细说明和修改建议
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpectedValue 校验不通过的详细说明和修改建议
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpectedValue() const;

                    /**
                     * 设置校验不通过的详细说明和修改建议
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expectedValue 校验不通过的详细说明和修改建议
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpectedValue(const std::string& _expectedValue);

                    /**
                     * 判断参数 ExpectedValue 是否已赋值
                     * @return ExpectedValue 是否已赋值
                     * 
                     */
                    bool ExpectedValueHasBeenSet() const;

                private:

                    /**
                     * 校验项名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_item;
                    bool m_itemHasBeenSet;

                    /**
                     * 该项的校验结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 校验不通过的详细说明和修改建议
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_currentValue;
                    bool m_currentValueHasBeenSet;

                    /**
                     * 校验不通过的详细说明和修改建议
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expectedValue;
                    bool m_expectedValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CHECKITEM_H_
