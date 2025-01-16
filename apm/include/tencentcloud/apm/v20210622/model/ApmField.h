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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_APMFIELD_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_APMFIELD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/APMKVItem.h>
#include <tencentcloud/apm/v20210622/model/APMKV.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 指标维度信息
                */
                class ApmField : public AbstractModel
                {
                public:
                    ApmField();
                    ~ApmField() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取指标名
                     * @return Key 指标名
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置指标名
                     * @param _key 指标名
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取指标数值
                     * @return Value 指标数值
                     * 
                     */
                    double GetValue() const;

                    /**
                     * 设置指标数值
                     * @param _value 指标数值
                     * 
                     */
                    void SetValue(const double& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取指标所对应的单位
                     * @return Unit 指标所对应的单位
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置指标所对应的单位
                     * @param _unit 指标所对应的单位
                     * 
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                    /**
                     * 获取同比结果数组，推荐使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompareVals 同比结果数组，推荐使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<APMKVItem> GetCompareVals() const;

                    /**
                     * 设置同比结果数组，推荐使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _compareVals 同比结果数组，推荐使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCompareVals(const std::vector<APMKVItem>& _compareVals);

                    /**
                     * 判断参数 CompareVals 是否已赋值
                     * @return CompareVals 是否已赋值
                     * 
                     */
                    bool CompareValsHasBeenSet() const;

                    /**
                     * 获取同比上一个周期的具体指标数值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastPeriodValue 同比上一个周期的具体指标数值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<APMKV> GetLastPeriodValue() const;

                    /**
                     * 设置同比上一个周期的具体指标数值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastPeriodValue 同比上一个周期的具体指标数值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastPeriodValue(const std::vector<APMKV>& _lastPeriodValue);

                    /**
                     * 判断参数 LastPeriodValue 是否已赋值
                     * @return LastPeriodValue 是否已赋值
                     * 
                     */
                    bool LastPeriodValueHasBeenSet() const;

                    /**
                     * 获取同比指标值，已弃用，不建议使用
                     * @return CompareVal 同比指标值，已弃用，不建议使用
                     * 
                     */
                    std::string GetCompareVal() const;

                    /**
                     * 设置同比指标值，已弃用，不建议使用
                     * @param _compareVal 同比指标值，已弃用，不建议使用
                     * 
                     */
                    void SetCompareVal(const std::string& _compareVal);

                    /**
                     * 判断参数 CompareVal 是否已赋值
                     * @return CompareVal 是否已赋值
                     * 
                     */
                    bool CompareValHasBeenSet() const;

                private:

                    /**
                     * 指标名
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 指标数值
                     */
                    double m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 指标所对应的单位
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * 同比结果数组，推荐使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<APMKVItem> m_compareVals;
                    bool m_compareValsHasBeenSet;

                    /**
                     * 同比上一个周期的具体指标数值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<APMKV> m_lastPeriodValue;
                    bool m_lastPeriodValueHasBeenSet;

                    /**
                     * 同比指标值，已弃用，不建议使用
                     */
                    std::string m_compareVal;
                    bool m_compareValHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_APMFIELD_H_
