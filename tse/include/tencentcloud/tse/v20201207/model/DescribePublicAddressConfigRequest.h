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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEPUBLICADDRESSCONFIGREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEPUBLICADDRESSCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * DescribePublicAddressConfig请求参数结构体
                */
                class DescribePublicAddressConfigRequest : public AbstractModel
                {
                public:
                    DescribePublicAddressConfigRequest();
                    ~DescribePublicAddressConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网关实例id
                     * @return GatewayId 网关实例id
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置网关实例id
                     * @param _gatewayId 网关实例id
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取查询该分组的公网信息，不传则查询实例所有的公网负载均衡信息
                     * @return GroupId 查询该分组的公网信息，不传则查询实例所有的公网负载均衡信息
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置查询该分组的公网信息，不传则查询实例所有的公网负载均衡信息
                     * @param _groupId 查询该分组的公网信息，不传则查询实例所有的公网负载均衡信息
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                private:

                    /**
                     * 网关实例id
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 查询该分组的公网信息，不传则查询实例所有的公网负载均衡信息
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEPUBLICADDRESSCONFIGREQUEST_H_
