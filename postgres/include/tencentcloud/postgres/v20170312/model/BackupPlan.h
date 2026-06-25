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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_BACKUPPLAN_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_BACKUPPLAN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 备份计划
                */
                class BackupPlan : public AbstractModel
                {
                public:
                    BackupPlan();
                    ~BackupPlan() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>备份周期</p>
                     * @return BackupPeriod <p>备份周期</p>
                     * 
                     */
                    std::string GetBackupPeriod() const;

                    /**
                     * 设置<p>备份周期</p>
                     * @param _backupPeriod <p>备份周期</p>
                     * 
                     */
                    void SetBackupPeriod(const std::string& _backupPeriod);

                    /**
                     * 判断参数 BackupPeriod 是否已赋值
                     * @return BackupPeriod 是否已赋值
                     * 
                     */
                    bool BackupPeriodHasBeenSet() const;

                    /**
                     * 获取<p>数据备份保留时长。单位：天</p>
                     * @return BaseBackupRetentionPeriod <p>数据备份保留时长。单位：天</p>
                     * 
                     */
                    uint64_t GetBaseBackupRetentionPeriod() const;

                    /**
                     * 设置<p>数据备份保留时长。单位：天</p>
                     * @param _baseBackupRetentionPeriod <p>数据备份保留时长。单位：天</p>
                     * 
                     */
                    void SetBaseBackupRetentionPeriod(const uint64_t& _baseBackupRetentionPeriod);

                    /**
                     * 判断参数 BaseBackupRetentionPeriod 是否已赋值
                     * @return BaseBackupRetentionPeriod 是否已赋值
                     * 
                     */
                    bool BaseBackupRetentionPeriodHasBeenSet() const;

                    /**
                     * 获取<p>开始备份的最早时间</p>
                     * @return MinBackupStartTime <p>开始备份的最早时间</p>
                     * 
                     */
                    std::string GetMinBackupStartTime() const;

                    /**
                     * 设置<p>开始备份的最早时间</p>
                     * @param _minBackupStartTime <p>开始备份的最早时间</p>
                     * 
                     */
                    void SetMinBackupStartTime(const std::string& _minBackupStartTime);

                    /**
                     * 判断参数 MinBackupStartTime 是否已赋值
                     * @return MinBackupStartTime 是否已赋值
                     * 
                     */
                    bool MinBackupStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>开始备份的最晚时间</p>
                     * @return MaxBackupStartTime <p>开始备份的最晚时间</p>
                     * 
                     */
                    std::string GetMaxBackupStartTime() const;

                    /**
                     * 设置<p>开始备份的最晚时间</p>
                     * @param _maxBackupStartTime <p>开始备份的最晚时间</p>
                     * 
                     */
                    void SetMaxBackupStartTime(const std::string& _maxBackupStartTime);

                    /**
                     * 判断参数 MaxBackupStartTime 是否已赋值
                     * @return MaxBackupStartTime 是否已赋值
                     * 
                     */
                    bool MaxBackupStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>备份类型</p><p>枚举值：</p><ul><li>physical： 物理备份</li><li>logical： 逻辑备份</li><li>snapshot： 快照备份</li></ul>
                     * @return BackupMethod <p>备份类型</p><p>枚举值：</p><ul><li>physical： 物理备份</li><li>logical： 逻辑备份</li><li>snapshot： 快照备份</li></ul>
                     * 
                     */
                    std::string GetBackupMethod() const;

                    /**
                     * 设置<p>备份类型</p><p>枚举值：</p><ul><li>physical： 物理备份</li><li>logical： 逻辑备份</li><li>snapshot： 快照备份</li></ul>
                     * @param _backupMethod <p>备份类型</p><p>枚举值：</p><ul><li>physical： 物理备份</li><li>logical： 逻辑备份</li><li>snapshot： 快照备份</li></ul>
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
                     * 获取<p>备份计划ID</p>
                     * @return PlanId <p>备份计划ID</p>
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置<p>备份计划ID</p>
                     * @param _planId <p>备份计划ID</p>
                     * 
                     */
                    void SetPlanId(const std::string& _planId);

                    /**
                     * 判断参数 PlanId 是否已赋值
                     * @return PlanId 是否已赋值
                     * 
                     */
                    bool PlanIdHasBeenSet() const;

                    /**
                     * 获取<p>备份计划自定义名称。</p>
                     * @return PlanName <p>备份计划自定义名称。</p>
                     * 
                     */
                    std::string GetPlanName() const;

                    /**
                     * 设置<p>备份计划自定义名称。</p>
                     * @param _planName <p>备份计划自定义名称。</p>
                     * 
                     */
                    void SetPlanName(const std::string& _planName);

                    /**
                     * 判断参数 PlanName 是否已赋值
                     * @return PlanName 是否已赋值
                     * 
                     */
                    bool PlanNameHasBeenSet() const;

                    /**
                     * 获取<p>日志备份保留时长。单位：天</p>
                     * @return LogBackupRetentionPeriod <p>日志备份保留时长。单位：天</p>
                     * 
                     */
                    uint64_t GetLogBackupRetentionPeriod() const;

                    /**
                     * 设置<p>日志备份保留时长。单位：天</p>
                     * @param _logBackupRetentionPeriod <p>日志备份保留时长。单位：天</p>
                     * 
                     */
                    void SetLogBackupRetentionPeriod(const uint64_t& _logBackupRetentionPeriod);

                    /**
                     * 判断参数 LogBackupRetentionPeriod 是否已赋值
                     * @return LogBackupRetentionPeriod 是否已赋值
                     * 
                     */
                    bool LogBackupRetentionPeriodHasBeenSet() const;

                    /**
                     * 获取<p>创建时间。</p>
                     * @return CreatedTime <p>创建时间。</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>创建时间。</p>
                     * @param _createdTime <p>创建时间。</p>
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>最近一次的修改时间。</p>
                     * @return UpdatedTime <p>最近一次的修改时间。</p>
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置<p>最近一次的修改时间。</p>
                     * @param _updatedTime <p>最近一次的修改时间。</p>
                     * 
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>备份计划类型。系统默认创建的为default，自定义的为custom。</p>
                     * @return PlanType <p>备份计划类型。系统默认创建的为default，自定义的为custom。</p>
                     * 
                     */
                    std::string GetPlanType() const;

                    /**
                     * 设置<p>备份计划类型。系统默认创建的为default，自定义的为custom。</p>
                     * @param _planType <p>备份计划类型。系统默认创建的为default，自定义的为custom。</p>
                     * 
                     */
                    void SetPlanType(const std::string& _planType);

                    /**
                     * 判断参数 PlanType 是否已赋值
                     * @return PlanType 是否已赋值
                     * 
                     */
                    bool PlanTypeHasBeenSet() const;

                    /**
                     * 获取<p>备份周期类型。当前支持week、month。</p>
                     * @return BackupPeriodType <p>备份周期类型。当前支持week、month。</p>
                     * 
                     */
                    std::string GetBackupPeriodType() const;

                    /**
                     * 设置<p>备份周期类型。当前支持week、month。</p>
                     * @param _backupPeriodType <p>备份周期类型。当前支持week、month。</p>
                     * 
                     */
                    void SetBackupPeriodType(const std::string& _backupPeriodType);

                    /**
                     * 判断参数 BackupPeriodType 是否已赋值
                     * @return BackupPeriodType 是否已赋值
                     * 
                     */
                    bool BackupPeriodTypeHasBeenSet() const;

                private:

                    /**
                     * <p>备份周期</p>
                     */
                    std::string m_backupPeriod;
                    bool m_backupPeriodHasBeenSet;

                    /**
                     * <p>数据备份保留时长。单位：天</p>
                     */
                    uint64_t m_baseBackupRetentionPeriod;
                    bool m_baseBackupRetentionPeriodHasBeenSet;

                    /**
                     * <p>开始备份的最早时间</p>
                     */
                    std::string m_minBackupStartTime;
                    bool m_minBackupStartTimeHasBeenSet;

                    /**
                     * <p>开始备份的最晚时间</p>
                     */
                    std::string m_maxBackupStartTime;
                    bool m_maxBackupStartTimeHasBeenSet;

                    /**
                     * <p>备份类型</p><p>枚举值：</p><ul><li>physical： 物理备份</li><li>logical： 逻辑备份</li><li>snapshot： 快照备份</li></ul>
                     */
                    std::string m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * <p>备份计划ID</p>
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * <p>备份计划自定义名称。</p>
                     */
                    std::string m_planName;
                    bool m_planNameHasBeenSet;

                    /**
                     * <p>日志备份保留时长。单位：天</p>
                     */
                    uint64_t m_logBackupRetentionPeriod;
                    bool m_logBackupRetentionPeriodHasBeenSet;

                    /**
                     * <p>创建时间。</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>最近一次的修改时间。</p>
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * <p>备份计划类型。系统默认创建的为default，自定义的为custom。</p>
                     */
                    std::string m_planType;
                    bool m_planTypeHasBeenSet;

                    /**
                     * <p>备份周期类型。当前支持week、month。</p>
                     */
                    std::string m_backupPeriodType;
                    bool m_backupPeriodTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_BACKUPPLAN_H_
