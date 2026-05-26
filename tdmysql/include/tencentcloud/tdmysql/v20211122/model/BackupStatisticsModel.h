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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_BACKUPSTATISTICSMODEL_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_BACKUPSTATISTICSMODEL_H_

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
                * 备份统计对象
                */
                class BackupStatisticsModel : public AbstractModel
                {
                public:
                    BackupStatisticsModel();
                    ~BackupStatisticsModel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>总备份每天平均大小,单位Byte</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AverageSizePerDay <p>总备份每天平均大小,单位Byte</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAverageSizePerDay() const;

                    /**
                     * 设置<p>总备份每天平均大小,单位Byte</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _averageSizePerDay <p>总备份每天平均大小,单位Byte</p>
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
                     * 获取<p>数据备份大小，单位Byte</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataBackupSize <p>数据备份大小，单位Byte</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDataBackupSize() const;

                    /**
                     * 设置<p>数据备份大小，单位Byte</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataBackupSize <p>数据备份大小，单位Byte</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataBackupSize(const int64_t& _dataBackupSize);

                    /**
                     * 判断参数 DataBackupSize 是否已赋值
                     * @return DataBackupSize 是否已赋值
                     * 
                     */
                    bool DataBackupSizeHasBeenSet() const;

                    /**
                     * 获取<p>日志备份大小，单位Byte</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogBackupSize <p>日志备份大小，单位Byte</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLogBackupSize() const;

                    /**
                     * 设置<p>日志备份大小，单位Byte</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logBackupSize <p>日志备份大小，单位Byte</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogBackupSize(const int64_t& _logBackupSize);

                    /**
                     * 判断参数 LogBackupSize 是否已赋值
                     * @return LogBackupSize 是否已赋值
                     * 
                     */
                    bool LogBackupSizeHasBeenSet() const;

                    /**
                     * 获取<p>总备份集个数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount <p>总备份集个数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置<p>总备份集个数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalCount <p>总备份集个数</p>
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
                     * 获取<p>总备份大小，单位Byte</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalSize <p>总备份大小，单位Byte</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalSize() const;

                    /**
                     * 设置<p>总备份大小，单位Byte</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalSize <p>总备份大小，单位Byte</p>
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
                     * <p>总备份每天平均大小,单位Byte</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_averageSizePerDay;
                    bool m_averageSizePerDayHasBeenSet;

                    /**
                     * <p>数据备份大小，单位Byte</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_dataBackupSize;
                    bool m_dataBackupSizeHasBeenSet;

                    /**
                     * <p>日志备份大小，单位Byte</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_logBackupSize;
                    bool m_logBackupSizeHasBeenSet;

                    /**
                     * <p>总备份集个数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>总备份大小，单位Byte</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalSize;
                    bool m_totalSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_BACKUPSTATISTICSMODEL_H_
