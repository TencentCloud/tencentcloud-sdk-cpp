/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_MODIFYAGENTREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_MODIFYAGENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/Agent.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * ModifyAgent请求参数结构体
                */
                class ModifyAgentRequest : public AbstractModel
                {
                public:
                    ModifyAgentRequest();
                    ~ModifyAgentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要修改的应用ID
                     * @return AppBizId 需要修改的应用ID
                     * 
                     */
                    std::string GetAppBizId() const;

                    /**
                     * 设置需要修改的应用ID
                     * @param _appBizId 需要修改的应用ID
                     * 
                     */
                    void SetAppBizId(const std::string& _appBizId);

                    /**
                     * 判断参数 AppBizId 是否已赋值
                     * @return AppBizId 是否已赋值
                     * 
                     */
                    bool AppBizIdHasBeenSet() const;

                    /**
                     * 获取修改后的Agent的信息
                     * @return Agent 修改后的Agent的信息
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置修改后的Agent的信息
                     * @param _agent 修改后的Agent的信息
                     * 
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     * 
                     */
                    bool AgentHasBeenSet() const;

                private:

                    /**
                     * 需要修改的应用ID
                     */
                    std::string m_appBizId;
                    bool m_appBizIdHasBeenSet;

                    /**
                     * 修改后的Agent的信息
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_MODIFYAGENTREQUEST_H_
