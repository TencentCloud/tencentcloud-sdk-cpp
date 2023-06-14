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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_COMPARERESULTITEM_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_COMPARERESULTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/ThresholdValue.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 对比结果项
                */
                class CompareResultItem : public AbstractModel
                {
                public:
                    CompareResultItem();
                    ~CompareResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取对比结果， 1为真 2为假
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FixResult 对比结果， 1为真 2为假
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFixResult() const;

                    /**
                     * 设置对比结果， 1为真 2为假
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fixResult 对比结果， 1为真 2为假
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFixResult(const uint64_t& _fixResult);

                    /**
                     * 判断参数 FixResult 是否已赋值
                     * @return FixResult 是否已赋值
                     * 
                     */
                    bool FixResultHasBeenSet() const;

                    /**
                     * 获取质量sql执行结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultValue 质量sql执行结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResultValue() const;

                    /**
                     * 设置质量sql执行结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resultValue 质量sql执行结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResultValue(const std::string& _resultValue);

                    /**
                     * 判断参数 ResultValue 是否已赋值
                     * @return ResultValue 是否已赋值
                     * 
                     */
                    bool ResultValueHasBeenSet() const;

                    /**
                     * 获取阈值列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Values 阈值列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ThresholdValue> GetValues() const;

                    /**
                     * 设置阈值列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _values 阈值列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValues(const std::vector<ThresholdValue>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                    /**
                     * 获取比较操作类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Operator 比较操作类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置比较操作类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operator 比较操作类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取比较类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompareType 比较类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCompareType() const;

                    /**
                     * 设置比较类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _compareType 比较类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCompareType(const uint64_t& _compareType);

                    /**
                     * 判断参数 CompareType 是否已赋值
                     * @return CompareType 是否已赋值
                     * 
                     */
                    bool CompareTypeHasBeenSet() const;

                    /**
                     * 获取值比较类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ValueComputeType 值比较类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetValueComputeType() const;

                    /**
                     * 设置值比较类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _valueComputeType 值比较类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValueComputeType(const uint64_t& _valueComputeType);

                    /**
                     * 判断参数 ValueComputeType 是否已赋值
                     * @return ValueComputeType 是否已赋值
                     * 
                     */
                    bool ValueComputeTypeHasBeenSet() const;

                private:

                    /**
                     * 对比结果， 1为真 2为假
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_fixResult;
                    bool m_fixResultHasBeenSet;

                    /**
                     * 质量sql执行结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resultValue;
                    bool m_resultValueHasBeenSet;

                    /**
                     * 阈值列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ThresholdValue> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * 比较操作类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 比较类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_compareType;
                    bool m_compareTypeHasBeenSet;

                    /**
                     * 值比较类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_valueComputeType;
                    bool m_valueComputeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_COMPARERESULTITEM_H_
