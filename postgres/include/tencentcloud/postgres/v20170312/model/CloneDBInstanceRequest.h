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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_CLONEDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_CLONEDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/Tag.h>
#include <tencentcloud/postgres/v20170312/model/DBNode.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CloneDBInstance请求参数结构体
                */
                class CloneDBInstanceRequest : public AbstractModel
                {
                public:
                    CloneDBInstanceRequest();
                    ~CloneDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>克隆的源实例ID。可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取</p>
                     * @return DBInstanceId <p>克隆的源实例ID。可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取</p>
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置<p>克隆的源实例ID。可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取</p>
                     * @param _dBInstanceId <p>克隆的源实例ID。可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取</p>
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>售卖规格码。该参数可以通过调用<a href="https://cloud.tencent.com/document/api/409/89019">DescribeClasses</a>的返回值中的SpecCode字段来获取。</p>
                     * @return SpecCode <p>售卖规格码。该参数可以通过调用<a href="https://cloud.tencent.com/document/api/409/89019">DescribeClasses</a>的返回值中的SpecCode字段来获取。</p>
                     * 
                     */
                    std::string GetSpecCode() const;

                    /**
                     * 设置<p>售卖规格码。该参数可以通过调用<a href="https://cloud.tencent.com/document/api/409/89019">DescribeClasses</a>的返回值中的SpecCode字段来获取。</p>
                     * @param _specCode <p>售卖规格码。该参数可以通过调用<a href="https://cloud.tencent.com/document/api/409/89019">DescribeClasses</a>的返回值中的SpecCode字段来获取。</p>
                     * 
                     */
                    void SetSpecCode(const std::string& _specCode);

                    /**
                     * 判断参数 SpecCode 是否已赋值
                     * @return SpecCode 是否已赋值
                     * 
                     */
                    bool SpecCodeHasBeenSet() const;

                    /**
                     * 获取<p>实例磁盘容量大小，设置步长限制为10。单位：GB。</p>
                     * @return Storage <p>实例磁盘容量大小，设置步长限制为10。单位：GB。</p>
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置<p>实例磁盘容量大小，设置步长限制为10。单位：GB。</p>
                     * @param _storage <p>实例磁盘容量大小，设置步长限制为10。单位：GB。</p>
                     * 
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取<p>购买时长，单位：月。</p><ul><li>预付费：支持1,2,3,4,5,6,7,8,9,10,11,12,24,36</li><li>后付费：只支持1</li></ul>
                     * @return Period <p>购买时长，单位：月。</p><ul><li>预付费：支持1,2,3,4,5,6,7,8,9,10,11,12,24,36</li><li>后付费：只支持1</li></ul>
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置<p>购买时长，单位：月。</p><ul><li>预付费：支持1,2,3,4,5,6,7,8,9,10,11,12,24,36</li><li>后付费：只支持1</li></ul>
                     * @param _period <p>购买时长，单位：月。</p><ul><li>预付费：支持1,2,3,4,5,6,7,8,9,10,11,12,24,36</li><li>后付费：只支持1</li></ul>
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取<p>续费标记。仅当计费模式为预付费时生效。<br>枚举值：</p><ul><li>0：手动续费</li><li>1：自动续费</li></ul><p>默认值：0</p>
                     * @return AutoRenewFlag <p>续费标记。仅当计费模式为预付费时生效。<br>枚举值：</p><ul><li>0：手动续费</li><li>1：自动续费</li></ul><p>默认值：0</p>
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置<p>续费标记。仅当计费模式为预付费时生效。<br>枚举值：</p><ul><li>0：手动续费</li><li>1：自动续费</li></ul><p>默认值：0</p>
                     * @param _autoRenewFlag <p>续费标记。仅当计费模式为预付费时生效。<br>枚举值：</p><ul><li>0：手动续费</li><li>1：自动续费</li></ul><p>默认值：0</p>
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>私有网络ID，形如vpc-xxxxxxxx。有效的VpcId可通过登录控制台查询；也可以调用接口 <a href="https://cloud.tencent.com/document/api/215/1372">DescribeVpcEx</a> ，从接口返回中的unVpcId字段获取。</p>
                     * @return VpcId <p>私有网络ID，形如vpc-xxxxxxxx。有效的VpcId可通过登录控制台查询；也可以调用接口 <a href="https://cloud.tencent.com/document/api/215/1372">DescribeVpcEx</a> ，从接口返回中的unVpcId字段获取。</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>私有网络ID，形如vpc-xxxxxxxx。有效的VpcId可通过登录控制台查询；也可以调用接口 <a href="https://cloud.tencent.com/document/api/215/1372">DescribeVpcEx</a> ，从接口返回中的unVpcId字段获取。</p>
                     * @param _vpcId <p>私有网络ID，形如vpc-xxxxxxxx。有效的VpcId可通过登录控制台查询；也可以调用接口 <a href="https://cloud.tencent.com/document/api/215/1372">DescribeVpcEx</a> ，从接口返回中的unVpcId字段获取。</p>
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
                     * 获取<p>私有网络子网ID，形如subnet-xxxxxxxx。有效的私有网络子网ID可通过登录控制台查询；也可以调用接口 <a href="https://cloud.tencent.com/document/api/215/15784">DescribeSubnets </a>，从接口返回中的unSubnetId字段获取。</p>
                     * @return SubnetId <p>私有网络子网ID，形如subnet-xxxxxxxx。有效的私有网络子网ID可通过登录控制台查询；也可以调用接口 <a href="https://cloud.tencent.com/document/api/215/15784">DescribeSubnets </a>，从接口返回中的unSubnetId字段获取。</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>私有网络子网ID，形如subnet-xxxxxxxx。有效的私有网络子网ID可通过登录控制台查询；也可以调用接口 <a href="https://cloud.tencent.com/document/api/215/15784">DescribeSubnets </a>，从接口返回中的unSubnetId字段获取。</p>
                     * @param _subnetId <p>私有网络子网ID，形如subnet-xxxxxxxx。有效的私有网络子网ID可通过登录控制台查询；也可以调用接口 <a href="https://cloud.tencent.com/document/api/215/15784">DescribeSubnets </a>，从接口返回中的unSubnetId字段获取。</p>
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
                     * 获取<p>新购的实例名称，仅支持长度小于60的中文/英文/数字/&quot;_&quot;/&quot;-&quot;，不指定实例名称则默认显示&quot;源实例名-Copy&quot;。</p>
                     * @return Name <p>新购的实例名称，仅支持长度小于60的中文/英文/数字/&quot;_&quot;/&quot;-&quot;，不指定实例名称则默认显示&quot;源实例名-Copy&quot;。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>新购的实例名称，仅支持长度小于60的中文/英文/数字/&quot;_&quot;/&quot;-&quot;，不指定实例名称则默认显示&quot;源实例名-Copy&quot;。</p>
                     * @param _name <p>新购的实例名称，仅支持长度小于60的中文/英文/数字/&quot;_&quot;/&quot;-&quot;，不指定实例名称则默认显示&quot;源实例名-Copy&quot;。</p>
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
                     * 获取<p>实例计费类型，目前支持：</p><ul><li>PREPAID：预付费，即包年包月</li><li>POSTPAID_BY_HOUR：后付费，即按量计费</li></ul><p>默认值：PREPAID</p>
                     * @return InstanceChargeType <p>实例计费类型，目前支持：</p><ul><li>PREPAID：预付费，即包年包月</li><li>POSTPAID_BY_HOUR：后付费，即按量计费</li></ul><p>默认值：PREPAID</p>
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置<p>实例计费类型，目前支持：</p><ul><li>PREPAID：预付费，即包年包月</li><li>POSTPAID_BY_HOUR：后付费，即按量计费</li></ul><p>默认值：PREPAID</p>
                     * @param _instanceChargeType <p>实例计费类型，目前支持：</p><ul><li>PREPAID：预付费，即包年包月</li><li>POSTPAID_BY_HOUR：后付费，即按量计费</li></ul><p>默认值：PREPAID</p>
                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取<p>实例所属安全组。该参数可以通过调用<a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a>的返回值中的SecurityGroupId字段来获取。若不指定该参数，则绑定默认安全组。</p>
                     * @return SecurityGroupIds <p>实例所属安全组。该参数可以通过调用<a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a>的返回值中的SecurityGroupId字段来获取。若不指定该参数，则绑定默认安全组。</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置<p>实例所属安全组。该参数可以通过调用<a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a>的返回值中的SecurityGroupId字段来获取。若不指定该参数，则绑定默认安全组。</p>
                     * @param _securityGroupIds <p>实例所属安全组。该参数可以通过调用<a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a>的返回值中的SecurityGroupId字段来获取。若不指定该参数，则绑定默认安全组。</p>
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取<p>项目ID。默认值为0，表示所属默认项目。</p>
                     * @return ProjectId <p>项目ID。默认值为0，表示所属默认项目。</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>项目ID。默认值为0，表示所属默认项目。</p>
                     * @param _projectId <p>项目ID。默认值为0，表示所属默认项目。</p>
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
                     * 获取<p>实例需要绑定的Tag信息，默认为空；可以通过调用 <a href="https://cloud.tencent.com/document/api/651/35316">DescribeTags</a> 返回值中的 Tags 字段来获取。</p>
                     * @return TagList <p>实例需要绑定的Tag信息，默认为空；可以通过调用 <a href="https://cloud.tencent.com/document/api/651/35316">DescribeTags</a> 返回值中的 Tags 字段来获取。</p>
                     * 
                     */
                    std::vector<Tag> GetTagList() const;

                    /**
                     * 设置<p>实例需要绑定的Tag信息，默认为空；可以通过调用 <a href="https://cloud.tencent.com/document/api/651/35316">DescribeTags</a> 返回值中的 Tags 字段来获取。</p>
                     * @param _tagList <p>实例需要绑定的Tag信息，默认为空；可以通过调用 <a href="https://cloud.tencent.com/document/api/651/35316">DescribeTags</a> 返回值中的 Tags 字段来获取。</p>
                     * 
                     */
                    void SetTagList(const std::vector<Tag>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取<p>实例节点部署信息，必须填写主备节点可用区。支持多可用区部署时需要指定每个节点的部署可用区信息。<br>可用区信息可以通过调用 <a href="https://cloud.tencent.com/document/api/409/16769">DescribeZones</a> 接口的返回值中的Zone字段来获取。</p>
                     * @return DBNodeSet <p>实例节点部署信息，必须填写主备节点可用区。支持多可用区部署时需要指定每个节点的部署可用区信息。<br>可用区信息可以通过调用 <a href="https://cloud.tencent.com/document/api/409/16769">DescribeZones</a> 接口的返回值中的Zone字段来获取。</p>
                     * 
                     */
                    std::vector<DBNode> GetDBNodeSet() const;

                    /**
                     * 设置<p>实例节点部署信息，必须填写主备节点可用区。支持多可用区部署时需要指定每个节点的部署可用区信息。<br>可用区信息可以通过调用 <a href="https://cloud.tencent.com/document/api/409/16769">DescribeZones</a> 接口的返回值中的Zone字段来获取。</p>
                     * @param _dBNodeSet <p>实例节点部署信息，必须填写主备节点可用区。支持多可用区部署时需要指定每个节点的部署可用区信息。<br>可用区信息可以通过调用 <a href="https://cloud.tencent.com/document/api/409/16769">DescribeZones</a> 接口的返回值中的Zone字段来获取。</p>
                     * 
                     */
                    void SetDBNodeSet(const std::vector<DBNode>& _dBNodeSet);

                    /**
                     * 判断参数 DBNodeSet 是否已赋值
                     * @return DBNodeSet 是否已赋值
                     * 
                     */
                    bool DBNodeSetHasBeenSet() const;

                    /**
                     * 获取<p>是否自动使用代金券：</p><ul><li>0：否</li><li>1：是</li></ul><p>默认值：0</p>
                     * @return AutoVoucher <p>是否自动使用代金券：</p><ul><li>0：否</li><li>1：是</li></ul><p>默认值：0</p>
                     * 
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置<p>是否自动使用代金券：</p><ul><li>0：否</li><li>1：是</li></ul><p>默认值：0</p>
                     * @param _autoVoucher <p>是否自动使用代金券：</p><ul><li>0：否</li><li>1：是</li></ul><p>默认值：0</p>
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
                     * 获取<p>代金券ID列表。</p>
                     * @return VoucherIds <p>代金券ID列表。</p>
                     * 
                     */
                    std::string GetVoucherIds() const;

                    /**
                     * 设置<p>代金券ID列表。</p>
                     * @param _voucherIds <p>代金券ID列表。</p>
                     * 
                     */
                    void SetVoucherIds(const std::string& _voucherIds);

                    /**
                     * 判断参数 VoucherIds 是否已赋值
                     * @return VoucherIds 是否已赋值
                     * 
                     */
                    bool VoucherIdsHasBeenSet() const;

                    /**
                     * 获取<p>活动ID。</p>
                     * @return ActivityId <p>活动ID。</p>
                     * 
                     */
                    int64_t GetActivityId() const;

                    /**
                     * 设置<p>活动ID。</p>
                     * @param _activityId <p>活动ID。</p>
                     * 
                     */
                    void SetActivityId(const int64_t& _activityId);

                    /**
                     * 判断参数 ActivityId 是否已赋值
                     * @return ActivityId 是否已赋值
                     * 
                     */
                    bool ActivityIdHasBeenSet() const;

                    /**
                     * 获取<p>基础备份集ID。参数BackupSetId、RecoveryTargetTime两者必须填写一项，且不能同时填写。</p>
                     * @return BackupSetId <p>基础备份集ID。参数BackupSetId、RecoveryTargetTime两者必须填写一项，且不能同时填写。</p>
                     * 
                     */
                    std::string GetBackupSetId() const;

                    /**
                     * 设置<p>基础备份集ID。参数BackupSetId、RecoveryTargetTime两者必须填写一项，且不能同时填写。</p>
                     * @param _backupSetId <p>基础备份集ID。参数BackupSetId、RecoveryTargetTime两者必须填写一项，且不能同时填写。</p>
                     * 
                     */
                    void SetBackupSetId(const std::string& _backupSetId);

                    /**
                     * 判断参数 BackupSetId 是否已赋值
                     * @return BackupSetId 是否已赋值
                     * 
                     */
                    bool BackupSetIdHasBeenSet() const;

                    /**
                     * 获取<p>恢复时间点。参数BackupSetId、RecoveryTargetTime两者必须填写一项，且不能同时填写。</p>
                     * @return RecoveryTargetTime <p>恢复时间点。参数BackupSetId、RecoveryTargetTime两者必须填写一项，且不能同时填写。</p>
                     * 
                     */
                    std::string GetRecoveryTargetTime() const;

                    /**
                     * 设置<p>恢复时间点。参数BackupSetId、RecoveryTargetTime两者必须填写一项，且不能同时填写。</p>
                     * @param _recoveryTargetTime <p>恢复时间点。参数BackupSetId、RecoveryTargetTime两者必须填写一项，且不能同时填写。</p>
                     * 
                     */
                    void SetRecoveryTargetTime(const std::string& _recoveryTargetTime);

                    /**
                     * 判断参数 RecoveryTargetTime 是否已赋值
                     * @return RecoveryTargetTime 是否已赋值
                     * 
                     */
                    bool RecoveryTargetTimeHasBeenSet() const;

                    /**
                     * 获取<p>主从同步方式，支持： </p><li>Semi-sync：半同步</li><li>Async：异步</li>主实例默认值：Semi-sync只读实例默认值：Async
                     * @return SyncMode <p>主从同步方式，支持： </p><li>Semi-sync：半同步</li><li>Async：异步</li>主实例默认值：Semi-sync只读实例默认值：Async
                     * 
                     */
                    std::string GetSyncMode() const;

                    /**
                     * 设置<p>主从同步方式，支持： </p><li>Semi-sync：半同步</li><li>Async：异步</li>主实例默认值：Semi-sync只读实例默认值：Async
                     * @param _syncMode <p>主从同步方式，支持： </p><li>Semi-sync：半同步</li><li>Async：异步</li>主实例默认值：Semi-sync只读实例默认值：Async
                     * 
                     */
                    void SetSyncMode(const std::string& _syncMode);

                    /**
                     * 判断参数 SyncMode 是否已赋值
                     * @return SyncMode 是否已赋值
                     * 
                     */
                    bool SyncModeHasBeenSet() const;

                    /**
                     * 获取<p>实例是否开启删除保护: true-开启删除保护；false-关闭删除保护。</p>
                     * @return DeletionProtection <p>实例是否开启删除保护: true-开启删除保护；false-关闭删除保护。</p>
                     * 
                     */
                    bool GetDeletionProtection() const;

                    /**
                     * 设置<p>实例是否开启删除保护: true-开启删除保护；false-关闭删除保护。</p>
                     * @param _deletionProtection <p>实例是否开启删除保护: true-开启删除保护；false-关闭删除保护。</p>
                     * 
                     */
                    void SetDeletionProtection(const bool& _deletionProtection);

                    /**
                     * 判断参数 DeletionProtection 是否已赋值
                     * @return DeletionProtection 是否已赋值
                     * 
                     */
                    bool DeletionProtectionHasBeenSet() const;

                private:

                    /**
                     * <p>克隆的源实例ID。可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取</p>
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * <p>售卖规格码。该参数可以通过调用<a href="https://cloud.tencent.com/document/api/409/89019">DescribeClasses</a>的返回值中的SpecCode字段来获取。</p>
                     */
                    std::string m_specCode;
                    bool m_specCodeHasBeenSet;

                    /**
                     * <p>实例磁盘容量大小，设置步长限制为10。单位：GB。</p>
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * <p>购买时长，单位：月。</p><ul><li>预付费：支持1,2,3,4,5,6,7,8,9,10,11,12,24,36</li><li>后付费：只支持1</li></ul>
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>续费标记。仅当计费模式为预付费时生效。<br>枚举值：</p><ul><li>0：手动续费</li><li>1：自动续费</li></ul><p>默认值：0</p>
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * <p>私有网络ID，形如vpc-xxxxxxxx。有效的VpcId可通过登录控制台查询；也可以调用接口 <a href="https://cloud.tencent.com/document/api/215/1372">DescribeVpcEx</a> ，从接口返回中的unVpcId字段获取。</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>私有网络子网ID，形如subnet-xxxxxxxx。有效的私有网络子网ID可通过登录控制台查询；也可以调用接口 <a href="https://cloud.tencent.com/document/api/215/15784">DescribeSubnets </a>，从接口返回中的unSubnetId字段获取。</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>新购的实例名称，仅支持长度小于60的中文/英文/数字/&quot;_&quot;/&quot;-&quot;，不指定实例名称则默认显示&quot;源实例名-Copy&quot;。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>实例计费类型，目前支持：</p><ul><li>PREPAID：预付费，即包年包月</li><li>POSTPAID_BY_HOUR：后付费，即按量计费</li></ul><p>默认值：PREPAID</p>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * <p>实例所属安全组。该参数可以通过调用<a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a>的返回值中的SecurityGroupId字段来获取。若不指定该参数，则绑定默认安全组。</p>
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * <p>项目ID。默认值为0，表示所属默认项目。</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>实例需要绑定的Tag信息，默认为空；可以通过调用 <a href="https://cloud.tencent.com/document/api/651/35316">DescribeTags</a> 返回值中的 Tags 字段来获取。</p>
                     */
                    std::vector<Tag> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * <p>实例节点部署信息，必须填写主备节点可用区。支持多可用区部署时需要指定每个节点的部署可用区信息。<br>可用区信息可以通过调用 <a href="https://cloud.tencent.com/document/api/409/16769">DescribeZones</a> 接口的返回值中的Zone字段来获取。</p>
                     */
                    std::vector<DBNode> m_dBNodeSet;
                    bool m_dBNodeSetHasBeenSet;

                    /**
                     * <p>是否自动使用代金券：</p><ul><li>0：否</li><li>1：是</li></ul><p>默认值：0</p>
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * <p>代金券ID列表。</p>
                     */
                    std::string m_voucherIds;
                    bool m_voucherIdsHasBeenSet;

                    /**
                     * <p>活动ID。</p>
                     */
                    int64_t m_activityId;
                    bool m_activityIdHasBeenSet;

                    /**
                     * <p>基础备份集ID。参数BackupSetId、RecoveryTargetTime两者必须填写一项，且不能同时填写。</p>
                     */
                    std::string m_backupSetId;
                    bool m_backupSetIdHasBeenSet;

                    /**
                     * <p>恢复时间点。参数BackupSetId、RecoveryTargetTime两者必须填写一项，且不能同时填写。</p>
                     */
                    std::string m_recoveryTargetTime;
                    bool m_recoveryTargetTimeHasBeenSet;

                    /**
                     * <p>主从同步方式，支持： </p><li>Semi-sync：半同步</li><li>Async：异步</li>主实例默认值：Semi-sync只读实例默认值：Async
                     */
                    std::string m_syncMode;
                    bool m_syncModeHasBeenSet;

                    /**
                     * <p>实例是否开启删除保护: true-开启删除保护；false-关闭删除保护。</p>
                     */
                    bool m_deletionProtection;
                    bool m_deletionProtectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_CLONEDBINSTANCEREQUEST_H_
