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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_SREINSTANCE_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_SREINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/EnvInfo.h>
#include <tencentcloud/tse/v20201207/model/VpcInfo.h>
#include <tencentcloud/tse/v20201207/model/ServiceGovernanceInfo.h>
#include <tencentcloud/tse/v20201207/model/KVPair.h>
#include <tencentcloud/tse/v20201207/model/DescribeInstanceRegionInfo.h>
#include <tencentcloud/tse/v20201207/model/StorageOption.h>
#include <tencentcloud/tse/v20201207/model/ZookeeperRegionInfo.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 微服务注册引擎实例
                */
                class SREInstance : public AbstractModel
                {
                public:
                    SREInstance();
                    ~SREInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
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
                     * 获取<p>名称</p>
                     * @return Name <p>名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>名称</p>
                     * @param _name <p>名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>版本号</p>
                     * @return Edition <p>版本号</p>
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置<p>版本号</p>
                     * @param _edition <p>版本号</p>
                     * 
                     */
                    void SetEdition(const std::string& _edition);

                    /**
                     * 判断参数 Edition 是否已赋值
                     * @return Edition 是否已赋值
                     * 
                     */
                    bool EditionHasBeenSet() const;

                    /**
                     * 获取<p>状态, 枚举值:creating/create_fail/running/updating/update_fail/restarting/restart_fail/destroying/destroy_fail</p>
                     * @return Status <p>状态, 枚举值:creating/create_fail/running/updating/update_fail/restarting/restart_fail/destroying/destroy_fail</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态, 枚举值:creating/create_fail/running/updating/update_fail/restarting/restart_fail/destroying/destroy_fail</p>
                     * @param _status <p>状态, 枚举值:creating/create_fail/running/updating/update_fail/restarting/restart_fail/destroying/destroy_fail</p>
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
                     * 获取<p>规格ID</p>
                     * @return SpecId <p>规格ID</p>
                     * 
                     */
                    std::string GetSpecId() const;

                    /**
                     * 设置<p>规格ID</p>
                     * @param _specId <p>规格ID</p>
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
                     * 获取<p>副本数</p>
                     * @return Replica <p>副本数</p>
                     * 
                     */
                    int64_t GetReplica() const;

                    /**
                     * 设置<p>副本数</p>
                     * @param _replica <p>副本数</p>
                     * 
                     */
                    void SetReplica(const int64_t& _replica);

                    /**
                     * 判断参数 Replica 是否已赋值
                     * @return Replica 是否已赋值
                     * 
                     */
                    bool ReplicaHasBeenSet() const;

                    /**
                     * 获取<p>类型</p>
                     * @return Type <p>类型</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>类型</p>
                     * @param _type <p>类型</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>Vpc iD</p>
                     * @return VpcId <p>Vpc iD</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>Vpc iD</p>
                     * @param _vpcId <p>Vpc iD</p>
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
                     * 获取<p>子网ID</p>
                     * @return SubnetIds <p>子网ID</p>
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置<p>子网ID</p>
                     * @param _subnetIds <p>子网ID</p>
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
                     * 获取<p>是否开启持久化存储</p>
                     * @return EnableStorage <p>是否开启持久化存储</p>
                     * 
                     */
                    bool GetEnableStorage() const;

                    /**
                     * 设置<p>是否开启持久化存储</p>
                     * @param _enableStorage <p>是否开启持久化存储</p>
                     * 
                     */
                    void SetEnableStorage(const bool& _enableStorage);

                    /**
                     * 判断参数 EnableStorage 是否已赋值
                     * @return EnableStorage 是否已赋值
                     * 
                     */
                    bool EnableStorageHasBeenSet() const;

                    /**
                     * 获取<p>数据存储方式</p>
                     * @return StorageType <p>数据存储方式</p>
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置<p>数据存储方式</p>
                     * @param _storageType <p>数据存储方式</p>
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取<p>云硬盘容量</p>
                     * @return StorageCapacity <p>云硬盘容量</p>
                     * 
                     */
                    int64_t GetStorageCapacity() const;

                    /**
                     * 设置<p>云硬盘容量</p>
                     * @param _storageCapacity <p>云硬盘容量</p>
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
                     * 获取<p>计费方式</p>
                     * @return Paymode <p>计费方式</p>
                     * 
                     */
                    std::string GetPaymode() const;

                    /**
                     * 设置<p>计费方式</p>
                     * @param _paymode <p>计费方式</p>
                     * 
                     */
                    void SetPaymode(const std::string& _paymode);

                    /**
                     * 判断参数 Paymode 是否已赋值
                     * @return Paymode 是否已赋值
                     * 
                     */
                    bool PaymodeHasBeenSet() const;

                    /**
                     * 获取<p>EKS集群的ID</p>
                     * @return EKSClusterID <p>EKS集群的ID</p>
                     * 
                     */
                    std::string GetEKSClusterID() const;

                    /**
                     * 设置<p>EKS集群的ID</p>
                     * @param _eKSClusterID <p>EKS集群的ID</p>
                     * 
                     */
                    void SetEKSClusterID(const std::string& _eKSClusterID);

                    /**
                     * 判断参数 EKSClusterID 是否已赋值
                     * @return EKSClusterID 是否已赋值
                     * 
                     */
                    bool EKSClusterIDHasBeenSet() const;

                    /**
                     * 获取<p>集群创建时间</p>
                     * @return CreateTime <p>集群创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>集群创建时间</p>
                     * @param _createTime <p>集群创建时间</p>
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
                     * 获取<p>环境配置信息列表</p>
                     * @return EnvInfos <p>环境配置信息列表</p>
                     * 
                     */
                    std::vector<EnvInfo> GetEnvInfos() const;

                    /**
                     * 设置<p>环境配置信息列表</p>
                     * @param _envInfos <p>环境配置信息列表</p>
                     * 
                     */
                    void SetEnvInfos(const std::vector<EnvInfo>& _envInfos);

                    /**
                     * 判断参数 EnvInfos 是否已赋值
                     * @return EnvInfos 是否已赋值
                     * 
                     */
                    bool EnvInfosHasBeenSet() const;

                    /**
                     * 获取<p>引擎所在的区域</p>
                     * @return EngineRegion <p>引擎所在的区域</p>
                     * 
                     */
                    std::string GetEngineRegion() const;

                    /**
                     * 设置<p>引擎所在的区域</p>
                     * @param _engineRegion <p>引擎所在的区域</p>
                     * 
                     */
                    void SetEngineRegion(const std::string& _engineRegion);

                    /**
                     * 判断参数 EngineRegion 是否已赋值
                     * @return EngineRegion 是否已赋值
                     * 
                     */
                    bool EngineRegionHasBeenSet() const;

                    /**
                     * 获取<p>注册引擎是否开启公网</p>
                     * @return EnableInternet <p>注册引擎是否开启公网</p>
                     * 
                     */
                    bool GetEnableInternet() const;

                    /**
                     * 设置<p>注册引擎是否开启公网</p>
                     * @param _enableInternet <p>注册引擎是否开启公网</p>
                     * 
                     */
                    void SetEnableInternet(const bool& _enableInternet);

                    /**
                     * 判断参数 EnableInternet 是否已赋值
                     * @return EnableInternet 是否已赋值
                     * 
                     */
                    bool EnableInternetHasBeenSet() const;

                    /**
                     * 获取<p>私有网络列表信息</p>
                     * @return VpcInfos <p>私有网络列表信息</p>
                     * 
                     */
                    std::vector<VpcInfo> GetVpcInfos() const;

                    /**
                     * 设置<p>私有网络列表信息</p>
                     * @param _vpcInfos <p>私有网络列表信息</p>
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
                     * 获取<p>服务治理相关信息列表</p>
                     * @return ServiceGovernanceInfos <p>服务治理相关信息列表</p>
                     * 
                     */
                    std::vector<ServiceGovernanceInfo> GetServiceGovernanceInfos() const;

                    /**
                     * 设置<p>服务治理相关信息列表</p>
                     * @param _serviceGovernanceInfos <p>服务治理相关信息列表</p>
                     * 
                     */
                    void SetServiceGovernanceInfos(const std::vector<ServiceGovernanceInfo>& _serviceGovernanceInfos);

                    /**
                     * 判断参数 ServiceGovernanceInfos 是否已赋值
                     * @return ServiceGovernanceInfos 是否已赋值
                     * 
                     */
                    bool ServiceGovernanceInfosHasBeenSet() const;

                    /**
                     * 获取<p>实例的标签信息</p>
                     * @return Tags <p>实例的标签信息</p>
                     * 
                     */
                    std::vector<KVPair> GetTags() const;

                    /**
                     * 设置<p>实例的标签信息</p>
                     * @param _tags <p>实例的标签信息</p>
                     * 
                     */
                    void SetTags(const std::vector<KVPair>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>引擎实例是否开启控制台公网访问地址</p>
                     * @return EnableConsoleInternet <p>引擎实例是否开启控制台公网访问地址</p>
                     * 
                     */
                    bool GetEnableConsoleInternet() const;

                    /**
                     * 设置<p>引擎实例是否开启控制台公网访问地址</p>
                     * @param _enableConsoleInternet <p>引擎实例是否开启控制台公网访问地址</p>
                     * 
                     */
                    void SetEnableConsoleInternet(const bool& _enableConsoleInternet);

                    /**
                     * 判断参数 EnableConsoleInternet 是否已赋值
                     * @return EnableConsoleInternet 是否已赋值
                     * 
                     */
                    bool EnableConsoleInternetHasBeenSet() const;

                    /**
                     * 获取<p>引擎实例是否开启控制台内网访问地址</p>
                     * @return EnableConsoleIntranet <p>引擎实例是否开启控制台内网访问地址</p>
                     * 
                     */
                    bool GetEnableConsoleIntranet() const;

                    /**
                     * 设置<p>引擎实例是否开启控制台内网访问地址</p>
                     * @param _enableConsoleIntranet <p>引擎实例是否开启控制台内网访问地址</p>
                     * 
                     */
                    void SetEnableConsoleIntranet(const bool& _enableConsoleIntranet);

                    /**
                     * 判断参数 EnableConsoleIntranet 是否已赋值
                     * @return EnableConsoleIntranet 是否已赋值
                     * 
                     */
                    bool EnableConsoleIntranetHasBeenSet() const;

                    /**
                     * 获取<p>引擎实例是否展示参数配置页面</p>
                     * @return ConfigInfoVisible <p>引擎实例是否展示参数配置页面</p>
                     * 
                     */
                    bool GetConfigInfoVisible() const;

                    /**
                     * 设置<p>引擎实例是否展示参数配置页面</p>
                     * @param _configInfoVisible <p>引擎实例是否展示参数配置页面</p>
                     * 
                     */
                    void SetConfigInfoVisible(const bool& _configInfoVisible);

                    /**
                     * 判断参数 ConfigInfoVisible 是否已赋值
                     * @return ConfigInfoVisible 是否已赋值
                     * 
                     */
                    bool ConfigInfoVisibleHasBeenSet() const;

                    /**
                     * 获取<p>引擎实例控制台默认密码</p>
                     * @return ConsoleDefaultPwd <p>引擎实例控制台默认密码</p>
                     * 
                     */
                    std::string GetConsoleDefaultPwd() const;

                    /**
                     * 设置<p>引擎实例控制台默认密码</p>
                     * @param _consoleDefaultPwd <p>引擎实例控制台默认密码</p>
                     * 
                     */
                    void SetConsoleDefaultPwd(const std::string& _consoleDefaultPwd);

                    /**
                     * 判断参数 ConsoleDefaultPwd 是否已赋值
                     * @return ConsoleDefaultPwd 是否已赋值
                     * 
                     */
                    bool ConsoleDefaultPwdHasBeenSet() const;

                    /**
                     * 获取<p>交易付费类型，0后付费/1预付费</p>
                     * @return TradeType <p>交易付费类型，0后付费/1预付费</p>
                     * 
                     */
                    int64_t GetTradeType() const;

                    /**
                     * 设置<p>交易付费类型，0后付费/1预付费</p>
                     * @param _tradeType <p>交易付费类型，0后付费/1预付费</p>
                     * 
                     */
                    void SetTradeType(const int64_t& _tradeType);

                    /**
                     * 判断参数 TradeType 是否已赋值
                     * @return TradeType 是否已赋值
                     * 
                     */
                    bool TradeTypeHasBeenSet() const;

                    /**
                     * 获取<p>自动续费标记：0表示默认状态(用户未设置，即初始状态)， 1表示自动续费，2表示明确不自动续费</p>
                     * @return AutoRenewFlag <p>自动续费标记：0表示默认状态(用户未设置，即初始状态)， 1表示自动续费，2表示明确不自动续费</p>
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置<p>自动续费标记：0表示默认状态(用户未设置，即初始状态)， 1表示自动续费，2表示明确不自动续费</p>
                     * @param _autoRenewFlag <p>自动续费标记：0表示默认状态(用户未设置，即初始状态)， 1表示自动续费，2表示明确不自动续费</p>
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>预付费到期时间</p>
                     * @return CurDeadline <p>预付费到期时间</p>
                     * 
                     */
                    std::string GetCurDeadline() const;

                    /**
                     * 设置<p>预付费到期时间</p>
                     * @param _curDeadline <p>预付费到期时间</p>
                     * 
                     */
                    void SetCurDeadline(const std::string& _curDeadline);

                    /**
                     * 判断参数 CurDeadline 是否已赋值
                     * @return CurDeadline 是否已赋值
                     * 
                     */
                    bool CurDeadlineHasBeenSet() const;

                    /**
                     * 获取<p>隔离开始时间</p>
                     * @return IsolateTime <p>隔离开始时间</p>
                     * 
                     */
                    std::string GetIsolateTime() const;

                    /**
                     * 设置<p>隔离开始时间</p>
                     * @param _isolateTime <p>隔离开始时间</p>
                     * 
                     */
                    void SetIsolateTime(const std::string& _isolateTime);

                    /**
                     * 判断参数 IsolateTime 是否已赋值
                     * @return IsolateTime 是否已赋值
                     * 
                     */
                    bool IsolateTimeHasBeenSet() const;

                    /**
                     * 获取<p>实例地域相关的描述信息</p>
                     * @return RegionInfos <p>实例地域相关的描述信息</p>
                     * 
                     */
                    std::vector<DescribeInstanceRegionInfo> GetRegionInfos() const;

                    /**
                     * 设置<p>实例地域相关的描述信息</p>
                     * @param _regionInfos <p>实例地域相关的描述信息</p>
                     * 
                     */
                    void SetRegionInfos(const std::vector<DescribeInstanceRegionInfo>& _regionInfos);

                    /**
                     * 判断参数 RegionInfos 是否已赋值
                     * @return RegionInfos 是否已赋值
                     * 
                     */
                    bool RegionInfosHasBeenSet() const;

                    /**
                     * 获取<p>所在EKS环境，分为common和yunti</p>
                     * @return EKSType <p>所在EKS环境，分为common和yunti</p>
                     * 
                     */
                    std::string GetEKSType() const;

                    /**
                     * 设置<p>所在EKS环境，分为common和yunti</p>
                     * @param _eKSType <p>所在EKS环境，分为common和yunti</p>
                     * 
                     */
                    void SetEKSType(const std::string& _eKSType);

                    /**
                     * 判断参数 EKSType 是否已赋值
                     * @return EKSType 是否已赋值
                     * 
                     */
                    bool EKSTypeHasBeenSet() const;

                    /**
                     * 获取<p>引擎的产品版本</p>
                     * @return FeatureVersion <p>引擎的产品版本</p>
                     * 
                     */
                    std::string GetFeatureVersion() const;

                    /**
                     * 设置<p>引擎的产品版本</p>
                     * @param _featureVersion <p>引擎的产品版本</p>
                     * 
                     */
                    void SetFeatureVersion(const std::string& _featureVersion);

                    /**
                     * 判断参数 FeatureVersion 是否已赋值
                     * @return FeatureVersion 是否已赋值
                     * 
                     */
                    bool FeatureVersionHasBeenSet() const;

                    /**
                     * 获取<p>引擎实例是否开启客户端内网访问地址</p>
                     * @return EnableClientIntranet <p>引擎实例是否开启客户端内网访问地址</p>
                     * 
                     */
                    bool GetEnableClientIntranet() const;

                    /**
                     * 设置<p>引擎实例是否开启客户端内网访问地址</p>
                     * @param _enableClientIntranet <p>引擎实例是否开启客户端内网访问地址</p>
                     * 
                     */
                    void SetEnableClientIntranet(const bool& _enableClientIntranet);

                    /**
                     * 判断参数 EnableClientIntranet 是否已赋值
                     * @return EnableClientIntranet 是否已赋值
                     * 
                     */
                    bool EnableClientIntranetHasBeenSet() const;

                    /**
                     * 获取<p>存储额外配置选项</p>
                     * @return StorageOption <p>存储额外配置选项</p>
                     * 
                     */
                    std::vector<StorageOption> GetStorageOption() const;

                    /**
                     * 设置<p>存储额外配置选项</p>
                     * @param _storageOption <p>存储额外配置选项</p>
                     * 
                     */
                    void SetStorageOption(const std::vector<StorageOption>& _storageOption);

                    /**
                     * 判断参数 StorageOption 是否已赋值
                     * @return StorageOption 是否已赋值
                     * 
                     */
                    bool StorageOptionHasBeenSet() const;

                    /**
                     * 获取<p>Zookeeper的额外环境数据信息</p>
                     * @return ZookeeperRegionInfo <p>Zookeeper的额外环境数据信息</p>
                     * 
                     */
                    ZookeeperRegionInfo GetZookeeperRegionInfo() const;

                    /**
                     * 设置<p>Zookeeper的额外环境数据信息</p>
                     * @param _zookeeperRegionInfo <p>Zookeeper的额外环境数据信息</p>
                     * 
                     */
                    void SetZookeeperRegionInfo(const ZookeeperRegionInfo& _zookeeperRegionInfo);

                    /**
                     * 判断参数 ZookeeperRegionInfo 是否已赋值
                     * @return ZookeeperRegionInfo 是否已赋值
                     * 
                     */
                    bool ZookeeperRegionInfoHasBeenSet() const;

                    /**
                     * 获取<p>部署架构</p>
                     * @return DeployMode <p>部署架构</p>
                     * 
                     */
                    std::string GetDeployMode() const;

                    /**
                     * 设置<p>部署架构</p>
                     * @param _deployMode <p>部署架构</p>
                     * 
                     */
                    void SetDeployMode(const std::string& _deployMode);

                    /**
                     * 判断参数 DeployMode 是否已赋值
                     * @return DeployMode 是否已赋值
                     * 
                     */
                    bool DeployModeHasBeenSet() const;

                    /**
                     * 获取<p>全局属性</p>
                     * @return GlobalType <p>全局属性</p>
                     * 
                     */
                    std::string GetGlobalType() const;

                    /**
                     * 设置<p>全局属性</p>
                     * @param _globalType <p>全局属性</p>
                     * 
                     */
                    void SetGlobalType(const std::string& _globalType);

                    /**
                     * 判断参数 GlobalType 是否已赋值
                     * @return GlobalType 是否已赋值
                     * 
                     */
                    bool GlobalTypeHasBeenSet() const;

                    /**
                     * 获取<p>所属组类型</p>
                     * @return GroupType <p>所属组类型</p>
                     * 
                     */
                    std::string GetGroupType() const;

                    /**
                     * 设置<p>所属组类型</p>
                     * @param _groupType <p>所属组类型</p>
                     * 
                     */
                    void SetGroupType(const std::string& _groupType);

                    /**
                     * 判断参数 GroupType 是否已赋值
                     * @return GroupType 是否已赋值
                     * 
                     */
                    bool GroupTypeHasBeenSet() const;

                    /**
                     * 获取<p>组id</p>
                     * @return GroupId <p>组id</p>
                     * 
                     */
                    std::vector<std::string> GetGroupId() const;

                    /**
                     * 设置<p>组id</p>
                     * @param _groupId <p>组id</p>
                     * 
                     */
                    void SetGroupId(const std::vector<std::string>& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取<p>是否为主地域</p>
                     * @return IsMainRegion <p>是否为主地域</p>
                     * 
                     */
                    bool GetIsMainRegion() const;

                    /**
                     * 设置<p>是否为主地域</p>
                     * @param _isMainRegion <p>是否为主地域</p>
                     * 
                     */
                    void SetIsMainRegion(const bool& _isMainRegion);

                    /**
                     * 判断参数 IsMainRegion 是否已赋值
                     * @return IsMainRegion 是否已赋值
                     * 
                     */
                    bool IsMainRegionHasBeenSet() const;

                    /**
                     * 获取<p>是否禁止变更</p>
                     * @return MutationEnabled <p>是否禁止变更</p>
                     * 
                     */
                    bool GetMutationEnabled() const;

                    /**
                     * 设置<p>是否禁止变更</p>
                     * @param _mutationEnabled <p>是否禁止变更</p>
                     * 
                     */
                    void SetMutationEnabled(const bool& _mutationEnabled);

                    /**
                     * 判断参数 MutationEnabled 是否已赋值
                     * @return MutationEnabled 是否已赋值
                     * 
                     */
                    bool MutationEnabledHasBeenSet() const;

                    /**
                     * 获取<p>禁止限流</p>
                     * @return MaxCapacityLimitEnabled <p>禁止限流</p>
                     * 
                     */
                    bool GetMaxCapacityLimitEnabled() const;

                    /**
                     * 设置<p>禁止限流</p>
                     * @param _maxCapacityLimitEnabled <p>禁止限流</p>
                     * 
                     */
                    void SetMaxCapacityLimitEnabled(const bool& _maxCapacityLimitEnabled);

                    /**
                     * 判断参数 MaxCapacityLimitEnabled 是否已赋值
                     * @return MaxCapacityLimitEnabled 是否已赋值
                     * 
                     */
                    bool MaxCapacityLimitEnabledHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>版本号</p>
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * <p>状态, 枚举值:creating/create_fail/running/updating/update_fail/restarting/restart_fail/destroying/destroy_fail</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>规格ID</p>
                     */
                    std::string m_specId;
                    bool m_specIdHasBeenSet;

                    /**
                     * <p>副本数</p>
                     */
                    int64_t m_replica;
                    bool m_replicaHasBeenSet;

                    /**
                     * <p>类型</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Vpc iD</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>子网ID</p>
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * <p>是否开启持久化存储</p>
                     */
                    bool m_enableStorage;
                    bool m_enableStorageHasBeenSet;

                    /**
                     * <p>数据存储方式</p>
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>云硬盘容量</p>
                     */
                    int64_t m_storageCapacity;
                    bool m_storageCapacityHasBeenSet;

                    /**
                     * <p>计费方式</p>
                     */
                    std::string m_paymode;
                    bool m_paymodeHasBeenSet;

                    /**
                     * <p>EKS集群的ID</p>
                     */
                    std::string m_eKSClusterID;
                    bool m_eKSClusterIDHasBeenSet;

                    /**
                     * <p>集群创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>环境配置信息列表</p>
                     */
                    std::vector<EnvInfo> m_envInfos;
                    bool m_envInfosHasBeenSet;

                    /**
                     * <p>引擎所在的区域</p>
                     */
                    std::string m_engineRegion;
                    bool m_engineRegionHasBeenSet;

                    /**
                     * <p>注册引擎是否开启公网</p>
                     */
                    bool m_enableInternet;
                    bool m_enableInternetHasBeenSet;

                    /**
                     * <p>私有网络列表信息</p>
                     */
                    std::vector<VpcInfo> m_vpcInfos;
                    bool m_vpcInfosHasBeenSet;

                    /**
                     * <p>服务治理相关信息列表</p>
                     */
                    std::vector<ServiceGovernanceInfo> m_serviceGovernanceInfos;
                    bool m_serviceGovernanceInfosHasBeenSet;

                    /**
                     * <p>实例的标签信息</p>
                     */
                    std::vector<KVPair> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>引擎实例是否开启控制台公网访问地址</p>
                     */
                    bool m_enableConsoleInternet;
                    bool m_enableConsoleInternetHasBeenSet;

                    /**
                     * <p>引擎实例是否开启控制台内网访问地址</p>
                     */
                    bool m_enableConsoleIntranet;
                    bool m_enableConsoleIntranetHasBeenSet;

                    /**
                     * <p>引擎实例是否展示参数配置页面</p>
                     */
                    bool m_configInfoVisible;
                    bool m_configInfoVisibleHasBeenSet;

                    /**
                     * <p>引擎实例控制台默认密码</p>
                     */
                    std::string m_consoleDefaultPwd;
                    bool m_consoleDefaultPwdHasBeenSet;

                    /**
                     * <p>交易付费类型，0后付费/1预付费</p>
                     */
                    int64_t m_tradeType;
                    bool m_tradeTypeHasBeenSet;

                    /**
                     * <p>自动续费标记：0表示默认状态(用户未设置，即初始状态)， 1表示自动续费，2表示明确不自动续费</p>
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * <p>预付费到期时间</p>
                     */
                    std::string m_curDeadline;
                    bool m_curDeadlineHasBeenSet;

                    /**
                     * <p>隔离开始时间</p>
                     */
                    std::string m_isolateTime;
                    bool m_isolateTimeHasBeenSet;

                    /**
                     * <p>实例地域相关的描述信息</p>
                     */
                    std::vector<DescribeInstanceRegionInfo> m_regionInfos;
                    bool m_regionInfosHasBeenSet;

                    /**
                     * <p>所在EKS环境，分为common和yunti</p>
                     */
                    std::string m_eKSType;
                    bool m_eKSTypeHasBeenSet;

                    /**
                     * <p>引擎的产品版本</p>
                     */
                    std::string m_featureVersion;
                    bool m_featureVersionHasBeenSet;

                    /**
                     * <p>引擎实例是否开启客户端内网访问地址</p>
                     */
                    bool m_enableClientIntranet;
                    bool m_enableClientIntranetHasBeenSet;

                    /**
                     * <p>存储额外配置选项</p>
                     */
                    std::vector<StorageOption> m_storageOption;
                    bool m_storageOptionHasBeenSet;

                    /**
                     * <p>Zookeeper的额外环境数据信息</p>
                     */
                    ZookeeperRegionInfo m_zookeeperRegionInfo;
                    bool m_zookeeperRegionInfoHasBeenSet;

                    /**
                     * <p>部署架构</p>
                     */
                    std::string m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * <p>全局属性</p>
                     */
                    std::string m_globalType;
                    bool m_globalTypeHasBeenSet;

                    /**
                     * <p>所属组类型</p>
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                    /**
                     * <p>组id</p>
                     */
                    std::vector<std::string> m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>是否为主地域</p>
                     */
                    bool m_isMainRegion;
                    bool m_isMainRegionHasBeenSet;

                    /**
                     * <p>是否禁止变更</p>
                     */
                    bool m_mutationEnabled;
                    bool m_mutationEnabledHasBeenSet;

                    /**
                     * <p>禁止限流</p>
                     */
                    bool m_maxCapacityLimitEnabled;
                    bool m_maxCapacityLimitEnabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_SREINSTANCE_H_
