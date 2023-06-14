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

#ifndef TENCENTCLOUD_ASW_V20200722_MODEL_DESCRIBEEXECUTIONHISTORYREQUEST_H_
#define TENCENTCLOUD_ASW_V20200722_MODEL_DESCRIBEEXECUTIONHISTORYREQUEST_H_

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
                * DescribeExecutionHistory请求参数结构体
                */
                class DescribeExecutionHistoryRequest : public AbstractModel
                {
                public:
                    DescribeExecutionHistoryRequest();
                    ~DescribeExecutionHistoryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取执行资源名
                     * @return ExecutionResourceName 执行资源名
                     * 
                     */
                    std::string GetExecutionResourceName() const;

                    /**
                     * 设置执行资源名
                     * @param _executionResourceName 执行资源名
                     * 
                     */
                    void SetExecutionResourceName(const std::string& _executionResourceName);

                    /**
                     * 判断参数 ExecutionResourceName 是否已赋值
                     * @return ExecutionResourceName 是否已赋值
                     * 
                     */
                    bool ExecutionResourceNameHasBeenSet() const;

                private:

                    /**
                     * 执行资源名
                     */
                    std::string m_executionResourceName;
                    bool m_executionResourceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASW_V20200722_MODEL_DESCRIBEEXECUTIONHISTORYREQUEST_H_
