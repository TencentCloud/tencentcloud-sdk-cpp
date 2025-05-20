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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_LOGSTASHINSTANCEINFO_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_LOGSTASHINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/LogstashNodeInfo.h>
#include <tencentcloud/es/v20180416/model/LogstashExtendedFile.h>
#include <tencentcloud/es/v20180416/model/OperationDuration.h>
#include <tencentcloud/es/v20180416/model/TagInfo.h>
#include <tencentcloud/es/v20180416/model/ZoneDetail.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Logstash实例详细信息
                */
                class LogstashInstanceInfo : public AbstractModel
                {
                public:
                    LogstashInstanceInfo();
                    ~LogstashInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
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
                     * 获取可用区
                     * @return Zone 可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param _zone 可用区
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
                     * 获取用户ID
                     * @return AppId 用户ID
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置用户ID
                     * @param _appId 用户ID
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
                     * 获取用户UIN
                     * @return Uin 用户UIN
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置用户UIN
                     * @param _uin 用户UIN
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
                     * 获取实例所属VPC的ID
                     * @return VpcId 实例所属VPC的ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置实例所属VPC的ID
                     * @param _vpcId 实例所属VPC的ID
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
                     * 获取实例所属子网的ID
                     * @return SubnetId 实例所属子网的ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置实例所属子网的ID
                     * @param _subnetId 实例所属子网的ID
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
                     * 获取实例状态，0:处理中,1:正常,-1停止,-2:销毁中,-3:已销毁
                     * @return Status 实例状态，0:处理中,1:正常,-1停止,-2:销毁中,-3:已销毁
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置实例状态，0:处理中,1:正常,-1停止,-2:销毁中,-3:已销毁
                     * @param _status 实例状态，0:处理中,1:正常,-1停止,-2:销毁中,-3:已销毁
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
                     * 获取实例计费模式。取值范围：  PREPAID：表示预付费，即包年包月  POSTPAID_BY_HOUR：表示后付费，即按量计费  CDHPAID：CDH付费，即只对CDH计费，不对CDH上的实例计费。
                     * @return ChargeType 实例计费模式。取值范围：  PREPAID：表示预付费，即包年包月  POSTPAID_BY_HOUR：表示后付费，即按量计费  CDHPAID：CDH付费，即只对CDH计费，不对CDH上的实例计费。
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置实例计费模式。取值范围：  PREPAID：表示预付费，即包年包月  POSTPAID_BY_HOUR：表示后付费，即按量计费  CDHPAID：CDH付费，即只对CDH计费，不对CDH上的实例计费。
                     * @param _chargeType 实例计费模式。取值范围：  PREPAID：表示预付费，即包年包月  POSTPAID_BY_HOUR：表示后付费，即按量计费  CDHPAID：CDH付费，即只对CDH计费，不对CDH上的实例计费。
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取包年包月购买时长,单位:月
                     * @return ChargePeriod 包年包月购买时长,单位:月
                     * 
                     */
                    uint64_t GetChargePeriod() const;

                    /**
                     * 设置包年包月购买时长,单位:月
                     * @param _chargePeriod 包年包月购买时长,单位:月
                     * 
                     */
                    void SetChargePeriod(const uint64_t& _chargePeriod);

                    /**
                     * 判断参数 ChargePeriod 是否已赋值
                     * @return ChargePeriod 是否已赋值
                     * 
                     */
                    bool ChargePeriodHasBeenSet() const;

                    /**
                     * 获取自动续费标识。取值范围：  NOTIFY_AND_AUTO_RENEW：通知过期且自动续费  NOTIFY_AND_MANUAL_RENEW：通知过期不自动续费  DISABLE_NOTIFY_AND_MANUAL_RENEW：不通知过期不自动续费  默认取值：NOTIFY_AND_AUTO_RENEW。若该参数指定为NOTIFY_AND_AUTO_RENEW，在账户余额充足的情况下，实例到期后将按月自动续费。
                     * @return RenewFlag 自动续费标识。取值范围：  NOTIFY_AND_AUTO_RENEW：通知过期且自动续费  NOTIFY_AND_MANUAL_RENEW：通知过期不自动续费  DISABLE_NOTIFY_AND_MANUAL_RENEW：不通知过期不自动续费  默认取值：NOTIFY_AND_AUTO_RENEW。若该参数指定为NOTIFY_AND_AUTO_RENEW，在账户余额充足的情况下，实例到期后将按月自动续费。
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置自动续费标识。取值范围：  NOTIFY_AND_AUTO_RENEW：通知过期且自动续费  NOTIFY_AND_MANUAL_RENEW：通知过期不自动续费  DISABLE_NOTIFY_AND_MANUAL_RENEW：不通知过期不自动续费  默认取值：NOTIFY_AND_AUTO_RENEW。若该参数指定为NOTIFY_AND_AUTO_RENEW，在账户余额充足的情况下，实例到期后将按月自动续费。
                     * @param _renewFlag 自动续费标识。取值范围：  NOTIFY_AND_AUTO_RENEW：通知过期且自动续费  NOTIFY_AND_MANUAL_RENEW：通知过期不自动续费  DISABLE_NOTIFY_AND_MANUAL_RENEW：不通知过期不自动续费  默认取值：NOTIFY_AND_AUTO_RENEW。若该参数指定为NOTIFY_AND_AUTO_RENEW，在账户余额充足的情况下，实例到期后将按月自动续费。
                     * 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取节点规格<li>LOGSTASH.S1.SMALL2：1核2G</li><li>LOGSTASH.S1.MEDIUM4：2核4G</li><li>LOGSTASH.S1.MEDIUM8：2核8G</li><li>LOGSTASH.S1.LARGE16：4核16G</li><li>LOGSTASH.S1.2XLARGE32：8核32G</li><li>LOGSTASH.S1.4XLARGE32：16核32G</li><li>LOGSTASH.S1.4XLARGE64：16核64G</li>
                     * @return NodeType 节点规格<li>LOGSTASH.S1.SMALL2：1核2G</li><li>LOGSTASH.S1.MEDIUM4：2核4G</li><li>LOGSTASH.S1.MEDIUM8：2核8G</li><li>LOGSTASH.S1.LARGE16：4核16G</li><li>LOGSTASH.S1.2XLARGE32：8核32G</li><li>LOGSTASH.S1.4XLARGE32：16核32G</li><li>LOGSTASH.S1.4XLARGE64：16核64G</li>
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置节点规格<li>LOGSTASH.S1.SMALL2：1核2G</li><li>LOGSTASH.S1.MEDIUM4：2核4G</li><li>LOGSTASH.S1.MEDIUM8：2核8G</li><li>LOGSTASH.S1.LARGE16：4核16G</li><li>LOGSTASH.S1.2XLARGE32：8核32G</li><li>LOGSTASH.S1.4XLARGE32：16核32G</li><li>LOGSTASH.S1.4XLARGE64：16核64G</li>
                     * @param _nodeType 节点规格<li>LOGSTASH.S1.SMALL2：1核2G</li><li>LOGSTASH.S1.MEDIUM4：2核4G</li><li>LOGSTASH.S1.MEDIUM8：2核8G</li><li>LOGSTASH.S1.LARGE16：4核16G</li><li>LOGSTASH.S1.2XLARGE32：8核32G</li><li>LOGSTASH.S1.4XLARGE32：16核32G</li><li>LOGSTASH.S1.4XLARGE64：16核64G</li>
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取节点个数
                     * @return NodeNum 节点个数
                     * 
                     */
                    uint64_t GetNodeNum() const;

                    /**
                     * 设置节点个数
                     * @param _nodeNum 节点个数
                     * 
                     */
                    void SetNodeNum(const uint64_t& _nodeNum);

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     * 
                     */
                    bool NodeNumHasBeenSet() const;

                    /**
                     * 获取节点磁盘类型
                     * @return DiskType 节点磁盘类型
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置节点磁盘类型
                     * @param _diskType 节点磁盘类型
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取节点磁盘大小，单位GB
                     * @return DiskSize 节点磁盘大小，单位GB
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置节点磁盘大小，单位GB
                     * @param _diskSize 节点磁盘大小，单位GB
                     * 
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取Logstash版本号
                     * @return LogstashVersion Logstash版本号
                     * 
                     */
                    std::string GetLogstashVersion() const;

                    /**
                     * 设置Logstash版本号
                     * @param _logstashVersion Logstash版本号
                     * 
                     */
                    void SetLogstashVersion(const std::string& _logstashVersion);

                    /**
                     * 判断参数 LogstashVersion 是否已赋值
                     * @return LogstashVersion 是否已赋值
                     * 
                     */
                    bool LogstashVersionHasBeenSet() const;

                    /**
                     * 获取License类型<li>oss：开源版</li><li>xpack：基础版</li>默认值xpack
                     * @return LicenseType License类型<li>oss：开源版</li><li>xpack：基础版</li>默认值xpack
                     * 
                     */
                    std::string GetLicenseType() const;

                    /**
                     * 设置License类型<li>oss：开源版</li><li>xpack：基础版</li>默认值xpack
                     * @param _licenseType License类型<li>oss：开源版</li><li>xpack：基础版</li>默认值xpack
                     * 
                     */
                    void SetLicenseType(const std::string& _licenseType);

                    /**
                     * 判断参数 LicenseType 是否已赋值
                     * @return LicenseType 是否已赋值
                     * 
                     */
                    bool LicenseTypeHasBeenSet() const;

                    /**
                     * 获取实例创建时间
                     * @return CreateTime 实例创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置实例创建时间
                     * @param _createTime 实例创建时间
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
                     * 获取实例最后修改操作时间
                     * @return UpdateTime 实例最后修改操作时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置实例最后修改操作时间
                     * @param _updateTime 实例最后修改操作时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取实例到期时间
                     * @return Deadline 实例到期时间
                     * 
                     */
                    std::string GetDeadline() const;

                    /**
                     * 设置实例到期时间
                     * @param _deadline 实例到期时间
                     * 
                     */
                    void SetDeadline(const std::string& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     * 
                     */
                    bool DeadlineHasBeenSet() const;

                    /**
                     * 获取实例节点类型
                     * @return Nodes 实例节点类型
                     * 
                     */
                    std::vector<LogstashNodeInfo> GetNodes() const;

                    /**
                     * 设置实例节点类型
                     * @param _nodes 实例节点类型
                     * 
                     */
                    void SetNodes(const std::vector<LogstashNodeInfo>& _nodes);

                    /**
                     * 判断参数 Nodes 是否已赋值
                     * @return Nodes 是否已赋值
                     * 
                     */
                    bool NodesHasBeenSet() const;

                    /**
                     * 获取实例绑定的ES集群ID
                     * @return BindedESInstanceId 实例绑定的ES集群ID
                     * 
                     */
                    std::string GetBindedESInstanceId() const;

                    /**
                     * 设置实例绑定的ES集群ID
                     * @param _bindedESInstanceId 实例绑定的ES集群ID
                     * 
                     */
                    void SetBindedESInstanceId(const std::string& _bindedESInstanceId);

                    /**
                     * 判断参数 BindedESInstanceId 是否已赋值
                     * @return BindedESInstanceId 是否已赋值
                     * 
                     */
                    bool BindedESInstanceIdHasBeenSet() const;

                    /**
                     * 获取实例的YML配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return YMLConfig 实例的YML配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetYMLConfig() const;

                    /**
                     * 设置实例的YML配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _yMLConfig 实例的YML配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetYMLConfig(const std::string& _yMLConfig);

                    /**
                     * 判断参数 YMLConfig 是否已赋值
                     * @return YMLConfig 是否已赋值
                     * 
                     */
                    bool YMLConfigHasBeenSet() const;

                    /**
                     * 获取扩展文件列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtendedFiles 扩展文件列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LogstashExtendedFile> GetExtendedFiles() const;

                    /**
                     * 设置扩展文件列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extendedFiles 扩展文件列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtendedFiles(const std::vector<LogstashExtendedFile>& _extendedFiles);

                    /**
                     * 判断参数 ExtendedFiles 是否已赋值
                     * @return ExtendedFiles 是否已赋值
                     * 
                     */
                    bool ExtendedFilesHasBeenSet() const;

                    /**
                     * 获取可维护时间段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperationDuration 可维护时间段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OperationDuration GetOperationDuration() const;

                    /**
                     * 设置可维护时间段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operationDuration 可维护时间段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperationDuration(const OperationDuration& _operationDuration);

                    /**
                     * 判断参数 OperationDuration 是否已赋值
                     * @return OperationDuration 是否已赋值
                     * 
                     */
                    bool OperationDurationHasBeenSet() const;

                    /**
                     * 获取CPU数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CpuNum CPU数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCpuNum() const;

                    /**
                     * 设置CPU数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpuNum CPU数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCpuNum(const uint64_t& _cpuNum);

                    /**
                     * 判断参数 CpuNum 是否已赋值
                     * @return CpuNum 是否已赋值
                     * 
                     */
                    bool CpuNumHasBeenSet() const;

                    /**
                     * 获取实例标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagList 实例标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TagInfo> GetTagList() const;

                    /**
                     * 设置实例标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagList 实例标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTagList(const std::vector<TagInfo>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取内存大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemSize 内存大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMemSize() const;

                    /**
                     * 设置内存大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memSize 内存大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMemSize(const uint64_t& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     * 
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取部署模式，0：单可用区、1：多可用区
                     * @return DeployMode 部署模式，0：单可用区、1：多可用区
                     * 
                     */
                    uint64_t GetDeployMode() const;

                    /**
                     * 设置部署模式，0：单可用区、1：多可用区
                     * @param _deployMode 部署模式，0：单可用区、1：多可用区
                     * 
                     */
                    void SetDeployMode(const uint64_t& _deployMode);

                    /**
                     * 判断参数 DeployMode 是否已赋值
                     * @return DeployMode 是否已赋值
                     * 
                     */
                    bool DeployModeHasBeenSet() const;

                    /**
                     * 获取多可用区部署时可用区的详细信息
                     * @return MultiZoneInfo 多可用区部署时可用区的详细信息
                     * 
                     */
                    std::vector<ZoneDetail> GetMultiZoneInfo() const;

                    /**
                     * 设置多可用区部署时可用区的详细信息
                     * @param _multiZoneInfo 多可用区部署时可用区的详细信息
                     * 
                     */
                    void SetMultiZoneInfo(const std::vector<ZoneDetail>& _multiZoneInfo);

                    /**
                     * 判断参数 MultiZoneInfo 是否已赋值
                     * @return MultiZoneInfo 是否已赋值
                     * 
                     */
                    bool MultiZoneInfoHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 用户ID
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 用户UIN
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 实例所属VPC的ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 实例所属子网的ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 实例状态，0:处理中,1:正常,-1停止,-2:销毁中,-3:已销毁
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例计费模式。取值范围：  PREPAID：表示预付费，即包年包月  POSTPAID_BY_HOUR：表示后付费，即按量计费  CDHPAID：CDH付费，即只对CDH计费，不对CDH上的实例计费。
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * 包年包月购买时长,单位:月
                     */
                    uint64_t m_chargePeriod;
                    bool m_chargePeriodHasBeenSet;

                    /**
                     * 自动续费标识。取值范围：  NOTIFY_AND_AUTO_RENEW：通知过期且自动续费  NOTIFY_AND_MANUAL_RENEW：通知过期不自动续费  DISABLE_NOTIFY_AND_MANUAL_RENEW：不通知过期不自动续费  默认取值：NOTIFY_AND_AUTO_RENEW。若该参数指定为NOTIFY_AND_AUTO_RENEW，在账户余额充足的情况下，实例到期后将按月自动续费。
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 节点规格<li>LOGSTASH.S1.SMALL2：1核2G</li><li>LOGSTASH.S1.MEDIUM4：2核4G</li><li>LOGSTASH.S1.MEDIUM8：2核8G</li><li>LOGSTASH.S1.LARGE16：4核16G</li><li>LOGSTASH.S1.2XLARGE32：8核32G</li><li>LOGSTASH.S1.4XLARGE32：16核32G</li><li>LOGSTASH.S1.4XLARGE64：16核64G</li>
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * 节点个数
                     */
                    uint64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * 节点磁盘类型
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 节点磁盘大小，单位GB
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * Logstash版本号
                     */
                    std::string m_logstashVersion;
                    bool m_logstashVersionHasBeenSet;

                    /**
                     * License类型<li>oss：开源版</li><li>xpack：基础版</li>默认值xpack
                     */
                    std::string m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * 实例创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 实例最后修改操作时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 实例到期时间
                     */
                    std::string m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * 实例节点类型
                     */
                    std::vector<LogstashNodeInfo> m_nodes;
                    bool m_nodesHasBeenSet;

                    /**
                     * 实例绑定的ES集群ID
                     */
                    std::string m_bindedESInstanceId;
                    bool m_bindedESInstanceIdHasBeenSet;

                    /**
                     * 实例的YML配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_yMLConfig;
                    bool m_yMLConfigHasBeenSet;

                    /**
                     * 扩展文件列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LogstashExtendedFile> m_extendedFiles;
                    bool m_extendedFilesHasBeenSet;

                    /**
                     * 可维护时间段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OperationDuration m_operationDuration;
                    bool m_operationDurationHasBeenSet;

                    /**
                     * CPU数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_cpuNum;
                    bool m_cpuNumHasBeenSet;

                    /**
                     * 实例标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TagInfo> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * 内存大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * 部署模式，0：单可用区、1：多可用区
                     */
                    uint64_t m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * 多可用区部署时可用区的详细信息
                     */
                    std::vector<ZoneDetail> m_multiZoneInfo;
                    bool m_multiZoneInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_LOGSTASHINSTANCEINFO_H_
