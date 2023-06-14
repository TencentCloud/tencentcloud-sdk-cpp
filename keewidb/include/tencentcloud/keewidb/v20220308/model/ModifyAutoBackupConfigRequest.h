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

#ifndef TENCENTCLOUD_KEEWIDB_V20220308_MODEL_MODIFYAUTOBACKUPCONFIGREQUEST_H_
#define TENCENTCLOUD_KEEWIDB_V20220308_MODEL_MODIFYAUTOBACKUPCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Keewidb
    {
        namespace V20220308
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
                     * 获取实例 ID。
                     * @return InstanceId 实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID。
                     * @param _instanceId 实例 ID。
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
                     * 获取备份周期。可设置为 Monday，Tuesday，Wednesday，Thursday，Friday，Saturday，Sunday，该参数暂不支持修改、
                     * @return WeekDays 备份周期。可设置为 Monday，Tuesday，Wednesday，Thursday，Friday，Saturday，Sunday，该参数暂不支持修改、
                     * 
                     */
                    std::vector<std::string> GetWeekDays() const;

                    /**
                     * 设置备份周期。可设置为 Monday，Tuesday，Wednesday，Thursday，Friday，Saturday，Sunday，该参数暂不支持修改、
                     * @param _weekDays 备份周期。可设置为 Monday，Tuesday，Wednesday，Thursday，Friday，Saturday，Sunday，该参数暂不支持修改、
                     * 
                     */
                    void SetWeekDays(const std::vector<std::string>& _weekDays);

                    /**
                     * 判断参数 WeekDays 是否已赋值
                     * @return WeekDays 是否已赋值
                     * 
                     */
                    bool WeekDaysHasBeenSet() const;

                    /**
                     * 获取备份任务执行时间段。
可设置的格式为一个整点到下一个整点。例如：00:00-01:00、01:00-02:00、21:00-22:00、23:00-00:00等。
                     * @return TimePeriod 备份任务执行时间段。
可设置的格式为一个整点到下一个整点。例如：00:00-01:00、01:00-02:00、21:00-22:00、23:00-00:00等。
                     * 
                     */
                    std::string GetTimePeriod() const;

                    /**
                     * 设置备份任务执行时间段。
可设置的格式为一个整点到下一个整点。例如：00:00-01:00、01:00-02:00、21:00-22:00、23:00-00:00等。
                     * @param _timePeriod 备份任务执行时间段。
可设置的格式为一个整点到下一个整点。例如：00:00-01:00、01:00-02:00、21:00-22:00、23:00-00:00等。
                     * 
                     */
                    void SetTimePeriod(const std::string& _timePeriod);

                    /**
                     * 判断参数 TimePeriod 是否已赋值
                     * @return TimePeriod 是否已赋值
                     * 
                     */
                    bool TimePeriodHasBeenSet() const;

                private:

                    /**
                     * 实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 备份周期。可设置为 Monday，Tuesday，Wednesday，Thursday，Friday，Saturday，Sunday，该参数暂不支持修改、
                     */
                    std::vector<std::string> m_weekDays;
                    bool m_weekDaysHasBeenSet;

                    /**
                     * 备份任务执行时间段。
可设置的格式为一个整点到下一个整点。例如：00:00-01:00、01:00-02:00、21:00-22:00、23:00-00:00等。
                     */
                    std::string m_timePeriod;
                    bool m_timePeriodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KEEWIDB_V20220308_MODEL_MODIFYAUTOBACKUPCONFIGREQUEST_H_
