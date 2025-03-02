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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_INTEGRATIONDEPARTMENT_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_INTEGRATIONDEPARTMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 部门信息
                */
                class IntegrationDepartment : public AbstractModel
                {
                public:
                    IntegrationDepartment();
                    ~IntegrationDepartment() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取部门ID。
                     * @return DeptId 部门ID。
                     * 
                     */
                    std::string GetDeptId() const;

                    /**
                     * 设置部门ID。
                     * @param _deptId 部门ID。
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
                     * 获取部门名。
                     * @return DeptName 部门名。
                     * 
                     */
                    std::string GetDeptName() const;

                    /**
                     * 设置部门名。
                     * @param _deptName 部门名。
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
                     * 获取父部门ID
                     * @return ParentDeptId 父部门ID
                     * 
                     */
                    std::string GetParentDeptId() const;

                    /**
                     * 设置父部门ID
                     * @param _parentDeptId 父部门ID
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
                     * 获取客户系统部门ID
                     * @return DeptOpenId 客户系统部门ID
                     * 
                     */
                    std::string GetDeptOpenId() const;

                    /**
                     * 设置客户系统部门ID
                     * @param _deptOpenId 客户系统部门ID
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
                     * 获取序列号。
                     * @return OrderNo 序列号。
                     * 
                     */
                    uint64_t GetOrderNo() const;

                    /**
                     * 设置序列号。
                     * @param _orderNo 序列号。
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
                     * 部门ID。
                     */
                    std::string m_deptId;
                    bool m_deptIdHasBeenSet;

                    /**
                     * 部门名。
                     */
                    std::string m_deptName;
                    bool m_deptNameHasBeenSet;

                    /**
                     * 父部门ID
                     */
                    std::string m_parentDeptId;
                    bool m_parentDeptIdHasBeenSet;

                    /**
                     * 客户系统部门ID
                     */
                    std::string m_deptOpenId;
                    bool m_deptOpenIdHasBeenSet;

                    /**
                     * 序列号。
                     */
                    uint64_t m_orderNo;
                    bool m_orderNoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_INTEGRATIONDEPARTMENT_H_
