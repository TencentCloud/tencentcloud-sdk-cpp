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
                     * 获取昨日同比指标值，已弃用，不建议使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompareVal 昨日同比指标值，已弃用，不建议使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCompareVal() const;

                    /**
                     * 设置昨日同比指标值，已弃用，不建议使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CompareVal 昨日同比指标值，已弃用，不建议使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCompareVal(const std::string& _compareVal);

                    /**
                     * 判断参数 CompareVal 是否已赋值
                     * @return CompareVal 是否已赋值
                     */
                    bool CompareValHasBeenSet() const;

                    /**
                     * 获取Compare值结果数组，推荐使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompareVals Compare值结果数组，推荐使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<APMKVItem> GetCompareVals() const;

                    /**
                     * 设置Compare值结果数组，推荐使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CompareVals Compare值结果数组，推荐使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCompareVals(const std::vector<APMKVItem>& _compareVals);

                    /**
                     * 判断参数 CompareVals 是否已赋值
                     * @return CompareVals 是否已赋值
                     */
                    bool CompareValsHasBeenSet() const;

                    /**
                     * 获取指标值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value 指标值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetValue() const;

                    /**
                     * 设置指标值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Value 指标值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetValue(const double& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取指标所对应的单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Unit 指标所对应的单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置指标所对应的单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Unit 指标所对应的单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     */
                    bool UnitHasBeenSet() const;

                    /**
                     * 获取请求数
                     * @return Key 请求数
                     */
                    std::string GetKey() const;

                    /**
                     * 设置请求数
                     * @param Key 请求数
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取同环比上周期具体数值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastPeriodValue 同环比上周期具体数值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<APMKV> GetLastPeriodValue() const;

                    /**
                     * 设置同环比上周期具体数值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LastPeriodValue 同环比上周期具体数值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLastPeriodValue(const std::vector<APMKV>& _lastPeriodValue);

                    /**
                     * 判断参数 LastPeriodValue 是否已赋值
                     * @return LastPeriodValue 是否已赋值
                     */
                    bool LastPeriodValueHasBeenSet() const;

                private:

                    /**
                     * 昨日同比指标值，已弃用，不建议使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_compareVal;
                    bool m_compareValHasBeenSet;

                    /**
                     * Compare值结果数组，推荐使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<APMKVItem> m_compareVals;
                    bool m_compareValsHasBeenSet;

                    /**
                     * 指标值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 指标所对应的单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * 请求数
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 同环比上周期具体数值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<APMKV> m_lastPeriodValue;
                    bool m_lastPeriodValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_APMFIELD_H_
