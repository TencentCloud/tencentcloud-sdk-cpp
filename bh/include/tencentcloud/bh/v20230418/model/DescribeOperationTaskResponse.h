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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBEOPERATIONTASKRESPONSE_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBEOPERATIONTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bh/v20230418/model/OperationTask.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DescribeOperationTask返回参数结构体
                */
                class DescribeOperationTaskResponse : public AbstractModel
                {
                public:
                    DescribeOperationTaskResponse();
                    ~DescribeOperationTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取运维任务列表
                     * @return OperationTasks 运维任务列表
                     * 
                     */
                    std::vector<OperationTask> GetOperationTasks() const;

                    /**
                     * 判断参数 OperationTasks 是否已赋值
                     * @return OperationTasks 是否已赋值
                     * 
                     */
                    bool OperationTasksHasBeenSet() const;

                    /**
                     * 获取任务总数
                     * @return TotalCount 任务总数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 运维任务列表
                     */
                    std::vector<OperationTask> m_operationTasks;
                    bool m_operationTasksHasBeenSet;

                    /**
                     * 任务总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBEOPERATIONTASKRESPONSE_H_
