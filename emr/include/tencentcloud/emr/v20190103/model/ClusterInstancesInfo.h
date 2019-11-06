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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_CLUSTERINSTANCESINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_CLUSTERINSTANCESINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/EmrProductConfigOutter.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 集群实例信息
                */
                class ClusterInstancesInfo : public AbstractModel
                {
                public:
                    ClusterInstancesInfo();
                    ~ClusterInstancesInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetId() const;

                    /**
                     * 设置ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Id ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId 集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClusterId 集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取标题
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ftitle 标题
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFtitle() const;

                    /**
                     * 设置标题
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Ftitle 标题
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFtitle(const std::string& _ftitle);

                    /**
                     * 判断参数 Ftitle 是否已赋值
                     * @return Ftitle 是否已赋值
                     */
                    bool FtitleHasBeenSet() const;

                    /**
                     * 获取集群名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterName 集群名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClusterName 集群名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取地域ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionId 地域ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置地域ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RegionId 地域ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取地区ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneId 地区ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置地区ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ZoneId 地区ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取用户APPID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId 用户APPID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置用户APPID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AppId 用户APPID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取用户UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uin 用户UIN
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUin() const;

                    /**
                     * 设置用户UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Uin 用户UIN
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取项目Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 项目Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProjectId 项目Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取集群VPCID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId 集群VPCID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetVpcId() const;

                    /**
                     * 设置集群VPCID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VpcId 集群VPCID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVpcId(const int64_t& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetId 子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetSubnetId() const;

                    /**
                     * 设置子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SubnetId 子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSubnetId(const int64_t& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取添加时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AddTime 添加时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置添加时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AddTime 添加时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取已经运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunTime 已经运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRunTime() const;

                    /**
                     * 设置已经运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RunTime 已经运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRunTime(const std::string& _runTime);

                    /**
                     * 判断参数 RunTime 是否已赋值
                     * @return RunTime 是否已赋值
                     */
                    bool RunTimeHasBeenSet() const;

                    /**
                     * 获取集群产品配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Config 集群产品配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EmrProductConfigOutter GetConfig() const;

                    /**
                     * 设置集群产品配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Config 集群产品配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetConfig(const EmrProductConfigOutter& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取主节点外网IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MasterIp 主节点外网IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMasterIp() const;

                    /**
                     * 设置主节点外网IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MasterIp 主节点外网IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMasterIp(const std::string& _masterIp);

                    /**
                     * 判断参数 MasterIp 是否已赋值
                     * @return MasterIp 是否已赋值
                     */
                    bool MasterIpHasBeenSet() const;

                    /**
                     * 获取EMR版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EmrVersion EMR版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEmrVersion() const;

                    /**
                     * 设置EMR版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EmrVersion EMR版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEmrVersion(const std::string& _emrVersion);

                    /**
                     * 判断参数 EmrVersion 是否已赋值
                     * @return EmrVersion 是否已赋值
                     */
                    bool EmrVersionHasBeenSet() const;

                    /**
                     * 获取收费类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChargeType 收费类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetChargeType() const;

                    /**
                     * 设置收费类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ChargeType 收费类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetChargeType(const int64_t& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取交易版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TradeVersion 交易版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetTradeVersion() const;

                    /**
                     * 设置交易版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TradeVersion 交易版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTradeVersion(const int64_t& _tradeVersion);

                    /**
                     * 判断参数 TradeVersion 是否已赋值
                     * @return TradeVersion 是否已赋值
                     */
                    bool TradeVersionHasBeenSet() const;

                    /**
                     * 获取资源订单ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceOrderId 资源订单ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetResourceOrderId() const;

                    /**
                     * 设置资源订单ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ResourceOrderId 资源订单ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetResourceOrderId(const int64_t& _resourceOrderId);

                    /**
                     * 判断参数 ResourceOrderId 是否已赋值
                     * @return ResourceOrderId 是否已赋值
                     */
                    bool ResourceOrderIdHasBeenSet() const;

                    /**
                     * 获取是否计费集群
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsTradeCluster 是否计费集群
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetIsTradeCluster() const;

                    /**
                     * 设置是否计费集群
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsTradeCluster 是否计费集群
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsTradeCluster(const int64_t& _isTradeCluster);

                    /**
                     * 判断参数 IsTradeCluster 是否已赋值
                     * @return IsTradeCluster 是否已赋值
                     */
                    bool IsTradeClusterHasBeenSet() const;

                    /**
                     * 获取集群错误状态告警信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmInfo 集群错误状态告警信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAlarmInfo() const;

                    /**
                     * 设置集群错误状态告警信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AlarmInfo 集群错误状态告警信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAlarmInfo(const std::string& _alarmInfo);

                    /**
                     * 判断参数 AlarmInfo 是否已赋值
                     * @return AlarmInfo 是否已赋值
                     */
                    bool AlarmInfoHasBeenSet() const;

                private:

                    /**
                     * ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 标题
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ftitle;
                    bool m_ftitleHasBeenSet;

                    /**
                     * 集群名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 地域ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 地区ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 用户APPID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 用户UIN
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 项目Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 集群VPCID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 添加时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * 已经运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runTime;
                    bool m_runTimeHasBeenSet;

                    /**
                     * 集群产品配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EmrProductConfigOutter m_config;
                    bool m_configHasBeenSet;

                    /**
                     * 主节点外网IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_masterIp;
                    bool m_masterIpHasBeenSet;

                    /**
                     * EMR版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_emrVersion;
                    bool m_emrVersionHasBeenSet;

                    /**
                     * 收费类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * 交易版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_tradeVersion;
                    bool m_tradeVersionHasBeenSet;

                    /**
                     * 资源订单ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_resourceOrderId;
                    bool m_resourceOrderIdHasBeenSet;

                    /**
                     * 是否计费集群
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isTradeCluster;
                    bool m_isTradeClusterHasBeenSet;

                    /**
                     * 集群错误状态告警信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alarmInfo;
                    bool m_alarmInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CLUSTERINSTANCESINFO_H_
