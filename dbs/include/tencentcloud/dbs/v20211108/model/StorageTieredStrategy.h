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

#ifndef TENCENTCLOUD_DBS_V20211108_MODEL_STORAGETIEREDSTRATEGY_H_
#define TENCENTCLOUD_DBS_V20211108_MODEL_STORAGETIEREDSTRATEGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbs
    {
        namespace V20211108
        {
            namespace Model
            {
                /**
                * 分级存储策略
                */
                class StorageTieredStrategy : public AbstractModel
                {
                public:
                    StorageTieredStrategy();
                    ~StorageTieredStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取低频存储
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DayToLowFrequency 低频存储
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDayToLowFrequency() const;

                    /**
                     * 设置低频存储
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dayToLowFrequency 低频存储
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDayToLowFrequency(const int64_t& _dayToLowFrequency);

                    /**
                     * 判断参数 DayToLowFrequency 是否已赋值
                     * @return DayToLowFrequency 是否已赋值
                     * 
                     */
                    bool DayToLowFrequencyHasBeenSet() const;

                    /**
                     * 获取归档存储
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DayToArchive 归档存储
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDayToArchive() const;

                    /**
                     * 设置归档存储
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dayToArchive 归档存储
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDayToArchive(const int64_t& _dayToArchive);

                    /**
                     * 判断参数 DayToArchive 是否已赋值
                     * @return DayToArchive 是否已赋值
                     * 
                     */
                    bool DayToArchiveHasBeenSet() const;

                    /**
                     * 获取深度归档存储
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DayToDeepArchive 深度归档存储
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDayToDeepArchive() const;

                    /**
                     * 设置深度归档存储
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dayToDeepArchive 深度归档存储
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDayToDeepArchive(const int64_t& _dayToDeepArchive);

                    /**
                     * 判断参数 DayToDeepArchive 是否已赋值
                     * @return DayToDeepArchive 是否已赋值
                     * 
                     */
                    bool DayToDeepArchiveHasBeenSet() const;

                private:

                    /**
                     * 低频存储
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_dayToLowFrequency;
                    bool m_dayToLowFrequencyHasBeenSet;

                    /**
                     * 归档存储
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_dayToArchive;
                    bool m_dayToArchiveHasBeenSet;

                    /**
                     * 深度归档存储
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_dayToDeepArchive;
                    bool m_dayToDeepArchiveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBS_V20211108_MODEL_STORAGETIEREDSTRATEGY_H_
