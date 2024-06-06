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
                     * 获取克隆的源实例ID。
                     * @return DBInstanceId 克隆的源实例ID。
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置克隆的源实例ID。
                     * @param _dBInstanceId 克隆的源实例ID。
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
                     * 获取售卖规格码。该参数可以通过调用[DescribeClasses](https://cloud.tencent.com/document/api/409/89019)的返回值中的SpecCode字段来获取。
                     * @return SpecCode 售卖规格码。该参数可以通过调用[DescribeClasses](https://cloud.tencent.com/document/api/409/89019)的返回值中的SpecCode字段来获取。
                     * 
                     */
                    std::string GetSpecCode() const;

                    /**
                     * 设置售卖规格码。该参数可以通过调用[DescribeClasses](https://cloud.tencent.com/document/api/409/89019)的返回值中的SpecCode字段来获取。
                     * @param _specCode 售卖规格码。该参数可以通过调用[DescribeClasses](https://cloud.tencent.com/document/api/409/89019)的返回值中的SpecCode字段来获取。
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
                     * 获取实例容量大小，单位：GB。
                     * @return Storage 实例容量大小，单位：GB。
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置实例容量大小，单位：GB。
                     * @param _storage 实例容量大小，单位：GB。
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
                     * 获取购买时长，单位：月。

- 预付费：支持1,2,3,4,5,6,7,8,9,10,11,12,24,36
- 后付费：只支持1

                     * @return Period 购买时长，单位：月。

- 预付费：支持1,2,3,4,5,6,7,8,9,10,11,12,24,36
- 后付费：只支持1

                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置购买时长，单位：月。

- 预付费：支持1,2,3,4,5,6,7,8,9,10,11,12,24,36
- 后付费：只支持1

                     * @param _period 购买时长，单位：月。

- 预付费：支持1,2,3,4,5,6,7,8,9,10,11,12,24,36
- 后付费：只支持1

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
                     * 获取续费标记：

- 0：手动续费
- 1：自动续费

默认值：0
                     * @return AutoRenewFlag 续费标记：

- 0：手动续费
- 1：自动续费

默认值：0
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置续费标记：

- 0：手动续费
- 1：自动续费

默认值：0
                     * @param _autoRenewFlag 续费标记：

- 0：手动续费
- 1：自动续费

默认值：0
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
                     * 获取私有网络ID，形如vpc-xxxxxxxx。有效的VpcId可通过登录控制台查询；也可以调用接口 [DescribeVpcEx](https://cloud.tencent.com/document/api/215/1372) ，从接口返回中的unVpcId字段获取。
                     * @return VpcId 私有网络ID，形如vpc-xxxxxxxx。有效的VpcId可通过登录控制台查询；也可以调用接口 [DescribeVpcEx](https://cloud.tencent.com/document/api/215/1372) ，从接口返回中的unVpcId字段获取。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID，形如vpc-xxxxxxxx。有效的VpcId可通过登录控制台查询；也可以调用接口 [DescribeVpcEx](https://cloud.tencent.com/document/api/215/1372) ，从接口返回中的unVpcId字段获取。
                     * @param _vpcId 私有网络ID，形如vpc-xxxxxxxx。有效的VpcId可通过登录控制台查询；也可以调用接口 [DescribeVpcEx](https://cloud.tencent.com/document/api/215/1372) ，从接口返回中的unVpcId字段获取。
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
                     * 获取私有网络子网ID，形如subnet-xxxxxxxx。有效的私有网络子网ID可通过登录控制台查询；也可以调用接口 [DescribeSubnets ](https://cloud.tencent.com/document/api/215/15784)，从接口返回中的unSubnetId字段获取。
                     * @return SubnetId 私有网络子网ID，形如subnet-xxxxxxxx。有效的私有网络子网ID可通过登录控制台查询；也可以调用接口 [DescribeSubnets ](https://cloud.tencent.com/document/api/215/15784)，从接口返回中的unSubnetId字段获取。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置私有网络子网ID，形如subnet-xxxxxxxx。有效的私有网络子网ID可通过登录控制台查询；也可以调用接口 [DescribeSubnets ](https://cloud.tencent.com/document/api/215/15784)，从接口返回中的unSubnetId字段获取。
                     * @param _subnetId 私有网络子网ID，形如subnet-xxxxxxxx。有效的私有网络子网ID可通过登录控制台查询；也可以调用接口 [DescribeSubnets ](https://cloud.tencent.com/document/api/215/15784)，从接口返回中的unSubnetId字段获取。
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
                     * 获取新购的实例名称，仅支持长度小于60的中文/英文/数字/"_"/"-"，不指定实例名称则默认显示"未命名"。
                     * @return Name 新购的实例名称，仅支持长度小于60的中文/英文/数字/"_"/"-"，不指定实例名称则默认显示"未命名"。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置新购的实例名称，仅支持长度小于60的中文/英文/数字/"_"/"-"，不指定实例名称则默认显示"未命名"。
                     * @param _name 新购的实例名称，仅支持长度小于60的中文/英文/数字/"_"/"-"，不指定实例名称则默认显示"未命名"。
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
                     * 获取实例计费类型，目前支持：

- PREPAID：预付费，即包年包月
- POSTPAID_BY_HOUR：后付费，即按量计费

默认值：PREPAID
                     * @return InstanceChargeType 实例计费类型，目前支持：

- PREPAID：预付费，即包年包月
- POSTPAID_BY_HOUR：后付费，即按量计费

默认值：PREPAID
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置实例计费类型，目前支持：

- PREPAID：预付费，即包年包月
- POSTPAID_BY_HOUR：后付费，即按量计费

默认值：PREPAID
                     * @param _instanceChargeType 实例计费类型，目前支持：

- PREPAID：预付费，即包年包月
- POSTPAID_BY_HOUR：后付费，即按量计费

默认值：PREPAID
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
                     * 获取实例所属安全组，该参数可以通过调用 [DescribeSecurityGroups](https://cloud.tencent.com/document/api/215/15808) 的返回值中的sgId字段来获取。若不指定该参数，则绑定默认安全组。

                     * @return SecurityGroupIds 实例所属安全组，该参数可以通过调用 [DescribeSecurityGroups](https://cloud.tencent.com/document/api/215/15808) 的返回值中的sgId字段来获取。若不指定该参数，则绑定默认安全组。

                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置实例所属安全组，该参数可以通过调用 [DescribeSecurityGroups](https://cloud.tencent.com/document/api/215/15808) 的返回值中的sgId字段来获取。若不指定该参数，则绑定默认安全组。

                     * @param _securityGroupIds 实例所属安全组，该参数可以通过调用 [DescribeSecurityGroups](https://cloud.tencent.com/document/api/215/15808) 的返回值中的sgId字段来获取。若不指定该参数，则绑定默认安全组。

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
                     * 获取项目ID。
                     * @return ProjectId 项目ID。
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目ID。
                     * @param _projectId 项目ID。
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
                     * 获取实例需要绑定的Tag信息，默认为空；可以通过调用 [DescribeTags](https://cloud.tencent.com/document/api/651/35316) 返回值中的 Tags 字段来获取。
                     * @return TagList 实例需要绑定的Tag信息，默认为空；可以通过调用 [DescribeTags](https://cloud.tencent.com/document/api/651/35316) 返回值中的 Tags 字段来获取。
                     * 
                     */
                    std::vector<Tag> GetTagList() const;

                    /**
                     * 设置实例需要绑定的Tag信息，默认为空；可以通过调用 [DescribeTags](https://cloud.tencent.com/document/api/651/35316) 返回值中的 Tags 字段来获取。
                     * @param _tagList 实例需要绑定的Tag信息，默认为空；可以通过调用 [DescribeTags](https://cloud.tencent.com/document/api/651/35316) 返回值中的 Tags 字段来获取。
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
                     * 获取实例节点部署信息，支持多可用区部署时需要指定每个节点的部署可用区信息。
可用区信息可以通过调用 [DescribeZones](https://cloud.tencent.com/document/api/409/16769) 接口的返回值中的Zone字段来获取。
                     * @return DBNodeSet 实例节点部署信息，支持多可用区部署时需要指定每个节点的部署可用区信息。
可用区信息可以通过调用 [DescribeZones](https://cloud.tencent.com/document/api/409/16769) 接口的返回值中的Zone字段来获取。
                     * 
                     */
                    std::vector<DBNode> GetDBNodeSet() const;

                    /**
                     * 设置实例节点部署信息，支持多可用区部署时需要指定每个节点的部署可用区信息。
可用区信息可以通过调用 [DescribeZones](https://cloud.tencent.com/document/api/409/16769) 接口的返回值中的Zone字段来获取。
                     * @param _dBNodeSet 实例节点部署信息，支持多可用区部署时需要指定每个节点的部署可用区信息。
可用区信息可以通过调用 [DescribeZones](https://cloud.tencent.com/document/api/409/16769) 接口的返回值中的Zone字段来获取。
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
                     * 获取是否自动使用代金券：

- 0：否
- 1：是

默认值：0
                     * @return AutoVoucher 是否自动使用代金券：

- 0：否
- 1：是

默认值：0
                     * 
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置是否自动使用代金券：

- 0：否
- 1：是

默认值：0
                     * @param _autoVoucher 是否自动使用代金券：

- 0：否
- 1：是

默认值：0
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
                     * 获取代金券ID列表。
                     * @return VoucherIds 代金券ID列表。
                     * 
                     */
                    std::string GetVoucherIds() const;

                    /**
                     * 设置代金券ID列表。
                     * @param _voucherIds 代金券ID列表。
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
                     * 获取活动ID。
                     * @return ActivityId 活动ID。
                     * 
                     */
                    int64_t GetActivityId() const;

                    /**
                     * 设置活动ID。
                     * @param _activityId 活动ID。
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
                     * 获取基础备份集ID。
                     * @return BackupSetId 基础备份集ID。
                     * 
                     */
                    std::string GetBackupSetId() const;

                    /**
                     * 设置基础备份集ID。
                     * @param _backupSetId 基础备份集ID。
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
                     * 获取恢复时间点。
                     * @return RecoveryTargetTime 恢复时间点。
                     * 
                     */
                    std::string GetRecoveryTargetTime() const;

                    /**
                     * 设置恢复时间点。
                     * @param _recoveryTargetTime 恢复时间点。
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
                     * 获取主从同步方式，支持： 
<li>Semi-sync：半同步</li>
<li>Async：异步</li>
主实例默认值：Semi-sync
只读实例默认值：Async
                     * @return SyncMode 主从同步方式，支持： 
<li>Semi-sync：半同步</li>
<li>Async：异步</li>
主实例默认值：Semi-sync
只读实例默认值：Async
                     * 
                     */
                    std::string GetSyncMode() const;

                    /**
                     * 设置主从同步方式，支持： 
<li>Semi-sync：半同步</li>
<li>Async：异步</li>
主实例默认值：Semi-sync
只读实例默认值：Async
                     * @param _syncMode 主从同步方式，支持： 
<li>Semi-sync：半同步</li>
<li>Async：异步</li>
主实例默认值：Semi-sync
只读实例默认值：Async
                     * 
                     */
                    void SetSyncMode(const std::string& _syncMode);

                    /**
                     * 判断参数 SyncMode 是否已赋值
                     * @return SyncMode 是否已赋值
                     * 
                     */
                    bool SyncModeHasBeenSet() const;

                private:

                    /**
                     * 克隆的源实例ID。
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * 售卖规格码。该参数可以通过调用[DescribeClasses](https://cloud.tencent.com/document/api/409/89019)的返回值中的SpecCode字段来获取。
                     */
                    std::string m_specCode;
                    bool m_specCodeHasBeenSet;

                    /**
                     * 实例容量大小，单位：GB。
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 购买时长，单位：月。

- 预付费：支持1,2,3,4,5,6,7,8,9,10,11,12,24,36
- 后付费：只支持1

                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 续费标记：

- 0：手动续费
- 1：自动续费

默认值：0
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 私有网络ID，形如vpc-xxxxxxxx。有效的VpcId可通过登录控制台查询；也可以调用接口 [DescribeVpcEx](https://cloud.tencent.com/document/api/215/1372) ，从接口返回中的unVpcId字段获取。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 私有网络子网ID，形如subnet-xxxxxxxx。有效的私有网络子网ID可通过登录控制台查询；也可以调用接口 [DescribeSubnets ](https://cloud.tencent.com/document/api/215/15784)，从接口返回中的unSubnetId字段获取。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 新购的实例名称，仅支持长度小于60的中文/英文/数字/"_"/"-"，不指定实例名称则默认显示"未命名"。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 实例计费类型，目前支持：

- PREPAID：预付费，即包年包月
- POSTPAID_BY_HOUR：后付费，即按量计费

默认值：PREPAID
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * 实例所属安全组，该参数可以通过调用 [DescribeSecurityGroups](https://cloud.tencent.com/document/api/215/15808) 的返回值中的sgId字段来获取。若不指定该参数，则绑定默认安全组。

                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * 项目ID。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 实例需要绑定的Tag信息，默认为空；可以通过调用 [DescribeTags](https://cloud.tencent.com/document/api/651/35316) 返回值中的 Tags 字段来获取。
                     */
                    std::vector<Tag> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * 实例节点部署信息，支持多可用区部署时需要指定每个节点的部署可用区信息。
可用区信息可以通过调用 [DescribeZones](https://cloud.tencent.com/document/api/409/16769) 接口的返回值中的Zone字段来获取。
                     */
                    std::vector<DBNode> m_dBNodeSet;
                    bool m_dBNodeSetHasBeenSet;

                    /**
                     * 是否自动使用代金券：

- 0：否
- 1：是

默认值：0
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * 代金券ID列表。
                     */
                    std::string m_voucherIds;
                    bool m_voucherIdsHasBeenSet;

                    /**
                     * 活动ID。
                     */
                    int64_t m_activityId;
                    bool m_activityIdHasBeenSet;

                    /**
                     * 基础备份集ID。
                     */
                    std::string m_backupSetId;
                    bool m_backupSetIdHasBeenSet;

                    /**
                     * 恢复时间点。
                     */
                    std::string m_recoveryTargetTime;
                    bool m_recoveryTargetTimeHasBeenSet;

                    /**
                     * 主从同步方式，支持： 
<li>Semi-sync：半同步</li>
<li>Async：异步</li>
主实例默认值：Semi-sync
只读实例默认值：Async
                     */
                    std::string m_syncMode;
                    bool m_syncModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_CLONEDBINSTANCEREQUEST_H_
