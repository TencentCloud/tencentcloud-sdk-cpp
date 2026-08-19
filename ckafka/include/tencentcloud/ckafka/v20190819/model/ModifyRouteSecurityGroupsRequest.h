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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYROUTESECURITYGROUPSREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYROUTESECURITYGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/InstanceRoute.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * ModifyRouteSecurityGroups请求参数结构体
                */
                class ModifyRouteSecurityGroupsRequest : public AbstractModel
                {
                public:
                    ModifyRouteSecurityGroupsRequest();
                    ~ModifyRouteSecurityGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例路由
                     * @return InstanceRoute 实例路由
                     * 
                     */
                    InstanceRoute GetInstanceRoute() const;

                    /**
                     * 设置实例路由
                     * @param _instanceRoute 实例路由
                     * 
                     */
                    void SetInstanceRoute(const InstanceRoute& _instanceRoute);

                    /**
                     * 判断参数 InstanceRoute 是否已赋值
                     * @return InstanceRoute 是否已赋值
                     * 
                     */
                    bool InstanceRouteHasBeenSet() const;

                    /**
                     * 获取修改后的安全组有序列表。
注意:不指定此参数或传空列表则代表解绑所有关联的安全组。
                     * @return SecurityGroupIds 修改后的安全组有序列表。
注意:不指定此参数或传空列表则代表解绑所有关联的安全组。
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置修改后的安全组有序列表。
注意:不指定此参数或传空列表则代表解绑所有关联的安全组。
                     * @param _securityGroupIds 修改后的安全组有序列表。
注意:不指定此参数或传空列表则代表解绑所有关联的安全组。
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
                     * 实例路由
                     */
                    InstanceRoute m_instanceRoute;
                    bool m_instanceRouteHasBeenSet;

                    /**
                     * 修改后的安全组有序列表。
注意:不指定此参数或传空列表则代表解绑所有关联的安全组。
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYROUTESECURITYGROUPSREQUEST_H_
