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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEAIWORKBENCHEXECUTIONREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEAIWORKBENCHEXECUTIONREQUEST_H_

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
                * DescribeAIWorkbenchExecution请求参数结构体
                */
                class DescribeAIWorkbenchExecutionRequest : public AbstractModel
                {
                public:
                    DescribeAIWorkbenchExecutionRequest();
                    ~DescribeAIWorkbenchExecutionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>执行 ID</p>
                     * @return ExecutionId <p>执行 ID</p>
                     * 
                     */
                    std::string GetExecutionId() const;

                    /**
                     * 设置<p>执行 ID</p>
                     * @param _executionId <p>执行 ID</p>
                     * 
                     */
                    void SetExecutionId(const std::string& _executionId);

                    /**
                     * 判断参数 ExecutionId 是否已赋值
                     * @return ExecutionId 是否已赋值
                     * 
                     */
                    bool ExecutionIdHasBeenSet() const;

                private:

                    /**
                     * <p>执行 ID</p>
                     */
                    std::string m_executionId;
                    bool m_executionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEAIWORKBENCHEXECUTIONREQUEST_H_
