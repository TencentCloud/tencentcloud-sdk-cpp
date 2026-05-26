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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_CREATEINSTANCEREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_CREATEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/ZoneDetail.h>
#include <tencentcloud/es/v20180416/model/NodeInfo.h>
#include <tencentcloud/es/v20180416/model/TagInfo.h>
#include <tencentcloud/es/v20180416/model/WebNodeTypeInfo.h>
#include <tencentcloud/es/v20180416/model/OperationDuration.h>
#include <tencentcloud/es/v20180416/model/EnableScheduleOperationDuration.h>
#include <tencentcloud/es/v20180416/model/AutoScaleDiskInfo.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * CreateInstance请求参数结构体
                */
                class CreateInstanceRequest : public AbstractModel
                {
                public:
                    CreateInstanceRequest();
                    ~CreateInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>可用区</p>
                     * @return Zone <p>可用区</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区</p>
                     * @param _zone <p>可用区</p>
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
                     * 获取<p>实例版本（支持&quot;5.6.4&quot;、&quot;6.4.3&quot;、&quot;6.8.2&quot;、&quot;7.5.1&quot;、&quot;7.10.1&quot;）</p>
                     * @return EsVersion <p>实例版本（支持&quot;5.6.4&quot;、&quot;6.4.3&quot;、&quot;6.8.2&quot;、&quot;7.5.1&quot;、&quot;7.10.1&quot;）</p>
                     * 
                     */
                    std::string GetEsVersion() const;

                    /**
                     * 设置<p>实例版本（支持&quot;5.6.4&quot;、&quot;6.4.3&quot;、&quot;6.8.2&quot;、&quot;7.5.1&quot;、&quot;7.10.1&quot;）</p>
                     * @param _esVersion <p>实例版本（支持&quot;5.6.4&quot;、&quot;6.4.3&quot;、&quot;6.8.2&quot;、&quot;7.5.1&quot;、&quot;7.10.1&quot;）</p>
                     * 
                     */
                    void SetEsVersion(const std::string& _esVersion);

                    /**
                     * 判断参数 EsVersion 是否已赋值
                     * @return EsVersion 是否已赋值
                     * 
                     */
                    bool EsVersionHasBeenSet() const;

                    /**
                     * 获取<p>私有网络ID</p>
                     * @return VpcId <p>私有网络ID</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>私有网络ID</p>
                     * @param _vpcId <p>私有网络ID</p>
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
                     * @return SubnetId <p>子网ID</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>子网ID</p>
                     * @param _subnetId <p>子网ID</p>
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
                     * 获取<p>访问密码（密码需8到16位，至少包括两项（[a-z,A-Z],[0-9]和[-!@#$%&amp;^*+=_:;,.?]的特殊符号）</p>
                     * @return Password <p>访问密码（密码需8到16位，至少包括两项（[a-z,A-Z],[0-9]和[-!@#$%&amp;^*+=_:;,.?]的特殊符号）</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>访问密码（密码需8到16位，至少包括两项（[a-z,A-Z],[0-9]和[-!@#$%&amp;^*+=_:;,.?]的特殊符号）</p>
                     * @param _password <p>访问密码（密码需8到16位，至少包括两项（[a-z,A-Z],[0-9]和[-!@#$%&amp;^*+=_:;,.?]的特殊符号）</p>
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取<p>实例名称（1-50 个英文、汉字、数字、连接线-或下划线_）</p>
                     * @return InstanceName <p>实例名称（1-50 个英文、汉字、数字、连接线-或下划线_）</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称（1-50 个英文、汉字、数字、连接线-或下划线_）</p>
                     * @param _instanceName <p>实例名称（1-50 个英文、汉字、数字、连接线-或下划线_）</p>
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
                     * 获取<p>已废弃请使用NodeInfoList<br>节点数量（2-50个）</p>
                     * @return NodeNum <p>已废弃请使用NodeInfoList<br>节点数量（2-50个）</p>
                     * 
                     */
                    uint64_t GetNodeNum() const;

                    /**
                     * 设置<p>已废弃请使用NodeInfoList<br>节点数量（2-50个）</p>
                     * @param _nodeNum <p>已废弃请使用NodeInfoList<br>节点数量（2-50个）</p>
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
                     * 获取<p>计费类型<li>PREPAID：预付费，即包年包月</li><li>POSTPAID_BY_HOUR：按小时后付费</li>默认值POSTPAID_BY_HOUR</p>
                     * @return ChargeType <p>计费类型<li>PREPAID：预付费，即包年包月</li><li>POSTPAID_BY_HOUR：按小时后付费</li>默认值POSTPAID_BY_HOUR</p>
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置<p>计费类型<li>PREPAID：预付费，即包年包月</li><li>POSTPAID_BY_HOUR：按小时后付费</li>默认值POSTPAID_BY_HOUR</p>
                     * @param _chargeType <p>计费类型<li>PREPAID：预付费，即包年包月</li><li>POSTPAID_BY_HOUR：按小时后付费</li>默认值POSTPAID_BY_HOUR</p>
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
                     * 获取<p>包年包月购买时长（单位由参数TimeUnit决定）</p>
                     * @return ChargePeriod <p>包年包月购买时长（单位由参数TimeUnit决定）</p>
                     * 
                     */
                    uint64_t GetChargePeriod() const;

                    /**
                     * 设置<p>包年包月购买时长（单位由参数TimeUnit决定）</p>
                     * @param _chargePeriod <p>包年包月购买时长（单位由参数TimeUnit决定）</p>
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
                     * 获取<p>自动续费标识<li>RENEW_FLAG_AUTO：自动续费</li><li>RENEW_FLAG_MANUAL：不自动续费，用户手动续费</li>ChargeType为PREPAID时需要设置，如不传递该参数，普通用户默认不自动续费，SVIP用户自动续费</p>
                     * @return RenewFlag <p>自动续费标识<li>RENEW_FLAG_AUTO：自动续费</li><li>RENEW_FLAG_MANUAL：不自动续费，用户手动续费</li>ChargeType为PREPAID时需要设置，如不传递该参数，普通用户默认不自动续费，SVIP用户自动续费</p>
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置<p>自动续费标识<li>RENEW_FLAG_AUTO：自动续费</li><li>RENEW_FLAG_MANUAL：不自动续费，用户手动续费</li>ChargeType为PREPAID时需要设置，如不传递该参数，普通用户默认不自动续费，SVIP用户自动续费</p>
                     * @param _renewFlag <p>自动续费标识<li>RENEW_FLAG_AUTO：自动续费</li><li>RENEW_FLAG_MANUAL：不自动续费，用户手动续费</li>ChargeType为PREPAID时需要设置，如不传递该参数，普通用户默认不自动续费，SVIP用户自动续费</p>
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
                     * 获取<p>已废弃请使用NodeInfoList<br>节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li></p>
                     * @return NodeType <p>已废弃请使用NodeInfoList<br>节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li></p>
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置<p>已废弃请使用NodeInfoList<br>节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li></p>
                     * @param _nodeType <p>已废弃请使用NodeInfoList<br>节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li></p>
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
                     * 获取<p>已废弃请使用NodeInfoList<br>节点磁盘类型<li>CLOUD_SSD：SSD云硬盘</li><li>CLOUD_PREMIUM：高性能云硬盘</li><li> CLOUD_HSSD：增强型SSD云硬盘</li><li> CLOUD_BSSD：通用型SSD云硬盘</li>默认值CLOUD_SSD</p>
                     * @return DiskType <p>已废弃请使用NodeInfoList<br>节点磁盘类型<li>CLOUD_SSD：SSD云硬盘</li><li>CLOUD_PREMIUM：高性能云硬盘</li><li> CLOUD_HSSD：增强型SSD云硬盘</li><li> CLOUD_BSSD：通用型SSD云硬盘</li>默认值CLOUD_SSD</p>
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置<p>已废弃请使用NodeInfoList<br>节点磁盘类型<li>CLOUD_SSD：SSD云硬盘</li><li>CLOUD_PREMIUM：高性能云硬盘</li><li> CLOUD_HSSD：增强型SSD云硬盘</li><li> CLOUD_BSSD：通用型SSD云硬盘</li>默认值CLOUD_SSD</p>
                     * @param _diskType <p>已废弃请使用NodeInfoList<br>节点磁盘类型<li>CLOUD_SSD：SSD云硬盘</li><li>CLOUD_PREMIUM：高性能云硬盘</li><li> CLOUD_HSSD：增强型SSD云硬盘</li><li> CLOUD_BSSD：通用型SSD云硬盘</li>默认值CLOUD_SSD</p>
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
                     * 获取<p>已废弃请使用NodeInfoList<br>节点磁盘容量（单位GB）</p>
                     * @return DiskSize <p>已废弃请使用NodeInfoList<br>节点磁盘容量（单位GB）</p>
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置<p>已废弃请使用NodeInfoList<br>节点磁盘容量（单位GB）</p>
                     * @param _diskSize <p>已废弃请使用NodeInfoList<br>节点磁盘容量（单位GB）</p>
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
                     * 获取<p>计费时长单位（ChargeType为PREPAID时需要设置，默认值为“m”，表示月，当前只支持“m”）</p>
                     * @return TimeUnit <p>计费时长单位（ChargeType为PREPAID时需要设置，默认值为“m”，表示月，当前只支持“m”）</p>
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置<p>计费时长单位（ChargeType为PREPAID时需要设置，默认值为“m”，表示月，当前只支持“m”）</p>
                     * @param _timeUnit <p>计费时长单位（ChargeType为PREPAID时需要设置，默认值为“m”，表示月，当前只支持“m”）</p>
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取<p>是否自动使用代金券<li>0：不自动使用</li><li>1：自动使用</li>默认值0</p>
                     * @return AutoVoucher <p>是否自动使用代金券<li>0：不自动使用</li><li>1：自动使用</li>默认值0</p>
                     * 
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置<p>是否自动使用代金券<li>0：不自动使用</li><li>1：自动使用</li>默认值0</p>
                     * @param _autoVoucher <p>是否自动使用代金券<li>0：不自动使用</li><li>1：自动使用</li>默认值0</p>
                     * 
                     */
                    void SetAutoVoucher(const int64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取<p>代金券ID列表（目前仅支持指定一张代金券）</p>
                     * @return VoucherIds <p>代金券ID列表（目前仅支持指定一张代金券）</p>
                     * 
                     */
                    std::vector<std::string> GetVoucherIds() const;

                    /**
                     * 设置<p>代金券ID列表（目前仅支持指定一张代金券）</p>
                     * @param _voucherIds <p>代金券ID列表（目前仅支持指定一张代金券）</p>
                     * 
                     */
                    void SetVoucherIds(const std::vector<std::string>& _voucherIds);

                    /**
                     * 判断参数 VoucherIds 是否已赋值
                     * @return VoucherIds 是否已赋值
                     * 
                     */
                    bool VoucherIdsHasBeenSet() const;

                    /**
                     * 获取<p>已废弃请使用NodeInfoList<br>是否创建专用主节点<li>true：开启专用主节点</li><li>false：不开启专用主节点</li>默认值false</p>
                     * @return EnableDedicatedMaster <p>已废弃请使用NodeInfoList<br>是否创建专用主节点<li>true：开启专用主节点</li><li>false：不开启专用主节点</li>默认值false</p>
                     * 
                     */
                    bool GetEnableDedicatedMaster() const;

                    /**
                     * 设置<p>已废弃请使用NodeInfoList<br>是否创建专用主节点<li>true：开启专用主节点</li><li>false：不开启专用主节点</li>默认值false</p>
                     * @param _enableDedicatedMaster <p>已废弃请使用NodeInfoList<br>是否创建专用主节点<li>true：开启专用主节点</li><li>false：不开启专用主节点</li>默认值false</p>
                     * 
                     */
                    void SetEnableDedicatedMaster(const bool& _enableDedicatedMaster);

                    /**
                     * 判断参数 EnableDedicatedMaster 是否已赋值
                     * @return EnableDedicatedMaster 是否已赋值
                     * 
                     */
                    bool EnableDedicatedMasterHasBeenSet() const;

                    /**
                     * 获取<p>已废弃请使用NodeInfoList<br>专用主节点个数（只支持3个和5个，EnableDedicatedMaster为true时该值必传）</p>
                     * @return MasterNodeNum <p>已废弃请使用NodeInfoList<br>专用主节点个数（只支持3个和5个，EnableDedicatedMaster为true时该值必传）</p>
                     * 
                     */
                    uint64_t GetMasterNodeNum() const;

                    /**
                     * 设置<p>已废弃请使用NodeInfoList<br>专用主节点个数（只支持3个和5个，EnableDedicatedMaster为true时该值必传）</p>
                     * @param _masterNodeNum <p>已废弃请使用NodeInfoList<br>专用主节点个数（只支持3个和5个，EnableDedicatedMaster为true时该值必传）</p>
                     * 
                     */
                    void SetMasterNodeNum(const uint64_t& _masterNodeNum);

                    /**
                     * 判断参数 MasterNodeNum 是否已赋值
                     * @return MasterNodeNum 是否已赋值
                     * 
                     */
                    bool MasterNodeNumHasBeenSet() const;

                    /**
                     * 获取<p>已废弃请使用NodeInfoList<br>专用主节点类型（EnableDedicatedMaster为true时必传）<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li></p>
                     * @return MasterNodeType <p>已废弃请使用NodeInfoList<br>专用主节点类型（EnableDedicatedMaster为true时必传）<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li></p>
                     * 
                     */
                    std::string GetMasterNodeType() const;

                    /**
                     * 设置<p>已废弃请使用NodeInfoList<br>专用主节点类型（EnableDedicatedMaster为true时必传）<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li></p>
                     * @param _masterNodeType <p>已废弃请使用NodeInfoList<br>专用主节点类型（EnableDedicatedMaster为true时必传）<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li></p>
                     * 
                     */
                    void SetMasterNodeType(const std::string& _masterNodeType);

                    /**
                     * 判断参数 MasterNodeType 是否已赋值
                     * @return MasterNodeType 是否已赋值
                     * 
                     */
                    bool MasterNodeTypeHasBeenSet() const;

                    /**
                     * 获取<p>已废弃请使用NodeInfoList<br>专用主节点磁盘大小（单位GB，非必传，若传递则必须为50，暂不支持自定义）</p>
                     * @return MasterNodeDiskSize <p>已废弃请使用NodeInfoList<br>专用主节点磁盘大小（单位GB，非必传，若传递则必须为50，暂不支持自定义）</p>
                     * 
                     */
                    uint64_t GetMasterNodeDiskSize() const;

                    /**
                     * 设置<p>已废弃请使用NodeInfoList<br>专用主节点磁盘大小（单位GB，非必传，若传递则必须为50，暂不支持自定义）</p>
                     * @param _masterNodeDiskSize <p>已废弃请使用NodeInfoList<br>专用主节点磁盘大小（单位GB，非必传，若传递则必须为50，暂不支持自定义）</p>
                     * 
                     */
                    void SetMasterNodeDiskSize(const uint64_t& _masterNodeDiskSize);

                    /**
                     * 判断参数 MasterNodeDiskSize 是否已赋值
                     * @return MasterNodeDiskSize 是否已赋值
                     * 
                     */
                    bool MasterNodeDiskSizeHasBeenSet() const;

                    /**
                     * 获取<p>集群配置文件中的ClusterName（系统默认配置为实例ID，暂不支持自定义）</p>
                     * @return ClusterNameInConf <p>集群配置文件中的ClusterName（系统默认配置为实例ID，暂不支持自定义）</p>
                     * 
                     */
                    std::string GetClusterNameInConf() const;

                    /**
                     * 设置<p>集群配置文件中的ClusterName（系统默认配置为实例ID，暂不支持自定义）</p>
                     * @param _clusterNameInConf <p>集群配置文件中的ClusterName（系统默认配置为实例ID，暂不支持自定义）</p>
                     * 
                     */
                    void SetClusterNameInConf(const std::string& _clusterNameInConf);

                    /**
                     * 判断参数 ClusterNameInConf 是否已赋值
                     * @return ClusterNameInConf 是否已赋值
                     * 
                     */
                    bool ClusterNameInConfHasBeenSet() const;

                    /**
                     * 获取<p>集群部署方式<li>0：单可用区部署</li><li>1：多可用区部署，北京、上海、上海金融、广州、南京、香港、新加坡、法兰克福（白名单控制）</li>默认为0</p>
                     * @return DeployMode <p>集群部署方式<li>0：单可用区部署</li><li>1：多可用区部署，北京、上海、上海金融、广州、南京、香港、新加坡、法兰克福（白名单控制）</li>默认为0</p>
                     * 
                     */
                    uint64_t GetDeployMode() const;

                    /**
                     * 设置<p>集群部署方式<li>0：单可用区部署</li><li>1：多可用区部署，北京、上海、上海金融、广州、南京、香港、新加坡、法兰克福（白名单控制）</li>默认为0</p>
                     * @param _deployMode <p>集群部署方式<li>0：单可用区部署</li><li>1：多可用区部署，北京、上海、上海金融、广州、南京、香港、新加坡、法兰克福（白名单控制）</li>默认为0</p>
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
                     * 获取<p>多可用区部署时可用区的详细信息(DeployMode为1时必传)</p>
                     * @return MultiZoneInfo <p>多可用区部署时可用区的详细信息(DeployMode为1时必传)</p>
                     * 
                     */
                    std::vector<ZoneDetail> GetMultiZoneInfo() const;

                    /**
                     * 设置<p>多可用区部署时可用区的详细信息(DeployMode为1时必传)</p>
                     * @param _multiZoneInfo <p>多可用区部署时可用区的详细信息(DeployMode为1时必传)</p>
                     * 
                     */
                    void SetMultiZoneInfo(const std::vector<ZoneDetail>& _multiZoneInfo);

                    /**
                     * 判断参数 MultiZoneInfo 是否已赋值
                     * @return MultiZoneInfo 是否已赋值
                     * 
                     */
                    bool MultiZoneInfoHasBeenSet() const;

                    /**
                     * 获取<p>License类型<li>oss：开源版</li><li>basic：基础版</li><li>platinum：白金版</li>默认值platinum</p>
                     * @return LicenseType <p>License类型<li>oss：开源版</li><li>basic：基础版</li><li>platinum：白金版</li>默认值platinum</p>
                     * 
                     */
                    std::string GetLicenseType() const;

                    /**
                     * 设置<p>License类型<li>oss：开源版</li><li>basic：基础版</li><li>platinum：白金版</li>默认值platinum</p>
                     * @param _licenseType <p>License类型<li>oss：开源版</li><li>basic：基础版</li><li>platinum：白金版</li>默认值platinum</p>
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
                     * 获取<p>节点信息列表， 用于描述集群各类节点的规格信息如节点类型，节点个数，节点规格，磁盘类型，磁盘大小等</p>
                     * @return NodeInfoList <p>节点信息列表， 用于描述集群各类节点的规格信息如节点类型，节点个数，节点规格，磁盘类型，磁盘大小等</p>
                     * 
                     */
                    std::vector<NodeInfo> GetNodeInfoList() const;

                    /**
                     * 设置<p>节点信息列表， 用于描述集群各类节点的规格信息如节点类型，节点个数，节点规格，磁盘类型，磁盘大小等</p>
                     * @param _nodeInfoList <p>节点信息列表， 用于描述集群各类节点的规格信息如节点类型，节点个数，节点规格，磁盘类型，磁盘大小等</p>
                     * 
                     */
                    void SetNodeInfoList(const std::vector<NodeInfo>& _nodeInfoList);

                    /**
                     * 判断参数 NodeInfoList 是否已赋值
                     * @return NodeInfoList 是否已赋值
                     * 
                     */
                    bool NodeInfoListHasBeenSet() const;

                    /**
                     * 获取<p>节点标签信息列表</p>
                     * @return TagList <p>节点标签信息列表</p>
                     * 
                     */
                    std::vector<TagInfo> GetTagList() const;

                    /**
                     * 设置<p>节点标签信息列表</p>
                     * @param _tagList <p>节点标签信息列表</p>
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
                     * 获取<p>6.8（及以上版本）基础版是否开启xpack security认证<li>1：不开启</li><li>2：开启</li></p>
                     * @return BasicSecurityType <p>6.8（及以上版本）基础版是否开启xpack security认证<li>1：不开启</li><li>2：开启</li></p>
                     * 
                     */
                    uint64_t GetBasicSecurityType() const;

                    /**
                     * 设置<p>6.8（及以上版本）基础版是否开启xpack security认证<li>1：不开启</li><li>2：开启</li></p>
                     * @param _basicSecurityType <p>6.8（及以上版本）基础版是否开启xpack security认证<li>1：不开启</li><li>2：开启</li></p>
                     * 
                     */
                    void SetBasicSecurityType(const uint64_t& _basicSecurityType);

                    /**
                     * 判断参数 BasicSecurityType 是否已赋值
                     * @return BasicSecurityType 是否已赋值
                     * 
                     */
                    bool BasicSecurityTypeHasBeenSet() const;

                    /**
                     * 获取<p>场景化模板类型 0：不启用 1：通用 2：日志 3：搜索</p>
                     * @return SceneType <p>场景化模板类型 0：不启用 1：通用 2：日志 3：搜索</p>
                     * 
                     */
                    int64_t GetSceneType() const;

                    /**
                     * 设置<p>场景化模板类型 0：不启用 1：通用 2：日志 3：搜索</p>
                     * @param _sceneType <p>场景化模板类型 0：不启用 1：通用 2：日志 3：搜索</p>
                     * 
                     */
                    void SetSceneType(const int64_t& _sceneType);

                    /**
                     * 判断参数 SceneType 是否已赋值
                     * @return SceneType 是否已赋值
                     * 
                     */
                    bool SceneTypeHasBeenSet() const;

                    /**
                     * 获取<p>可视化节点配置</p>
                     * @return WebNodeTypeInfo <p>可视化节点配置</p>
                     * 
                     */
                    WebNodeTypeInfo GetWebNodeTypeInfo() const;

                    /**
                     * 设置<p>可视化节点配置</p>
                     * @param _webNodeTypeInfo <p>可视化节点配置</p>
                     * 
                     */
                    void SetWebNodeTypeInfo(const WebNodeTypeInfo& _webNodeTypeInfo);

                    /**
                     * 判断参数 WebNodeTypeInfo 是否已赋值
                     * @return WebNodeTypeInfo 是否已赋值
                     * 
                     */
                    bool WebNodeTypeInfoHasBeenSet() const;

                    /**
                     * 获取<p>创建https集群，默认是http</p>
                     * @return Protocol <p>创建https集群，默认是http</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>创建https集群，默认是http</p>
                     * @param _protocol <p>创建https集群，默认是http</p>
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取<p>可维护时间段</p>
                     * @return OperationDuration <p>可维护时间段</p>
                     * 
                     */
                    OperationDuration GetOperationDuration() const;

                    /**
                     * 设置<p>可维护时间段</p>
                     * @param _operationDuration <p>可维护时间段</p>
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
                     * 获取<p>是否开启存算分离</p>
                     * @return EnableHybridStorage <p>是否开启存算分离</p>
                     * 
                     */
                    bool GetEnableHybridStorage() const;

                    /**
                     * 设置<p>是否开启存算分离</p>
                     * @param _enableHybridStorage <p>是否开启存算分离</p>
                     * 
                     */
                    void SetEnableHybridStorage(const bool& _enableHybridStorage);

                    /**
                     * 判断参数 EnableHybridStorage 是否已赋值
                     * @return EnableHybridStorage 是否已赋值
                     * 
                     */
                    bool EnableHybridStorageHasBeenSet() const;

                    /**
                     * 获取<p>硬盘额外性能</p>
                     * @return DiskEnhance <p>硬盘额外性能</p>
                     * 
                     */
                    uint64_t GetDiskEnhance() const;

                    /**
                     * 设置<p>硬盘额外性能</p>
                     * @param _diskEnhance <p>硬盘额外性能</p>
                     * 
                     */
                    void SetDiskEnhance(const uint64_t& _diskEnhance);

                    /**
                     * 判断参数 DiskEnhance 是否已赋值
                     * @return DiskEnhance 是否已赋值
                     * 
                     */
                    bool DiskEnhanceHasBeenSet() const;

                    /**
                     * 获取<p>是否开启智能巡检</p>
                     * @return EnableDiagnose <p>是否开启智能巡检</p>
                     * 
                     */
                    bool GetEnableDiagnose() const;

                    /**
                     * 设置<p>是否开启智能巡检</p>
                     * @param _enableDiagnose <p>是否开启智能巡检</p>
                     * 
                     */
                    void SetEnableDiagnose(const bool& _enableDiagnose);

                    /**
                     * 判断参数 EnableDiagnose 是否已赋值
                     * @return EnableDiagnose 是否已赋值
                     * 
                     */
                    bool EnableDiagnoseHasBeenSet() const;

                    /**
                     * 获取<p>cdcId，使用cdc子网时传递</p>
                     * @return CdcId <p>cdcId，使用cdc子网时传递</p>
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置<p>cdcId，使用cdc子网时传递</p>
                     * @param _cdcId <p>cdcId，使用cdc子网时传递</p>
                     * 
                     */
                    void SetCdcId(const std::string& _cdcId);

                    /**
                     * 判断参数 CdcId 是否已赋值
                     * @return CdcId 是否已赋值
                     * 
                     */
                    bool CdcIdHasBeenSet() const;

                    /**
                     * 获取<p>置放群组亲和度，范围[0,10]，0表示不开启</p>
                     * @return DisasterRecoverGroupAffinity <p>置放群组亲和度，范围[0,10]，0表示不开启</p>
                     * 
                     */
                    uint64_t GetDisasterRecoverGroupAffinity() const;

                    /**
                     * 设置<p>置放群组亲和度，范围[0,10]，0表示不开启</p>
                     * @param _disasterRecoverGroupAffinity <p>置放群组亲和度，范围[0,10]，0表示不开启</p>
                     * 
                     */
                    void SetDisasterRecoverGroupAffinity(const uint64_t& _disasterRecoverGroupAffinity);

                    /**
                     * 判断参数 DisasterRecoverGroupAffinity 是否已赋值
                     * @return DisasterRecoverGroupAffinity 是否已赋值
                     * 
                     */
                    bool DisasterRecoverGroupAffinityHasBeenSet() const;

                    /**
                     * 获取<p>子产品ID枚举值： 开源版：&quot;sp_es_io2&quot;， 基础版：&quot;sp_es_basic&quot;，白金版：&quot;sp_es_platinum&quot;，企业版：&quot;sp_es_enterprise&quot;，CDC白金版：&quot;sp_es_cdc_platinum&quot;，日志增强版：&quot;sp_es_enlogging&quot;，tsearch：&quot;sp_tsearch_io2&quot;，logstash：&quot;sp_es_logstash&quot; ，可以为空，为空的时候后台取LicenseType映射该字段</p>
                     * @return SubProductCode <p>子产品ID枚举值： 开源版：&quot;sp_es_io2&quot;， 基础版：&quot;sp_es_basic&quot;，白金版：&quot;sp_es_platinum&quot;，企业版：&quot;sp_es_enterprise&quot;，CDC白金版：&quot;sp_es_cdc_platinum&quot;，日志增强版：&quot;sp_es_enlogging&quot;，tsearch：&quot;sp_tsearch_io2&quot;，logstash：&quot;sp_es_logstash&quot; ，可以为空，为空的时候后台取LicenseType映射该字段</p>
                     * 
                     */
                    std::string GetSubProductCode() const;

                    /**
                     * 设置<p>子产品ID枚举值： 开源版：&quot;sp_es_io2&quot;， 基础版：&quot;sp_es_basic&quot;，白金版：&quot;sp_es_platinum&quot;，企业版：&quot;sp_es_enterprise&quot;，CDC白金版：&quot;sp_es_cdc_platinum&quot;，日志增强版：&quot;sp_es_enlogging&quot;，tsearch：&quot;sp_tsearch_io2&quot;，logstash：&quot;sp_es_logstash&quot; ，可以为空，为空的时候后台取LicenseType映射该字段</p>
                     * @param _subProductCode <p>子产品ID枚举值： 开源版：&quot;sp_es_io2&quot;， 基础版：&quot;sp_es_basic&quot;，白金版：&quot;sp_es_platinum&quot;，企业版：&quot;sp_es_enterprise&quot;，CDC白金版：&quot;sp_es_cdc_platinum&quot;，日志增强版：&quot;sp_es_enlogging&quot;，tsearch：&quot;sp_tsearch_io2&quot;，logstash：&quot;sp_es_logstash&quot; ，可以为空，为空的时候后台取LicenseType映射该字段</p>
                     * 
                     */
                    void SetSubProductCode(const std::string& _subProductCode);

                    /**
                     * 判断参数 SubProductCode 是否已赋值
                     * @return SubProductCode 是否已赋值
                     * 
                     */
                    bool SubProductCodeHasBeenSet() const;

                    /**
                     * 获取<p>读写分离模式：0-不开启，1-本地读写分离，2-远端读写分离</p>
                     * @return ReadWriteMode <p>读写分离模式：0-不开启，1-本地读写分离，2-远端读写分离</p>
                     * 
                     */
                    int64_t GetReadWriteMode() const;

                    /**
                     * 设置<p>读写分离模式：0-不开启，1-本地读写分离，2-远端读写分离</p>
                     * @param _readWriteMode <p>读写分离模式：0-不开启，1-本地读写分离，2-远端读写分离</p>
                     * 
                     */
                    void SetReadWriteMode(const int64_t& _readWriteMode);

                    /**
                     * 判断参数 ReadWriteMode 是否已赋值
                     * @return ReadWriteMode 是否已赋值
                     * 
                     */
                    bool ReadWriteModeHasBeenSet() const;

                    /**
                     * 获取<p>置放群组是否开启异步任务</p>
                     * @return EnableScheduleRecoverGroup <p>置放群组是否开启异步任务</p>
                     * 
                     */
                    bool GetEnableScheduleRecoverGroup() const;

                    /**
                     * 设置<p>置放群组是否开启异步任务</p>
                     * @param _enableScheduleRecoverGroup <p>置放群组是否开启异步任务</p>
                     * 
                     */
                    void SetEnableScheduleRecoverGroup(const bool& _enableScheduleRecoverGroup);

                    /**
                     * 判断参数 EnableScheduleRecoverGroup 是否已赋值
                     * @return EnableScheduleRecoverGroup 是否已赋值
                     * 
                     */
                    bool EnableScheduleRecoverGroupHasBeenSet() const;

                    /**
                     * 获取<p>置放群组开启异步任务的可维护时间段</p>
                     * @return EnableScheduleOperationDuration <p>置放群组开启异步任务的可维护时间段</p>
                     * 
                     */
                    EnableScheduleOperationDuration GetEnableScheduleOperationDuration() const;

                    /**
                     * 设置<p>置放群组开启异步任务的可维护时间段</p>
                     * @param _enableScheduleOperationDuration <p>置放群组开启异步任务的可维护时间段</p>
                     * 
                     */
                    void SetEnableScheduleOperationDuration(const EnableScheduleOperationDuration& _enableScheduleOperationDuration);

                    /**
                     * 判断参数 EnableScheduleOperationDuration 是否已赋值
                     * @return EnableScheduleOperationDuration 是否已赋值
                     * 
                     */
                    bool EnableScheduleOperationDurationHasBeenSet() const;

                    /**
                     * 获取<p>自动扩盘参数列表</p>
                     * @return AutoScaleDiskInfoList <p>自动扩盘参数列表</p>
                     * 
                     */
                    std::vector<AutoScaleDiskInfo> GetAutoScaleDiskInfoList() const;

                    /**
                     * 设置<p>自动扩盘参数列表</p>
                     * @param _autoScaleDiskInfoList <p>自动扩盘参数列表</p>
                     * 
                     */
                    void SetAutoScaleDiskInfoList(const std::vector<AutoScaleDiskInfo>& _autoScaleDiskInfoList);

                    /**
                     * 判断参数 AutoScaleDiskInfoList 是否已赋值
                     * @return AutoScaleDiskInfoList 是否已赋值
                     * 
                     */
                    bool AutoScaleDiskInfoListHasBeenSet() const;

                    /**
                     * 获取<p>是否开启kibana公网访问，不传默认开启</p>
                     * @return EnableKibanaPublicAccess <p>是否开启kibana公网访问，不传默认开启</p>
                     * 
                     */
                    std::string GetEnableKibanaPublicAccess() const;

                    /**
                     * 设置<p>是否开启kibana公网访问，不传默认开启</p>
                     * @param _enableKibanaPublicAccess <p>是否开启kibana公网访问，不传默认开启</p>
                     * 
                     */
                    void SetEnableKibanaPublicAccess(const std::string& _enableKibanaPublicAccess);

                    /**
                     * 判断参数 EnableKibanaPublicAccess 是否已赋值
                     * @return EnableKibanaPublicAccess 是否已赋值
                     * 
                     */
                    bool EnableKibanaPublicAccessHasBeenSet() const;

                    /**
                     * 获取<p>已有的云监控告警策略 ID</p>
                     * @return AlarmPolicyIds <p>已有的云监控告警策略 ID</p>
                     * 
                     */
                    std::vector<std::string> GetAlarmPolicyIds() const;

                    /**
                     * 设置<p>已有的云监控告警策略 ID</p>
                     * @param _alarmPolicyIds <p>已有的云监控告警策略 ID</p>
                     * 
                     */
                    void SetAlarmPolicyIds(const std::vector<std::string>& _alarmPolicyIds);

                    /**
                     * 判断参数 AlarmPolicyIds 是否已赋值
                     * @return AlarmPolicyIds 是否已赋值
                     * 
                     */
                    bool AlarmPolicyIdsHasBeenSet() const;

                private:

                    /**
                     * <p>可用区</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>实例版本（支持&quot;5.6.4&quot;、&quot;6.4.3&quot;、&quot;6.8.2&quot;、&quot;7.5.1&quot;、&quot;7.10.1&quot;）</p>
                     */
                    std::string m_esVersion;
                    bool m_esVersionHasBeenSet;

                    /**
                     * <p>私有网络ID</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>子网ID</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>访问密码（密码需8到16位，至少包括两项（[a-z,A-Z],[0-9]和[-!@#$%&amp;^*+=_:;,.?]的特殊符号）</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>实例名称（1-50 个英文、汉字、数字、连接线-或下划线_）</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>已废弃请使用NodeInfoList<br>节点数量（2-50个）</p>
                     */
                    uint64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * <p>计费类型<li>PREPAID：预付费，即包年包月</li><li>POSTPAID_BY_HOUR：按小时后付费</li>默认值POSTPAID_BY_HOUR</p>
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * <p>包年包月购买时长（单位由参数TimeUnit决定）</p>
                     */
                    uint64_t m_chargePeriod;
                    bool m_chargePeriodHasBeenSet;

                    /**
                     * <p>自动续费标识<li>RENEW_FLAG_AUTO：自动续费</li><li>RENEW_FLAG_MANUAL：不自动续费，用户手动续费</li>ChargeType为PREPAID时需要设置，如不传递该参数，普通用户默认不自动续费，SVIP用户自动续费</p>
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * <p>已废弃请使用NodeInfoList<br>节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li></p>
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * <p>已废弃请使用NodeInfoList<br>节点磁盘类型<li>CLOUD_SSD：SSD云硬盘</li><li>CLOUD_PREMIUM：高性能云硬盘</li><li> CLOUD_HSSD：增强型SSD云硬盘</li><li> CLOUD_BSSD：通用型SSD云硬盘</li>默认值CLOUD_SSD</p>
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * <p>已废弃请使用NodeInfoList<br>节点磁盘容量（单位GB）</p>
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * <p>计费时长单位（ChargeType为PREPAID时需要设置，默认值为“m”，表示月，当前只支持“m”）</p>
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * <p>是否自动使用代金券<li>0：不自动使用</li><li>1：自动使用</li>默认值0</p>
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * <p>代金券ID列表（目前仅支持指定一张代金券）</p>
                     */
                    std::vector<std::string> m_voucherIds;
                    bool m_voucherIdsHasBeenSet;

                    /**
                     * <p>已废弃请使用NodeInfoList<br>是否创建专用主节点<li>true：开启专用主节点</li><li>false：不开启专用主节点</li>默认值false</p>
                     */
                    bool m_enableDedicatedMaster;
                    bool m_enableDedicatedMasterHasBeenSet;

                    /**
                     * <p>已废弃请使用NodeInfoList<br>专用主节点个数（只支持3个和5个，EnableDedicatedMaster为true时该值必传）</p>
                     */
                    uint64_t m_masterNodeNum;
                    bool m_masterNodeNumHasBeenSet;

                    /**
                     * <p>已废弃请使用NodeInfoList<br>专用主节点类型（EnableDedicatedMaster为true时必传）<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li></p>
                     */
                    std::string m_masterNodeType;
                    bool m_masterNodeTypeHasBeenSet;

                    /**
                     * <p>已废弃请使用NodeInfoList<br>专用主节点磁盘大小（单位GB，非必传，若传递则必须为50，暂不支持自定义）</p>
                     */
                    uint64_t m_masterNodeDiskSize;
                    bool m_masterNodeDiskSizeHasBeenSet;

                    /**
                     * <p>集群配置文件中的ClusterName（系统默认配置为实例ID，暂不支持自定义）</p>
                     */
                    std::string m_clusterNameInConf;
                    bool m_clusterNameInConfHasBeenSet;

                    /**
                     * <p>集群部署方式<li>0：单可用区部署</li><li>1：多可用区部署，北京、上海、上海金融、广州、南京、香港、新加坡、法兰克福（白名单控制）</li>默认为0</p>
                     */
                    uint64_t m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * <p>多可用区部署时可用区的详细信息(DeployMode为1时必传)</p>
                     */
                    std::vector<ZoneDetail> m_multiZoneInfo;
                    bool m_multiZoneInfoHasBeenSet;

                    /**
                     * <p>License类型<li>oss：开源版</li><li>basic：基础版</li><li>platinum：白金版</li>默认值platinum</p>
                     */
                    std::string m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * <p>节点信息列表， 用于描述集群各类节点的规格信息如节点类型，节点个数，节点规格，磁盘类型，磁盘大小等</p>
                     */
                    std::vector<NodeInfo> m_nodeInfoList;
                    bool m_nodeInfoListHasBeenSet;

                    /**
                     * <p>节点标签信息列表</p>
                     */
                    std::vector<TagInfo> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * <p>6.8（及以上版本）基础版是否开启xpack security认证<li>1：不开启</li><li>2：开启</li></p>
                     */
                    uint64_t m_basicSecurityType;
                    bool m_basicSecurityTypeHasBeenSet;

                    /**
                     * <p>场景化模板类型 0：不启用 1：通用 2：日志 3：搜索</p>
                     */
                    int64_t m_sceneType;
                    bool m_sceneTypeHasBeenSet;

                    /**
                     * <p>可视化节点配置</p>
                     */
                    WebNodeTypeInfo m_webNodeTypeInfo;
                    bool m_webNodeTypeInfoHasBeenSet;

                    /**
                     * <p>创建https集群，默认是http</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>可维护时间段</p>
                     */
                    OperationDuration m_operationDuration;
                    bool m_operationDurationHasBeenSet;

                    /**
                     * <p>是否开启存算分离</p>
                     */
                    bool m_enableHybridStorage;
                    bool m_enableHybridStorageHasBeenSet;

                    /**
                     * <p>硬盘额外性能</p>
                     */
                    uint64_t m_diskEnhance;
                    bool m_diskEnhanceHasBeenSet;

                    /**
                     * <p>是否开启智能巡检</p>
                     */
                    bool m_enableDiagnose;
                    bool m_enableDiagnoseHasBeenSet;

                    /**
                     * <p>cdcId，使用cdc子网时传递</p>
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                    /**
                     * <p>置放群组亲和度，范围[0,10]，0表示不开启</p>
                     */
                    uint64_t m_disasterRecoverGroupAffinity;
                    bool m_disasterRecoverGroupAffinityHasBeenSet;

                    /**
                     * <p>子产品ID枚举值： 开源版：&quot;sp_es_io2&quot;， 基础版：&quot;sp_es_basic&quot;，白金版：&quot;sp_es_platinum&quot;，企业版：&quot;sp_es_enterprise&quot;，CDC白金版：&quot;sp_es_cdc_platinum&quot;，日志增强版：&quot;sp_es_enlogging&quot;，tsearch：&quot;sp_tsearch_io2&quot;，logstash：&quot;sp_es_logstash&quot; ，可以为空，为空的时候后台取LicenseType映射该字段</p>
                     */
                    std::string m_subProductCode;
                    bool m_subProductCodeHasBeenSet;

                    /**
                     * <p>读写分离模式：0-不开启，1-本地读写分离，2-远端读写分离</p>
                     */
                    int64_t m_readWriteMode;
                    bool m_readWriteModeHasBeenSet;

                    /**
                     * <p>置放群组是否开启异步任务</p>
                     */
                    bool m_enableScheduleRecoverGroup;
                    bool m_enableScheduleRecoverGroupHasBeenSet;

                    /**
                     * <p>置放群组开启异步任务的可维护时间段</p>
                     */
                    EnableScheduleOperationDuration m_enableScheduleOperationDuration;
                    bool m_enableScheduleOperationDurationHasBeenSet;

                    /**
                     * <p>自动扩盘参数列表</p>
                     */
                    std::vector<AutoScaleDiskInfo> m_autoScaleDiskInfoList;
                    bool m_autoScaleDiskInfoListHasBeenSet;

                    /**
                     * <p>是否开启kibana公网访问，不传默认开启</p>
                     */
                    std::string m_enableKibanaPublicAccess;
                    bool m_enableKibanaPublicAccessHasBeenSet;

                    /**
                     * <p>已有的云监控告警策略 ID</p>
                     */
                    std::vector<std::string> m_alarmPolicyIds;
                    bool m_alarmPolicyIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_CREATEINSTANCEREQUEST_H_
