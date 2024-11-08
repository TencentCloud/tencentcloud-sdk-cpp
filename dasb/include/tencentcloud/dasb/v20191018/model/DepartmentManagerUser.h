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

#ifndef TENCENTCLOUD_DASB_V20191018_MODEL_DEPARTMENTMANAGERUSER_H_
#define TENCENTCLOUD_DASB_V20191018_MODEL_DEPARTMENTMANAGERUSER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 部门管理员信息
                */
                class DepartmentManagerUser : public AbstractModel
                {
                public:
                    DepartmentManagerUser();
                    ~DepartmentManagerUser() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取管理员Id
                     * @return ManagerId 管理员Id
                     * 
                     */
                    std::string GetManagerId() const;

                    /**
                     * 设置管理员Id
                     * @param _managerId 管理员Id
                     * 
                     */
                    void SetManagerId(const std::string& _managerId);

                    /**
                     * 判断参数 ManagerId 是否已赋值
                     * @return ManagerId 是否已赋值
                     * 
                     */
                    bool ManagerIdHasBeenSet() const;

                    /**
                     * 获取管理员姓名
                     * @return ManagerName 管理员姓名
                     * 
                     */
                    std::string GetManagerName() const;

                    /**
                     * 设置管理员姓名
                     * @param _managerName 管理员姓名
                     * 
                     */
                    void SetManagerName(const std::string& _managerName);

                    /**
                     * 判断参数 ManagerName 是否已赋值
                     * @return ManagerName 是否已赋值
                     * 
                     */
                    bool ManagerNameHasBeenSet() const;

                private:

                    /**
                     * 管理员Id
                     */
                    std::string m_managerId;
                    bool m_managerIdHasBeenSet;

                    /**
                     * 管理员姓名
                     */
                    std::string m_managerName;
                    bool m_managerNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DASB_V20191018_MODEL_DEPARTMENTMANAGERUSER_H_
