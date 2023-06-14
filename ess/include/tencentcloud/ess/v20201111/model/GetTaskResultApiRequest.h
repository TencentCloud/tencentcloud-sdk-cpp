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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_GETTASKRESULTAPIREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_GETTASKRESULTAPIREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/Agent.h>
#include <tencentcloud/ess/v20201111/model/OrganizationInfo.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * GetTaskResultApi请求参数结构体
                */
                class GetTaskResultApiRequest : public AbstractModel
                {
                public:
                    GetTaskResultApiRequest();
                    ~GetTaskResultApiRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务Id，通过CreateConvertTaskApi得到
                     * @return TaskId 任务Id，通过CreateConvertTaskApi得到
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务Id，通过CreateConvertTaskApi得到
                     * @param _taskId 任务Id，通过CreateConvertTaskApi得到
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取操作人信息,UserId必填
                     * @return Operator 操作人信息,UserId必填
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置操作人信息,UserId必填
                     * @param _operator 操作人信息,UserId必填
                     * 
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取应用号信息
                     * @return Agent 应用号信息
                     * @deprecated
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置应用号信息
                     * @param _agent 应用号信息
                     * @deprecated
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     * @deprecated
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取暂未开放
                     * @return Organization 暂未开放
                     * @deprecated
                     */
                    OrganizationInfo GetOrganization() const;

                    /**
                     * 设置暂未开放
                     * @param _organization 暂未开放
                     * @deprecated
                     */
                    void SetOrganization(const OrganizationInfo& _organization);

                    /**
                     * 判断参数 Organization 是否已赋值
                     * @return Organization 是否已赋值
                     * @deprecated
                     */
                    bool OrganizationHasBeenSet() const;

                private:

                    /**
                     * 任务Id，通过CreateConvertTaskApi得到
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 操作人信息,UserId必填
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 应用号信息
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 暂未开放
                     */
                    OrganizationInfo m_organization;
                    bool m_organizationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_GETTASKRESULTAPIREQUEST_H_
