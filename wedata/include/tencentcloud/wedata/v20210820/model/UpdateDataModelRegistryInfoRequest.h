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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_UPDATEDATAMODELREGISTRYINFOREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_UPDATEDATAMODELREGISTRYINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * UpdateDataModelRegistryInfo请求参数结构体
                */
                class UpdateDataModelRegistryInfoRequest : public AbstractModel
                {
                public:
                    UpdateDataModelRegistryInfoRequest();
                    ~UpdateDataModelRegistryInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云应用的实例id
                     * @return CloudappId 云应用的实例id
                     * 
                     */
                    std::string GetCloudappId() const;

                    /**
                     * 设置云应用的实例id
                     * @param _cloudappId 云应用的实例id
                     * 
                     */
                    void SetCloudappId(const std::string& _cloudappId);

                    /**
                     * 判断参数 CloudappId 是否已赋值
                     * @return CloudappId 是否已赋值
                     * 
                     */
                    bool CloudappIdHasBeenSet() const;

                    /**
                     * 获取数语的CAM角色
                     * @return AppCamRole 数语的CAM角色
                     * 
                     */
                    std::string GetAppCamRole() const;

                    /**
                     * 设置数语的CAM角色
                     * @param _appCamRole 数语的CAM角色
                     * 
                     */
                    void SetAppCamRole(const std::string& _appCamRole);

                    /**
                     * 判断参数 AppCamRole 是否已赋值
                     * @return AppCamRole 是否已赋值
                     * 
                     */
                    bool AppCamRoleHasBeenSet() const;

                    /**
                     * 获取数语的公网访问ip
                     * @return Ip 数语的公网访问ip
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置数语的公网访问ip
                     * @param _ip 数语的公网访问ip
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取数语的公网访问端口
                     * @return Port 数语的公网访问端口
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置数语的公网访问端口
                     * @param _port 数语的公网访问端口
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取数语的CAM角色id
                     * @return AppCamRoleId 数语的CAM角色id
                     * 
                     */
                    std::string GetAppCamRoleId() const;

                    /**
                     * 设置数语的CAM角色id
                     * @param _appCamRoleId 数语的CAM角色id
                     * 
                     */
                    void SetAppCamRoleId(const std::string& _appCamRoleId);

                    /**
                     * 判断参数 AppCamRoleId 是否已赋值
                     * @return AppCamRoleId 是否已赋值
                     * 
                     */
                    bool AppCamRoleIdHasBeenSet() const;

                    /**
                     * 获取服务提供方
                     * @return Provider 服务提供方
                     * 
                     */
                    std::string GetProvider() const;

                    /**
                     * 设置服务提供方
                     * @param _provider 服务提供方
                     * 
                     */
                    void SetProvider(const std::string& _provider);

                    /**
                     * 判断参数 Provider 是否已赋值
                     * @return Provider 是否已赋值
                     * 
                     */
                    bool ProviderHasBeenSet() const;

                    /**
                     * 获取租户id
                     * @return TenantId 租户id
                     * 
                     */
                    std::string GetTenantId() const;

                    /**
                     * 设置租户id
                     * @param _tenantId 租户id
                     * 
                     */
                    void SetTenantId(const std::string& _tenantId);

                    /**
                     * 判断参数 TenantId 是否已赋值
                     * @return TenantId 是否已赋值
                     * 
                     */
                    bool TenantIdHasBeenSet() const;

                    /**
                     * 获取主账号id
                     * @return OwnId 主账号id
                     * 
                     */
                    std::string GetOwnId() const;

                    /**
                     * 设置主账号id
                     * @param _ownId 主账号id
                     * 
                     */
                    void SetOwnId(const std::string& _ownId);

                    /**
                     * 判断参数 OwnId 是否已赋值
                     * @return OwnId 是否已赋值
                     * 
                     */
                    bool OwnIdHasBeenSet() const;

                    /**
                     * 获取VpcId
                     * @return VpcId VpcId
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VpcId
                     * @param _vpcId VpcId
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
                     * 获取Vpc地域
                     * @return VpcRegion Vpc地域
                     * 
                     */
                    std::string GetVpcRegion() const;

                    /**
                     * 设置Vpc地域
                     * @param _vpcRegion Vpc地域
                     * 
                     */
                    void SetVpcRegion(const std::string& _vpcRegion);

                    /**
                     * 判断参数 VpcRegion 是否已赋值
                     * @return VpcRegion 是否已赋值
                     * 
                     */
                    bool VpcRegionHasBeenSet() const;

                    /**
                     * 获取数语的内网访问ip
                     * @return Pip 数语的内网访问ip
                     * 
                     */
                    std::string GetPip() const;

                    /**
                     * 设置数语的内网访问ip
                     * @param _pip 数语的内网访问ip
                     * 
                     */
                    void SetPip(const std::string& _pip);

                    /**
                     * 判断参数 Pip 是否已赋值
                     * @return Pip 是否已赋值
                     * 
                     */
                    bool PipHasBeenSet() const;

                    /**
                     * 获取数语的内网访问端口
                     * @return Pport 数语的内网访问端口
                     * 
                     */
                    uint64_t GetPport() const;

                    /**
                     * 设置数语的内网访问端口
                     * @param _pport 数语的内网访问端口
                     * 
                     */
                    void SetPport(const uint64_t& _pport);

                    /**
                     * 判断参数 Pport 是否已赋值
                     * @return Pport 是否已赋值
                     * 
                     */
                    bool PportHasBeenSet() const;

                    /**
                     * 获取是否开放公网访问数语, 1:是，0:否，默认1开放
                     * @return IsPublic 是否开放公网访问数语, 1:是，0:否，默认1开放
                     * 
                     */
                    uint64_t GetIsPublic() const;

                    /**
                     * 设置是否开放公网访问数语, 1:是，0:否，默认1开放
                     * @param _isPublic 是否开放公网访问数语, 1:是，0:否，默认1开放
                     * 
                     */
                    void SetIsPublic(const uint64_t& _isPublic);

                    /**
                     * 判断参数 IsPublic 是否已赋值
                     * @return IsPublic 是否已赋值
                     * 
                     */
                    bool IsPublicHasBeenSet() const;

                private:

                    /**
                     * 云应用的实例id
                     */
                    std::string m_cloudappId;
                    bool m_cloudappIdHasBeenSet;

                    /**
                     * 数语的CAM角色
                     */
                    std::string m_appCamRole;
                    bool m_appCamRoleHasBeenSet;

                    /**
                     * 数语的公网访问ip
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 数语的公网访问端口
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 数语的CAM角色id
                     */
                    std::string m_appCamRoleId;
                    bool m_appCamRoleIdHasBeenSet;

                    /**
                     * 服务提供方
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * 租户id
                     */
                    std::string m_tenantId;
                    bool m_tenantIdHasBeenSet;

                    /**
                     * 主账号id
                     */
                    std::string m_ownId;
                    bool m_ownIdHasBeenSet;

                    /**
                     * VpcId
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Vpc地域
                     */
                    std::string m_vpcRegion;
                    bool m_vpcRegionHasBeenSet;

                    /**
                     * 数语的内网访问ip
                     */
                    std::string m_pip;
                    bool m_pipHasBeenSet;

                    /**
                     * 数语的内网访问端口
                     */
                    uint64_t m_pport;
                    bool m_pportHasBeenSet;

                    /**
                     * 是否开放公网访问数语, 1:是，0:否，默认1开放
                     */
                    uint64_t m_isPublic;
                    bool m_isPublicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_UPDATEDATAMODELREGISTRYINFOREQUEST_H_
