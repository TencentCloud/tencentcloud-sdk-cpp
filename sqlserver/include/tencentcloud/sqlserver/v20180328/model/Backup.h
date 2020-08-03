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
                     * 获取文件名
                     * @return FileName 文件名
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名
                     * @param FileName 文件名
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取文件大小，单位 KB
                     * @return Size 文件大小，单位 KB
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置文件大小，单位 KB
                     * @param Size 文件大小，单位 KB
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取备份开始时间
                     * @return StartTime 备份开始时间
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置备份开始时间
                     * @param StartTime 备份开始时间
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取备份结束时间
                     * @return EndTime 备份结束时间
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置备份结束时间
                     * @param EndTime 备份结束时间
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取内网下载地址
                     * @return InternalAddr 内网下载地址
                     */
                    std::string GetInternalAddr() const;

                    /**
                     * 设置内网下载地址
                     * @param InternalAddr 内网下载地址
                     */
                    void SetInternalAddr(const std::string& _internalAddr);

                    /**
                     * 判断参数 InternalAddr 是否已赋值
                     * @return InternalAddr 是否已赋值
                     */
                    bool InternalAddrHasBeenSet() const;

                    /**
                     * 获取外网下载地址
                     * @return ExternalAddr 外网下载地址
                     */
                    std::string GetExternalAddr() const;

                    /**
                     * 设置外网下载地址
                     * @param ExternalAddr 外网下载地址
                     */
                    void SetExternalAddr(const std::string& _externalAddr);

                    /**
                     * 判断参数 ExternalAddr 是否已赋值
                     * @return ExternalAddr 是否已赋值
                     */
                    bool ExternalAddrHasBeenSet() const;

                    /**
                     * 获取备份文件唯一标识，RestoreInstance接口会用到该字段
                     * @return Id 备份文件唯一标识，RestoreInstance接口会用到该字段
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置备份文件唯一标识，RestoreInstance接口会用到该字段
                     * @param Id 备份文件唯一标识，RestoreInstance接口会用到该字段
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取备份文件状态（0-创建中；1-成功；2-失败）
                     * @return Status 备份文件状态（0-创建中；1-成功；2-失败）
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置备份文件状态（0-创建中；1-成功；2-失败）
                     * @param Status 备份文件状态（0-创建中；1-成功；2-失败）
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取多库备份时的DB列表
                     * @return DBs 多库备份时的DB列表
                     */
                    std::vector<std::string> GetDBs() const;

                    /**
                     * 设置多库备份时的DB列表
                     * @param DBs 多库备份时的DB列表
                     */
                    void SetDBs(const std::vector<std::string>& _dBs);

                    /**
                     * 判断参数 DBs 是否已赋值
                     * @return DBs 是否已赋值
                     */
                    bool DBsHasBeenSet() const;

                    /**
                     * 获取备份策略（0-实例备份；1-多库备份）
                     * @return Strategy 备份策略（0-实例备份；1-多库备份）
                     */
                    int64_t GetStrategy() const;

                    /**
                     * 设置备份策略（0-实例备份；1-多库备份）
                     * @param Strategy 备份策略（0-实例备份；1-多库备份）
                     */
                    void SetStrategy(const int64_t& _strategy);

                    /**
                     * 判断参数 Strategy 是否已赋值
                     * @return Strategy 是否已赋值
                     */
                    bool StrategyHasBeenSet() const;

                    /**
                     * 获取备份方式，0-定时备份；1-手动临时备份
                     * @return BackupWay 备份方式，0-定时备份；1-手动临时备份
                     */
                    int64_t GetBackupWay() const;

                    /**
                     * 设置备份方式，0-定时备份；1-手动临时备份
                     * @param BackupWay 备份方式，0-定时备份；1-手动临时备份
                     */
                    void SetBackupWay(const int64_t& _backupWay);

                    /**
                     * 判断参数 BackupWay 是否已赋值
                     * @return BackupWay 是否已赋值
                     */
                    bool BackupWayHasBeenSet() const;

                    /**
                     * 获取备份名称，可自定义
                     * @return BackupName 备份名称，可自定义
                     */
                    std::string GetBackupName() const;

                    /**
                     * 设置备份名称，可自定义
                     * @param BackupName 备份名称，可自定义
                     */
                    void SetBackupName(const std::string& _backupName);

                    /**
                     * 判断参数 BackupName 是否已赋值
                     * @return BackupName 是否已赋值
                     */
                    bool BackupNameHasBeenSet() const;

                private:

                    /**
                     * 文件名
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 文件大小，单位 KB
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
                     * 内网下载地址
                     */
                    std::string m_internalAddr;
                    bool m_internalAddrHasBeenSet;

                    /**
                     * 外网下载地址
                     */
                    std::string m_externalAddr;
                    bool m_externalAddrHasBeenSet;

                    /**
                     * 备份文件唯一标识，RestoreInstance接口会用到该字段
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
                     * 备份方式，0-定时备份；1-手动临时备份
                     */
                    int64_t m_backupWay;
                    bool m_backupWayHasBeenSet;

                    /**
                     * 备份名称，可自定义
                     */
                    std::string m_backupName;
                    bool m_backupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_BACKUP_H_
