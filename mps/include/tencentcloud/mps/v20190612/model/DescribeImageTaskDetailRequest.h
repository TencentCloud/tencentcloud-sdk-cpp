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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEIMAGETASKDETAILREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEIMAGETASKDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeImageTaskDetail请求参数结构体
                */
                class DescribeImageTaskDetailRequest : public AbstractModel
                {
                public:
                    DescribeImageTaskDetailRequest();
                    ~DescribeImageTaskDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取图片处理任务的任务 ID。
                     * @return TaskId 图片处理任务的任务 ID。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置图片处理任务的任务 ID。
                     * @param _taskId 图片处理任务的任务 ID。
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
                     * 图片处理任务的任务 ID。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEIMAGETASKDETAILREQUEST_H_
