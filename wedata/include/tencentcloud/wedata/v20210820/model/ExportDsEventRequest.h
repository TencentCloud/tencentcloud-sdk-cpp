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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_EXPORTDSEVENTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_EXPORTDSEVENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/EventDsDto.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * ExportDsEvent请求参数结构体
                */
                class ExportDsEventRequest : public AbstractModel
                {
                public:
                    ExportDsEventRequest();
                    ~ExportDsEventRequest() = default;
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
                     * 获取cos地址
                     * @return OriginDomain cos地址
                     * 
                     */
                    std::string GetOriginDomain() const;

                    /**
                     * 设置cos地址
                     * @param _originDomain cos地址
                     * 
                     */
                    void SetOriginDomain(const std::string& _originDomain);

                    /**
                     * 判断参数 OriginDomain 是否已赋值
                     * @return OriginDomain 是否已赋值
                     * 
                     */
                    bool OriginDomainHasBeenSet() const;

                    /**
                     * 获取事件范围 ALL、PUBLISH、PARTIAL
                     * @return Range 事件范围 ALL、PUBLISH、PARTIAL
                     * 
                     */
                    std::string GetRange() const;

                    /**
                     * 设置事件范围 ALL、PUBLISH、PARTIAL
                     * @param _range 事件范围 ALL、PUBLISH、PARTIAL
                     * 
                     */
                    void SetRange(const std::string& _range);

                    /**
                     * 判断参数 Range 是否已赋值
                     * @return Range 是否已赋值
                     * 
                     */
                    bool RangeHasBeenSet() const;

                    /**
                     * 获取事件名称列表,用于发布管理导出
                     * @return EventNames 事件名称列表,用于发布管理导出
                     * 
                     */
                    std::vector<std::string> GetEventNames() const;

                    /**
                     * 设置事件名称列表,用于发布管理导出
                     * @param _eventNames 事件名称列表,用于发布管理导出
                     * 
                     */
                    void SetEventNames(const std::vector<std::string>& _eventNames);

                    /**
                     * 判断参数 EventNames 是否已赋值
                     * @return EventNames 是否已赋值
                     * 
                     */
                    bool EventNamesHasBeenSet() const;

                    /**
                     * 获取事件列表
                     * @return Events 事件列表
                     * 
                     */
                    std::vector<EventDsDto> GetEvents() const;

                    /**
                     * 设置事件列表
                     * @param _events 事件列表
                     * 
                     */
                    void SetEvents(const std::vector<EventDsDto>& _events);

                    /**
                     * 判断参数 Events 是否已赋值
                     * @return Events 是否已赋值
                     * 
                     */
                    bool EventsHasBeenSet() const;

                    /**
                     * 获取增量发布事件
                     * @return PublishTime 增量发布事件
                     * 
                     */
                    std::string GetPublishTime() const;

                    /**
                     * 设置增量发布事件
                     * @param _publishTime 增量发布事件
                     * 
                     */
                    void SetPublishTime(const std::string& _publishTime);

                    /**
                     * 判断参数 PublishTime 是否已赋值
                     * @return PublishTime 是否已赋值
                     * 
                     */
                    bool PublishTimeHasBeenSet() const;

                    /**
                     * 获取文件标题
                     * @return Title 文件标题
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置文件标题
                     * @param _title 文件标题
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * cos地址
                     */
                    std::string m_originDomain;
                    bool m_originDomainHasBeenSet;

                    /**
                     * 事件范围 ALL、PUBLISH、PARTIAL
                     */
                    std::string m_range;
                    bool m_rangeHasBeenSet;

                    /**
                     * 事件名称列表,用于发布管理导出
                     */
                    std::vector<std::string> m_eventNames;
                    bool m_eventNamesHasBeenSet;

                    /**
                     * 事件列表
                     */
                    std::vector<EventDsDto> m_events;
                    bool m_eventsHasBeenSet;

                    /**
                     * 增量发布事件
                     */
                    std::string m_publishTime;
                    bool m_publishTimeHasBeenSet;

                    /**
                     * 文件标题
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_EXPORTDSEVENTREQUEST_H_
