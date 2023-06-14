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

#ifndef TENCENTCLOUD_ASW_V20200722_MODEL_STARTEXECUTIONRESPONSE_H_
#define TENCENTCLOUD_ASW_V20200722_MODEL_STARTEXECUTIONRESPONSE_H_

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
                * StartExecution返回参数结构体
                */
                class StartExecutionResponse : public AbstractModel
                {
                public:
                    StartExecutionResponse();
                    ~StartExecutionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取执行资源名
                     * @return ExecutionResourceName 执行资源名
                     * 
                     */
                    std::string GetExecutionResourceName() const;

                    /**
                     * 判断参数 ExecutionResourceName 是否已赋值
                     * @return ExecutionResourceName 是否已赋值
                     * 
                     */
                    bool ExecutionResourceNameHasBeenSet() const;

                    /**
                     * 获取执行开始时间
                     * @return StartDate 执行开始时间
                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 判断参数 StartDate 是否已赋值
                     * @return StartDate 是否已赋值
                     * 
                     */
                    bool StartDateHasBeenSet() const;

                private:

                    /**
                     * 执行资源名
                     */
                    std::string m_executionResourceName;
                    bool m_executionResourceNameHasBeenSet;

                    /**
                     * 执行开始时间
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASW_V20200722_MODEL_STARTEXECUTIONRESPONSE_H_
