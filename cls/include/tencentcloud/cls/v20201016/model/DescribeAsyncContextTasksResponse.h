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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEASYNCCONTEXTTASKSRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEASYNCCONTEXTTASKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/AsyncContextTask.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeAsyncContextTasks返回参数结构体
                */
                class DescribeAsyncContextTasksResponse : public AbstractModel
                {
                public:
                    DescribeAsyncContextTasksResponse();
                    ~DescribeAsyncContextTasksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取异步上下文任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AsyncContextTasks 异步上下文任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AsyncContextTask> GetAsyncContextTasks() const;

                    /**
                     * 判断参数 AsyncContextTasks 是否已赋值
                     * @return AsyncContextTasks 是否已赋值
                     */
                    bool AsyncContextTasksHasBeenSet() const;

                    /**
                     * 获取异步上下文任务的总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 异步上下文任务的总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 异步上下文任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AsyncContextTask> m_asyncContextTasks;
                    bool m_asyncContextTasksHasBeenSet;

                    /**
                     * 异步上下文任务的总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEASYNCCONTEXTTASKSRESPONSE_H_
