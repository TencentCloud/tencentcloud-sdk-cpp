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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_BACKUPRECORDS_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_BACKUPRECORDS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * 备份记录
作为出参时，每个字段都会填充
作为入参时， 原封不动将每个字段填回结构体， 注意只有FIleTag=OSDATA才可以调用此接口
                */
                class BackupRecords : public AbstractModel
                {
                public:
                    BackupRecords();
                    ~BackupRecords() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表格组ID
                     * @return ZoneId 表格组ID
                     * 
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置表格组ID
                     * @param _zoneId 表格组ID
                     * 
                     */
                    void SetZoneId(const uint64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取表名称
                     * @return TableName 表名称
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表名称
                     * @param _tableName 表名称
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取备份源
                     * @return BackupType 备份源
                     * 
                     */
                    std::string GetBackupType() const;

                    /**
                     * 设置备份源
                     * @param _backupType 备份源
                     * 
                     */
                    void SetBackupType(const std::string& _backupType);

                    /**
                     * 判断参数 BackupType 是否已赋值
                     * @return BackupType 是否已赋值
                     * 
                     */
                    bool BackupTypeHasBeenSet() const;

                    /**
                     * 获取文件标签：TCAPLUS_FULL或OSDATA
                     * @return FileTag 文件标签：TCAPLUS_FULL或OSDATA
                     * 
                     */
                    std::string GetFileTag() const;

                    /**
                     * 设置文件标签：TCAPLUS_FULL或OSDATA
                     * @param _fileTag 文件标签：TCAPLUS_FULL或OSDATA
                     * 
                     */
                    void SetFileTag(const std::string& _fileTag);

                    /**
                     * 判断参数 FileTag 是否已赋值
                     * @return FileTag 是否已赋值
                     * 
                     */
                    bool FileTagHasBeenSet() const;

                    /**
                     * 获取分片数量
                     * @return ShardCount 分片数量
                     * 
                     */
                    uint64_t GetShardCount() const;

                    /**
                     * 设置分片数量
                     * @param _shardCount 分片数量
                     * 
                     */
                    void SetShardCount(const uint64_t& _shardCount);

                    /**
                     * 判断参数 ShardCount 是否已赋值
                     * @return ShardCount 是否已赋值
                     * 
                     */
                    bool ShardCountHasBeenSet() const;

                    /**
                     * 获取备份批次日期
                     * @return BackupBatchTime 备份批次日期
                     * 
                     */
                    std::string GetBackupBatchTime() const;

                    /**
                     * 设置备份批次日期
                     * @param _backupBatchTime 备份批次日期
                     * 
                     */
                    void SetBackupBatchTime(const std::string& _backupBatchTime);

                    /**
                     * 判断参数 BackupBatchTime 是否已赋值
                     * @return BackupBatchTime 是否已赋值
                     * 
                     */
                    bool BackupBatchTimeHasBeenSet() const;

                    /**
                     * 获取备份文件汇总大小
                     * @return BackupFileSize 备份文件汇总大小
                     * 
                     */
                    uint64_t GetBackupFileSize() const;

                    /**
                     * 设置备份文件汇总大小
                     * @param _backupFileSize 备份文件汇总大小
                     * 
                     */
                    void SetBackupFileSize(const uint64_t& _backupFileSize);

                    /**
                     * 判断参数 BackupFileSize 是否已赋值
                     * @return BackupFileSize 是否已赋值
                     * 
                     */
                    bool BackupFileSizeHasBeenSet() const;

                    /**
                     * 获取备份成功率
                     * @return BackupSuccRate 备份成功率
                     * 
                     */
                    std::string GetBackupSuccRate() const;

                    /**
                     * 设置备份成功率
                     * @param _backupSuccRate 备份成功率
                     * 
                     */
                    void SetBackupSuccRate(const std::string& _backupSuccRate);

                    /**
                     * 判断参数 BackupSuccRate 是否已赋值
                     * @return BackupSuccRate 是否已赋值
                     * 
                     */
                    bool BackupSuccRateHasBeenSet() const;

                    /**
                     * 获取备份文件过期时间
                     * @return BackupExpireTime 备份文件过期时间
                     * 
                     */
                    std::string GetBackupExpireTime() const;

                    /**
                     * 设置备份文件过期时间
                     * @param _backupExpireTime 备份文件过期时间
                     * 
                     */
                    void SetBackupExpireTime(const std::string& _backupExpireTime);

                    /**
                     * 判断参数 BackupExpireTime 是否已赋值
                     * @return BackupExpireTime 是否已赋值
                     * 
                     */
                    bool BackupExpireTimeHasBeenSet() const;

                    /**
                     * 获取业务ID
                     * @return AppId 业务ID
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置业务ID
                     * @param _appId 业务ID
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                private:

                    /**
                     * 表格组ID
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 表名称
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 备份源
                     */
                    std::string m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * 文件标签：TCAPLUS_FULL或OSDATA
                     */
                    std::string m_fileTag;
                    bool m_fileTagHasBeenSet;

                    /**
                     * 分片数量
                     */
                    uint64_t m_shardCount;
                    bool m_shardCountHasBeenSet;

                    /**
                     * 备份批次日期
                     */
                    std::string m_backupBatchTime;
                    bool m_backupBatchTimeHasBeenSet;

                    /**
                     * 备份文件汇总大小
                     */
                    uint64_t m_backupFileSize;
                    bool m_backupFileSizeHasBeenSet;

                    /**
                     * 备份成功率
                     */
                    std::string m_backupSuccRate;
                    bool m_backupSuccRateHasBeenSet;

                    /**
                     * 备份文件过期时间
                     */
                    std::string m_backupExpireTime;
                    bool m_backupExpireTimeHasBeenSet;

                    /**
                     * 业务ID
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_BACKUPRECORDS_H_
