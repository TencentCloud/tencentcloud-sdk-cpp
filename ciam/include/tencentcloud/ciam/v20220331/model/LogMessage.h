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

#ifndef TENCENTCLOUD_CIAM_V20220331_MODEL_LOGMESSAGE_H_
#define TENCENTCLOUD_CIAM_V20220331_MODEL_LOGMESSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ciam
    {
        namespace V20220331
        {
            namespace Model
            {
                /**
                * 日志详情
                */
                class LogMessage : public AbstractModel
                {
                public:
                    LogMessage();
                    ~LogMessage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志标识
                     * @return LogId 日志标识
                     * 
                     */
                    std::string GetLogId() const;

                    /**
                     * 设置日志标识
                     * @param _logId 日志标识
                     * 
                     */
                    void SetLogId(const std::string& _logId);

                    /**
                     * 判断参数 LogId 是否已赋值
                     * @return LogId 是否已赋值
                     * 
                     */
                    bool LogIdHasBeenSet() const;

                    /**
                     * 获取租户ID
                     * @return TenantId 租户ID
                     * 
                     */
                    std::string GetTenantId() const;

                    /**
                     * 设置租户ID
                     * @param _tenantId 租户ID
                     * 
                     */
                    void SetTenantId(const std::string& _tenantId);

                    /**
                     * 判断参数 TenantId 是否已赋值
                     * @return TenantId 是否已赋值
                     * 
                     */
                    bool TenantIdHasBeenSet() const;

                    /**
                     * 获取用户池ID
                     * @return UserStoreId 用户池ID
                     * 
                     */
                    std::string GetUserStoreId() const;

                    /**
                     * 设置用户池ID
                     * @param _userStoreId 用户池ID
                     * 
                     */
                    void SetUserStoreId(const std::string& _userStoreId);

                    /**
                     * 判断参数 UserStoreId 是否已赋值
                     * @return UserStoreId 是否已赋值
                     * 
                     */
                    bool UserStoreIdHasBeenSet() const;

                    /**
                     * 获取事件编码
                     * @return EventCode 事件编码
                     * 
                     */
                    std::string GetEventCode() const;

                    /**
                     * 设置事件编码
                     * @param _eventCode 事件编码
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
                     * 获取事件发生时间戳，单位：毫秒
                     * @return EventDate 事件发生时间戳，单位：毫秒
                     * 
                     */
                    int64_t GetEventDate() const;

                    /**
                     * 设置事件发生时间戳，单位：毫秒
                     * @param _eventDate 事件发生时间戳，单位：毫秒
                     * 
                     */
                    void SetEventDate(const int64_t& _eventDate);

                    /**
                     * 判断参数 EventDate 是否已赋值
                     * @return EventDate 是否已赋值
                     * 
                     */
                    bool EventDateHasBeenSet() const;

                    /**
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 描述
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取事件参与者

<li> **TENANT** </li>  租户
<li> **USER** </li>  用户
                     * @return Participant 事件参与者

<li> **TENANT** </li>  租户
<li> **USER** </li>  用户
                     * 
                     */
                    std::string GetParticipant() const;

                    /**
                     * 设置事件参与者

<li> **TENANT** </li>  租户
<li> **USER** </li>  用户
                     * @param _participant 事件参与者

<li> **TENANT** </li>  租户
<li> **USER** </li>  用户
                     * 
                     */
                    void SetParticipant(const std::string& _participant);

                    /**
                     * 判断参数 Participant 是否已赋值
                     * @return Participant 是否已赋值
                     * 
                     */
                    bool ParticipantHasBeenSet() const;

                    /**
                     * 获取应用clientId
                     * @return ApplicationClientId 应用clientId
                     * 
                     */
                    std::string GetApplicationClientId() const;

                    /**
                     * 设置应用clientId
                     * @param _applicationClientId 应用clientId
                     * 
                     */
                    void SetApplicationClientId(const std::string& _applicationClientId);

                    /**
                     * 判断参数 ApplicationClientId 是否已赋值
                     * @return ApplicationClientId 是否已赋值
                     * 
                     */
                    bool ApplicationClientIdHasBeenSet() const;

                    /**
                     * 获取应用名称
                     * @return ApplicationName 应用名称
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置应用名称
                     * @param _applicationName 应用名称
                     * 
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     * 
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取认证源ID
                     * @return AuthSourceId 认证源ID
                     * 
                     */
                    std::string GetAuthSourceId() const;

                    /**
                     * 设置认证源ID
                     * @param _authSourceId 认证源ID
                     * 
                     */
                    void SetAuthSourceId(const std::string& _authSourceId);

                    /**
                     * 判断参数 AuthSourceId 是否已赋值
                     * @return AuthSourceId 是否已赋值
                     * 
                     */
                    bool AuthSourceIdHasBeenSet() const;

                    /**
                     * 获取认证源名称
                     * @return AuthSourceName 认证源名称
                     * 
                     */
                    std::string GetAuthSourceName() const;

                    /**
                     * 设置认证源名称
                     * @param _authSourceName 认证源名称
                     * 
                     */
                    void SetAuthSourceName(const std::string& _authSourceName);

                    /**
                     * 判断参数 AuthSourceName 是否已赋值
                     * @return AuthSourceName 是否已赋值
                     * 
                     */
                    bool AuthSourceNameHasBeenSet() const;

                    /**
                     * 获取认证源类型
                     * @return AuthSourceType 认证源类型
                     * 
                     */
                    std::string GetAuthSourceType() const;

                    /**
                     * 设置认证源类型
                     * @param _authSourceType 认证源类型
                     * 
                     */
                    void SetAuthSourceType(const std::string& _authSourceType);

                    /**
                     * 判断参数 AuthSourceType 是否已赋值
                     * @return AuthSourceType 是否已赋值
                     * 
                     */
                    bool AuthSourceTypeHasBeenSet() const;

                    /**
                     * 获取认证源类别
                     * @return AuthSourceCategory 认证源类别
                     * 
                     */
                    std::string GetAuthSourceCategory() const;

                    /**
                     * 设置认证源类别
                     * @param _authSourceCategory 认证源类别
                     * 
                     */
                    void SetAuthSourceCategory(const std::string& _authSourceCategory);

                    /**
                     * 判断参数 AuthSourceCategory 是否已赋值
                     * @return AuthSourceCategory 是否已赋值
                     * 
                     */
                    bool AuthSourceCategoryHasBeenSet() const;

                    /**
                     * 获取IP地址
                     * @return Ip IP地址
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置IP地址
                     * @param _ip IP地址
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取用户代理
                     * @return UserAgent 用户代理
                     * 
                     */
                    std::string GetUserAgent() const;

                    /**
                     * 设置用户代理
                     * @param _userAgent 用户代理
                     * 
                     */
                    void SetUserAgent(const std::string& _userAgent);

                    /**
                     * 判断参数 UserAgent 是否已赋值
                     * @return UserAgent 是否已赋值
                     * 
                     */
                    bool UserAgentHasBeenSet() const;

                    /**
                     * 获取用户ID
                     * @return UserId 用户ID
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户ID
                     * @param _userId 用户ID
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Detail 详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDetail() const;

                    /**
                     * 设置详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _detail 详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDetail(const std::string& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取日志结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActionResult 日志结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetActionResult() const;

                    /**
                     * 设置日志结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _actionResult 日志结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActionResult(const std::string& _actionResult);

                    /**
                     * 判断参数 ActionResult 是否已赋值
                     * @return ActionResult 是否已赋值
                     * 
                     */
                    bool ActionResultHasBeenSet() const;

                private:

                    /**
                     * 日志标识
                     */
                    std::string m_logId;
                    bool m_logIdHasBeenSet;

                    /**
                     * 租户ID
                     */
                    std::string m_tenantId;
                    bool m_tenantIdHasBeenSet;

                    /**
                     * 用户池ID
                     */
                    std::string m_userStoreId;
                    bool m_userStoreIdHasBeenSet;

                    /**
                     * 事件编码
                     */
                    std::string m_eventCode;
                    bool m_eventCodeHasBeenSet;

                    /**
                     * 事件发生时间戳，单位：毫秒
                     */
                    int64_t m_eventDate;
                    bool m_eventDateHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 事件参与者

<li> **TENANT** </li>  租户
<li> **USER** </li>  用户
                     */
                    std::string m_participant;
                    bool m_participantHasBeenSet;

                    /**
                     * 应用clientId
                     */
                    std::string m_applicationClientId;
                    bool m_applicationClientIdHasBeenSet;

                    /**
                     * 应用名称
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * 认证源ID
                     */
                    std::string m_authSourceId;
                    bool m_authSourceIdHasBeenSet;

                    /**
                     * 认证源名称
                     */
                    std::string m_authSourceName;
                    bool m_authSourceNameHasBeenSet;

                    /**
                     * 认证源类型
                     */
                    std::string m_authSourceType;
                    bool m_authSourceTypeHasBeenSet;

                    /**
                     * 认证源类别
                     */
                    std::string m_authSourceCategory;
                    bool m_authSourceCategoryHasBeenSet;

                    /**
                     * IP地址
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 用户代理
                     */
                    std::string m_userAgent;
                    bool m_userAgentHasBeenSet;

                    /**
                     * 用户ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * 日志结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_actionResult;
                    bool m_actionResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_LOGMESSAGE_H_
