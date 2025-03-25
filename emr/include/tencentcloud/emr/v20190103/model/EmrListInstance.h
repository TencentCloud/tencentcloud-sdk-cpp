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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_EMRLISTINSTANCE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_EMRLISTINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/Tag.h>
#include <tencentcloud/emr/v20190103/model/SoftDependInfo.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 集群列表返回示例
                */
                class EmrListInstance : public AbstractModel
                {
                public:
                    EmrListInstance();
                    ~EmrListInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
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
                     * 获取常见状态描述：集群生产中,集群运行中,集群创建中,集群已关闭,集群已删除
                     * @return StatusDesc 常见状态描述：集群生产中,集群运行中,集群创建中,集群已关闭,集群已删除
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置常见状态描述：集群生产中,集群运行中,集群创建中,集群已关闭,集群已删除
                     * @param _statusDesc 常见状态描述：集群生产中,集群运行中,集群创建中,集群已关闭,集群已删除
                     * 
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取集群名字
                     * @return ClusterName 集群名字
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名字
                     * @param _clusterName 集群名字
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
                     * 获取集群地域
                     * @return ZoneId 集群地域
                     * 
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置集群地域
                     * @param _zoneId 集群地域
                     * 
                     */
                    void SetZoneId(const uint64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取用户APPID
                     * @return AppId 用户APPID
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置用户APPID
                     * @param _appId 用户APPID
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return AddTime 创建时间
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置创建时间
                     * @param _addTime 创建时间
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
                     * 获取运行时间
                     * @return RunTime 运行时间
                     * 
                     */
                    std::string GetRunTime() const;

                    /**
                     * 设置运行时间
                     * @param _runTime 运行时间
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
                     * 获取集群IP
                     * @return MasterIp 集群IP
                     * 
                     */
                    std::string GetMasterIp() const;

                    /**
                     * 设置集群IP
                     * @param _masterIp 集群IP
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
                     * 获取集群版本
                     * @return EmrVersion 集群版本
                     * 
                     */
                    std::string GetEmrVersion() const;

                    /**
                     * 设置集群版本
                     * @param _emrVersion 集群版本
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
                     * 获取集群计费类型
                     * @return ChargeType 集群计费类型
                     * 
                     */
                    uint64_t GetChargeType() const;

                    /**
                     * 设置集群计费类型
                     * @param _chargeType 集群计费类型
                     * 
                     */
                    void SetChargeType(const uint64_t& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取emr ID
                     * @return Id emr ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置emr ID
                     * @param _id emr ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取产品ID
                     * @return ProductId 产品ID
                     * 
                     */
                    uint64_t GetProductId() const;

                    /**
                     * 设置产品ID
                     * @param _productId 产品ID
                     * 
                     */
                    void SetProductId(const uint64_t& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取区域
                     * @return RegionId 区域
                     * 
                     */
                    uint64_t GetRegionId() const;

                    /**
                     * 设置区域
                     * @param _regionId 区域
                     * 
                     */
                    void SetRegionId(const uint64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取子网ID
                     * @return SubnetId 子网ID
                     * 
                     */
                    uint64_t GetSubnetId() const;

                    /**
                     * 设置子网ID
                     * @param _subnetId 子网ID
                     * 
                     */
                    void SetSubnetId(const uint64_t& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取网络ID
                     * @return VpcId 网络ID
                     * 
                     */
                    uint64_t GetVpcId() const;

                    /**
                     * 设置网络ID
                     * @param _vpcId 网络ID
                     * 
                     */
                    void SetVpcId(const uint64_t& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取地区
                     * @return Zone 地区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置地区
                     * @param _zone 地区
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
                     * 获取状态码, 取值为-2(集群已删除), -1(集群已关闭), 0(集群生产中), 2(集群运行中), 3(集群创建中)
                     * @return Status 状态码, 取值为-2(集群已删除), -1(集群已关闭), 0(集群生产中), 2(集群运行中), 3(集群创建中)
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置状态码, 取值为-2(集群已删除), -1(集群已关闭), 0(集群生产中), 2(集群运行中), 3(集群创建中)
                     * @param _status 状态码, 取值为-2(集群已删除), -1(集群已关闭), 0(集群生产中), 2(集群运行中), 3(集群创建中)
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取实例标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 实例标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置实例标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 实例标签
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
                     * 获取告警信息
                     * @return AlarmInfo 告警信息
                     * 
                     */
                    std::string GetAlarmInfo() const;

                    /**
                     * 设置告警信息
                     * @param _alarmInfo 告警信息
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
                     * 获取是否是woodpecker集群
                     * @return IsWoodpeckerCluster 是否是woodpecker集群
                     * 
                     */
                    uint64_t GetIsWoodpeckerCluster() const;

                    /**
                     * 设置是否是woodpecker集群
                     * @param _isWoodpeckerCluster 是否是woodpecker集群
                     * 
                     */
                    void SetIsWoodpeckerCluster(const uint64_t& _isWoodpeckerCluster);

                    /**
                     * 判断参数 IsWoodpeckerCluster 是否已赋值
                     * @return IsWoodpeckerCluster 是否已赋值
                     * 
                     */
                    bool IsWoodpeckerClusterHasBeenSet() const;

                    /**
                     * 获取Vpc中文
                     * @return VpcName Vpc中文
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置Vpc中文
                     * @param _vpcName Vpc中文
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
                     * 获取子网中文
                     * @return SubnetName 子网中文
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置子网中文
                     * @param _subnetName 子网中文
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
                     * 获取字符串VpcId
                     * @return UniqVpcId 字符串VpcId
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置字符串VpcId
                     * @param _uniqVpcId 字符串VpcId
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
                     * 获取字符串子网
                     * @return UniqSubnetId 字符串子网
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置字符串子网
                     * @param _uniqSubnetId 字符串子网
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
                     * 获取集群类型
                     * @return ClusterClass 集群类型
                     * 
                     */
                    std::string GetClusterClass() const;

                    /**
                     * 设置集群类型
                     * @param _clusterClass 集群类型
                     * 
                     */
                    void SetClusterClass(const std::string& _clusterClass);

                    /**
                     * 判断参数 ClusterClass 是否已赋值
                     * @return ClusterClass 是否已赋值
                     * 
                     */
                    bool ClusterClassHasBeenSet() const;

                    /**
                     * 获取是否为跨AZ集群
                     * @return IsMultiZoneCluster 是否为跨AZ集群
                     * 
                     */
                    bool GetIsMultiZoneCluster() const;

                    /**
                     * 设置是否为跨AZ集群
                     * @param _isMultiZoneCluster 是否为跨AZ集群
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
                     * 获取是否手戳集群
                     * @return IsHandsCluster 是否手戳集群
                     * 
                     */
                    bool GetIsHandsCluster() const;

                    /**
                     * 设置是否手戳集群
                     * @param _isHandsCluster 是否手戳集群
                     * 
                     */
                    void SetIsHandsCluster(const bool& _isHandsCluster);

                    /**
                     * 判断参数 IsHandsCluster 是否已赋值
                     * @return IsHandsCluster 是否已赋值
                     * 
                     */
                    bool IsHandsClusterHasBeenSet() const;

                    /**
                     * 获取体外客户端组件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutSideSoftInfo 体外客户端组件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SoftDependInfo> GetOutSideSoftInfo() const;

                    /**
                     * 设置体外客户端组件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outSideSoftInfo 体外客户端组件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutSideSoftInfo(const std::vector<SoftDependInfo>& _outSideSoftInfo);

                    /**
                     * 判断参数 OutSideSoftInfo 是否已赋值
                     * @return OutSideSoftInfo 是否已赋值
                     * 
                     */
                    bool OutSideSoftInfoHasBeenSet() const;

                    /**
                     * 获取当前集群的应用场景是否支持体外客户端
                     * @return IsSupportOutsideCluster 当前集群的应用场景是否支持体外客户端
                     * 
                     */
                    bool GetIsSupportOutsideCluster() const;

                    /**
                     * 设置当前集群的应用场景是否支持体外客户端
                     * @param _isSupportOutsideCluster 当前集群的应用场景是否支持体外客户端
                     * 
                     */
                    void SetIsSupportOutsideCluster(const bool& _isSupportOutsideCluster);

                    /**
                     * 判断参数 IsSupportOutsideCluster 是否已赋值
                     * @return IsSupportOutsideCluster 是否已赋值
                     * 
                     */
                    bool IsSupportOutsideClusterHasBeenSet() const;

                    /**
                     * 获取是否专有集群场景集群
                     * @return IsDedicatedCluster 是否专有集群场景集群
                     * 
                     */
                    bool GetIsDedicatedCluster() const;

                    /**
                     * 设置是否专有集群场景集群
                     * @param _isDedicatedCluster 是否专有集群场景集群
                     * 
                     */
                    void SetIsDedicatedCluster(const bool& _isDedicatedCluster);

                    /**
                     * 判断参数 IsDedicatedCluster 是否已赋值
                     * @return IsDedicatedCluster 是否已赋值
                     * 
                     */
                    bool IsDedicatedClusterHasBeenSet() const;

                    /**
                     * 获取集群支持克隆
                     * @return IsSupportClone 集群支持克隆
                     * 
                     */
                    bool GetIsSupportClone() const;

                    /**
                     * 设置集群支持克隆
                     * @param _isSupportClone 集群支持克隆
                     * 
                     */
                    void SetIsSupportClone(const bool& _isSupportClone);

                    /**
                     * 判断参数 IsSupportClone 是否已赋值
                     * @return IsSupportClone 是否已赋值
                     * 
                     */
                    bool IsSupportCloneHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 常见状态描述：集群生产中,集群运行中,集群创建中,集群已关闭,集群已删除
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * 集群名字
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 集群地域
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 用户APPID
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * 运行时间
                     */
                    std::string m_runTime;
                    bool m_runTimeHasBeenSet;

                    /**
                     * 集群IP
                     */
                    std::string m_masterIp;
                    bool m_masterIpHasBeenSet;

                    /**
                     * 集群版本
                     */
                    std::string m_emrVersion;
                    bool m_emrVersionHasBeenSet;

                    /**
                     * 集群计费类型
                     */
                    uint64_t m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * emr ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 产品ID
                     */
                    uint64_t m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 项目ID
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 区域
                     */
                    uint64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 子网ID
                     */
                    uint64_t m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 网络ID
                     */
                    uint64_t m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 地区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 状态码, 取值为-2(集群已删除), -1(集群已关闭), 0(集群生产中), 2(集群运行中), 3(集群创建中)
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 告警信息
                     */
                    std::string m_alarmInfo;
                    bool m_alarmInfoHasBeenSet;

                    /**
                     * 是否是woodpecker集群
                     */
                    uint64_t m_isWoodpeckerCluster;
                    bool m_isWoodpeckerClusterHasBeenSet;

                    /**
                     * Vpc中文
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * 子网中文
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * 字符串VpcId
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * 字符串子网
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * 集群类型
                     */
                    std::string m_clusterClass;
                    bool m_clusterClassHasBeenSet;

                    /**
                     * 是否为跨AZ集群
                     */
                    bool m_isMultiZoneCluster;
                    bool m_isMultiZoneClusterHasBeenSet;

                    /**
                     * 是否手戳集群
                     */
                    bool m_isHandsCluster;
                    bool m_isHandsClusterHasBeenSet;

                    /**
                     * 体外客户端组件信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SoftDependInfo> m_outSideSoftInfo;
                    bool m_outSideSoftInfoHasBeenSet;

                    /**
                     * 当前集群的应用场景是否支持体外客户端
                     */
                    bool m_isSupportOutsideCluster;
                    bool m_isSupportOutsideClusterHasBeenSet;

                    /**
                     * 是否专有集群场景集群
                     */
                    bool m_isDedicatedCluster;
                    bool m_isDedicatedClusterHasBeenSet;

                    /**
                     * 集群支持克隆
                     */
                    bool m_isSupportClone;
                    bool m_isSupportCloneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_EMRLISTINSTANCE_H_
