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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEBACKUPPLANREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEBACKUPPLANREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateBackupPlan请求参数结构体
                */
                class CreateBackupPlanRequest : public AbstractModel
                {
                public:
                    CreateBackupPlanRequest();
                    ~CreateBackupPlanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID。
                     * @return DBInstanceId 实例ID。
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置实例ID。
                     * @param _dBInstanceId 实例ID。
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取备份计划名称。
                     * @return PlanName 备份计划名称。
                     * 
                     */
                    std::string GetPlanName() const;

                    /**
                     * 设置备份计划名称。
                     * @param _planName 备份计划名称。
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
                     * 获取创建的备份计划类型，当前仅支持month创建。
                     * @return BackupPeriodType 创建的备份计划类型，当前仅支持month创建。
                     * 
                     */
                    std::string GetBackupPeriodType() const;

                    /**
                     * 设置创建的备份计划类型，当前仅支持month创建。
                     * @param _backupPeriodType 创建的备份计划类型，当前仅支持month创建。
                     * 
                     */
                    void SetBackupPeriodType(const std::string& _backupPeriodType);

                    /**
                     * 判断参数 BackupPeriodType 是否已赋值
                     * @return BackupPeriodType 是否已赋值
                     * 
                     */
                    bool BackupPeriodTypeHasBeenSet() const;

                    /**
                     * 获取备份的日期，示例是每个月的2号开启备份。
                     * @return BackupPeriod 备份的日期，示例是每个月的2号开启备份。
                     * 
                     */
                    std::vector<std::string> GetBackupPeriod() const;

                    /**
                     * 设置备份的日期，示例是每个月的2号开启备份。
                     * @param _backupPeriod 备份的日期，示例是每个月的2号开启备份。
                     * 
                     */
                    void SetBackupPeriod(const std::vector<std::string>& _backupPeriod);

                    /**
                     * 判断参数 BackupPeriod 是否已赋值
                     * @return BackupPeriod 是否已赋值
                     * 
                     */
                    bool BackupPeriodHasBeenSet() const;

                    /**
                     * 获取备份开始时间，不传跟随默认备份计划。
                     * @return MinBackupStartTime 备份开始时间，不传跟随默认备份计划。
                     * 
                     */
                    std::string GetMinBackupStartTime() const;

                    /**
                     * 设置备份开始时间，不传跟随默认备份计划。
                     * @param _minBackupStartTime 备份开始时间，不传跟随默认备份计划。
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
                     * 获取备份结束时间，不传跟随默认计划。
                     * @return MaxBackupStartTime 备份结束时间，不传跟随默认计划。
                     * 
                     */
                    std::string GetMaxBackupStartTime() const;

                    /**
                     * 设置备份结束时间，不传跟随默认计划。
                     * @param _maxBackupStartTime 备份结束时间，不传跟随默认计划。
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
                     * 获取数据备份保留时长，week默认是7,month为30。
                     * @return BaseBackupRetentionPeriod 数据备份保留时长，week默认是7,month为30。
                     * 
                     */
                    uint64_t GetBaseBackupRetentionPeriod() const;

                    /**
                     * 设置数据备份保留时长，week默认是7,month为30。
                     * @param _baseBackupRetentionPeriod 数据备份保留时长，week默认是7,month为30。
                     * 
                     */
                    void SetBaseBackupRetentionPeriod(const uint64_t& _baseBackupRetentionPeriod);

                    /**
                     * 判断参数 BaseBackupRetentionPeriod 是否已赋值
                     * @return BaseBackupRetentionPeriod 是否已赋值
                     * 
                     */
                    bool BaseBackupRetentionPeriodHasBeenSet() const;

                private:

                    /**
                     * 实例ID。
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * 备份计划名称。
                     */
                    std::string m_planName;
                    bool m_planNameHasBeenSet;

                    /**
                     * 创建的备份计划类型，当前仅支持month创建。
                     */
                    std::string m_backupPeriodType;
                    bool m_backupPeriodTypeHasBeenSet;

                    /**
                     * 备份的日期，示例是每个月的2号开启备份。
                     */
                    std::vector<std::string> m_backupPeriod;
                    bool m_backupPeriodHasBeenSet;

                    /**
                     * 备份开始时间，不传跟随默认备份计划。
                     */
                    std::string m_minBackupStartTime;
                    bool m_minBackupStartTimeHasBeenSet;

                    /**
                     * 备份结束时间，不传跟随默认计划。
                     */
                    std::string m_maxBackupStartTime;
                    bool m_maxBackupStartTimeHasBeenSet;

                    /**
                     * 数据备份保留时长，week默认是7,month为30。
                     */
                    uint64_t m_baseBackupRetentionPeriod;
                    bool m_baseBackupRetentionPeriodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEBACKUPPLANREQUEST_H_
