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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_CONFIGURECHCDEPLOYVPCREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_CONFIGURECHCDEPLOYVPCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/VirtualPrivateCloud.h>
#include <tencentcloud/cvm/v20170312/model/ChcDeployExtraConfig.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ConfigureChcDeployVpc请求参数结构体
                */
                class ConfigureChcDeployVpcRequest : public AbstractModel
                {
                public:
                    ConfigureChcDeployVpcRequest();
                    ~ConfigureChcDeployVpcRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CHC物理服务器的实例Id。
                     * @return ChcIds CHC物理服务器的实例Id。
                     * 
                     */
                    std::vector<std::string> GetChcIds() const;

                    /**
                     * 设置CHC物理服务器的实例Id。
                     * @param _chcIds CHC物理服务器的实例Id。
                     * 
                     */
                    void SetChcIds(const std::vector<std::string>& _chcIds);

                    /**
                     * 判断参数 ChcIds 是否已赋值
                     * @return ChcIds 是否已赋值
                     * 
                     */
                    bool ChcIdsHasBeenSet() const;

                    /**
                     * 获取部署网络信息。
                     * @return DeployVirtualPrivateCloud 部署网络信息。
                     * 
                     */
                    VirtualPrivateCloud GetDeployVirtualPrivateCloud() const;

                    /**
                     * 设置部署网络信息。
                     * @param _deployVirtualPrivateCloud 部署网络信息。
                     * 
                     */
                    void SetDeployVirtualPrivateCloud(const VirtualPrivateCloud& _deployVirtualPrivateCloud);

                    /**
                     * 判断参数 DeployVirtualPrivateCloud 是否已赋值
                     * @return DeployVirtualPrivateCloud 是否已赋值
                     * 
                     */
                    bool DeployVirtualPrivateCloudHasBeenSet() const;

                    /**
                     * 获取部署网络的安全组列表。
                     * @return DeploySecurityGroupIds 部署网络的安全组列表。
                     * 
                     */
                    std::vector<std::string> GetDeploySecurityGroupIds() const;

                    /**
                     * 设置部署网络的安全组列表。
                     * @param _deploySecurityGroupIds 部署网络的安全组列表。
                     * 
                     */
                    void SetDeploySecurityGroupIds(const std::vector<std::string>& _deploySecurityGroupIds);

                    /**
                     * 判断参数 DeploySecurityGroupIds 是否已赋值
                     * @return DeploySecurityGroupIds 是否已赋值
                     * 
                     */
                    bool DeploySecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取部署所需要的dhcp选项参数
                     * @return ChcDeployExtraConfig 部署所需要的dhcp选项参数
                     * 
                     */
                    ChcDeployExtraConfig GetChcDeployExtraConfig() const;

                    /**
                     * 设置部署所需要的dhcp选项参数
                     * @param _chcDeployExtraConfig 部署所需要的dhcp选项参数
                     * 
                     */
                    void SetChcDeployExtraConfig(const ChcDeployExtraConfig& _chcDeployExtraConfig);

                    /**
                     * 判断参数 ChcDeployExtraConfig 是否已赋值
                     * @return ChcDeployExtraConfig 是否已赋值
                     * 
                     */
                    bool ChcDeployExtraConfigHasBeenSet() const;

                private:

                    /**
                     * CHC物理服务器的实例Id。
                     */
                    std::vector<std::string> m_chcIds;
                    bool m_chcIdsHasBeenSet;

                    /**
                     * 部署网络信息。
                     */
                    VirtualPrivateCloud m_deployVirtualPrivateCloud;
                    bool m_deployVirtualPrivateCloudHasBeenSet;

                    /**
                     * 部署网络的安全组列表。
                     */
                    std::vector<std::string> m_deploySecurityGroupIds;
                    bool m_deploySecurityGroupIdsHasBeenSet;

                    /**
                     * 部署所需要的dhcp选项参数
                     */
                    ChcDeployExtraConfig m_chcDeployExtraConfig;
                    bool m_chcDeployExtraConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_CONFIGURECHCDEPLOYVPCREQUEST_H_
