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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_REGISTEREVENTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_REGISTEREVENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * RegisterEvent请求参数结构体
                */
                class RegisterEventRequest : public AbstractModel
                {
                public:
                    RegisterEventRequest();
                    ~RegisterEventRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目Id
                     * @return ProjectId 项目Id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目Id
                     * @param _projectId 项目Id
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
                     * 获取事件名称，支持英文、数字和下划线，最长20个字符, 不能以数字下划线开头。
                     * @return Name 事件名称，支持英文、数字和下划线，最长20个字符, 不能以数字下划线开头。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置事件名称，支持英文、数字和下划线，最长20个字符, 不能以数字下划线开头。
                     * @param _name 事件名称，支持英文、数字和下划线，最长20个字符, 不能以数字下划线开头。
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
                     * 获取事件分割类型，周期类型: DAY，HOUR，MIN，SECOND
                     * @return EventSubType 事件分割类型，周期类型: DAY，HOUR，MIN，SECOND
                     * 
                     */
                    std::string GetEventSubType() const;

                    /**
                     * 设置事件分割类型，周期类型: DAY，HOUR，MIN，SECOND
                     * @param _eventSubType 事件分割类型，周期类型: DAY，HOUR，MIN，SECOND
                     * 
                     */
                    void SetEventSubType(const std::string& _eventSubType);

                    /**
                     * 判断参数 EventSubType 是否已赋值
                     * @return EventSubType 是否已赋值
                     * 
                     */
                    bool EventSubTypeHasBeenSet() const;

                    /**
                     * 获取广播：BROADCAST,单播：SINGLE
                     * @return EventBroadcastType 广播：BROADCAST,单播：SINGLE
                     * 
                     */
                    std::string GetEventBroadcastType() const;

                    /**
                     * 设置广播：BROADCAST,单播：SINGLE
                     * @param _eventBroadcastType 广播：BROADCAST,单播：SINGLE
                     * 
                     */
                    void SetEventBroadcastType(const std::string& _eventBroadcastType);

                    /**
                     * 判断参数 EventBroadcastType 是否已赋值
                     * @return EventBroadcastType 是否已赋值
                     * 
                     */
                    bool EventBroadcastTypeHasBeenSet() const;

                    /**
                     * 获取周期类型为天和小时为HOURS ，周期类型为分钟 ：MINUTES,周期类型为秒：SECONDS
                     * @return TimeUnit 周期类型为天和小时为HOURS ，周期类型为分钟 ：MINUTES,周期类型为秒：SECONDS
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置周期类型为天和小时为HOURS ，周期类型为分钟 ：MINUTES,周期类型为秒：SECONDS
                     * @param _timeUnit 周期类型为天和小时为HOURS ，周期类型为分钟 ：MINUTES,周期类型为秒：SECONDS
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取事件所属人
                     * @return Owner 事件所属人
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置事件所属人
                     * @param _owner 事件所属人
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取必填，事件类型，默认值：TIME_SERIES
                     * @return EventType 必填，事件类型，默认值：TIME_SERIES
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置必填，事件类型，默认值：TIME_SERIES
                     * @param _eventType 必填，事件类型，默认值：TIME_SERIES
                     * 
                     */
                    void SetEventType(const std::string& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取必填，对应day： yyyyMMdd，对应HOUR：yyyyMMddHH，对应MIN：yyyyMMddHHmm，对应SECOND：yyyyMMddHHmmss，默认值：yyyyMMdd
                     * @return DimensionFormat 必填，对应day： yyyyMMdd，对应HOUR：yyyyMMddHH，对应MIN：yyyyMMddHHmm，对应SECOND：yyyyMMddHHmmss，默认值：yyyyMMdd
                     * 
                     */
                    std::string GetDimensionFormat() const;

                    /**
                     * 设置必填，对应day： yyyyMMdd，对应HOUR：yyyyMMddHH，对应MIN：yyyyMMddHHmm，对应SECOND：yyyyMMddHHmmss，默认值：yyyyMMdd
                     * @param _dimensionFormat 必填，对应day： yyyyMMdd，对应HOUR：yyyyMMddHH，对应MIN：yyyyMMddHHmm，对应SECOND：yyyyMMddHHmmss，默认值：yyyyMMdd
                     * 
                     */
                    void SetDimensionFormat(const std::string& _dimensionFormat);

                    /**
                     * 判断参数 DimensionFormat 是否已赋值
                     * @return DimensionFormat 是否已赋值
                     * 
                     */
                    bool DimensionFormatHasBeenSet() const;

                    /**
                     * 获取存活时间
                     * @return TimeToLive 存活时间
                     * 
                     */
                    int64_t GetTimeToLive() const;

                    /**
                     * 设置存活时间
                     * @param _timeToLive 存活时间
                     * 
                     */
                    void SetTimeToLive(const int64_t& _timeToLive);

                    /**
                     * 判断参数 TimeToLive 是否已赋值
                     * @return TimeToLive 是否已赋值
                     * 
                     */
                    bool TimeToLiveHasBeenSet() const;

                    /**
                     * 获取事件描述
                     * @return Description 事件描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置事件描述
                     * @param _description 事件描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 事件名称，支持英文、数字和下划线，最长20个字符, 不能以数字下划线开头。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 事件分割类型，周期类型: DAY，HOUR，MIN，SECOND
                     */
                    std::string m_eventSubType;
                    bool m_eventSubTypeHasBeenSet;

                    /**
                     * 广播：BROADCAST,单播：SINGLE
                     */
                    std::string m_eventBroadcastType;
                    bool m_eventBroadcastTypeHasBeenSet;

                    /**
                     * 周期类型为天和小时为HOURS ，周期类型为分钟 ：MINUTES,周期类型为秒：SECONDS
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 事件所属人
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 必填，事件类型，默认值：TIME_SERIES
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * 必填，对应day： yyyyMMdd，对应HOUR：yyyyMMddHH，对应MIN：yyyyMMddHHmm，对应SECOND：yyyyMMddHHmmss，默认值：yyyyMMdd
                     */
                    std::string m_dimensionFormat;
                    bool m_dimensionFormatHasBeenSet;

                    /**
                     * 存活时间
                     */
                    int64_t m_timeToLive;
                    bool m_timeToLiveHasBeenSet;

                    /**
                     * 事件描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_REGISTEREVENTREQUEST_H_
