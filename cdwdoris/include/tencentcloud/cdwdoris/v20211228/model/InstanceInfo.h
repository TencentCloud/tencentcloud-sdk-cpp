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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_INSTANCEINFO_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_INSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/NodesSummary.h>
#include <tencentcloud/cdwdoris/v20211228/model/Tag.h>
#include <tencentcloud/cdwdoris/v20211228/model/InstanceDetail.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * 实例描述信息
                */
                class InstanceInfo : public AbstractModel
                {
                public:
                    InstanceInfo();
                    ~InstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群实例ID, "cdw-xxxx" 字符串类型
                     * @return InstanceId 集群实例ID, "cdw-xxxx" 字符串类型
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群实例ID, "cdw-xxxx" 字符串类型
                     * @param _instanceId 集群实例ID, "cdw-xxxx" 字符串类型
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
                     * 获取集群实例名称
                     * @return InstanceName 集群实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置集群实例名称
                     * @param _instanceName 集群实例名称
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
                     * 获取状态,
Init 创建中; Serving 运行中； 
Deleted已销毁；Deleting 销毁中；
Modify 集群变更中；
                     * @return Status 状态,
Init 创建中; Serving 运行中； 
Deleted已销毁；Deleting 销毁中；
Modify 集群变更中；
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态,
Init 创建中; Serving 运行中； 
Deleted已销毁；Deleting 销毁中；
Modify 集群变更中；
                     * @param _status 状态,
Init 创建中; Serving 运行中； 
Deleted已销毁；Deleting 销毁中；
Modify 集群变更中；
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
                     * 获取版本
                     * @return Version 版本
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置版本
                     * @param _version 版本
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取地域, ap-guangzhou
                     * @return Region 地域, ap-guangzhou
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域, ap-guangzhou
                     * @param _region 地域, ap-guangzhou
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取可用区， ap-guangzhou-3
                     * @return Zone 可用区， ap-guangzhou-3
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区， ap-guangzhou-3
                     * @param _zone 可用区， ap-guangzhou-3
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
                     * 获取私有网络名称
                     * @return VpcId 私有网络名称
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络名称
                     * @param _vpcId 私有网络名称
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
                     * 获取子网名称
                     * @return SubnetId 子网名称
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网名称
                     * @param _subnetId 子网名称
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取付费类型，"hour", "prepay"
                     * @return PayMode 付费类型，"hour", "prepay"
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置付费类型，"hour", "prepay"
                     * @param _payMode 付费类型，"hour", "prepay"
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取过期时间
                     * @return ExpireTime 过期时间
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置过期时间
                     * @param _expireTime 过期时间
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取数据节点描述信息
                     * @return MasterSummary 数据节点描述信息
                     * 
                     */
                    NodesSummary GetMasterSummary() const;

                    /**
                     * 设置数据节点描述信息
                     * @param _masterSummary 数据节点描述信息
                     * 
                     */
                    void SetMasterSummary(const NodesSummary& _masterSummary);

                    /**
                     * 判断参数 MasterSummary 是否已赋值
                     * @return MasterSummary 是否已赋值
                     * 
                     */
                    bool MasterSummaryHasBeenSet() const;

                    /**
                     * 获取zookeeper节点描述信息
                     * @return CoreSummary zookeeper节点描述信息
                     * 
                     */
                    NodesSummary GetCoreSummary() const;

                    /**
                     * 设置zookeeper节点描述信息
                     * @param _coreSummary zookeeper节点描述信息
                     * 
                     */
                    void SetCoreSummary(const NodesSummary& _coreSummary);

                    /**
                     * 判断参数 CoreSummary 是否已赋值
                     * @return CoreSummary 是否已赋值
                     * 
                     */
                    bool CoreSummaryHasBeenSet() const;

                    /**
                     * 获取高可用，“true" "false"
                     * @return HA 高可用，“true" "false"
                     * 
                     */
                    std::string GetHA() const;

                    /**
                     * 设置高可用，“true" "false"
                     * @param _hA 高可用，“true" "false"
                     * 
                     */
                    void SetHA(const std::string& _hA);

                    /**
                     * 判断参数 HA 是否已赋值
                     * @return HA 是否已赋值
                     * 
                     */
                    bool HAHasBeenSet() const;

                    /**
                     * 获取高可用类型：
0：非高可用
1：读高可用
2：读写高可用。
                     * @return HaType 高可用类型：
0：非高可用
1：读高可用
2：读写高可用。
                     * 
                     */
                    int64_t GetHaType() const;

                    /**
                     * 设置高可用类型：
0：非高可用
1：读高可用
2：读写高可用。
                     * @param _haType 高可用类型：
0：非高可用
1：读高可用
2：读写高可用。
                     * 
                     */
                    void SetHaType(const int64_t& _haType);

                    /**
                     * 判断参数 HaType 是否已赋值
                     * @return HaType 是否已赋值
                     * 
                     */
                    bool HaTypeHasBeenSet() const;

                    /**
                     * 获取访问地址，例如 "10.0.0.1:9000"
                     * @return AccessInfo 访问地址，例如 "10.0.0.1:9000"
                     * 
                     */
                    std::string GetAccessInfo() const;

                    /**
                     * 设置访问地址，例如 "10.0.0.1:9000"
                     * @param _accessInfo 访问地址，例如 "10.0.0.1:9000"
                     * 
                     */
                    void SetAccessInfo(const std::string& _accessInfo);

                    /**
                     * 判断参数 AccessInfo 是否已赋值
                     * @return AccessInfo 是否已赋值
                     * 
                     */
                    bool AccessInfoHasBeenSet() const;

                    /**
                     * 获取记录ID，数值型
                     * @return Id 记录ID，数值型
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置记录ID，数值型
                     * @param _id 记录ID，数值型
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
                     * 获取regionId, 表示地域
                     * @return RegionId regionId, 表示地域
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置regionId, 表示地域
                     * @param _regionId regionId, 表示地域
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
                     * 获取可用区说明，例如 "广州二区"
                     * @return ZoneDesc 可用区说明，例如 "广州二区"
                     * 
                     */
                    std::string GetZoneDesc() const;

                    /**
                     * 设置可用区说明，例如 "广州二区"
                     * @param _zoneDesc 可用区说明，例如 "广州二区"
                     * 
                     */
                    void SetZoneDesc(const std::string& _zoneDesc);

                    /**
                     * 判断参数 ZoneDesc 是否已赋值
                     * @return ZoneDesc 是否已赋值
                     * 
                     */
                    bool ZoneDescHasBeenSet() const;

                    /**
                     * 获取错误流程说明信息
                     * @return FlowMsg 错误流程说明信息
                     * 
                     */
                    std::string GetFlowMsg() const;

                    /**
                     * 设置错误流程说明信息
                     * @param _flowMsg 错误流程说明信息
                     * 
                     */
                    void SetFlowMsg(const std::string& _flowMsg);

                    /**
                     * 判断参数 FlowMsg 是否已赋值
                     * @return FlowMsg 是否已赋值
                     * 
                     */
                    bool FlowMsgHasBeenSet() const;

                    /**
                     * 获取状态描述，例如“运行中”等
                     * @return StatusDesc 状态描述，例如“运行中”等
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置状态描述，例如“运行中”等
                     * @param _statusDesc 状态描述，例如“运行中”等
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
                     * 获取自动续费标记
                     * @return RenewFlag 自动续费标记
                     * 
                     */
                    bool GetRenewFlag() const;

                    /**
                     * 设置自动续费标记
                     * @param _renewFlag 自动续费标记
                     * 
                     */
                    void SetRenewFlag(const bool& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取标签列表
                     * @return Tags 标签列表
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签列表
                     * @param _tags 标签列表
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
                     * 获取监控信息
                     * @return Monitor 监控信息
                     * 
                     */
                    std::string GetMonitor() const;

                    /**
                     * 设置监控信息
                     * @param _monitor 监控信息
                     * 
                     */
                    void SetMonitor(const std::string& _monitor);

                    /**
                     * 判断参数 Monitor 是否已赋值
                     * @return Monitor 是否已赋值
                     * 
                     */
                    bool MonitorHasBeenSet() const;

                    /**
                     * 获取是否开通日志
                     * @return HasClsTopic 是否开通日志
                     * 
                     */
                    bool GetHasClsTopic() const;

                    /**
                     * 设置是否开通日志
                     * @param _hasClsTopic 是否开通日志
                     * 
                     */
                    void SetHasClsTopic(const bool& _hasClsTopic);

                    /**
                     * 判断参数 HasClsTopic 是否已赋值
                     * @return HasClsTopic 是否已赋值
                     * 
                     */
                    bool HasClsTopicHasBeenSet() const;

                    /**
                     * 获取日志主题ID
                     * @return ClsTopicId 日志主题ID
                     * 
                     */
                    std::string GetClsTopicId() const;

                    /**
                     * 设置日志主题ID
                     * @param _clsTopicId 日志主题ID
                     * 
                     */
                    void SetClsTopicId(const std::string& _clsTopicId);

                    /**
                     * 判断参数 ClsTopicId 是否已赋值
                     * @return ClsTopicId 是否已赋值
                     * 
                     */
                    bool ClsTopicIdHasBeenSet() const;

                    /**
                     * 获取日志集ID
                     * @return ClsLogSetId 日志集ID
                     * 
                     */
                    std::string GetClsLogSetId() const;

                    /**
                     * 设置日志集ID
                     * @param _clsLogSetId 日志集ID
                     * 
                     */
                    void SetClsLogSetId(const std::string& _clsLogSetId);

                    /**
                     * 判断参数 ClsLogSetId 是否已赋值
                     * @return ClsLogSetId 是否已赋值
                     * 
                     */
                    bool ClsLogSetIdHasBeenSet() const;

                    /**
                     * 获取是否支持xml配置管理
                     * @return EnableXMLConfig 是否支持xml配置管理
                     * 
                     */
                    int64_t GetEnableXMLConfig() const;

                    /**
                     * 设置是否支持xml配置管理
                     * @param _enableXMLConfig 是否支持xml配置管理
                     * 
                     */
                    void SetEnableXMLConfig(const int64_t& _enableXMLConfig);

                    /**
                     * 判断参数 EnableXMLConfig 是否已赋值
                     * @return EnableXMLConfig 是否已赋值
                     * 
                     */
                    bool EnableXMLConfigHasBeenSet() const;

                    /**
                     * 获取区域
                     * @return RegionDesc 区域
                     * 
                     */
                    std::string GetRegionDesc() const;

                    /**
                     * 设置区域
                     * @param _regionDesc 区域
                     * 
                     */
                    void SetRegionDesc(const std::string& _regionDesc);

                    /**
                     * 判断参数 RegionDesc 是否已赋值
                     * @return RegionDesc 是否已赋值
                     * 
                     */
                    bool RegionDescHasBeenSet() const;

                    /**
                     * 获取弹性网卡地址
                     * @return Eip 弹性网卡地址
                     * 
                     */
                    std::string GetEip() const;

                    /**
                     * 设置弹性网卡地址
                     * @param _eip 弹性网卡地址
                     * 
                     */
                    void SetEip(const std::string& _eip);

                    /**
                     * 判断参数 Eip 是否已赋值
                     * @return Eip 是否已赋值
                     * 
                     */
                    bool EipHasBeenSet() const;

                    /**
                     * 获取冷热分层系数
                     * @return CosMoveFactor 冷热分层系数
                     * 
                     */
                    int64_t GetCosMoveFactor() const;

                    /**
                     * 设置冷热分层系数
                     * @param _cosMoveFactor 冷热分层系数
                     * 
                     */
                    void SetCosMoveFactor(const int64_t& _cosMoveFactor);

                    /**
                     * 判断参数 CosMoveFactor 是否已赋值
                     * @return CosMoveFactor 是否已赋值
                     * 
                     */
                    bool CosMoveFactorHasBeenSet() const;

                    /**
                     * 获取external/local/yunti
                     * @return Kind external/local/yunti
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置external/local/yunti
                     * @param _kind external/local/yunti
                     * 
                     */
                    void SetKind(const std::string& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取cos桶
                     * @return CosBucketName cos桶
                     * 
                     */
                    std::string GetCosBucketName() const;

                    /**
                     * 设置cos桶
                     * @param _cosBucketName cos桶
                     * 
                     */
                    void SetCosBucketName(const std::string& _cosBucketName);

                    /**
                     * 判断参数 CosBucketName 是否已赋值
                     * @return CosBucketName 是否已赋值
                     * 
                     */
                    bool CosBucketNameHasBeenSet() const;

                    /**
                     * 获取cbs
                     * @return CanAttachCbs cbs
                     * 
                     */
                    bool GetCanAttachCbs() const;

                    /**
                     * 设置cbs
                     * @param _canAttachCbs cbs
                     * 
                     */
                    void SetCanAttachCbs(const bool& _canAttachCbs);

                    /**
                     * 判断参数 CanAttachCbs 是否已赋值
                     * @return CanAttachCbs 是否已赋值
                     * 
                     */
                    bool CanAttachCbsHasBeenSet() const;

                    /**
                     * 获取小版本
                     * @return BuildVersion 小版本
                     * 
                     */
                    std::string GetBuildVersion() const;

                    /**
                     * 设置小版本
                     * @param _buildVersion 小版本
                     * 
                     */
                    void SetBuildVersion(const std::string& _buildVersion);

                    /**
                     * 判断参数 BuildVersion 是否已赋值
                     * @return BuildVersion 是否已赋值
                     * 
                     */
                    bool BuildVersionHasBeenSet() const;

                    /**
                     * 获取组件信息
注：这里返回类型实际为map[string]struct类型，并非显示的string类型，可以参考“示例值”进行数据的解析。
                     * @return Components 组件信息
注：这里返回类型实际为map[string]struct类型，并非显示的string类型，可以参考“示例值”进行数据的解析。
                     * 
                     */
                    std::string GetComponents() const;

                    /**
                     * 设置组件信息
注：这里返回类型实际为map[string]struct类型，并非显示的string类型，可以参考“示例值”进行数据的解析。
                     * @param _components 组件信息
注：这里返回类型实际为map[string]struct类型，并非显示的string类型，可以参考“示例值”进行数据的解析。
                     * 
                     */
                    void SetComponents(const std::string& _components);

                    /**
                     * 判断参数 Components 是否已赋值
                     * @return Components 是否已赋值
                     * 
                     */
                    bool ComponentsHasBeenSet() const;

                    /**
                     * 获取判断审计日志表是否有catalog字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IfExistCatalog 判断审计日志表是否有catalog字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    int64_t GetIfExistCatalog() const;

                    /**
                     * 设置判断审计日志表是否有catalog字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ifExistCatalog 判断审计日志表是否有catalog字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetIfExistCatalog(const int64_t& _ifExistCatalog);

                    /**
                     * 判断参数 IfExistCatalog 是否已赋值
                     * @return IfExistCatalog 是否已赋值
                     * @deprecated
                     */
                    bool IfExistCatalogHasBeenSet() const;

                    /**
                     * 获取页面特性，用于前端屏蔽一些页面入口
                     * @return Characteristic 页面特性，用于前端屏蔽一些页面入口
                     * 
                     */
                    std::vector<std::string> GetCharacteristic() const;

                    /**
                     * 设置页面特性，用于前端屏蔽一些页面入口
                     * @param _characteristic 页面特性，用于前端屏蔽一些页面入口
                     * 
                     */
                    void SetCharacteristic(const std::vector<std::string>& _characteristic);

                    /**
                     * 判断参数 Characteristic 是否已赋值
                     * @return Characteristic 是否已赋值
                     * 
                     */
                    bool CharacteristicHasBeenSet() const;

                    /**
                     * 获取超时时间 单位s
                     * @return RestartTimeout 超时时间 单位s
                     * 
                     */
                    std::string GetRestartTimeout() const;

                    /**
                     * 设置超时时间 单位s
                     * @param _restartTimeout 超时时间 单位s
                     * 
                     */
                    void SetRestartTimeout(const std::string& _restartTimeout);

                    /**
                     * 判断参数 RestartTimeout 是否已赋值
                     * @return RestartTimeout 是否已赋值
                     * 
                     */
                    bool RestartTimeoutHasBeenSet() const;

                    /**
                     * 获取内核优雅重启超时时间，如果为-1说明未设置
                     * @return GraceShutdownWaitSeconds 内核优雅重启超时时间，如果为-1说明未设置
                     * 
                     */
                    std::string GetGraceShutdownWaitSeconds() const;

                    /**
                     * 设置内核优雅重启超时时间，如果为-1说明未设置
                     * @param _graceShutdownWaitSeconds 内核优雅重启超时时间，如果为-1说明未设置
                     * 
                     */
                    void SetGraceShutdownWaitSeconds(const std::string& _graceShutdownWaitSeconds);

                    /**
                     * 判断参数 GraceShutdownWaitSeconds 是否已赋值
                     * @return GraceShutdownWaitSeconds 是否已赋值
                     * 
                     */
                    bool GraceShutdownWaitSecondsHasBeenSet() const;

                    /**
                     * 获取表名大小写是否敏感，0：敏感；1：不敏感，以小写进行比较；2：不敏感，表名改为以小写存储
                     * @return CaseSensitive 表名大小写是否敏感，0：敏感；1：不敏感，以小写进行比较；2：不敏感，表名改为以小写存储
                     * 
                     */
                    int64_t GetCaseSensitive() const;

                    /**
                     * 设置表名大小写是否敏感，0：敏感；1：不敏感，以小写进行比较；2：不敏感，表名改为以小写存储
                     * @param _caseSensitive 表名大小写是否敏感，0：敏感；1：不敏感，以小写进行比较；2：不敏感，表名改为以小写存储
                     * 
                     */
                    void SetCaseSensitive(const int64_t& _caseSensitive);

                    /**
                     * 判断参数 CaseSensitive 是否已赋值
                     * @return CaseSensitive 是否已赋值
                     * 
                     */
                    bool CaseSensitiveHasBeenSet() const;

                    /**
                     * 获取用户是否可以绑定安全组
                     * @return IsWhiteSGs 用户是否可以绑定安全组
                     * 
                     */
                    bool GetIsWhiteSGs() const;

                    /**
                     * 设置用户是否可以绑定安全组
                     * @param _isWhiteSGs 用户是否可以绑定安全组
                     * 
                     */
                    void SetIsWhiteSGs(const bool& _isWhiteSGs);

                    /**
                     * 判断参数 IsWhiteSGs 是否已赋值
                     * @return IsWhiteSGs 是否已赋值
                     * 
                     */
                    bool IsWhiteSGsHasBeenSet() const;

                    /**
                     * 获取已绑定的安全组信息
                     * @return BindSGs 已绑定的安全组信息
                     * 
                     */
                    std::vector<std::string> GetBindSGs() const;

                    /**
                     * 设置已绑定的安全组信息
                     * @param _bindSGs 已绑定的安全组信息
                     * 
                     */
                    void SetBindSGs(const std::vector<std::string>& _bindSGs);

                    /**
                     * 判断参数 BindSGs 是否已赋值
                     * @return BindSGs 是否已赋值
                     * 
                     */
                    bool BindSGsHasBeenSet() const;

                    /**
                     * 获取是否为多可用区
                     * @return EnableMultiZones 是否为多可用区
                     * 
                     */
                    bool GetEnableMultiZones() const;

                    /**
                     * 设置是否为多可用区
                     * @param _enableMultiZones 是否为多可用区
                     * 
                     */
                    void SetEnableMultiZones(const bool& _enableMultiZones);

                    /**
                     * 判断参数 EnableMultiZones 是否已赋值
                     * @return EnableMultiZones 是否已赋值
                     * 
                     */
                    bool EnableMultiZonesHasBeenSet() const;

                    /**
                     * 获取用户可用区和子网信息
                     * @return UserNetworkInfos 用户可用区和子网信息
                     * 
                     */
                    std::string GetUserNetworkInfos() const;

                    /**
                     * 设置用户可用区和子网信息
                     * @param _userNetworkInfos 用户可用区和子网信息
                     * 
                     */
                    void SetUserNetworkInfos(const std::string& _userNetworkInfos);

                    /**
                     * 判断参数 UserNetworkInfos 是否已赋值
                     * @return UserNetworkInfos 是否已赋值
                     * 
                     */
                    bool UserNetworkInfosHasBeenSet() const;

                    /**
                     * 获取是否启用冷热分层。0：未开启 1：已开启
                     * @return EnableCoolDown 是否启用冷热分层。0：未开启 1：已开启
                     * 
                     */
                    int64_t GetEnableCoolDown() const;

                    /**
                     * 设置是否启用冷热分层。0：未开启 1：已开启
                     * @param _enableCoolDown 是否启用冷热分层。0：未开启 1：已开启
                     * 
                     */
                    void SetEnableCoolDown(const int64_t& _enableCoolDown);

                    /**
                     * 判断参数 EnableCoolDown 是否已赋值
                     * @return EnableCoolDown 是否已赋值
                     * 
                     */
                    bool EnableCoolDownHasBeenSet() const;

                    /**
                     * 获取冷热分层使用COS桶
                     * @return CoolDownBucket 冷热分层使用COS桶
                     * 
                     */
                    std::string GetCoolDownBucket() const;

                    /**
                     * 设置冷热分层使用COS桶
                     * @param _coolDownBucket 冷热分层使用COS桶
                     * 
                     */
                    void SetCoolDownBucket(const std::string& _coolDownBucket);

                    /**
                     * 判断参数 CoolDownBucket 是否已赋值
                     * @return CoolDownBucket 是否已赋值
                     * 
                     */
                    bool CoolDownBucketHasBeenSet() const;

                    /**
                     * 获取实例扩展信息
                     * @return Details 实例扩展信息
                     * 
                     */
                    InstanceDetail GetDetails() const;

                    /**
                     * 设置实例扩展信息
                     * @param _details 实例扩展信息
                     * 
                     */
                    void SetDetails(const InstanceDetail& _details);

                    /**
                     * 判断参数 Details 是否已赋值
                     * @return Details 是否已赋值
                     * 
                     */
                    bool DetailsHasBeenSet() const;

                    /**
                     * 获取是否启用DLC 0:关闭 1:开启
                     * @return EnableDlc 是否启用DLC 0:关闭 1:开启
                     * 
                     */
                    int64_t GetEnableDlc() const;

                    /**
                     * 设置是否启用DLC 0:关闭 1:开启
                     * @param _enableDlc 是否启用DLC 0:关闭 1:开启
                     * 
                     */
                    void SetEnableDlc(const int64_t& _enableDlc);

                    /**
                     * 判断参数 EnableDlc 是否已赋值
                     * @return EnableDlc 是否已赋值
                     * 
                     */
                    bool EnableDlcHasBeenSet() const;

                    /**
                     * 获取账户类型 0:普通用户 1:CAM用户
                     * @return AccountType 账户类型 0:普通用户 1:CAM用户
                     * 
                     */
                    int64_t GetAccountType() const;

                    /**
                     * 设置账户类型 0:普通用户 1:CAM用户
                     * @param _accountType 账户类型 0:普通用户 1:CAM用户
                     * 
                     */
                    void SetAccountType(const int64_t& _accountType);

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                    /**
                     * 获取监控模式 0: 老监控 1：新监控
                     * @return MonitorMode 监控模式 0: 老监控 1：新监控
                     * 
                     */
                    int64_t GetMonitorMode() const;

                    /**
                     * 设置监控模式 0: 老监控 1：新监控
                     * @param _monitorMode 监控模式 0: 老监控 1：新监控
                     * 
                     */
                    void SetMonitorMode(const int64_t& _monitorMode);

                    /**
                     * 判断参数 MonitorMode 是否已赋值
                     * @return MonitorMode 是否已赋值
                     * 
                     */
                    bool MonitorModeHasBeenSet() const;

                    /**
                     * 获取cn节点信息
                     * @return CNSummary cn节点信息
                     * 
                     */
                    NodesSummary GetCNSummary() const;

                    /**
                     * 设置cn节点信息
                     * @param _cNSummary cn节点信息
                     * 
                     */
                    void SetCNSummary(const NodesSummary& _cNSummary);

                    /**
                     * 判断参数 CNSummary 是否已赋值
                     * @return CNSummary 是否已赋值
                     * 
                     */
                    bool CNSummaryHasBeenSet() const;

                    /**
                     * 获取计算组个数
                     * @return ComputeGroupCount 计算组个数
                     * 
                     */
                    int64_t GetComputeGroupCount() const;

                    /**
                     * 设置计算组个数
                     * @param _computeGroupCount 计算组个数
                     * 
                     */
                    void SetComputeGroupCount(const int64_t& _computeGroupCount);

                    /**
                     * 判断参数 ComputeGroupCount 是否已赋值
                     * @return ComputeGroupCount 是否已赋值
                     * 
                     */
                    bool ComputeGroupCountHasBeenSet() const;

                private:

                    /**
                     * 集群实例ID, "cdw-xxxx" 字符串类型
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 集群实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 状态,
Init 创建中; Serving 运行中； 
Deleted已销毁；Deleting 销毁中；
Modify 集群变更中；
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 版本
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 地域, ap-guangzhou
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 可用区， ap-guangzhou-3
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 私有网络名称
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网名称
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 付费类型，"hour", "prepay"
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 过期时间
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 数据节点描述信息
                     */
                    NodesSummary m_masterSummary;
                    bool m_masterSummaryHasBeenSet;

                    /**
                     * zookeeper节点描述信息
                     */
                    NodesSummary m_coreSummary;
                    bool m_coreSummaryHasBeenSet;

                    /**
                     * 高可用，“true" "false"
                     */
                    std::string m_hA;
                    bool m_hAHasBeenSet;

                    /**
                     * 高可用类型：
0：非高可用
1：读高可用
2：读写高可用。
                     */
                    int64_t m_haType;
                    bool m_haTypeHasBeenSet;

                    /**
                     * 访问地址，例如 "10.0.0.1:9000"
                     */
                    std::string m_accessInfo;
                    bool m_accessInfoHasBeenSet;

                    /**
                     * 记录ID，数值型
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * regionId, 表示地域
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 可用区说明，例如 "广州二区"
                     */
                    std::string m_zoneDesc;
                    bool m_zoneDescHasBeenSet;

                    /**
                     * 错误流程说明信息
                     */
                    std::string m_flowMsg;
                    bool m_flowMsgHasBeenSet;

                    /**
                     * 状态描述，例如“运行中”等
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * 自动续费标记
                     */
                    bool m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 标签列表
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 监控信息
                     */
                    std::string m_monitor;
                    bool m_monitorHasBeenSet;

                    /**
                     * 是否开通日志
                     */
                    bool m_hasClsTopic;
                    bool m_hasClsTopicHasBeenSet;

                    /**
                     * 日志主题ID
                     */
                    std::string m_clsTopicId;
                    bool m_clsTopicIdHasBeenSet;

                    /**
                     * 日志集ID
                     */
                    std::string m_clsLogSetId;
                    bool m_clsLogSetIdHasBeenSet;

                    /**
                     * 是否支持xml配置管理
                     */
                    int64_t m_enableXMLConfig;
                    bool m_enableXMLConfigHasBeenSet;

                    /**
                     * 区域
                     */
                    std::string m_regionDesc;
                    bool m_regionDescHasBeenSet;

                    /**
                     * 弹性网卡地址
                     */
                    std::string m_eip;
                    bool m_eipHasBeenSet;

                    /**
                     * 冷热分层系数
                     */
                    int64_t m_cosMoveFactor;
                    bool m_cosMoveFactorHasBeenSet;

                    /**
                     * external/local/yunti
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * cos桶
                     */
                    std::string m_cosBucketName;
                    bool m_cosBucketNameHasBeenSet;

                    /**
                     * cbs
                     */
                    bool m_canAttachCbs;
                    bool m_canAttachCbsHasBeenSet;

                    /**
                     * 小版本
                     */
                    std::string m_buildVersion;
                    bool m_buildVersionHasBeenSet;

                    /**
                     * 组件信息
注：这里返回类型实际为map[string]struct类型，并非显示的string类型，可以参考“示例值”进行数据的解析。
                     */
                    std::string m_components;
                    bool m_componentsHasBeenSet;

                    /**
                     * 判断审计日志表是否有catalog字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_ifExistCatalog;
                    bool m_ifExistCatalogHasBeenSet;

                    /**
                     * 页面特性，用于前端屏蔽一些页面入口
                     */
                    std::vector<std::string> m_characteristic;
                    bool m_characteristicHasBeenSet;

                    /**
                     * 超时时间 单位s
                     */
                    std::string m_restartTimeout;
                    bool m_restartTimeoutHasBeenSet;

                    /**
                     * 内核优雅重启超时时间，如果为-1说明未设置
                     */
                    std::string m_graceShutdownWaitSeconds;
                    bool m_graceShutdownWaitSecondsHasBeenSet;

                    /**
                     * 表名大小写是否敏感，0：敏感；1：不敏感，以小写进行比较；2：不敏感，表名改为以小写存储
                     */
                    int64_t m_caseSensitive;
                    bool m_caseSensitiveHasBeenSet;

                    /**
                     * 用户是否可以绑定安全组
                     */
                    bool m_isWhiteSGs;
                    bool m_isWhiteSGsHasBeenSet;

                    /**
                     * 已绑定的安全组信息
                     */
                    std::vector<std::string> m_bindSGs;
                    bool m_bindSGsHasBeenSet;

                    /**
                     * 是否为多可用区
                     */
                    bool m_enableMultiZones;
                    bool m_enableMultiZonesHasBeenSet;

                    /**
                     * 用户可用区和子网信息
                     */
                    std::string m_userNetworkInfos;
                    bool m_userNetworkInfosHasBeenSet;

                    /**
                     * 是否启用冷热分层。0：未开启 1：已开启
                     */
                    int64_t m_enableCoolDown;
                    bool m_enableCoolDownHasBeenSet;

                    /**
                     * 冷热分层使用COS桶
                     */
                    std::string m_coolDownBucket;
                    bool m_coolDownBucketHasBeenSet;

                    /**
                     * 实例扩展信息
                     */
                    InstanceDetail m_details;
                    bool m_detailsHasBeenSet;

                    /**
                     * 是否启用DLC 0:关闭 1:开启
                     */
                    int64_t m_enableDlc;
                    bool m_enableDlcHasBeenSet;

                    /**
                     * 账户类型 0:普通用户 1:CAM用户
                     */
                    int64_t m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * 监控模式 0: 老监控 1：新监控
                     */
                    int64_t m_monitorMode;
                    bool m_monitorModeHasBeenSet;

                    /**
                     * cn节点信息
                     */
                    NodesSummary m_cNSummary;
                    bool m_cNSummaryHasBeenSet;

                    /**
                     * 计算组个数
                     */
                    int64_t m_computeGroupCount;
                    bool m_computeGroupCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_INSTANCEINFO_H_
