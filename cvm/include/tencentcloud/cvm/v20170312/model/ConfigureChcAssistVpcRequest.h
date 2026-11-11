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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_CONFIGURECHCASSISTVPCREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_CONFIGURECHCASSISTVPCREQUEST_H_

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
                * ConfigureChcAssistVpc请求参数结构体
                */
                class ConfigureChcAssistVpcRequest : public AbstractModel
                {
                public:
                    ConfigureChcAssistVpcRequest();
                    ~ConfigureChcAssistVpcRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>CHC物理服务器ID。</p>
                     * @return ChcIds <p>CHC物理服务器ID。</p>
                     * 
                     */
                    std::vector<std::string> GetChcIds() const;

                    /**
                     * 设置<p>CHC物理服务器ID。</p>
                     * @param _chcIds <p>CHC物理服务器ID。</p>
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
                     * 获取<p>带外网络信息。</p>
                     * @return BmcVirtualPrivateCloud <p>带外网络信息。</p>
                     * 
                     */
                    VirtualPrivateCloud GetBmcVirtualPrivateCloud() const;

                    /**
                     * 设置<p>带外网络信息。</p>
                     * @param _bmcVirtualPrivateCloud <p>带外网络信息。</p>
                     * 
                     */
                    void SetBmcVirtualPrivateCloud(const VirtualPrivateCloud& _bmcVirtualPrivateCloud);

                    /**
                     * 判断参数 BmcVirtualPrivateCloud 是否已赋值
                     * @return BmcVirtualPrivateCloud 是否已赋值
                     * 
                     */
                    bool BmcVirtualPrivateCloudHasBeenSet() const;

                    /**
                     * 获取<p>带外网络的安全组列表。</p>
                     * @return BmcSecurityGroupIds <p>带外网络的安全组列表。</p>
                     * 
                     */
                    std::vector<std::string> GetBmcSecurityGroupIds() const;

                    /**
                     * 设置<p>带外网络的安全组列表。</p>
                     * @param _bmcSecurityGroupIds <p>带外网络的安全组列表。</p>
                     * 
                     */
                    void SetBmcSecurityGroupIds(const std::vector<std::string>& _bmcSecurityGroupIds);

                    /**
                     * 判断参数 BmcSecurityGroupIds 是否已赋值
                     * @return BmcSecurityGroupIds 是否已赋值
                     * 
                     */
                    bool BmcSecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取<p>部署网络信息。</p>
                     * @return DeployVirtualPrivateCloud <p>部署网络信息。</p>
                     * 
                     */
                    VirtualPrivateCloud GetDeployVirtualPrivateCloud() const;

                    /**
                     * 设置<p>部署网络信息。</p>
                     * @param _deployVirtualPrivateCloud <p>部署网络信息。</p>
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
                     * 获取<p>部署网络的安全组列表。</p>
                     * @return DeploySecurityGroupIds <p>部署网络的安全组列表。</p>
                     * 
                     */
                    std::vector<std::string> GetDeploySecurityGroupIds() const;

                    /**
                     * 设置<p>部署网络的安全组列表。</p>
                     * @param _deploySecurityGroupIds <p>部署网络的安全组列表。</p>
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
                     * 获取<p>部署网络的附加参数，用于指定DHCP选项、bios引导模式等配置。</p>
                     * @return ChcDeployExtraConfig <p>部署网络的附加参数，用于指定DHCP选项、bios引导模式等配置。</p>
                     * 
                     */
                    ChcDeployExtraConfig GetChcDeployExtraConfig() const;

                    /**
                     * 设置<p>部署网络的附加参数，用于指定DHCP选项、bios引导模式等配置。</p>
                     * @param _chcDeployExtraConfig <p>部署网络的附加参数，用于指定DHCP选项、bios引导模式等配置。</p>
                     * 
                     */
                    void SetChcDeployExtraConfig(const ChcDeployExtraConfig& _chcDeployExtraConfig);

                    /**
                     * 判断参数 ChcDeployExtraConfig 是否已赋值
                     * @return ChcDeployExtraConfig 是否已赋值
                     * 
                     */
                    bool ChcDeployExtraConfigHasBeenSet() const;

                    /**
                     * 获取<p>是否跳过带外检查。</p><p>默认值：false</p>
                     * @return SkipBmcCheck <p>是否跳过带外检查。</p><p>默认值：false</p>
                     * 
                     */
                    bool GetSkipBmcCheck() const;

                    /**
                     * 设置<p>是否跳过带外检查。</p><p>默认值：false</p>
                     * @param _skipBmcCheck <p>是否跳过带外检查。</p><p>默认值：false</p>
                     * 
                     */
                    void SetSkipBmcCheck(const bool& _skipBmcCheck);

                    /**
                     * 判断参数 SkipBmcCheck 是否已赋值
                     * @return SkipBmcCheck 是否已赋值
                     * 
                     */
                    bool SkipBmcCheckHasBeenSet() const;

                private:

                    /**
                     * <p>CHC物理服务器ID。</p>
                     */
                    std::vector<std::string> m_chcIds;
                    bool m_chcIdsHasBeenSet;

                    /**
                     * <p>带外网络信息。</p>
                     */
                    VirtualPrivateCloud m_bmcVirtualPrivateCloud;
                    bool m_bmcVirtualPrivateCloudHasBeenSet;

                    /**
                     * <p>带外网络的安全组列表。</p>
                     */
                    std::vector<std::string> m_bmcSecurityGroupIds;
                    bool m_bmcSecurityGroupIdsHasBeenSet;

                    /**
                     * <p>部署网络信息。</p>
                     */
                    VirtualPrivateCloud m_deployVirtualPrivateCloud;
                    bool m_deployVirtualPrivateCloudHasBeenSet;

                    /**
                     * <p>部署网络的安全组列表。</p>
                     */
                    std::vector<std::string> m_deploySecurityGroupIds;
                    bool m_deploySecurityGroupIdsHasBeenSet;

                    /**
                     * <p>部署网络的附加参数，用于指定DHCP选项、bios引导模式等配置。</p>
                     */
                    ChcDeployExtraConfig m_chcDeployExtraConfig;
                    bool m_chcDeployExtraConfigHasBeenSet;

                    /**
                     * <p>是否跳过带外检查。</p><p>默认值：false</p>
                     */
                    bool m_skipBmcCheck;
                    bool m_skipBmcCheckHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_CONFIGURECHCASSISTVPCREQUEST_H_
