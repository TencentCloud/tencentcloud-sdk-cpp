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

#ifndef TENCENTCLOUD_MSP_V20180319_MODEL_LISTMIGRATIONTASKRESPONSE_H_
#define TENCENTCLOUD_MSP_V20180319_MODEL_LISTMIGRATIONTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/msp/v20180319/model/Task.h>


namespace TencentCloud
{
    namespace Msp
    {
        namespace V20180319
        {
            namespace Model
            {
                /**
                * ListMigrationTask返回参数结构体
                */
                class ListMigrationTaskResponse : public AbstractModel
                {
                public:
                    ListMigrationTaskResponse();
                    ~ListMigrationTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取记录总条数
                     * @return TotalCount 记录总条数
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
                     * 获取迁移任务列表
                     * @return Tasks 迁移任务列表
                     * 
                     */
                    std::vector<Task> GetTasks() const;

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                private:

                    /**
                     * 记录总条数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 迁移任务列表
                     */
                    std::vector<Task> m_tasks;
                    bool m_tasksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MSP_V20180319_MODEL_LISTMIGRATIONTASKRESPONSE_H_
