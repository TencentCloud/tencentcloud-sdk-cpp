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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_REDOTASKEXECUTEREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_REDOTASKEXECUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * RedoTaskExecute请求参数结构体
                */
                class RedoTaskExecuteRequest : public AbstractModel
                {
                public:
                    RedoTaskExecuteRequest();
                    ~RedoTaskExecuteRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务批次ID
                     * @return BatchId 任务批次ID
                     * 
                     */
                    std::string GetBatchId() const;

                    /**
                     * 设置任务批次ID
                     * @param _batchId 任务批次ID
                     * 
                     */
                    void SetBatchId(const std::string& _batchId);

                    /**
                     * 判断参数 BatchId 是否已赋值
                     * @return BatchId 是否已赋值
                     * 
                     */
                    bool BatchIdHasBeenSet() const;

                    /**
                     * 获取任务执行ID
                     * @return ExecuteId 任务执行ID
                     * 
                     */
                    std::string GetExecuteId() const;

                    /**
                     * 设置任务执行ID
                     * @param _executeId 任务执行ID
                     * 
                     */
                    void SetExecuteId(const std::string& _executeId);

                    /**
                     * 判断参数 ExecuteId 是否已赋值
                     * @return ExecuteId 是否已赋值
                     * 
                     */
                    bool ExecuteIdHasBeenSet() const;

                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param _taskId 任务ID
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
                     * 任务批次ID
                     */
                    std::string m_batchId;
                    bool m_batchIdHasBeenSet;

                    /**
                     * 任务执行ID
                     */
                    std::string m_executeId;
                    bool m_executeIdHasBeenSet;

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_REDOTASKEXECUTEREQUEST_H_
