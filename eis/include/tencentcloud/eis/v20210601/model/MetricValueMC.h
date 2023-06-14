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

#ifndef TENCENTCLOUD_EIS_V20210601_MODEL_METRICVALUEMC_H_
#define TENCENTCLOUD_EIS_V20210601_MODEL_METRICVALUEMC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eis
    {
        namespace V20210601
        {
            namespace Model
            {
                /**
                * GetMonitorMetricResponse
                */
                class MetricValueMC : public AbstractModel
                {
                public:
                    MetricValueMC();
                    ~MetricValueMC() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Time 时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTime() const;

                    /**
                     * 设置时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _time 时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTime(const int64_t& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取对应的value值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Val 对应的value值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVal() const;

                    /**
                     * 设置对应的value值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _val 对应的value值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVal(const std::string& _val);

                    /**
                     * 判断参数 Val 是否已赋值
                     * @return Val 是否已赋值
                     * 
                     */
                    bool ValHasBeenSet() const;

                private:

                    /**
                     * 时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 对应的value值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_val;
                    bool m_valHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIS_V20210601_MODEL_METRICVALUEMC_H_
