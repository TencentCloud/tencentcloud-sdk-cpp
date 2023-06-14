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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPLICATIONINSTANCECREATETASKSRESPONSE_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPLICATIONINSTANCECREATETASKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/TaskDetail.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DescribeReplicationInstanceCreateTasks返回参数结构体
                */
                class DescribeReplicationInstanceCreateTasksResponse : public AbstractModel
                {
                public:
                    DescribeReplicationInstanceCreateTasksResponse();
                    ~DescribeReplicationInstanceCreateTasksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务详情
                     * @return TaskDetail 任务详情
                     * 
                     */
                    std::vector<TaskDetail> GetTaskDetail() const;

                    /**
                     * 判断参数 TaskDetail 是否已赋值
                     * @return TaskDetail 是否已赋值
                     * 
                     */
                    bool TaskDetailHasBeenSet() const;

                    /**
                     * 获取整体任务状态
                     * @return Status 整体任务状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 任务详情
                     */
                    std::vector<TaskDetail> m_taskDetail;
                    bool m_taskDetailHasBeenSet;

                    /**
                     * 整体任务状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPLICATIONINSTANCECREATETASKSRESPONSE_H_
