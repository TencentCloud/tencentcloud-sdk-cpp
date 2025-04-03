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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_ENVINFO_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_ENVINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/VpcInfo.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 环境具体信息
                */
                class EnvInfo : public AbstractModel
                {
                public:
                    EnvInfo();
                    ~EnvInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取环境名称
                     * @return EnvName 环境名称
                     * 
                     */
                    std::string GetEnvName() const;

                    /**
                     * 设置环境名称
                     * @param _envName 环境名称
                     * 
                     */
                    void SetEnvName(const std::string& _envName);

                    /**
                     * 判断参数 EnvName 是否已赋值
                     * @return EnvName 是否已赋值
                     * 
                     */
                    bool EnvNameHasBeenSet() const;

                    /**
                     * 获取环境对应的网络信息
                     * @return VpcInfos 环境对应的网络信息
                     * 
                     */
                    std::vector<VpcInfo> GetVpcInfos() const;

                    /**
                     * 设置环境对应的网络信息
                     * @param _vpcInfos 环境对应的网络信息
                     * 
                     */
                    void SetVpcInfos(const std::vector<VpcInfo>& _vpcInfos);

                    /**
                     * 判断参数 VpcInfos 是否已赋值
                     * @return VpcInfos 是否已赋值
                     * 
                     */
                    bool VpcInfosHasBeenSet() const;

                    /**
                     * 获取云硬盘容量
                     * @return StorageCapacity 云硬盘容量
                     * 
                     */
                    int64_t GetStorageCapacity() const;

                    /**
                     * 设置云硬盘容量
                     * @param _storageCapacity 云硬盘容量
                     * 
                     */
                    void SetStorageCapacity(const int64_t& _storageCapacity);

                    /**
                     * 判断参数 StorageCapacity 是否已赋值
                     * @return StorageCapacity 是否已赋值
                     * 
                     */
                    bool StorageCapacityHasBeenSet() const;

                    /**
                     * 获取运行状态
                     * @return Status 运行状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置运行状态
                     * @param _status 运行状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Admin service 访问地址
                     * @return AdminServiceIp Admin service 访问地址
                     * 
                     */
                    std::string GetAdminServiceIp() const;

                    /**
                     * 设置Admin service 访问地址
                     * @param _adminServiceIp Admin service 访问地址
                     * 
                     */
                    void SetAdminServiceIp(const std::string& _adminServiceIp);

                    /**
                     * 判断参数 AdminServiceIp 是否已赋值
                     * @return AdminServiceIp 是否已赋值
                     * 
                     */
                    bool AdminServiceIpHasBeenSet() const;

                    /**
                     * 获取Config service访问地址
                     * @return ConfigServiceIp Config service访问地址
                     * 
                     */
                    std::string GetConfigServiceIp() const;

                    /**
                     * 设置Config service访问地址
                     * @param _configServiceIp Config service访问地址
                     * 
                     */
                    void SetConfigServiceIp(const std::string& _configServiceIp);

                    /**
                     * 判断参数 ConfigServiceIp 是否已赋值
                     * @return ConfigServiceIp 是否已赋值
                     * 
                     */
                    bool ConfigServiceIpHasBeenSet() const;

                    /**
                     * 获取是否开启config-server公网
                     * @return EnableConfigInternet 是否开启config-server公网
                     * 
                     */
                    bool GetEnableConfigInternet() const;

                    /**
                     * 设置是否开启config-server公网
                     * @param _enableConfigInternet 是否开启config-server公网
                     * 
                     */
                    void SetEnableConfigInternet(const bool& _enableConfigInternet);

                    /**
                     * 判断参数 EnableConfigInternet 是否已赋值
                     * @return EnableConfigInternet 是否已赋值
                     * 
                     */
                    bool EnableConfigInternetHasBeenSet() const;

                    /**
                     * 获取config-server公网访问地址
                     * @return ConfigInternetServiceIp config-server公网访问地址
                     * 
                     */
                    std::string GetConfigInternetServiceIp() const;

                    /**
                     * 设置config-server公网访问地址
                     * @param _configInternetServiceIp config-server公网访问地址
                     * 
                     */
                    void SetConfigInternetServiceIp(const std::string& _configInternetServiceIp);

                    /**
                     * 判断参数 ConfigInternetServiceIp 是否已赋值
                     * @return ConfigInternetServiceIp 是否已赋值
                     * 
                     */
                    bool ConfigInternetServiceIpHasBeenSet() const;

                    /**
                     * 获取规格ID
                     * @return SpecId 规格ID
                     * 
                     */
                    std::string GetSpecId() const;

                    /**
                     * 设置规格ID
                     * @param _specId 规格ID
                     * 
                     */
                    void SetSpecId(const std::string& _specId);

                    /**
                     * 判断参数 SpecId 是否已赋值
                     * @return SpecId 是否已赋值
                     * 
                     */
                    bool SpecIdHasBeenSet() const;

                    /**
                     * 获取环境的节点数
                     * @return EnvReplica 环境的节点数
                     * 
                     */
                    int64_t GetEnvReplica() const;

                    /**
                     * 设置环境的节点数
                     * @param _envReplica 环境的节点数
                     * 
                     */
                    void SetEnvReplica(const int64_t& _envReplica);

                    /**
                     * 判断参数 EnvReplica 是否已赋值
                     * @return EnvReplica 是否已赋值
                     * 
                     */
                    bool EnvReplicaHasBeenSet() const;

                    /**
                     * 获取环境运行的节点数
                     * @return RunningCount 环境运行的节点数
                     * 
                     */
                    int64_t GetRunningCount() const;

                    /**
                     * 设置环境运行的节点数
                     * @param _runningCount 环境运行的节点数
                     * 
                     */
                    void SetRunningCount(const int64_t& _runningCount);

                    /**
                     * 判断参数 RunningCount 是否已赋值
                     * @return RunningCount 是否已赋值
                     * 
                     */
                    bool RunningCountHasBeenSet() const;

                    /**
                     * 获取环境别名
                     * @return AliasEnvName 环境别名
                     * 
                     */
                    std::string GetAliasEnvName() const;

                    /**
                     * 设置环境别名
                     * @param _aliasEnvName 环境别名
                     * 
                     */
                    void SetAliasEnvName(const std::string& _aliasEnvName);

                    /**
                     * 判断参数 AliasEnvName 是否已赋值
                     * @return AliasEnvName 是否已赋值
                     * 
                     */
                    bool AliasEnvNameHasBeenSet() const;

                    /**
                     * 获取环境描述
                     * @return EnvDesc 环境描述
                     * 
                     */
                    std::string GetEnvDesc() const;

                    /**
                     * 设置环境描述
                     * @param _envDesc 环境描述
                     * 
                     */
                    void SetEnvDesc(const std::string& _envDesc);

                    /**
                     * 判断参数 EnvDesc 是否已赋值
                     * @return EnvDesc 是否已赋值
                     * 
                     */
                    bool EnvDescHasBeenSet() const;

                    /**
                     * 获取客户端带宽
                     * @return ClientBandWidth 客户端带宽
                     * 
                     */
                    uint64_t GetClientBandWidth() const;

                    /**
                     * 设置客户端带宽
                     * @param _clientBandWidth 客户端带宽
                     * 
                     */
                    void SetClientBandWidth(const uint64_t& _clientBandWidth);

                    /**
                     * 判断参数 ClientBandWidth 是否已赋值
                     * @return ClientBandWidth 是否已赋值
                     * 
                     */
                    bool ClientBandWidthHasBeenSet() const;

                    /**
                     * 获取客户端内网开关
                     * @return EnableConfigIntranet 客户端内网开关
                     * 
                     */
                    bool GetEnableConfigIntranet() const;

                    /**
                     * 设置客户端内网开关
                     * @param _enableConfigIntranet 客户端内网开关
                     * 
                     */
                    void SetEnableConfigIntranet(const bool& _enableConfigIntranet);

                    /**
                     * 判断参数 EnableConfigIntranet 是否已赋值
                     * @return EnableConfigIntranet 是否已赋值
                     * 
                     */
                    bool EnableConfigIntranetHasBeenSet() const;

                private:

                    /**
                     * 环境名称
                     */
                    std::string m_envName;
                    bool m_envNameHasBeenSet;

                    /**
                     * 环境对应的网络信息
                     */
                    std::vector<VpcInfo> m_vpcInfos;
                    bool m_vpcInfosHasBeenSet;

                    /**
                     * 云硬盘容量
                     */
                    int64_t m_storageCapacity;
                    bool m_storageCapacityHasBeenSet;

                    /**
                     * 运行状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Admin service 访问地址
                     */
                    std::string m_adminServiceIp;
                    bool m_adminServiceIpHasBeenSet;

                    /**
                     * Config service访问地址
                     */
                    std::string m_configServiceIp;
                    bool m_configServiceIpHasBeenSet;

                    /**
                     * 是否开启config-server公网
                     */
                    bool m_enableConfigInternet;
                    bool m_enableConfigInternetHasBeenSet;

                    /**
                     * config-server公网访问地址
                     */
                    std::string m_configInternetServiceIp;
                    bool m_configInternetServiceIpHasBeenSet;

                    /**
                     * 规格ID
                     */
                    std::string m_specId;
                    bool m_specIdHasBeenSet;

                    /**
                     * 环境的节点数
                     */
                    int64_t m_envReplica;
                    bool m_envReplicaHasBeenSet;

                    /**
                     * 环境运行的节点数
                     */
                    int64_t m_runningCount;
                    bool m_runningCountHasBeenSet;

                    /**
                     * 环境别名
                     */
                    std::string m_aliasEnvName;
                    bool m_aliasEnvNameHasBeenSet;

                    /**
                     * 环境描述
                     */
                    std::string m_envDesc;
                    bool m_envDescHasBeenSet;

                    /**
                     * 客户端带宽
                     */
                    uint64_t m_clientBandWidth;
                    bool m_clientBandWidthHasBeenSet;

                    /**
                     * 客户端内网开关
                     */
                    bool m_enableConfigIntranet;
                    bool m_enableConfigIntranetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_ENVINFO_H_
