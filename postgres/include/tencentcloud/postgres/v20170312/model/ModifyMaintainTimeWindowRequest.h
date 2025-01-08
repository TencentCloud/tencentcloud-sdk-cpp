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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYMAINTAINTIMEWINDOWREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYMAINTAINTIMEWINDOWREQUEST_H_

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
                * ModifyMaintainTimeWindow请求参数结构体
                */
                class ModifyMaintainTimeWindowRequest : public AbstractModel
                {
                public:
                    ModifyMaintainTimeWindowRequest();
                    ~ModifyMaintainTimeWindowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return DBInstanceId 实例ID
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _dBInstanceId 实例ID
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
                     * 获取维护开始时间。时区为东八区（UTC+8）
                     * @return MaintainStartTime 维护开始时间。时区为东八区（UTC+8）
                     * 
                     */
                    std::string GetMaintainStartTime() const;

                    /**
                     * 设置维护开始时间。时区为东八区（UTC+8）
                     * @param _maintainStartTime 维护开始时间。时区为东八区（UTC+8）
                     * 
                     */
                    void SetMaintainStartTime(const std::string& _maintainStartTime);

                    /**
                     * 判断参数 MaintainStartTime 是否已赋值
                     * @return MaintainStartTime 是否已赋值
                     * 
                     */
                    bool MaintainStartTimeHasBeenSet() const;

                    /**
                     * 获取维护持续时间。单位：小时
                     * @return MaintainDuration 维护持续时间。单位：小时
                     * 
                     */
                    uint64_t GetMaintainDuration() const;

                    /**
                     * 设置维护持续时间。单位：小时
                     * @param _maintainDuration 维护持续时间。单位：小时
                     * 
                     */
                    void SetMaintainDuration(const uint64_t& _maintainDuration);

                    /**
                     * 判断参数 MaintainDuration 是否已赋值
                     * @return MaintainDuration 是否已赋值
                     * 
                     */
                    bool MaintainDurationHasBeenSet() const;

                    /**
                     * 获取维护周期
                     * @return MaintainWeekDays 维护周期
                     * 
                     */
                    std::vector<std::string> GetMaintainWeekDays() const;

                    /**
                     * 设置维护周期
                     * @param _maintainWeekDays 维护周期
                     * 
                     */
                    void SetMaintainWeekDays(const std::vector<std::string>& _maintainWeekDays);

                    /**
                     * 判断参数 MaintainWeekDays 是否已赋值
                     * @return MaintainWeekDays 是否已赋值
                     * 
                     */
                    bool MaintainWeekDaysHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * 维护开始时间。时区为东八区（UTC+8）
                     */
                    std::string m_maintainStartTime;
                    bool m_maintainStartTimeHasBeenSet;

                    /**
                     * 维护持续时间。单位：小时
                     */
                    uint64_t m_maintainDuration;
                    bool m_maintainDurationHasBeenSet;

                    /**
                     * 维护周期
                     */
                    std::vector<std::string> m_maintainWeekDays;
                    bool m_maintainWeekDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYMAINTAINTIMEWINDOWREQUEST_H_
