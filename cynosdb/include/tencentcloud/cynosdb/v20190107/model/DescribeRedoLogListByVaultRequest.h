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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEREDOLOGLISTBYVAULTREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEREDOLOGLISTBYVAULTREQUEST_H_

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
                * DescribeRedoLogListByVault请求参数结构体
                */
                class DescribeRedoLogListByVaultRequest : public AbstractModel
                {
                public:
                    DescribeRedoLogListByVaultRequest();
                    ~DescribeRedoLogListByVaultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取保险箱ID
                     * @return VaultId 保险箱ID
                     * 
                     */
                    std::string GetVaultId() const;

                    /**
                     * 设置保险箱ID
                     * @param _vaultId 保险箱ID
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
                     * 获取备份ID列表
                     * @return BackupIds 备份ID列表
                     * 
                     */
                    std::vector<int64_t> GetBackupIds() const;

                    /**
                     * 设置备份ID列表
                     * @param _backupIds 备份ID列表
                     * 
                     */
                    void SetBackupIds(const std::vector<int64_t>& _backupIds);

                    /**
                     * 判断参数 BackupIds 是否已赋值
                     * @return BackupIds 是否已赋值
                     * 
                     */
                    bool BackupIdsHasBeenSet() const;

                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取备份名称列表
                     * @return BackupNames 备份名称列表
                     * 
                     */
                    std::vector<std::string> GetBackupNames() const;

                    /**
                     * 设置备份名称列表
                     * @param _backupNames 备份名称列表
                     * 
                     */
                    void SetBackupNames(const std::vector<std::string>& _backupNames);

                    /**
                     * 判断参数 BackupNames 是否已赋值
                     * @return BackupNames 是否已赋值
                     * 
                     */
                    bool BackupNamesHasBeenSet() const;

                    /**
                     * 获取文件名称列表
                     * @return FileNames 文件名称列表
                     * 
                     */
                    std::vector<std::string> GetFileNames() const;

                    /**
                     * 设置文件名称列表
                     * @param _fileNames 文件名称列表
                     * 
                     */
                    void SetFileNames(const std::vector<std::string>& _fileNames);

                    /**
                     * 判断参数 FileNames 是否已赋值
                     * @return FileNames 是否已赋值
                     * 
                     */
                    bool FileNamesHasBeenSet() const;

                    /**
                     * 获取每页数量，范围(0,100]，默认100
                     * @return Limit 每页数量，范围(0,100]，默认100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页数量，范围(0,100]，默认100
                     * @param _limit 每页数量，范围(0,100]，默认100
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
                     * 获取排序字段，可选值：VaultId,VaultName,BackupSaveSeconds,LockedTime,CreateTime,UpdateTime，默认createTime
                     * @return OrderBy 排序字段，可选值：VaultId,VaultName,BackupSaveSeconds,LockedTime,CreateTime,UpdateTime，默认createTime
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序字段，可选值：VaultId,VaultName,BackupSaveSeconds,LockedTime,CreateTime,UpdateTime，默认createTime
                     * @param _orderBy 排序字段，可选值：VaultId,VaultName,BackupSaveSeconds,LockedTime,CreateTime,UpdateTime，默认createTime
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

                    /**
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态
                     * @param _status 状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 保险箱ID
                     */
                    std::string m_vaultId;
                    bool m_vaultIdHasBeenSet;

                    /**
                     * 备份ID列表
                     */
                    std::vector<int64_t> m_backupIds;
                    bool m_backupIdsHasBeenSet;

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 备份名称列表
                     */
                    std::vector<std::string> m_backupNames;
                    bool m_backupNamesHasBeenSet;

                    /**
                     * 文件名称列表
                     */
                    std::vector<std::string> m_fileNames;
                    bool m_fileNamesHasBeenSet;

                    /**
                     * 每页数量，范围(0,100]，默认100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，范围[0,INF)，默认0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 排序字段，可选值：VaultId,VaultName,BackupSaveSeconds,LockedTime,CreateTime,UpdateTime，默认createTime
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序方式，可选值：desc,asc,DESC,ASC，默认desc
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEREDOLOGLISTBYVAULTREQUEST_H_
