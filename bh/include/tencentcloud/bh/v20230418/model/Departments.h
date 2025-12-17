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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_DEPARTMENTS_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_DEPARTMENTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bh/v20230418/model/Department.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 部门列表
                */
                class Departments : public AbstractModel
                {
                public:
                    Departments();
                    ~Departments() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取部门列表
                     * @return DepartmentSet 部门列表
                     * 
                     */
                    std::vector<Department> GetDepartmentSet() const;

                    /**
                     * 设置部门列表
                     * @param _departmentSet 部门列表
                     * 
                     */
                    void SetDepartmentSet(const std::vector<Department>& _departmentSet);

                    /**
                     * 判断参数 DepartmentSet 是否已赋值
                     * @return DepartmentSet 是否已赋值
                     * 
                     */
                    bool DepartmentSetHasBeenSet() const;

                    /**
                     * 获取是否开启了部门管理 true - 已开启, false - 未开启
                     * @return Enabled 是否开启了部门管理 true - 已开启, false - 未开启
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置是否开启了部门管理 true - 已开启, false - 未开启
                     * @param _enabled 是否开启了部门管理 true - 已开启, false - 未开启
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取当前操作UIN是否是根部门管理员
                     * @return RootManager 当前操作UIN是否是根部门管理员
                     * 
                     */
                    bool GetRootManager() const;

                    /**
                     * 设置当前操作UIN是否是根部门管理员
                     * @param _rootManager 当前操作UIN是否是根部门管理员
                     * 
                     */
                    void SetRootManager(const bool& _rootManager);

                    /**
                     * 判断参数 RootManager 是否已赋值
                     * @return RootManager 是否已赋值
                     * 
                     */
                    bool RootManagerHasBeenSet() const;

                private:

                    /**
                     * 部门列表
                     */
                    std::vector<Department> m_departmentSet;
                    bool m_departmentSetHasBeenSet;

                    /**
                     * 是否开启了部门管理 true - 已开启, false - 未开启
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 当前操作UIN是否是根部门管理员
                     */
                    bool m_rootManager;
                    bool m_rootManagerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_DEPARTMENTS_H_
