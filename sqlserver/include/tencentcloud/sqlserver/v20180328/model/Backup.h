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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_BACKUP_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_BACKUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/CrossBackupAddr.h>
#include <tencentcloud/sqlserver/v20180328/model/CrossRegionStatus.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 备份文件详细信息
                */
                class Backup : public AbstractModel
                {
                public:
                    Backup();
                    ~Backup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件名，对于单库备份文件不返回此值；单库备份文件通过DescribeBackupFiles接口获取文件名
                     * @return FileName 文件名，对于单库备份文件不返回此值；单库备份文件通过DescribeBackupFiles接口获取文件名
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名，对于单库备份文件不返回此值；单库备份文件通过DescribeBackupFiles接口获取文件名
                     * @param _fileName 文件名，对于单库备份文件不返回此值；单库备份文件通过DescribeBackupFiles接口获取文件名
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取文件大小，单位 KB，对于单库备份文件不返回此值；单库备份文件通过DescribeBackupFiles接口获取文件大小
                     * @return Size 文件大小，单位 KB，对于单库备份文件不返回此值；单库备份文件通过DescribeBackupFiles接口获取文件大小
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置文件大小，单位 KB，对于单库备份文件不返回此值；单库备份文件通过DescribeBackupFiles接口获取文件大小
                     * @param _size 文件大小，单位 KB，对于单库备份文件不返回此值；单库备份文件通过DescribeBackupFiles接口获取文件大小
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取备份开始时间
                     * @return StartTime 备份开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置备份开始时间
                     * @param _startTime 备份开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取备份结束时间
                     * @return EndTime 备份结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置备份结束时间
                     * @param _endTime 备份结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取内网下载地址，对于单库备份文件不返回此值；单库备份文件通过DescribeBackupFiles接口获取下载地址
                     * @return InternalAddr 内网下载地址，对于单库备份文件不返回此值；单库备份文件通过DescribeBackupFiles接口获取下载地址
                     * 
                     */
                    std::string GetInternalAddr() const;

                    /**
                     * 设置内网下载地址，对于单库备份文件不返回此值；单库备份文件通过DescribeBackupFiles接口获取下载地址
                     * @param _internalAddr 内网下载地址，对于单库备份文件不返回此值；单库备份文件通过DescribeBackupFiles接口获取下载地址
                     * 
                     */
                    void SetInternalAddr(const std::string& _internalAddr);

                    /**
                     * 判断参数 InternalAddr 是否已赋值
                     * @return InternalAddr 是否已赋值
                     * 
                     */
                    bool InternalAddrHasBeenSet() const;

                    /**
                     * 获取外网下载地址，对于单库备份文件不返回此值；单库备份文件通过DescribeBackupFiles接口获取下载地址
                     * @return ExternalAddr 外网下载地址，对于单库备份文件不返回此值；单库备份文件通过DescribeBackupFiles接口获取下载地址
                     * 
                     */
                    std::string GetExternalAddr() const;

                    /**
                     * 设置外网下载地址，对于单库备份文件不返回此值；单库备份文件通过DescribeBackupFiles接口获取下载地址
                     * @param _externalAddr 外网下载地址，对于单库备份文件不返回此值；单库备份文件通过DescribeBackupFiles接口获取下载地址
                     * 
                     */
                    void SetExternalAddr(const std::string& _externalAddr);

                    /**
                     * 判断参数 ExternalAddr 是否已赋值
                     * @return ExternalAddr 是否已赋值
                     * 
                     */
                    bool ExternalAddrHasBeenSet() const;

                    /**
                     * 获取备份文件唯一标识，RestoreInstance接口会用到该字段，对于单库备份文件不返回此值；单库备份文件通过DescribeBackupFiles接口获取可回档的ID
                     * @return Id 备份文件唯一标识，RestoreInstance接口会用到该字段，对于单库备份文件不返回此值；单库备份文件通过DescribeBackupFiles接口获取可回档的ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置备份文件唯一标识，RestoreInstance接口会用到该字段，对于单库备份文件不返回此值；单库备份文件通过DescribeBackupFiles接口获取可回档的ID
                     * @param _id 备份文件唯一标识，RestoreInstance接口会用到该字段，对于单库备份文件不返回此值；单库备份文件通过DescribeBackupFiles接口获取可回档的ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取备份文件状态（0-创建中；1-成功；2-失败）
                     * @return Status 备份文件状态（0-创建中；1-成功；2-失败）
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置备份文件状态（0-创建中；1-成功；2-失败）
                     * @param _status 备份文件状态（0-创建中；1-成功；2-失败）
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取多库备份时的DB列表
                     * @return DBs 多库备份时的DB列表
                     * 
                     */
                    std::vector<std::string> GetDBs() const;

                    /**
                     * 设置多库备份时的DB列表
                     * @param _dBs 多库备份时的DB列表
                     * 
                     */
                    void SetDBs(const std::vector<std::string>& _dBs);

                    /**
                     * 判断参数 DBs 是否已赋值
                     * @return DBs 是否已赋值
                     * 
                     */
                    bool DBsHasBeenSet() const;

                    /**
                     * 获取备份策略（0-实例备份；1-多库备份）
                     * @return Strategy 备份策略（0-实例备份；1-多库备份）
                     * 
                     */
                    int64_t GetStrategy() const;

                    /**
                     * 设置备份策略（0-实例备份；1-多库备份）
                     * @param _strategy 备份策略（0-实例备份；1-多库备份）
                     * 
                     */
                    void SetStrategy(const int64_t& _strategy);

                    /**
                     * 判断参数 Strategy 是否已赋值
                     * @return Strategy 是否已赋值
                     * 
                     */
                    bool StrategyHasBeenSet() const;

                    /**
                     * 获取备份存储策略 0-跟随自定义备份保留策略 1-跟随实例生命周期直到实例下线
                     * @return StorageStrategy 备份存储策略 0-跟随自定义备份保留策略 1-跟随实例生命周期直到实例下线
                     * 
                     */
                    int64_t GetStorageStrategy() const;

                    /**
                     * 设置备份存储策略 0-跟随自定义备份保留策略 1-跟随实例生命周期直到实例下线
                     * @param _storageStrategy 备份存储策略 0-跟随自定义备份保留策略 1-跟随实例生命周期直到实例下线
                     * 
                     */
                    void SetStorageStrategy(const int64_t& _storageStrategy);

                    /**
                     * 判断参数 StorageStrategy 是否已赋值
                     * @return StorageStrategy 是否已赋值
                     * 
                     */
                    bool StorageStrategyHasBeenSet() const;

                    /**
                     * 获取备份方式，0-定时备份；1-手动临时备份；2-定期备份
                     * @return BackupWay 备份方式，0-定时备份；1-手动临时备份；2-定期备份
                     * 
                     */
                    int64_t GetBackupWay() const;

                    /**
                     * 设置备份方式，0-定时备份；1-手动临时备份；2-定期备份
                     * @param _backupWay 备份方式，0-定时备份；1-手动临时备份；2-定期备份
                     * 
                     */
                    void SetBackupWay(const int64_t& _backupWay);

                    /**
                     * 判断参数 BackupWay 是否已赋值
                     * @return BackupWay 是否已赋值
                     * 
                     */
                    bool BackupWayHasBeenSet() const;

                    /**
                     * 获取备份任务名称，可自定义
                     * @return BackupName 备份任务名称，可自定义
                     * 
                     */
                    std::string GetBackupName() const;

                    /**
                     * 设置备份任务名称，可自定义
                     * @param _backupName 备份任务名称，可自定义
                     * 
                     */
                    void SetBackupName(const std::string& _backupName);

                    /**
                     * 判断参数 BackupName 是否已赋值
                     * @return BackupName 是否已赋值
                     * 
                     */
                    bool BackupNameHasBeenSet() const;

                    /**
                     * 获取聚合Id，对于打包备份文件不返回此值。通过此值调用DescribeBackupFiles接口，获取单库备份文件的详细信息
                     * @return GroupId 聚合Id，对于打包备份文件不返回此值。通过此值调用DescribeBackupFiles接口，获取单库备份文件的详细信息
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置聚合Id，对于打包备份文件不返回此值。通过此值调用DescribeBackupFiles接口，获取单库备份文件的详细信息
                     * @param _groupId 聚合Id，对于打包备份文件不返回此值。通过此值调用DescribeBackupFiles接口，获取单库备份文件的详细信息
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取备份文件形式（pkg-打包备份文件，single-单库备份文件）
                     * @return BackupFormat 备份文件形式（pkg-打包备份文件，single-单库备份文件）
                     * 
                     */
                    std::string GetBackupFormat() const;

                    /**
                     * 设置备份文件形式（pkg-打包备份文件，single-单库备份文件）
                     * @param _backupFormat 备份文件形式（pkg-打包备份文件，single-单库备份文件）
                     * 
                     */
                    void SetBackupFormat(const std::string& _backupFormat);

                    /**
                     * 判断参数 BackupFormat 是否已赋值
                     * @return BackupFormat 是否已赋值
                     * 
                     */
                    bool BackupFormatHasBeenSet() const;

                    /**
                     * 获取实例当前地域Code
                     * @return Region 实例当前地域Code
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置实例当前地域Code
                     * @param _region 实例当前地域Code
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取跨地域备份的目的地域下载链接
                     * @return CrossBackupAddr 跨地域备份的目的地域下载链接
                     * 
                     */
                    std::vector<CrossBackupAddr> GetCrossBackupAddr() const;

                    /**
                     * 设置跨地域备份的目的地域下载链接
                     * @param _crossBackupAddr 跨地域备份的目的地域下载链接
                     * 
                     */
                    void SetCrossBackupAddr(const std::vector<CrossBackupAddr>& _crossBackupAddr);

                    /**
                     * 判断参数 CrossBackupAddr 是否已赋值
                     * @return CrossBackupAddr 是否已赋值
                     * 
                     */
                    bool CrossBackupAddrHasBeenSet() const;

                    /**
                     * 获取跨地域备份的目标地域和备份状态
                     * @return CrossBackupStatus 跨地域备份的目标地域和备份状态
                     * 
                     */
                    std::vector<CrossRegionStatus> GetCrossBackupStatus() const;

                    /**
                     * 设置跨地域备份的目标地域和备份状态
                     * @param _crossBackupStatus 跨地域备份的目标地域和备份状态
                     * 
                     */
                    void SetCrossBackupStatus(const std::vector<CrossRegionStatus>& _crossBackupStatus);

                    /**
                     * 判断参数 CrossBackupStatus 是否已赋值
                     * @return CrossBackupStatus 是否已赋值
                     * 
                     */
                    bool CrossBackupStatusHasBeenSet() const;

                private:

                    /**
                     * 文件名，对于单库备份文件不返回此值；单库备份文件通过DescribeBackupFiles接口获取文件名
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 文件大小，单位 KB，对于单库备份文件不返回此值；单库备份文件通过DescribeBackupFiles接口获取文件大小
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 备份开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 备份结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 内网下载地址，对于单库备份文件不返回此值；单库备份文件通过DescribeBackupFiles接口获取下载地址
                     */
                    std::string m_internalAddr;
                    bool m_internalAddrHasBeenSet;

                    /**
                     * 外网下载地址，对于单库备份文件不返回此值；单库备份文件通过DescribeBackupFiles接口获取下载地址
                     */
                    std::string m_externalAddr;
                    bool m_externalAddrHasBeenSet;

                    /**
                     * 备份文件唯一标识，RestoreInstance接口会用到该字段，对于单库备份文件不返回此值；单库备份文件通过DescribeBackupFiles接口获取可回档的ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 备份文件状态（0-创建中；1-成功；2-失败）
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 多库备份时的DB列表
                     */
                    std::vector<std::string> m_dBs;
                    bool m_dBsHasBeenSet;

                    /**
                     * 备份策略（0-实例备份；1-多库备份）
                     */
                    int64_t m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * 备份存储策略 0-跟随自定义备份保留策略 1-跟随实例生命周期直到实例下线
                     */
                    int64_t m_storageStrategy;
                    bool m_storageStrategyHasBeenSet;

                    /**
                     * 备份方式，0-定时备份；1-手动临时备份；2-定期备份
                     */
                    int64_t m_backupWay;
                    bool m_backupWayHasBeenSet;

                    /**
                     * 备份任务名称，可自定义
                     */
                    std::string m_backupName;
                    bool m_backupNameHasBeenSet;

                    /**
                     * 聚合Id，对于打包备份文件不返回此值。通过此值调用DescribeBackupFiles接口，获取单库备份文件的详细信息
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 备份文件形式（pkg-打包备份文件，single-单库备份文件）
                     */
                    std::string m_backupFormat;
                    bool m_backupFormatHasBeenSet;

                    /**
                     * 实例当前地域Code
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 跨地域备份的目的地域下载链接
                     */
                    std::vector<CrossBackupAddr> m_crossBackupAddr;
                    bool m_crossBackupAddrHasBeenSet;

                    /**
                     * 跨地域备份的目标地域和备份状态
                     */
                    std::vector<CrossRegionStatus> m_crossBackupStatus;
                    bool m_crossBackupStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_BACKUP_H_
