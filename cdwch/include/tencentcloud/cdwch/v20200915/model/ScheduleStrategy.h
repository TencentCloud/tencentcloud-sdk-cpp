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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_SCHEDULESTRATEGY_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_SCHEDULESTRATEGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            namespace Model
            {
                /**
                * 策略详情
                */
                class ScheduleStrategy : public AbstractModel
                {
                public:
                    ScheduleStrategy();
                    ~ScheduleStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取备份桶名称
                     * @return CosBucketName 备份桶名称
                     * 
                     */
                    std::string GetCosBucketName() const;

                    /**
                     * 设置备份桶名称
                     * @param _cosBucketName 备份桶名称
                     * 
                     */
                    void SetCosBucketName(const std::string& _cosBucketName);

                    /**
                     * 判断参数 CosBucketName 是否已赋值
                     * @return CosBucketName 是否已赋值
                     * 
                     */
                    bool CosBucketNameHasBeenSet() const;

                    /**
                     * 获取备份保留天数
                     * @return RetainDays 备份保留天数
                     * 
                     */
                    int64_t GetRetainDays() const;

                    /**
                     * 设置备份保留天数
                     * @param _retainDays 备份保留天数
                     * 
                     */
                    void SetRetainDays(const int64_t& _retainDays);

                    /**
                     * 判断参数 RetainDays 是否已赋值
                     * @return RetainDays 是否已赋值
                     * 
                     */
                    bool RetainDaysHasBeenSet() const;

                    /**
                     * 获取备份的天
                     * @return WeekDays 备份的天
                     * 
                     */
                    std::string GetWeekDays() const;

                    /**
                     * 设置备份的天
                     * @param _weekDays 备份的天
                     * 
                     */
                    void SetWeekDays(const std::string& _weekDays);

                    /**
                     * 判断参数 WeekDays 是否已赋值
                     * @return WeekDays 是否已赋值
                     * 
                     */
                    bool WeekDaysHasBeenSet() const;

                    /**
                     * 获取备份小时
                     * @return ExecuteHour 备份小时
                     * 
                     */
                    int64_t GetExecuteHour() const;

                    /**
                     * 设置备份小时
                     * @param _executeHour 备份小时
                     * 
                     */
                    void SetExecuteHour(const int64_t& _executeHour);

                    /**
                     * 判断参数 ExecuteHour 是否已赋值
                     * @return ExecuteHour 是否已赋值
                     * 
                     */
                    bool ExecuteHourHasBeenSet() const;

                    /**
                     * 获取策略id
                     * @return ScheduleId 策略id
                     * 
                     */
                    int64_t GetScheduleId() const;

                    /**
                     * 设置策略id
                     * @param _scheduleId 策略id
                     * 
                     */
                    void SetScheduleId(const int64_t& _scheduleId);

                    /**
                     * 判断参数 ScheduleId 是否已赋值
                     * @return ScheduleId 是否已赋值
                     * 
                     */
                    bool ScheduleIdHasBeenSet() const;

                    /**
                     * 获取下次备份时间
                     * @return NextBackupTime 下次备份时间
                     * 
                     */
                    std::string GetNextBackupTime() const;

                    /**
                     * 设置下次备份时间
                     * @param _nextBackupTime 下次备份时间
                     * 
                     */
                    void SetNextBackupTime(const std::string& _nextBackupTime);

                    /**
                     * 判断参数 NextBackupTime 是否已赋值
                     * @return NextBackupTime 是否已赋值
                     * 
                     */
                    bool NextBackupTimeHasBeenSet() const;

                private:

                    /**
                     * 备份桶名称
                     */
                    std::string m_cosBucketName;
                    bool m_cosBucketNameHasBeenSet;

                    /**
                     * 备份保留天数
                     */
                    int64_t m_retainDays;
                    bool m_retainDaysHasBeenSet;

                    /**
                     * 备份的天
                     */
                    std::string m_weekDays;
                    bool m_weekDaysHasBeenSet;

                    /**
                     * 备份小时
                     */
                    int64_t m_executeHour;
                    bool m_executeHourHasBeenSet;

                    /**
                     * 策略id
                     */
                    int64_t m_scheduleId;
                    bool m_scheduleIdHasBeenSet;

                    /**
                     * 下次备份时间
                     */
                    std::string m_nextBackupTime;
                    bool m_nextBackupTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_SCHEDULESTRATEGY_H_
