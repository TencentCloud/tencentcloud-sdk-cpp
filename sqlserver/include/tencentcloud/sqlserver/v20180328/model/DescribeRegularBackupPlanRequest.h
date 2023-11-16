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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEREGULARBACKUPPLANREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEREGULARBACKUPPLANREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeRegularBackupPlan请求参数结构体
                */
                class DescribeRegularBackupPlanRequest : public AbstractModel
                {
                public:
                    DescribeRegularBackupPlanRequest();
                    ~DescribeRegularBackupPlanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取定期备份保留天数 [90 - 3650]天，默认365天
                     * @return RegularBackupSaveDays 定期备份保留天数 [90 - 3650]天，默认365天
                     * 
                     */
                    uint64_t GetRegularBackupSaveDays() const;

                    /**
                     * 设置定期备份保留天数 [90 - 3650]天，默认365天
                     * @param _regularBackupSaveDays 定期备份保留天数 [90 - 3650]天，默认365天
                     * 
                     */
                    void SetRegularBackupSaveDays(const uint64_t& _regularBackupSaveDays);

                    /**
                     * 判断参数 RegularBackupSaveDays 是否已赋值
                     * @return RegularBackupSaveDays 是否已赋值
                     * 
                     */
                    bool RegularBackupSaveDaysHasBeenSet() const;

                    /**
                     * 获取定期备份策略 years-每年，quarters-每季度，months-每月，默认months
                     * @return RegularBackupStrategy 定期备份策略 years-每年，quarters-每季度，months-每月，默认months
                     * 
                     */
                    std::string GetRegularBackupStrategy() const;

                    /**
                     * 设置定期备份策略 years-每年，quarters-每季度，months-每月，默认months
                     * @param _regularBackupStrategy 定期备份策略 years-每年，quarters-每季度，months-每月，默认months
                     * 
                     */
                    void SetRegularBackupStrategy(const std::string& _regularBackupStrategy);

                    /**
                     * 判断参数 RegularBackupStrategy 是否已赋值
                     * @return RegularBackupStrategy 是否已赋值
                     * 
                     */
                    bool RegularBackupStrategyHasBeenSet() const;

                    /**
                     * 获取定期备份保留个数，默认1个
                     * @return RegularBackupCounts 定期备份保留个数，默认1个
                     * 
                     */
                    uint64_t GetRegularBackupCounts() const;

                    /**
                     * 设置定期备份保留个数，默认1个
                     * @param _regularBackupCounts 定期备份保留个数，默认1个
                     * 
                     */
                    void SetRegularBackupCounts(const uint64_t& _regularBackupCounts);

                    /**
                     * 判断参数 RegularBackupCounts 是否已赋值
                     * @return RegularBackupCounts 是否已赋值
                     * 
                     */
                    bool RegularBackupCountsHasBeenSet() const;

                    /**
                     * 获取定期备份开始日期，格式-YYYY-MM-DD 默认当前日期
                     * @return RegularBackupStartTime 定期备份开始日期，格式-YYYY-MM-DD 默认当前日期
                     * 
                     */
                    std::string GetRegularBackupStartTime() const;

                    /**
                     * 设置定期备份开始日期，格式-YYYY-MM-DD 默认当前日期
                     * @param _regularBackupStartTime 定期备份开始日期，格式-YYYY-MM-DD 默认当前日期
                     * 
                     */
                    void SetRegularBackupStartTime(const std::string& _regularBackupStartTime);

                    /**
                     * 判断参数 RegularBackupStartTime 是否已赋值
                     * @return RegularBackupStartTime 是否已赋值
                     * 
                     */
                    bool RegularBackupStartTimeHasBeenSet() const;

                    /**
                     * 获取常规备份周期
                     * @return BackupCycle 常规备份周期
                     * 
                     */
                    std::vector<uint64_t> GetBackupCycle() const;

                    /**
                     * 设置常规备份周期
                     * @param _backupCycle 常规备份周期
                     * 
                     */
                    void SetBackupCycle(const std::vector<uint64_t>& _backupCycle);

                    /**
                     * 判断参数 BackupCycle 是否已赋值
                     * @return BackupCycle 是否已赋值
                     * 
                     */
                    bool BackupCycleHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 定期备份保留天数 [90 - 3650]天，默认365天
                     */
                    uint64_t m_regularBackupSaveDays;
                    bool m_regularBackupSaveDaysHasBeenSet;

                    /**
                     * 定期备份策略 years-每年，quarters-每季度，months-每月，默认months
                     */
                    std::string m_regularBackupStrategy;
                    bool m_regularBackupStrategyHasBeenSet;

                    /**
                     * 定期备份保留个数，默认1个
                     */
                    uint64_t m_regularBackupCounts;
                    bool m_regularBackupCountsHasBeenSet;

                    /**
                     * 定期备份开始日期，格式-YYYY-MM-DD 默认当前日期
                     */
                    std::string m_regularBackupStartTime;
                    bool m_regularBackupStartTimeHasBeenSet;

                    /**
                     * 常规备份周期
                     */
                    std::vector<uint64_t> m_backupCycle;
                    bool m_backupCycleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEREGULARBACKUPPLANREQUEST_H_
