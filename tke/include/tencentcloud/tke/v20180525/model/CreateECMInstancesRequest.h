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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CREATEECMINSTANCESREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CREATEECMINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/ECMZoneInstanceCountISP.h>
#include <tencentcloud/tke/v20180525/model/ECMEnhancedService.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * CreateECMInstances请求参数结构体
                */
                class CreateECMInstancesRequest : public AbstractModel
                {
                public:
                    CreateECMInstancesRequest();
                    ~CreateECMInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群id，边缘集群需要先开启公网访问才能添加ecm节点
                     * @return ClusterID 集群id，边缘集群需要先开启公网访问才能添加ecm节点
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置集群id，边缘集群需要先开启公网访问才能添加ecm节点
                     * @param _clusterID 集群id，边缘集群需要先开启公网访问才能添加ecm节点
                     * 
                     */
                    void SetClusterID(const std::string& _clusterID);

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     * 
                     */
                    bool ClusterIDHasBeenSet() const;

                    /**
                     * 获取边缘模块id
                     * @return ModuleId 边缘模块id
                     * 
                     */
                    std::string GetModuleId() const;

                    /**
                     * 设置边缘模块id
                     * @param _moduleId 边缘模块id
                     * 
                     */
                    void SetModuleId(const std::string& _moduleId);

                    /**
                     * 判断参数 ModuleId 是否已赋值
                     * @return ModuleId 是否已赋值
                     * 
                     */
                    bool ModuleIdHasBeenSet() const;

                    /**
                     * 获取需要创建实例的可用区及创建数目及运营商的列表
                     * @return ZoneInstanceCountISPSet 需要创建实例的可用区及创建数目及运营商的列表
                     * 
                     */
                    std::vector<ECMZoneInstanceCountISP> GetZoneInstanceCountISPSet() const;

                    /**
                     * 设置需要创建实例的可用区及创建数目及运营商的列表
                     * @param _zoneInstanceCountISPSet 需要创建实例的可用区及创建数目及运营商的列表
                     * 
                     */
                    void SetZoneInstanceCountISPSet(const std::vector<ECMZoneInstanceCountISP>& _zoneInstanceCountISPSet);

                    /**
                     * 判断参数 ZoneInstanceCountISPSet 是否已赋值
                     * @return ZoneInstanceCountISPSet 是否已赋值
                     * 
                     */
                    bool ZoneInstanceCountISPSetHasBeenSet() const;

                    /**
                     * 获取密码
                     * @return Password 密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置密码
                     * @param _password 密码
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取公网带宽
                     * @return InternetMaxBandwidthOut 公网带宽
                     * 
                     */
                    int64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置公网带宽
                     * @param _internetMaxBandwidthOut 公网带宽
                     * 
                     */
                    void SetInternetMaxBandwidthOut(const int64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     * 
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取镜像id
                     * @return ImageId 镜像id
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置镜像id
                     * @param _imageId 镜像id
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取实例名称
                     * @return InstanceName 实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param _instanceName 实例名称
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取主机名称
                     * @return HostName 主机名称
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置主机名称
                     * @param _hostName 主机名称
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取增强服务，包括云镜和云监控
                     * @return EnhancedService 增强服务，包括云镜和云监控
                     * 
                     */
                    ECMEnhancedService GetEnhancedService() const;

                    /**
                     * 设置增强服务，包括云镜和云监控
                     * @param _enhancedService 增强服务，包括云镜和云监控
                     * 
                     */
                    void SetEnhancedService(const ECMEnhancedService& _enhancedService);

                    /**
                     * 判断参数 EnhancedService 是否已赋值
                     * @return EnhancedService 是否已赋值
                     * 
                     */
                    bool EnhancedServiceHasBeenSet() const;

                    /**
                     * 获取用户自定义脚本
                     * @return UserData 用户自定义脚本
                     * 
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置用户自定义脚本
                     * @param _userData 用户自定义脚本
                     * 
                     */
                    void SetUserData(const std::string& _userData);

                    /**
                     * 判断参数 UserData 是否已赋值
                     * @return UserData 是否已赋值
                     * 
                     */
                    bool UserDataHasBeenSet() const;

                    /**
                     * 获取实例扩展信息
                     * @return External 实例扩展信息
                     * 
                     */
                    std::string GetExternal() const;

                    /**
                     * 设置实例扩展信息
                     * @param _external 实例扩展信息
                     * 
                     */
                    void SetExternal(const std::string& _external);

                    /**
                     * 判断参数 External 是否已赋值
                     * @return External 是否已赋值
                     * 
                     */
                    bool ExternalHasBeenSet() const;

                    /**
                     * 获取实例所属安全组
                     * @return SecurityGroupIds 实例所属安全组
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置实例所属安全组
                     * @param _securityGroupIds 实例所属安全组
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                private:

                    /**
                     * 集群id，边缘集群需要先开启公网访问才能添加ecm节点
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * 边缘模块id
                     */
                    std::string m_moduleId;
                    bool m_moduleIdHasBeenSet;

                    /**
                     * 需要创建实例的可用区及创建数目及运营商的列表
                     */
                    std::vector<ECMZoneInstanceCountISP> m_zoneInstanceCountISPSet;
                    bool m_zoneInstanceCountISPSetHasBeenSet;

                    /**
                     * 密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 公网带宽
                     */
                    int64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * 镜像id
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 主机名称
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 增强服务，包括云镜和云监控
                     */
                    ECMEnhancedService m_enhancedService;
                    bool m_enhancedServiceHasBeenSet;

                    /**
                     * 用户自定义脚本
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                    /**
                     * 实例扩展信息
                     */
                    std::string m_external;
                    bool m_externalHasBeenSet;

                    /**
                     * 实例所属安全组
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CREATEECMINSTANCESREQUEST_H_
