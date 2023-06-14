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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_UPDATEEVENTBUSREQUEST_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_UPDATEEVENTBUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * UpdateEventBus请求参数结构体
                */
                class UpdateEventBusRequest : public AbstractModel
                {
                public:
                    UpdateEventBusRequest();
                    ~UpdateEventBusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取事件集ID
                     * @return EventBusId 事件集ID
                     * 
                     */
                    std::string GetEventBusId() const;

                    /**
                     * 设置事件集ID
                     * @param _eventBusId 事件集ID
                     * 
                     */
                    void SetEventBusId(const std::string& _eventBusId);

                    /**
                     * 判断参数 EventBusId 是否已赋值
                     * @return EventBusId 是否已赋值
                     * 
                     */
                    bool EventBusIdHasBeenSet() const;

                    /**
                     * 获取事件集描述，不限字符类型，200字符描述以内
                     * @return Description 事件集描述，不限字符类型，200字符描述以内
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置事件集描述，不限字符类型，200字符描述以内
                     * @param _description 事件集描述，不限字符类型，200字符描述以内
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
                     * 获取事件集名称，只能包含字母、数字、下划线、连字符，以字母开头，以数字或字母结尾，2~60个字符
                     * @return EventBusName 事件集名称，只能包含字母、数字、下划线、连字符，以字母开头，以数字或字母结尾，2~60个字符
                     * 
                     */
                    std::string GetEventBusName() const;

                    /**
                     * 设置事件集名称，只能包含字母、数字、下划线、连字符，以字母开头，以数字或字母结尾，2~60个字符
                     * @param _eventBusName 事件集名称，只能包含字母、数字、下划线、连字符，以字母开头，以数字或字母结尾，2~60个字符
                     * 
                     */
                    void SetEventBusName(const std::string& _eventBusName);

                    /**
                     * 判断参数 EventBusName 是否已赋值
                     * @return EventBusName 是否已赋值
                     * 
                     */
                    bool EventBusNameHasBeenSet() const;

                    /**
                     * 获取EB日志存储时长
                     * @return SaveDays EB日志存储时长
                     * 
                     */
                    int64_t GetSaveDays() const;

                    /**
                     * 设置EB日志存储时长
                     * @param _saveDays EB日志存储时长
                     * 
                     */
                    void SetSaveDays(const int64_t& _saveDays);

                    /**
                     * 判断参数 SaveDays 是否已赋值
                     * @return SaveDays 是否已赋值
                     * 
                     */
                    bool SaveDaysHasBeenSet() const;

                    /**
                     * 获取EB日志主题ID
                     * @return LogTopicId EB日志主题ID
                     * 
                     */
                    std::string GetLogTopicId() const;

                    /**
                     * 设置EB日志主题ID
                     * @param _logTopicId EB日志主题ID
                     * 
                     */
                    void SetLogTopicId(const std::string& _logTopicId);

                    /**
                     * 判断参数 LogTopicId 是否已赋值
                     * @return LogTopicId 是否已赋值
                     * 
                     */
                    bool LogTopicIdHasBeenSet() const;

                    /**
                     * 获取是否开启存储
                     * @return EnableStore 是否开启存储
                     * 
                     */
                    bool GetEnableStore() const;

                    /**
                     * 设置是否开启存储
                     * @param _enableStore 是否开启存储
                     * 
                     */
                    void SetEnableStore(const bool& _enableStore);

                    /**
                     * 判断参数 EnableStore 是否已赋值
                     * @return EnableStore 是否已赋值
                     * 
                     */
                    bool EnableStoreHasBeenSet() const;

                private:

                    /**
                     * 事件集ID
                     */
                    std::string m_eventBusId;
                    bool m_eventBusIdHasBeenSet;

                    /**
                     * 事件集描述，不限字符类型，200字符描述以内
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 事件集名称，只能包含字母、数字、下划线、连字符，以字母开头，以数字或字母结尾，2~60个字符
                     */
                    std::string m_eventBusName;
                    bool m_eventBusNameHasBeenSet;

                    /**
                     * EB日志存储时长
                     */
                    int64_t m_saveDays;
                    bool m_saveDaysHasBeenSet;

                    /**
                     * EB日志主题ID
                     */
                    std::string m_logTopicId;
                    bool m_logTopicIdHasBeenSet;

                    /**
                     * 是否开启存储
                     */
                    bool m_enableStore;
                    bool m_enableStoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_UPDATEEVENTBUSREQUEST_H_
