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

#ifndef TENCENTCLOUD_DS_V20180523_MODEL_DESCRIBETASKSTATUSREQUEST_H_
#define TENCENTCLOUD_DS_V20180523_MODEL_DESCRIBETASKSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ds
    {
        namespace V20180523
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
                     * 获取模块名CommonMng
                     * @return Module 模块名CommonMng
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置模块名CommonMng
                     * @param _module 模块名CommonMng
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取操作名DescribeTaskStatus
                     * @return Operation 操作名DescribeTaskStatus
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作名DescribeTaskStatus
                     * @param _operation 操作名DescribeTaskStatus
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param _taskId 任务ID
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
                     * 模块名CommonMng
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 操作名DescribeTaskStatus
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 任务ID
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DS_V20180523_MODEL_DESCRIBETASKSTATUSREQUEST_H_
