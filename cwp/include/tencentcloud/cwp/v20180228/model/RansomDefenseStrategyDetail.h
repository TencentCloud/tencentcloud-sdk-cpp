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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_RANSOMDEFENSESTRATEGYDETAIL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_RANSOMDEFENSESTRATEGYDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 主机列表查询接口相应数据HostList的TagList节点
                */
                class RansomDefenseStrategyDetail : public AbstractModel
                {
                public:
                    RansomDefenseStrategyDetail();
                    ~RansomDefenseStrategyDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略id
                     * @return Id 策略id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置策略id
                     * @param _id 策略id
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取操作uin
                     * @return Uin 操作uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置操作uin
                     * @param _uin 操作uin
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

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
                     * 获取开启状态：0关闭，1开启
                     * @return Status 开启状态：0关闭，1开启
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置开启状态：0关闭，1开启
                     * @param _status 开启状态：0关闭，1开启
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
                     * 获取是否对所有主机生效
                     * @return IsAll 是否对所有主机生效
                     * 
                     */
                    uint64_t GetIsAll() const;

                    /**
                     * 设置是否对所有主机生效
                     * @param _isAll 是否对所有主机生效
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
                     * 获取包含目录，用;分隔
                     * @return IncludeDir 包含目录，用;分隔
                     * 
                     */
                    std::string GetIncludeDir() const;

                    /**
                     * 设置包含目录，用;分隔
                     * @param _includeDir 包含目录，用;分隔
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
                     * 获取包含目录，用;分隔
                     * @return ExcludeDir 包含目录，用;分隔
                     * 
                     */
                    std::string GetExcludeDir() const;

                    /**
                     * 设置包含目录，用;分隔
                     * @param _excludeDir 包含目录，用;分隔
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
                     * 获取备份模式： 0按周，1按天
                     * @return BackupType 备份模式： 0按周，1按天
                     * 
                     */
                    uint64_t GetBackupType() const;

                    /**
                     * 设置备份模式： 0按周，1按天
                     * @param _backupType 备份模式： 0按周，1按天
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
                     * 获取备份星期天数（1-7）：1;2;3;4
                     * @return Weekday 备份星期天数（1-7）：1;2;3;4
                     * 
                     */
                    std::string GetWeekday() const;

                    /**
                     * 设置备份星期天数（1-7）：1;2;3;4
                     * @param _weekday 备份星期天数（1-7）：1;2;3;4
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
                     * 获取备份执行时间点(0-23): 11:00;12:00
                     * @return Hour 备份执行时间点(0-23): 11:00;12:00
                     * 
                     */
                    std::string GetHour() const;

                    /**
                     * 设置备份执行时间点(0-23): 11:00;12:00
                     * @param _hour 备份执行时间点(0-23): 11:00;12:00
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
                     * 获取保存天数，0永久保存
                     * @return SaveDay 保存天数，0永久保存
                     * 
                     */
                    uint64_t GetSaveDay() const;

                    /**
                     * 设置保存天数，0永久保存
                     * @param _saveDay 保存天数，0永久保存
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
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取最近修改时间
                     * @return ModifyTime 最近修改时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置最近修改时间
                     * @param _modifyTime 最近修改时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取绑定机器数
                     * @return MachineCount 绑定机器数
                     * 
                     */
                    uint64_t GetMachineCount() const;

                    /**
                     * 设置绑定机器数
                     * @param _machineCount 绑定机器数
                     * 
                     */
                    void SetMachineCount(const uint64_t& _machineCount);

                    /**
                     * 判断参数 MachineCount 是否已赋值
                     * @return MachineCount 是否已赋值
                     * 
                     */
                    bool MachineCountHasBeenSet() const;

                    /**
                     * 获取策略关联事件数
                     * @return EventCount 策略关联事件数
                     * 
                     */
                    uint64_t GetEventCount() const;

                    /**
                     * 设置策略关联事件数
                     * @param _eventCount 策略关联事件数
                     * 
                     */
                    void SetEventCount(const uint64_t& _eventCount);

                    /**
                     * 判断参数 EventCount 是否已赋值
                     * @return EventCount 是否已赋值
                     * 
                     */
                    bool EventCountHasBeenSet() const;

                private:

                    /**
                     * 策略id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 操作uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 策略名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 策略备注
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 开启状态：0关闭，1开启
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 是否对所有主机生效
                     */
                    uint64_t m_isAll;
                    bool m_isAllHasBeenSet;

                    /**
                     * 包含目录，用;分隔
                     */
                    std::string m_includeDir;
                    bool m_includeDirHasBeenSet;

                    /**
                     * 包含目录，用;分隔
                     */
                    std::string m_excludeDir;
                    bool m_excludeDirHasBeenSet;

                    /**
                     * 备份模式： 0按周，1按天
                     */
                    uint64_t m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * 备份星期天数（1-7）：1;2;3;4
                     */
                    std::string m_weekday;
                    bool m_weekdayHasBeenSet;

                    /**
                     * 备份执行时间点(0-23): 11:00;12:00
                     */
                    std::string m_hour;
                    bool m_hourHasBeenSet;

                    /**
                     * 保存天数，0永久保存
                     */
                    uint64_t m_saveDay;
                    bool m_saveDayHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最近修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 绑定机器数
                     */
                    uint64_t m_machineCount;
                    bool m_machineCountHasBeenSet;

                    /**
                     * 策略关联事件数
                     */
                    uint64_t m_eventCount;
                    bool m_eventCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RANSOMDEFENSESTRATEGYDETAIL_H_
