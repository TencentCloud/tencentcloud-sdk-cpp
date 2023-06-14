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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_MODIFYPURGEFETCHTASKSTATUSREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_MODIFYPURGEFETCHTASKSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * ModifyPurgeFetchTaskStatus请求参数结构体
                */
                class ModifyPurgeFetchTaskStatusRequest : public AbstractModel
                {
                public:
                    ModifyPurgeFetchTaskStatusRequest();
                    ~ModifyPurgeFetchTaskStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取执行时间
                     * @return ExecutionTime 执行时间
                     * 
                     */
                    std::string GetExecutionTime() const;

                    /**
                     * 设置执行时间
                     * @param _executionTime 执行时间
                     * 
                     */
                    void SetExecutionTime(const std::string& _executionTime);

                    /**
                     * 判断参数 ExecutionTime 是否已赋值
                     * @return ExecutionTime 是否已赋值
                     * 
                     */
                    bool ExecutionTimeHasBeenSet() const;

                    /**
                     * 获取执行状态
success: 成功
failed: 失败
                     * @return ExecutionStatus 执行状态
success: 成功
failed: 失败
                     * 
                     */
                    std::string GetExecutionStatus() const;

                    /**
                     * 设置执行状态
success: 成功
failed: 失败
                     * @param _executionStatus 执行状态
success: 成功
failed: 失败
                     * 
                     */
                    void SetExecutionStatus(const std::string& _executionStatus);

                    /**
                     * 判断参数 ExecutionStatus 是否已赋值
                     * @return ExecutionStatus 是否已赋值
                     * 
                     */
                    bool ExecutionStatusHasBeenSet() const;

                    /**
                     * 获取任务 ID
                     * @return Id 任务 ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置任务 ID
                     * @param _id 任务 ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取执行状态详情
                     * @return ExecutionStatusDesc 执行状态详情
                     * 
                     */
                    std::string GetExecutionStatusDesc() const;

                    /**
                     * 设置执行状态详情
                     * @param _executionStatusDesc 执行状态详情
                     * 
                     */
                    void SetExecutionStatusDesc(const std::string& _executionStatusDesc);

                    /**
                     * 判断参数 ExecutionStatusDesc 是否已赋值
                     * @return ExecutionStatusDesc 是否已赋值
                     * 
                     */
                    bool ExecutionStatusDescHasBeenSet() const;

                private:

                    /**
                     * 执行时间
                     */
                    std::string m_executionTime;
                    bool m_executionTimeHasBeenSet;

                    /**
                     * 执行状态
success: 成功
failed: 失败
                     */
                    std::string m_executionStatus;
                    bool m_executionStatusHasBeenSet;

                    /**
                     * 任务 ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 执行状态详情
                     */
                    std::string m_executionStatusDesc;
                    bool m_executionStatusDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_MODIFYPURGEFETCHTASKSTATUSREQUEST_H_
