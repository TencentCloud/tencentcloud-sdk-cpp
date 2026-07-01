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

#ifndef TENCENTCLOUD_DATAAGENT_V20250513_MODEL_EXECUTEAGENTAPIRESPONSE_H_
#define TENCENTCLOUD_DATAAGENT_V20250513_MODEL_EXECUTEAGENTAPIRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dataagent
    {
        namespace V20250513
        {
            namespace Model
            {
                /**
                * ExecuteAgentApi返回参数结构体
                */
                class ExecuteAgentApiResponse : public AbstractModel
                {
                public:
                    ExecuteAgentApiResponse();
                    ~ExecuteAgentApiResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>请求路径</p>
                     * @return RequestPath <p>请求路径</p>
                     * 
                     */
                    std::string GetRequestPath() const;

                    /**
                     * 判断参数 RequestPath 是否已赋值
                     * @return RequestPath 是否已赋值
                     * 
                     */
                    bool RequestPathHasBeenSet() const;

                    /**
                     * 获取<p>返回的具体指</p>
                     * @return AgentData <p>返回的具体指</p>
                     * 
                     */
                    std::string GetAgentData() const;

                    /**
                     * 判断参数 AgentData 是否已赋值
                     * @return AgentData 是否已赋值
                     * 
                     */
                    bool AgentDataHasBeenSet() const;

                    /**
                     * 获取<p>错误码信息</p>
                     * @return ErrorMsg <p>错误码信息</p>
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                private:

                    /**
                     * <p>请求路径</p>
                     */
                    std::string m_requestPath;
                    bool m_requestPathHasBeenSet;

                    /**
                     * <p>返回的具体指</p>
                     */
                    std::string m_agentData;
                    bool m_agentDataHasBeenSet;

                    /**
                     * <p>错误码信息</p>
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATAAGENT_V20250513_MODEL_EXECUTEAGENTAPIRESPONSE_H_
