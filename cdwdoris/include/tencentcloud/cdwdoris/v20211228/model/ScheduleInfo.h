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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_SCHEDULEINFO_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_SCHEDULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * 调度信息
                */
                class ScheduleInfo : public AbstractModel
                {
                public:
                    ScheduleInfo();
                    ~ScheduleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取生效周期
                     * @return EffectivePeriod 生效周期
                     * 
                     */
                    std::string GetEffectivePeriod() const;

                    /**
                     * 设置生效周期
                     * @param _effectivePeriod 生效周期
                     * 
                     */
                    void SetEffectivePeriod(const std::string& _effectivePeriod);

                    /**
                     * 判断参数 EffectivePeriod 是否已赋值
                     * @return EffectivePeriod 是否已赋值
                     * 
                     */
                    bool EffectivePeriodHasBeenSet() const;

                    /**
                     * 获取调度类型，不传该参数时为立即执行：
Day-天
Week-周
Month-月
Once-单次

                     * @return ScheduleType 调度类型，不传该参数时为立即执行：
Day-天
Week-周
Month-月
Once-单次

                     * 
                     */
                    std::string GetScheduleType() const;

                    /**
                     * 设置调度类型，不传该参数时为立即执行：
Day-天
Week-周
Month-月
Once-单次

                     * @param _scheduleType 调度类型，不传该参数时为立即执行：
Day-天
Week-周
Month-月
Once-单次

                     * 
                     */
                    void SetScheduleType(const std::string& _scheduleType);

                    /**
                     * 判断参数 ScheduleType 是否已赋值
                     * @return ScheduleType 是否已赋值
                     * 
                     */
                    bool ScheduleTypeHasBeenSet() const;

                    /**
                     * 获取执行调度的日期。调度类型为周和月时以英文逗号分隔；
调度类型为单次时，该值是个日期
                     * @return ScheduleData 执行调度的日期。调度类型为周和月时以英文逗号分隔；
调度类型为单次时，该值是个日期
                     * 
                     */
                    std::string GetScheduleData() const;

                    /**
                     * 设置执行调度的日期。调度类型为周和月时以英文逗号分隔；
调度类型为单次时，该值是个日期
                     * @param _scheduleData 执行调度的日期。调度类型为周和月时以英文逗号分隔；
调度类型为单次时，该值是个日期
                     * 
                     */
                    void SetScheduleData(const std::string& _scheduleData);

                    /**
                     * 判断参数 ScheduleData 是否已赋值
                     * @return ScheduleData 是否已赋值
                     * 
                     */
                    bool ScheduleDataHasBeenSet() const;

                    /**
                     * 获取执行时间：时
                     * @return ScheduleHour 执行时间：时
                     * 
                     */
                    int64_t GetScheduleHour() const;

                    /**
                     * 设置执行时间：时
                     * @param _scheduleHour 执行时间：时
                     * 
                     */
                    void SetScheduleHour(const int64_t& _scheduleHour);

                    /**
                     * 判断参数 ScheduleHour 是否已赋值
                     * @return ScheduleHour 是否已赋值
                     * 
                     */
                    bool ScheduleHourHasBeenSet() const;

                    /**
                     * 获取执行时间：分
                     * @return ScheduleMin 执行时间：分
                     * 
                     */
                    int64_t GetScheduleMin() const;

                    /**
                     * 设置执行时间：分
                     * @param _scheduleMin 执行时间：分
                     * 
                     */
                    void SetScheduleMin(const int64_t& _scheduleMin);

                    /**
                     * 判断参数 ScheduleMin 是否已赋值
                     * @return ScheduleMin 是否已赋值
                     * 
                     */
                    bool ScheduleMinHasBeenSet() const;

                    /**
                     * 获取备份粒度：
All-全量
Database-按库
Table-按表
                     * @return BackupScope 备份粒度：
All-全量
Database-按库
Table-按表
                     * 
                     */
                    std::string GetBackupScope() const;

                    /**
                     * 设置备份粒度：
All-全量
Database-按库
Table-按表
                     * @param _backupScope 备份粒度：
All-全量
Database-按库
Table-按表
                     * 
                     */
                    void SetBackupScope(const std::string& _backupScope);

                    /**
                     * 判断参数 BackupScope 是否已赋值
                     * @return BackupScope 是否已赋值
                     * 
                     */
                    bool BackupScopeHasBeenSet() const;

                    /**
                     * 获取备份库：如果是按库备份，则需要该字段，库之间用英文逗号分割
                     * @return BackupDatabase 备份库：如果是按库备份，则需要该字段，库之间用英文逗号分割
                     * 
                     */
                    std::string GetBackupDatabase() const;

                    /**
                     * 设置备份库：如果是按库备份，则需要该字段，库之间用英文逗号分割
                     * @param _backupDatabase 备份库：如果是按库备份，则需要该字段，库之间用英文逗号分割
                     * 
                     */
                    void SetBackupDatabase(const std::string& _backupDatabase);

                    /**
                     * 判断参数 BackupDatabase 是否已赋值
                     * @return BackupDatabase 是否已赋值
                     * 
                     */
                    bool BackupDatabaseHasBeenSet() const;

                private:

                    /**
                     * 生效周期
                     */
                    std::string m_effectivePeriod;
                    bool m_effectivePeriodHasBeenSet;

                    /**
                     * 调度类型，不传该参数时为立即执行：
Day-天
Week-周
Month-月
Once-单次

                     */
                    std::string m_scheduleType;
                    bool m_scheduleTypeHasBeenSet;

                    /**
                     * 执行调度的日期。调度类型为周和月时以英文逗号分隔；
调度类型为单次时，该值是个日期
                     */
                    std::string m_scheduleData;
                    bool m_scheduleDataHasBeenSet;

                    /**
                     * 执行时间：时
                     */
                    int64_t m_scheduleHour;
                    bool m_scheduleHourHasBeenSet;

                    /**
                     * 执行时间：分
                     */
                    int64_t m_scheduleMin;
                    bool m_scheduleMinHasBeenSet;

                    /**
                     * 备份粒度：
All-全量
Database-按库
Table-按表
                     */
                    std::string m_backupScope;
                    bool m_backupScopeHasBeenSet;

                    /**
                     * 备份库：如果是按库备份，则需要该字段，库之间用英文逗号分割
                     */
                    std::string m_backupDatabase;
                    bool m_backupDatabaseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_SCHEDULEINFO_H_
