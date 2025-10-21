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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_OPENSECURITYPOLICYRESPONSE_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_OPENSECURITYPOLICYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * OpenSecurityPolicy返回参数结构体
                */
                class OpenSecurityPolicyResponse : public AbstractModel
                {
                public:
                    OpenSecurityPolicyResponse();
                    ~OpenSecurityPolicyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取异步流程ID，可以通过DescribeAsyncTaskStatus接口查询流程运行状态
                     * @return TaskId 异步流程ID，可以通过DescribeAsyncTaskStatus接口查询流程运行状态
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * 异步流程ID，可以通过DescribeAsyncTaskStatus接口查询流程运行状态
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_OPENSECURITYPOLICYRESPONSE_H_
