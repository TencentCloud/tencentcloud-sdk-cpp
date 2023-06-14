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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_SCHEDULEDACTION_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_SCHEDULEDACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 定时的事务和行为
                */
                class ScheduledAction : public AbstractModel
                {
                public:
                    ScheduledAction();
                    ~ScheduledAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否要定时停止服务，true or false。true 则 ScheduleStopTime 必填， false 则 ScheduleStopTime 不生效
                     * @return ScheduleStop 是否要定时停止服务，true or false。true 则 ScheduleStopTime 必填， false 则 ScheduleStopTime 不生效
                     * 
                     */
                    bool GetScheduleStop() const;

                    /**
                     * 设置是否要定时停止服务，true or false。true 则 ScheduleStopTime 必填， false 则 ScheduleStopTime 不生效
                     * @param _scheduleStop 是否要定时停止服务，true or false。true 则 ScheduleStopTime 必填， false 则 ScheduleStopTime 不生效
                     * 
                     */
                    void SetScheduleStop(const bool& _scheduleStop);

                    /**
                     * 判断参数 ScheduleStop 是否已赋值
                     * @return ScheduleStop 是否已赋值
                     * 
                     */
                    bool ScheduleStopHasBeenSet() const;

                    /**
                     * 获取要执行定时停止的时间，格式：“2022-01-26T19:46:22+08:00”
                     * @return ScheduleStopTime 要执行定时停止的时间，格式：“2022-01-26T19:46:22+08:00”
                     * 
                     */
                    std::string GetScheduleStopTime() const;

                    /**
                     * 设置要执行定时停止的时间，格式：“2022-01-26T19:46:22+08:00”
                     * @param _scheduleStopTime 要执行定时停止的时间，格式：“2022-01-26T19:46:22+08:00”
                     * 
                     */
                    void SetScheduleStopTime(const std::string& _scheduleStopTime);

                    /**
                     * 判断参数 ScheduleStopTime 是否已赋值
                     * @return ScheduleStopTime 是否已赋值
                     * 
                     */
                    bool ScheduleStopTimeHasBeenSet() const;

                private:

                    /**
                     * 是否要定时停止服务，true or false。true 则 ScheduleStopTime 必填， false 则 ScheduleStopTime 不生效
                     */
                    bool m_scheduleStop;
                    bool m_scheduleStopHasBeenSet;

                    /**
                     * 要执行定时停止的时间，格式：“2022-01-26T19:46:22+08:00”
                     */
                    std::string m_scheduleStopTime;
                    bool m_scheduleStopTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_SCHEDULEDACTION_H_
