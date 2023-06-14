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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_REGISTEREVENTLISTENERREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_REGISTEREVENTLISTENERREQUEST_H_

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
                * RegisterEventListener请求参数结构体
                */
                class RegisterEventListenerRequest : public AbstractModel
                {
                public:
                    RegisterEventListenerRequest();
                    ~RegisterEventListenerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取关键字，如果是任务，则传任务Id
                     * @return Key 关键字，如果是任务，则传任务Id
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置关键字，如果是任务，则传任务Id
                     * @param _key 关键字，如果是任务，则传任务Id
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取事件名称
                     * @return EventName 事件名称
                     * 
                     */
                    std::string GetEventName() const;

                    /**
                     * 设置事件名称
                     * @param _eventName 事件名称
                     * 
                     */
                    void SetEventName(const std::string& _eventName);

                    /**
                     * 判断参数 EventName 是否已赋值
                     * @return EventName 是否已赋值
                     * 
                     */
                    bool EventNameHasBeenSet() const;

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
                     * 获取事件类型，默认 REST_API
                     * @return Type 事件类型，默认 REST_API
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置事件类型，默认 REST_API
                     * @param _type 事件类型，默认 REST_API
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取配置信息，比如最长等待时间1天配置json：{"maxWaitEventTime":1,"maxWaitEventTimeUnit":"DAYS"}
                     * @return Properties 配置信息，比如最长等待时间1天配置json：{"maxWaitEventTime":1,"maxWaitEventTimeUnit":"DAYS"}
                     * 
                     */
                    std::string GetProperties() const;

                    /**
                     * 设置配置信息，比如最长等待时间1天配置json：{"maxWaitEventTime":1,"maxWaitEventTimeUnit":"DAYS"}
                     * @param _properties 配置信息，比如最长等待时间1天配置json：{"maxWaitEventTime":1,"maxWaitEventTimeUnit":"DAYS"}
                     * 
                     */
                    void SetProperties(const std::string& _properties);

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     * 
                     */
                    bool PropertiesHasBeenSet() const;

                private:

                    /**
                     * 关键字，如果是任务，则传任务Id
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 事件名称
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 事件类型，默认 REST_API
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 配置信息，比如最长等待时间1天配置json：{"maxWaitEventTime":1,"maxWaitEventTimeUnit":"DAYS"}
                     */
                    std::string m_properties;
                    bool m_propertiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_REGISTEREVENTLISTENERREQUEST_H_
