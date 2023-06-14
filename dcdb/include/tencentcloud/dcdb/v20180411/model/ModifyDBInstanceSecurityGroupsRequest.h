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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_MODIFYDBINSTANCESECURITYGROUPSREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_MODIFYDBINSTANCESECURITYGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * ModifyDBInstanceSecurityGroups请求参数结构体
                */
                class ModifyDBInstanceSecurityGroupsRequest : public AbstractModel
                {
                public:
                    ModifyDBInstanceSecurityGroupsRequest();
                    ~ModifyDBInstanceSecurityGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据库引擎名称，本接口取值：dcdb。
                     * @return Product 数据库引擎名称，本接口取值：dcdb。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置数据库引擎名称，本接口取值：dcdb。
                     * @param _product 数据库引擎名称，本接口取值：dcdb。
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取实例ID。
                     * @return InstanceId 实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID。
                     * @param _instanceId 实例ID。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取要修改的安全组 ID 列表，一个或者多个安全组 ID 组成的数组。
                     * @return SecurityGroupIds 要修改的安全组 ID 列表，一个或者多个安全组 ID 组成的数组。
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置要修改的安全组 ID 列表，一个或者多个安全组 ID 组成的数组。
                     * @param _securityGroupIds 要修改的安全组 ID 列表，一个或者多个安全组 ID 组成的数组。
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                private:

                    /**
                     * 数据库引擎名称，本接口取值：dcdb。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 要修改的安全组 ID 列表，一个或者多个安全组 ID 组成的数组。
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_MODIFYDBINSTANCESECURITYGROUPSREQUEST_H_
