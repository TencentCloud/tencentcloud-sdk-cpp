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

#ifndef TENCENTCLOUD_TMS_V20201229_MODEL_GETFINANCIALLLMTASKRESULTREQUEST_H_
#define TENCENTCLOUD_TMS_V20201229_MODEL_GETFINANCIALLLMTASKRESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tms
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * GetFinancialLLMTaskResult请求参数结构体
                */
                class GetFinancialLLMTaskResultRequest : public AbstractModel
                {
                public:
                    GetFinancialLLMTaskResultRequest();
                    ~GetFinancialLLMTaskResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取该值对应创建任务接口里返回的TaskId字段值，创建任务接口见[创建金融大模型审校任务](https://cloud.tencent.com/document/product/1124/124463)。
示例值：3570106e-b156-45d9-8af5-99b46f7eb2f9
                     * @return TaskId 该值对应创建任务接口里返回的TaskId字段值，创建任务接口见[创建金融大模型审校任务](https://cloud.tencent.com/document/product/1124/124463)。
示例值：3570106e-b156-45d9-8af5-99b46f7eb2f9
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置该值对应创建任务接口里返回的TaskId字段值，创建任务接口见[创建金融大模型审校任务](https://cloud.tencent.com/document/product/1124/124463)。
示例值：3570106e-b156-45d9-8af5-99b46f7eb2f9
                     * @param _taskId 该值对应创建任务接口里返回的TaskId字段值，创建任务接口见[创建金融大模型审校任务](https://cloud.tencent.com/document/product/1124/124463)。
示例值：3570106e-b156-45d9-8af5-99b46f7eb2f9
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
                     * 该值对应创建任务接口里返回的TaskId字段值，创建任务接口见[创建金融大模型审校任务](https://cloud.tencent.com/document/product/1124/124463)。
示例值：3570106e-b156-45d9-8af5-99b46f7eb2f9
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMS_V20201229_MODEL_GETFINANCIALLLMTASKRESULTREQUEST_H_
