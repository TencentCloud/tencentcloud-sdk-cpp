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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBETAGRETENTIONEXECUTIONTASKRESPONSE_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBETAGRETENTIONEXECUTIONTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/RetentionTask.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DescribeTagRetentionExecutionTask返回参数结构体
                */
                class DescribeTagRetentionExecutionTaskResponse : public AbstractModel
                {
                public:
                    DescribeTagRetentionExecutionTaskResponse();
                    ~DescribeTagRetentionExecutionTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取版本保留执行任务列表
                     * @return RetentionTaskList 版本保留执行任务列表
                     * 
                     */
                    std::vector<RetentionTask> GetRetentionTaskList() const;

                    /**
                     * 判断参数 RetentionTaskList 是否已赋值
                     * @return RetentionTaskList 是否已赋值
                     * 
                     */
                    bool RetentionTaskListHasBeenSet() const;

                    /**
                     * 获取版本保留执行任务总数
                     * @return TotalCount 版本保留执行任务总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 版本保留执行任务列表
                     */
                    std::vector<RetentionTask> m_retentionTaskList;
                    bool m_retentionTaskListHasBeenSet;

                    /**
                     * 版本保留执行任务总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBETAGRETENTIONEXECUTIONTASKRESPONSE_H_
