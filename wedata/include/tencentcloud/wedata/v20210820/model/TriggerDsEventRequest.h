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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TRIGGERDSEVENTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TRIGGERDSEVENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/EventCaseDTO.h>
#include <tencentcloud/wedata/v20210820/model/EventBatchCaseDTO.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * TriggerDsEvent请求参数结构体
                */
                class TriggerDsEventRequest : public AbstractModel
                {
                public:
                    TriggerDsEventRequest();
                    ~TriggerDsEventRequest() = default;
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
                     * 获取事件实例信息
                     * @return EventCaseList 事件实例信息
                     * 
                     */
                    std::vector<EventCaseDTO> GetEventCaseList() const;

                    /**
                     * 设置事件实例信息
                     * @param _eventCaseList 事件实例信息
                     * 
                     */
                    void SetEventCaseList(const std::vector<EventCaseDTO>& _eventCaseList);

                    /**
                     * 判断参数 EventCaseList 是否已赋值
                     * @return EventCaseList 是否已赋值
                     * 
                     */
                    bool EventCaseListHasBeenSet() const;

                    /**
                     * 获取事件实例信息(连续时间)
                     * @return EventBatchCaseList 事件实例信息(连续时间)
                     * 
                     */
                    std::vector<EventBatchCaseDTO> GetEventBatchCaseList() const;

                    /**
                     * 设置事件实例信息(连续时间)
                     * @param _eventBatchCaseList 事件实例信息(连续时间)
                     * 
                     */
                    void SetEventBatchCaseList(const std::vector<EventBatchCaseDTO>& _eventBatchCaseList);

                    /**
                     * 判断参数 EventBatchCaseList 是否已赋值
                     * @return EventBatchCaseList 是否已赋值
                     * 
                     */
                    bool EventBatchCaseListHasBeenSet() const;

                    /**
                     * 获取触发时区
                     * @return ScheduleTimeZone 触发时区
                     * 
                     */
                    std::string GetScheduleTimeZone() const;

                    /**
                     * 设置触发时区
                     * @param _scheduleTimeZone 触发时区
                     * 
                     */
                    void SetScheduleTimeZone(const std::string& _scheduleTimeZone);

                    /**
                     * 判断参数 ScheduleTimeZone 是否已赋值
                     * @return ScheduleTimeZone 是否已赋值
                     * 
                     */
                    bool ScheduleTimeZoneHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 事件实例信息
                     */
                    std::vector<EventCaseDTO> m_eventCaseList;
                    bool m_eventCaseListHasBeenSet;

                    /**
                     * 事件实例信息(连续时间)
                     */
                    std::vector<EventBatchCaseDTO> m_eventBatchCaseList;
                    bool m_eventBatchCaseListHasBeenSet;

                    /**
                     * 触发时区
                     */
                    std::string m_scheduleTimeZone;
                    bool m_scheduleTimeZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TRIGGERDSEVENTREQUEST_H_
