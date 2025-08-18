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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_UDFPOLICYINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_UDFPOLICYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * UDF权限信息
                */
                class UDFPolicyInfo : public AbstractModel
                {
                public:
                    UDFPolicyInfo();
                    ~UDFPolicyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取权限类型
示例：select，alter，drop
                     * @return Accesses 权限类型
示例：select，alter，drop
                     * 
                     */
                    std::vector<std::string> GetAccesses() const;

                    /**
                     * 设置权限类型
示例：select，alter，drop
                     * @param _accesses 权限类型
示例：select，alter，drop
                     * 
                     */
                    void SetAccesses(const std::vector<std::string>& _accesses);

                    /**
                     * 判断参数 Accesses 是否已赋值
                     * @return Accesses 是否已赋值
                     * 
                     */
                    bool AccessesHasBeenSet() const;

                    /**
                     * 获取拥有权限的用户信息
                     * @return Users 拥有权限的用户信息
                     * 
                     */
                    std::vector<std::string> GetUsers() const;

                    /**
                     * 设置拥有权限的用户信息
                     * @param _users 拥有权限的用户信息
                     * 
                     */
                    void SetUsers(const std::vector<std::string>& _users);

                    /**
                     * 判断参数 Users 是否已赋值
                     * @return Users 是否已赋值
                     * 
                     */
                    bool UsersHasBeenSet() const;

                    /**
                     * 获取拥有权限的工作组的信息
                     * @return Groups 拥有权限的工作组的信息
                     * 
                     */
                    std::vector<std::string> GetGroups() const;

                    /**
                     * 设置拥有权限的工作组的信息
                     * @param _groups 拥有权限的工作组的信息
                     * 
                     */
                    void SetGroups(const std::vector<std::string>& _groups);

                    /**
                     * 判断参数 Groups 是否已赋值
                     * @return Groups 是否已赋值
                     * 
                     */
                    bool GroupsHasBeenSet() const;

                private:

                    /**
                     * 权限类型
示例：select，alter，drop
                     */
                    std::vector<std::string> m_accesses;
                    bool m_accessesHasBeenSet;

                    /**
                     * 拥有权限的用户信息
                     */
                    std::vector<std::string> m_users;
                    bool m_usersHasBeenSet;

                    /**
                     * 拥有权限的工作组的信息
                     */
                    std::vector<std::string> m_groups;
                    bool m_groupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_UDFPOLICYINFO_H_
