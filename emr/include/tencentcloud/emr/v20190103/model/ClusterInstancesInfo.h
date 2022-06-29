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
#include <tencentcloud/emr/v20190103/model/Tag.h>
#include <tencentcloud/emr/v20190103/model/ClusterExternalServiceInfo.h>
#include <tencentcloud/emr/v20190103/model/TopologyInfo.h>


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
                     * 获取ID号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id ID号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetId() const;

                    /**
                     * 设置ID号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Id ID号
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
                     * 获取实例的状态码。取值范围：
<li>2：表示集群运行中。</li>
<li>3：表示集群创建中。</li>
<li>4：表示集群扩容中。</li>
<li>5：表示集群增加router节点中。</li>
<li>6：表示集群安装组件中。</li>
<li>7：表示集群执行命令中。</li>
<li>8：表示重启服务中。</li>
<li>9：表示进入维护中。</li>
<li>10：表示服务暂停中。</li>
<li>11：表示退出维护中。</li>
<li>12：表示退出暂停中。</li>
<li>13：表示配置下发中。</li>
<li>14：表示销毁集群中。</li>
<li>15：表示销毁core节点中。</li>
<li>16：销毁task节点中。</li>
<li>17：表示销毁router节点中。</li>
<li>18：表示更改webproxy密码中。</li>
<li>19：表示集群隔离中。</li>
<li>20：表示集群冲正中。</li>
<li>21：表示集群回收中。</li>
<li>22：表示变配等待中。</li>
<li>23：表示集群已隔离。</li>
<li>24：表示缩容节点中。</li>
<li>33：表示集群等待退费中。</li>
<li>34：表示集群已退费。</li>
<li>301：表示创建失败。</li>
<li>302：表示扩容失败。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 实例的状态码。取值范围：
<li>2：表示集群运行中。</li>
<li>3：表示集群创建中。</li>
<li>4：表示集群扩容中。</li>
<li>5：表示集群增加router节点中。</li>
<li>6：表示集群安装组件中。</li>
<li>7：表示集群执行命令中。</li>
<li>8：表示重启服务中。</li>
<li>9：表示进入维护中。</li>
<li>10：表示服务暂停中。</li>
<li>11：表示退出维护中。</li>
<li>12：表示退出暂停中。</li>
<li>13：表示配置下发中。</li>
<li>14：表示销毁集群中。</li>
<li>15：表示销毁core节点中。</li>
<li>16：销毁task节点中。</li>
<li>17：表示销毁router节点中。</li>
<li>18：表示更改webproxy密码中。</li>
<li>19：表示集群隔离中。</li>
<li>20：表示集群冲正中。</li>
<li>21：表示集群回收中。</li>
<li>22：表示变配等待中。</li>
<li>23：表示集群已隔离。</li>
<li>24：表示缩容节点中。</li>
<li>33：表示集群等待退费中。</li>
<li>34：表示集群已退费。</li>
<li>301：表示创建失败。</li>
<li>302：表示扩容失败。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置实例的状态码。取值范围：
<li>2：表示集群运行中。</li>
<li>3：表示集群创建中。</li>
<li>4：表示集群扩容中。</li>
<li>5：表示集群增加router节点中。</li>
<li>6：表示集群安装组件中。</li>
<li>7：表示集群执行命令中。</li>
<li>8：表示重启服务中。</li>
<li>9：表示进入维护中。</li>
<li>10：表示服务暂停中。</li>
<li>11：表示退出维护中。</li>
<li>12：表示退出暂停中。</li>
<li>13：表示配置下发中。</li>
<li>14：表示销毁集群中。</li>
<li>15：表示销毁core节点中。</li>
<li>16：销毁task节点中。</li>
<li>17：表示销毁router节点中。</li>
<li>18：表示更改webproxy密码中。</li>
<li>19：表示集群隔离中。</li>
<li>20：表示集群冲正中。</li>
<li>21：表示集群回收中。</li>
<li>22：表示变配等待中。</li>
<li>23：表示集群已隔离。</li>
<li>24：表示缩容节点中。</li>
<li>33：表示集群等待退费中。</li>
<li>34：表示集群已退费。</li>
<li>301：表示创建失败。</li>
<li>302：表示扩容失败。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 实例的状态码。取值范围：
<li>2：表示集群运行中。</li>
<li>3：表示集群创建中。</li>
<li>4：表示集群扩容中。</li>
<li>5：表示集群增加router节点中。</li>
<li>6：表示集群安装组件中。</li>
<li>7：表示集群执行命令中。</li>
<li>8：表示重启服务中。</li>
<li>9：表示进入维护中。</li>
<li>10：表示服务暂停中。</li>
<li>11：表示退出维护中。</li>
<li>12：表示退出暂停中。</li>
<li>13：表示配置下发中。</li>
<li>14：表示销毁集群中。</li>
<li>15：表示销毁core节点中。</li>
<li>16：销毁task节点中。</li>
<li>17：表示销毁router节点中。</li>
<li>18：表示更改webproxy密码中。</li>
<li>19：表示集群隔离中。</li>
<li>20：表示集群冲正中。</li>
<li>21：表示集群回收中。</li>
<li>22：表示变配等待中。</li>
<li>23：表示集群已隔离。</li>
<li>24：表示缩容节点中。</li>
<li>33：表示集群等待退费中。</li>
<li>34：表示集群已退费。</li>
<li>301：表示创建失败。</li>
<li>302：表示扩容失败。</li>
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

                    /**
                     * 获取是否采用新架构
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsWoodpeckerCluster 是否采用新架构
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetIsWoodpeckerCluster() const;

                    /**
                     * 设置是否采用新架构
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsWoodpeckerCluster 是否采用新架构
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsWoodpeckerCluster(const int64_t& _isWoodpeckerCluster);

                    /**
                     * 判断参数 IsWoodpeckerCluster 是否已赋值
                     * @return IsWoodpeckerCluster 是否已赋值
                     */
                    bool IsWoodpeckerClusterHasBeenSet() const;

                    /**
                     * 获取元数据库信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetaDb 元数据库信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMetaDb() const;

                    /**
                     * 设置元数据库信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MetaDb 元数据库信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMetaDb(const std::string& _metaDb);

                    /**
                     * 判断参数 MetaDb 是否已赋值
                     * @return MetaDb 是否已赋值
                     */
                    bool MetaDbHasBeenSet() const;

                    /**
                     * 获取标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Tags 标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Hive元数据信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HiveMetaDb Hive元数据信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetHiveMetaDb() const;

                    /**
                     * 设置Hive元数据信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HiveMetaDb Hive元数据信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHiveMetaDb(const std::string& _hiveMetaDb);

                    /**
                     * 判断参数 HiveMetaDb 是否已赋值
                     * @return HiveMetaDb 是否已赋值
                     */
                    bool HiveMetaDbHasBeenSet() const;

                    /**
                     * 获取集群类型:EMR,CLICKHOUSE,DRUID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceClass 集群类型:EMR,CLICKHOUSE,DRUID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetServiceClass() const;

                    /**
                     * 设置集群类型:EMR,CLICKHOUSE,DRUID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ServiceClass 集群类型:EMR,CLICKHOUSE,DRUID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetServiceClass(const std::string& _serviceClass);

                    /**
                     * 判断参数 ServiceClass 是否已赋值
                     * @return ServiceClass 是否已赋值
                     */
                    bool ServiceClassHasBeenSet() const;

                    /**
                     * 获取集群所有节点的别名序列化
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AliasInfo 集群所有节点的别名序列化
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAliasInfo() const;

                    /**
                     * 设置集群所有节点的别名序列化
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AliasInfo 集群所有节点的别名序列化
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAliasInfo(const std::string& _aliasInfo);

                    /**
                     * 判断参数 AliasInfo 是否已赋值
                     * @return AliasInfo 是否已赋值
                     */
                    bool AliasInfoHasBeenSet() const;

                    /**
                     * 获取集群版本Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductId 集群版本Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetProductId() const;

                    /**
                     * 设置集群版本Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProductId 集群版本Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProductId(const int64_t& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取地区ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Zone 地区ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetZone() const;

                    /**
                     * 设置地区ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Zone 地区ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取场景名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SceneName 场景名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSceneName() const;

                    /**
                     * 设置场景名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SceneName 场景名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSceneName(const std::string& _sceneName);

                    /**
                     * 判断参数 SceneName 是否已赋值
                     * @return SceneName 是否已赋值
                     */
                    bool SceneNameHasBeenSet() const;

                    /**
                     * 获取场景化集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SceneServiceClass 场景化集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSceneServiceClass() const;

                    /**
                     * 设置场景化集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SceneServiceClass 场景化集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSceneServiceClass(const std::string& _sceneServiceClass);

                    /**
                     * 判断参数 SceneServiceClass 是否已赋值
                     * @return SceneServiceClass 是否已赋值
                     */
                    bool SceneServiceClassHasBeenSet() const;

                    /**
                     * 获取场景化EMR版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SceneEmrVersion 场景化EMR版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSceneEmrVersion() const;

                    /**
                     * 设置场景化EMR版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SceneEmrVersion 场景化EMR版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSceneEmrVersion(const std::string& _sceneEmrVersion);

                    /**
                     * 判断参数 SceneEmrVersion 是否已赋值
                     * @return SceneEmrVersion 是否已赋值
                     */
                    bool SceneEmrVersionHasBeenSet() const;

                    /**
                     * 获取场景化集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DisplayName 场景化集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置场景化集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DisplayName 场景化集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取vpc name
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcName vpc name
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置vpc name
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VpcName vpc name
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取subnet name
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetName subnet name
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置subnet name
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SubnetName subnet name
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSubnetName(const std::string& _subnetName);

                    /**
                     * 判断参数 SubnetName 是否已赋值
                     * @return SubnetName 是否已赋值
                     */
                    bool SubnetNameHasBeenSet() const;

                    /**
                     * 获取集群依赖关系
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterExternalServiceInfo 集群依赖关系
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ClusterExternalServiceInfo> GetClusterExternalServiceInfo() const;

                    /**
                     * 设置集群依赖关系
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClusterExternalServiceInfo 集群依赖关系
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClusterExternalServiceInfo(const std::vector<ClusterExternalServiceInfo>& _clusterExternalServiceInfo);

                    /**
                     * 判断参数 ClusterExternalServiceInfo 是否已赋值
                     * @return ClusterExternalServiceInfo 是否已赋值
                     */
                    bool ClusterExternalServiceInfoHasBeenSet() const;

                    /**
                     * 获取集群vpcid 字符串类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UniqVpcId 集群vpcid 字符串类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置集群vpcid 字符串类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UniqVpcId 集群vpcid 字符串类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取子网id 字符串类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UniqSubnetId 子网id 字符串类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置子网id 字符串类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UniqSubnetId 子网id 字符串类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopologyInfoList 节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TopologyInfo> GetTopologyInfoList() const;

                    /**
                     * 设置节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TopologyInfoList 节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTopologyInfoList(const std::vector<TopologyInfo>& _topologyInfoList);

                    /**
                     * 判断参数 TopologyInfoList 是否已赋值
                     * @return TopologyInfoList 是否已赋值
                     */
                    bool TopologyInfoListHasBeenSet() const;

                    /**
                     * 获取是否是跨AZ集群
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsMultiZoneCluster 是否是跨AZ集群
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetIsMultiZoneCluster() const;

                    /**
                     * 设置是否是跨AZ集群
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsMultiZoneCluster 是否是跨AZ集群
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsMultiZoneCluster(const bool& _isMultiZoneCluster);

                    /**
                     * 判断参数 IsMultiZoneCluster 是否已赋值
                     * @return IsMultiZoneCluster 是否已赋值
                     */
                    bool IsMultiZoneClusterHasBeenSet() const;

                private:

                    /**
                     * ID号
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
                     * 实例的状态码。取值范围：
<li>2：表示集群运行中。</li>
<li>3：表示集群创建中。</li>
<li>4：表示集群扩容中。</li>
<li>5：表示集群增加router节点中。</li>
<li>6：表示集群安装组件中。</li>
<li>7：表示集群执行命令中。</li>
<li>8：表示重启服务中。</li>
<li>9：表示进入维护中。</li>
<li>10：表示服务暂停中。</li>
<li>11：表示退出维护中。</li>
<li>12：表示退出暂停中。</li>
<li>13：表示配置下发中。</li>
<li>14：表示销毁集群中。</li>
<li>15：表示销毁core节点中。</li>
<li>16：销毁task节点中。</li>
<li>17：表示销毁router节点中。</li>
<li>18：表示更改webproxy密码中。</li>
<li>19：表示集群隔离中。</li>
<li>20：表示集群冲正中。</li>
<li>21：表示集群回收中。</li>
<li>22：表示变配等待中。</li>
<li>23：表示集群已隔离。</li>
<li>24：表示缩容节点中。</li>
<li>33：表示集群等待退费中。</li>
<li>34：表示集群已退费。</li>
<li>301：表示创建失败。</li>
<li>302：表示扩容失败。</li>
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

                    /**
                     * 是否采用新架构
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isWoodpeckerCluster;
                    bool m_isWoodpeckerClusterHasBeenSet;

                    /**
                     * 元数据库信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_metaDb;
                    bool m_metaDbHasBeenSet;

                    /**
                     * 标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Hive元数据信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hiveMetaDb;
                    bool m_hiveMetaDbHasBeenSet;

                    /**
                     * 集群类型:EMR,CLICKHOUSE,DRUID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceClass;
                    bool m_serviceClassHasBeenSet;

                    /**
                     * 集群所有节点的别名序列化
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_aliasInfo;
                    bool m_aliasInfoHasBeenSet;

                    /**
                     * 集群版本Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 地区ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 场景名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sceneName;
                    bool m_sceneNameHasBeenSet;

                    /**
                     * 场景化集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sceneServiceClass;
                    bool m_sceneServiceClassHasBeenSet;

                    /**
                     * 场景化EMR版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sceneEmrVersion;
                    bool m_sceneEmrVersionHasBeenSet;

                    /**
                     * 场景化集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * vpc name
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * subnet name
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * 集群依赖关系
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ClusterExternalServiceInfo> m_clusterExternalServiceInfo;
                    bool m_clusterExternalServiceInfoHasBeenSet;

                    /**
                     * 集群vpcid 字符串类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * 子网id 字符串类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * 节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TopologyInfo> m_topologyInfoList;
                    bool m_topologyInfoListHasBeenSet;

                    /**
                     * 是否是跨AZ集群
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isMultiZoneCluster;
                    bool m_isMultiZoneClusterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CLUSTERINSTANCESINFO_H_
