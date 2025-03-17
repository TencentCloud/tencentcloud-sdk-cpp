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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CREATERANSOMDEFENSESTRATEGYREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CREATERANSOMDEFENSESTRATEGYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/RansomDefenseStrategyMachineInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * CreateRansomDefenseStrategy请求参数结构体
                */
                class CreateRansomDefenseStrategyRequest : public AbstractModel
                {
                public:
                    CreateRansomDefenseStrategyRequest();
                    ~CreateRansomDefenseStrategyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取策略名称
                     * @return Name 策略名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置策略名称
                     * @param _name 策略名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取定时快照执行时间（0-23）：01:00;23:00
                     * @return Hour 定时快照执行时间（0-23）：01:00;23:00
                     * 
                     */
                    std::string GetHour() const;

                    /**
                     * 设置定时快照执行时间（0-23）：01:00;23:00
                     * @param _hour 定时快照执行时间（0-23）：01:00;23:00
                     * 
                     */
                    void SetHour(const std::string& _hour);

                    /**
                     * 判断参数 Hour 是否已赋值
                     * @return Hour 是否已赋值
                     * 
                     */
                    bool HourHasBeenSet() const;

                    /**
                     * 获取策略ID，填ID时修改策略，否则新增策略
                     * @return Id 策略ID，填ID时修改策略，否则新增策略
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置策略ID，填ID时修改策略，否则新增策略
                     * @param _id 策略ID，填ID时修改策略，否则新增策略
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取策略备注
                     * @return Description 策略备注
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置策略备注
                     * @param _description 策略备注
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取是否开启：0关，1开
                     * @return Status 是否开启：0关，1开
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置是否开启：0关，1开
                     * @param _status 是否开启：0关，1开
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取是否全部机器生效：0否，1是
                     * @return IsAll 是否全部机器生效：0否，1是
                     * 
                     */
                    uint64_t GetIsAll() const;

                    /**
                     * 设置是否全部机器生效：0否，1是
                     * @param _isAll 是否全部机器生效：0否，1是
                     * 
                     */
                    void SetIsAll(const uint64_t& _isAll);

                    /**
                     * 判断参数 IsAll 是否已赋值
                     * @return IsAll 是否已赋值
                     * 
                     */
                    bool IsAllHasBeenSet() const;

                    /**
                     * 获取包含目录，;分隔
                     * @return IncludeDir 包含目录，;分隔
                     * 
                     */
                    std::string GetIncludeDir() const;

                    /**
                     * 设置包含目录，;分隔
                     * @param _includeDir 包含目录，;分隔
                     * 
                     */
                    void SetIncludeDir(const std::string& _includeDir);

                    /**
                     * 判断参数 IncludeDir 是否已赋值
                     * @return IncludeDir 是否已赋值
                     * 
                     */
                    bool IncludeDirHasBeenSet() const;

                    /**
                     * 获取排除目录，;分隔
                     * @return ExcludeDir 排除目录，;分隔
                     * 
                     */
                    std::string GetExcludeDir() const;

                    /**
                     * 设置排除目录，;分隔
                     * @param _excludeDir 排除目录，;分隔
                     * 
                     */
                    void SetExcludeDir(const std::string& _excludeDir);

                    /**
                     * 判断参数 ExcludeDir 是否已赋值
                     * @return ExcludeDir 是否已赋值
                     * 
                     */
                    bool ExcludeDirHasBeenSet() const;

                    /**
                     * 获取备份模式： 0按周，1按天，2不备份
                     * @return BackupType 备份模式： 0按周，1按天，2不备份
                     * 
                     */
                    uint64_t GetBackupType() const;

                    /**
                     * 设置备份模式： 0按周，1按天，2不备份
                     * @param _backupType 备份模式： 0按周，1按天，2不备份
                     * 
                     */
                    void SetBackupType(const uint64_t& _backupType);

                    /**
                     * 判断参数 BackupType 是否已赋值
                     * @return BackupType 是否已赋值
                     * 
                     */
                    bool BackupTypeHasBeenSet() const;

                    /**
                     * 获取定时任务执行星期天数（1-7）：1;2;7
                     * @return Weekday 定时任务执行星期天数（1-7）：1;2;7
                     * 
                     */
                    std::string GetWeekday() const;

                    /**
                     * 设置定时任务执行星期天数（1-7）：1;2;7
                     * @param _weekday 定时任务执行星期天数（1-7）：1;2;7
                     * 
                     */
                    void SetWeekday(const std::string& _weekday);

                    /**
                     * 判断参数 Weekday 是否已赋值
                     * @return Weekday 是否已赋值
                     * 
                     */
                    bool WeekdayHasBeenSet() const;

                    /**
                     * 获取保留天数：0永久
                     * @return SaveDay 保留天数：0永久
                     * 
                     */
                    uint64_t GetSaveDay() const;

                    /**
                     * 设置保留天数：0永久
                     * @param _saveDay 保留天数：0永久
                     * 
                     */
                    void SetSaveDay(const uint64_t& _saveDay);

                    /**
                     * 判断参数 SaveDay 是否已赋值
                     * @return SaveDay 是否已赋值
                     * 
                     */
                    bool SaveDayHasBeenSet() const;

                    /**
                     * 获取绑定主机列表
                     * @return Machines 绑定主机列表
                     * 
                     */
                    std::vector<RansomDefenseStrategyMachineInfo> GetMachines() const;

                    /**
                     * 设置绑定主机列表
                     * @param _machines 绑定主机列表
                     * 
                     */
                    void SetMachines(const std::vector<RansomDefenseStrategyMachineInfo>& _machines);

                    /**
                     * 判断参数 Machines 是否已赋值
                     * @return Machines 是否已赋值
                     * 
                     */
                    bool MachinesHasBeenSet() const;

                private:

                    /**
                     * 策略名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 定时快照执行时间（0-23）：01:00;23:00
                     */
                    std::string m_hour;
                    bool m_hourHasBeenSet;

                    /**
                     * 策略ID，填ID时修改策略，否则新增策略
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 策略备注
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 是否开启：0关，1开
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 是否全部机器生效：0否，1是
                     */
                    uint64_t m_isAll;
                    bool m_isAllHasBeenSet;

                    /**
                     * 包含目录，;分隔
                     */
                    std::string m_includeDir;
                    bool m_includeDirHasBeenSet;

                    /**
                     * 排除目录，;分隔
                     */
                    std::string m_excludeDir;
                    bool m_excludeDirHasBeenSet;

                    /**
                     * 备份模式： 0按周，1按天，2不备份
                     */
                    uint64_t m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * 定时任务执行星期天数（1-7）：1;2;7
                     */
                    std::string m_weekday;
                    bool m_weekdayHasBeenSet;

                    /**
                     * 保留天数：0永久
                     */
                    uint64_t m_saveDay;
                    bool m_saveDayHasBeenSet;

                    /**
                     * 绑定主机列表
                     */
                    std::vector<RansomDefenseStrategyMachineInfo> m_machines;
                    bool m_machinesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CREATERANSOMDEFENSESTRATEGYREQUEST_H_
