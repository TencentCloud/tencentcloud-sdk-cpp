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

#ifndef TENCENTCLOUD_BMVPC_V20180625_MODEL_UNBINDIPSFROMNATGATEWAYREQUEST_H_
#define TENCENTCLOUD_BMVPC_V20180625_MODEL_UNBINDIPSFROMNATGATEWAYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bmvpc/v20180625/model/IpInfo.h>


namespace TencentCloud
{
    namespace Bmvpc
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * UnbindIpsFromNatGateway请求参数结构体
                */
                class UnbindIpsFromNatGatewayRequest : public AbstractModel
                {
                public:
                    UnbindIpsFromNatGatewayRequest();
                    ~UnbindIpsFromNatGatewayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取NAT网关ID，例如：nat-kdm476mp
                     * @return NatId NAT网关ID，例如：nat-kdm476mp
                     * 
                     */
                    std::string GetNatId() const;

                    /**
                     * 设置NAT网关ID，例如：nat-kdm476mp
                     * @param _natId NAT网关ID，例如：nat-kdm476mp
                     * 
                     */
                    void SetNatId(const std::string& _natId);

                    /**
                     * 判断参数 NatId 是否已赋值
                     * @return NatId 是否已赋值
                     * 
                     */
                    bool NatIdHasBeenSet() const;

                    /**
                     * 获取私有网络ID，例如：vpc-kd7d06of
                     * @return VpcId 私有网络ID，例如：vpc-kd7d06of
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID，例如：vpc-kd7d06of
                     * @param _vpcId 私有网络ID，例如：vpc-kd7d06of
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取部分IP信息；子网须以部分IP将加入NAT网关
                     * @return IpInfoSet 部分IP信息；子网须以部分IP将加入NAT网关
                     * 
                     */
                    std::vector<IpInfo> GetIpInfoSet() const;

                    /**
                     * 设置部分IP信息；子网须以部分IP将加入NAT网关
                     * @param _ipInfoSet 部分IP信息；子网须以部分IP将加入NAT网关
                     * 
                     */
                    void SetIpInfoSet(const std::vector<IpInfo>& _ipInfoSet);

                    /**
                     * 判断参数 IpInfoSet 是否已赋值
                     * @return IpInfoSet 是否已赋值
                     * 
                     */
                    bool IpInfoSetHasBeenSet() const;

                private:

                    /**
                     * NAT网关ID，例如：nat-kdm476mp
                     */
                    std::string m_natId;
                    bool m_natIdHasBeenSet;

                    /**
                     * 私有网络ID，例如：vpc-kd7d06of
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 部分IP信息；子网须以部分IP将加入NAT网关
                     */
                    std::vector<IpInfo> m_ipInfoSet;
                    bool m_ipInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_MODEL_UNBINDIPSFROMNATGATEWAYREQUEST_H_
