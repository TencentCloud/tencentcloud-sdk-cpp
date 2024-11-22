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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYDBINSTANCESECURITYGROUPSREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYDBINSTANCESECURITYGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
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
                     * 获取数据库引擎名称，本接口取值：redis。
                     * @return Product 数据库引擎名称，本接口取值：redis。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置数据库引擎名称，本接口取值：redis。
                     * @param _product 数据库引擎名称，本接口取值：redis。
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
                     * 获取更换为新的安全组 ID 列表，即一个或者多个安全组 ID 组成的数组。
- 若实例第一次配置安全组，请使用接口[AssociateSecurityGroups](https://cloud.tencent.com/document/product/239/41260)先绑定安全组。
- 更换安全组，请在[控制台安全组](https://console.cloud.tencent.com/vpc/security-group)页面获取安全组 ID。
                     * @return SecurityGroupIds 更换为新的安全组 ID 列表，即一个或者多个安全组 ID 组成的数组。
- 若实例第一次配置安全组，请使用接口[AssociateSecurityGroups](https://cloud.tencent.com/document/product/239/41260)先绑定安全组。
- 更换安全组，请在[控制台安全组](https://console.cloud.tencent.com/vpc/security-group)页面获取安全组 ID。
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置更换为新的安全组 ID 列表，即一个或者多个安全组 ID 组成的数组。
- 若实例第一次配置安全组，请使用接口[AssociateSecurityGroups](https://cloud.tencent.com/document/product/239/41260)先绑定安全组。
- 更换安全组，请在[控制台安全组](https://console.cloud.tencent.com/vpc/security-group)页面获取安全组 ID。
                     * @param _securityGroupIds 更换为新的安全组 ID 列表，即一个或者多个安全组 ID 组成的数组。
- 若实例第一次配置安全组，请使用接口[AssociateSecurityGroups](https://cloud.tencent.com/document/product/239/41260)先绑定安全组。
- 更换安全组，请在[控制台安全组](https://console.cloud.tencent.com/vpc/security-group)页面获取安全组 ID。
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     * @return InstanceId 实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     * @param _instanceId 实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * 数据库引擎名称，本接口取值：redis。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 更换为新的安全组 ID 列表，即一个或者多个安全组 ID 组成的数组。
- 若实例第一次配置安全组，请使用接口[AssociateSecurityGroups](https://cloud.tencent.com/document/product/239/41260)先绑定安全组。
- 更换安全组，请在[控制台安全组](https://console.cloud.tencent.com/vpc/security-group)页面获取安全组 ID。
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * 实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYDBINSTANCESECURITYGROUPSREQUEST_H_
