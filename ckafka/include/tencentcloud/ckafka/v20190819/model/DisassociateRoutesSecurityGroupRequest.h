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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DISASSOCIATEROUTESSECURITYGROUPREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DISASSOCIATEROUTESSECURITYGROUPREQUEST_H_

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
                * DisassociateRoutesSecurityGroup请求参数结构体
                */
                class DisassociateRoutesSecurityGroupRequest : public AbstractModel
                {
                public:
                    DisassociateRoutesSecurityGroupRequest();
                    ~DisassociateRoutesSecurityGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取解绑路由的列表
                     * @return InstanceRoutes 解绑路由的列表
                     * 
                     */
                    std::vector<InstanceRoute> GetInstanceRoutes() const;

                    /**
                     * 设置解绑路由的列表
                     * @param _instanceRoutes 解绑路由的列表
                     * 
                     */
                    void SetInstanceRoutes(const std::vector<InstanceRoute>& _instanceRoutes);

                    /**
                     * 判断参数 InstanceRoutes 是否已赋值
                     * @return InstanceRoutes 是否已赋值
                     * 
                     */
                    bool InstanceRoutesHasBeenSet() const;

                    /**
                     * 获取安全组id
                     * @return SecurityGroupId 安全组id
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置安全组id
                     * @param _securityGroupId 安全组id
                     * 
                     */
                    void SetSecurityGroupId(const std::string& _securityGroupId);

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                private:

                    /**
                     * 解绑路由的列表
                     */
                    std::vector<InstanceRoute> m_instanceRoutes;
                    bool m_instanceRoutesHasBeenSet;

                    /**
                     * 安全组id
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DISASSOCIATEROUTESSECURITYGROUPREQUEST_H_
