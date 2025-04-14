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

#ifndef TENCENTCLOUD_GWLB_V20240906_MODEL_MODIFYGATEWAYLOADBALANCERATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_GWLB_V20240906_MODEL_MODIFYGATEWAYLOADBALANCERATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gwlb
    {
        namespace V20240906
        {
            namespace Model
            {
                /**
                * ModifyGatewayLoadBalancerAttribute请求参数结构体
                */
                class ModifyGatewayLoadBalancerAttributeRequest : public AbstractModel
                {
                public:
                    ModifyGatewayLoadBalancerAttributeRequest();
                    ~ModifyGatewayLoadBalancerAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网关负载均衡的唯一ID。可通过[DescribeGatewayLoadBalancers](https://cloud.tencent.com/document/api/1782/111683) 接口获取。
                     * @return LoadBalancerId 网关负载均衡的唯一ID。可通过[DescribeGatewayLoadBalancers](https://cloud.tencent.com/document/api/1782/111683) 接口获取。
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置网关负载均衡的唯一ID。可通过[DescribeGatewayLoadBalancers](https://cloud.tencent.com/document/api/1782/111683) 接口获取。
                     * @param _loadBalancerId 网关负载均衡的唯一ID。可通过[DescribeGatewayLoadBalancers](https://cloud.tencent.com/document/api/1782/111683) 接口获取。
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取网关负载均衡实例名称。可支持输入1-60个字符。
                     * @return LoadBalancerName 网关负载均衡实例名称。可支持输入1-60个字符。
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置网关负载均衡实例名称。可支持输入1-60个字符。
                     * @param _loadBalancerName 网关负载均衡实例名称。可支持输入1-60个字符。
                     * 
                     */
                    void SetLoadBalancerName(const std::string& _loadBalancerName);

                    /**
                     * 判断参数 LoadBalancerName 是否已赋值
                     * @return LoadBalancerName 是否已赋值
                     * 
                     */
                    bool LoadBalancerNameHasBeenSet() const;

                    /**
                     * 获取是否开启删除保护。
                     * @return DeleteProtect 是否开启删除保护。
                     * 
                     */
                    bool GetDeleteProtect() const;

                    /**
                     * 设置是否开启删除保护。
                     * @param _deleteProtect 是否开启删除保护。
                     * 
                     */
                    void SetDeleteProtect(const bool& _deleteProtect);

                    /**
                     * 判断参数 DeleteProtect 是否已赋值
                     * @return DeleteProtect 是否已赋值
                     * 
                     */
                    bool DeleteProtectHasBeenSet() const;

                private:

                    /**
                     * 网关负载均衡的唯一ID。可通过[DescribeGatewayLoadBalancers](https://cloud.tencent.com/document/api/1782/111683) 接口获取。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 网关负载均衡实例名称。可支持输入1-60个字符。
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * 是否开启删除保护。
                     */
                    bool m_deleteProtect;
                    bool m_deleteProtectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GWLB_V20240906_MODEL_MODIFYGATEWAYLOADBALANCERATTRIBUTEREQUEST_H_
