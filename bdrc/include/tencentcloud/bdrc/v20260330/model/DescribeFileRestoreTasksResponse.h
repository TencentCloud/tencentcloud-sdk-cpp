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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEFILERESTORETASKSRESPONSE_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEFILERESTORETASKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bdrc/v20260330/model/RestoreTask.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * DescribeFileRestoreTasks返回参数结构体
                */
                class DescribeFileRestoreTasksResponse : public AbstractModel
                {
                public:
                    DescribeFileRestoreTasksResponse();
                    ~DescribeFileRestoreTasksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合条件的总数量。
                     * @return TotalCount 符合条件的总数量。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取恢复任务列表详情。
                     * @return RestoreTaskSet 恢复任务列表详情。
                     * 
                     */
                    std::vector<RestoreTask> GetRestoreTaskSet() const;

                    /**
                     * 判断参数 RestoreTaskSet 是否已赋值
                     * @return RestoreTaskSet 是否已赋值
                     * 
                     */
                    bool RestoreTaskSetHasBeenSet() const;

                private:

                    /**
                     * 符合条件的总数量。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 恢复任务列表详情。
                     */
                    std::vector<RestoreTask> m_restoreTaskSet;
                    bool m_restoreTaskSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEFILERESTORETASKSRESPONSE_H_
