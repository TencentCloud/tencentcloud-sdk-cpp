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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_QUANTILEENTITY_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_QUANTILEENTITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 分位数据模型
                */
                class QuantileEntity : public AbstractModel
                {
                public:
                    QuantileEntity();
                    ~QuantileEntity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取最大值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxValue 最大值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMaxValue() const;

                    /**
                     * 设置最大值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxValue 最大值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxValue(const std::string& _maxValue);

                    /**
                     * 判断参数 MaxValue 是否已赋值
                     * @return MaxValue 是否已赋值
                     * 
                     */
                    bool MaxValueHasBeenSet() const;

                    /**
                     * 获取最小值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MinValue 最小值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMinValue() const;

                    /**
                     * 设置最小值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _minValue 最小值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMinValue(const std::string& _minValue);

                    /**
                     * 判断参数 MinValue 是否已赋值
                     * @return MinValue 是否已赋值
                     * 
                     */
                    bool MinValueHasBeenSet() const;

                    /**
                     * 获取五分位值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FifthPositionValue 五分位值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFifthPositionValue() const;

                    /**
                     * 设置五分位值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fifthPositionValue 五分位值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFifthPositionValue(const std::string& _fifthPositionValue);

                    /**
                     * 判断参数 FifthPositionValue 是否已赋值
                     * @return FifthPositionValue 是否已赋值
                     * 
                     */
                    bool FifthPositionValueHasBeenSet() const;

                    /**
                     * 获取九分位值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NinthPositionValue 九分位值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNinthPositionValue() const;

                    /**
                     * 设置九分位值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ninthPositionValue 九分位值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNinthPositionValue(const std::string& _ninthPositionValue);

                    /**
                     * 判断参数 NinthPositionValue 是否已赋值
                     * @return NinthPositionValue 是否已赋值
                     * 
                     */
                    bool NinthPositionValueHasBeenSet() const;

                private:

                    /**
                     * 最大值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_maxValue;
                    bool m_maxValueHasBeenSet;

                    /**
                     * 最小值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_minValue;
                    bool m_minValueHasBeenSet;

                    /**
                     * 五分位值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fifthPositionValue;
                    bool m_fifthPositionValueHasBeenSet;

                    /**
                     * 九分位值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ninthPositionValue;
                    bool m_ninthPositionValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_QUANTILEENTITY_H_
