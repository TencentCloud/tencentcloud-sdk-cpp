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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CALCULATEBACKUPSAVESECEXPIRESREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CALCULATEBACKUPSAVESECEXPIRESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * CalculateBackupSaveSecExpires请求参数结构体
                */
                class CalculateBackupSaveSecExpiresRequest : public AbstractModel
                {
                public:
                    CalculateBackupSaveSecExpiresRequest();
                    ~CalculateBackupSaveSecExpiresRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取备份保险箱ID
                     * @return VaultId 备份保险箱ID
                     * 
                     */
                    std::string GetVaultId() const;

                    /**
                     * 设置备份保险箱ID
                     * @param _vaultId 备份保险箱ID
                     * 
                     */
                    void SetVaultId(const std::string& _vaultId);

                    /**
                     * 判断参数 VaultId 是否已赋值
                     * @return VaultId 是否已赋值
                     * 
                     */
                    bool VaultIdHasBeenSet() const;

                    /**
                     * 获取备份保留时长（秒），必须大于0
                     * @return BackupSaveSeconds 备份保留时长（秒），必须大于0
                     * 
                     */
                    int64_t GetBackupSaveSeconds() const;

                    /**
                     * 设置备份保留时长（秒），必须大于0
                     * @param _backupSaveSeconds 备份保留时长（秒），必须大于0
                     * 
                     */
                    void SetBackupSaveSeconds(const int64_t& _backupSaveSeconds);

                    /**
                     * 判断参数 BackupSaveSeconds 是否已赋值
                     * @return BackupSaveSeconds 是否已赋值
                     * 
                     */
                    bool BackupSaveSecondsHasBeenSet() const;

                    /**
                     * 获取每页数量，范围(0,100]，默认10
                     * @return Limit 每页数量，范围(0,100]，默认10
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页数量，范围(0,100]，默认10
                     * @param _limit 每页数量，范围(0,100]，默认10
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量，范围[0,INF)，默认0
                     * @return Offset 偏移量，范围[0,INF)，默认0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，范围[0,INF)，默认0
                     * @param _offset 偏移量，范围[0,INF)，默认0
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
                     * 获取排序字段，可选值：VaultId,VaultName,BackupSaveSeconds,LockedTime,CreateTime,UpdateTime，默认endTime
                     * @return OrderBy 排序字段，可选值：VaultId,VaultName,BackupSaveSeconds,LockedTime,CreateTime,UpdateTime，默认endTime
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序字段，可选值：VaultId,VaultName,BackupSaveSeconds,LockedTime,CreateTime,UpdateTime，默认endTime
                     * @param _orderBy 排序字段，可选值：VaultId,VaultName,BackupSaveSeconds,LockedTime,CreateTime,UpdateTime，默认endTime
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取排序方式，可选值：desc,asc,DESC,ASC，默认desc
                     * @return OrderByType 排序方式，可选值：desc,asc,DESC,ASC，默认desc
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置排序方式，可选值：desc,asc,DESC,ASC，默认desc
                     * @param _orderByType 排序方式，可选值：desc,asc,DESC,ASC，默认desc
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                private:

                    /**
                     * 备份保险箱ID
                     */
                    std::string m_vaultId;
                    bool m_vaultIdHasBeenSet;

                    /**
                     * 备份保留时长（秒），必须大于0
                     */
                    int64_t m_backupSaveSeconds;
                    bool m_backupSaveSecondsHasBeenSet;

                    /**
                     * 每页数量，范围(0,100]，默认10
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，范围[0,INF)，默认0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 排序字段，可选值：VaultId,VaultName,BackupSaveSeconds,LockedTime,CreateTime,UpdateTime，默认endTime
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序方式，可选值：desc,asc,DESC,ASC，默认desc
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CALCULATEBACKUPSAVESECEXPIRESREQUEST_H_
