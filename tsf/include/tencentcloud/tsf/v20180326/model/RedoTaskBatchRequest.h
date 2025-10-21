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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_REDOTASKBATCHREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_REDOTASKBATCHREQUEST_H_

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
                * RedoTaskBatch请求参数结构体
                */
                class RedoTaskBatchRequest : public AbstractModel
                {
                public:
                    RedoTaskBatchRequest();
                    ~RedoTaskBatchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务ID。在[任务管理](https://console.cloud.tencent.com/tsf/tct?rid=1)列表页查看任务ID。
                     * @return TaskId 任务ID。在[任务管理](https://console.cloud.tencent.com/tsf/tct?rid=1)列表页查看任务ID。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID。在[任务管理](https://console.cloud.tencent.com/tsf/tct?rid=1)列表页查看任务ID。
                     * @param _taskId 任务ID。在[任务管理](https://console.cloud.tencent.com/tsf/tct?rid=1)列表页查看任务ID。
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取任务批次ID。在[任务管理](https://console.cloud.tencent.com/tsf/tct?rid=1)页面点击任务ID进入任务详情，进入执行记录列表页，第一列即为任务批次ID。
                     * @return BatchId 任务批次ID。在[任务管理](https://console.cloud.tencent.com/tsf/tct?rid=1)页面点击任务ID进入任务详情，进入执行记录列表页，第一列即为任务批次ID。
                     * 
                     */
                    std::string GetBatchId() const;

                    /**
                     * 设置任务批次ID。在[任务管理](https://console.cloud.tencent.com/tsf/tct?rid=1)页面点击任务ID进入任务详情，进入执行记录列表页，第一列即为任务批次ID。
                     * @param _batchId 任务批次ID。在[任务管理](https://console.cloud.tencent.com/tsf/tct?rid=1)页面点击任务ID进入任务详情，进入执行记录列表页，第一列即为任务批次ID。
                     * 
                     */
                    void SetBatchId(const std::string& _batchId);

                    /**
                     * 判断参数 BatchId 是否已赋值
                     * @return BatchId 是否已赋值
                     * 
                     */
                    bool BatchIdHasBeenSet() const;

                private:

                    /**
                     * 任务ID。在[任务管理](https://console.cloud.tencent.com/tsf/tct?rid=1)列表页查看任务ID。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务批次ID。在[任务管理](https://console.cloud.tencent.com/tsf/tct?rid=1)页面点击任务ID进入任务详情，进入执行记录列表页，第一列即为任务批次ID。
                     */
                    std::string m_batchId;
                    bool m_batchIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_REDOTASKBATCHREQUEST_H_
