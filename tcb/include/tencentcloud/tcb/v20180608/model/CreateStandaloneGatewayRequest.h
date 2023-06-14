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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CREATESTANDALONEGATEWAYREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CREATESTANDALONEGATEWAYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * CreateStandaloneGateway请求参数结构体
                */
                class CreateStandaloneGatewayRequest : public AbstractModel
                {
                public:
                    CreateStandaloneGatewayRequest();
                    ~CreateStandaloneGatewayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境ID
                     * @return EnvId 环境ID
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境ID
                     * @param _envId 环境ID
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取网关名
                     * @return GatewayAlias 网关名
                     * 
                     */
                    std::string GetGatewayAlias() const;

                    /**
                     * 设置网关名
                     * @param _gatewayAlias 网关名
                     * 
                     */
                    void SetGatewayAlias(const std::string& _gatewayAlias);

                    /**
                     * 判断参数 GatewayAlias 是否已赋值
                     * @return GatewayAlias 是否已赋值
                     * 
                     */
                    bool GatewayAliasHasBeenSet() const;

                    /**
                     * 获取私有网络ID
                     * @return VpcId 私有网络ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID
                     * @param _vpcId 私有网络ID
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
                     * 获取子网ID
                     * @return SubnetIds 子网ID
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置子网ID
                     * @param _subnetIds 子网ID
                     * 
                     */
                    void SetSubnetIds(const std::vector<std::string>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     * 
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取网关描述
                     * @return GatewayDesc 网关描述
                     * 
                     */
                    std::string GetGatewayDesc() const;

                    /**
                     * 设置网关描述
                     * @param _gatewayDesc 网关描述
                     * 
                     */
                    void SetGatewayDesc(const std::string& _gatewayDesc);

                    /**
                     * 判断参数 GatewayDesc 是否已赋值
                     * @return GatewayDesc 是否已赋值
                     * 
                     */
                    bool GatewayDescHasBeenSet() const;

                    /**
                     * 获取网关套餐版本
                     * @return PackageVersion 网关套餐版本
                     * 
                     */
                    std::string GetPackageVersion() const;

                    /**
                     * 设置网关套餐版本
                     * @param _packageVersion 网关套餐版本
                     * 
                     */
                    void SetPackageVersion(const std::string& _packageVersion);

                    /**
                     * 判断参数 PackageVersion 是否已赋值
                     * @return PackageVersion 是否已赋值
                     * 
                     */
                    bool PackageVersionHasBeenSet() const;

                private:

                    /**
                     * 环境ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 网关名
                     */
                    std::string m_gatewayAlias;
                    bool m_gatewayAliasHasBeenSet;

                    /**
                     * 私有网络ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网ID
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * 网关描述
                     */
                    std::string m_gatewayDesc;
                    bool m_gatewayDescHasBeenSet;

                    /**
                     * 网关套餐版本
                     */
                    std::string m_packageVersion;
                    bool m_packageVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CREATESTANDALONEGATEWAYREQUEST_H_
