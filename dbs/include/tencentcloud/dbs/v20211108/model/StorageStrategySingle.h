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

#ifndef TENCENTCLOUD_DBS_V20211108_MODEL_STORAGESTRATEGYSINGLE_H_
#define TENCENTCLOUD_DBS_V20211108_MODEL_STORAGESTRATEGYSINGLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbs/v20211108/model/StorageTieredStrategy.h>


namespace TencentCloud
{
    namespace Dbs
    {
        namespace V20211108
        {
            namespace Model
            {
                /**
                * 存储策略
                */
                class StorageStrategySingle : public AbstractModel
                {
                public:
                    StorageStrategySingle();
                    ~StorageStrategySingle() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取存储策略类型。取值：
- standard：标准存储
- tiered：分级存储
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RetentionType 存储策略类型。取值：
- standard：标准存储
- tiered：分级存储
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRetentionType() const;

                    /**
                     * 设置存储策略类型。取值：
- standard：标准存储
- tiered：分级存储
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _retentionType 存储策略类型。取值：
- standard：标准存储
- tiered：分级存储
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRetentionType(const std::string& _retentionType);

                    /**
                     * 判断参数 RetentionType 是否已赋值
                     * @return RetentionType 是否已赋值
                     * 
                     */
                    bool RetentionTypeHasBeenSet() const;

                    /**
                     * 获取备份保留天数，取值范围为 7 - 3650。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RetentionPeriod 备份保留天数，取值范围为 7 - 3650。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRetentionPeriod() const;

                    /**
                     * 设置备份保留天数，取值范围为 7 - 3650。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _retentionPeriod 备份保留天数，取值范围为 7 - 3650。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRetentionPeriod(const int64_t& _retentionPeriod);

                    /**
                     * 判断参数 RetentionPeriod 是否已赋值
                     * @return RetentionPeriod 是否已赋值
                     * 
                     */
                    bool RetentionPeriodHasBeenSet() const;

                    /**
                     * 获取分级存储策略。RetentionType 为 tiered 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TieredStrategy 分级存储策略。RetentionType 为 tiered 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    StorageTieredStrategy GetTieredStrategy() const;

                    /**
                     * 设置分级存储策略。RetentionType 为 tiered 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tieredStrategy 分级存储策略。RetentionType 为 tiered 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTieredStrategy(const StorageTieredStrategy& _tieredStrategy);

                    /**
                     * 判断参数 TieredStrategy 是否已赋值
                     * @return TieredStrategy 是否已赋值
                     * 
                     */
                    bool TieredStrategyHasBeenSet() const;

                private:

                    /**
                     * 存储策略类型。取值：
- standard：标准存储
- tiered：分级存储
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_retentionType;
                    bool m_retentionTypeHasBeenSet;

                    /**
                     * 备份保留天数，取值范围为 7 - 3650。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_retentionPeriod;
                    bool m_retentionPeriodHasBeenSet;

                    /**
                     * 分级存储策略。RetentionType 为 tiered 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StorageTieredStrategy m_tieredStrategy;
                    bool m_tieredStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBS_V20211108_MODEL_STORAGESTRATEGYSINGLE_H_
