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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_REDISGLOBALKEYINFO_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_REDISGLOBALKEYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * Redis全量Key的聚合信息。
                */
                class RedisGlobalKeyInfo : public AbstractModel
                {
                public:
                    RedisGlobalKeyInfo();
                    ~RedisGlobalKeyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取占用内存大小，单位Byte。
                     * @return Capacity 占用内存大小，单位Byte。
                     * 
                     */
                    int64_t GetCapacity() const;

                    /**
                     * 设置占用内存大小，单位Byte。
                     * @param _capacity 占用内存大小，单位Byte。
                     * 
                     */
                    void SetCapacity(const int64_t& _capacity);

                    /**
                     * 判断参数 Capacity 是否已赋值
                     * @return Capacity 是否已赋值
                     * 
                     */
                    bool CapacityHasBeenSet() const;

                    /**
                     * 获取Key个数。
                     * @return Count Key个数。
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Key个数。
                     * @param _count Key个数。
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取剩余过期时间范围的结束时间，当小于0时，代表已过期时间，单位：小时。当RangeMin与RangeMax同时为空时，代表未设置过期时间。当RangeMax为空时，代表剩余过期时间大于等于RangeMin小时。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RangeMax 剩余过期时间范围的结束时间，当小于0时，代表已过期时间，单位：小时。当RangeMin与RangeMax同时为空时，代表未设置过期时间。当RangeMax为空时，代表剩余过期时间大于等于RangeMin小时。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRangeMax() const;

                    /**
                     * 设置剩余过期时间范围的结束时间，当小于0时，代表已过期时间，单位：小时。当RangeMin与RangeMax同时为空时，代表未设置过期时间。当RangeMax为空时，代表剩余过期时间大于等于RangeMin小时。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rangeMax 剩余过期时间范围的结束时间，当小于0时，代表已过期时间，单位：小时。当RangeMin与RangeMax同时为空时，代表未设置过期时间。当RangeMax为空时，代表剩余过期时间大于等于RangeMin小时。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRangeMax(const int64_t& _rangeMax);

                    /**
                     * 判断参数 RangeMax 是否已赋值
                     * @return RangeMax 是否已赋值
                     * 
                     */
                    bool RangeMaxHasBeenSet() const;

                    /**
                     * 获取剩余过期时间范围的起始时间，当小于0时，代表已过期时间，单位：小时。当RangeMin与RangeMax同时为空时，代表未设置过期时间。当RangeMin为空时，代表已过期。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RangeMin 剩余过期时间范围的起始时间，当小于0时，代表已过期时间，单位：小时。当RangeMin与RangeMax同时为空时，代表未设置过期时间。当RangeMin为空时，代表已过期。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRangeMin() const;

                    /**
                     * 设置剩余过期时间范围的起始时间，当小于0时，代表已过期时间，单位：小时。当RangeMin与RangeMax同时为空时，代表未设置过期时间。当RangeMin为空时，代表已过期。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rangeMin 剩余过期时间范围的起始时间，当小于0时，代表已过期时间，单位：小时。当RangeMin与RangeMax同时为空时，代表未设置过期时间。当RangeMin为空时，代表已过期。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRangeMin(const int64_t& _rangeMin);

                    /**
                     * 判断参数 RangeMin 是否已赋值
                     * @return RangeMin 是否已赋值
                     * 
                     */
                    bool RangeMinHasBeenSet() const;

                private:

                    /**
                     * 占用内存大小，单位Byte。
                     */
                    int64_t m_capacity;
                    bool m_capacityHasBeenSet;

                    /**
                     * Key个数。
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 剩余过期时间范围的结束时间，当小于0时，代表已过期时间，单位：小时。当RangeMin与RangeMax同时为空时，代表未设置过期时间。当RangeMax为空时，代表剩余过期时间大于等于RangeMin小时。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_rangeMax;
                    bool m_rangeMaxHasBeenSet;

                    /**
                     * 剩余过期时间范围的起始时间，当小于0时，代表已过期时间，单位：小时。当RangeMin与RangeMax同时为空时，代表未设置过期时间。当RangeMin为空时，代表已过期。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_rangeMin;
                    bool m_rangeMinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_REDISGLOBALKEYINFO_H_
