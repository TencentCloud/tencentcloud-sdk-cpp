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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEDBSBACKUPSTATISTICSDETAILRESPONSE_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEDBSBACKUPSTATISTICSDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmysql/v20211122/model/BackupMethodStatisticsOutPut.h>
#include <tencentcloud/tdmysql/v20211122/model/BackupTypeStatisticsModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * DescribeDBSBackupStatisticsDetail返回参数结构体
                */
                class DescribeDBSBackupStatisticsDetailResponse : public AbstractModel
                {
                public:
                    DescribeDBSBackupStatisticsDetailResponse();
                    ~DescribeDBSBackupStatisticsDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>按备份方式统计</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackupMethodStatistics <p>按备份方式统计</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BackupMethodStatisticsOutPut GetBackupMethodStatistics() const;

                    /**
                     * 判断参数 BackupMethodStatistics 是否已赋值
                     * @return BackupMethodStatistics 是否已赋值
                     * 
                     */
                    bool BackupMethodStatisticsHasBeenSet() const;

                    /**
                     * 获取<p>备份时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackupTime <p>备份时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetBackupTime() const;

                    /**
                     * 判断参数 BackupTime 是否已赋值
                     * @return BackupTime 是否已赋值
                     * 
                     */
                    bool BackupTimeHasBeenSet() const;

                    /**
                     * 获取<p>按备份数据类型统计</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackupTypeStatistics <p>按备份数据类型统计</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BackupTypeStatisticsModel GetBackupTypeStatistics() const;

                    /**
                     * 判断参数 BackupTypeStatistics 是否已赋值
                     * @return BackupTypeStatistics 是否已赋值
                     * 
                     */
                    bool BackupTypeStatisticsHasBeenSet() const;

                private:

                    /**
                     * <p>按备份方式统计</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BackupMethodStatisticsOutPut m_backupMethodStatistics;
                    bool m_backupMethodStatisticsHasBeenSet;

                    /**
                     * <p>备份时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_backupTime;
                    bool m_backupTimeHasBeenSet;

                    /**
                     * <p>按备份数据类型统计</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BackupTypeStatisticsModel m_backupTypeStatistics;
                    bool m_backupTypeStatisticsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEDBSBACKUPSTATISTICSDETAILRESPONSE_H_
