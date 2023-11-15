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

#ifndef TENCENTCLOUD_DASB_V20191018_MODEL_MODIFYUSERGROUPREQUEST_H_
#define TENCENTCLOUD_DASB_V20191018_MODEL_MODIFYUSERGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dasb
    {
        namespace V20191018
        {
            namespace Model
            {
                /**
                * ModifyUserGroup请求参数结构体
                */
                class ModifyUserGroupRequest : public AbstractModel
                {
                public:
                    ModifyUserGroupRequest();
                    ~ModifyUserGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户组ID
                     * @return Id 用户组ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置用户组ID
                     * @param _id 用户组ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取用户组名
                     * @return Name 用户组名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置用户组名
                     * @param _name 用户组名
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
                     * 获取用户组所属的部门ID，如：1.2.3
                     * @return DepartmentId 用户组所属的部门ID，如：1.2.3
                     * 
                     */
                    std::string GetDepartmentId() const;

                    /**
                     * 设置用户组所属的部门ID，如：1.2.3
                     * @param _departmentId 用户组所属的部门ID，如：1.2.3
                     * 
                     */
                    void SetDepartmentId(const std::string& _departmentId);

                    /**
                     * 判断参数 DepartmentId 是否已赋值
                     * @return DepartmentId 是否已赋值
                     * 
                     */
                    bool DepartmentIdHasBeenSet() const;

                private:

                    /**
                     * 用户组ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 用户组名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 用户组所属的部门ID，如：1.2.3
                     */
                    std::string m_departmentId;
                    bool m_departmentIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DASB_V20191018_MODEL_MODIFYUSERGROUPREQUEST_H_
