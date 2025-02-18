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
                     * 获取备份周期
                     * @return BackupPeriod 备份周期
                     * 
                     */
                    std::string GetBackupPeriod() const;

                    /**
                     * 设置备份周期
                     * @param _backupPeriod 备份周期
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
                     * 获取数据备份保留时长
                     * @return BaseBackupRetentionPeriod 数据备份保留时长
                     * 
                     */
                    uint64_t GetBaseBackupRetentionPeriod() const;

                    /**
                     * 设置数据备份保留时长
                     * @param _baseBackupRetentionPeriod 数据备份保留时长
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
                     * 获取开始备份的最早时间
                     * @return MinBackupStartTime 开始备份的最早时间
                     * 
                     */
                    std::string GetMinBackupStartTime() const;

                    /**
                     * 设置开始备份的最早时间
                     * @param _minBackupStartTime 开始备份的最早时间
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
                     * 获取开始备份的最晚时间
                     * @return MaxBackupStartTime 开始备份的最晚时间
                     * 
                     */
                    std::string GetMaxBackupStartTime() const;

                    /**
                     * 设置开始备份的最晚时间
                     * @param _maxBackupStartTime 开始备份的最晚时间
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
                     * 获取备份计划ID
                     * @return PlanId 备份计划ID
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置备份计划ID
                     * @param _planId 备份计划ID
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
                     * 获取备份计划自定义名称。
                     * @return PlanName 备份计划自定义名称。
                     * 
                     */
                    std::string GetPlanName() const;

                    /**
                     * 设置备份计划自定义名称。
                     * @param _planName 备份计划自定义名称。
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
                     * 获取日志备份保留时长。
                     * @return LogBackupRetentionPeriod 日志备份保留时长。
                     * 
                     */
                    uint64_t GetLogBackupRetentionPeriod() const;

                    /**
                     * 设置日志备份保留时长。
                     * @param _logBackupRetentionPeriod 日志备份保留时长。
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
                     * 获取创建时间。
                     * @return CreatedTime 创建时间。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createdTime 创建时间。
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
                     * 获取最近一次的修改时间。
                     * @return UpdatedTime 最近一次的修改时间。
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置最近一次的修改时间。
                     * @param _updatedTime 最近一次的修改时间。
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
                     * 获取备份计划类型。系统默认创建的为default，自定义的为custom。
                     * @return PlanType 备份计划类型。系统默认创建的为default，自定义的为custom。
                     * 
                     */
                    std::string GetPlanType() const;

                    /**
                     * 设置备份计划类型。系统默认创建的为default，自定义的为custom。
                     * @param _planType 备份计划类型。系统默认创建的为default，自定义的为custom。
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
                     * 获取备份周期类型。当前支持week、month。
                     * @return BackupPeriodType 备份周期类型。当前支持week、month。
                     * 
                     */
                    std::string GetBackupPeriodType() const;

                    /**
                     * 设置备份周期类型。当前支持week、month。
                     * @param _backupPeriodType 备份周期类型。当前支持week、month。
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
                     * 备份周期
                     */
                    std::string m_backupPeriod;
                    bool m_backupPeriodHasBeenSet;

                    /**
                     * 数据备份保留时长
                     */
                    uint64_t m_baseBackupRetentionPeriod;
                    bool m_baseBackupRetentionPeriodHasBeenSet;

                    /**
                     * 开始备份的最早时间
                     */
                    std::string m_minBackupStartTime;
                    bool m_minBackupStartTimeHasBeenSet;

                    /**
                     * 开始备份的最晚时间
                     */
                    std::string m_maxBackupStartTime;
                    bool m_maxBackupStartTimeHasBeenSet;

                    /**
                     * 备份计划ID
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * 备份计划自定义名称。
                     */
                    std::string m_planName;
                    bool m_planNameHasBeenSet;

                    /**
                     * 日志备份保留时长。
                     */
                    uint64_t m_logBackupRetentionPeriod;
                    bool m_logBackupRetentionPeriodHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 最近一次的修改时间。
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * 备份计划类型。系统默认创建的为default，自定义的为custom。
                     */
                    std::string m_planType;
                    bool m_planTypeHasBeenSet;

                    /**
                     * 备份周期类型。当前支持week、month。
                     */
                    std::string m_backupPeriodType;
                    bool m_backupPeriodTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_BACKUPPLAN_H_
