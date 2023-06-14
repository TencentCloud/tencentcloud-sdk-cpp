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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBELOADBALANCETASKSTATUSREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBELOADBALANCETASKSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeLoadBalanceTaskStatus请求参数结构体
                */
                class DescribeLoadBalanceTaskStatusRequest : public AbstractModel
                {
                public:
                    DescribeLoadBalanceTaskStatusRequest();
                    ~DescribeLoadBalanceTaskStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取请求ID，即接口返回的 RequestId 参数
                     * @return TaskId 请求ID，即接口返回的 RequestId 参数
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置请求ID，即接口返回的 RequestId 参数
                     * @param _taskId 请求ID，即接口返回的 RequestId 参数
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
                     * 请求ID，即接口返回的 RequestId 参数
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBELOADBALANCETASKSTATUSREQUEST_H_
