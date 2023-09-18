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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEINTEGRATIONDEPARTMENTSRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEINTEGRATIONDEPARTMENTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/IntegrationDepartment.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * DescribeIntegrationDepartments返回参数结构体
                */
                class DescribeIntegrationDepartmentsResponse : public AbstractModel
                {
                public:
                    DescribeIntegrationDepartmentsResponse();
                    ~DescribeIntegrationDepartmentsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取部门信息列表。部门信息根据部门排序号OrderNo降序排列，根据部门创建时间升序排列。
                     * @return Departments 部门信息列表。部门信息根据部门排序号OrderNo降序排列，根据部门创建时间升序排列。
                     * 
                     */
                    std::vector<IntegrationDepartment> GetDepartments() const;

                    /**
                     * 判断参数 Departments 是否已赋值
                     * @return Departments 是否已赋值
                     * 
                     */
                    bool DepartmentsHasBeenSet() const;

                private:

                    /**
                     * 部门信息列表。部门信息根据部门排序号OrderNo降序排列，根据部门创建时间升序排列。
                     */
                    std::vector<IntegrationDepartment> m_departments;
                    bool m_departmentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEINTEGRATIONDEPARTMENTSRESPONSE_H_
