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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_TIMINGDATAITEM_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_TIMINGDATAITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * 统计曲线数据项
                */
                class TimingDataItem : public AbstractModel
                {
                public:
                    TimingDataItem();
                    ~TimingDataItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Timestamp 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Timestamp 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTimestamp(const int64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取数值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value 数值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetValue() const;

                    /**
                     * 设置数值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Value 数值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetValue(const int64_t& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * 秒级时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 数值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_TIMINGDATAITEM_H_
