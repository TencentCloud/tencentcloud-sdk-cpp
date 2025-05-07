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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBETASKRESULTREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBETASKRESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeTaskResult请求参数结构体
                */
                class DescribeTaskResultRequest : public AbstractModel
                {
                public:
                    DescribeTaskResultRequest();
                    ~DescribeTaskResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取异步任务ID。从异步任务接口返回结果中查看。例如：[AllocateAddresses](https://cloud.tencent.com/document/product/215/16699)接口。TaskId和DealName必填一个参数。
                     * @return TaskId 异步任务ID。从异步任务接口返回结果中查看。例如：[AllocateAddresses](https://cloud.tencent.com/document/product/215/16699)接口。TaskId和DealName必填一个参数。
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置异步任务ID。从异步任务接口返回结果中查看。例如：[AllocateAddresses](https://cloud.tencent.com/document/product/215/16699)接口。TaskId和DealName必填一个参数。
                     * @param _taskId 异步任务ID。从异步任务接口返回结果中查看。例如：[AllocateAddresses](https://cloud.tencent.com/document/product/215/16699)接口。TaskId和DealName必填一个参数。
                     * 
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取计费订单号。在控制台中的[费用中心-订单管理](https://console.cloud.tencent.com/expense/deal)中查看订单号。TaskId和DealName必填一个参数。
                     * @return DealName 计费订单号。在控制台中的[费用中心-订单管理](https://console.cloud.tencent.com/expense/deal)中查看订单号。TaskId和DealName必填一个参数。
                     * 
                     */
                    std::string GetDealName() const;

                    /**
                     * 设置计费订单号。在控制台中的[费用中心-订单管理](https://console.cloud.tencent.com/expense/deal)中查看订单号。TaskId和DealName必填一个参数。
                     * @param _dealName 计费订单号。在控制台中的[费用中心-订单管理](https://console.cloud.tencent.com/expense/deal)中查看订单号。TaskId和DealName必填一个参数。
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
                     * 异步任务ID。从异步任务接口返回结果中查看。例如：[AllocateAddresses](https://cloud.tencent.com/document/product/215/16699)接口。TaskId和DealName必填一个参数。
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 计费订单号。在控制台中的[费用中心-订单管理](https://console.cloud.tencent.com/expense/deal)中查看订单号。TaskId和DealName必填一个参数。
                     */
                    std::string m_dealName;
                    bool m_dealNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBETASKRESULTREQUEST_H_
