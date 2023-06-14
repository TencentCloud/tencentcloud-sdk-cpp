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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_SECURITYDYNAMIC_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_SECURITYDYNAMIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 安全事件消息数据。
                */
                class SecurityDynamic : public AbstractModel
                {
                public:
                    SecurityDynamic();
                    ~SecurityDynamic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云镜客户端UUID。
                     * @return Uuid 云镜客户端UUID。
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置云镜客户端UUID。
                     * @param _uuid 云镜客户端UUID。
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取安全事件发生事件。
                     * @return EventTime 安全事件发生事件。
                     * 
                     */
                    std::string GetEventTime() const;

                    /**
                     * 设置安全事件发生事件。
                     * @param _eventTime 安全事件发生事件。
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
                     * 获取安全事件类型。
<li>MALWARE：木马事件</li>
<li>NON_LOCAL_LOGIN：异地登录</li>
<li>BRUTEATTACK_SUCCESS：密码破解成功</li>
<li>VUL：漏洞</li>
<li>BASELINE：安全基线</li>
                     * @return EventType 安全事件类型。
<li>MALWARE：木马事件</li>
<li>NON_LOCAL_LOGIN：异地登录</li>
<li>BRUTEATTACK_SUCCESS：密码破解成功</li>
<li>VUL：漏洞</li>
<li>BASELINE：安全基线</li>
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置安全事件类型。
<li>MALWARE：木马事件</li>
<li>NON_LOCAL_LOGIN：异地登录</li>
<li>BRUTEATTACK_SUCCESS：密码破解成功</li>
<li>VUL：漏洞</li>
<li>BASELINE：安全基线</li>
                     * @param _eventType 安全事件类型。
<li>MALWARE：木马事件</li>
<li>NON_LOCAL_LOGIN：异地登录</li>
<li>BRUTEATTACK_SUCCESS：密码破解成功</li>
<li>VUL：漏洞</li>
<li>BASELINE：安全基线</li>
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
                     * 获取安全事件消息。
                     * @return Message 安全事件消息。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置安全事件消息。
                     * @param _message 安全事件消息。
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
                     * 获取安全事件等级。
<li>RISK: 严重</li>
<li>HIGH: 高危</li>
<li>NORMAL: 中危</li>
<li>LOW: 低危</li>
                     * @return SecurityLevel 安全事件等级。
<li>RISK: 严重</li>
<li>HIGH: 高危</li>
<li>NORMAL: 中危</li>
<li>LOW: 低危</li>
                     * 
                     */
                    std::string GetSecurityLevel() const;

                    /**
                     * 设置安全事件等级。
<li>RISK: 严重</li>
<li>HIGH: 高危</li>
<li>NORMAL: 中危</li>
<li>LOW: 低危</li>
                     * @param _securityLevel 安全事件等级。
<li>RISK: 严重</li>
<li>HIGH: 高危</li>
<li>NORMAL: 中危</li>
<li>LOW: 低危</li>
                     * 
                     */
                    void SetSecurityLevel(const std::string& _securityLevel);

                    /**
                     * 判断参数 SecurityLevel 是否已赋值
                     * @return SecurityLevel 是否已赋值
                     * 
                     */
                    bool SecurityLevelHasBeenSet() const;

                private:

                    /**
                     * 云镜客户端UUID。
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 安全事件发生事件。
                     */
                    std::string m_eventTime;
                    bool m_eventTimeHasBeenSet;

                    /**
                     * 安全事件类型。
<li>MALWARE：木马事件</li>
<li>NON_LOCAL_LOGIN：异地登录</li>
<li>BRUTEATTACK_SUCCESS：密码破解成功</li>
<li>VUL：漏洞</li>
<li>BASELINE：安全基线</li>
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * 安全事件消息。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 安全事件等级。
<li>RISK: 严重</li>
<li>HIGH: 高危</li>
<li>NORMAL: 中危</li>
<li>LOW: 低危</li>
                     */
                    std::string m_securityLevel;
                    bool m_securityLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_SECURITYDYNAMIC_H_
