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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DISKSIZERANGE_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DISKSIZERANGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 磁盘大小范围
                */
                class DiskSizeRange : public AbstractModel
                {
                public:
                    DiskSizeRange();
                    ~DiskSizeRange() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取最小值
                     * @return Min 最小值
                     * 
                     */
                    uint64_t GetMin() const;

                    /**
                     * 设置最小值
                     * @param _min 最小值
                     * 
                     */
                    void SetMin(const uint64_t& _min);

                    /**
                     * 判断参数 Min 是否已赋值
                     * @return Min 是否已赋值
                     * 
                     */
                    bool MinHasBeenSet() const;

                    /**
                     * 获取小刻度值
                     * @return Sml 小刻度值
                     * 
                     */
                    uint64_t GetSml() const;

                    /**
                     * 设置小刻度值
                     * @param _sml 小刻度值
                     * 
                     */
                    void SetSml(const uint64_t& _sml);

                    /**
                     * 判断参数 Sml 是否已赋值
                     * @return Sml 是否已赋值
                     * 
                     */
                    bool SmlHasBeenSet() const;

                    /**
                     * 获取中刻度值
                     * @return Med 中刻度值
                     * 
                     */
                    uint64_t GetMed() const;

                    /**
                     * 设置中刻度值
                     * @param _med 中刻度值
                     * 
                     */
                    void SetMed(const uint64_t& _med);

                    /**
                     * 判断参数 Med 是否已赋值
                     * @return Med 是否已赋值
                     * 
                     */
                    bool MedHasBeenSet() const;

                    /**
                     * 获取最大值
                     * @return Max 最大值
                     * 
                     */
                    uint64_t GetMax() const;

                    /**
                     * 设置最大值
                     * @param _max 最大值
                     * 
                     */
                    void SetMax(const uint64_t& _max);

                    /**
                     * 判断参数 Max 是否已赋值
                     * @return Max 是否已赋值
                     * 
                     */
                    bool MaxHasBeenSet() const;

                    /**
                     * 获取磁盘块数最小值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiskCountMin 磁盘块数最小值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDiskCountMin() const;

                    /**
                     * 设置磁盘块数最小值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diskCountMin 磁盘块数最小值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiskCountMin(const uint64_t& _diskCountMin);

                    /**
                     * 判断参数 DiskCountMin 是否已赋值
                     * @return DiskCountMin 是否已赋值
                     * 
                     */
                    bool DiskCountMinHasBeenSet() const;

                    /**
                     * 获取磁盘块数最大值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiskCountMax 磁盘块数最大值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDiskCountMax() const;

                    /**
                     * 设置磁盘块数最大值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diskCountMax 磁盘块数最大值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiskCountMax(const uint64_t& _diskCountMax);

                    /**
                     * 判断参数 DiskCountMax 是否已赋值
                     * @return DiskCountMax 是否已赋值
                     * 
                     */
                    bool DiskCountMaxHasBeenSet() const;

                private:

                    /**
                     * 最小值
                     */
                    uint64_t m_min;
                    bool m_minHasBeenSet;

                    /**
                     * 小刻度值
                     */
                    uint64_t m_sml;
                    bool m_smlHasBeenSet;

                    /**
                     * 中刻度值
                     */
                    uint64_t m_med;
                    bool m_medHasBeenSet;

                    /**
                     * 最大值
                     */
                    uint64_t m_max;
                    bool m_maxHasBeenSet;

                    /**
                     * 磁盘块数最小值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_diskCountMin;
                    bool m_diskCountMinHasBeenSet;

                    /**
                     * 磁盘块数最大值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_diskCountMax;
                    bool m_diskCountMaxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DISKSIZERANGE_H_
