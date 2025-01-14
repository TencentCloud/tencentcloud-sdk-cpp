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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_BACKUPINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_BACKUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/RemoteBackupInfo.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 备份详细信息
                */
                class BackupInfo : public AbstractModel
                {
                public:
                    BackupInfo();
                    ~BackupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取备份文件名
                     * @return Name 备份文件名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置备份文件名
                     * @param _name 备份文件名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取备份文件大小，单位：Byte
                     * @return Size 备份文件大小，单位：Byte
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置备份文件大小，单位：Byte
                     * @param _size 备份文件大小，单位：Byte
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
                     * 获取备份快照时间，时间格式：2016-03-17 02:10:37
                     * @return Date 备份快照时间，时间格式：2016-03-17 02:10:37
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置备份快照时间，时间格式：2016-03-17 02:10:37
                     * @param _date 备份快照时间，时间格式：2016-03-17 02:10:37
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取下载地址
                     * @return IntranetUrl 下载地址
                     * 
                     */
                    std::string GetIntranetUrl() const;

                    /**
                     * 设置下载地址
                     * @param _intranetUrl 下载地址
                     * 
                     */
                    void SetIntranetUrl(const std::string& _intranetUrl);

                    /**
                     * 判断参数 IntranetUrl 是否已赋值
                     * @return IntranetUrl 是否已赋值
                     * 
                     */
                    bool IntranetUrlHasBeenSet() const;

                    /**
                     * 获取下载地址
                     * @return InternetUrl 下载地址
                     * 
                     */
                    std::string GetInternetUrl() const;

                    /**
                     * 设置下载地址
                     * @param _internetUrl 下载地址
                     * 
                     */
                    void SetInternetUrl(const std::string& _internetUrl);

                    /**
                     * 判断参数 InternetUrl 是否已赋值
                     * @return InternetUrl 是否已赋值
                     * 
                     */
                    bool InternetUrlHasBeenSet() const;

                    /**
                     * 获取日志具体类型。可能的值有 "logical": 逻辑冷备， "physical": 物理冷备。
                     * @return Type 日志具体类型。可能的值有 "logical": 逻辑冷备， "physical": 物理冷备。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置日志具体类型。可能的值有 "logical": 逻辑冷备， "physical": 物理冷备。
                     * @param _type 日志具体类型。可能的值有 "logical": 逻辑冷备， "physical": 物理冷备。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取备份子任务的ID，删除备份文件时使用
                     * @return BackupId 备份子任务的ID，删除备份文件时使用
                     * 
                     */
                    int64_t GetBackupId() const;

                    /**
                     * 设置备份子任务的ID，删除备份文件时使用
                     * @param _backupId 备份子任务的ID，删除备份文件时使用
                     * 
                     */
                    void SetBackupId(const int64_t& _backupId);

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     * 
                     */
                    bool BackupIdHasBeenSet() const;

                    /**
                     * 获取备份任务状态。可能的值有 "SUCCESS": 备份成功， "FAILED": 备份失败， "RUNNING": 备份进行中。
                     * @return Status 备份任务状态。可能的值有 "SUCCESS": 备份成功， "FAILED": 备份失败， "RUNNING": 备份进行中。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置备份任务状态。可能的值有 "SUCCESS": 备份成功， "FAILED": 备份失败， "RUNNING": 备份进行中。
                     * @param _status 备份任务状态。可能的值有 "SUCCESS": 备份成功， "FAILED": 备份失败， "RUNNING": 备份进行中。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取备份任务的完成时间
                     * @return FinishTime 备份任务的完成时间
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置备份任务的完成时间
                     * @param _finishTime 备份任务的完成时间
                     * 
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取（该值将废弃，不建议使用）备份的创建者，可能的值：SYSTEM - 系统创建，Uin - 发起者Uin值。
                     * @return Creator （该值将废弃，不建议使用）备份的创建者，可能的值：SYSTEM - 系统创建，Uin - 发起者Uin值。
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置（该值将废弃，不建议使用）备份的创建者，可能的值：SYSTEM - 系统创建，Uin - 发起者Uin值。
                     * @param _creator （该值将废弃，不建议使用）备份的创建者，可能的值：SYSTEM - 系统创建，Uin - 发起者Uin值。
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取备份任务的开始时间
                     * @return StartTime 备份任务的开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置备份任务的开始时间
                     * @param _startTime 备份任务的开始时间
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
                     * 获取备份方法。可能的值有 "full": 全量备份， "partial": 部分备份。
                     * @return Method 备份方法。可能的值有 "full": 全量备份， "partial": 部分备份。
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置备份方法。可能的值有 "full": 全量备份， "partial": 部分备份。
                     * @param _method 备份方法。可能的值有 "full": 全量备份， "partial": 部分备份。
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取备份方式。可能的值有 "manual": 手动备份， "automatic": 自动备份。
                     * @return Way 备份方式。可能的值有 "manual": 手动备份， "automatic": 自动备份。
                     * 
                     */
                    std::string GetWay() const;

                    /**
                     * 设置备份方式。可能的值有 "manual": 手动备份， "automatic": 自动备份。
                     * @param _way 备份方式。可能的值有 "manual": 手动备份， "automatic": 自动备份。
                     * 
                     */
                    void SetWay(const std::string& _way);

                    /**
                     * 判断参数 Way 是否已赋值
                     * @return Way 是否已赋值
                     * 
                     */
                    bool WayHasBeenSet() const;

                    /**
                     * 获取手动备份别名
                     * @return ManualBackupName 手动备份别名
                     * 
                     */
                    std::string GetManualBackupName() const;

                    /**
                     * 设置手动备份别名
                     * @param _manualBackupName 手动备份别名
                     * 
                     */
                    void SetManualBackupName(const std::string& _manualBackupName);

                    /**
                     * 判断参数 ManualBackupName 是否已赋值
                     * @return ManualBackupName 是否已赋值
                     * 
                     */
                    bool ManualBackupNameHasBeenSet() const;

                    /**
                     * 获取备份保留类型，save_mode_regular - 常规保存备份，save_mode_period - 定期保存备份
                     * @return SaveMode 备份保留类型，save_mode_regular - 常规保存备份，save_mode_period - 定期保存备份
                     * 
                     */
                    std::string GetSaveMode() const;

                    /**
                     * 设置备份保留类型，save_mode_regular - 常规保存备份，save_mode_period - 定期保存备份
                     * @param _saveMode 备份保留类型，save_mode_regular - 常规保存备份，save_mode_period - 定期保存备份
                     * 
                     */
                    void SetSaveMode(const std::string& _saveMode);

                    /**
                     * 判断参数 SaveMode 是否已赋值
                     * @return SaveMode 是否已赋值
                     * 
                     */
                    bool SaveModeHasBeenSet() const;

                    /**
                     * 获取本地备份所在地域
                     * @return Region 本地备份所在地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置本地备份所在地域
                     * @param _region 本地备份所在地域
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
                     * 获取异地备份详细信息
                     * @return RemoteInfo 异地备份详细信息
                     * 
                     */
                    std::vector<RemoteBackupInfo> GetRemoteInfo() const;

                    /**
                     * 设置异地备份详细信息
                     * @param _remoteInfo 异地备份详细信息
                     * 
                     */
                    void SetRemoteInfo(const std::vector<RemoteBackupInfo>& _remoteInfo);

                    /**
                     * 判断参数 RemoteInfo 是否已赋值
                     * @return RemoteInfo 是否已赋值
                     * 
                     */
                    bool RemoteInfoHasBeenSet() const;

                    /**
                     * 获取存储方式，0-常规存储，1-归档存储，2-标准存储，默认为0
                     * @return CosStorageType 存储方式，0-常规存储，1-归档存储，2-标准存储，默认为0
                     * 
                     */
                    int64_t GetCosStorageType() const;

                    /**
                     * 设置存储方式，0-常规存储，1-归档存储，2-标准存储，默认为0
                     * @param _cosStorageType 存储方式，0-常规存储，1-归档存储，2-标准存储，默认为0
                     * 
                     */
                    void SetCosStorageType(const int64_t& _cosStorageType);

                    /**
                     * 判断参数 CosStorageType 是否已赋值
                     * @return CosStorageType 是否已赋值
                     * 
                     */
                    bool CosStorageTypeHasBeenSet() const;

                    /**
                     * 获取实例 ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例 ID 相同。
                     * @return InstanceId 实例 ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例 ID 相同。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例 ID 相同。
                     * @param _instanceId 实例 ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例 ID 相同。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取备份文件是否加密， on-加密， off-未加密
                     * @return EncryptionFlag 备份文件是否加密， on-加密， off-未加密
                     * 
                     */
                    std::string GetEncryptionFlag() const;

                    /**
                     * 设置备份文件是否加密， on-加密， off-未加密
                     * @param _encryptionFlag 备份文件是否加密， on-加密， off-未加密
                     * 
                     */
                    void SetEncryptionFlag(const std::string& _encryptionFlag);

                    /**
                     * 判断参数 EncryptionFlag 是否已赋值
                     * @return EncryptionFlag 是否已赋值
                     * 
                     */
                    bool EncryptionFlagHasBeenSet() const;

                    /**
                     * 获取备份GTID点位
                     * @return ExecutedGTIDSet 备份GTID点位
                     * 
                     */
                    std::string GetExecutedGTIDSet() const;

                    /**
                     * 设置备份GTID点位
                     * @param _executedGTIDSet 备份GTID点位
                     * 
                     */
                    void SetExecutedGTIDSet(const std::string& _executedGTIDSet);

                    /**
                     * 判断参数 ExecutedGTIDSet 是否已赋值
                     * @return ExecutedGTIDSet 是否已赋值
                     * 
                     */
                    bool ExecutedGTIDSetHasBeenSet() const;

                    /**
                     * 获取备份文件MD5值
                     * @return MD5 备份文件MD5值
                     * 
                     */
                    std::string GetMD5() const;

                    /**
                     * 设置备份文件MD5值
                     * @param _mD5 备份文件MD5值
                     * 
                     */
                    void SetMD5(const std::string& _mD5);

                    /**
                     * 判断参数 MD5 是否已赋值
                     * @return MD5 是否已赋值
                     * 
                     */
                    bool MD5HasBeenSet() const;

                private:

                    /**
                     * 备份文件名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 备份文件大小，单位：Byte
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 备份快照时间，时间格式：2016-03-17 02:10:37
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 下载地址
                     */
                    std::string m_intranetUrl;
                    bool m_intranetUrlHasBeenSet;

                    /**
                     * 下载地址
                     */
                    std::string m_internetUrl;
                    bool m_internetUrlHasBeenSet;

                    /**
                     * 日志具体类型。可能的值有 "logical": 逻辑冷备， "physical": 物理冷备。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 备份子任务的ID，删除备份文件时使用
                     */
                    int64_t m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * 备份任务状态。可能的值有 "SUCCESS": 备份成功， "FAILED": 备份失败， "RUNNING": 备份进行中。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 备份任务的完成时间
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * （该值将废弃，不建议使用）备份的创建者，可能的值：SYSTEM - 系统创建，Uin - 发起者Uin值。
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 备份任务的开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 备份方法。可能的值有 "full": 全量备份， "partial": 部分备份。
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 备份方式。可能的值有 "manual": 手动备份， "automatic": 自动备份。
                     */
                    std::string m_way;
                    bool m_wayHasBeenSet;

                    /**
                     * 手动备份别名
                     */
                    std::string m_manualBackupName;
                    bool m_manualBackupNameHasBeenSet;

                    /**
                     * 备份保留类型，save_mode_regular - 常规保存备份，save_mode_period - 定期保存备份
                     */
                    std::string m_saveMode;
                    bool m_saveModeHasBeenSet;

                    /**
                     * 本地备份所在地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 异地备份详细信息
                     */
                    std::vector<RemoteBackupInfo> m_remoteInfo;
                    bool m_remoteInfoHasBeenSet;

                    /**
                     * 存储方式，0-常规存储，1-归档存储，2-标准存储，默认为0
                     */
                    int64_t m_cosStorageType;
                    bool m_cosStorageTypeHasBeenSet;

                    /**
                     * 实例 ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例 ID 相同。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 备份文件是否加密， on-加密， off-未加密
                     */
                    std::string m_encryptionFlag;
                    bool m_encryptionFlagHasBeenSet;

                    /**
                     * 备份GTID点位
                     */
                    std::string m_executedGTIDSet;
                    bool m_executedGTIDSetHasBeenSet;

                    /**
                     * 备份文件MD5值
                     */
                    std::string m_mD5;
                    bool m_mD5HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_BACKUPINFO_H_
