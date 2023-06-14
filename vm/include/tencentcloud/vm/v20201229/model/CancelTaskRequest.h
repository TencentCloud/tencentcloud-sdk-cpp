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

#ifndef TENCENTCLOUD_VM_V20201229_MODEL_CANCELTASKREQUEST_H_
#define TENCENTCLOUD_VM_V20201229_MODEL_CANCELTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * CancelTask请求参数结构体
                */
                class CancelTaskRequest : public AbstractModel
                {
                public:
                    CancelTaskRequest();
                    ~CancelTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取该字段表示创建视频审核任务后返回的任务ID（在Results参数中），用于标识需要取消的审核任务。
                     * @return TaskId 该字段表示创建视频审核任务后返回的任务ID（在Results参数中），用于标识需要取消的审核任务。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置该字段表示创建视频审核任务后返回的任务ID（在Results参数中），用于标识需要取消的审核任务。
                     * @param _taskId 该字段表示创建视频审核任务后返回的任务ID（在Results参数中），用于标识需要取消的审核任务。
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * 该字段表示创建视频审核任务后返回的任务ID（在Results参数中），用于标识需要取消的审核任务。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20201229_MODEL_CANCELTASKREQUEST_H_
