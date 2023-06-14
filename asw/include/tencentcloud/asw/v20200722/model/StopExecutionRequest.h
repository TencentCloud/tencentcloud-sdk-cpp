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

#ifndef TENCENTCLOUD_ASW_V20200722_MODEL_STOPEXECUTIONREQUEST_H_
#define TENCENTCLOUD_ASW_V20200722_MODEL_STOPEXECUTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Asw
    {
        namespace V20200722
        {
            namespace Model
            {
                /**
                * StopExecution请求参数结构体
                */
                class StopExecutionRequest : public AbstractModel
                {
                public:
                    StopExecutionRequest();
                    ~StopExecutionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取执行名称
                     * @return ExecutionQrn 执行名称
                     * 
                     */
                    std::string GetExecutionQrn() const;

                    /**
                     * 设置执行名称
                     * @param _executionQrn 执行名称
                     * 
                     */
                    void SetExecutionQrn(const std::string& _executionQrn);

                    /**
                     * 判断参数 ExecutionQrn 是否已赋值
                     * @return ExecutionQrn 是否已赋值
                     * 
                     */
                    bool ExecutionQrnHasBeenSet() const;

                private:

                    /**
                     * 执行名称
                     */
                    std::string m_executionQrn;
                    bool m_executionQrnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASW_V20200722_MODEL_STOPEXECUTIONREQUEST_H_
