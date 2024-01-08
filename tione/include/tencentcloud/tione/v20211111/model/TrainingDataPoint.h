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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_TRAININGDATAPOINT_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_TRAININGDATAPOINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 训练数据
                */
                class TrainingDataPoint : public AbstractModel
                {
                public:
                    TrainingDataPoint();
                    ~TrainingDataPoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Timestamp 时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTimestamp() const;

                    /**
                     * 设置时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timestamp 时间戳
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
                     * 获取训练上报的值。可以为训练指标（双精度浮点数，也可以为Epoch/Step（两者皆保证是整数）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value 训练上报的值。可以为训练指标（双精度浮点数，也可以为Epoch/Step（两者皆保证是整数）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetValue() const;

                    /**
                     * 设置训练上报的值。可以为训练指标（双精度浮点数，也可以为Epoch/Step（两者皆保证是整数）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _value 训练上报的值。可以为训练指标（双精度浮点数，也可以为Epoch/Step（两者皆保证是整数）
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

                private:

                    /**
                     * 时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 训练上报的值。可以为训练指标（双精度浮点数，也可以为Epoch/Step（两者皆保证是整数）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_TRAININGDATAPOINT_H_
