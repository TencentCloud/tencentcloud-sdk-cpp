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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBETASKINFOREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBETASKINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeTaskInfo请求参数结构体
                */
                class DescribeTaskInfoRequest : public AbstractModel
                {
                public:
                    DescribeTaskInfoRequest();
                    ~DescribeTaskInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务 ID, 请通过接口[DescribeTaskList](https://cloud.tencent.com/document/product/239/39374) 的返回参数 **Tasks** 的子参数 **TaskId** 获取。
                     * @return TaskId 任务 ID, 请通过接口[DescribeTaskList](https://cloud.tencent.com/document/product/239/39374) 的返回参数 **Tasks** 的子参数 **TaskId** 获取。
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置任务 ID, 请通过接口[DescribeTaskList](https://cloud.tencent.com/document/product/239/39374) 的返回参数 **Tasks** 的子参数 **TaskId** 获取。
                     * @param _taskId 任务 ID, 请通过接口[DescribeTaskList](https://cloud.tencent.com/document/product/239/39374) 的返回参数 **Tasks** 的子参数 **TaskId** 获取。
                     * 
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * 任务 ID, 请通过接口[DescribeTaskList](https://cloud.tencent.com/document/product/239/39374) 的返回参数 **Tasks** 的子参数 **TaskId** 获取。
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBETASKINFOREQUEST_H_
