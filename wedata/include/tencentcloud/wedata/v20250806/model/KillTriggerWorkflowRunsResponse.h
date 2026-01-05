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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_KILLTRIGGERWORKFLOWRUNSRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_KILLTRIGGERWORKFLOWRUNSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/ExecutionActionBrief.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * KillTriggerWorkflowRuns返回参数结构体
                */
                class KillTriggerWorkflowRunsResponse : public AbstractModel
                {
                public:
                    KillTriggerWorkflowRunsResponse();
                    ~KillTriggerWorkflowRunsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取工作流运行操作结果
                     * @return Data 工作流运行操作结果
                     * 
                     */
                    std::vector<ExecutionActionBrief> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 工作流运行操作结果
                     */
                    std::vector<ExecutionActionBrief> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_KILLTRIGGERWORKFLOWRUNSRESPONSE_H_
