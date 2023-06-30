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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_ACLRULEINFO_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_ACLRULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 表示ACL 规则的四元组信息
                */
                class AclRuleInfo : public AbstractModel
                {
                public:
                    AclRuleInfo();
                    ~AclRuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Acl操作方式，枚举值(所有操作: All, 读：Read，写：Write)
                     * @return Operation Acl操作方式，枚举值(所有操作: All, 读：Read，写：Write)
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置Acl操作方式，枚举值(所有操作: All, 读：Read，写：Write)
                     * @param _operation Acl操作方式，枚举值(所有操作: All, 读：Read，写：Write)
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取权限类型，(Deny，Allow)
                     * @return PermissionType 权限类型，(Deny，Allow)
                     * 
                     */
                    std::string GetPermissionType() const;

                    /**
                     * 设置权限类型，(Deny，Allow)
                     * @param _permissionType 权限类型，(Deny，Allow)
                     * 
                     */
                    void SetPermissionType(const std::string& _permissionType);

                    /**
                     * 判断参数 PermissionType 是否已赋值
                     * @return PermissionType 是否已赋值
                     * 
                     */
                    bool PermissionTypeHasBeenSet() const;

                    /**
                     * 获取默认为\*，表示任何host都可以访问，当前ckafka不支持host为\* 和 ip网段
                     * @return Host 默认为\*，表示任何host都可以访问，当前ckafka不支持host为\* 和 ip网段
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置默认为\*，表示任何host都可以访问，当前ckafka不支持host为\* 和 ip网段
                     * @param _host 默认为\*，表示任何host都可以访问，当前ckafka不支持host为\* 和 ip网段
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取用户列表，默认为User:*，表示任何user都可以访问，当前用户只能是用户列表中包含的用户。传入格式需要带【User:】前缀。例如用户A，传入为User:A。
                     * @return Principal 用户列表，默认为User:*，表示任何user都可以访问，当前用户只能是用户列表中包含的用户。传入格式需要带【User:】前缀。例如用户A，传入为User:A。
                     * 
                     */
                    std::string GetPrincipal() const;

                    /**
                     * 设置用户列表，默认为User:*，表示任何user都可以访问，当前用户只能是用户列表中包含的用户。传入格式需要带【User:】前缀。例如用户A，传入为User:A。
                     * @param _principal 用户列表，默认为User:*，表示任何user都可以访问，当前用户只能是用户列表中包含的用户。传入格式需要带【User:】前缀。例如用户A，传入为User:A。
                     * 
                     */
                    void SetPrincipal(const std::string& _principal);

                    /**
                     * 判断参数 Principal 是否已赋值
                     * @return Principal 是否已赋值
                     * 
                     */
                    bool PrincipalHasBeenSet() const;

                private:

                    /**
                     * Acl操作方式，枚举值(所有操作: All, 读：Read，写：Write)
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 权限类型，(Deny，Allow)
                     */
                    std::string m_permissionType;
                    bool m_permissionTypeHasBeenSet;

                    /**
                     * 默认为\*，表示任何host都可以访问，当前ckafka不支持host为\* 和 ip网段
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 用户列表，默认为User:*，表示任何user都可以访问，当前用户只能是用户列表中包含的用户。传入格式需要带【User:】前缀。例如用户A，传入为User:A。
                     */
                    std::string m_principal;
                    bool m_principalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_ACLRULEINFO_H_
