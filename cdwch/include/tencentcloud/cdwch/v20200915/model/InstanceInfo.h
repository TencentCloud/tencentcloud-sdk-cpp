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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_INSTANCEINFO_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_INSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwch/v20200915/model/NodesSummary.h>
#include <tencentcloud/cdwch/v20200915/model/Tag.h>
#include <tencentcloud/cdwch/v20200915/model/InstanceStateInfo.h>
#include <tencentcloud/cdwch/v20200915/model/ServiceInfo.h>
#include <tencentcloud/cdwch/v20200915/model/InstanceDetail.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
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
                     * @return CommonSummary zookeeper节点描述信息
                     * 
                     */
                    NodesSummary GetCommonSummary() const;

                    /**
                     * 设置zookeeper节点描述信息
                     * @param _commonSummary zookeeper节点描述信息
                     * 
                     */
                    void SetCommonSummary(const NodesSummary& _commonSummary);

                    /**
                     * 判断参数 CommonSummary 是否已赋值
                     * @return CommonSummary 是否已赋值
                     * 
                     */
                    bool CommonSummaryHasBeenSet() const;

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
                     * 获取是否弹性ck
                     * @return IsElastic 是否弹性ck
                     * 
                     */
                    bool GetIsElastic() const;

                    /**
                     * 设置是否弹性ck
                     * @param _isElastic 是否弹性ck
                     * 
                     */
                    void SetIsElastic(const bool& _isElastic);

                    /**
                     * 判断参数 IsElastic 是否已赋值
                     * @return IsElastic 是否已赋值
                     * 
                     */
                    bool IsElasticHasBeenSet() const;

                    /**
                     * 获取集群详细状态
                     * @return InstanceStateInfo 集群详细状态
                     * 
                     */
                    InstanceStateInfo GetInstanceStateInfo() const;

                    /**
                     * 设置集群详细状态
                     * @param _instanceStateInfo 集群详细状态
                     * 
                     */
                    void SetInstanceStateInfo(const InstanceStateInfo& _instanceStateInfo);

                    /**
                     * 判断参数 InstanceStateInfo 是否已赋值
                     * @return InstanceStateInfo 是否已赋值
                     * 
                     */
                    bool InstanceStateInfoHasBeenSet() const;

                    /**
                     * 获取ZK高可用
                     * @return HAZk ZK高可用
                     * 
                     */
                    bool GetHAZk() const;

                    /**
                     * 设置ZK高可用
                     * @param _hAZk ZK高可用
                     * 
                     */
                    void SetHAZk(const bool& _hAZk);

                    /**
                     * 判断参数 HAZk 是否已赋值
                     * @return HAZk 是否已赋值
                     * 
                     */
                    bool HAZkHasBeenSet() const;

                    /**
                     * 获取挂载盘,默认0:没有类型；1:裸盘;2:lvm
                     * @return MountDiskType 挂载盘,默认0:没有类型；1:裸盘;2:lvm
                     * 
                     */
                    int64_t GetMountDiskType() const;

                    /**
                     * 设置挂载盘,默认0:没有类型；1:裸盘;2:lvm
                     * @param _mountDiskType 挂载盘,默认0:没有类型；1:裸盘;2:lvm
                     * 
                     */
                    void SetMountDiskType(const int64_t& _mountDiskType);

                    /**
                     * 判断参数 MountDiskType 是否已赋值
                     * @return MountDiskType 是否已赋值
                     * 
                     */
                    bool MountDiskTypeHasBeenSet() const;

                    /**
                     * 获取chproxy连接ip
                     * @return CHProxyVip chproxy连接ip
                     * 
                     */
                    std::string GetCHProxyVip() const;

                    /**
                     * 设置chproxy连接ip
                     * @param _cHProxyVip chproxy连接ip
                     * 
                     */
                    void SetCHProxyVip(const std::string& _cHProxyVip);

                    /**
                     * 判断参数 CHProxyVip 是否已赋值
                     * @return CHProxyVip 是否已赋值
                     * 
                     */
                    bool CHProxyVipHasBeenSet() const;

                    /**
                     * 获取cos buket的名字
                     * @return CosBucketName cos buket的名字
                     * 
                     */
                    std::string GetCosBucketName() const;

                    /**
                     * 设置cos buket的名字
                     * @param _cosBucketName cos buket的名字
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
                     * 获取是否可以挂载云盘
                     * @return CanAttachCbs 是否可以挂载云盘
                     * 
                     */
                    bool GetCanAttachCbs() const;

                    /**
                     * 设置是否可以挂载云盘
                     * @param _canAttachCbs 是否可以挂载云盘
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
                     * 获取是否可以挂载云盘阵列
                     * @return CanAttachCbsLvm 是否可以挂载云盘阵列
                     * 
                     */
                    bool GetCanAttachCbsLvm() const;

                    /**
                     * 设置是否可以挂载云盘阵列
                     * @param _canAttachCbsLvm 是否可以挂载云盘阵列
                     * 
                     */
                    void SetCanAttachCbsLvm(const bool& _canAttachCbsLvm);

                    /**
                     * 判断参数 CanAttachCbsLvm 是否已赋值
                     * @return CanAttachCbsLvm 是否已赋值
                     * 
                     */
                    bool CanAttachCbsLvmHasBeenSet() const;

                    /**
                     * 获取是否可以挂载cos
                     * @return CanAttachCos 是否可以挂载cos
                     * 
                     */
                    bool GetCanAttachCos() const;

                    /**
                     * 设置是否可以挂载cos
                     * @param _canAttachCos 是否可以挂载cos
                     * 
                     */
                    void SetCanAttachCos(const bool& _canAttachCos);

                    /**
                     * 判断参数 CanAttachCos 是否已赋值
                     * @return CanAttachCos 是否已赋值
                     * 
                     */
                    bool CanAttachCosHasBeenSet() const;

                    /**
                     * 获取服务信息
                     * @return Components 服务信息
                     * 
                     */
                    std::vector<ServiceInfo> GetComponents() const;

                    /**
                     * 设置服务信息
                     * @param _components 服务信息
                     * 
                     */
                    void SetComponents(const std::vector<ServiceInfo>& _components);

                    /**
                     * 判断参数 Components 是否已赋值
                     * @return Components 是否已赋值
                     * 
                     */
                    bool ComponentsHasBeenSet() const;

                    /**
                     * 获取可升级的内核版本
                     * @return UpgradeVersions 可升级的内核版本
                     * 
                     */
                    std::string GetUpgradeVersions() const;

                    /**
                     * 设置可升级的内核版本
                     * @param _upgradeVersions 可升级的内核版本
                     * 
                     */
                    void SetUpgradeVersions(const std::string& _upgradeVersions);

                    /**
                     * 判断参数 UpgradeVersions 是否已赋值
                     * @return UpgradeVersions 是否已赋值
                     * 
                     */
                    bool UpgradeVersionsHasBeenSet() const;

                    /**
                     * 获取ex-index
                     * @return EsIndexId ex-index
                     * 
                     */
                    std::string GetEsIndexId() const;

                    /**
                     * 设置ex-index
                     * @param _esIndexId ex-index
                     * 
                     */
                    void SetEsIndexId(const std::string& _esIndexId);

                    /**
                     * 判断参数 EsIndexId 是否已赋值
                     * @return EsIndexId 是否已赋值
                     * 
                     */
                    bool EsIndexIdHasBeenSet() const;

                    /**
                     * 获取username
                     * @return EsIndexUsername username
                     * 
                     */
                    std::string GetEsIndexUsername() const;

                    /**
                     * 设置username
                     * @param _esIndexUsername username
                     * 
                     */
                    void SetEsIndexUsername(const std::string& _esIndexUsername);

                    /**
                     * 判断参数 EsIndexUsername 是否已赋值
                     * @return EsIndexUsername 是否已赋值
                     * 
                     */
                    bool EsIndexUsernameHasBeenSet() const;

                    /**
                     * 获取password
                     * @return EsIndexPassword password
                     * 
                     */
                    std::string GetEsIndexPassword() const;

                    /**
                     * 设置password
                     * @param _esIndexPassword password
                     * 
                     */
                    void SetEsIndexPassword(const std::string& _esIndexPassword);

                    /**
                     * 判断参数 EsIndexPassword 是否已赋值
                     * @return EsIndexPassword 是否已赋值
                     * 
                     */
                    bool EsIndexPasswordHasBeenSet() const;

                    /**
                     * 获取true
                     * @return HasEsIndex true
                     * 
                     */
                    bool GetHasEsIndex() const;

                    /**
                     * 设置true
                     * @param _hasEsIndex true
                     * 
                     */
                    void SetHasEsIndex(const bool& _hasEsIndex);

                    /**
                     * 判断参数 HasEsIndex 是否已赋值
                     * @return HasEsIndex 是否已赋值
                     * 
                     */
                    bool HasEsIndexHasBeenSet() const;

                    /**
                     * 获取true
                     * @return IsSecondaryZone true
                     * 
                     */
                    bool GetIsSecondaryZone() const;

                    /**
                     * 设置true
                     * @param _isSecondaryZone true
                     * 
                     */
                    void SetIsSecondaryZone(const bool& _isSecondaryZone);

                    /**
                     * 判断参数 IsSecondaryZone 是否已赋值
                     * @return IsSecondaryZone 是否已赋值
                     * 
                     */
                    bool IsSecondaryZoneHasBeenSet() const;

                    /**
                     * 获取desc
                     * @return SecondaryZoneInfo desc
                     * 
                     */
                    std::string GetSecondaryZoneInfo() const;

                    /**
                     * 设置desc
                     * @param _secondaryZoneInfo desc
                     * 
                     */
                    void SetSecondaryZoneInfo(const std::string& _secondaryZoneInfo);

                    /**
                     * 判断参数 SecondaryZoneInfo 是否已赋值
                     * @return SecondaryZoneInfo 是否已赋值
                     * 
                     */
                    bool SecondaryZoneInfoHasBeenSet() const;

                    /**
                     * 获取是否clickhouse-keeper
                     * @return ClickHouseKeeper 是否clickhouse-keeper
                     * 
                     */
                    bool GetClickHouseKeeper() const;

                    /**
                     * 设置是否clickhouse-keeper
                     * @param _clickHouseKeeper 是否clickhouse-keeper
                     * 
                     */
                    void SetClickHouseKeeper(const bool& _clickHouseKeeper);

                    /**
                     * 判断参数 ClickHouseKeeper 是否已赋值
                     * @return ClickHouseKeeper 是否已赋值
                     * 
                     */
                    bool ClickHouseKeeperHasBeenSet() const;

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
                     * 获取安全组白名单
                     * @return IsWhiteSGs 安全组白名单
                     * 
                     */
                    bool GetIsWhiteSGs() const;

                    /**
                     * 设置安全组白名单
                     * @param _isWhiteSGs 安全组白名单
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
                     * 获取绑定的安全组
                     * @return BindSGs 绑定的安全组
                     * 
                     */
                    std::vector<std::string> GetBindSGs() const;

                    /**
                     * 设置绑定的安全组
                     * @param _bindSGs 绑定的安全组
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
                     * 获取是否开启公网clb
                     * @return HasPublicCloudClb 是否开启公网clb
                     * 
                     */
                    bool GetHasPublicCloudClb() const;

                    /**
                     * 设置是否开启公网clb
                     * @param _hasPublicCloudClb 是否开启公网clb
                     * 
                     */
                    void SetHasPublicCloudClb(const bool& _hasPublicCloudClb);

                    /**
                     * 判断参数 HasPublicCloudClb 是否已赋值
                     * @return HasPublicCloudClb 是否已赋值
                     * 
                     */
                    bool HasPublicCloudClbHasBeenSet() const;

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
                    NodesSummary m_commonSummary;
                    bool m_commonSummaryHasBeenSet;

                    /**
                     * 高可用，“true" "false"
                     */
                    std::string m_hA;
                    bool m_hAHasBeenSet;

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
                     * 是否弹性ck
                     */
                    bool m_isElastic;
                    bool m_isElasticHasBeenSet;

                    /**
                     * 集群详细状态
                     */
                    InstanceStateInfo m_instanceStateInfo;
                    bool m_instanceStateInfoHasBeenSet;

                    /**
                     * ZK高可用
                     */
                    bool m_hAZk;
                    bool m_hAZkHasBeenSet;

                    /**
                     * 挂载盘,默认0:没有类型；1:裸盘;2:lvm
                     */
                    int64_t m_mountDiskType;
                    bool m_mountDiskTypeHasBeenSet;

                    /**
                     * chproxy连接ip
                     */
                    std::string m_cHProxyVip;
                    bool m_cHProxyVipHasBeenSet;

                    /**
                     * cos buket的名字
                     */
                    std::string m_cosBucketName;
                    bool m_cosBucketNameHasBeenSet;

                    /**
                     * 是否可以挂载云盘
                     */
                    bool m_canAttachCbs;
                    bool m_canAttachCbsHasBeenSet;

                    /**
                     * 是否可以挂载云盘阵列
                     */
                    bool m_canAttachCbsLvm;
                    bool m_canAttachCbsLvmHasBeenSet;

                    /**
                     * 是否可以挂载cos
                     */
                    bool m_canAttachCos;
                    bool m_canAttachCosHasBeenSet;

                    /**
                     * 服务信息
                     */
                    std::vector<ServiceInfo> m_components;
                    bool m_componentsHasBeenSet;

                    /**
                     * 可升级的内核版本
                     */
                    std::string m_upgradeVersions;
                    bool m_upgradeVersionsHasBeenSet;

                    /**
                     * ex-index
                     */
                    std::string m_esIndexId;
                    bool m_esIndexIdHasBeenSet;

                    /**
                     * username
                     */
                    std::string m_esIndexUsername;
                    bool m_esIndexUsernameHasBeenSet;

                    /**
                     * password
                     */
                    std::string m_esIndexPassword;
                    bool m_esIndexPasswordHasBeenSet;

                    /**
                     * true
                     */
                    bool m_hasEsIndex;
                    bool m_hasEsIndexHasBeenSet;

                    /**
                     * true
                     */
                    bool m_isSecondaryZone;
                    bool m_isSecondaryZoneHasBeenSet;

                    /**
                     * desc
                     */
                    std::string m_secondaryZoneInfo;
                    bool m_secondaryZoneInfoHasBeenSet;

                    /**
                     * 是否clickhouse-keeper
                     */
                    bool m_clickHouseKeeper;
                    bool m_clickHouseKeeperHasBeenSet;

                    /**
                     * 实例扩展信息
                     */
                    InstanceDetail m_details;
                    bool m_detailsHasBeenSet;

                    /**
                     * 安全组白名单
                     */
                    bool m_isWhiteSGs;
                    bool m_isWhiteSGsHasBeenSet;

                    /**
                     * 绑定的安全组
                     */
                    std::vector<std::string> m_bindSGs;
                    bool m_bindSGsHasBeenSet;

                    /**
                     * 是否开启公网clb
                     */
                    bool m_hasPublicCloudClb;
                    bool m_hasPublicCloudClbHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_INSTANCEINFO_H_
