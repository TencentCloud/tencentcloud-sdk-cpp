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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDBINSTANCESATTRIBUTERESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDBINSTANCESATTRIBUTERESPONSE_H_

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
                * DescribeDBInstancesAttribute返回参数结构体
                */
                class DescribeDBInstancesAttributeResponse : public AbstractModel
                {
                public:
                    DescribeDBInstancesAttributeResponse();
                    ~DescribeDBInstancesAttributeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取定期备份状态 enable-开启，disable-关闭
                     * @return RegularBackupEnable 定期备份状态 enable-开启，disable-关闭
                     * 
                     */
                    std::string GetRegularBackupEnable() const;

                    /**
                     * 判断参数 RegularBackupEnable 是否已赋值
                     * @return RegularBackupEnable 是否已赋值
                     * 
                     */
                    bool RegularBackupEnableHasBeenSet() const;

                    /**
                     * 获取定期备份保留天数 [90 - 3650]天
                     * @return RegularBackupSaveDays 定期备份保留天数 [90 - 3650]天
                     * 
                     */
                    uint64_t GetRegularBackupSaveDays() const;

                    /**
                     * 判断参数 RegularBackupSaveDays 是否已赋值
                     * @return RegularBackupSaveDays 是否已赋值
                     * 
                     */
                    bool RegularBackupSaveDaysHasBeenSet() const;

                    /**
                     * 获取定期备份策略 years-每年，quarters-每季度，months-每月
                     * @return RegularBackupStrategy 定期备份策略 years-每年，quarters-每季度，months-每月
                     * 
                     */
                    std::string GetRegularBackupStrategy() const;

                    /**
                     * 判断参数 RegularBackupStrategy 是否已赋值
                     * @return RegularBackupStrategy 是否已赋值
                     * 
                     */
                    bool RegularBackupStrategyHasBeenSet() const;

                    /**
                     * 获取定期备份保留个数
                     * @return RegularBackupCounts 定期备份保留个数
                     * 
                     */
                    uint64_t GetRegularBackupCounts() const;

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
                     * 判断参数 RegularBackupStartTime 是否已赋值
                     * @return RegularBackupStartTime 是否已赋值
                     * 
                     */
                    bool RegularBackupStartTimeHasBeenSet() const;

                    /**
                     * 获取阻塞进程阈值，单位毫秒
                     * @return BlockedThreshold 阻塞进程阈值，单位毫秒
                     * 
                     */
                    int64_t GetBlockedThreshold() const;

                    /**
                     * 判断参数 BlockedThreshold 是否已赋值
                     * @return BlockedThreshold 是否已赋值
                     * 
                     */
                    bool BlockedThresholdHasBeenSet() const;

                    /**
                     * 获取慢SQL、阻塞、死锁扩展事件文件保留时长
                     * @return EventSaveDays 慢SQL、阻塞、死锁扩展事件文件保留时长
                     * 
                     */
                    int64_t GetEventSaveDays() const;

                    /**
                     * 判断参数 EventSaveDays 是否已赋值
                     * @return EventSaveDays 是否已赋值
                     * 
                     */
                    bool EventSaveDaysHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 定期备份状态 enable-开启，disable-关闭
                     */
                    std::string m_regularBackupEnable;
                    bool m_regularBackupEnableHasBeenSet;

                    /**
                     * 定期备份保留天数 [90 - 3650]天
                     */
                    uint64_t m_regularBackupSaveDays;
                    bool m_regularBackupSaveDaysHasBeenSet;

                    /**
                     * 定期备份策略 years-每年，quarters-每季度，months-每月
                     */
                    std::string m_regularBackupStrategy;
                    bool m_regularBackupStrategyHasBeenSet;

                    /**
                     * 定期备份保留个数
                     */
                    uint64_t m_regularBackupCounts;
                    bool m_regularBackupCountsHasBeenSet;

                    /**
                     * 定期备份开始日期，格式-YYYY-MM-DD 默认当前日期
                     */
                    std::string m_regularBackupStartTime;
                    bool m_regularBackupStartTimeHasBeenSet;

                    /**
                     * 阻塞进程阈值，单位毫秒
                     */
                    int64_t m_blockedThreshold;
                    bool m_blockedThresholdHasBeenSet;

                    /**
                     * 慢SQL、阻塞、死锁扩展事件文件保留时长
                     */
                    int64_t m_eventSaveDays;
                    bool m_eventSaveDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDBINSTANCESATTRIBUTERESPONSE_H_
