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
#include <tencentcloud/emr/v20190103/model/EmrProductConfigDetail.h>
#include <tencentcloud/emr/v20190103/model/ClusterRelationMeta.h>
#include <tencentcloud/emr/v20190103/model/CustomMetaDBInfo.h>


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
                     * 获取<p>ID号</p>
                     * @return Id <p>ID号</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>ID号</p>
                     * @param _id <p>ID号</p>
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>集群ID</p>
                     * @return ClusterId <p>集群ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群ID</p>
                     * @param _clusterId <p>集群ID</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>标题</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ftitle <p>标题</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetFtitle() const;

                    /**
                     * 设置<p>标题</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ftitle <p>标题</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetFtitle(const std::string& _ftitle);

                    /**
                     * 判断参数 Ftitle 是否已赋值
                     * @return Ftitle 是否已赋值
                     * @deprecated
                     */
                    bool FtitleHasBeenSet() const;

                    /**
                     * 获取<p>集群名</p>
                     * @return ClusterName <p>集群名</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>集群名</p>
                     * @param _clusterName <p>集群名</p>
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取<p>地域ID</p>
                     * @return RegionId <p>地域ID</p>
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置<p>地域ID</p>
                     * @param _regionId <p>地域ID</p>
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取<p>地区ID</p>
                     * @return ZoneId <p>地区ID</p>
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置<p>地区ID</p>
                     * @param _zoneId <p>地区ID</p>
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>用户APPID</p>
                     * @return AppId <p>用户APPID</p>
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置<p>用户APPID</p>
                     * @param _appId <p>用户APPID</p>
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>用户UIN</p>
                     * @return Uin <p>用户UIN</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>用户UIN</p>
                     * @param _uin <p>用户UIN</p>
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取<p>项目Id</p>
                     * @return ProjectId <p>项目Id</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>项目Id</p>
                     * @param _projectId <p>项目Id</p>
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>集群VPCID</p>
                     * @return VpcId <p>集群VPCID</p>
                     * 
                     */
                    int64_t GetVpcId() const;

                    /**
                     * 设置<p>集群VPCID</p>
                     * @param _vpcId <p>集群VPCID</p>
                     * 
                     */
                    void SetVpcId(const int64_t& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取<p>子网ID</p>
                     * @return SubnetId <p>子网ID</p>
                     * 
                     */
                    int64_t GetSubnetId() const;

                    /**
                     * 设置<p>子网ID</p>
                     * @param _subnetId <p>子网ID</p>
                     * 
                     */
                    void SetSubnetId(const int64_t& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>实例的状态码。取值范围：</p><li>2：表示集群运行中。</li><li>3：表示集群创建中。</li><li>4：表示集群扩容中。</li><li>5：表示集群增加router节点中。</li><li>6：表示集群安装组件中。</li><li>7：表示集群执行命令中。</li><li>8：表示重启服务中。</li><li>9：表示进入维护中。</li><li>10：表示服务暂停中。</li><li>11：表示退出维护中。</li><li>12：表示退出暂停中。</li><li>13：表示配置下发中。</li><li>14：表示销毁集群中。</li><li>15：表示销毁core节点中。</li><li>16：销毁task节点中。</li><li>17：表示销毁router节点中。</li><li>18：表示更改webproxy密码中。</li><li>19：表示集群隔离中。</li><li>20：表示集群冲正中。</li><li>21：表示集群回收中。</li><li>22：表示变配等待中。</li><li>23：表示集群已隔离。</li><li>24：表示缩容节点中。</li><li>33：表示集群等待退费中。</li><li>34：表示集群已退费。</li><li>301：表示创建失败。</li><li>302：表示扩容失败。</li>
                     * @return Status <p>实例的状态码。取值范围：</p><li>2：表示集群运行中。</li><li>3：表示集群创建中。</li><li>4：表示集群扩容中。</li><li>5：表示集群增加router节点中。</li><li>6：表示集群安装组件中。</li><li>7：表示集群执行命令中。</li><li>8：表示重启服务中。</li><li>9：表示进入维护中。</li><li>10：表示服务暂停中。</li><li>11：表示退出维护中。</li><li>12：表示退出暂停中。</li><li>13：表示配置下发中。</li><li>14：表示销毁集群中。</li><li>15：表示销毁core节点中。</li><li>16：销毁task节点中。</li><li>17：表示销毁router节点中。</li><li>18：表示更改webproxy密码中。</li><li>19：表示集群隔离中。</li><li>20：表示集群冲正中。</li><li>21：表示集群回收中。</li><li>22：表示变配等待中。</li><li>23：表示集群已隔离。</li><li>24：表示缩容节点中。</li><li>33：表示集群等待退费中。</li><li>34：表示集群已退费。</li><li>301：表示创建失败。</li><li>302：表示扩容失败。</li>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>实例的状态码。取值范围：</p><li>2：表示集群运行中。</li><li>3：表示集群创建中。</li><li>4：表示集群扩容中。</li><li>5：表示集群增加router节点中。</li><li>6：表示集群安装组件中。</li><li>7：表示集群执行命令中。</li><li>8：表示重启服务中。</li><li>9：表示进入维护中。</li><li>10：表示服务暂停中。</li><li>11：表示退出维护中。</li><li>12：表示退出暂停中。</li><li>13：表示配置下发中。</li><li>14：表示销毁集群中。</li><li>15：表示销毁core节点中。</li><li>16：销毁task节点中。</li><li>17：表示销毁router节点中。</li><li>18：表示更改webproxy密码中。</li><li>19：表示集群隔离中。</li><li>20：表示集群冲正中。</li><li>21：表示集群回收中。</li><li>22：表示变配等待中。</li><li>23：表示集群已隔离。</li><li>24：表示缩容节点中。</li><li>33：表示集群等待退费中。</li><li>34：表示集群已退费。</li><li>301：表示创建失败。</li><li>302：表示扩容失败。</li>
                     * @param _status <p>实例的状态码。取值范围：</p><li>2：表示集群运行中。</li><li>3：表示集群创建中。</li><li>4：表示集群扩容中。</li><li>5：表示集群增加router节点中。</li><li>6：表示集群安装组件中。</li><li>7：表示集群执行命令中。</li><li>8：表示重启服务中。</li><li>9：表示进入维护中。</li><li>10：表示服务暂停中。</li><li>11：表示退出维护中。</li><li>12：表示退出暂停中。</li><li>13：表示配置下发中。</li><li>14：表示销毁集群中。</li><li>15：表示销毁core节点中。</li><li>16：销毁task节点中。</li><li>17：表示销毁router节点中。</li><li>18：表示更改webproxy密码中。</li><li>19：表示集群隔离中。</li><li>20：表示集群冲正中。</li><li>21：表示集群回收中。</li><li>22：表示变配等待中。</li><li>23：表示集群已隔离。</li><li>24：表示缩容节点中。</li><li>33：表示集群等待退费中。</li><li>34：表示集群已退费。</li><li>301：表示创建失败。</li><li>302：表示扩容失败。</li>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>添加时间</p>
                     * @return AddTime <p>添加时间</p>
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置<p>添加时间</p>
                     * @param _addTime <p>添加时间</p>
                     * 
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     * 
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取<p>已经运行时间</p>
                     * @return RunTime <p>已经运行时间</p>
                     * 
                     */
                    std::string GetRunTime() const;

                    /**
                     * 设置<p>已经运行时间</p>
                     * @param _runTime <p>已经运行时间</p>
                     * 
                     */
                    void SetRunTime(const std::string& _runTime);

                    /**
                     * 判断参数 RunTime 是否已赋值
                     * @return RunTime 是否已赋值
                     * 
                     */
                    bool RunTimeHasBeenSet() const;

                    /**
                     * 获取<p>集群产品配置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Config <p>集群产品配置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    EmrProductConfigOutter GetConfig() const;

                    /**
                     * 设置<p>集群产品配置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _config <p>集群产品配置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetConfig(const EmrProductConfigOutter& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * @deprecated
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取<p>主节点外网IP</p>
                     * @return MasterIp <p>主节点外网IP</p>
                     * 
                     */
                    std::string GetMasterIp() const;

                    /**
                     * 设置<p>主节点外网IP</p>
                     * @param _masterIp <p>主节点外网IP</p>
                     * 
                     */
                    void SetMasterIp(const std::string& _masterIp);

                    /**
                     * 判断参数 MasterIp 是否已赋值
                     * @return MasterIp 是否已赋值
                     * 
                     */
                    bool MasterIpHasBeenSet() const;

                    /**
                     * 获取<p>EMR版本</p>
                     * @return EmrVersion <p>EMR版本</p>
                     * 
                     */
                    std::string GetEmrVersion() const;

                    /**
                     * 设置<p>EMR版本</p>
                     * @param _emrVersion <p>EMR版本</p>
                     * 
                     */
                    void SetEmrVersion(const std::string& _emrVersion);

                    /**
                     * 判断参数 EmrVersion 是否已赋值
                     * @return EmrVersion 是否已赋值
                     * 
                     */
                    bool EmrVersionHasBeenSet() const;

                    /**
                     * 获取<p>收费类型</p>
                     * @return ChargeType <p>收费类型</p>
                     * 
                     */
                    int64_t GetChargeType() const;

                    /**
                     * 设置<p>收费类型</p>
                     * @param _chargeType <p>收费类型</p>
                     * 
                     */
                    void SetChargeType(const int64_t& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取<p>交易版本</p>
                     * @return TradeVersion <p>交易版本</p>
                     * 
                     */
                    int64_t GetTradeVersion() const;

                    /**
                     * 设置<p>交易版本</p>
                     * @param _tradeVersion <p>交易版本</p>
                     * 
                     */
                    void SetTradeVersion(const int64_t& _tradeVersion);

                    /**
                     * 判断参数 TradeVersion 是否已赋值
                     * @return TradeVersion 是否已赋值
                     * 
                     */
                    bool TradeVersionHasBeenSet() const;

                    /**
                     * 获取<p>资源订单ID</p>
                     * @return ResourceOrderId <p>资源订单ID</p>
                     * 
                     */
                    int64_t GetResourceOrderId() const;

                    /**
                     * 设置<p>资源订单ID</p>
                     * @param _resourceOrderId <p>资源订单ID</p>
                     * 
                     */
                    void SetResourceOrderId(const int64_t& _resourceOrderId);

                    /**
                     * 判断参数 ResourceOrderId 是否已赋值
                     * @return ResourceOrderId 是否已赋值
                     * 
                     */
                    bool ResourceOrderIdHasBeenSet() const;

                    /**
                     * 获取<p>是否计费集群</p>
                     * @return IsTradeCluster <p>是否计费集群</p>
                     * 
                     */
                    int64_t GetIsTradeCluster() const;

                    /**
                     * 设置<p>是否计费集群</p>
                     * @param _isTradeCluster <p>是否计费集群</p>
                     * 
                     */
                    void SetIsTradeCluster(const int64_t& _isTradeCluster);

                    /**
                     * 判断参数 IsTradeCluster 是否已赋值
                     * @return IsTradeCluster 是否已赋值
                     * 
                     */
                    bool IsTradeClusterHasBeenSet() const;

                    /**
                     * 获取<p>集群错误状态告警信息</p>
                     * @return AlarmInfo <p>集群错误状态告警信息</p>
                     * 
                     */
                    std::string GetAlarmInfo() const;

                    /**
                     * 设置<p>集群错误状态告警信息</p>
                     * @param _alarmInfo <p>集群错误状态告警信息</p>
                     * 
                     */
                    void SetAlarmInfo(const std::string& _alarmInfo);

                    /**
                     * 判断参数 AlarmInfo 是否已赋值
                     * @return AlarmInfo 是否已赋值
                     * 
                     */
                    bool AlarmInfoHasBeenSet() const;

                    /**
                     * 获取<p>是否采用新架构</p>
                     * @return IsWoodpeckerCluster <p>是否采用新架构</p>
                     * 
                     */
                    int64_t GetIsWoodpeckerCluster() const;

                    /**
                     * 设置<p>是否采用新架构</p>
                     * @param _isWoodpeckerCluster <p>是否采用新架构</p>
                     * 
                     */
                    void SetIsWoodpeckerCluster(const int64_t& _isWoodpeckerCluster);

                    /**
                     * 判断参数 IsWoodpeckerCluster 是否已赋值
                     * @return IsWoodpeckerCluster 是否已赋值
                     * 
                     */
                    bool IsWoodpeckerClusterHasBeenSet() const;

                    /**
                     * 获取<p>元数据库信息</p>
                     * @return MetaDb <p>元数据库信息</p>
                     * 
                     */
                    std::string GetMetaDb() const;

                    /**
                     * 设置<p>元数据库信息</p>
                     * @param _metaDb <p>元数据库信息</p>
                     * 
                     */
                    void SetMetaDb(const std::string& _metaDb);

                    /**
                     * 判断参数 MetaDb 是否已赋值
                     * @return MetaDb 是否已赋值
                     * 
                     */
                    bool MetaDbHasBeenSet() const;

                    /**
                     * 获取<p>标签信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags <p>标签信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags <p>标签信息</p>
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
                     * 获取<p>Hive元数据信息</p>
                     * @return HiveMetaDb <p>Hive元数据信息</p>
                     * 
                     */
                    std::string GetHiveMetaDb() const;

                    /**
                     * 设置<p>Hive元数据信息</p>
                     * @param _hiveMetaDb <p>Hive元数据信息</p>
                     * 
                     */
                    void SetHiveMetaDb(const std::string& _hiveMetaDb);

                    /**
                     * 判断参数 HiveMetaDb 是否已赋值
                     * @return HiveMetaDb 是否已赋值
                     * 
                     */
                    bool HiveMetaDbHasBeenSet() const;

                    /**
                     * 获取<p>集群类型:EMR,CLICKHOUSE,DRUID</p>
                     * @return ServiceClass <p>集群类型:EMR,CLICKHOUSE,DRUID</p>
                     * 
                     */
                    std::string GetServiceClass() const;

                    /**
                     * 设置<p>集群类型:EMR,CLICKHOUSE,DRUID</p>
                     * @param _serviceClass <p>集群类型:EMR,CLICKHOUSE,DRUID</p>
                     * 
                     */
                    void SetServiceClass(const std::string& _serviceClass);

                    /**
                     * 判断参数 ServiceClass 是否已赋值
                     * @return ServiceClass 是否已赋值
                     * 
                     */
                    bool ServiceClassHasBeenSet() const;

                    /**
                     * 获取<p>集群所有节点的别名序列化</p>
                     * @return AliasInfo <p>集群所有节点的别名序列化</p>
                     * 
                     */
                    std::string GetAliasInfo() const;

                    /**
                     * 设置<p>集群所有节点的别名序列化</p>
                     * @param _aliasInfo <p>集群所有节点的别名序列化</p>
                     * 
                     */
                    void SetAliasInfo(const std::string& _aliasInfo);

                    /**
                     * 判断参数 AliasInfo 是否已赋值
                     * @return AliasInfo 是否已赋值
                     * 
                     */
                    bool AliasInfoHasBeenSet() const;

                    /**
                     * 获取<p>集群版本Id</p>
                     * @return ProductId <p>集群版本Id</p>
                     * 
                     */
                    int64_t GetProductId() const;

                    /**
                     * 设置<p>集群版本Id</p>
                     * @param _productId <p>集群版本Id</p>
                     * 
                     */
                    void SetProductId(const int64_t& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取<p>地区ID</p>
                     * @return Zone <p>地区ID</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>地区ID</p>
                     * @param _zone <p>地区ID</p>
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取<p>场景名称</p>
                     * @return SceneName <p>场景名称</p>
                     * 
                     */
                    std::string GetSceneName() const;

                    /**
                     * 设置<p>场景名称</p>
                     * @param _sceneName <p>场景名称</p>
                     * 
                     */
                    void SetSceneName(const std::string& _sceneName);

                    /**
                     * 判断参数 SceneName 是否已赋值
                     * @return SceneName 是否已赋值
                     * 
                     */
                    bool SceneNameHasBeenSet() const;

                    /**
                     * 获取<p>场景化集群类型</p>
                     * @return SceneServiceClass <p>场景化集群类型</p>
                     * 
                     */
                    std::string GetSceneServiceClass() const;

                    /**
                     * 设置<p>场景化集群类型</p>
                     * @param _sceneServiceClass <p>场景化集群类型</p>
                     * 
                     */
                    void SetSceneServiceClass(const std::string& _sceneServiceClass);

                    /**
                     * 判断参数 SceneServiceClass 是否已赋值
                     * @return SceneServiceClass 是否已赋值
                     * 
                     */
                    bool SceneServiceClassHasBeenSet() const;

                    /**
                     * 获取<p>场景化EMR版本</p>
                     * @return SceneEmrVersion <p>场景化EMR版本</p>
                     * 
                     */
                    std::string GetSceneEmrVersion() const;

                    /**
                     * 设置<p>场景化EMR版本</p>
                     * @param _sceneEmrVersion <p>场景化EMR版本</p>
                     * 
                     */
                    void SetSceneEmrVersion(const std::string& _sceneEmrVersion);

                    /**
                     * 判断参数 SceneEmrVersion 是否已赋值
                     * @return SceneEmrVersion 是否已赋值
                     * 
                     */
                    bool SceneEmrVersionHasBeenSet() const;

                    /**
                     * 获取<p>场景化集群类型</p>
                     * @return DisplayName <p>场景化集群类型</p>
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置<p>场景化集群类型</p>
                     * @param _displayName <p>场景化集群类型</p>
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取<p>vpc name</p>
                     * @return VpcName <p>vpc name</p>
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置<p>vpc name</p>
                     * @param _vpcName <p>vpc name</p>
                     * 
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取<p>subnet name</p>
                     * @return SubnetName <p>subnet name</p>
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置<p>subnet name</p>
                     * @param _subnetName <p>subnet name</p>
                     * 
                     */
                    void SetSubnetName(const std::string& _subnetName);

                    /**
                     * 判断参数 SubnetName 是否已赋值
                     * @return SubnetName 是否已赋值
                     * 
                     */
                    bool SubnetNameHasBeenSet() const;

                    /**
                     * 获取<p>集群依赖关系</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterExternalServiceInfo <p>集群依赖关系</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ClusterExternalServiceInfo> GetClusterExternalServiceInfo() const;

                    /**
                     * 设置<p>集群依赖关系</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterExternalServiceInfo <p>集群依赖关系</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterExternalServiceInfo(const std::vector<ClusterExternalServiceInfo>& _clusterExternalServiceInfo);

                    /**
                     * 判断参数 ClusterExternalServiceInfo 是否已赋值
                     * @return ClusterExternalServiceInfo 是否已赋值
                     * 
                     */
                    bool ClusterExternalServiceInfoHasBeenSet() const;

                    /**
                     * 获取<p>集群vpcid 字符串类型</p>
                     * @return UniqVpcId <p>集群vpcid 字符串类型</p>
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置<p>集群vpcid 字符串类型</p>
                     * @param _uniqVpcId <p>集群vpcid 字符串类型</p>
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取<p>子网id 字符串类型</p>
                     * @return UniqSubnetId <p>子网id 字符串类型</p>
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置<p>子网id 字符串类型</p>
                     * @param _uniqSubnetId <p>子网id 字符串类型</p>
                     * 
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>节点信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopologyInfoList <p>节点信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TopologyInfo> GetTopologyInfoList() const;

                    /**
                     * 设置<p>节点信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topologyInfoList <p>节点信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTopologyInfoList(const std::vector<TopologyInfo>& _topologyInfoList);

                    /**
                     * 判断参数 TopologyInfoList 是否已赋值
                     * @return TopologyInfoList 是否已赋值
                     * 
                     */
                    bool TopologyInfoListHasBeenSet() const;

                    /**
                     * 获取<p>是否是跨AZ集群</p>
                     * @return IsMultiZoneCluster <p>是否是跨AZ集群</p>
                     * 
                     */
                    bool GetIsMultiZoneCluster() const;

                    /**
                     * 设置<p>是否是跨AZ集群</p>
                     * @param _isMultiZoneCluster <p>是否是跨AZ集群</p>
                     * 
                     */
                    void SetIsMultiZoneCluster(const bool& _isMultiZoneCluster);

                    /**
                     * 判断参数 IsMultiZoneCluster 是否已赋值
                     * @return IsMultiZoneCluster 是否已赋值
                     * 
                     */
                    bool IsMultiZoneClusterHasBeenSet() const;

                    /**
                     * 获取<p>是否开通异常节点自动补偿</p>
                     * @return IsCvmReplace <p>是否开通异常节点自动补偿</p>
                     * 
                     */
                    bool GetIsCvmReplace() const;

                    /**
                     * 设置<p>是否开通异常节点自动补偿</p>
                     * @param _isCvmReplace <p>是否开通异常节点自动补偿</p>
                     * 
                     */
                    void SetIsCvmReplace(const bool& _isCvmReplace);

                    /**
                     * 判断参数 IsCvmReplace 是否已赋值
                     * @return IsCvmReplace 是否已赋值
                     * 
                     */
                    bool IsCvmReplaceHasBeenSet() const;

                    /**
                     * 获取<p>标题</p>
                     * @return ClusterTitle <p>标题</p>
                     * 
                     */
                    std::string GetClusterTitle() const;

                    /**
                     * 设置<p>标题</p>
                     * @param _clusterTitle <p>标题</p>
                     * 
                     */
                    void SetClusterTitle(const std::string& _clusterTitle);

                    /**
                     * 判断参数 ClusterTitle 是否已赋值
                     * @return ClusterTitle 是否已赋值
                     * 
                     */
                    bool ClusterTitleHasBeenSet() const;

                    /**
                     * 获取<p>集群产品配置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigDetail <p>集群产品配置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EmrProductConfigDetail GetConfigDetail() const;

                    /**
                     * 设置<p>集群产品配置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configDetail <p>集群产品配置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigDetail(const EmrProductConfigDetail& _configDetail);

                    /**
                     * 判断参数 ConfigDetail 是否已赋值
                     * @return ConfigDetail 是否已赋值
                     * 
                     */
                    bool ConfigDetailHasBeenSet() const;

                    /**
                     * 获取<p>集群绑定的文件系统数</p>
                     * @return BindFileSystemNum <p>集群绑定的文件系统数</p>
                     * 
                     */
                    int64_t GetBindFileSystemNum() const;

                    /**
                     * 设置<p>集群绑定的文件系统数</p>
                     * @param _bindFileSystemNum <p>集群绑定的文件系统数</p>
                     * 
                     */
                    void SetBindFileSystemNum(const int64_t& _bindFileSystemNum);

                    /**
                     * 判断参数 BindFileSystemNum 是否已赋值
                     * @return BindFileSystemNum 是否已赋值
                     * 
                     */
                    bool BindFileSystemNumHasBeenSet() const;

                    /**
                     * 获取<p>rss集群的绑定列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterRelationInfoList <p>rss集群的绑定列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ClusterRelationMeta> GetClusterRelationInfoList() const;

                    /**
                     * 设置<p>rss集群的绑定列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterRelationInfoList <p>rss集群的绑定列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterRelationInfoList(const std::vector<ClusterRelationMeta>& _clusterRelationInfoList);

                    /**
                     * 判断参数 ClusterRelationInfoList 是否已赋值
                     * @return ClusterRelationInfoList 是否已赋值
                     * 
                     */
                    bool ClusterRelationInfoListHasBeenSet() const;

                    /**
                     * 获取<p>Redis信息</p>
                     * @return RedisId <p>Redis信息</p>
                     * 
                     */
                    std::string GetRedisId() const;

                    /**
                     * 设置<p>Redis信息</p>
                     * @param _redisId <p>Redis信息</p>
                     * 
                     */
                    void SetRedisId(const std::string& _redisId);

                    /**
                     * 判断参数 RedisId 是否已赋值
                     * @return RedisId 是否已赋值
                     * 
                     */
                    bool RedisIdHasBeenSet() const;

                    /**
                     * 获取<p>是否开启IO故障自愈</p>
                     * @return IsIOHungSelfRecovery <p>是否开启IO故障自愈</p>
                     * 
                     */
                    bool GetIsIOHungSelfRecovery() const;

                    /**
                     * 设置<p>是否开启IO故障自愈</p>
                     * @param _isIOHungSelfRecovery <p>是否开启IO故障自愈</p>
                     * 
                     */
                    void SetIsIOHungSelfRecovery(const bool& _isIOHungSelfRecovery);

                    /**
                     * 判断参数 IsIOHungSelfRecovery 是否已赋值
                     * @return IsIOHungSelfRecovery 是否已赋值
                     * 
                     */
                    bool IsIOHungSelfRecoveryHasBeenSet() const;

                    /**
                     * 获取<p>元数据信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetaDBGroupInfo <p>元数据信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CustomMetaDBInfo> GetMetaDBGroupInfo() const;

                    /**
                     * 设置<p>元数据信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metaDBGroupInfo <p>元数据信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetaDBGroupInfo(const std::vector<CustomMetaDBInfo>& _metaDBGroupInfo);

                    /**
                     * 判断参数 MetaDBGroupInfo 是否已赋值
                     * @return MetaDBGroupInfo 是否已赋值
                     * 
                     */
                    bool MetaDBGroupInfoHasBeenSet() const;

                private:

                    /**
                     * <p>ID号</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>集群ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>标题</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ftitle;
                    bool m_ftitleHasBeenSet;

                    /**
                     * <p>集群名</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>地域ID</p>
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * <p>地区ID</p>
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>用户APPID</p>
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>用户UIN</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>项目Id</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>集群VPCID</p>
                     */
                    int64_t m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>子网ID</p>
                     */
                    int64_t m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>实例的状态码。取值范围：</p><li>2：表示集群运行中。</li><li>3：表示集群创建中。</li><li>4：表示集群扩容中。</li><li>5：表示集群增加router节点中。</li><li>6：表示集群安装组件中。</li><li>7：表示集群执行命令中。</li><li>8：表示重启服务中。</li><li>9：表示进入维护中。</li><li>10：表示服务暂停中。</li><li>11：表示退出维护中。</li><li>12：表示退出暂停中。</li><li>13：表示配置下发中。</li><li>14：表示销毁集群中。</li><li>15：表示销毁core节点中。</li><li>16：销毁task节点中。</li><li>17：表示销毁router节点中。</li><li>18：表示更改webproxy密码中。</li><li>19：表示集群隔离中。</li><li>20：表示集群冲正中。</li><li>21：表示集群回收中。</li><li>22：表示变配等待中。</li><li>23：表示集群已隔离。</li><li>24：表示缩容节点中。</li><li>33：表示集群等待退费中。</li><li>34：表示集群已退费。</li><li>301：表示创建失败。</li><li>302：表示扩容失败。</li>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>添加时间</p>
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * <p>已经运行时间</p>
                     */
                    std::string m_runTime;
                    bool m_runTimeHasBeenSet;

                    /**
                     * <p>集群产品配置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EmrProductConfigOutter m_config;
                    bool m_configHasBeenSet;

                    /**
                     * <p>主节点外网IP</p>
                     */
                    std::string m_masterIp;
                    bool m_masterIpHasBeenSet;

                    /**
                     * <p>EMR版本</p>
                     */
                    std::string m_emrVersion;
                    bool m_emrVersionHasBeenSet;

                    /**
                     * <p>收费类型</p>
                     */
                    int64_t m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * <p>交易版本</p>
                     */
                    int64_t m_tradeVersion;
                    bool m_tradeVersionHasBeenSet;

                    /**
                     * <p>资源订单ID</p>
                     */
                    int64_t m_resourceOrderId;
                    bool m_resourceOrderIdHasBeenSet;

                    /**
                     * <p>是否计费集群</p>
                     */
                    int64_t m_isTradeCluster;
                    bool m_isTradeClusterHasBeenSet;

                    /**
                     * <p>集群错误状态告警信息</p>
                     */
                    std::string m_alarmInfo;
                    bool m_alarmInfoHasBeenSet;

                    /**
                     * <p>是否采用新架构</p>
                     */
                    int64_t m_isWoodpeckerCluster;
                    bool m_isWoodpeckerClusterHasBeenSet;

                    /**
                     * <p>元数据库信息</p>
                     */
                    std::string m_metaDb;
                    bool m_metaDbHasBeenSet;

                    /**
                     * <p>标签信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Hive元数据信息</p>
                     */
                    std::string m_hiveMetaDb;
                    bool m_hiveMetaDbHasBeenSet;

                    /**
                     * <p>集群类型:EMR,CLICKHOUSE,DRUID</p>
                     */
                    std::string m_serviceClass;
                    bool m_serviceClassHasBeenSet;

                    /**
                     * <p>集群所有节点的别名序列化</p>
                     */
                    std::string m_aliasInfo;
                    bool m_aliasInfoHasBeenSet;

                    /**
                     * <p>集群版本Id</p>
                     */
                    int64_t m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * <p>地区ID</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>场景名称</p>
                     */
                    std::string m_sceneName;
                    bool m_sceneNameHasBeenSet;

                    /**
                     * <p>场景化集群类型</p>
                     */
                    std::string m_sceneServiceClass;
                    bool m_sceneServiceClassHasBeenSet;

                    /**
                     * <p>场景化EMR版本</p>
                     */
                    std::string m_sceneEmrVersion;
                    bool m_sceneEmrVersionHasBeenSet;

                    /**
                     * <p>场景化集群类型</p>
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * <p>vpc name</p>
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * <p>subnet name</p>
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * <p>集群依赖关系</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ClusterExternalServiceInfo> m_clusterExternalServiceInfo;
                    bool m_clusterExternalServiceInfoHasBeenSet;

                    /**
                     * <p>集群vpcid 字符串类型</p>
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * <p>子网id 字符串类型</p>
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * <p>节点信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TopologyInfo> m_topologyInfoList;
                    bool m_topologyInfoListHasBeenSet;

                    /**
                     * <p>是否是跨AZ集群</p>
                     */
                    bool m_isMultiZoneCluster;
                    bool m_isMultiZoneClusterHasBeenSet;

                    /**
                     * <p>是否开通异常节点自动补偿</p>
                     */
                    bool m_isCvmReplace;
                    bool m_isCvmReplaceHasBeenSet;

                    /**
                     * <p>标题</p>
                     */
                    std::string m_clusterTitle;
                    bool m_clusterTitleHasBeenSet;

                    /**
                     * <p>集群产品配置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EmrProductConfigDetail m_configDetail;
                    bool m_configDetailHasBeenSet;

                    /**
                     * <p>集群绑定的文件系统数</p>
                     */
                    int64_t m_bindFileSystemNum;
                    bool m_bindFileSystemNumHasBeenSet;

                    /**
                     * <p>rss集群的绑定列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ClusterRelationMeta> m_clusterRelationInfoList;
                    bool m_clusterRelationInfoListHasBeenSet;

                    /**
                     * <p>Redis信息</p>
                     */
                    std::string m_redisId;
                    bool m_redisIdHasBeenSet;

                    /**
                     * <p>是否开启IO故障自愈</p>
                     */
                    bool m_isIOHungSelfRecovery;
                    bool m_isIOHungSelfRecoveryHasBeenSet;

                    /**
                     * <p>元数据信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CustomMetaDBInfo> m_metaDBGroupInfo;
                    bool m_metaDBGroupInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CLUSTERINSTANCESINFO_H_
