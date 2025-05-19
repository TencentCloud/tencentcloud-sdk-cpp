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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_INSTANCE_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_INSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hai/v20230812/model/SystemDisk.h>
#include <tencentcloud/hai/v20230812/model/LoginService.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            namespace Model
            {
                /**
                * 实例信息
                */
                class Instance : public AbstractModel
                {
                public:
                    Instance();
                    ~Instance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

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
                     * 获取实例状态：
PENDING：表示创建中
LAUNCH_FAILED：表示创建失败
RUNNING：表示运行中
ARREARS：表示待回收
STOPPED_NO_CHARGE：表示关机不收费
TERMINATING：表示销毁中
TERMINATED：表示已销毁
                     * @return InstanceState 实例状态：
PENDING：表示创建中
LAUNCH_FAILED：表示创建失败
RUNNING：表示运行中
ARREARS：表示待回收
STOPPED_NO_CHARGE：表示关机不收费
TERMINATING：表示销毁中
TERMINATED：表示已销毁
                     * 
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置实例状态：
PENDING：表示创建中
LAUNCH_FAILED：表示创建失败
RUNNING：表示运行中
ARREARS：表示待回收
STOPPED_NO_CHARGE：表示关机不收费
TERMINATING：表示销毁中
TERMINATED：表示已销毁
                     * @param _instanceState 实例状态：
PENDING：表示创建中
LAUNCH_FAILED：表示创建失败
RUNNING：表示运行中
ARREARS：表示待回收
STOPPED_NO_CHARGE：表示关机不收费
TERMINATING：表示销毁中
TERMINATED：表示已销毁
                     * 
                     */
                    void SetInstanceState(const std::string& _instanceState);

                    /**
                     * 判断参数 InstanceState 是否已赋值
                     * @return InstanceState 是否已赋值
                     * 
                     */
                    bool InstanceStateHasBeenSet() const;

                    /**
                     * 获取应用名称

                     * @return ApplicationName 应用名称

                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置应用名称

                     * @param _applicationName 应用名称

                     * 
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     * 
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取算力套餐名称

                     * @return BundleName 算力套餐名称

                     * 
                     */
                    std::string GetBundleName() const;

                    /**
                     * 设置算力套餐名称

                     * @param _bundleName 算力套餐名称

                     * 
                     */
                    void SetBundleName(const std::string& _bundleName);

                    /**
                     * 判断参数 BundleName 是否已赋值
                     * @return BundleName 是否已赋值
                     * 
                     */
                    bool BundleNameHasBeenSet() const;

                    /**
                     * 获取实例所包含的GPU卡数
                     * @return GPUCount 实例所包含的GPU卡数
                     * 
                     */
                    uint64_t GetGPUCount() const;

                    /**
                     * 设置实例所包含的GPU卡数
                     * @param _gPUCount 实例所包含的GPU卡数
                     * 
                     */
                    void SetGPUCount(const uint64_t& _gPUCount);

                    /**
                     * 判断参数 GPUCount 是否已赋值
                     * @return GPUCount 是否已赋值
                     * 
                     */
                    bool GPUCountHasBeenSet() const;

                    /**
                     * 获取算力

                     * @return GPUPerformance 算力

                     * 
                     */
                    std::string GetGPUPerformance() const;

                    /**
                     * 设置算力

                     * @param _gPUPerformance 算力

                     * 
                     */
                    void SetGPUPerformance(const std::string& _gPUPerformance);

                    /**
                     * 判断参数 GPUPerformance 是否已赋值
                     * @return GPUPerformance 是否已赋值
                     * 
                     */
                    bool GPUPerformanceHasBeenSet() const;

                    /**
                     * 获取显存，单位：GB
                     * @return GPUMemory 显存，单位：GB
                     * 
                     */
                    std::string GetGPUMemory() const;

                    /**
                     * 设置显存，单位：GB
                     * @param _gPUMemory 显存，单位：GB
                     * 
                     */
                    void SetGPUMemory(const std::string& _gPUMemory);

                    /**
                     * 判断参数 GPUMemory 是否已赋值
                     * @return GPUMemory 是否已赋值
                     * 
                     */
                    bool GPUMemoryHasBeenSet() const;

                    /**
                     * 获取CPU核数，单位：核
                     * @return CPU CPU核数，单位：核
                     * 
                     */
                    std::string GetCPU() const;

                    /**
                     * 设置CPU核数，单位：核
                     * @param _cPU CPU核数，单位：核
                     * 
                     */
                    void SetCPU(const std::string& _cPU);

                    /**
                     * 判断参数 CPU 是否已赋值
                     * @return CPU 是否已赋值
                     * 
                     */
                    bool CPUHasBeenSet() const;

                    /**
                     * 获取内存，单位：GB

                     * @return Memory 内存，单位：GB

                     * 
                     */
                    std::string GetMemory() const;

                    /**
                     * 设置内存，单位：GB

                     * @param _memory 内存，单位：GB

                     * 
                     */
                    void SetMemory(const std::string& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取系统盘数据
                     * @return SystemDisk 系统盘数据
                     * 
                     */
                    SystemDisk GetSystemDisk() const;

                    /**
                     * 设置系统盘数据
                     * @param _systemDisk 系统盘数据
                     * 
                     */
                    void SetSystemDisk(const SystemDisk& _systemDisk);

                    /**
                     * 判断参数 SystemDisk 是否已赋值
                     * @return SystemDisk 是否已赋值
                     * 
                     */
                    bool SystemDiskHasBeenSet() const;

                    /**
                     * 获取内网ip地址
                     * @return PrivateIpAddresses 内网ip地址
                     * 
                     */
                    std::vector<std::string> GetPrivateIpAddresses() const;

                    /**
                     * 设置内网ip地址
                     * @param _privateIpAddresses 内网ip地址
                     * 
                     */
                    void SetPrivateIpAddresses(const std::vector<std::string>& _privateIpAddresses);

                    /**
                     * 判断参数 PrivateIpAddresses 是否已赋值
                     * @return PrivateIpAddresses 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressesHasBeenSet() const;

                    /**
                     * 获取公网ip地址
                     * @return PublicIpAddresses 公网ip地址
                     * 
                     */
                    std::vector<std::string> GetPublicIpAddresses() const;

                    /**
                     * 设置公网ip地址
                     * @param _publicIpAddresses 公网ip地址
                     * 
                     */
                    void SetPublicIpAddresses(const std::vector<std::string>& _publicIpAddresses);

                    /**
                     * 判断参数 PublicIpAddresses 是否已赋值
                     * @return PublicIpAddresses 是否已赋值
                     * 
                     */
                    bool PublicIpAddressesHasBeenSet() const;

                    /**
                     * 获取安全组ID

                     * @return SecurityGroupIds 安全组ID

                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置安全组ID

                     * @param _securityGroupIds 安全组ID

                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取实例最新操作
                     * @return LatestOperation 实例最新操作
                     * 
                     */
                    std::string GetLatestOperation() const;

                    /**
                     * 设置实例最新操作
                     * @param _latestOperation 实例最新操作
                     * 
                     */
                    void SetLatestOperation(const std::string& _latestOperation);

                    /**
                     * 判断参数 LatestOperation 是否已赋值
                     * @return LatestOperation 是否已赋值
                     * 
                     */
                    bool LatestOperationHasBeenSet() const;

                    /**
                     * 获取实例最新操作状态：
SUCCESS：表示操作成功
OPERATING：表示操作执行中
FAILED：表示操作失败

                     * @return LatestOperationState 实例最新操作状态：
SUCCESS：表示操作成功
OPERATING：表示操作执行中
FAILED：表示操作失败

                     * 
                     */
                    std::string GetLatestOperationState() const;

                    /**
                     * 设置实例最新操作状态：
SUCCESS：表示操作成功
OPERATING：表示操作执行中
FAILED：表示操作失败

                     * @param _latestOperationState 实例最新操作状态：
SUCCESS：表示操作成功
OPERATING：表示操作执行中
FAILED：表示操作失败

                     * 
                     */
                    void SetLatestOperationState(const std::string& _latestOperationState);

                    /**
                     * 判断参数 LatestOperationState 是否已赋值
                     * @return LatestOperationState 是否已赋值
                     * 
                     */
                    bool LatestOperationStateHasBeenSet() const;

                    /**
                     * 获取实例创建时间，时间格式："YYYY-MM-DD HH:MM:SS"
                     * @return CreateTime 实例创建时间，时间格式："YYYY-MM-DD HH:MM:SS"
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置实例创建时间，时间格式："YYYY-MM-DD HH:MM:SS"
                     * @param _createTime 实例创建时间，时间格式："YYYY-MM-DD HH:MM:SS"
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取公网出带宽上限，默认10Mbps，单位：Mbps
                     * @return MaxOutBandwidth 公网出带宽上限，默认10Mbps，单位：Mbps
                     * 
                     */
                    std::string GetMaxOutBandwidth() const;

                    /**
                     * 设置公网出带宽上限，默认10Mbps，单位：Mbps
                     * @param _maxOutBandwidth 公网出带宽上限，默认10Mbps，单位：Mbps
                     * 
                     */
                    void SetMaxOutBandwidth(const std::string& _maxOutBandwidth);

                    /**
                     * 判断参数 MaxOutBandwidth 是否已赋值
                     * @return MaxOutBandwidth 是否已赋值
                     * 
                     */
                    bool MaxOutBandwidthHasBeenSet() const;

                    /**
                     * 获取每月免费流量，默认500G，单位：GB
                     * @return MaxFreeTraffic 每月免费流量，默认500G，单位：GB
                     * 
                     */
                    std::string GetMaxFreeTraffic() const;

                    /**
                     * 设置每月免费流量，默认500G，单位：GB
                     * @param _maxFreeTraffic 每月免费流量，默认500G，单位：GB
                     * 
                     */
                    void SetMaxFreeTraffic(const std::string& _maxFreeTraffic);

                    /**
                     * 判断参数 MaxFreeTraffic 是否已赋值
                     * @return MaxFreeTraffic 是否已赋值
                     * 
                     */
                    bool MaxFreeTrafficHasBeenSet() const;

                    /**
                     * 获取应用配置环境
                     * @return ConfigurationEnvironment 应用配置环境
                     * 
                     */
                    std::string GetConfigurationEnvironment() const;

                    /**
                     * 设置应用配置环境
                     * @param _configurationEnvironment 应用配置环境
                     * 
                     */
                    void SetConfigurationEnvironment(const std::string& _configurationEnvironment);

                    /**
                     * 判断参数 ConfigurationEnvironment 是否已赋值
                     * @return ConfigurationEnvironment 是否已赋值
                     * 
                     */
                    bool ConfigurationEnvironmentHasBeenSet() const;

                    /**
                     * 获取实例包含的登录服务详情
                     * @return LoginServices 实例包含的登录服务详情
                     * 
                     */
                    std::vector<LoginService> GetLoginServices() const;

                    /**
                     * 设置实例包含的登录服务详情
                     * @param _loginServices 实例包含的登录服务详情
                     * 
                     */
                    void SetLoginServices(const std::vector<LoginService>& _loginServices);

                    /**
                     * 判断参数 LoginServices 是否已赋值
                     * @return LoginServices 是否已赋值
                     * 
                     */
                    bool LoginServicesHasBeenSet() const;

                    /**
                     * 获取应用服务的操作系统类型；参数：linux、windows
                     * @return OSType 应用服务的操作系统类型；参数：linux、windows
                     * 
                     */
                    std::string GetOSType() const;

                    /**
                     * 设置应用服务的操作系统类型；参数：linux、windows
                     * @param _oSType 应用服务的操作系统类型；参数：linux、windows
                     * 
                     */
                    void SetOSType(const std::string& _oSType);

                    /**
                     * 判断参数 OSType 是否已赋值
                     * @return OSType 是否已赋值
                     * 
                     */
                    bool OSTypeHasBeenSet() const;

                private:

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例状态：
PENDING：表示创建中
LAUNCH_FAILED：表示创建失败
RUNNING：表示运行中
ARREARS：表示待回收
STOPPED_NO_CHARGE：表示关机不收费
TERMINATING：表示销毁中
TERMINATED：表示已销毁
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * 应用名称

                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * 算力套餐名称

                     */
                    std::string m_bundleName;
                    bool m_bundleNameHasBeenSet;

                    /**
                     * 实例所包含的GPU卡数
                     */
                    uint64_t m_gPUCount;
                    bool m_gPUCountHasBeenSet;

                    /**
                     * 算力

                     */
                    std::string m_gPUPerformance;
                    bool m_gPUPerformanceHasBeenSet;

                    /**
                     * 显存，单位：GB
                     */
                    std::string m_gPUMemory;
                    bool m_gPUMemoryHasBeenSet;

                    /**
                     * CPU核数，单位：核
                     */
                    std::string m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * 内存，单位：GB

                     */
                    std::string m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 系统盘数据
                     */
                    SystemDisk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * 内网ip地址
                     */
                    std::vector<std::string> m_privateIpAddresses;
                    bool m_privateIpAddressesHasBeenSet;

                    /**
                     * 公网ip地址
                     */
                    std::vector<std::string> m_publicIpAddresses;
                    bool m_publicIpAddressesHasBeenSet;

                    /**
                     * 安全组ID

                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * 实例最新操作
                     */
                    std::string m_latestOperation;
                    bool m_latestOperationHasBeenSet;

                    /**
                     * 实例最新操作状态：
SUCCESS：表示操作成功
OPERATING：表示操作执行中
FAILED：表示操作失败

                     */
                    std::string m_latestOperationState;
                    bool m_latestOperationStateHasBeenSet;

                    /**
                     * 实例创建时间，时间格式："YYYY-MM-DD HH:MM:SS"
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 公网出带宽上限，默认10Mbps，单位：Mbps
                     */
                    std::string m_maxOutBandwidth;
                    bool m_maxOutBandwidthHasBeenSet;

                    /**
                     * 每月免费流量，默认500G，单位：GB
                     */
                    std::string m_maxFreeTraffic;
                    bool m_maxFreeTrafficHasBeenSet;

                    /**
                     * 应用配置环境
                     */
                    std::string m_configurationEnvironment;
                    bool m_configurationEnvironmentHasBeenSet;

                    /**
                     * 实例包含的登录服务详情
                     */
                    std::vector<LoginService> m_loginServices;
                    bool m_loginServicesHasBeenSet;

                    /**
                     * 应用服务的操作系统类型；参数：linux、windows
                     */
                    std::string m_oSType;
                    bool m_oSTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_INSTANCE_H_
