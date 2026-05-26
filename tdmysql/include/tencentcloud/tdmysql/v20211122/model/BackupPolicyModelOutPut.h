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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_BACKUPPOLICYMODELOUTPUT_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_BACKUPPOLICYMODELOUTPUT_H_

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
                * 备份策略对象
                */
                class BackupPolicyModelOutPut : public AbstractModel
                {
                public:
                    BackupPolicyModelOutPut();
                    ~BackupPolicyModelOutPut() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>备份结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackupEndTime <p>备份结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBackupEndTime() const;

                    /**
                     * 设置<p>备份结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _backupEndTime <p>备份结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>备份方式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackupMethod <p>备份方式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBackupMethod() const;

                    /**
                     * 设置<p>备份方式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _backupMethod <p>备份方式</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackupStartTime <p>备份开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBackupStartTime() const;

                    /**
                     * 设置<p>备份开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _backupStartTime <p>备份开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>引擎类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DBType <p>引擎类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDBType() const;

                    /**
                     * 设置<p>引擎类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dBType <p>引擎类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDBType(const std::string& _dBType);

                    /**
                     * 判断参数 DBType 是否已赋值
                     * @return DBType 是否已赋值
                     * 
                     */
                    bool DBTypeHasBeenSet() const;

                    /**
                     * 获取<p>引擎版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DBVersion <p>引擎版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDBVersion() const;

                    /**
                     * 设置<p>引擎版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dBVersion <p>引擎版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDBVersion(const std::string& _dBVersion);

                    /**
                     * 判断参数 DBVersion 是否已赋值
                     * @return DBVersion 是否已赋值
                     * 
                     */
                    bool DBVersionHasBeenSet() const;

                    /**
                     * 获取<p>是否开启全量备份</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableFull <p>是否开启全量备份</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEnableFull() const;

                    /**
                     * 设置<p>是否开启全量备份</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableFull <p>是否开启全量备份</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableLog <p>是否开启日志备份</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEnableLog() const;

                    /**
                     * 设置<p>是否开启日志备份</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableLog <p>是否开启日志备份</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>预计下次备份时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpectedNextBackupPeriod <p>预计下次备份时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpectedNextBackupPeriod() const;

                    /**
                     * 设置<p>预计下次备份时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expectedNextBackupPeriod <p>预计下次备份时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpectedNextBackupPeriod(const std::string& _expectedNextBackupPeriod);

                    /**
                     * 判断参数 ExpectedNextBackupPeriod 是否已赋值
                     * @return ExpectedNextBackupPeriod 是否已赋值
                     * 
                     */
                    bool ExpectedNextBackupPeriodHasBeenSet() const;

                    /**
                     * 获取<p>全备保留时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FullRetentionPeriod <p>全备保留时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFullRetentionPeriod() const;

                    /**
                     * 设置<p>全备保留时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fullRetentionPeriod <p>全备保留时间</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>策略ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ID <p>策略ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置<p>策略ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iD <p>策略ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId <p>实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId <p>实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>日志保留天数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogRetentionPeriod <p>日志保留天数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLogRetentionPeriod() const;

                    /**
                     * 设置<p>日志保留天数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logRetentionPeriod <p>日志保留天数</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PeriodTime <p>一周的哪几天进行备份</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPeriodTime() const;

                    /**
                     * 设置<p>一周的哪几天进行备份</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _periodTime <p>一周的哪几天进行备份</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region <p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region <p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>备份周期类型  0:Weekly</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PeriodType <p>备份周期类型  0:Weekly</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPeriodType() const;

                    /**
                     * 设置<p>备份周期类型  0:Weekly</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _periodType <p>备份周期类型  0:Weekly</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPeriodType(const int64_t& _periodType);

                    /**
                     * 判断参数 PeriodType 是否已赋值
                     * @return PeriodType 是否已赋值
                     * 
                     */
                    bool PeriodTypeHasBeenSet() const;

                private:

                    /**
                     * <p>备份结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_backupEndTime;
                    bool m_backupEndTimeHasBeenSet;

                    /**
                     * <p>备份方式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * <p>备份开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_backupStartTime;
                    bool m_backupStartTimeHasBeenSet;

                    /**
                     * <p>引擎类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dBType;
                    bool m_dBTypeHasBeenSet;

                    /**
                     * <p>引擎版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dBVersion;
                    bool m_dBVersionHasBeenSet;

                    /**
                     * <p>是否开启全量备份</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_enableFull;
                    bool m_enableFullHasBeenSet;

                    /**
                     * <p>是否开启日志备份</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_enableLog;
                    bool m_enableLogHasBeenSet;

                    /**
                     * <p>预计下次备份时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expectedNextBackupPeriod;
                    bool m_expectedNextBackupPeriodHasBeenSet;

                    /**
                     * <p>全备保留时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_fullRetentionPeriod;
                    bool m_fullRetentionPeriodHasBeenSet;

                    /**
                     * <p>策略ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>日志保留天数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_logRetentionPeriod;
                    bool m_logRetentionPeriodHasBeenSet;

                    /**
                     * <p>一周的哪几天进行备份</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_periodTime;
                    bool m_periodTimeHasBeenSet;

                    /**
                     * <p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>备份周期类型  0:Weekly</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_periodType;
                    bool m_periodTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_BACKUPPOLICYMODELOUTPUT_H_
