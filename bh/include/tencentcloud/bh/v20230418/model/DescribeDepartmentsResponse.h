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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBEDEPARTMENTSRESPONSE_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBEDEPARTMENTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bh/v20230418/model/Departments.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DescribeDepartments返回参数结构体
                */
                class DescribeDepartmentsResponse : public AbstractModel
                {
                public:
                    DescribeDepartmentsResponse();
                    ~DescribeDepartmentsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取部门列表
                     * @return Departments 部门列表
                     * 
                     */
                    Departments GetDepartments() const;

                    /**
                     * 判断参数 Departments 是否已赋值
                     * @return Departments 是否已赋值
                     * 
                     */
                    bool DepartmentsHasBeenSet() const;

                private:

                    /**
                     * 部门列表
                     */
                    Departments m_departments;
                    bool m_departmentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBEDEPARTMENTSRESPONSE_H_
