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

#ifndef TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_EVENT_H_
#define TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_EVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudaudit/v20190319/model/Resource.h>


namespace TencentCloud
{
    namespace Cloudaudit
    {
        namespace V20190319
        {
            namespace Model
            {
                /**
                * 日志详情
                */
                class Event : public AbstractModel
                {
                public:
                    Event();
                    ~Event() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志ID
                     * @return EventId 日志ID
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置日志ID
                     * @param _eventId 日志ID
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
                     * 获取用户名
                     * @return Username 用户名
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置用户名
                     * @param _username 用户名
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取事件时间
                     * @return EventTime 事件时间
                     * 
                     */
                    std::string GetEventTime() const;

                    /**
                     * 设置事件时间
                     * @param _eventTime 事件时间
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
                     * 获取日志详情
                     * @return CloudAuditEvent 日志详情
                     * 
                     */
                    std::string GetCloudAuditEvent() const;

                    /**
                     * 设置日志详情
                     * @param _cloudAuditEvent 日志详情
                     * 
                     */
                    void SetCloudAuditEvent(const std::string& _cloudAuditEvent);

                    /**
                     * 判断参数 CloudAuditEvent 是否已赋值
                     * @return CloudAuditEvent 是否已赋值
                     * 
                     */
                    bool CloudAuditEventHasBeenSet() const;

                    /**
                     * 获取资源类型中文描述（此字段请按需使用，如果您是其他语言使用者，可以忽略该字段描述）
                     * @return ResourceTypeCn 资源类型中文描述（此字段请按需使用，如果您是其他语言使用者，可以忽略该字段描述）
                     * 
                     */
                    std::string GetResourceTypeCn() const;

                    /**
                     * 设置资源类型中文描述（此字段请按需使用，如果您是其他语言使用者，可以忽略该字段描述）
                     * @param _resourceTypeCn 资源类型中文描述（此字段请按需使用，如果您是其他语言使用者，可以忽略该字段描述）
                     * 
                     */
                    void SetResourceTypeCn(const std::string& _resourceTypeCn);

                    /**
                     * 判断参数 ResourceTypeCn 是否已赋值
                     * @return ResourceTypeCn 是否已赋值
                     * 
                     */
                    bool ResourceTypeCnHasBeenSet() const;

                    /**
                     * 获取鉴权错误码
                     * @return ErrorCode 鉴权错误码
                     * 
                     */
                    int64_t GetErrorCode() const;

                    /**
                     * 设置鉴权错误码
                     * @param _errorCode 鉴权错误码
                     * 
                     */
                    void SetErrorCode(const int64_t& _errorCode);

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

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
                     * 获取证书ID
                     * @return SecretId 证书ID
                     * 
                     */
                    std::string GetSecretId() const;

                    /**
                     * 设置证书ID
                     * @param _secretId 证书ID
                     * 
                     */
                    void SetSecretId(const std::string& _secretId);

                    /**
                     * 判断参数 SecretId 是否已赋值
                     * @return SecretId 是否已赋值
                     * 
                     */
                    bool SecretIdHasBeenSet() const;

                    /**
                     * 获取请求来源
                     * @return EventSource 请求来源
                     * 
                     */
                    std::string GetEventSource() const;

                    /**
                     * 设置请求来源
                     * @param _eventSource 请求来源
                     * 
                     */
                    void SetEventSource(const std::string& _eventSource);

                    /**
                     * 判断参数 EventSource 是否已赋值
                     * @return EventSource 是否已赋值
                     * 
                     */
                    bool EventSourceHasBeenSet() const;

                    /**
                     * 获取请求ID
                     * @return RequestID 请求ID
                     * 
                     */
                    std::string GetRequestID() const;

                    /**
                     * 设置请求ID
                     * @param _requestID 请求ID
                     * 
                     */
                    void SetRequestID(const std::string& _requestID);

                    /**
                     * 判断参数 RequestID 是否已赋值
                     * @return RequestID 是否已赋值
                     * 
                     */
                    bool RequestIDHasBeenSet() const;

                    /**
                     * 获取资源地域
                     * @return ResourceRegion 资源地域
                     * 
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置资源地域
                     * @param _resourceRegion 资源地域
                     * 
                     */
                    void SetResourceRegion(const std::string& _resourceRegion);

                    /**
                     * 判断参数 ResourceRegion 是否已赋值
                     * @return ResourceRegion 是否已赋值
                     * 
                     */
                    bool ResourceRegionHasBeenSet() const;

                    /**
                     * 获取主账号ID
                     * @return AccountID 主账号ID
                     * 
                     */
                    int64_t GetAccountID() const;

                    /**
                     * 设置主账号ID
                     * @param _accountID 主账号ID
                     * 
                     */
                    void SetAccountID(const int64_t& _accountID);

                    /**
                     * 判断参数 AccountID 是否已赋值
                     * @return AccountID 是否已赋值
                     * 
                     */
                    bool AccountIDHasBeenSet() const;

                    /**
                     * 获取源IP
                     * @return SourceIPAddress 源IP
                     * 
                     */
                    std::string GetSourceIPAddress() const;

                    /**
                     * 设置源IP
                     * @param _sourceIPAddress 源IP
                     * 
                     */
                    void SetSourceIPAddress(const std::string& _sourceIPAddress);

                    /**
                     * 判断参数 SourceIPAddress 是否已赋值
                     * @return SourceIPAddress 是否已赋值
                     * 
                     */
                    bool SourceIPAddressHasBeenSet() const;

                    /**
                     * 获取事件名称中文描述（此字段请按需使用，如果您是其他语言使用者，可以忽略该字段描述）
                     * @return EventNameCn 事件名称中文描述（此字段请按需使用，如果您是其他语言使用者，可以忽略该字段描述）
                     * 
                     */
                    std::string GetEventNameCn() const;

                    /**
                     * 设置事件名称中文描述（此字段请按需使用，如果您是其他语言使用者，可以忽略该字段描述）
                     * @param _eventNameCn 事件名称中文描述（此字段请按需使用，如果您是其他语言使用者，可以忽略该字段描述）
                     * 
                     */
                    void SetEventNameCn(const std::string& _eventNameCn);

                    /**
                     * 判断参数 EventNameCn 是否已赋值
                     * @return EventNameCn 是否已赋值
                     * 
                     */
                    bool EventNameCnHasBeenSet() const;

                    /**
                     * 获取资源对
                     * @return Resources 资源对
                     * 
                     */
                    Resource GetResources() const;

                    /**
                     * 设置资源对
                     * @param _resources 资源对
                     * 
                     */
                    void SetResources(const Resource& _resources);

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                    /**
                     * 获取事件地域
                     * @return EventRegion 事件地域
                     * 
                     */
                    std::string GetEventRegion() const;

                    /**
                     * 设置事件地域
                     * @param _eventRegion 事件地域
                     * 
                     */
                    void SetEventRegion(const std::string& _eventRegion);

                    /**
                     * 判断参数 EventRegion 是否已赋值
                     * @return EventRegion 是否已赋值
                     * 
                     */
                    bool EventRegionHasBeenSet() const;

                    /**
                     * 获取IP 归属地
                     * @return Location IP 归属地
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置IP 归属地
                     * @param _location IP 归属地
                     * 
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                private:

                    /**
                     * 日志ID
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * 用户名
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * 事件时间
                     */
                    std::string m_eventTime;
                    bool m_eventTimeHasBeenSet;

                    /**
                     * 日志详情
                     */
                    std::string m_cloudAuditEvent;
                    bool m_cloudAuditEventHasBeenSet;

                    /**
                     * 资源类型中文描述（此字段请按需使用，如果您是其他语言使用者，可以忽略该字段描述）
                     */
                    std::string m_resourceTypeCn;
                    bool m_resourceTypeCnHasBeenSet;

                    /**
                     * 鉴权错误码
                     */
                    int64_t m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * 事件名称
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * 证书ID
                     */
                    std::string m_secretId;
                    bool m_secretIdHasBeenSet;

                    /**
                     * 请求来源
                     */
                    std::string m_eventSource;
                    bool m_eventSourceHasBeenSet;

                    /**
                     * 请求ID
                     */
                    std::string m_requestID;
                    bool m_requestIDHasBeenSet;

                    /**
                     * 资源地域
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                    /**
                     * 主账号ID
                     */
                    int64_t m_accountID;
                    bool m_accountIDHasBeenSet;

                    /**
                     * 源IP
                     */
                    std::string m_sourceIPAddress;
                    bool m_sourceIPAddressHasBeenSet;

                    /**
                     * 事件名称中文描述（此字段请按需使用，如果您是其他语言使用者，可以忽略该字段描述）
                     */
                    std::string m_eventNameCn;
                    bool m_eventNameCnHasBeenSet;

                    /**
                     * 资源对
                     */
                    Resource m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * 事件地域
                     */
                    std::string m_eventRegion;
                    bool m_eventRegionHasBeenSet;

                    /**
                     * IP 归属地
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_EVENT_H_
