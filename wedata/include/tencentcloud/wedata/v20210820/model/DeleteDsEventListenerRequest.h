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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETEDSEVENTLISTENERREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETEDSEVENTLISTENERREQUEST_H_

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
                * DeleteDsEventListener请求参数结构体
                */
                class DeleteDsEventListenerRequest : public AbstractModel
                {
                public:
                    DeleteDsEventListenerRequest();
                    ~DeleteDsEventListenerRequest() = default;
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
                     * 获取任务id
                     * @return Key 任务id
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置任务id
                     * @param _key 任务id
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
                     * 获取触发类型，REST_API，KAFKA
                     * @return Type 触发类型，REST_API，KAFKA
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置触发类型，REST_API，KAFKA
                     * @param _type 触发类型，REST_API，KAFKA
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
                     * 获取请求来源，WEB 前端；CLIENT 客户端
                     * @return RequestFromSource 请求来源，WEB 前端；CLIENT 客户端
                     * 
                     */
                    std::string GetRequestFromSource() const;

                    /**
                     * 设置请求来源，WEB 前端；CLIENT 客户端
                     * @param _requestFromSource 请求来源，WEB 前端；CLIENT 客户端
                     * 
                     */
                    void SetRequestFromSource(const std::string& _requestFromSource);

                    /**
                     * 判断参数 RequestFromSource 是否已赋值
                     * @return RequestFromSource 是否已赋值
                     * 
                     */
                    bool RequestFromSourceHasBeenSet() const;

                    /**
                     * 获取事件所属项目id
                     * @return EventProjectId 事件所属项目id
                     * 
                     */
                    std::string GetEventProjectId() const;

                    /**
                     * 设置事件所属项目id
                     * @param _eventProjectId 事件所属项目id
                     * 
                     */
                    void SetEventProjectId(const std::string& _eventProjectId);

                    /**
                     * 判断参数 EventProjectId 是否已赋值
                     * @return EventProjectId 是否已赋值
                     * 
                     */
                    bool EventProjectIdHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务id
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 触发类型，REST_API，KAFKA
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 事件名称
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * 请求来源，WEB 前端；CLIENT 客户端
                     */
                    std::string m_requestFromSource;
                    bool m_requestFromSourceHasBeenSet;

                    /**
                     * 事件所属项目id
                     */
                    std::string m_eventProjectId;
                    bool m_eventProjectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETEDSEVENTLISTENERREQUEST_H_
