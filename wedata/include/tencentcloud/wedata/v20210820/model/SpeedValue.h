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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SPEEDVALUE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SPEEDVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 速度值对象
                */
                class SpeedValue : public AbstractModel
                {
                public:
                    SpeedValue();
                    ~SpeedValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取带毫秒的时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Time 带毫秒的时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTime() const;

                    /**
                     * 设置带毫秒的时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _time 带毫秒的时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTime(const uint64_t& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取无
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Speed 无
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetSpeed() const;

                    /**
                     * 设置无
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _speed 无
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpeed(const double& _speed);

                    /**
                     * 判断参数 Speed 是否已赋值
                     * @return Speed 是否已赋值
                     * 
                     */
                    bool SpeedHasBeenSet() const;

                private:

                    /**
                     * 带毫秒的时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 无
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_speed;
                    bool m_speedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SPEEDVALUE_H_
