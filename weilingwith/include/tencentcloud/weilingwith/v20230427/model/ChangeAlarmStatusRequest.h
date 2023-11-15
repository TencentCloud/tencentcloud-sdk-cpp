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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_CHANGEALARMSTATUSREQUEST_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_CHANGEALARMSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * ChangeAlarmStatus请求参数结构体
                */
                class ChangeAlarmStatusRequest : public AbstractModel
                {
                public:
                    ChangeAlarmStatusRequest();
                    ~ChangeAlarmStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取告警的id，返回的列表中的id
                     * @return Id 告警的id，返回的列表中的id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置告警的id，返回的列表中的id
                     * @param _id 告警的id，返回的列表中的id
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取告警状态 processed unprocessed processing misreport shield
                     * @return Status 告警状态 processed unprocessed processing misreport shield
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置告警状态 processed unprocessed processing misreport shield
                     * @param _status 告警状态 processed unprocessed processing misreport shield
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取告警处理时间
                     * @return ProcessTime 告警处理时间
                     * 
                     */
                    int64_t GetProcessTime() const;

                    /**
                     * 设置告警处理时间
                     * @param _processTime 告警处理时间
                     * 
                     */
                    void SetProcessTime(const int64_t& _processTime);

                    /**
                     * 判断参数 ProcessTime 是否已赋值
                     * @return ProcessTime 是否已赋值
                     * 
                     */
                    bool ProcessTimeHasBeenSet() const;

                    /**
                     * 获取处理类型
                     * @return ProcessType 处理类型
                     * 
                     */
                    std::string GetProcessType() const;

                    /**
                     * 设置处理类型
                     * @param _processType 处理类型
                     * 
                     */
                    void SetProcessType(const std::string& _processType);

                    /**
                     * 判断参数 ProcessType 是否已赋值
                     * @return ProcessType 是否已赋值
                     * 
                     */
                    bool ProcessTypeHasBeenSet() const;

                    /**
                     * 获取工作空间id
                     * @return WorkspaceId 工作空间id
                     * 
                     */
                    int64_t GetWorkspaceId() const;

                    /**
                     * 设置工作空间id
                     * @param _workspaceId 工作空间id
                     * 
                     */
                    void SetWorkspaceId(const int64_t& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取当前操作用户id
                     * @return UserId 当前操作用户id
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置当前操作用户id
                     * @param _userId 当前操作用户id
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
                     * 获取当前操作用户名称
                     * @return UserName 当前操作用户名称
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置当前操作用户名称
                     * @param _userName 当前操作用户名称
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取应用token
                     * @return ApplicationToken 应用token
                     * 
                     */
                    std::string GetApplicationToken() const;

                    /**
                     * 设置应用token
                     * @param _applicationToken 应用token
                     * 
                     */
                    void SetApplicationToken(const std::string& _applicationToken);

                    /**
                     * 判断参数 ApplicationToken 是否已赋值
                     * @return ApplicationToken 是否已赋值
                     * 
                     */
                    bool ApplicationTokenHasBeenSet() const;

                    /**
                     * 获取平台告警处理人
                     * @return Processor 平台告警处理人
                     * 
                     */
                    std::string GetProcessor() const;

                    /**
                     * 设置平台告警处理人
                     * @param _processor 平台告警处理人
                     * 
                     */
                    void SetProcessor(const std::string& _processor);

                    /**
                     * 判断参数 Processor 是否已赋值
                     * @return Processor 是否已赋值
                     * 
                     */
                    bool ProcessorHasBeenSet() const;

                    /**
                     * 获取告警处理的描述信息
                     * @return ProcessDescription 告警处理的描述信息
                     * 
                     */
                    std::string GetProcessDescription() const;

                    /**
                     * 设置告警处理的描述信息
                     * @param _processDescription 告警处理的描述信息
                     * 
                     */
                    void SetProcessDescription(const std::string& _processDescription);

                    /**
                     * 判断参数 ProcessDescription 是否已赋值
                     * @return ProcessDescription 是否已赋值
                     * 
                     */
                    bool ProcessDescriptionHasBeenSet() const;

                    /**
                     * 获取告警处理的扩展信息，可以为JSON字符串
                     * @return ProcessExtend 告警处理的扩展信息，可以为JSON字符串
                     * 
                     */
                    std::string GetProcessExtend() const;

                    /**
                     * 设置告警处理的扩展信息，可以为JSON字符串
                     * @param _processExtend 告警处理的扩展信息，可以为JSON字符串
                     * 
                     */
                    void SetProcessExtend(const std::string& _processExtend);

                    /**
                     * 判断参数 ProcessExtend 是否已赋值
                     * @return ProcessExtend 是否已赋值
                     * 
                     */
                    bool ProcessExtendHasBeenSet() const;

                    /**
                     * 获取扩展字段1，目前存的应用告警处理人
                     * @return ExtendOne 扩展字段1，目前存的应用告警处理人
                     * 
                     */
                    std::string GetExtendOne() const;

                    /**
                     * 设置扩展字段1，目前存的应用告警处理人
                     * @param _extendOne 扩展字段1，目前存的应用告警处理人
                     * 
                     */
                    void SetExtendOne(const std::string& _extendOne);

                    /**
                     * 判断参数 ExtendOne 是否已赋值
                     * @return ExtendOne 是否已赋值
                     * 
                     */
                    bool ExtendOneHasBeenSet() const;

                    /**
                     * 获取应用id
                     * @return ApplicationId 应用id
                     * 
                     */
                    int64_t GetApplicationId() const;

                    /**
                     * 设置应用id
                     * @param _applicationId 应用id
                     * 
                     */
                    void SetApplicationId(const int64_t& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                private:

                    /**
                     * 告警的id，返回的列表中的id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 告警状态 processed unprocessed processing misreport shield
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 告警处理时间
                     */
                    int64_t m_processTime;
                    bool m_processTimeHasBeenSet;

                    /**
                     * 处理类型
                     */
                    std::string m_processType;
                    bool m_processTypeHasBeenSet;

                    /**
                     * 工作空间id
                     */
                    int64_t m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * 当前操作用户id
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 当前操作用户名称
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 应用token
                     */
                    std::string m_applicationToken;
                    bool m_applicationTokenHasBeenSet;

                    /**
                     * 平台告警处理人
                     */
                    std::string m_processor;
                    bool m_processorHasBeenSet;

                    /**
                     * 告警处理的描述信息
                     */
                    std::string m_processDescription;
                    bool m_processDescriptionHasBeenSet;

                    /**
                     * 告警处理的扩展信息，可以为JSON字符串
                     */
                    std::string m_processExtend;
                    bool m_processExtendHasBeenSet;

                    /**
                     * 扩展字段1，目前存的应用告警处理人
                     */
                    std::string m_extendOne;
                    bool m_extendOneHasBeenSet;

                    /**
                     * 应用id
                     */
                    int64_t m_applicationId;
                    bool m_applicationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_CHANGEALARMSTATUSREQUEST_H_
