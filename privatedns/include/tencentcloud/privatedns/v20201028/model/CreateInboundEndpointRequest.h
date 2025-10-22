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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_CREATEINBOUNDENDPOINTREQUEST_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_CREATEINBOUNDENDPOINTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/privatedns/v20201028/model/SubnetIpInfo.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * CreateInboundEndpoint请求参数结构体
                */
                class CreateInboundEndpointRequest : public AbstractModel
                {
                public:
                    CreateInboundEndpointRequest();
                    ~CreateInboundEndpointRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取名称
                     * @return EndpointName 名称
                     * 
                     */
                    std::string GetEndpointName() const;

                    /**
                     * 设置名称
                     * @param _endpointName 名称
                     * 
                     */
                    void SetEndpointName(const std::string& _endpointName);

                    /**
                     * 判断参数 EndpointName 是否已赋值
                     * @return EndpointName 是否已赋值
                     * 
                     */
                    bool EndpointNameHasBeenSet() const;

                    /**
                     * 获取地域
                     * @return EndpointRegion 地域
                     * 
                     */
                    std::string GetEndpointRegion() const;

                    /**
                     * 设置地域
                     * @param _endpointRegion 地域
                     * 
                     */
                    void SetEndpointRegion(const std::string& _endpointRegion);

                    /**
                     * 判断参数 EndpointRegion 是否已赋值
                     * @return EndpointRegion 是否已赋值
                     * 
                     */
                    bool EndpointRegionHasBeenSet() const;

                    /**
                     * 获取vpcid
                     * @return EndpointVpc vpcid
                     * 
                     */
                    std::string GetEndpointVpc() const;

                    /**
                     * 设置vpcid
                     * @param _endpointVpc vpcid
                     * 
                     */
                    void SetEndpointVpc(const std::string& _endpointVpc);

                    /**
                     * 判断参数 EndpointVpc 是否已赋值
                     * @return EndpointVpc 是否已赋值
                     * 
                     */
                    bool EndpointVpcHasBeenSet() const;

                    /**
                     * 获取子网信息
                     * @return SubnetIp 子网信息
                     * 
                     */
                    std::vector<SubnetIpInfo> GetSubnetIp() const;

                    /**
                     * 设置子网信息
                     * @param _subnetIp 子网信息
                     * 
                     */
                    void SetSubnetIp(const std::vector<SubnetIpInfo>& _subnetIp);

                    /**
                     * 判断参数 SubnetIp 是否已赋值
                     * @return SubnetIp 是否已赋值
                     * 
                     */
                    bool SubnetIpHasBeenSet() const;

                private:

                    /**
                     * 名称
                     */
                    std::string m_endpointName;
                    bool m_endpointNameHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_endpointRegion;
                    bool m_endpointRegionHasBeenSet;

                    /**
                     * vpcid
                     */
                    std::string m_endpointVpc;
                    bool m_endpointVpcHasBeenSet;

                    /**
                     * 子网信息
                     */
                    std::vector<SubnetIpInfo> m_subnetIp;
                    bool m_subnetIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_CREATEINBOUNDENDPOINTREQUEST_H_
