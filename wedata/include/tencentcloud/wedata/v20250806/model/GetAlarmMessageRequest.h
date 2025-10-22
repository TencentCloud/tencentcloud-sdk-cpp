/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_GETALARMMESSAGEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_GETALARMMESSAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * GetAlarmMessage请求参数结构体
                */
                class GetAlarmMessageRequest : public AbstractModel
                {
                public:
                    GetAlarmMessageRequest();
                    ~GetAlarmMessageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取所属项目Id
                     * @return ProjectId 所属项目Id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置所属项目Id
                     * @param _projectId 所属项目Id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取告警消息Id
                     * @return AlarmMessageId 告警消息Id
                     * 
                     */
                    std::string GetAlarmMessageId() const;

                    /**
                     * 设置告警消息Id
                     * @param _alarmMessageId 告警消息Id
                     * 
                     */
                    void SetAlarmMessageId(const std::string& _alarmMessageId);

                    /**
                     * 判断参数 AlarmMessageId 是否已赋值
                     * @return AlarmMessageId 是否已赋值
                     * 
                     */
                    bool AlarmMessageIdHasBeenSet() const;

                    /**
                     * 获取返回日期的时区, 默认UTC+8
                     * @return TimeZone 返回日期的时区, 默认UTC+8
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置返回日期的时区, 默认UTC+8
                     * @param _timeZone 返回日期的时区, 默认UTC+8
                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                private:

                    /**
                     * 所属项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 告警消息Id
                     */
                    std::string m_alarmMessageId;
                    bool m_alarmMessageIdHasBeenSet;

                    /**
                     * 返回日期的时区, 默认UTC+8
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_GETALARMMESSAGEREQUEST_H_
