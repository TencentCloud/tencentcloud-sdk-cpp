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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_UPDATEASSUMEROLEPOLICYREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_UPDATEASSUMEROLEPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * UpdateAssumeRolePolicy请求参数结构体
                */
                class UpdateAssumeRolePolicyRequest : public AbstractModel
                {
                public:
                    UpdateAssumeRolePolicyRequest();
                    ~UpdateAssumeRolePolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取策略文档，示例：{"version":"2.0","statement":[{"action":"name/sts:AssumeRole","effect":"allow","principal":{"service":["cloudaudit.cloud.tencent.com","cls.cloud.tencent.com"]}}]}，principal用于指定角色的授权对象。获取该参数可参阅 获取角色详情（https://cloud.tencent.com/document/product/598/36221） 输出参数RoleInfo
                     * @return PolicyDocument 策略文档，示例：{"version":"2.0","statement":[{"action":"name/sts:AssumeRole","effect":"allow","principal":{"service":["cloudaudit.cloud.tencent.com","cls.cloud.tencent.com"]}}]}，principal用于指定角色的授权对象。获取该参数可参阅 获取角色详情（https://cloud.tencent.com/document/product/598/36221） 输出参数RoleInfo
                     * 
                     */
                    std::string GetPolicyDocument() const;

                    /**
                     * 设置策略文档，示例：{"version":"2.0","statement":[{"action":"name/sts:AssumeRole","effect":"allow","principal":{"service":["cloudaudit.cloud.tencent.com","cls.cloud.tencent.com"]}}]}，principal用于指定角色的授权对象。获取该参数可参阅 获取角色详情（https://cloud.tencent.com/document/product/598/36221） 输出参数RoleInfo
                     * @param _policyDocument 策略文档，示例：{"version":"2.0","statement":[{"action":"name/sts:AssumeRole","effect":"allow","principal":{"service":["cloudaudit.cloud.tencent.com","cls.cloud.tencent.com"]}}]}，principal用于指定角色的授权对象。获取该参数可参阅 获取角色详情（https://cloud.tencent.com/document/product/598/36221） 输出参数RoleInfo
                     * 
                     */
                    void SetPolicyDocument(const std::string& _policyDocument);

                    /**
                     * 判断参数 PolicyDocument 是否已赋值
                     * @return PolicyDocument 是否已赋值
                     * 
                     */
                    bool PolicyDocumentHasBeenSet() const;

                    /**
                     * 获取角色ID，用于指定角色，入参 RoleId 与 RoleName 二选一
                     * @return RoleId 角色ID，用于指定角色，入参 RoleId 与 RoleName 二选一
                     * 
                     */
                    std::string GetRoleId() const;

                    /**
                     * 设置角色ID，用于指定角色，入参 RoleId 与 RoleName 二选一
                     * @param _roleId 角色ID，用于指定角色，入参 RoleId 与 RoleName 二选一
                     * 
                     */
                    void SetRoleId(const std::string& _roleId);

                    /**
                     * 判断参数 RoleId 是否已赋值
                     * @return RoleId 是否已赋值
                     * 
                     */
                    bool RoleIdHasBeenSet() const;

                    /**
                     * 获取角色名称，用于指定角色，入参 RoleId 与 RoleName 二选一
                     * @return RoleName 角色名称，用于指定角色，入参 RoleId 与 RoleName 二选一
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置角色名称，用于指定角色，入参 RoleId 与 RoleName 二选一
                     * @param _roleName 角色名称，用于指定角色，入参 RoleId 与 RoleName 二选一
                     * 
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                private:

                    /**
                     * 策略文档，示例：{"version":"2.0","statement":[{"action":"name/sts:AssumeRole","effect":"allow","principal":{"service":["cloudaudit.cloud.tencent.com","cls.cloud.tencent.com"]}}]}，principal用于指定角色的授权对象。获取该参数可参阅 获取角色详情（https://cloud.tencent.com/document/product/598/36221） 输出参数RoleInfo
                     */
                    std::string m_policyDocument;
                    bool m_policyDocumentHasBeenSet;

                    /**
                     * 角色ID，用于指定角色，入参 RoleId 与 RoleName 二选一
                     */
                    std::string m_roleId;
                    bool m_roleIdHasBeenSet;

                    /**
                     * 角色名称，用于指定角色，入参 RoleId 与 RoleName 二选一
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_UPDATEASSUMEROLEPOLICYREQUEST_H_
