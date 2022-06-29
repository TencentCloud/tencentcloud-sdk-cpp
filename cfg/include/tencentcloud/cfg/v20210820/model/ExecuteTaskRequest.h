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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_EXECUTETASKREQUEST_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_EXECUTETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * ExecuteTask请求参数结构体
                */
                class ExecuteTaskRequest : public AbstractModel
                {
                public:
                    ExecuteTaskRequest();
                    ~ExecuteTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要执行的任务ID
                     * @return TaskId 需要执行的任务ID
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置需要执行的任务ID
                     * @param TaskId 需要执行的任务ID
                     */
                    void SetTaskId(const int64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * 需要执行的任务ID
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_EXECUTETASKREQUEST_H_
