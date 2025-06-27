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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_DELETEROLEREQUEST_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_DELETEROLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * DeleteRole请求参数结构体
                */
                class DeleteRoleRequest : public AbstractModel
                {
                public:
                    DeleteRoleRequest();
                    ~DeleteRoleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取腾讯云 RocketMQ 实例 ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1493/96028) 接口或控制台获得。
                     * @return InstanceId 腾讯云 RocketMQ 实例 ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1493/96028) 接口或控制台获得。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置腾讯云 RocketMQ 实例 ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1493/96028) 接口或控制台获得。
                     * @param _instanceId 腾讯云 RocketMQ 实例 ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1493/96028) 接口或控制台获得。
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
                     * 获取角色名称，从 [DescribeRoleList](https://cloud.tencent.com/document/api/1493/98862) 接口或控制台获得。
                     * @return Role 角色名称，从 [DescribeRoleList](https://cloud.tencent.com/document/api/1493/98862) 接口或控制台获得。
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置角色名称，从 [DescribeRoleList](https://cloud.tencent.com/document/api/1493/98862) 接口或控制台获得。
                     * @param _role 角色名称，从 [DescribeRoleList](https://cloud.tencent.com/document/api/1493/98862) 接口或控制台获得。
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                private:

                    /**
                     * 腾讯云 RocketMQ 实例 ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1493/96028) 接口或控制台获得。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 角色名称，从 [DescribeRoleList](https://cloud.tencent.com/document/api/1493/98862) 接口或控制台获得。
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_DELETEROLEREQUEST_H_
