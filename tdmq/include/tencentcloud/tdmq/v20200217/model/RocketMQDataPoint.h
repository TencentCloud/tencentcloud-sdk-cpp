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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQDATAPOINT_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQDATAPOINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * 监控数据点
                */
                class RocketMQDataPoint : public AbstractModel
                {
                public:
                    RocketMQDataPoint();
                    ~RocketMQDataPoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取监控值数组，该数组和Timestamps一一对应
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Timestamps 监控值数组，该数组和Timestamps一一对应
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetTimestamps() const;

                    /**
                     * 设置监控值数组，该数组和Timestamps一一对应
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timestamps 监控值数组，该数组和Timestamps一一对应
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimestamps(const std::vector<int64_t>& _timestamps);

                    /**
                     * 判断参数 Timestamps 是否已赋值
                     * @return Timestamps 是否已赋值
                     * 
                     */
                    bool TimestampsHasBeenSet() const;

                    /**
                     * 获取监控数据点位置，比如一天按分钟划分有1440个点，每个点的序号是0 - 1439之间的一个数，当某个序号不在该数组中，说明掉点了
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Values 监控数据点位置，比如一天按分钟划分有1440个点，每个点的序号是0 - 1439之间的一个数，当某个序号不在该数组中，说明掉点了
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<double> GetValues() const;

                    /**
                     * 设置监控数据点位置，比如一天按分钟划分有1440个点，每个点的序号是0 - 1439之间的一个数，当某个序号不在该数组中，说明掉点了
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _values 监控数据点位置，比如一天按分钟划分有1440个点，每个点的序号是0 - 1439之间的一个数，当某个序号不在该数组中，说明掉点了
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValues(const std::vector<double>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * 监控值数组，该数组和Timestamps一一对应
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_timestamps;
                    bool m_timestampsHasBeenSet;

                    /**
                     * 监控数据点位置，比如一天按分钟划分有1440个点，每个点的序号是0 - 1439之间的一个数，当某个序号不在该数组中，说明掉点了
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<double> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQDATAPOINT_H_
