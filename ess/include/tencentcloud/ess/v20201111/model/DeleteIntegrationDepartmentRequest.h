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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DELETEINTEGRATIONDEPARTMENTREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DELETEINTEGRATIONDEPARTMENTREQUEST_H_

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
                * DeleteIntegrationDepartment请求参数结构体
                */
                class DeleteIntegrationDepartmentRequest : public AbstractModel
                {
                public:
                    DeleteIntegrationDepartmentRequest();
                    ~DeleteIntegrationDepartmentRequest() = default;
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
                     * 获取电子签中的部门id
                     * @return DeptId 电子签中的部门id
                     * 
                     */
                    std::string GetDeptId() const;

                    /**
                     * 设置电子签中的部门id
                     * @param _deptId 电子签中的部门id
                     * 
                     */
                    void SetDeptId(const std::string& _deptId);

                    /**
                     * 判断参数 DeptId 是否已赋值
                     * @return DeptId 是否已赋值
                     * 
                     */
                    bool DeptIdHasBeenSet() const;

                    /**
                     * 获取交接部门ID。待删除部门中的合同、印章和模板数据，交接至该部门ID下，未填写交接至公司根部门。
                     * @return ReceiveDeptId 交接部门ID。待删除部门中的合同、印章和模板数据，交接至该部门ID下，未填写交接至公司根部门。
                     * 
                     */
                    std::string GetReceiveDeptId() const;

                    /**
                     * 设置交接部门ID。待删除部门中的合同、印章和模板数据，交接至该部门ID下，未填写交接至公司根部门。
                     * @param _receiveDeptId 交接部门ID。待删除部门中的合同、印章和模板数据，交接至该部门ID下，未填写交接至公司根部门。
                     * 
                     */
                    void SetReceiveDeptId(const std::string& _receiveDeptId);

                    /**
                     * 判断参数 ReceiveDeptId 是否已赋值
                     * @return ReceiveDeptId 是否已赋值
                     * 
                     */
                    bool ReceiveDeptIdHasBeenSet() const;

                private:

                    /**
                     * 操作人信息，UserId必填且需拥有组织架构管理权限
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 电子签中的部门id
                     */
                    std::string m_deptId;
                    bool m_deptIdHasBeenSet;

                    /**
                     * 交接部门ID。待删除部门中的合同、印章和模板数据，交接至该部门ID下，未填写交接至公司根部门。
                     */
                    std::string m_receiveDeptId;
                    bool m_receiveDeptIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DELETEINTEGRATIONDEPARTMENTREQUEST_H_
