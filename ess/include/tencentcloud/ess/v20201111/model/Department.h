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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DEPARTMENT_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DEPARTMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 集成版员工部门信息。
                */
                class Department : public AbstractModel
                {
                public:
                    Department();
                    ~Department() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取部门ID。
                     * @return DepartmentId 部门ID。
                     * 
                     */
                    std::string GetDepartmentId() const;

                    /**
                     * 设置部门ID。
                     * @param _departmentId 部门ID。
                     * 
                     */
                    void SetDepartmentId(const std::string& _departmentId);

                    /**
                     * 判断参数 DepartmentId 是否已赋值
                     * @return DepartmentId 是否已赋值
                     * 
                     */
                    bool DepartmentIdHasBeenSet() const;

                    /**
                     * 获取部门名称。
                     * @return DepartmentName 部门名称。
                     * 
                     */
                    std::string GetDepartmentName() const;

                    /**
                     * 设置部门名称。
                     * @param _departmentName 部门名称。
                     * 
                     */
                    void SetDepartmentName(const std::string& _departmentName);

                    /**
                     * 判断参数 DepartmentName 是否已赋值
                     * @return DepartmentName 是否已赋值
                     * 
                     */
                    bool DepartmentNameHasBeenSet() const;

                private:

                    /**
                     * 部门ID。
                     */
                    std::string m_departmentId;
                    bool m_departmentIdHasBeenSet;

                    /**
                     * 部门名称。
                     */
                    std::string m_departmentName;
                    bool m_departmentNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DEPARTMENT_H_
