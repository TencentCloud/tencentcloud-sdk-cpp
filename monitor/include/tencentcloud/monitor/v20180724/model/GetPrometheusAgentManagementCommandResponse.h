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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_GETPROMETHEUSAGENTMANAGEMENTCOMMANDRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_GETPROMETHEUSAGENTMANAGEMENTCOMMANDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/ManagementCommand.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * GetPrometheusAgentManagementCommand返回参数结构体
                */
                class GetPrometheusAgentManagementCommandResponse : public AbstractModel
                {
                public:
                    GetPrometheusAgentManagementCommandResponse();
                    ~GetPrometheusAgentManagementCommandResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Agent 管理命令
                     * @return Command Agent 管理命令
                     * 
                     */
                    ManagementCommand GetCommand() const;

                    /**
                     * 判断参数 Command 是否已赋值
                     * @return Command 是否已赋值
                     * 
                     */
                    bool CommandHasBeenSet() const;

                private:

                    /**
                     * Agent 管理命令
                     */
                    ManagementCommand m_command;
                    bool m_commandHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_GETPROMETHEUSAGENTMANAGEMENTCOMMANDRESPONSE_H_
