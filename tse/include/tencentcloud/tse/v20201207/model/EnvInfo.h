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
                     */
                    std::string GetEnvName() const;

                    /**
                     * 设置环境名称
                     * @param EnvName 环境名称
                     */
                    void SetEnvName(const std::string& _envName);

                    /**
                     * 判断参数 EnvName 是否已赋值
                     * @return EnvName 是否已赋值
                     */
                    bool EnvNameHasBeenSet() const;

                    /**
                     * 获取环境对应的网络信息
                     * @return VpcInfos 环境对应的网络信息
                     */
                    std::vector<VpcInfo> GetVpcInfos() const;

                    /**
                     * 设置环境对应的网络信息
                     * @param VpcInfos 环境对应的网络信息
                     */
                    void SetVpcInfos(const std::vector<VpcInfo>& _vpcInfos);

                    /**
                     * 判断参数 VpcInfos 是否已赋值
                     * @return VpcInfos 是否已赋值
                     */
                    bool VpcInfosHasBeenSet() const;

                    /**
                     * 获取云硬盘容量
                     * @return StorageCapacity 云硬盘容量
                     */
                    int64_t GetStorageCapacity() const;

                    /**
                     * 设置云硬盘容量
                     * @param StorageCapacity 云硬盘容量
                     */
                    void SetStorageCapacity(const int64_t& _storageCapacity);

                    /**
                     * 判断参数 StorageCapacity 是否已赋值
                     * @return StorageCapacity 是否已赋值
                     */
                    bool StorageCapacityHasBeenSet() const;

                    /**
                     * 获取运行状态
                     * @return Status 运行状态
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置运行状态
                     * @param Status 运行状态
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Admin service 访问地址
                     * @return AdminServiceIp Admin service 访问地址
                     */
                    std::string GetAdminServiceIp() const;

                    /**
                     * 设置Admin service 访问地址
                     * @param AdminServiceIp Admin service 访问地址
                     */
                    void SetAdminServiceIp(const std::string& _adminServiceIp);

                    /**
                     * 判断参数 AdminServiceIp 是否已赋值
                     * @return AdminServiceIp 是否已赋值
                     */
                    bool AdminServiceIpHasBeenSet() const;

                    /**
                     * 获取Config service访问地址
                     * @return ConfigServiceIp Config service访问地址
                     */
                    std::string GetConfigServiceIp() const;

                    /**
                     * 设置Config service访问地址
                     * @param ConfigServiceIp Config service访问地址
                     */
                    void SetConfigServiceIp(const std::string& _configServiceIp);

                    /**
                     * 判断参数 ConfigServiceIp 是否已赋值
                     * @return ConfigServiceIp 是否已赋值
                     */
                    bool ConfigServiceIpHasBeenSet() const;

                    /**
                     * 获取是否开启config-server公网
                     * @return EnableConfigInternet 是否开启config-server公网
                     */
                    bool GetEnableConfigInternet() const;

                    /**
                     * 设置是否开启config-server公网
                     * @param EnableConfigInternet 是否开启config-server公网
                     */
                    void SetEnableConfigInternet(const bool& _enableConfigInternet);

                    /**
                     * 判断参数 EnableConfigInternet 是否已赋值
                     * @return EnableConfigInternet 是否已赋值
                     */
                    bool EnableConfigInternetHasBeenSet() const;

                    /**
                     * 获取config-server公网访问地址
                     * @return ConfigInternetServiceIp config-server公网访问地址
                     */
                    std::string GetConfigInternetServiceIp() const;

                    /**
                     * 设置config-server公网访问地址
                     * @param ConfigInternetServiceIp config-server公网访问地址
                     */
                    void SetConfigInternetServiceIp(const std::string& _configInternetServiceIp);

                    /**
                     * 判断参数 ConfigInternetServiceIp 是否已赋值
                     * @return ConfigInternetServiceIp 是否已赋值
                     */
                    bool ConfigInternetServiceIpHasBeenSet() const;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_ENVINFO_H_
