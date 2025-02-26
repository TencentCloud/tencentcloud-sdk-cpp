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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_SINGLEORDEREDDATAPOINT_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_SINGLEORDEREDDATAPOINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/Dimension.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 单个有序数据点
                */
                class SingleOrderedDataPoint : public AbstractModel
                {
                public:
                    SingleOrderedDataPoint();
                    ~SingleOrderedDataPoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例对象维度组合	
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Dimensions 实例对象维度组合	
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Dimension> GetDimensions() const;

                    /**
                     * 设置实例对象维度组合	
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dimensions 实例对象维度组合	
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDimensions(const std::vector<Dimension>& _dimensions);

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     * 
                     */
                    bool DimensionsHasBeenSet() const;

                    /**
                     * 获取监控数据值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value 监控数据值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetValue() const;

                    /**
                     * 设置监控数据值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _value 监控数据值
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取监控数据时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Timestamp 监控数据时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTimestamp() const;

                    /**
                     * 设置监控数据时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timestamp 监控数据时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimestamp(const uint64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取排序序号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Order 排序序号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetOrder() const;

                    /**
                     * 设置排序序号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _order 排序序号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrder(const uint64_t& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * 实例对象维度组合	
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Dimension> m_dimensions;
                    bool m_dimensionsHasBeenSet;

                    /**
                     * 监控数据值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 监控数据时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 排序序号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_SINGLEORDEREDDATAPOINT_H_
