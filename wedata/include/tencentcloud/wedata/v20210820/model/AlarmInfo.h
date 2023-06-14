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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_ALARMINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_ALARMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 任务告警信息
                */
                class AlarmInfo : public AbstractModel
                {
                public:
                    AlarmInfo();
                    ~AlarmInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取关联任务id
                     * @return TaskIds 关联任务id
                     * 
                     */
                    std::string GetTaskIds() const;

                    /**
                     * 设置关联任务id
                     * @param _taskIds 关联任务id
                     * 
                     */
                    void SetTaskIds(const std::string& _taskIds);

                    /**
                     * 判断参数 TaskIds 是否已赋值
                     * @return TaskIds 是否已赋值
                     * 
                     */
                    bool TaskIdsHasBeenSet() const;

                    /**
                     * 获取告警类别；failure表示失败告警；overtime表示超时告警
                     * @return AlarmType 告警类别；failure表示失败告警；overtime表示超时告警
                     * 
                     */
                    std::string GetAlarmType() const;

                    /**
                     * 设置告警类别；failure表示失败告警；overtime表示超时告警
                     * @param _alarmType 告警类别；failure表示失败告警；overtime表示超时告警
                     * 
                     */
                    void SetAlarmType(const std::string& _alarmType);

                    /**
                     * 判断参数 AlarmType 是否已赋值
                     * @return AlarmType 是否已赋值
                     * 
                     */
                    bool AlarmTypeHasBeenSet() const;

                    /**
                     * 获取告警方式；SMS表示短信；Email表示邮件；HTTP 表示接口方式；Wechat表示微信方式
                     * @return AlarmWay 告警方式；SMS表示短信；Email表示邮件；HTTP 表示接口方式；Wechat表示微信方式
                     * 
                     */
                    std::string GetAlarmWay() const;

                    /**
                     * 设置告警方式；SMS表示短信；Email表示邮件；HTTP 表示接口方式；Wechat表示微信方式
                     * @param _alarmWay 告警方式；SMS表示短信；Email表示邮件；HTTP 表示接口方式；Wechat表示微信方式
                     * 
                     */
                    void SetAlarmWay(const std::string& _alarmWay);

                    /**
                     * 判断参数 AlarmWay 是否已赋值
                     * @return AlarmWay 是否已赋值
                     * 
                     */
                    bool AlarmWayHasBeenSet() const;

                    /**
                     * 获取告警接收人，多个告警接收人以;分割
                     * @return AlarmRecipient 告警接收人，多个告警接收人以;分割
                     * 
                     */
                    std::string GetAlarmRecipient() const;

                    /**
                     * 设置告警接收人，多个告警接收人以;分割
                     * @param _alarmRecipient 告警接收人，多个告警接收人以;分割
                     * 
                     */
                    void SetAlarmRecipient(const std::string& _alarmRecipient);

                    /**
                     * 判断参数 AlarmRecipient 是否已赋值
                     * @return AlarmRecipient 是否已赋值
                     * 
                     */
                    bool AlarmRecipientHasBeenSet() const;

                    /**
                     * 获取告警接收人id，多个告警接收人id以;分割
                     * @return AlarmRecipientId 告警接收人id，多个告警接收人id以;分割
                     * 
                     */
                    std::string GetAlarmRecipientId() const;

                    /**
                     * 设置告警接收人id，多个告警接收人id以;分割
                     * @param _alarmRecipientId 告警接收人id，多个告警接收人id以;分割
                     * 
                     */
                    void SetAlarmRecipientId(const std::string& _alarmRecipientId);

                    /**
                     * 判断参数 AlarmRecipientId 是否已赋值
                     * @return AlarmRecipientId 是否已赋值
                     * 
                     */
                    bool AlarmRecipientIdHasBeenSet() const;

                    /**
                     * 获取预计运行的小时，取值范围0-23
                     * @return Hours 预计运行的小时，取值范围0-23
                     * 
                     */
                    uint64_t GetHours() const;

                    /**
                     * 设置预计运行的小时，取值范围0-23
                     * @param _hours 预计运行的小时，取值范围0-23
                     * 
                     */
                    void SetHours(const uint64_t& _hours);

                    /**
                     * 判断参数 Hours 是否已赋值
                     * @return Hours 是否已赋值
                     * 
                     */
                    bool HoursHasBeenSet() const;

                    /**
                     * 获取预计运行分钟，取值范围0-59
                     * @return Minutes 预计运行分钟，取值范围0-59
                     * 
                     */
                    uint64_t GetMinutes() const;

                    /**
                     * 设置预计运行分钟，取值范围0-59
                     * @param _minutes 预计运行分钟，取值范围0-59
                     * 
                     */
                    void SetMinutes(const uint64_t& _minutes);

                    /**
                     * 判断参数 Minutes 是否已赋值
                     * @return Minutes 是否已赋值
                     * 
                     */
                    bool MinutesHasBeenSet() const;

                    /**
                     * 获取告警出发时机；1表示第一次运行失败；2表示所有重试完成后失败；
                     * @return TriggerType 告警出发时机；1表示第一次运行失败；2表示所有重试完成后失败；
                     * 
                     */
                    uint64_t GetTriggerType() const;

                    /**
                     * 设置告警出发时机；1表示第一次运行失败；2表示所有重试完成后失败；
                     * @param _triggerType 告警出发时机；1表示第一次运行失败；2表示所有重试完成后失败；
                     * 
                     */
                    void SetTriggerType(const uint64_t& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取告警信息id
                     * @return AlarmId 告警信息id
                     * 
                     */
                    std::string GetAlarmId() const;

                    /**
                     * 设置告警信息id
                     * @param _alarmId 告警信息id
                     * 
                     */
                    void SetAlarmId(const std::string& _alarmId);

                    /**
                     * 判断参数 AlarmId 是否已赋值
                     * @return AlarmId 是否已赋值
                     * 
                     */
                    bool AlarmIdHasBeenSet() const;

                    /**
                     * 获取告警状态设置；1表示可用；0表示不可用，默认可用
                     * @return Status 告警状态设置；1表示可用；0表示不可用，默认可用
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置告警状态设置；1表示可用；0表示不可用，默认可用
                     * @param _status 告警状态设置；1表示可用；0表示不可用，默认可用
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 关联任务id
                     */
                    std::string m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * 告警类别；failure表示失败告警；overtime表示超时告警
                     */
                    std::string m_alarmType;
                    bool m_alarmTypeHasBeenSet;

                    /**
                     * 告警方式；SMS表示短信；Email表示邮件；HTTP 表示接口方式；Wechat表示微信方式
                     */
                    std::string m_alarmWay;
                    bool m_alarmWayHasBeenSet;

                    /**
                     * 告警接收人，多个告警接收人以;分割
                     */
                    std::string m_alarmRecipient;
                    bool m_alarmRecipientHasBeenSet;

                    /**
                     * 告警接收人id，多个告警接收人id以;分割
                     */
                    std::string m_alarmRecipientId;
                    bool m_alarmRecipientIdHasBeenSet;

                    /**
                     * 预计运行的小时，取值范围0-23
                     */
                    uint64_t m_hours;
                    bool m_hoursHasBeenSet;

                    /**
                     * 预计运行分钟，取值范围0-59
                     */
                    uint64_t m_minutes;
                    bool m_minutesHasBeenSet;

                    /**
                     * 告警出发时机；1表示第一次运行失败；2表示所有重试完成后失败；
                     */
                    uint64_t m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * 告警信息id
                     */
                    std::string m_alarmId;
                    bool m_alarmIdHasBeenSet;

                    /**
                     * 告警状态设置；1表示可用；0表示不可用，默认可用
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_ALARMINFO_H_
