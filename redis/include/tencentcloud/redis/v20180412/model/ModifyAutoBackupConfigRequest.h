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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYAUTOBACKUPCONFIGREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYAUTOBACKUPCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * ModifyAutoBackupConfig请求参数结构体
                */
                class ModifyAutoBackupConfigRequest : public AbstractModel
                {
                public:
                    ModifyAutoBackupConfigRequest();
                    ~ModifyAutoBackupConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param InstanceId 实例ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取日期 Monday，Tuesday，Wednesday，Thursday，Friday，Saturday，Sunday
                     * @return WeekDays 日期 Monday，Tuesday，Wednesday，Thursday，Friday，Saturday，Sunday
                     */
                    std::vector<std::string> GetWeekDays() const;

                    /**
                     * 设置日期 Monday，Tuesday，Wednesday，Thursday，Friday，Saturday，Sunday
                     * @param WeekDays 日期 Monday，Tuesday，Wednesday，Thursday，Friday，Saturday，Sunday
                     */
                    void SetWeekDays(const std::vector<std::string>& _weekDays);

                    /**
                     * 判断参数 WeekDays 是否已赋值
                     * @return WeekDays 是否已赋值
                     */
                    bool WeekDaysHasBeenSet() const;

                    /**
                     * 获取时间段 00:00-01:00, 01:00-02:00...... 23:00-00:00
                     * @return TimePeriod 时间段 00:00-01:00, 01:00-02:00...... 23:00-00:00
                     */
                    std::string GetTimePeriod() const;

                    /**
                     * 设置时间段 00:00-01:00, 01:00-02:00...... 23:00-00:00
                     * @param TimePeriod 时间段 00:00-01:00, 01:00-02:00...... 23:00-00:00
                     */
                    void SetTimePeriod(const std::string& _timePeriod);

                    /**
                     * 判断参数 TimePeriod 是否已赋值
                     * @return TimePeriod 是否已赋值
                     */
                    bool TimePeriodHasBeenSet() const;

                    /**
                     * 获取自动备份类型： 1 “定时回档”
                     * @return AutoBackupType 自动备份类型： 1 “定时回档”
                     */
                    int64_t GetAutoBackupType() const;

                    /**
                     * 设置自动备份类型： 1 “定时回档”
                     * @param AutoBackupType 自动备份类型： 1 “定时回档”
                     */
                    void SetAutoBackupType(const int64_t& _autoBackupType);

                    /**
                     * 判断参数 AutoBackupType 是否已赋值
                     * @return AutoBackupType 是否已赋值
                     */
                    bool AutoBackupTypeHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 日期 Monday，Tuesday，Wednesday，Thursday，Friday，Saturday，Sunday
                     */
                    std::vector<std::string> m_weekDays;
                    bool m_weekDaysHasBeenSet;

                    /**
                     * 时间段 00:00-01:00, 01:00-02:00...... 23:00-00:00
                     */
                    std::string m_timePeriod;
                    bool m_timePeriodHasBeenSet;

                    /**
                     * 自动备份类型： 1 “定时回档”
                     */
                    int64_t m_autoBackupType;
                    bool m_autoBackupTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYAUTOBACKUPCONFIGREQUEST_H_
