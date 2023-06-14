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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBEBACKUPRECORDSRESPONSE_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBEBACKUPRECORDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/BackupRecords.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * DescribeBackupRecords返回参数结构体
                */
                class DescribeBackupRecordsResponse : public AbstractModel
                {
                public:
                    DescribeBackupRecordsResponse();
                    ~DescribeBackupRecordsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取备份记录详情
                     * @return BackupRecords 备份记录详情
                     * 
                     */
                    std::vector<BackupRecords> GetBackupRecords() const;

                    /**
                     * 判断参数 BackupRecords 是否已赋值
                     * @return BackupRecords 是否已赋值
                     * 
                     */
                    bool BackupRecordsHasBeenSet() const;

                    /**
                     * 获取返回记录条数
                     * @return TotalCount 返回记录条数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 备份记录详情
                     */
                    std::vector<BackupRecords> m_backupRecords;
                    bool m_backupRecordsHasBeenSet;

                    /**
                     * 返回记录条数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBEBACKUPRECORDSRESPONSE_H_
