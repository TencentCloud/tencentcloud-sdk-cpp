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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_TASKMAINTAININFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_TASKMAINTAININFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * TaskMaintainInfo
                */
                class TaskMaintainInfo : public AbstractModel
                {
                public:
                    TaskMaintainInfo();
                    ~TaskMaintainInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取执行开始时间(距离0点的秒数)
                     * @return MaintainStartTime 执行开始时间(距离0点的秒数)
                     * 
                     */
                    int64_t GetMaintainStartTime() const;

                    /**
                     * 设置执行开始时间(距离0点的秒数)
                     * @param _maintainStartTime 执行开始时间(距离0点的秒数)
                     * 
                     */
                    void SetMaintainStartTime(const int64_t& _maintainStartTime);

                    /**
                     * 判断参数 MaintainStartTime 是否已赋值
                     * @return MaintainStartTime 是否已赋值
                     * 
                     */
                    bool MaintainStartTimeHasBeenSet() const;

                    /**
                     * 获取持续的时间(单位：秒)
                     * @return MaintainDuration 持续的时间(单位：秒)
                     * 
                     */
                    int64_t GetMaintainDuration() const;

                    /**
                     * 设置持续的时间(单位：秒)
                     * @param _maintainDuration 持续的时间(单位：秒)
                     * 
                     */
                    void SetMaintainDuration(const int64_t& _maintainDuration);

                    /**
                     * 判断参数 MaintainDuration 是否已赋值
                     * @return MaintainDuration 是否已赋值
                     * 
                     */
                    bool MaintainDurationHasBeenSet() const;

                    /**
                     * 获取可以执行的时间，枚举值：["Mon","Tue","Wed","Thu","Fri", "Sat", "Sun"]
                     * @return MaintainWeekDays 可以执行的时间，枚举值：["Mon","Tue","Wed","Thu","Fri", "Sat", "Sun"]
                     * 
                     */
                    std::vector<std::string> GetMaintainWeekDays() const;

                    /**
                     * 设置可以执行的时间，枚举值：["Mon","Tue","Wed","Thu","Fri", "Sat", "Sun"]
                     * @param _maintainWeekDays 可以执行的时间，枚举值：["Mon","Tue","Wed","Thu","Fri", "Sat", "Sun"]
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
                     * 执行开始时间(距离0点的秒数)
                     */
                    int64_t m_maintainStartTime;
                    bool m_maintainStartTimeHasBeenSet;

                    /**
                     * 持续的时间(单位：秒)
                     */
                    int64_t m_maintainDuration;
                    bool m_maintainDurationHasBeenSet;

                    /**
                     * 可以执行的时间，枚举值：["Mon","Tue","Wed","Thu","Fri", "Sat", "Sun"]
                     */
                    std::vector<std::string> m_maintainWeekDays;
                    bool m_maintainWeekDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_TASKMAINTAININFO_H_
