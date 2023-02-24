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
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param InstanceId 实例ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取名称
                     * @return Name 名称
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param Name 名称
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取版本号
                     * @return Edition 版本号
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置版本号
                     * @param Edition 版本号
                     */
                    void SetEdition(const std::string& _edition);

                    /**
                     * 判断参数 Edition 是否已赋值
                     * @return Edition 是否已赋值
                     */
                    bool EditionHasBeenSet() const;

                    /**
                     * 获取状态, 枚举值:creating/create_fail/running/updating/update_fail/restarting/restart_fail/destroying/destroy_fail
                     * @return Status 状态, 枚举值:creating/create_fail/running/updating/update_fail/restarting/restart_fail/destroying/destroy_fail
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态, 枚举值:creating/create_fail/running/updating/update_fail/restarting/restart_fail/destroying/destroy_fail
                     * @param Status 状态, 枚举值:creating/create_fail/running/updating/update_fail/restarting/restart_fail/destroying/destroy_fail
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取规格ID
                     * @return SpecId 规格ID
                     */
                    std::string GetSpecId() const;

                    /**
                     * 设置规格ID
                     * @param SpecId 规格ID
                     */
                    void SetSpecId(const std::string& _specId);

                    /**
                     * 判断参数 SpecId 是否已赋值
                     * @return SpecId 是否已赋值
                     */
                    bool SpecIdHasBeenSet() const;

                    /**
                     * 获取副本数
                     * @return Replica 副本数
                     */
                    int64_t GetReplica() const;

                    /**
                     * 设置副本数
                     * @param Replica 副本数
                     */
                    void SetReplica(const int64_t& _replica);

                    /**
                     * 判断参数 Replica 是否已赋值
                     * @return Replica 是否已赋值
                     */
                    bool ReplicaHasBeenSet() const;

                    /**
                     * 获取类型
                     * @return Type 类型
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型
                     * @param Type 类型
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Vpc iD
                     * @return VpcId Vpc iD
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Vpc iD
                     * @param VpcId Vpc iD
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetIds 子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SubnetIds 子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSubnetIds(const std::vector<std::string>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取是否开启持久化存储
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableStorage 是否开启持久化存储
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetEnableStorage() const;

                    /**
                     * 设置是否开启持久化存储
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EnableStorage 是否开启持久化存储
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEnableStorage(const bool& _enableStorage);

                    /**
                     * 判断参数 EnableStorage 是否已赋值
                     * @return EnableStorage 是否已赋值
                     */
                    bool EnableStorageHasBeenSet() const;

                    /**
                     * 获取数据存储方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageType 数据存储方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置数据存储方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StorageType 数据存储方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取云硬盘容量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageCapacity 云硬盘容量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetStorageCapacity() const;

                    /**
                     * 设置云硬盘容量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StorageCapacity 云硬盘容量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStorageCapacity(const int64_t& _storageCapacity);

                    /**
                     * 判断参数 StorageCapacity 是否已赋值
                     * @return StorageCapacity 是否已赋值
                     */
                    bool StorageCapacityHasBeenSet() const;

                    /**
                     * 获取计费方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Paymode 计费方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPaymode() const;

                    /**
                     * 设置计费方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Paymode 计费方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPaymode(const std::string& _paymode);

                    /**
                     * 判断参数 Paymode 是否已赋值
                     * @return Paymode 是否已赋值
                     */
                    bool PaymodeHasBeenSet() const;

                    /**
                     * 获取EKS集群的ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EKSClusterID EKS集群的ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEKSClusterID() const;

                    /**
                     * 设置EKS集群的ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EKSClusterID EKS集群的ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEKSClusterID(const std::string& _eKSClusterID);

                    /**
                     * 判断参数 EKSClusterID 是否已赋值
                     * @return EKSClusterID 是否已赋值
                     */
                    bool EKSClusterIDHasBeenSet() const;

                    /**
                     * 获取集群创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 集群创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置集群创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateTime 集群创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取环境配置信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnvInfos 环境配置信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EnvInfo> GetEnvInfos() const;

                    /**
                     * 设置环境配置信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EnvInfos 环境配置信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEnvInfos(const std::vector<EnvInfo>& _envInfos);

                    /**
                     * 判断参数 EnvInfos 是否已赋值
                     * @return EnvInfos 是否已赋值
                     */
                    bool EnvInfosHasBeenSet() const;

                    /**
                     * 获取引擎所在的区域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineRegion 引擎所在的区域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEngineRegion() const;

                    /**
                     * 设置引擎所在的区域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EngineRegion 引擎所在的区域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEngineRegion(const std::string& _engineRegion);

                    /**
                     * 判断参数 EngineRegion 是否已赋值
                     * @return EngineRegion 是否已赋值
                     */
                    bool EngineRegionHasBeenSet() const;

                    /**
                     * 获取注册引擎是否开启公网
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableInternet 注册引擎是否开启公网
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetEnableInternet() const;

                    /**
                     * 设置注册引擎是否开启公网
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EnableInternet 注册引擎是否开启公网
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEnableInternet(const bool& _enableInternet);

                    /**
                     * 判断参数 EnableInternet 是否已赋值
                     * @return EnableInternet 是否已赋值
                     */
                    bool EnableInternetHasBeenSet() const;

                    /**
                     * 获取私有网络列表信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcInfos 私有网络列表信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<VpcInfo> GetVpcInfos() const;

                    /**
                     * 设置私有网络列表信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VpcInfos 私有网络列表信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVpcInfos(const std::vector<VpcInfo>& _vpcInfos);

                    /**
                     * 判断参数 VpcInfos 是否已赋值
                     * @return VpcInfos 是否已赋值
                     */
                    bool VpcInfosHasBeenSet() const;

                    /**
                     * 获取服务治理相关信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceGovernanceInfos 服务治理相关信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ServiceGovernanceInfo> GetServiceGovernanceInfos() const;

                    /**
                     * 设置服务治理相关信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ServiceGovernanceInfos 服务治理相关信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetServiceGovernanceInfos(const std::vector<ServiceGovernanceInfo>& _serviceGovernanceInfos);

                    /**
                     * 判断参数 ServiceGovernanceInfos 是否已赋值
                     * @return ServiceGovernanceInfos 是否已赋值
                     */
                    bool ServiceGovernanceInfosHasBeenSet() const;

                    /**
                     * 获取实例的标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 实例的标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KVPair> GetTags() const;

                    /**
                     * 设置实例的标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Tags 实例的标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTags(const std::vector<KVPair>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取引擎实例是否开启控制台公网访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableConsoleInternet 引擎实例是否开启控制台公网访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetEnableConsoleInternet() const;

                    /**
                     * 设置引擎实例是否开启控制台公网访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EnableConsoleInternet 引擎实例是否开启控制台公网访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEnableConsoleInternet(const bool& _enableConsoleInternet);

                    /**
                     * 判断参数 EnableConsoleInternet 是否已赋值
                     * @return EnableConsoleInternet 是否已赋值
                     */
                    bool EnableConsoleInternetHasBeenSet() const;

                    /**
                     * 获取引擎实例是否开启控制台内网访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableConsoleIntranet 引擎实例是否开启控制台内网访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetEnableConsoleIntranet() const;

                    /**
                     * 设置引擎实例是否开启控制台内网访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EnableConsoleIntranet 引擎实例是否开启控制台内网访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEnableConsoleIntranet(const bool& _enableConsoleIntranet);

                    /**
                     * 判断参数 EnableConsoleIntranet 是否已赋值
                     * @return EnableConsoleIntranet 是否已赋值
                     */
                    bool EnableConsoleIntranetHasBeenSet() const;

                    /**
                     * 获取引擎实例是否展示参数配置页面
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigInfoVisible 引擎实例是否展示参数配置页面
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetConfigInfoVisible() const;

                    /**
                     * 设置引擎实例是否展示参数配置页面
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ConfigInfoVisible 引擎实例是否展示参数配置页面
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetConfigInfoVisible(const bool& _configInfoVisible);

                    /**
                     * 判断参数 ConfigInfoVisible 是否已赋值
                     * @return ConfigInfoVisible 是否已赋值
                     */
                    bool ConfigInfoVisibleHasBeenSet() const;

                    /**
                     * 获取引擎实例控制台默认密码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConsoleDefaultPwd 引擎实例控制台默认密码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetConsoleDefaultPwd() const;

                    /**
                     * 设置引擎实例控制台默认密码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ConsoleDefaultPwd 引擎实例控制台默认密码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetConsoleDefaultPwd(const std::string& _consoleDefaultPwd);

                    /**
                     * 判断参数 ConsoleDefaultPwd 是否已赋值
                     * @return ConsoleDefaultPwd 是否已赋值
                     */
                    bool ConsoleDefaultPwdHasBeenSet() const;

                    /**
                     * 获取交易付费类型，0后付费/1预付费
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TradeType 交易付费类型，0后付费/1预付费
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetTradeType() const;

                    /**
                     * 设置交易付费类型，0后付费/1预付费
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TradeType 交易付费类型，0后付费/1预付费
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTradeType(const int64_t& _tradeType);

                    /**
                     * 判断参数 TradeType 是否已赋值
                     * @return TradeType 是否已赋值
                     */
                    bool TradeTypeHasBeenSet() const;

                    /**
                     * 获取自动续费标记：0表示默认状态(用户未设置，即初始状态)， 1表示自动续费，2表示明确不自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoRenewFlag 自动续费标记：0表示默认状态(用户未设置，即初始状态)， 1表示自动续费，2表示明确不自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置自动续费标记：0表示默认状态(用户未设置，即初始状态)， 1表示自动续费，2表示明确不自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AutoRenewFlag 自动续费标记：0表示默认状态(用户未设置，即初始状态)， 1表示自动续费，2表示明确不自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取预付费到期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CurDeadline 预付费到期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCurDeadline() const;

                    /**
                     * 设置预付费到期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CurDeadline 预付费到期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCurDeadline(const std::string& _curDeadline);

                    /**
                     * 判断参数 CurDeadline 是否已赋值
                     * @return CurDeadline 是否已赋值
                     */
                    bool CurDeadlineHasBeenSet() const;

                    /**
                     * 获取隔离开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsolateTime 隔离开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetIsolateTime() const;

                    /**
                     * 设置隔离开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsolateTime 隔离开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsolateTime(const std::string& _isolateTime);

                    /**
                     * 判断参数 IsolateTime 是否已赋值
                     * @return IsolateTime 是否已赋值
                     */
                    bool IsolateTimeHasBeenSet() const;

                    /**
                     * 获取实例地域相关的描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionInfos 实例地域相关的描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DescribeInstanceRegionInfo> GetRegionInfos() const;

                    /**
                     * 设置实例地域相关的描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RegionInfos 实例地域相关的描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRegionInfos(const std::vector<DescribeInstanceRegionInfo>& _regionInfos);

                    /**
                     * 判断参数 RegionInfos 是否已赋值
                     * @return RegionInfos 是否已赋值
                     */
                    bool RegionInfosHasBeenSet() const;

                    /**
                     * 获取所在EKS环境，分为common和yunti
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EKSType 所在EKS环境，分为common和yunti
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEKSType() const;

                    /**
                     * 设置所在EKS环境，分为common和yunti
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EKSType 所在EKS环境，分为common和yunti
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEKSType(const std::string& _eKSType);

                    /**
                     * 判断参数 EKSType 是否已赋值
                     * @return EKSType 是否已赋值
                     */
                    bool EKSTypeHasBeenSet() const;

                    /**
                     * 获取引擎的产品版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FeatureVersion 引擎的产品版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFeatureVersion() const;

                    /**
                     * 设置引擎的产品版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FeatureVersion 引擎的产品版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFeatureVersion(const std::string& _featureVersion);

                    /**
                     * 判断参数 FeatureVersion 是否已赋值
                     * @return FeatureVersion 是否已赋值
                     */
                    bool FeatureVersionHasBeenSet() const;

                    /**
                     * 获取引擎实例是否开启客户端内网访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableClientIntranet 引擎实例是否开启客户端内网访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetEnableClientIntranet() const;

                    /**
                     * 设置引擎实例是否开启客户端内网访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EnableClientIntranet 引擎实例是否开启客户端内网访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEnableClientIntranet(const bool& _enableClientIntranet);

                    /**
                     * 判断参数 EnableClientIntranet 是否已赋值
                     * @return EnableClientIntranet 是否已赋值
                     */
                    bool EnableClientIntranetHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 版本号
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * 状态, 枚举值:creating/create_fail/running/updating/update_fail/restarting/restart_fail/destroying/destroy_fail
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 规格ID
                     */
                    std::string m_specId;
                    bool m_specIdHasBeenSet;

                    /**
                     * 副本数
                     */
                    int64_t m_replica;
                    bool m_replicaHasBeenSet;

                    /**
                     * 类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Vpc iD
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * 是否开启持久化存储
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableStorage;
                    bool m_enableStorageHasBeenSet;

                    /**
                     * 数据存储方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * 云硬盘容量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_storageCapacity;
                    bool m_storageCapacityHasBeenSet;

                    /**
                     * 计费方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paymode;
                    bool m_paymodeHasBeenSet;

                    /**
                     * EKS集群的ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eKSClusterID;
                    bool m_eKSClusterIDHasBeenSet;

                    /**
                     * 集群创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 环境配置信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EnvInfo> m_envInfos;
                    bool m_envInfosHasBeenSet;

                    /**
                     * 引擎所在的区域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_engineRegion;
                    bool m_engineRegionHasBeenSet;

                    /**
                     * 注册引擎是否开启公网
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableInternet;
                    bool m_enableInternetHasBeenSet;

                    /**
                     * 私有网络列表信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<VpcInfo> m_vpcInfos;
                    bool m_vpcInfosHasBeenSet;

                    /**
                     * 服务治理相关信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ServiceGovernanceInfo> m_serviceGovernanceInfos;
                    bool m_serviceGovernanceInfosHasBeenSet;

                    /**
                     * 实例的标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KVPair> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 引擎实例是否开启控制台公网访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableConsoleInternet;
                    bool m_enableConsoleInternetHasBeenSet;

                    /**
                     * 引擎实例是否开启控制台内网访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableConsoleIntranet;
                    bool m_enableConsoleIntranetHasBeenSet;

                    /**
                     * 引擎实例是否展示参数配置页面
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_configInfoVisible;
                    bool m_configInfoVisibleHasBeenSet;

                    /**
                     * 引擎实例控制台默认密码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_consoleDefaultPwd;
                    bool m_consoleDefaultPwdHasBeenSet;

                    /**
                     * 交易付费类型，0后付费/1预付费
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_tradeType;
                    bool m_tradeTypeHasBeenSet;

                    /**
                     * 自动续费标记：0表示默认状态(用户未设置，即初始状态)， 1表示自动续费，2表示明确不自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 预付费到期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_curDeadline;
                    bool m_curDeadlineHasBeenSet;

                    /**
                     * 隔离开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_isolateTime;
                    bool m_isolateTimeHasBeenSet;

                    /**
                     * 实例地域相关的描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DescribeInstanceRegionInfo> m_regionInfos;
                    bool m_regionInfosHasBeenSet;

                    /**
                     * 所在EKS环境，分为common和yunti
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eKSType;
                    bool m_eKSTypeHasBeenSet;

                    /**
                     * 引擎的产品版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_featureVersion;
                    bool m_featureVersionHasBeenSet;

                    /**
                     * 引擎实例是否开启客户端内网访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableClientIntranet;
                    bool m_enableClientIntranetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_SREINSTANCE_H_
