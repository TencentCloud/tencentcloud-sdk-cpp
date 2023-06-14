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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_FLEETATTRIBUTES_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_FLEETATTRIBUTES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/ResourceCreationLimitPolicy.h>
#include <tencentcloud/gse/v20191112/model/Tag.h>
#include <tencentcloud/gse/v20191112/model/DiskInfo.h>
#include <tencentcloud/gse/v20191112/model/RelatedCcnInfo.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * 服务部署属性
                */
                class FleetAttributes : public AbstractModel
                {
                public:
                    FleetAttributes();
                    ~FleetAttributes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取生成包 Id
                     * @return AssetId 生成包 Id
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置生成包 Id
                     * @param _assetId 生成包 Id
                     * 
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取创建服务器舰队时间
                     * @return CreationTime 创建服务器舰队时间
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置创建服务器舰队时间
                     * @param _creationTime 创建服务器舰队时间
                     * 
                     */
                    void SetCreationTime(const std::string& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     * 
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取服务器舰队资源描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FleetArn 服务器舰队资源描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFleetArn() const;

                    /**
                     * 设置服务器舰队资源描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fleetArn 服务器舰队资源描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFleetArn(const std::string& _fleetArn);

                    /**
                     * 判断参数 FleetArn 是否已赋值
                     * @return FleetArn 是否已赋值
                     * 
                     */
                    bool FleetArnHasBeenSet() const;

                    /**
                     * 获取服务器舰队 Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FleetId 服务器舰队 Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFleetId() const;

                    /**
                     * 设置服务器舰队 Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fleetId 服务器舰队 Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFleetId(const std::string& _fleetId);

                    /**
                     * 判断参数 FleetId 是否已赋值
                     * @return FleetId 是否已赋值
                     * 
                     */
                    bool FleetIdHasBeenSet() const;

                    /**
                     * 获取服务器舰队类型，目前只支持ON_DEMAND
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FleetType 服务器舰队类型，目前只支持ON_DEMAND
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFleetType() const;

                    /**
                     * 设置服务器舰队类型，目前只支持ON_DEMAND
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fleetType 服务器舰队类型，目前只支持ON_DEMAND
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFleetType(const std::string& _fleetType);

                    /**
                     * 判断参数 FleetType 是否已赋值
                     * @return FleetType 是否已赋值
                     * 
                     */
                    bool FleetTypeHasBeenSet() const;

                    /**
                     * 获取服务器类型，例如S5.LARGE8
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceType 服务器类型，例如S5.LARGE8
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置服务器类型，例如S5.LARGE8
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceType 服务器类型，例如S5.LARGE8
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取服务器舰队名称
                     * @return Name 服务器舰队名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置服务器舰队名称
                     * @param _name 服务器舰队名称
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
                     * 获取游戏会话保护策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NewGameServerSessionProtectionPolicy 游戏会话保护策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNewGameServerSessionProtectionPolicy() const;

                    /**
                     * 设置游戏会话保护策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _newGameServerSessionProtectionPolicy 游戏会话保护策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNewGameServerSessionProtectionPolicy(const std::string& _newGameServerSessionProtectionPolicy);

                    /**
                     * 判断参数 NewGameServerSessionProtectionPolicy 是否已赋值
                     * @return NewGameServerSessionProtectionPolicy 是否已赋值
                     * 
                     */
                    bool NewGameServerSessionProtectionPolicyHasBeenSet() const;

                    /**
                     * 获取操作系统类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperatingSystem 操作系统类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOperatingSystem() const;

                    /**
                     * 设置操作系统类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operatingSystem 操作系统类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperatingSystem(const std::string& _operatingSystem);

                    /**
                     * 判断参数 OperatingSystem 是否已赋值
                     * @return OperatingSystem 是否已赋值
                     * 
                     */
                    bool OperatingSystemHasBeenSet() const;

                    /**
                     * 获取资源创建限制策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceCreationLimitPolicy 资源创建限制策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ResourceCreationLimitPolicy GetResourceCreationLimitPolicy() const;

                    /**
                     * 设置资源创建限制策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceCreationLimitPolicy 资源创建限制策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceCreationLimitPolicy(const ResourceCreationLimitPolicy& _resourceCreationLimitPolicy);

                    /**
                     * 判断参数 ResourceCreationLimitPolicy 是否已赋值
                     * @return ResourceCreationLimitPolicy 是否已赋值
                     * 
                     */
                    bool ResourceCreationLimitPolicyHasBeenSet() const;

                    /**
                     * 获取状态：新建、下载中、验证中、生成中、激活中、活跃、异常、删除中、结束
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态：新建、下载中、验证中、生成中、激活中、活跃、异常、删除中、结束
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态：新建、下载中、验证中、生成中、激活中、活跃、异常、删除中、结束
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 状态：新建、下载中、验证中、生成中、激活中、活跃、异常、删除中、结束
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取服务器舰队停止状态，为空时表示自动扩缩容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StoppedActions 服务器舰队停止状态，为空时表示自动扩缩容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetStoppedActions() const;

                    /**
                     * 设置服务器舰队停止状态，为空时表示自动扩缩容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _stoppedActions 服务器舰队停止状态，为空时表示自动扩缩容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStoppedActions(const std::vector<std::string>& _stoppedActions);

                    /**
                     * 判断参数 StoppedActions 是否已赋值
                     * @return StoppedActions 是否已赋值
                     * 
                     */
                    bool StoppedActionsHasBeenSet() const;

                    /**
                     * 获取服务器舰队终止时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TerminationTime 服务器舰队终止时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTerminationTime() const;

                    /**
                     * 设置服务器舰队终止时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _terminationTime 服务器舰队终止时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTerminationTime(const std::string& _terminationTime);

                    /**
                     * 判断参数 TerminationTime 是否已赋值
                     * @return TerminationTime 是否已赋值
                     * 
                     */
                    bool TerminationTimeHasBeenSet() const;

                    /**
                     * 获取时限保护超时时间，默认60分钟，最小值5，最大值1440
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GameServerSessionProtectionTimeLimit 时限保护超时时间，默认60分钟，最小值5，最大值1440
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetGameServerSessionProtectionTimeLimit() const;

                    /**
                     * 设置时限保护超时时间，默认60分钟，最小值5，最大值1440
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gameServerSessionProtectionTimeLimit 时限保护超时时间，默认60分钟，最小值5，最大值1440
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGameServerSessionProtectionTimeLimit(const uint64_t& _gameServerSessionProtectionTimeLimit);

                    /**
                     * 判断参数 GameServerSessionProtectionTimeLimit 是否已赋值
                     * @return GameServerSessionProtectionTimeLimit 是否已赋值
                     * 
                     */
                    bool GameServerSessionProtectionTimeLimitHasBeenSet() const;

                    /**
                     * 获取计费状态：未开通、已开通、异常、欠费隔离、销毁、解冻
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BillingStatus 计费状态：未开通、已开通、异常、欠费隔离、销毁、解冻
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBillingStatus() const;

                    /**
                     * 设置计费状态：未开通、已开通、异常、欠费隔离、销毁、解冻
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _billingStatus 计费状态：未开通、已开通、异常、欠费隔离、销毁、解冻
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBillingStatus(const std::string& _billingStatus);

                    /**
                     * 判断参数 BillingStatus 是否已赋值
                     * @return BillingStatus 是否已赋值
                     * 
                     */
                    bool BillingStatusHasBeenSet() const;

                    /**
                     * 获取标签列表，最大长度50组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 标签列表，最大长度50组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签列表，最大长度50组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 标签列表，最大长度50组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取数据盘，储存类型为 SSD 云硬盘（CLOUD_SSD）时，100-32000GB；储存类型为高性能云硬盘（CLOUD_PREMIUM）时，10-32000GB；容量以10为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataDiskInfo 数据盘，储存类型为 SSD 云硬盘（CLOUD_SSD）时，100-32000GB；储存类型为高性能云硬盘（CLOUD_PREMIUM）时，10-32000GB；容量以10为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DiskInfo> GetDataDiskInfo() const;

                    /**
                     * 设置数据盘，储存类型为 SSD 云硬盘（CLOUD_SSD）时，100-32000GB；储存类型为高性能云硬盘（CLOUD_PREMIUM）时，10-32000GB；容量以10为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataDiskInfo 数据盘，储存类型为 SSD 云硬盘（CLOUD_SSD）时，100-32000GB；储存类型为高性能云硬盘（CLOUD_PREMIUM）时，10-32000GB；容量以10为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataDiskInfo(const std::vector<DiskInfo>& _dataDiskInfo);

                    /**
                     * 判断参数 DataDiskInfo 是否已赋值
                     * @return DataDiskInfo 是否已赋值
                     * 
                     */
                    bool DataDiskInfoHasBeenSet() const;

                    /**
                     * 获取系统盘，储存类型为 SSD 云硬盘（CLOUD_SSD）时，100-500GB；储存类型为高性能云硬盘（CLOUD_PREMIUM）时，50-500GB；容量以1为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SystemDiskInfo 系统盘，储存类型为 SSD 云硬盘（CLOUD_SSD）时，100-500GB；储存类型为高性能云硬盘（CLOUD_PREMIUM）时，50-500GB；容量以1为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DiskInfo GetSystemDiskInfo() const;

                    /**
                     * 设置系统盘，储存类型为 SSD 云硬盘（CLOUD_SSD）时，100-500GB；储存类型为高性能云硬盘（CLOUD_PREMIUM）时，50-500GB；容量以1为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _systemDiskInfo 系统盘，储存类型为 SSD 云硬盘（CLOUD_SSD）时，100-500GB；储存类型为高性能云硬盘（CLOUD_PREMIUM）时，50-500GB；容量以1为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSystemDiskInfo(const DiskInfo& _systemDiskInfo);

                    /**
                     * 判断参数 SystemDiskInfo 是否已赋值
                     * @return SystemDiskInfo 是否已赋值
                     * 
                     */
                    bool SystemDiskInfoHasBeenSet() const;

                    /**
                     * 获取云联网相关信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RelatedCcnInfos 云联网相关信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RelatedCcnInfo> GetRelatedCcnInfos() const;

                    /**
                     * 设置云联网相关信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _relatedCcnInfos 云联网相关信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRelatedCcnInfos(const std::vector<RelatedCcnInfo>& _relatedCcnInfos);

                    /**
                     * 判断参数 RelatedCcnInfos 是否已赋值
                     * @return RelatedCcnInfos 是否已赋值
                     * 
                     */
                    bool RelatedCcnInfosHasBeenSet() const;

                    /**
                     * 获取fleet公网出带宽最大值，默认100Mbps，范围1-200Mbps
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InternetMaxBandwidthOut fleet公网出带宽最大值，默认100Mbps，范围1-200Mbps
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置fleet公网出带宽最大值，默认100Mbps，范围1-200Mbps
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _internetMaxBandwidthOut fleet公网出带宽最大值，默认100Mbps，范围1-200Mbps
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInternetMaxBandwidthOut(const int64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     * 
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                private:

                    /**
                     * 生成包 Id
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * 创建服务器舰队时间
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 服务器舰队资源描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fleetArn;
                    bool m_fleetArnHasBeenSet;

                    /**
                     * 服务器舰队 Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fleetId;
                    bool m_fleetIdHasBeenSet;

                    /**
                     * 服务器舰队类型，目前只支持ON_DEMAND
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fleetType;
                    bool m_fleetTypeHasBeenSet;

                    /**
                     * 服务器类型，例如S5.LARGE8
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 服务器舰队名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 游戏会话保护策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_newGameServerSessionProtectionPolicy;
                    bool m_newGameServerSessionProtectionPolicyHasBeenSet;

                    /**
                     * 操作系统类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_operatingSystem;
                    bool m_operatingSystemHasBeenSet;

                    /**
                     * 资源创建限制策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ResourceCreationLimitPolicy m_resourceCreationLimitPolicy;
                    bool m_resourceCreationLimitPolicyHasBeenSet;

                    /**
                     * 状态：新建、下载中、验证中、生成中、激活中、活跃、异常、删除中、结束
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 服务器舰队停止状态，为空时表示自动扩缩容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_stoppedActions;
                    bool m_stoppedActionsHasBeenSet;

                    /**
                     * 服务器舰队终止时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_terminationTime;
                    bool m_terminationTimeHasBeenSet;

                    /**
                     * 时限保护超时时间，默认60分钟，最小值5，最大值1440
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_gameServerSessionProtectionTimeLimit;
                    bool m_gameServerSessionProtectionTimeLimitHasBeenSet;

                    /**
                     * 计费状态：未开通、已开通、异常、欠费隔离、销毁、解冻
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_billingStatus;
                    bool m_billingStatusHasBeenSet;

                    /**
                     * 标签列表，最大长度50组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 数据盘，储存类型为 SSD 云硬盘（CLOUD_SSD）时，100-32000GB；储存类型为高性能云硬盘（CLOUD_PREMIUM）时，10-32000GB；容量以10为单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DiskInfo> m_dataDiskInfo;
                    bool m_dataDiskInfoHasBeenSet;

                    /**
                     * 系统盘，储存类型为 SSD 云硬盘（CLOUD_SSD）时，100-500GB；储存类型为高性能云硬盘（CLOUD_PREMIUM）时，50-500GB；容量以1为单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiskInfo m_systemDiskInfo;
                    bool m_systemDiskInfoHasBeenSet;

                    /**
                     * 云联网相关信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RelatedCcnInfo> m_relatedCcnInfos;
                    bool m_relatedCcnInfosHasBeenSet;

                    /**
                     * fleet公网出带宽最大值，默认100Mbps，范围1-200Mbps
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_FLEETATTRIBUTES_H_
