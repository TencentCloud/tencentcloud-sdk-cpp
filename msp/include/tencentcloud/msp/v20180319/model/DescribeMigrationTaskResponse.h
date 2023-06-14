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

#ifndef TENCENTCLOUD_MSP_V20180319_MODEL_DESCRIBEMIGRATIONTASKRESPONSE_H_
#define TENCENTCLOUD_MSP_V20180319_MODEL_DESCRIBEMIGRATIONTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/msp/v20180319/model/TaskStatus.h>


namespace TencentCloud
{
    namespace Msp
    {
        namespace V20180319
        {
            namespace Model
            {
                /**
                * DescribeMigrationTask返回参数结构体
                */
                class DescribeMigrationTaskResponse : public AbstractModel
                {
                public:
                    DescribeMigrationTaskResponse();
                    ~DescribeMigrationTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取迁移详情列表
                     * @return TaskStatus 迁移详情列表
                     * 
                     */
                    std::vector<TaskStatus> GetTaskStatus() const;

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                private:

                    /**
                     * 迁移详情列表
                     */
                    std::vector<TaskStatus> m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MSP_V20180319_MODEL_DESCRIBEMIGRATIONTASKRESPONSE_H_
