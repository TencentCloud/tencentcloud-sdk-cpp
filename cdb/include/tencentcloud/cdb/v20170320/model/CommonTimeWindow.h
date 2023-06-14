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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_COMMONTIMEWINDOW_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_COMMONTIMEWINDOW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 通用时间窗
                */
                class CommonTimeWindow : public AbstractModel
                {
                public:
                    CommonTimeWindow();
                    ~CommonTimeWindow() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取周一的时间窗，格式如： 02:00-06:00
                     * @return Monday 周一的时间窗，格式如： 02:00-06:00
                     * 
                     */
                    std::string GetMonday() const;

                    /**
                     * 设置周一的时间窗，格式如： 02:00-06:00
                     * @param _monday 周一的时间窗，格式如： 02:00-06:00
                     * 
                     */
                    void SetMonday(const std::string& _monday);

                    /**
                     * 判断参数 Monday 是否已赋值
                     * @return Monday 是否已赋值
                     * 
                     */
                    bool MondayHasBeenSet() const;

                    /**
                     * 获取周二的时间窗，格式如： 02:00-06:00
                     * @return Tuesday 周二的时间窗，格式如： 02:00-06:00
                     * 
                     */
                    std::string GetTuesday() const;

                    /**
                     * 设置周二的时间窗，格式如： 02:00-06:00
                     * @param _tuesday 周二的时间窗，格式如： 02:00-06:00
                     * 
                     */
                    void SetTuesday(const std::string& _tuesday);

                    /**
                     * 判断参数 Tuesday 是否已赋值
                     * @return Tuesday 是否已赋值
                     * 
                     */
                    bool TuesdayHasBeenSet() const;

                    /**
                     * 获取周三的时间窗，格式如： 02:00-06:00
                     * @return Wednesday 周三的时间窗，格式如： 02:00-06:00
                     * 
                     */
                    std::string GetWednesday() const;

                    /**
                     * 设置周三的时间窗，格式如： 02:00-06:00
                     * @param _wednesday 周三的时间窗，格式如： 02:00-06:00
                     * 
                     */
                    void SetWednesday(const std::string& _wednesday);

                    /**
                     * 判断参数 Wednesday 是否已赋值
                     * @return Wednesday 是否已赋值
                     * 
                     */
                    bool WednesdayHasBeenSet() const;

                    /**
                     * 获取周四的时间窗，格式如： 02:00-06:00
                     * @return Thursday 周四的时间窗，格式如： 02:00-06:00
                     * 
                     */
                    std::string GetThursday() const;

                    /**
                     * 设置周四的时间窗，格式如： 02:00-06:00
                     * @param _thursday 周四的时间窗，格式如： 02:00-06:00
                     * 
                     */
                    void SetThursday(const std::string& _thursday);

                    /**
                     * 判断参数 Thursday 是否已赋值
                     * @return Thursday 是否已赋值
                     * 
                     */
                    bool ThursdayHasBeenSet() const;

                    /**
                     * 获取周五的时间窗，格式如： 02:00-06:00
                     * @return Friday 周五的时间窗，格式如： 02:00-06:00
                     * 
                     */
                    std::string GetFriday() const;

                    /**
                     * 设置周五的时间窗，格式如： 02:00-06:00
                     * @param _friday 周五的时间窗，格式如： 02:00-06:00
                     * 
                     */
                    void SetFriday(const std::string& _friday);

                    /**
                     * 判断参数 Friday 是否已赋值
                     * @return Friday 是否已赋值
                     * 
                     */
                    bool FridayHasBeenSet() const;

                    /**
                     * 获取周六的时间窗，格式如： 02:00-06:00
                     * @return Saturday 周六的时间窗，格式如： 02:00-06:00
                     * 
                     */
                    std::string GetSaturday() const;

                    /**
                     * 设置周六的时间窗，格式如： 02:00-06:00
                     * @param _saturday 周六的时间窗，格式如： 02:00-06:00
                     * 
                     */
                    void SetSaturday(const std::string& _saturday);

                    /**
                     * 判断参数 Saturday 是否已赋值
                     * @return Saturday 是否已赋值
                     * 
                     */
                    bool SaturdayHasBeenSet() const;

                    /**
                     * 获取周日的时间窗，格式如： 02:00-06:00
                     * @return Sunday 周日的时间窗，格式如： 02:00-06:00
                     * 
                     */
                    std::string GetSunday() const;

                    /**
                     * 设置周日的时间窗，格式如： 02:00-06:00
                     * @param _sunday 周日的时间窗，格式如： 02:00-06:00
                     * 
                     */
                    void SetSunday(const std::string& _sunday);

                    /**
                     * 判断参数 Sunday 是否已赋值
                     * @return Sunday 是否已赋值
                     * 
                     */
                    bool SundayHasBeenSet() const;

                    /**
                     * 获取常规备份保留策略，weekly-按周备份，monthly-按月备份，默认为weekly
                     * @return BackupPeriodStrategy 常规备份保留策略，weekly-按周备份，monthly-按月备份，默认为weekly
                     * 
                     */
                    std::string GetBackupPeriodStrategy() const;

                    /**
                     * 设置常规备份保留策略，weekly-按周备份，monthly-按月备份，默认为weekly
                     * @param _backupPeriodStrategy 常规备份保留策略，weekly-按周备份，monthly-按月备份，默认为weekly
                     * 
                     */
                    void SetBackupPeriodStrategy(const std::string& _backupPeriodStrategy);

                    /**
                     * 判断参数 BackupPeriodStrategy 是否已赋值
                     * @return BackupPeriodStrategy 是否已赋值
                     * 
                     */
                    bool BackupPeriodStrategyHasBeenSet() const;

                    /**
                     * 获取如果设置为按月备份，需填入每月具体备份日期，相邻备份天数不得超过两天。例[1,4,7,9,11,14,17,19,22,25,28,30,31]
                     * @return Days 如果设置为按月备份，需填入每月具体备份日期，相邻备份天数不得超过两天。例[1,4,7,9,11,14,17,19,22,25,28,30,31]
                     * 
                     */
                    std::vector<int64_t> GetDays() const;

                    /**
                     * 设置如果设置为按月备份，需填入每月具体备份日期，相邻备份天数不得超过两天。例[1,4,7,9,11,14,17,19,22,25,28,30,31]
                     * @param _days 如果设置为按月备份，需填入每月具体备份日期，相邻备份天数不得超过两天。例[1,4,7,9,11,14,17,19,22,25,28,30,31]
                     * 
                     */
                    void SetDays(const std::vector<int64_t>& _days);

                    /**
                     * 判断参数 Days 是否已赋值
                     * @return Days 是否已赋值
                     * 
                     */
                    bool DaysHasBeenSet() const;

                    /**
                     * 获取月度备份时间窗，BackupPeriodStrategy为monthly时必填。格式如： 02:00-06:00
                     * @return BackupPeriodTime 月度备份时间窗，BackupPeriodStrategy为monthly时必填。格式如： 02:00-06:00
                     * 
                     */
                    std::string GetBackupPeriodTime() const;

                    /**
                     * 设置月度备份时间窗，BackupPeriodStrategy为monthly时必填。格式如： 02:00-06:00
                     * @param _backupPeriodTime 月度备份时间窗，BackupPeriodStrategy为monthly时必填。格式如： 02:00-06:00
                     * 
                     */
                    void SetBackupPeriodTime(const std::string& _backupPeriodTime);

                    /**
                     * 判断参数 BackupPeriodTime 是否已赋值
                     * @return BackupPeriodTime 是否已赋值
                     * 
                     */
                    bool BackupPeriodTimeHasBeenSet() const;

                private:

                    /**
                     * 周一的时间窗，格式如： 02:00-06:00
                     */
                    std::string m_monday;
                    bool m_mondayHasBeenSet;

                    /**
                     * 周二的时间窗，格式如： 02:00-06:00
                     */
                    std::string m_tuesday;
                    bool m_tuesdayHasBeenSet;

                    /**
                     * 周三的时间窗，格式如： 02:00-06:00
                     */
                    std::string m_wednesday;
                    bool m_wednesdayHasBeenSet;

                    /**
                     * 周四的时间窗，格式如： 02:00-06:00
                     */
                    std::string m_thursday;
                    bool m_thursdayHasBeenSet;

                    /**
                     * 周五的时间窗，格式如： 02:00-06:00
                     */
                    std::string m_friday;
                    bool m_fridayHasBeenSet;

                    /**
                     * 周六的时间窗，格式如： 02:00-06:00
                     */
                    std::string m_saturday;
                    bool m_saturdayHasBeenSet;

                    /**
                     * 周日的时间窗，格式如： 02:00-06:00
                     */
                    std::string m_sunday;
                    bool m_sundayHasBeenSet;

                    /**
                     * 常规备份保留策略，weekly-按周备份，monthly-按月备份，默认为weekly
                     */
                    std::string m_backupPeriodStrategy;
                    bool m_backupPeriodStrategyHasBeenSet;

                    /**
                     * 如果设置为按月备份，需填入每月具体备份日期，相邻备份天数不得超过两天。例[1,4,7,9,11,14,17,19,22,25,28,30,31]
                     */
                    std::vector<int64_t> m_days;
                    bool m_daysHasBeenSet;

                    /**
                     * 月度备份时间窗，BackupPeriodStrategy为monthly时必填。格式如： 02:00-06:00
                     */
                    std::string m_backupPeriodTime;
                    bool m_backupPeriodTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_COMMONTIMEWINDOW_H_
