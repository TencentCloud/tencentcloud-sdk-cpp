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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_EVENT_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_EVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * 事件对象
                */
                class Event : public AbstractModel
                {
                public:
                    Event();
                    ~Event() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件代码，支持以下的事件代码

- FLEET_CREATED 
- FLEET_STATE_DOWNLOADING 
- FLEET_BINARY_DOWNLOAD_FAILED 
- FLEET_CREATION_EXTRACTING_BUILD
- FLEET_CREATION_VALIDATING_RUNTIME_CONFIG
- FLEET_STATE_VALIDATING
- FLEET_STATE_BUILDING 
- FLEET_STATE_ACTIVATING
- FLEET_STATE_ACTIVE
- FLEET_SCALING_EVENT
- FLEET_STATE_ERROR
- FLEET_VALIDATION_LAUNCH_PATH_NOT_FOUND
- FLEET_ACTIVATION_FAILED_NO_INSTANCES
- FLEET_VPC_PEERING_SUCCEEDED
- FLEET_VPC_PEERING_FAILED
- FLEET_VPC_PEERING_DELETE
- FLEET_INITIALIZATION_FAILED
- FLEET_DELETED
- FLEET_STATE_DELETING
- FLEET_ACTIVATION_FAILED
- GAME_SESSION_ACTIVATION_TIMEOUT
                     * @return EventCode 事件代码，支持以下的事件代码

- FLEET_CREATED 
- FLEET_STATE_DOWNLOADING 
- FLEET_BINARY_DOWNLOAD_FAILED 
- FLEET_CREATION_EXTRACTING_BUILD
- FLEET_CREATION_VALIDATING_RUNTIME_CONFIG
- FLEET_STATE_VALIDATING
- FLEET_STATE_BUILDING 
- FLEET_STATE_ACTIVATING
- FLEET_STATE_ACTIVE
- FLEET_SCALING_EVENT
- FLEET_STATE_ERROR
- FLEET_VALIDATION_LAUNCH_PATH_NOT_FOUND
- FLEET_ACTIVATION_FAILED_NO_INSTANCES
- FLEET_VPC_PEERING_SUCCEEDED
- FLEET_VPC_PEERING_FAILED
- FLEET_VPC_PEERING_DELETE
- FLEET_INITIALIZATION_FAILED
- FLEET_DELETED
- FLEET_STATE_DELETING
- FLEET_ACTIVATION_FAILED
- GAME_SESSION_ACTIVATION_TIMEOUT
                     * 
                     */
                    std::string GetEventCode() const;

                    /**
                     * 设置事件代码，支持以下的事件代码

- FLEET_CREATED 
- FLEET_STATE_DOWNLOADING 
- FLEET_BINARY_DOWNLOAD_FAILED 
- FLEET_CREATION_EXTRACTING_BUILD
- FLEET_CREATION_VALIDATING_RUNTIME_CONFIG
- FLEET_STATE_VALIDATING
- FLEET_STATE_BUILDING 
- FLEET_STATE_ACTIVATING
- FLEET_STATE_ACTIVE
- FLEET_SCALING_EVENT
- FLEET_STATE_ERROR
- FLEET_VALIDATION_LAUNCH_PATH_NOT_FOUND
- FLEET_ACTIVATION_FAILED_NO_INSTANCES
- FLEET_VPC_PEERING_SUCCEEDED
- FLEET_VPC_PEERING_FAILED
- FLEET_VPC_PEERING_DELETE
- FLEET_INITIALIZATION_FAILED
- FLEET_DELETED
- FLEET_STATE_DELETING
- FLEET_ACTIVATION_FAILED
- GAME_SESSION_ACTIVATION_TIMEOUT
                     * @param _eventCode 事件代码，支持以下的事件代码

- FLEET_CREATED 
- FLEET_STATE_DOWNLOADING 
- FLEET_BINARY_DOWNLOAD_FAILED 
- FLEET_CREATION_EXTRACTING_BUILD
- FLEET_CREATION_VALIDATING_RUNTIME_CONFIG
- FLEET_STATE_VALIDATING
- FLEET_STATE_BUILDING 
- FLEET_STATE_ACTIVATING
- FLEET_STATE_ACTIVE
- FLEET_SCALING_EVENT
- FLEET_STATE_ERROR
- FLEET_VALIDATION_LAUNCH_PATH_NOT_FOUND
- FLEET_ACTIVATION_FAILED_NO_INSTANCES
- FLEET_VPC_PEERING_SUCCEEDED
- FLEET_VPC_PEERING_FAILED
- FLEET_VPC_PEERING_DELETE
- FLEET_INITIALIZATION_FAILED
- FLEET_DELETED
- FLEET_STATE_DELETING
- FLEET_ACTIVATION_FAILED
- GAME_SESSION_ACTIVATION_TIMEOUT
                     * 
                     */
                    void SetEventCode(const std::string& _eventCode);

                    /**
                     * 判断参数 EventCode 是否已赋值
                     * @return EventCode 是否已赋值
                     * 
                     */
                    bool EventCodeHasBeenSet() const;

                    /**
                     * 获取事件的唯一标识 ID
                     * @return EventId 事件的唯一标识 ID
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置事件的唯一标识 ID
                     * @param _eventId 事件的唯一标识 ID
                     * 
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取事件的发生时间，UTC 时间格式
                     * @return EventTime 事件的发生时间，UTC 时间格式
                     * 
                     */
                    std::string GetEventTime() const;

                    /**
                     * 设置事件的发生时间，UTC 时间格式
                     * @param _eventTime 事件的发生时间，UTC 时间格式
                     * 
                     */
                    void SetEventTime(const std::string& _eventTime);

                    /**
                     * 判断参数 EventTime 是否已赋值
                     * @return EventTime 是否已赋值
                     * 
                     */
                    bool EventTimeHasBeenSet() const;

                    /**
                     * 获取事件的消息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Message 事件的消息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置事件的消息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _message 事件的消息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取事件相关的日志存储路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PreSignedLogUrl 事件相关的日志存储路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPreSignedLogUrl() const;

                    /**
                     * 设置事件相关的日志存储路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _preSignedLogUrl 事件相关的日志存储路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPreSignedLogUrl(const std::string& _preSignedLogUrl);

                    /**
                     * 判断参数 PreSignedLogUrl 是否已赋值
                     * @return PreSignedLogUrl 是否已赋值
                     * 
                     */
                    bool PreSignedLogUrlHasBeenSet() const;

                    /**
                     * 获取事件对应的资源对象唯一标识 ID，例如服务器舰队 ID
                     * @return ResourceId 事件对应的资源对象唯一标识 ID，例如服务器舰队 ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置事件对应的资源对象唯一标识 ID，例如服务器舰队 ID
                     * @param _resourceId 事件对应的资源对象唯一标识 ID，例如服务器舰队 ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                private:

                    /**
                     * 事件代码，支持以下的事件代码

- FLEET_CREATED 
- FLEET_STATE_DOWNLOADING 
- FLEET_BINARY_DOWNLOAD_FAILED 
- FLEET_CREATION_EXTRACTING_BUILD
- FLEET_CREATION_VALIDATING_RUNTIME_CONFIG
- FLEET_STATE_VALIDATING
- FLEET_STATE_BUILDING 
- FLEET_STATE_ACTIVATING
- FLEET_STATE_ACTIVE
- FLEET_SCALING_EVENT
- FLEET_STATE_ERROR
- FLEET_VALIDATION_LAUNCH_PATH_NOT_FOUND
- FLEET_ACTIVATION_FAILED_NO_INSTANCES
- FLEET_VPC_PEERING_SUCCEEDED
- FLEET_VPC_PEERING_FAILED
- FLEET_VPC_PEERING_DELETE
- FLEET_INITIALIZATION_FAILED
- FLEET_DELETED
- FLEET_STATE_DELETING
- FLEET_ACTIVATION_FAILED
- GAME_SESSION_ACTIVATION_TIMEOUT
                     */
                    std::string m_eventCode;
                    bool m_eventCodeHasBeenSet;

                    /**
                     * 事件的唯一标识 ID
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * 事件的发生时间，UTC 时间格式
                     */
                    std::string m_eventTime;
                    bool m_eventTimeHasBeenSet;

                    /**
                     * 事件的消息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 事件相关的日志存储路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_preSignedLogUrl;
                    bool m_preSignedLogUrlHasBeenSet;

                    /**
                     * 事件对应的资源对象唯一标识 ID，例如服务器舰队 ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_EVENT_H_
