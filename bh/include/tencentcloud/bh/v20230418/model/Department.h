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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_DEPARTMENT_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_DEPARTMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bh/v20230418/model/DepartmentManagerUser.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 部门信息
                */
                class Department : public AbstractModel
                {
                public:
                    Department();
                    ~Department() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>部门ID</p>
                     * @return Id <p>部门ID</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>部门ID</p>
                     * @param _id <p>部门ID</p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>部门名称，1 - 256个字符</p>
                     * @return Name <p>部门名称，1 - 256个字符</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>部门名称，1 - 256个字符</p>
                     * @param _name <p>部门名称，1 - 256个字符</p>
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
                     * 获取<p>部门管理员账号ID</p>
                     * @return Managers <p>部门管理员账号ID</p>
                     * 
                     */
                    std::vector<std::string> GetManagers() const;

                    /**
                     * 设置<p>部门管理员账号ID</p>
                     * @param _managers <p>部门管理员账号ID</p>
                     * 
                     */
                    void SetManagers(const std::vector<std::string>& _managers);

                    /**
                     * 判断参数 Managers 是否已赋值
                     * @return Managers 是否已赋值
                     * 
                     */
                    bool ManagersHasBeenSet() const;

                    /**
                     * 获取<p>管理员用户</p>
                     * @return ManagerUsers <p>管理员用户</p>
                     * 
                     */
                    std::vector<DepartmentManagerUser> GetManagerUsers() const;

                    /**
                     * 设置<p>管理员用户</p>
                     * @param _managerUsers <p>管理员用户</p>
                     * 
                     */
                    void SetManagerUsers(const std::vector<DepartmentManagerUser>& _managerUsers);

                    /**
                     * 判断参数 ManagerUsers 是否已赋值
                     * @return ManagerUsers 是否已赋值
                     * 
                     */
                    bool ManagerUsersHasBeenSet() const;

                private:

                    /**
                     * <p>部门ID</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>部门名称，1 - 256个字符</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>部门管理员账号ID</p>
                     */
                    std::vector<std::string> m_managers;
                    bool m_managersHasBeenSet;

                    /**
                     * <p>管理员用户</p>
                     */
                    std::vector<DepartmentManagerUser> m_managerUsers;
                    bool m_managerUsersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_DEPARTMENT_H_
