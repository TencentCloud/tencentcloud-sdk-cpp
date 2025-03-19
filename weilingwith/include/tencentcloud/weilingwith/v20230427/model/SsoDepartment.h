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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_SSODEPARTMENT_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_SSODEPARTMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 部门用户
                */
                class SsoDepartment : public AbstractModel
                {
                public:
                    SsoDepartment();
                    ~SsoDepartment() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取部门ID
                     * @return DepartmentId 部门ID
                     * 
                     */
                    std::string GetDepartmentId() const;

                    /**
                     * 设置部门ID
                     * @param _departmentId 部门ID
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
                     * 获取部门名称
                     * @return Name 部门名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置部门名称
                     * @param _name 部门名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取父级部门ID
                     * @return ParentDepartmentId 父级部门ID
                     * 
                     */
                    std::string GetParentDepartmentId() const;

                    /**
                     * 设置父级部门ID
                     * @param _parentDepartmentId 父级部门ID
                     * 
                     */
                    void SetParentDepartmentId(const std::string& _parentDepartmentId);

                    /**
                     * 判断参数 ParentDepartmentId 是否已赋值
                     * @return ParentDepartmentId 是否已赋值
                     * 
                     */
                    bool ParentDepartmentIdHasBeenSet() const;

                private:

                    /**
                     * 部门ID
                     */
                    std::string m_departmentId;
                    bool m_departmentIdHasBeenSet;

                    /**
                     * 部门名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 父级部门ID
                     */
                    std::string m_parentDepartmentId;
                    bool m_parentDepartmentIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_SSODEPARTMENT_H_
