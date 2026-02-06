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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_BACKUPPOLICYMODELINPUT_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_BACKUPPOLICYMODELINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * 修改备份策略对象
                */
                class BackupPolicyModelInput : public AbstractModel
                {
                public:
                    BackupPolicyModelInput();
                    ~BackupPolicyModelInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>备份结束时间</p>
                     * @return BackupEndTime <p>备份结束时间</p>
                     * 
                     */
                    std::string GetBackupEndTime() const;

                    /**
                     * 设置<p>备份结束时间</p>
                     * @param _backupEndTime <p>备份结束时间</p>
                     * 
                     */
                    void SetBackupEndTime(const std::string& _backupEndTime);

                    /**
                     * 判断参数 BackupEndTime 是否已赋值
                     * @return BackupEndTime 是否已赋值
                     * 
                     */
                    bool BackupEndTimeHasBeenSet() const;

                    /**
                     * 获取<p>备份方式  physical 物理备份 snapshot 快照备份</p>
                     * @return BackupMethod <p>备份方式  physical 物理备份 snapshot 快照备份</p>
                     * 
                     */
                    std::string GetBackupMethod() const;

                    /**
                     * 设置<p>备份方式  physical 物理备份 snapshot 快照备份</p>
                     * @param _backupMethod <p>备份方式  physical 物理备份 snapshot 快照备份</p>
                     * 
                     */
                    void SetBackupMethod(const std::string& _backupMethod);

                    /**
                     * 判断参数 BackupMethod 是否已赋值
                     * @return BackupMethod 是否已赋值
                     * 
                     */
                    bool BackupMethodHasBeenSet() const;

                    /**
                     * 获取<p>备份开始时间</p>
                     * @return BackupStartTime <p>备份开始时间</p>
                     * 
                     */
                    std::string GetBackupStartTime() const;

                    /**
                     * 设置<p>备份开始时间</p>
                     * @param _backupStartTime <p>备份开始时间</p>
                     * 
                     */
                    void SetBackupStartTime(const std::string& _backupStartTime);

                    /**
                     * 判断参数 BackupStartTime 是否已赋值
                     * @return BackupStartTime 是否已赋值
                     * 
                     */
                    bool BackupStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>是否开启全量备份</p>
                     * @return EnableFull <p>是否开启全量备份</p>
                     * 
                     */
                    int64_t GetEnableFull() const;

                    /**
                     * 设置<p>是否开启全量备份</p>
                     * @param _enableFull <p>是否开启全量备份</p>
                     * 
                     */
                    void SetEnableFull(const int64_t& _enableFull);

                    /**
                     * 判断参数 EnableFull 是否已赋值
                     * @return EnableFull 是否已赋值
                     * 
                     */
                    bool EnableFullHasBeenSet() const;

                    /**
                     * 获取<p>是否开启日志备份</p>
                     * @return EnableLog <p>是否开启日志备份</p>
                     * 
                     */
                    int64_t GetEnableLog() const;

                    /**
                     * 设置<p>是否开启日志备份</p>
                     * @param _enableLog <p>是否开启日志备份</p>
                     * 
                     */
                    void SetEnableLog(const int64_t& _enableLog);

                    /**
                     * 判断参数 EnableLog 是否已赋值
                     * @return EnableLog 是否已赋值
                     * 
                     */
                    bool EnableLogHasBeenSet() const;

                    /**
                     * 获取<p>全备保留时间,目前只能设置7天</p>
                     * @return FullRetentionPeriod <p>全备保留时间,目前只能设置7天</p>
                     * 
                     */
                    int64_t GetFullRetentionPeriod() const;

                    /**
                     * 设置<p>全备保留时间,目前只能设置7天</p>
                     * @param _fullRetentionPeriod <p>全备保留时间,目前只能设置7天</p>
                     * 
                     */
                    void SetFullRetentionPeriod(const int64_t& _fullRetentionPeriod);

                    /**
                     * 判断参数 FullRetentionPeriod 是否已赋值
                     * @return FullRetentionPeriod 是否已赋值
                     * 
                     */
                    bool FullRetentionPeriodHasBeenSet() const;

                    /**
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
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
                     * 获取<p>日志保留天数，目前只能设置保留7天</p>
                     * @return LogRetentionPeriod <p>日志保留天数，目前只能设置保留7天</p>
                     * 
                     */
                    int64_t GetLogRetentionPeriod() const;

                    /**
                     * 设置<p>日志保留天数，目前只能设置保留7天</p>
                     * @param _logRetentionPeriod <p>日志保留天数，目前只能设置保留7天</p>
                     * 
                     */
                    void SetLogRetentionPeriod(const int64_t& _logRetentionPeriod);

                    /**
                     * 判断参数 LogRetentionPeriod 是否已赋值
                     * @return LogRetentionPeriod 是否已赋值
                     * 
                     */
                    bool LogRetentionPeriodHasBeenSet() const;

                    /**
                     * 获取<p>一周的哪几天进行备份</p>
                     * @return PeriodTime <p>一周的哪几天进行备份</p>
                     * 
                     */
                    std::string GetPeriodTime() const;

                    /**
                     * 设置<p>一周的哪几天进行备份</p>
                     * @param _periodTime <p>一周的哪几天进行备份</p>
                     * 
                     */
                    void SetPeriodTime(const std::string& _periodTime);

                    /**
                     * 判断参数 PeriodTime 是否已赋值
                     * @return PeriodTime 是否已赋值
                     * 
                     */
                    bool PeriodTimeHasBeenSet() const;

                    /**
                     * 获取<p>存储类型:COS,SNAPSHOT</p>枚举值：<ul><li> COS： COS存储</li><li> SNAPSHOT： 云盘快照</li></ul>
                     * @return StorageType <p>存储类型:COS,SNAPSHOT</p>枚举值：<ul><li> COS： COS存储</li><li> SNAPSHOT： 云盘快照</li></ul>
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置<p>存储类型:COS,SNAPSHOT</p>枚举值：<ul><li> COS： COS存储</li><li> SNAPSHOT： 云盘快照</li></ul>
                     * @param _storageType <p>存储类型:COS,SNAPSHOT</p>枚举值：<ul><li> COS： COS存储</li><li> SNAPSHOT： 云盘快照</li></ul>
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                private:

                    /**
                     * <p>备份结束时间</p>
                     */
                    std::string m_backupEndTime;
                    bool m_backupEndTimeHasBeenSet;

                    /**
                     * <p>备份方式  physical 物理备份 snapshot 快照备份</p>
                     */
                    std::string m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * <p>备份开始时间</p>
                     */
                    std::string m_backupStartTime;
                    bool m_backupStartTimeHasBeenSet;

                    /**
                     * <p>是否开启全量备份</p>
                     */
                    int64_t m_enableFull;
                    bool m_enableFullHasBeenSet;

                    /**
                     * <p>是否开启日志备份</p>
                     */
                    int64_t m_enableLog;
                    bool m_enableLogHasBeenSet;

                    /**
                     * <p>全备保留时间,目前只能设置7天</p>
                     */
                    int64_t m_fullRetentionPeriod;
                    bool m_fullRetentionPeriodHasBeenSet;

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>日志保留天数，目前只能设置保留7天</p>
                     */
                    int64_t m_logRetentionPeriod;
                    bool m_logRetentionPeriodHasBeenSet;

                    /**
                     * <p>一周的哪几天进行备份</p>
                     */
                    std::string m_periodTime;
                    bool m_periodTimeHasBeenSet;

                    /**
                     * <p>存储类型:COS,SNAPSHOT</p>枚举值：<ul><li> COS： COS存储</li><li> SNAPSHOT： 云盘快照</li></ul>
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_BACKUPPOLICYMODELINPUT_H_
