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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATETASKVERSIONDSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATETASKVERSIONDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/BatchCreateTaskVersionDTO.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * CreateTaskVersionDs请求参数结构体
                */
                class CreateTaskVersionDsRequest : public AbstractModel
                {
                public:
                    CreateTaskVersionDsRequest();
                    ~CreateTaskVersionDsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务id
                     * @return Task 任务id
                     * 
                     */
                    BatchCreateTaskVersionDTO GetTask() const;

                    /**
                     * 设置任务id
                     * @param _task 任务id
                     * 
                     */
                    void SetTask(const BatchCreateTaskVersionDTO& _task);

                    /**
                     * 判断参数 Task 是否已赋值
                     * @return Task 是否已赋值
                     * 
                     */
                    bool TaskHasBeenSet() const;

                    /**
                     * 获取是否需要校验父任务已经提交到调度
                     * @return NeedCheckParentSubmitted 是否需要校验父任务已经提交到调度
                     * 
                     */
                    bool GetNeedCheckParentSubmitted() const;

                    /**
                     * 设置是否需要校验父任务已经提交到调度
                     * @param _needCheckParentSubmitted 是否需要校验父任务已经提交到调度
                     * 
                     */
                    void SetNeedCheckParentSubmitted(const bool& _needCheckParentSubmitted);

                    /**
                     * 判断参数 NeedCheckParentSubmitted 是否已赋值
                     * @return NeedCheckParentSubmitted 是否已赋值
                     * 
                     */
                    bool NeedCheckParentSubmittedHasBeenSet() const;

                    /**
                     * 获取是否自动运行
                     * @return AutoRun 是否自动运行
                     * 
                     */
                    bool GetAutoRun() const;

                    /**
                     * 设置是否自动运行
                     * @param _autoRun 是否自动运行
                     * 
                     */
                    void SetAutoRun(const bool& _autoRun);

                    /**
                     * 判断参数 AutoRun 是否已赋值
                     * @return AutoRun 是否已赋值
                     * 
                     */
                    bool AutoRunHasBeenSet() const;

                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
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
                     * 获取告警方式:email-邮件;sms-短信;wecom-企业微信
                     * @return AlarmWays 告警方式:email-邮件;sms-短信;wecom-企业微信
                     * 
                     */
                    std::string GetAlarmWays() const;

                    /**
                     * 设置告警方式:email-邮件;sms-短信;wecom-企业微信
                     * @param _alarmWays 告警方式:email-邮件;sms-短信;wecom-企业微信
                     * 
                     */
                    void SetAlarmWays(const std::string& _alarmWays);

                    /**
                     * 判断参数 AlarmWays 是否已赋值
                     * @return AlarmWays 是否已赋值
                     * 
                     */
                    bool AlarmWaysHasBeenSet() const;

                    /**
                     * 获取告警对象:1-项目管理员，2-任务责任人
                     * @return AlarmRecipientTypes 告警对象:1-项目管理员，2-任务责任人
                     * 
                     */
                    std::string GetAlarmRecipientTypes() const;

                    /**
                     * 设置告警对象:1-项目管理员，2-任务责任人
                     * @param _alarmRecipientTypes 告警对象:1-项目管理员，2-任务责任人
                     * 
                     */
                    void SetAlarmRecipientTypes(const std::string& _alarmRecipientTypes);

                    /**
                     * 判断参数 AlarmRecipientTypes 是否已赋值
                     * @return AlarmRecipientTypes 是否已赋值
                     * 
                     */
                    bool AlarmRecipientTypesHasBeenSet() const;

                    /**
                     * 获取是否需要校验循环依赖，默认为 true，如果使用了 CheckTaskCycleLink 和 CheckTaskCycleConfiguration 两个接口校验成功可以传 false，后台服务器不再做校验
                     * @return EnableCheckTaskCycleLink 是否需要校验循环依赖，默认为 true，如果使用了 CheckTaskCycleLink 和 CheckTaskCycleConfiguration 两个接口校验成功可以传 false，后台服务器不再做校验
                     * 
                     */
                    bool GetEnableCheckTaskCycleLink() const;

                    /**
                     * 设置是否需要校验循环依赖，默认为 true，如果使用了 CheckTaskCycleLink 和 CheckTaskCycleConfiguration 两个接口校验成功可以传 false，后台服务器不再做校验
                     * @param _enableCheckTaskCycleLink 是否需要校验循环依赖，默认为 true，如果使用了 CheckTaskCycleLink 和 CheckTaskCycleConfiguration 两个接口校验成功可以传 false，后台服务器不再做校验
                     * 
                     */
                    void SetEnableCheckTaskCycleLink(const bool& _enableCheckTaskCycleLink);

                    /**
                     * 判断参数 EnableCheckTaskCycleLink 是否已赋值
                     * @return EnableCheckTaskCycleLink 是否已赋值
                     * 
                     */
                    bool EnableCheckTaskCycleLinkHasBeenSet() const;

                private:

                    /**
                     * 任务id
                     */
                    BatchCreateTaskVersionDTO m_task;
                    bool m_taskHasBeenSet;

                    /**
                     * 是否需要校验父任务已经提交到调度
                     */
                    bool m_needCheckParentSubmitted;
                    bool m_needCheckParentSubmittedHasBeenSet;

                    /**
                     * 是否自动运行
                     */
                    bool m_autoRun;
                    bool m_autoRunHasBeenSet;

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 请求来源，WEB 前端；CLIENT 客户端
                     */
                    std::string m_requestFromSource;
                    bool m_requestFromSourceHasBeenSet;

                    /**
                     * 告警方式:email-邮件;sms-短信;wecom-企业微信
                     */
                    std::string m_alarmWays;
                    bool m_alarmWaysHasBeenSet;

                    /**
                     * 告警对象:1-项目管理员，2-任务责任人
                     */
                    std::string m_alarmRecipientTypes;
                    bool m_alarmRecipientTypesHasBeenSet;

                    /**
                     * 是否需要校验循环依赖，默认为 true，如果使用了 CheckTaskCycleLink 和 CheckTaskCycleConfiguration 两个接口校验成功可以传 false，后台服务器不再做校验
                     */
                    bool m_enableCheckTaskCycleLink;
                    bool m_enableCheckTaskCycleLinkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATETASKVERSIONDSREQUEST_H_
