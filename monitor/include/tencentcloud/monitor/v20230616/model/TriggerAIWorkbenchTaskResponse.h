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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_TRIGGERAIWORKBENCHTASKRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_TRIGGERAIWORKBENCHTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * TriggerAIWorkbenchTask返回参数结构体
                */
                class TriggerAIWorkbenchTaskResponse : public AbstractModel
                {
                public:
                    TriggerAIWorkbenchTaskResponse();
                    ~TriggerAIWorkbenchTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>执行 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionId <p>执行 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionId() const;

                    /**
                     * 判断参数 ExecutionId 是否已赋值
                     * @return ExecutionId 是否已赋值
                     * 
                     */
                    bool ExecutionIdHasBeenSet() const;

                    /**
                     * 获取<p>会话 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SessionId <p>会话 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>运行 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunId <p>运行 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunId() const;

                    /**
                     * 判断参数 RunId 是否已赋值
                     * @return RunId 是否已赋值
                     * 
                     */
                    bool RunIdHasBeenSet() const;

                private:

                    /**
                     * <p>执行 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionId;
                    bool m_executionIdHasBeenSet;

                    /**
                     * <p>会话 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>运行 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runId;
                    bool m_runIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_TRIGGERAIWORKBENCHTASKRESPONSE_H_
