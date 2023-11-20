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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBERESTORETASKRESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBERESTORETASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/RestoreTask.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeRestoreTask返回参数结构体
                */
                class DescribeRestoreTaskResponse : public AbstractModel
                {
                public:
                    DescribeRestoreTaskResponse();
                    ~DescribeRestoreTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取回档任务总数量
                     * @return TotalCount 回档任务总数量
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取回档任务记录列表
                     * @return Tasks 回档任务记录列表
                     * 
                     */
                    std::vector<RestoreTask> GetTasks() const;

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                private:

                    /**
                     * 回档任务总数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 回档任务记录列表
                     */
                    std::vector<RestoreTask> m_tasks;
                    bool m_tasksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBERESTORETASKRESPONSE_H_
