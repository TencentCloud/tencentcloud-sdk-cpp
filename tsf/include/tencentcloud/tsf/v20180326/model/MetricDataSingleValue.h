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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_METRICDATASINGLEVALUE_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_METRICDATASINGLEVALUE_H_

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
                * 单值指标
                */
                class MetricDataSingleValue : public AbstractModel
                {
                public:
                    MetricDataSingleValue();
                    ~MetricDataSingleValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取指标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetricName 指标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置指标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MetricName 指标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取统计方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetricFunction 统计方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMetricFunction() const;

                    /**
                     * 设置统计方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MetricFunction 统计方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMetricFunction(const std::string& _metricFunction);

                    /**
                     * 判断参数 MetricFunction 是否已赋值
                     * @return MetricFunction 是否已赋值
                     */
                    bool MetricFunctionHasBeenSet() const;

                    /**
                     * 获取指标值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetricDataValue 指标值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMetricDataValue() const;

                    /**
                     * 设置指标值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MetricDataValue 指标值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMetricDataValue(const std::string& _metricDataValue);

                    /**
                     * 判断参数 MetricDataValue 是否已赋值
                     * @return MetricDataValue 是否已赋值
                     */
                    bool MetricDataValueHasBeenSet() const;

                private:

                    /**
                     * 指标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 统计方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_metricFunction;
                    bool m_metricFunctionHasBeenSet;

                    /**
                     * 指标值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_metricDataValue;
                    bool m_metricDataValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_METRICDATASINGLEVALUE_H_
