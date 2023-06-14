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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBETASKOPERATIONLOGREQUEST_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBETASKOPERATIONLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * DescribeTaskOperationLog请求参数结构体
                */
                class DescribeTaskOperationLogRequest : public AbstractModel
                {
                public:
                    DescribeTaskOperationLogRequest();
                    ~DescribeTaskOperationLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取维修任务ID
                     * @return TaskId 维修任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置维修任务ID
                     * @param _taskId 维修任务ID
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
                     * 获取排序字段，目前支持：OperationTime
                     * @return OrderField 排序字段，目前支持：OperationTime
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置排序字段，目前支持：OperationTime
                     * @param _orderField 排序字段，目前支持：OperationTime
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取排序方式 0:递增(默认) 1:递减
                     * @return Order 排序方式 0:递增(默认) 1:递减
                     * 
                     */
                    uint64_t GetOrder() const;

                    /**
                     * 设置排序方式 0:递增(默认) 1:递减
                     * @param _order 排序方式 0:递增(默认) 1:递减
                     * 
                     */
                    void SetOrder(const uint64_t& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * 维修任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 排序字段，目前支持：OperationTime
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * 排序方式 0:递增(默认) 1:递减
                     */
                    uint64_t m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBETASKOPERATIONLOGREQUEST_H_
