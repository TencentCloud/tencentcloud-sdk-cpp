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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_DELETECONNECTIONREQUEST_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_DELETECONNECTIONREQUEST_H_

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
                * DeleteConnection请求参数结构体
                */
                class DeleteConnectionRequest : public AbstractModel
                {
                public:
                    DeleteConnectionRequest();
                    ~DeleteConnectionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取连接器ID
                     * @return ConnectionId 连接器ID
                     * 
                     */
                    std::string GetConnectionId() const;

                    /**
                     * 设置连接器ID
                     * @param _connectionId 连接器ID
                     * 
                     */
                    void SetConnectionId(const std::string& _connectionId);

                    /**
                     * 判断参数 ConnectionId 是否已赋值
                     * @return ConnectionId 是否已赋值
                     * 
                     */
                    bool ConnectionIdHasBeenSet() const;

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

                private:

                    /**
                     * 连接器ID
                     */
                    std::string m_connectionId;
                    bool m_connectionIdHasBeenSet;

                    /**
                     * 事件集ID
                     */
                    std::string m_eventBusId;
                    bool m_eventBusIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_DELETECONNECTIONREQUEST_H_
