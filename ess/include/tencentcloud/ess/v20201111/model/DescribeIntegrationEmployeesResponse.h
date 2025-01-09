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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEINTEGRATIONEMPLOYEESRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEINTEGRATIONEMPLOYEESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/Staff.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * DescribeIntegrationEmployees返回参数结构体
                */
                class DescribeIntegrationEmployeesResponse : public AbstractModel
                {
                public:
                    DescribeIntegrationEmployeesResponse();
                    ~DescribeIntegrationEmployeesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取员工信息列表。
                     * @return Employees 员工信息列表。
                     * 
                     */
                    std::vector<Staff> GetEmployees() const;

                    /**
                     * 判断参数 Employees 是否已赋值
                     * @return Employees 是否已赋值
                     * 
                     */
                    bool EmployeesHasBeenSet() const;

                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取指定分页每页返回的数据条数，单页最大支持 20。
                     * @return Limit 指定分页每页返回的数据条数，单页最大支持 20。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取符合条件的员工数量。
                     * @return TotalCount 符合条件的员工数量。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 员工信息列表。
                     */
                    std::vector<Staff> m_employees;
                    bool m_employeesHasBeenSet;

                    /**
                     * 偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 指定分页每页返回的数据条数，单页最大支持 20。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 符合条件的员工数量。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEINTEGRATIONEMPLOYEESRESPONSE_H_
