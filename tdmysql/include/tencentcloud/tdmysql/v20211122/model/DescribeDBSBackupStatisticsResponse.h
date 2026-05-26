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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEDBSBACKUPSTATISTICSRESPONSE_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEDBSBACKUPSTATISTICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmysql/v20211122/model/BackupMethodStatisticsModel.h>
#include <tencentcloud/tdmysql/v20211122/model/BackupStatisticsModel.h>
#include <tencentcloud/tdmysql/v20211122/model/DataBackupStatisticsModel.h>
#include <tencentcloud/tdmysql/v20211122/model/LogBackupStatisticsModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * DescribeDBSBackupStatistics返回参数结构体
                */
                class DescribeDBSBackupStatisticsResponse : public AbstractModel
                {
                public:
                    DescribeDBSBackupStatisticsResponse();
                    ~DescribeDBSBackupStatisticsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>备份方式统计</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackupMethodStatistics <p>备份方式统计</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BackupMethodStatisticsModel GetBackupMethodStatistics() const;

                    /**
                     * 判断参数 BackupMethodStatistics 是否已赋值
                     * @return BackupMethodStatistics 是否已赋值
                     * 
                     */
                    bool BackupMethodStatisticsHasBeenSet() const;

                    /**
                     * 获取<p>总备份集统计</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackupStatistics <p>总备份集统计</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BackupStatisticsModel GetBackupStatistics() const;

                    /**
                     * 判断参数 BackupStatistics 是否已赋值
                     * @return BackupStatistics 是否已赋值
                     * 
                     */
                    bool BackupStatisticsHasBeenSet() const;

                    /**
                     * 获取<p>数据备份统计</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataBackupStatistics <p>数据备份统计</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DataBackupStatisticsModel GetDataBackupStatistics() const;

                    /**
                     * 判断参数 DataBackupStatistics 是否已赋值
                     * @return DataBackupStatistics 是否已赋值
                     * 
                     */
                    bool DataBackupStatisticsHasBeenSet() const;

                    /**
                     * 获取<p>日志备份统计</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogBackupStatistics <p>日志备份统计</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LogBackupStatisticsModel GetLogBackupStatistics() const;

                    /**
                     * 判断参数 LogBackupStatistics 是否已赋值
                     * @return LogBackupStatistics 是否已赋值
                     * 
                     */
                    bool LogBackupStatisticsHasBeenSet() const;

                private:

                    /**
                     * <p>备份方式统计</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BackupMethodStatisticsModel m_backupMethodStatistics;
                    bool m_backupMethodStatisticsHasBeenSet;

                    /**
                     * <p>总备份集统计</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BackupStatisticsModel m_backupStatistics;
                    bool m_backupStatisticsHasBeenSet;

                    /**
                     * <p>数据备份统计</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DataBackupStatisticsModel m_dataBackupStatistics;
                    bool m_dataBackupStatisticsHasBeenSet;

                    /**
                     * <p>日志备份统计</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LogBackupStatisticsModel m_logBackupStatistics;
                    bool m_logBackupStatisticsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEDBSBACKUPSTATISTICSRESPONSE_H_
