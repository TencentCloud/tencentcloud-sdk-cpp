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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_LISTAIWORKBENCHEXECUTIONSRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_LISTAIWORKBENCHEXECUTIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20230616/model/ExecutionInfo.h>
#include <tencentcloud/monitor/v20230616/model/PageByNumResult.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * ListAIWorkbenchExecutions返回参数结构体
                */
                class ListAIWorkbenchExecutionsResponse : public AbstractModel
                {
                public:
                    ListAIWorkbenchExecutionsResponse();
                    ~ListAIWorkbenchExecutionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>执行列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Executions <p>执行列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ExecutionInfo> GetExecutions() const;

                    /**
                     * 判断参数 Executions 是否已赋值
                     * @return Executions 是否已赋值
                     * 
                     */
                    bool ExecutionsHasBeenSet() const;

                    /**
                     * 获取<p>分页结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageResult <p>分页结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PageByNumResult GetPageResult() const;

                    /**
                     * 判断参数 PageResult 是否已赋值
                     * @return PageResult 是否已赋值
                     * 
                     */
                    bool PageResultHasBeenSet() const;

                private:

                    /**
                     * <p>执行列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ExecutionInfo> m_executions;
                    bool m_executionsHasBeenSet;

                    /**
                     * <p>分页结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PageByNumResult m_pageResult;
                    bool m_pageResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_LISTAIWORKBENCHEXECUTIONSRESPONSE_H_
