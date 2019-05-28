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

#ifndef TENCENTCLOUD_CR_V20180321_MODEL_DESCRIBETASKSTATUSREQUEST_H_
#define TENCENTCLOUD_CR_V20180321_MODEL_DESCRIBETASKSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cr
    {
        namespace V20180321
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
                    std::string ToJsonString();


                    /**
                     * 获取模块名
                     * @return Module 模块名
                     */
                    std::string GetModule() const;

                    /**
                     * 设置模块名
                     * @param Module 模块名
                     */
                    void SetModule(const std::string& module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取操作名
                     * @return Operation 操作名
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作名
                     * @param Operation 操作名
                     */
                    void SetOperation(const std::string& operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取任务ID，形如abc-a0b1c2xyz
                     * @return TaskId 任务ID，形如abc-a0b1c2xyz
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID，形如abc-a0b1c2xyz
                     * @param TaskId 任务ID，形如abc-a0b1c2xyz
                     */
                    void SetTaskId(const std::string& taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * 模块名
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 操作名
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 任务ID，形如abc-a0b1c2xyz
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CR_V20180321_MODEL_DESCRIBETASKSTATUSREQUEST_H_
