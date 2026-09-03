/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_LIMITWINDOWSDTO_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_LIMITWINDOWSDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apis/v20240801/model/TimeRange.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * 限流窗口配置
                */
                class LimitWindowsDTO : public AbstractModel
                {
                public:
                    LimitWindowsDTO();
                    ~LimitWindowsDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>时间窗口，分钟</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Interval <p>时间窗口，分钟</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetInterval() const;

                    /**
                     * 设置<p>时间窗口，分钟</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _interval <p>时间窗口，分钟</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInterval(const uint64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取<p>累计上限，k</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Limit <p>累计上限，k</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>累计上限，k</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _limit <p>累计上限，k</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>限流类型</p><p>枚举值：</p><ul><li>minute： 时间窗口</li><li>day： 自然日</li><li>month： 自然月</li><li>timeRange： 时间范围</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type <p>限流类型</p><p>枚举值：</p><ul><li>minute： 时间窗口</li><li>day： 自然日</li><li>month： 自然月</li><li>timeRange： 时间范围</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>限流类型</p><p>枚举值：</p><ul><li>minute： 时间窗口</li><li>day： 自然日</li><li>month： 自然月</li><li>timeRange： 时间范围</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type <p>限流类型</p><p>枚举值：</p><ul><li>minute： 时间窗口</li><li>day： 自然日</li><li>month： 自然月</li><li>timeRange： 时间范围</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>时间区间配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeRange <p>时间区间配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TimeRange GetTimeRange() const;

                    /**
                     * 设置<p>时间区间配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeRange <p>时间区间配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeRange(const TimeRange& _timeRange);

                    /**
                     * 判断参数 TimeRange 是否已赋值
                     * @return TimeRange 是否已赋值
                     * 
                     */
                    bool TimeRangeHasBeenSet() const;

                private:

                    /**
                     * <p>时间窗口，分钟</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * <p>累计上限，k</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>限流类型</p><p>枚举值：</p><ul><li>minute： 时间窗口</li><li>day： 自然日</li><li>month： 自然月</li><li>timeRange： 时间范围</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>时间区间配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TimeRange m_timeRange;
                    bool m_timeRangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_LIMITWINDOWSDTO_H_
