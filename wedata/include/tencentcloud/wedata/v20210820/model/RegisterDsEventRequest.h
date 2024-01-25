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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_REGISTERDSEVENTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_REGISTERDSEVENTREQUEST_H_

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
                * RegisterDsEvent请求参数结构体
                */
                class RegisterDsEventRequest : public AbstractModel
                {
                public:
                    RegisterDsEventRequest();
                    ~RegisterDsEventRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
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
                     * 获取事件名称
                     * @return Name 事件名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置事件名称
                     * @param _name 事件名称
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
                     * 获取事件分割类型 SECOND、MIN、HOUR、DAY	
                     * @return EventSubType 事件分割类型 SECOND、MIN、HOUR、DAY	
                     * 
                     */
                    std::string GetEventSubType() const;

                    /**
                     * 设置事件分割类型 SECOND、MIN、HOUR、DAY	
                     * @param _eventSubType 事件分割类型 SECOND、MIN、HOUR、DAY	
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
                     * 获取存活时间	
                     * @return TimeToLive 存活时间	
                     * 
                     */
                    std::string GetTimeToLive() const;

                    /**
                     * 设置存活时间	
                     * @param _timeToLive 存活时间	
                     * 
                     */
                    void SetTimeToLive(const std::string& _timeToLive);

                    /**
                     * 判断参数 TimeToLive 是否已赋值
                     * @return TimeToLive 是否已赋值
                     * 
                     */
                    bool TimeToLiveHasBeenSet() const;

                    /**
                     * 获取存活时间单位	
                     * @return TimeUnit 存活时间单位	
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置存活时间单位	
                     * @param _timeUnit 存活时间单位	
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
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
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
                     * 获取事件类型GENERAL、TIME_SERIES
                     * @return EventType 事件类型GENERAL、TIME_SERIES
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置事件类型GENERAL、TIME_SERIES
                     * @param _eventType 事件类型GENERAL、TIME_SERIES
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
                     * 获取事件广播类型SINGLE、BROADCAST	
                     * @return EventBroadcastType 事件广播类型SINGLE、BROADCAST	
                     * 
                     */
                    std::string GetEventBroadcastType() const;

                    /**
                     * 设置事件广播类型SINGLE、BROADCAST	
                     * @param _eventBroadcastType 事件广播类型SINGLE、BROADCAST	
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
                     * 获取时间格式	
                     * @return DimensionFormat 时间格式	
                     * 
                     */
                    std::string GetDimensionFormat() const;

                    /**
                     * 设置时间格式	
                     * @param _dimensionFormat 时间格式	
                     * 
                     */
                    void SetDimensionFormat(const std::string& _dimensionFormat);

                    /**
                     * 判断参数 DimensionFormat 是否已赋值
                     * @return DimensionFormat 是否已赋值
                     * 
                     */
                    bool DimensionFormatHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 事件名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 事件分割类型 SECOND、MIN、HOUR、DAY	
                     */
                    std::string m_eventSubType;
                    bool m_eventSubTypeHasBeenSet;

                    /**
                     * 存活时间	
                     */
                    std::string m_timeToLive;
                    bool m_timeToLiveHasBeenSet;

                    /**
                     * 存活时间单位	
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 事件所属人	
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 事件类型GENERAL、TIME_SERIES
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * 事件广播类型SINGLE、BROADCAST	
                     */
                    std::string m_eventBroadcastType;
                    bool m_eventBroadcastTypeHasBeenSet;

                    /**
                     * 时间格式	
                     */
                    std::string m_dimensionFormat;
                    bool m_dimensionFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_REGISTERDSEVENTREQUEST_H_
