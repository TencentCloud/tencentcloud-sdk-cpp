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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEINTEGRATIONDEPARTMENTREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEINTEGRATIONDEPARTMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateIntegrationDepartment请求参数结构体
                */
                class CreateIntegrationDepartmentRequest : public AbstractModel
                {
                public:
                    CreateIntegrationDepartmentRequest();
                    ~CreateIntegrationDepartmentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取操作人信息，UserId必填且需拥有组织架构管理权限
                     * @return Operator 操作人信息，UserId必填且需拥有组织架构管理权限
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置操作人信息，UserId必填且需拥有组织架构管理权限
                     * @param _operator 操作人信息，UserId必填且需拥有组织架构管理权限
                     * 
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取部门名称，不超过50个字符
                     * @return DeptName 部门名称，不超过50个字符
                     * 
                     */
                    std::string GetDeptName() const;

                    /**
                     * 设置部门名称，不超过50个字符
                     * @param _deptName 部门名称，不超过50个字符
                     * 
                     */
                    void SetDeptName(const std::string& _deptName);

                    /**
                     * 判断参数 DeptName 是否已赋值
                     * @return DeptName 是否已赋值
                     * 
                     */
                    bool DeptNameHasBeenSet() const;

                    /**
                     * 获取电子签父部门ID，与ParentDeptOpenId二选一,优先ParentDeptId,都为空时自动填充至根节点下
                     * @return ParentDeptId 电子签父部门ID，与ParentDeptOpenId二选一,优先ParentDeptId,都为空时自动填充至根节点下
                     * 
                     */
                    std::string GetParentDeptId() const;

                    /**
                     * 设置电子签父部门ID，与ParentDeptOpenId二选一,优先ParentDeptId,都为空时自动填充至根节点下
                     * @param _parentDeptId 电子签父部门ID，与ParentDeptOpenId二选一,优先ParentDeptId,都为空时自动填充至根节点下
                     * 
                     */
                    void SetParentDeptId(const std::string& _parentDeptId);

                    /**
                     * 判断参数 ParentDeptId 是否已赋值
                     * @return ParentDeptId 是否已赋值
                     * 
                     */
                    bool ParentDeptIdHasBeenSet() const;

                    /**
                     * 获取第三方平台中父部门ID,与ParentDeptId二选一,优先ParentDeptId,都为空时自动填充至根节点下
                     * @return ParentDeptOpenId 第三方平台中父部门ID,与ParentDeptId二选一,优先ParentDeptId,都为空时自动填充至根节点下
                     * 
                     */
                    std::string GetParentDeptOpenId() const;

                    /**
                     * 设置第三方平台中父部门ID,与ParentDeptId二选一,优先ParentDeptId,都为空时自动填充至根节点下
                     * @param _parentDeptOpenId 第三方平台中父部门ID,与ParentDeptId二选一,优先ParentDeptId,都为空时自动填充至根节点下
                     * 
                     */
                    void SetParentDeptOpenId(const std::string& _parentDeptOpenId);

                    /**
                     * 判断参数 ParentDeptOpenId 是否已赋值
                     * @return ParentDeptOpenId 是否已赋值
                     * 
                     */
                    bool ParentDeptOpenIdHasBeenSet() const;

                    /**
                     * 获取客户系统部门ID，不超过64个字符
                     * @return DeptOpenId 客户系统部门ID，不超过64个字符
                     * 
                     */
                    std::string GetDeptOpenId() const;

                    /**
                     * 设置客户系统部门ID，不超过64个字符
                     * @param _deptOpenId 客户系统部门ID，不超过64个字符
                     * 
                     */
                    void SetDeptOpenId(const std::string& _deptOpenId);

                    /**
                     * 判断参数 DeptOpenId 是否已赋值
                     * @return DeptOpenId 是否已赋值
                     * 
                     */
                    bool DeptOpenIdHasBeenSet() const;

                    /**
                     * 获取排序号,1~30000范围内
                     * @return OrderNo 排序号,1~30000范围内
                     * 
                     */
                    uint64_t GetOrderNo() const;

                    /**
                     * 设置排序号,1~30000范围内
                     * @param _orderNo 排序号,1~30000范围内
                     * 
                     */
                    void SetOrderNo(const uint64_t& _orderNo);

                    /**
                     * 判断参数 OrderNo 是否已赋值
                     * @return OrderNo 是否已赋值
                     * 
                     */
                    bool OrderNoHasBeenSet() const;

                private:

                    /**
                     * 操作人信息，UserId必填且需拥有组织架构管理权限
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 部门名称，不超过50个字符
                     */
                    std::string m_deptName;
                    bool m_deptNameHasBeenSet;

                    /**
                     * 电子签父部门ID，与ParentDeptOpenId二选一,优先ParentDeptId,都为空时自动填充至根节点下
                     */
                    std::string m_parentDeptId;
                    bool m_parentDeptIdHasBeenSet;

                    /**
                     * 第三方平台中父部门ID,与ParentDeptId二选一,优先ParentDeptId,都为空时自动填充至根节点下
                     */
                    std::string m_parentDeptOpenId;
                    bool m_parentDeptOpenIdHasBeenSet;

                    /**
                     * 客户系统部门ID，不超过64个字符
                     */
                    std::string m_deptOpenId;
                    bool m_deptOpenIdHasBeenSet;

                    /**
                     * 排序号,1~30000范围内
                     */
                    uint64_t m_orderNo;
                    bool m_orderNoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEINTEGRATIONDEPARTMENTREQUEST_H_
