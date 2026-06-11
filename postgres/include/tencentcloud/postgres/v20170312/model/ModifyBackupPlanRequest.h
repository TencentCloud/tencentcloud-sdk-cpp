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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYBACKUPPLANREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYBACKUPPLANREQUEST_H_

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
                * ModifyBackupPlan请求参数结构体
                */
                class ModifyBackupPlanRequest : public AbstractModel
                {
                public:
                    ModifyBackupPlanRequest();
                    ~ModifyBackupPlanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID。可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取</p>
                     * @return DBInstanceId <p>实例ID。可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取</p>
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置<p>实例ID。可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取</p>
                     * @param _dBInstanceId <p>实例ID。可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取</p>
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
                     * 获取<p>实例最早开始备份时间</p>
                     * @return MinBackupStartTime <p>实例最早开始备份时间</p>
                     * 
                     */
                    std::string GetMinBackupStartTime() const;

                    /**
                     * 设置<p>实例最早开始备份时间</p>
                     * @param _minBackupStartTime <p>实例最早开始备份时间</p>
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
                     * 获取<p>实例最晚开始备份时间</p>
                     * @return MaxBackupStartTime <p>实例最晚开始备份时间</p>
                     * 
                     */
                    std::string GetMaxBackupStartTime() const;

                    /**
                     * 设置<p>实例最晚开始备份时间</p>
                     * @param _maxBackupStartTime <p>实例最晚开始备份时间</p>
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
                     * 获取<p>实例备份保留时长，取值范围为7-1830，单位是天</p>
                     * @return BaseBackupRetentionPeriod <p>实例备份保留时长，取值范围为7-1830，单位是天</p>
                     * 
                     */
                    uint64_t GetBaseBackupRetentionPeriod() const;

                    /**
                     * 设置<p>实例备份保留时长，取值范围为7-1830，单位是天</p>
                     * @param _baseBackupRetentionPeriod <p>实例备份保留时长，取值范围为7-1830，单位是天</p>
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
                     * 获取<p>实例备份周期，若是星期维度，格式为小写星期英文单词，且至少设置两天备份；若是按月维度，格式为数字字符，如[&quot;1&quot;,&quot;2&quot;]。</p>
                     * @return BackupPeriod <p>实例备份周期，若是星期维度，格式为小写星期英文单词，且至少设置两天备份；若是按月维度，格式为数字字符，如[&quot;1&quot;,&quot;2&quot;]。</p>
                     * 
                     */
                    std::vector<std::string> GetBackupPeriod() const;

                    /**
                     * 设置<p>实例备份周期，若是星期维度，格式为小写星期英文单词，且至少设置两天备份；若是按月维度，格式为数字字符，如[&quot;1&quot;,&quot;2&quot;]。</p>
                     * @param _backupPeriod <p>实例备份周期，若是星期维度，格式为小写星期英文单词，且至少设置两天备份；若是按月维度，格式为数字字符，如[&quot;1&quot;,&quot;2&quot;]。</p>
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
                     * 获取<p>实例日志备份保留时长，取值范围为7-1830，单位是天</p>
                     * @return LogBackupRetentionPeriod <p>实例日志备份保留时长，取值范围为7-1830，单位是天</p>
                     * 
                     */
                    uint64_t GetLogBackupRetentionPeriod() const;

                    /**
                     * 设置<p>实例日志备份保留时长，取值范围为7-1830，单位是天</p>
                     * @param _logBackupRetentionPeriod <p>实例日志备份保留时长，取值范围为7-1830，单位是天</p>
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
                     * 获取<p>备份计划ID，用于指明要修改哪个备份计划，不传则是修改默认备份计划。</p>
                     * @return PlanId <p>备份计划ID，用于指明要修改哪个备份计划，不传则是修改默认备份计划。</p>
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置<p>备份计划ID，用于指明要修改哪个备份计划，不传则是修改默认备份计划。</p>
                     * @param _planId <p>备份计划ID，用于指明要修改哪个备份计划，不传则是修改默认备份计划。</p>
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
                     * 获取<p>要修改的备份计划名称。</p>
                     * @return PlanName <p>要修改的备份计划名称。</p>
                     * 
                     */
                    std::string GetPlanName() const;

                    /**
                     * 设置<p>要修改的备份计划名称。</p>
                     * @param _planName <p>要修改的备份计划名称。</p>
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
                     * 获取<p>备份方式</p><p>枚举值：</p><ul><li>physical： 物理备份</li><li>logical： 逻辑备份</li><li>snapshot： 快照备份</li></ul>
                     * @return BackupMethod <p>备份方式</p><p>枚举值：</p><ul><li>physical： 物理备份</li><li>logical： 逻辑备份</li><li>snapshot： 快照备份</li></ul>
                     * 
                     */
                    std::string GetBackupMethod() const;

                    /**
                     * 设置<p>备份方式</p><p>枚举值：</p><ul><li>physical： 物理备份</li><li>logical： 逻辑备份</li><li>snapshot： 快照备份</li></ul>
                     * @param _backupMethod <p>备份方式</p><p>枚举值：</p><ul><li>physical： 物理备份</li><li>logical： 逻辑备份</li><li>snapshot： 快照备份</li></ul>
                     * 
                     */
                    void SetBackupMethod(const std::string& _backupMethod);

                    /**
                     * 判断参数 BackupMethod 是否已赋值
                     * @return BackupMethod 是否已赋值
                     * 
                     */
                    bool BackupMethodHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID。可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取</p>
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * <p>实例最早开始备份时间</p>
                     */
                    std::string m_minBackupStartTime;
                    bool m_minBackupStartTimeHasBeenSet;

                    /**
                     * <p>实例最晚开始备份时间</p>
                     */
                    std::string m_maxBackupStartTime;
                    bool m_maxBackupStartTimeHasBeenSet;

                    /**
                     * <p>实例备份保留时长，取值范围为7-1830，单位是天</p>
                     */
                    uint64_t m_baseBackupRetentionPeriod;
                    bool m_baseBackupRetentionPeriodHasBeenSet;

                    /**
                     * <p>实例备份周期，若是星期维度，格式为小写星期英文单词，且至少设置两天备份；若是按月维度，格式为数字字符，如[&quot;1&quot;,&quot;2&quot;]。</p>
                     */
                    std::vector<std::string> m_backupPeriod;
                    bool m_backupPeriodHasBeenSet;

                    /**
                     * <p>实例日志备份保留时长，取值范围为7-1830，单位是天</p>
                     */
                    uint64_t m_logBackupRetentionPeriod;
                    bool m_logBackupRetentionPeriodHasBeenSet;

                    /**
                     * <p>备份计划ID，用于指明要修改哪个备份计划，不传则是修改默认备份计划。</p>
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * <p>要修改的备份计划名称。</p>
                     */
                    std::string m_planName;
                    bool m_planNameHasBeenSet;

                    /**
                     * <p>备份方式</p><p>枚举值：</p><ul><li>physical： 物理备份</li><li>logical： 逻辑备份</li><li>snapshot： 快照备份</li></ul>
                     */
                    std::string m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYBACKUPPLANREQUEST_H_
