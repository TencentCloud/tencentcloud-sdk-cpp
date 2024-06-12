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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_DESCRIBETASKSTATUSREQUEST_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_DESCRIBETASKSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Asr
    {
        namespace V20190614
        {
            namespace Model
            {
                /**
                * DescribeTaskStatus请求参数结构体
                */
                class DescribeTaskStatusRequest : public AbstractModel
                {
                public:
                    DescribeTaskStatusRequest();
                    ~DescribeTaskStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取从CreateRecTask接口获取的TaskId，用于获取任务状态与结果。
**注意：TaskId有效期为24小时，超过24小时的TaskId请不要再查询。**
                     * @return TaskId 从CreateRecTask接口获取的TaskId，用于获取任务状态与结果。
**注意：TaskId有效期为24小时，超过24小时的TaskId请不要再查询。**
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置从CreateRecTask接口获取的TaskId，用于获取任务状态与结果。
**注意：TaskId有效期为24小时，超过24小时的TaskId请不要再查询。**
                     * @param _taskId 从CreateRecTask接口获取的TaskId，用于获取任务状态与结果。
**注意：TaskId有效期为24小时，超过24小时的TaskId请不要再查询。**
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
                     * 从CreateRecTask接口获取的TaskId，用于获取任务状态与结果。
**注意：TaskId有效期为24小时，超过24小时的TaskId请不要再查询。**
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_DESCRIBETASKSTATUSREQUEST_H_
