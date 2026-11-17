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

#ifndef TENCENTCLOUD_DBS_V20211108_MODEL_DESCRIBEINCREMENTBACKUPSETFILESREQUEST_H_
#define TENCENTCLOUD_DBS_V20211108_MODEL_DESCRIBEINCREMENTBACKUPSETFILESREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeIncrementBackupSetFiles请求参数结构体
                */
                class DescribeIncrementBackupSetFilesRequest : public AbstractModel
                {
                public:
                    DescribeIncrementBackupSetFilesRequest();
                    ~DescribeIncrementBackupSetFilesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取增量备份集 ID。可通过 DescribeIncrementBackupSets 接口获取。
                     * @return BackupSetId 增量备份集 ID。可通过 DescribeIncrementBackupSets 接口获取。
                     * 
                     */
                    std::string GetBackupSetId() const;

                    /**
                     * 设置增量备份集 ID。可通过 DescribeIncrementBackupSets 接口获取。
                     * @param _backupSetId 增量备份集 ID。可通过 DescribeIncrementBackupSets 接口获取。
                     * 
                     */
                    void SetBackupSetId(const std::string& _backupSetId);

                    /**
                     * 判断参数 BackupSetId 是否已赋值
                     * @return BackupSetId 是否已赋值
                     * 
                     */
                    bool BackupSetIdHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为 0。
                     * @return Offset 偏移量，默认为 0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为 0。
                     * @param _offset 偏移量，默认为 0。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回数量，默认为 10。
                     * @return Limit 返回数量，默认为 10。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为 10。
                     * @param _limit 返回数量，默认为 10。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 增量备份集 ID。可通过 DescribeIncrementBackupSets 接口获取。
                     */
                    std::string m_backupSetId;
                    bool m_backupSetIdHasBeenSet;

                    /**
                     * 偏移量，默认为 0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为 10。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBS_V20211108_MODEL_DESCRIBEINCREMENTBACKUPSETFILESREQUEST_H_
