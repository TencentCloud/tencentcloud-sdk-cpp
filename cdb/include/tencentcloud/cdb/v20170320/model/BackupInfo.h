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
                     * 获取<p>备份文件名</p>
                     * @return Name <p>备份文件名</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>备份文件名</p>
                     * @param _name <p>备份文件名</p>
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
                     * 获取<p>备份文件大小，单位：Byte</p>
                     * @return Size <p>备份文件大小，单位：Byte</p>
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置<p>备份文件大小，单位：Byte</p>
                     * @param _size <p>备份文件大小，单位：Byte</p>
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
                     * 获取<p>备份快照时间，时间格式：2016-03-17 02:10:37</p>
                     * @return Date <p>备份快照时间，时间格式：2016-03-17 02:10:37</p>
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置<p>备份快照时间，时间格式：2016-03-17 02:10:37</p>
                     * @param _date <p>备份快照时间，时间格式：2016-03-17 02:10:37</p>
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
                     * 获取<p>下载地址</p>
                     * @return IntranetUrl <p>下载地址</p>
                     * 
                     */
                    std::string GetIntranetUrl() const;

                    /**
                     * 设置<p>下载地址</p>
                     * @param _intranetUrl <p>下载地址</p>
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
                     * 获取<p>下载地址</p>
                     * @return InternetUrl <p>下载地址</p>
                     * 
                     */
                    std::string GetInternetUrl() const;

                    /**
                     * 设置<p>下载地址</p>
                     * @param _internetUrl <p>下载地址</p>
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
                     * 获取<p>日志具体类型。可能的值有 &quot;logical&quot;: 逻辑冷备， &quot;physical&quot;: 物理冷备。</p>
                     * @return Type <p>日志具体类型。可能的值有 &quot;logical&quot;: 逻辑冷备， &quot;physical&quot;: 物理冷备。</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>日志具体类型。可能的值有 &quot;logical&quot;: 逻辑冷备， &quot;physical&quot;: 物理冷备。</p>
                     * @param _type <p>日志具体类型。可能的值有 &quot;logical&quot;: 逻辑冷备， &quot;physical&quot;: 物理冷备。</p>
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
                     * 获取<p>备份子任务的ID，删除备份文件时使用</p>
                     * @return BackupId <p>备份子任务的ID，删除备份文件时使用</p>
                     * 
                     */
                    int64_t GetBackupId() const;

                    /**
                     * 设置<p>备份子任务的ID，删除备份文件时使用</p>
                     * @param _backupId <p>备份子任务的ID，删除备份文件时使用</p>
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
                     * 获取<p>备份任务状态。可能的值有 &quot;SUCCESS&quot;: 备份成功， &quot;FAILED&quot;: 备份失败， &quot;RUNNING&quot;: 备份进行中。</p>
                     * @return Status <p>备份任务状态。可能的值有 &quot;SUCCESS&quot;: 备份成功， &quot;FAILED&quot;: 备份失败， &quot;RUNNING&quot;: 备份进行中。</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>备份任务状态。可能的值有 &quot;SUCCESS&quot;: 备份成功， &quot;FAILED&quot;: 备份失败， &quot;RUNNING&quot;: 备份进行中。</p>
                     * @param _status <p>备份任务状态。可能的值有 &quot;SUCCESS&quot;: 备份成功， &quot;FAILED&quot;: 备份失败， &quot;RUNNING&quot;: 备份进行中。</p>
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
                     * 获取<p>备份任务的完成时间</p>
                     * @return FinishTime <p>备份任务的完成时间</p>
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置<p>备份任务的完成时间</p>
                     * @param _finishTime <p>备份任务的完成时间</p>
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
                     * 获取<p>（该值将废弃，不建议使用）备份的创建者，可能的值：SYSTEM - 系统创建，Uin - 发起者Uin值。</p>
                     * @return Creator <p>（该值将废弃，不建议使用）备份的创建者，可能的值：SYSTEM - 系统创建，Uin - 发起者Uin值。</p>
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置<p>（该值将废弃，不建议使用）备份的创建者，可能的值：SYSTEM - 系统创建，Uin - 发起者Uin值。</p>
                     * @param _creator <p>（该值将废弃，不建议使用）备份的创建者，可能的值：SYSTEM - 系统创建，Uin - 发起者Uin值。</p>
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
                     * 获取<p>备份任务的开始时间</p>
                     * @return StartTime <p>备份任务的开始时间</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>备份任务的开始时间</p>
                     * @param _startTime <p>备份任务的开始时间</p>
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
                     * 获取<p>备份方法。可能的值有 &quot;full&quot;: 全量备份， &quot;partial&quot;: 部分备份。</p>
                     * @return Method <p>备份方法。可能的值有 &quot;full&quot;: 全量备份， &quot;partial&quot;: 部分备份。</p>
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置<p>备份方法。可能的值有 &quot;full&quot;: 全量备份， &quot;partial&quot;: 部分备份。</p>
                     * @param _method <p>备份方法。可能的值有 &quot;full&quot;: 全量备份， &quot;partial&quot;: 部分备份。</p>
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
                     * 获取<p>备份方式。可能的值有 &quot;manual&quot;: 手动备份， &quot;automatic&quot;: 自动备份。</p>
                     * @return Way <p>备份方式。可能的值有 &quot;manual&quot;: 手动备份， &quot;automatic&quot;: 自动备份。</p>
                     * 
                     */
                    std::string GetWay() const;

                    /**
                     * 设置<p>备份方式。可能的值有 &quot;manual&quot;: 手动备份， &quot;automatic&quot;: 自动备份。</p>
                     * @param _way <p>备份方式。可能的值有 &quot;manual&quot;: 手动备份， &quot;automatic&quot;: 自动备份。</p>
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
                     * 获取<p>手动备份别名</p>
                     * @return ManualBackupName <p>手动备份别名</p>
                     * 
                     */
                    std::string GetManualBackupName() const;

                    /**
                     * 设置<p>手动备份别名</p>
                     * @param _manualBackupName <p>手动备份别名</p>
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
                     * 获取<p>备份保留类型，save_mode_regular - 常规保存备份，save_mode_period - 定期保存备份</p>
                     * @return SaveMode <p>备份保留类型，save_mode_regular - 常规保存备份，save_mode_period - 定期保存备份</p>
                     * 
                     */
                    std::string GetSaveMode() const;

                    /**
                     * 设置<p>备份保留类型，save_mode_regular - 常规保存备份，save_mode_period - 定期保存备份</p>
                     * @param _saveMode <p>备份保留类型，save_mode_regular - 常规保存备份，save_mode_period - 定期保存备份</p>
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
                     * 获取<p>本地备份所在地域</p>
                     * @return Region <p>本地备份所在地域</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>本地备份所在地域</p>
                     * @param _region <p>本地备份所在地域</p>
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
                     * 获取<p>异地备份详细信息</p>
                     * @return RemoteInfo <p>异地备份详细信息</p>
                     * 
                     */
                    std::vector<RemoteBackupInfo> GetRemoteInfo() const;

                    /**
                     * 设置<p>异地备份详细信息</p>
                     * @param _remoteInfo <p>异地备份详细信息</p>
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
                     * 获取<p>存储方式，0-常规存储，1-归档存储，2-标准存储，默认为0</p>
                     * @return CosStorageType <p>存储方式，0-常规存储，1-归档存储，2-标准存储，默认为0</p>
                     * 
                     */
                    int64_t GetCosStorageType() const;

                    /**
                     * 设置<p>存储方式，0-常规存储，1-归档存储，2-标准存储，默认为0</p>
                     * @param _cosStorageType <p>存储方式，0-常规存储，1-归档存储，2-标准存储，默认为0</p>
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
                     * 获取<p>实例 ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例 ID 相同。</p>
                     * @return InstanceId <p>实例 ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例 ID 相同。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例 ID 相同。</p>
                     * @param _instanceId <p>实例 ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例 ID 相同。</p>
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
                     * 获取<p>备份完成进度</p>
                     * @return Progress <p>备份完成进度</p>
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置<p>备份完成进度</p>
                     * @param _progress <p>备份完成进度</p>
                     * 
                     */
                    void SetProgress(const int64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取<p>备份文件是否加密， on-加密， off-未加密</p>
                     * @return EncryptionFlag <p>备份文件是否加密， on-加密， off-未加密</p>
                     * 
                     */
                    std::string GetEncryptionFlag() const;

                    /**
                     * 设置<p>备份文件是否加密， on-加密， off-未加密</p>
                     * @param _encryptionFlag <p>备份文件是否加密， on-加密， off-未加密</p>
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
                     * 获取<p>备份GTID点位</p>
                     * @return ExecutedGTIDSet <p>备份GTID点位</p>
                     * 
                     */
                    std::string GetExecutedGTIDSet() const;

                    /**
                     * 设置<p>备份GTID点位</p>
                     * @param _executedGTIDSet <p>备份GTID点位</p>
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
                     * 获取<p>备份文件MD5值</p>
                     * @return MD5 <p>备份文件MD5值</p>
                     * 
                     */
                    std::string GetMD5() const;

                    /**
                     * 设置<p>备份文件MD5值</p>
                     * @param _mD5 <p>备份文件MD5值</p>
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
                     * <p>备份文件名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>备份文件大小，单位：Byte</p>
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * <p>备份快照时间，时间格式：2016-03-17 02:10:37</p>
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * <p>下载地址</p>
                     */
                    std::string m_intranetUrl;
                    bool m_intranetUrlHasBeenSet;

                    /**
                     * <p>下载地址</p>
                     */
                    std::string m_internetUrl;
                    bool m_internetUrlHasBeenSet;

                    /**
                     * <p>日志具体类型。可能的值有 &quot;logical&quot;: 逻辑冷备， &quot;physical&quot;: 物理冷备。</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>备份子任务的ID，删除备份文件时使用</p>
                     */
                    int64_t m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * <p>备份任务状态。可能的值有 &quot;SUCCESS&quot;: 备份成功， &quot;FAILED&quot;: 备份失败， &quot;RUNNING&quot;: 备份进行中。</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>备份任务的完成时间</p>
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * <p>（该值将废弃，不建议使用）备份的创建者，可能的值：SYSTEM - 系统创建，Uin - 发起者Uin值。</p>
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * <p>备份任务的开始时间</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>备份方法。可能的值有 &quot;full&quot;: 全量备份， &quot;partial&quot;: 部分备份。</p>
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * <p>备份方式。可能的值有 &quot;manual&quot;: 手动备份， &quot;automatic&quot;: 自动备份。</p>
                     */
                    std::string m_way;
                    bool m_wayHasBeenSet;

                    /**
                     * <p>手动备份别名</p>
                     */
                    std::string m_manualBackupName;
                    bool m_manualBackupNameHasBeenSet;

                    /**
                     * <p>备份保留类型，save_mode_regular - 常规保存备份，save_mode_period - 定期保存备份</p>
                     */
                    std::string m_saveMode;
                    bool m_saveModeHasBeenSet;

                    /**
                     * <p>本地备份所在地域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>异地备份详细信息</p>
                     */
                    std::vector<RemoteBackupInfo> m_remoteInfo;
                    bool m_remoteInfoHasBeenSet;

                    /**
                     * <p>存储方式，0-常规存储，1-归档存储，2-标准存储，默认为0</p>
                     */
                    int64_t m_cosStorageType;
                    bool m_cosStorageTypeHasBeenSet;

                    /**
                     * <p>实例 ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例 ID 相同。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>备份完成进度</p>
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * <p>备份文件是否加密， on-加密， off-未加密</p>
                     */
                    std::string m_encryptionFlag;
                    bool m_encryptionFlagHasBeenSet;

                    /**
                     * <p>备份GTID点位</p>
                     */
                    std::string m_executedGTIDSet;
                    bool m_executedGTIDSetHasBeenSet;

                    /**
                     * <p>备份文件MD5值</p>
                     */
                    std::string m_mD5;
                    bool m_mD5HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_BACKUPINFO_H_
