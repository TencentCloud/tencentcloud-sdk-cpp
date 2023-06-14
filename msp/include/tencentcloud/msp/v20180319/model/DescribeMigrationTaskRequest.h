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

#ifndef TENCENTCLOUD_MSP_V20180319_MODEL_DESCRIBEMIGRATIONTASKREQUEST_H_
#define TENCENTCLOUD_MSP_V20180319_MODEL_DESCRIBEMIGRATIONTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Msp
    {
        namespace V20180319
        {
            namespace Model
            {
                /**
                * DescribeMigrationTask请求参数结构体
                */
                class DescribeMigrationTaskRequest : public AbstractModel
                {
                public:
                    DescribeMigrationTaskRequest();
                    ~DescribeMigrationTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务ID，例如msp-jitoh33n
                     * @return TaskId 任务ID，例如msp-jitoh33n
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID，例如msp-jitoh33n
                     * @param _taskId 任务ID，例如msp-jitoh33n
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
                     * 任务ID，例如msp-jitoh33n
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MSP_V20180319_MODEL_DESCRIBEMIGRATIONTASKREQUEST_H_
