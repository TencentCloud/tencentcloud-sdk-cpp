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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBEWORKORDERLISTRESPONSE_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBEWORKORDERLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chc/v20230418/model/WorkOrderData.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DescribeWorkOrderList返回参数结构体
                */
                class DescribeWorkOrderListResponse : public AbstractModel
                {
                public:
                    DescribeWorkOrderListResponse();
                    ~DescribeWorkOrderListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总数
                     * @return TotalCount 总数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取查询结果
                     * @return WorkOrderSet 查询结果
                     * 
                     */
                    std::vector<WorkOrderData> GetWorkOrderSet() const;

                    /**
                     * 判断参数 WorkOrderSet 是否已赋值
                     * @return WorkOrderSet 是否已赋值
                     * 
                     */
                    bool WorkOrderSetHasBeenSet() const;

                private:

                    /**
                     * 总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 查询结果
                     */
                    std::vector<WorkOrderData> m_workOrderSet;
                    bool m_workOrderSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBEWORKORDERLISTRESPONSE_H_
