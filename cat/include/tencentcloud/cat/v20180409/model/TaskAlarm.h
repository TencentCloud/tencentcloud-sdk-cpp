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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_TASKALARM_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_TASKALARM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * 可用性监控任务状态及告警信息
                */
                class TaskAlarm : public AbstractModel
                {
                public:
                    TaskAlarm();
                    ~TaskAlarm() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务Id
                     * @return TaskId 任务Id
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置任务Id
                     * @param TaskId 任务Id
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取任务名称
                     * @return TaskName 任务名称
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称
                     * @param TaskName 任务名称
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取任务周期，单位为分钟。目前支持1，5，15，30几种取值
                     * @return Period 任务周期，单位为分钟。目前支持1，5，15，30几种取值
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置任务周期，单位为分钟。目前支持1，5，15，30几种取值
                     * @param Period 任务周期，单位为分钟。目前支持1，5，15，30几种取值
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取拨测类型。http, https, ping, tcp, udp, smtp, pop3, dns 之一
                     * @return CatTypeName 拨测类型。http, https, ping, tcp, udp, smtp, pop3, dns 之一
                     */
                    std::string GetCatTypeName() const;

                    /**
                     * 设置拨测类型。http, https, ping, tcp, udp, smtp, pop3, dns 之一
                     * @param CatTypeName 拨测类型。http, https, ping, tcp, udp, smtp, pop3, dns 之一
                     */
                    void SetCatTypeName(const std::string& _catTypeName);

                    /**
                     * 判断参数 CatTypeName 是否已赋值
                     * @return CatTypeName 是否已赋值
                     */
                    bool CatTypeNameHasBeenSet() const;

                    /**
                     * 获取任务状态。1表示暂停，2表示运行中，0为初始态
                     * @return Status 任务状态。1表示暂停，2表示运行中，0为初始态
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置任务状态。1表示暂停，2表示运行中，0为初始态
                     * @param Status 任务状态。1表示暂停，2表示运行中，0为初始态
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取拨测任务的Url
                     * @return CgiUrl 拨测任务的Url
                     */
                    std::string GetCgiUrl() const;

                    /**
                     * 设置拨测任务的Url
                     * @param CgiUrl 拨测任务的Url
                     */
                    void SetCgiUrl(const std::string& _cgiUrl);

                    /**
                     * 判断参数 CgiUrl 是否已赋值
                     * @return CgiUrl 是否已赋值
                     */
                    bool CgiUrlHasBeenSet() const;

                    /**
                     * 获取任务创建时间
                     * @return AddTime 任务创建时间
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置任务创建时间
                     * @param AddTime 任务创建时间
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取告警状态。1 故障，0 正常
                     * @return AlarmStatus 告警状态。1 故障，0 正常
                     */
                    uint64_t GetAlarmStatus() const;

                    /**
                     * 设置告警状态。1 故障，0 正常
                     * @param AlarmStatus 告警状态。1 故障，0 正常
                     */
                    void SetAlarmStatus(const uint64_t& _alarmStatus);

                    /**
                     * 判断参数 AlarmStatus 是否已赋值
                     * @return AlarmStatus 是否已赋值
                     */
                    bool AlarmStatusHasBeenSet() const;

                    /**
                     * 获取告警状态描述，统计信息
                     * @return StatusInfo 告警状态描述，统计信息
                     */
                    std::string GetStatusInfo() const;

                    /**
                     * 设置告警状态描述，统计信息
                     * @param StatusInfo 告警状态描述，统计信息
                     */
                    void SetStatusInfo(const std::string& _statusInfo);

                    /**
                     * 判断参数 StatusInfo 是否已赋值
                     * @return StatusInfo 是否已赋值
                     */
                    bool StatusInfoHasBeenSet() const;

                    /**
                     * 获取任务更新时间
                     * @return UpdateTime 任务更新时间
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置任务更新时间
                     * @param UpdateTime 任务更新时间
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 任务Id
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 任务周期，单位为分钟。目前支持1，5，15，30几种取值
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 拨测类型。http, https, ping, tcp, udp, smtp, pop3, dns 之一
                     */
                    std::string m_catTypeName;
                    bool m_catTypeNameHasBeenSet;

                    /**
                     * 任务状态。1表示暂停，2表示运行中，0为初始态
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 拨测任务的Url
                     */
                    std::string m_cgiUrl;
                    bool m_cgiUrlHasBeenSet;

                    /**
                     * 任务创建时间
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * 告警状态。1 故障，0 正常
                     */
                    uint64_t m_alarmStatus;
                    bool m_alarmStatusHasBeenSet;

                    /**
                     * 告警状态描述，统计信息
                     */
                    std::string m_statusInfo;
                    bool m_statusInfoHasBeenSet;

                    /**
                     * 任务更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_TASKALARM_H_
