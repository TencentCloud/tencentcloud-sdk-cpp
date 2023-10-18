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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_RUNSQLGATEWAYSTATEMENTRESPONSE_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_RUNSQLGATEWAYSTATEMENTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * RunSqlGatewayStatement返回参数结构体
                */
                class RunSqlGatewayStatementResponse : public AbstractModel
                {
                public:
                    RunSqlGatewayStatementResponse();
                    ~RunSqlGatewayStatementResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorMessage 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetErrorMessage() const;

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取会话id，若入参未传，则返回自动创建的会话id，若入参已经传递，则返回值与原传入值一致
                     * @return SessionId 会话id，若入参未传，则返回自动创建的会话id，若入参已经传递，则返回值与原传入值一致
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取返回执行id，可以根据该执行id和会话id获取执行结果
                     * @return OperationHandleId 返回执行id，可以根据该执行id和会话id获取执行结果
                     * 
                     */
                    std::string GetOperationHandleId() const;

                    /**
                     * 判断参数 OperationHandleId 是否已赋值
                     * @return OperationHandleId 是否已赋值
                     * 
                     */
                    bool OperationHandleIdHasBeenSet() const;

                private:

                    /**
                     * 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * 会话id，若入参未传，则返回自动创建的会话id，若入参已经传递，则返回值与原传入值一致
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 返回执行id，可以根据该执行id和会话id获取执行结果
                     */
                    std::string m_operationHandleId;
                    bool m_operationHandleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_RUNSQLGATEWAYSTATEMENTRESPONSE_H_
