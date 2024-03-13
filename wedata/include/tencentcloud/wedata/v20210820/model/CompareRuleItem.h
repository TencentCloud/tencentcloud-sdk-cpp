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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_COMPARERULEITEM_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_COMPARERULEITEM_H_

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
                * 比较条件
                */
                class CompareRuleItem : public AbstractModel
                {
                public:
                    CompareRuleItem();
                    ~CompareRuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取比较类型 1.固定值  2.波动值  3.数值范围比较  4.枚举范围比较  5.不用比较
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompareType 比较类型 1.固定值  2.波动值  3.数值范围比较  4.枚举范围比较  5.不用比较
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCompareType() const;

                    /**
                     * 设置比较类型 1.固定值  2.波动值  3.数值范围比较  4.枚举范围比较  5.不用比较
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _compareType 比较类型 1.固定值  2.波动值  3.数值范围比较  4.枚举范围比较  5.不用比较
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
                     * 获取比较操作类型
<  <=  ==  =>  > !=
IRLCRO:在区间内(左闭右开)
IRLORC:在区间内(左开右闭)
IRLCRC:在区间内(左闭右闭)
IRLORO:在区间内(左开右开)
NRLCRO:不在区间内(左闭右开)
NRLORC:不在区间内(左开右闭)
NRLCRC:不在区间内(左闭右闭)
NRLORO:不在区间内(左开右开)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Operator 比较操作类型
<  <=  ==  =>  > !=
IRLCRO:在区间内(左闭右开)
IRLORC:在区间内(左开右闭)
IRLCRC:在区间内(左闭右闭)
IRLORO:在区间内(左开右开)
NRLCRO:不在区间内(左闭右开)
NRLORC:不在区间内(左开右闭)
NRLCRC:不在区间内(左闭右闭)
NRLORO:不在区间内(左开右开)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置比较操作类型
<  <=  ==  =>  > !=
IRLCRO:在区间内(左闭右开)
IRLORC:在区间内(左开右闭)
IRLCRC:在区间内(左闭右闭)
IRLORO:在区间内(左开右开)
NRLCRO:不在区间内(左闭右开)
NRLORC:不在区间内(左开右闭)
NRLCRC:不在区间内(左闭右闭)
NRLORO:不在区间内(左开右开)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operator 比较操作类型
<  <=  ==  =>  > !=
IRLCRO:在区间内(左闭右开)
IRLORC:在区间内(左开右闭)
IRLCRC:在区间内(左闭右闭)
IRLORO:在区间内(左开右开)
NRLCRO:不在区间内(左闭右开)
NRLORC:不在区间内(左开右闭)
NRLCRC:不在区间内(左闭右闭)
NRLORO:不在区间内(左开右开)
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
                     * 获取质量统计值类型 1.绝对值  2.上升 3. 下降  4._C包含   5. N_C不包含
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ValueComputeType 质量统计值类型 1.绝对值  2.上升 3. 下降  4._C包含   5. N_C不包含
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetValueComputeType() const;

                    /**
                     * 设置质量统计值类型 1.绝对值  2.上升 3. 下降  4._C包含   5. N_C不包含
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _valueComputeType 质量统计值类型 1.绝对值  2.上升 3. 下降  4._C包含   5. N_C不包含
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

                    /**
                     * 获取比较阈值列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ValueList 比较阈值列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ThresholdValue> GetValueList() const;

                    /**
                     * 设置比较阈值列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _valueList 比较阈值列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValueList(const std::vector<ThresholdValue>& _valueList);

                    /**
                     * 判断参数 ValueList 是否已赋值
                     * @return ValueList 是否已赋值
                     * 
                     */
                    bool ValueListHasBeenSet() const;

                private:

                    /**
                     * 比较类型 1.固定值  2.波动值  3.数值范围比较  4.枚举范围比较  5.不用比较
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_compareType;
                    bool m_compareTypeHasBeenSet;

                    /**
                     * 比较操作类型
<  <=  ==  =>  > !=
IRLCRO:在区间内(左闭右开)
IRLORC:在区间内(左开右闭)
IRLCRC:在区间内(左闭右闭)
IRLORO:在区间内(左开右开)
NRLCRO:不在区间内(左闭右开)
NRLORC:不在区间内(左开右闭)
NRLCRC:不在区间内(左闭右闭)
NRLORO:不在区间内(左开右开)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 质量统计值类型 1.绝对值  2.上升 3. 下降  4._C包含   5. N_C不包含
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_valueComputeType;
                    bool m_valueComputeTypeHasBeenSet;

                    /**
                     * 比较阈值列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ThresholdValue> m_valueList;
                    bool m_valueListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_COMPARERULEITEM_H_
