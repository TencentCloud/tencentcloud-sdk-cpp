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

#ifndef TENCENTCLOUD_DBS_V20211108_MODEL_DESCRIBEINCREMENTBACKUPSETFILESRESPONSE_H_
#define TENCENTCLOUD_DBS_V20211108_MODEL_DESCRIBEINCREMENTBACKUPSETFILESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbs/v20211108/model/BackupFile.h>


namespace TencentCloud
{
    namespace Dbs
    {
        namespace V20211108
        {
            namespace Model
            {
                /**
                * DescribeIncrementBackupSetFiles返回参数结构体
                */
                class DescribeIncrementBackupSetFilesResponse : public AbstractModel
                {
                public:
                    DescribeIncrementBackupSetFilesResponse();
                    ~DescribeIncrementBackupSetFilesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取文件总数。
                     * @return TotalCount 文件总数。
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
                     * 获取增量备份文件列表。
                     * @return BackupFiles 增量备份文件列表。
                     * 
                     */
                    std::vector<BackupFile> GetBackupFiles() const;

                    /**
                     * 判断参数 BackupFiles 是否已赋值
                     * @return BackupFiles 是否已赋值
                     * 
                     */
                    bool BackupFilesHasBeenSet() const;

                private:

                    /**
                     * 文件总数。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 增量备份文件列表。
                     */
                    std::vector<BackupFile> m_backupFiles;
                    bool m_backupFilesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBS_V20211108_MODEL_DESCRIBEINCREMENTBACKUPSETFILESRESPONSE_H_
