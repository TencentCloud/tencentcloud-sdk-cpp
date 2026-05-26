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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DATABACKUPSTATISTICSMODEL_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DATABACKUPSTATISTICSMODEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * 数据备份统计对象
                */
                class DataBackupStatisticsModel : public AbstractModel
                {
                public:
                    DataBackupStatisticsModel();
                    ~DataBackupStatisticsModel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自动备份个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoBackupCount 自动备份个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAutoBackupCount() const;

                    /**
                     * 设置自动备份个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoBackupCount 自动备份个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAutoBackupCount(const int64_t& _autoBackupCount);

                    /**
                     * 判断参数 AutoBackupCount 是否已赋值
                     * @return AutoBackupCount 是否已赋值
                     * 
                     */
                    bool AutoBackupCountHasBeenSet() const;

                    /**
                     * 获取自动备份大小，单位Byte
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoBackupSize 自动备份大小，单位Byte
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAutoBackupSize() const;

                    /**
                     * 设置自动备份大小，单位Byte
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoBackupSize 自动备份大小，单位Byte
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAutoBackupSize(const int64_t& _autoBackupSize);

                    /**
                     * 判断参数 AutoBackupSize 是否已赋值
                     * @return AutoBackupSize 是否已赋值
                     * 
                     */
                    bool AutoBackupSizeHasBeenSet() const;

                    /**
                     * 获取平均每个备份大小,单位Byte
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AverageSizePerBackup 平均每个备份大小,单位Byte
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAverageSizePerBackup() const;

                    /**
                     * 设置平均每个备份大小,单位Byte
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _averageSizePerBackup 平均每个备份大小,单位Byte
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAverageSizePerBackup(const int64_t& _averageSizePerBackup);

                    /**
                     * 判断参数 AverageSizePerBackup 是否已赋值
                     * @return AverageSizePerBackup 是否已赋值
                     * 
                     */
                    bool AverageSizePerBackupHasBeenSet() const;

                    /**
                     * 获取平均每天备份大小,单位Byte
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AverageSizePerDay 平均每天备份大小,单位Byte
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAverageSizePerDay() const;

                    /**
                     * 设置平均每天备份大小,单位Byte
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _averageSizePerDay 平均每天备份大小,单位Byte
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAverageSizePerDay(const int64_t& _averageSizePerDay);

                    /**
                     * 判断参数 AverageSizePerDay 是否已赋值
                     * @return AverageSizePerDay 是否已赋值
                     * 
                     */
                    bool AverageSizePerDayHasBeenSet() const;

                    /**
                     * 获取手工备份个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ManualBackupCount 手工备份个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetManualBackupCount() const;

                    /**
                     * 设置手工备份个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _manualBackupCount 手工备份个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetManualBackupCount(const int64_t& _manualBackupCount);

                    /**
                     * 判断参数 ManualBackupCount 是否已赋值
                     * @return ManualBackupCount 是否已赋值
                     * 
                     */
                    bool ManualBackupCountHasBeenSet() const;

                    /**
                     * 获取手工备份大小，单位Byte
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ManualBackupSize 手工备份大小，单位Byte
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetManualBackupSize() const;

                    /**
                     * 设置手工备份大小，单位Byte
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _manualBackupSize 手工备份大小，单位Byte
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetManualBackupSize(const int64_t& _manualBackupSize);

                    /**
                     * 判断参数 ManualBackupSize 是否已赋值
                     * @return ManualBackupSize 是否已赋值
                     * 
                     */
                    bool ManualBackupSizeHasBeenSet() const;

                    /**
                     * 获取数据备份个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 数据备份个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置数据备份个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalCount 数据备份个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取数据备份大小，单位Byte
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalSize 数据备份大小，单位Byte
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalSize() const;

                    /**
                     * 设置数据备份大小，单位Byte
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalSize 数据备份大小，单位Byte
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalSize(const int64_t& _totalSize);

                    /**
                     * 判断参数 TotalSize 是否已赋值
                     * @return TotalSize 是否已赋值
                     * 
                     */
                    bool TotalSizeHasBeenSet() const;

                private:

                    /**
                     * 自动备份个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_autoBackupCount;
                    bool m_autoBackupCountHasBeenSet;

                    /**
                     * 自动备份大小，单位Byte
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_autoBackupSize;
                    bool m_autoBackupSizeHasBeenSet;

                    /**
                     * 平均每个备份大小,单位Byte
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_averageSizePerBackup;
                    bool m_averageSizePerBackupHasBeenSet;

                    /**
                     * 平均每天备份大小,单位Byte
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_averageSizePerDay;
                    bool m_averageSizePerDayHasBeenSet;

                    /**
                     * 手工备份个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_manualBackupCount;
                    bool m_manualBackupCountHasBeenSet;

                    /**
                     * 手工备份大小，单位Byte
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_manualBackupSize;
                    bool m_manualBackupSizeHasBeenSet;

                    /**
                     * 数据备份个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 数据备份大小，单位Byte
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalSize;
                    bool m_totalSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DATABACKUPSTATISTICSMODEL_H_
