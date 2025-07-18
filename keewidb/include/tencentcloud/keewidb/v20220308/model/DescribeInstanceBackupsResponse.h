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

#ifndef TENCENTCLOUD_KEEWIDB_V20220308_MODEL_DESCRIBEINSTANCEBACKUPSRESPONSE_H_
#define TENCENTCLOUD_KEEWIDB_V20220308_MODEL_DESCRIBEINSTANCEBACKUPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/keewidb/v20220308/model/BinlogInfo.h>
#include <tencentcloud/keewidb/v20220308/model/BackupInfo.h>


namespace TencentCloud
{
    namespace Keewidb
    {
        namespace V20220308
        {
            namespace Model
            {
                /**
                * DescribeInstanceBackups返回参数结构体
                */
                class DescribeInstanceBackupsResponse : public AbstractModel
                {
                public:
                    DescribeInstanceBackupsResponse();
                    ~DescribeInstanceBackupsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取备份文件总数。
                     * @return TotalCount 备份文件总数。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取废弃字段。
                     * @return BackupSet 废弃字段。
                     * @deprecated
                     */
                    std::vector<BinlogInfo> GetBackupSet() const;

                    /**
                     * 判断参数 BackupSet 是否已赋值
                     * @return BackupSet 是否已赋值
                     * @deprecated
                     */
                    bool BackupSetHasBeenSet() const;

                    /**
                     * 获取实例备份信息列表。
                     * @return BackupRecord 实例备份信息列表。
                     * 
                     */
                    std::vector<BackupInfo> GetBackupRecord() const;

                    /**
                     * 判断参数 BackupRecord 是否已赋值
                     * @return BackupRecord 是否已赋值
                     * 
                     */
                    bool BackupRecordHasBeenSet() const;

                private:

                    /**
                     * 备份文件总数。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 废弃字段。
                     */
                    std::vector<BinlogInfo> m_backupSet;
                    bool m_backupSetHasBeenSet;

                    /**
                     * 实例备份信息列表。
                     */
                    std::vector<BackupInfo> m_backupRecord;
                    bool m_backupRecordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KEEWIDB_V20220308_MODEL_DESCRIBEINSTANCEBACKUPSRESPONSE_H_
