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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBETASKSTATUSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBETASKSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
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
                     * 获取请求ID，即接口返回的 RequestId 参数。
                     * @return TaskId 请求ID，即接口返回的 RequestId 参数。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置请求ID，即接口返回的 RequestId 参数。
                     * @param _taskId 请求ID，即接口返回的 RequestId 参数。
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取订单ID。
注意：参数TaskId和DealName必须传一个。
                     * @return DealName 订单ID。
注意：参数TaskId和DealName必须传一个。
                     * 
                     */
                    std::string GetDealName() const;

                    /**
                     * 设置订单ID。
注意：参数TaskId和DealName必须传一个。
                     * @param _dealName 订单ID。
注意：参数TaskId和DealName必须传一个。
                     * 
                     */
                    void SetDealName(const std::string& _dealName);

                    /**
                     * 判断参数 DealName 是否已赋值
                     * @return DealName 是否已赋值
                     * 
                     */
                    bool DealNameHasBeenSet() const;

                private:

                    /**
                     * 请求ID，即接口返回的 RequestId 参数。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 订单ID。
注意：参数TaskId和DealName必须传一个。
                     */
                    std::string m_dealName;
                    bool m_dealNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBETASKSTATUSREQUEST_H_
