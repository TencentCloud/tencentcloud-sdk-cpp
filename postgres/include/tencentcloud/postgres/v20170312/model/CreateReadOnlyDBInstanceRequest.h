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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEREADONLYDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEREADONLYDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateReadOnlyDBInstance请求参数结构体
                */
                class CreateReadOnlyDBInstanceRequest : public AbstractModel
                {
                public:
                    CreateReadOnlyDBInstanceRequest();
                    ~CreateReadOnlyDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例所属主可用区， 如：ap-guangzhou-3；
可用区信息可以通过调用 [DescribeZones](https://cloud.tencent.com/document/api/409/16769) 接口的返回值中的Zone字段来获取。
                     * @return Zone 实例所属主可用区， 如：ap-guangzhou-3；
可用区信息可以通过调用 [DescribeZones](https://cloud.tencent.com/document/api/409/16769) 接口的返回值中的Zone字段来获取。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置实例所属主可用区， 如：ap-guangzhou-3；
可用区信息可以通过调用 [DescribeZones](https://cloud.tencent.com/document/api/409/16769) 接口的返回值中的Zone字段来获取。
                     * @param _zone 实例所属主可用区， 如：ap-guangzhou-3；
可用区信息可以通过调用 [DescribeZones](https://cloud.tencent.com/document/api/409/16769) 接口的返回值中的Zone字段来获取。
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
                     * 获取只读实例的主实例ID。
                     * @return MasterDBInstanceId 只读实例的主实例ID。
                     * 
                     */
                    std::string GetMasterDBInstanceId() const;

                    /**
                     * 设置只读实例的主实例ID。
                     * @param _masterDBInstanceId 只读实例的主实例ID。
                     * 
                     */
                    void SetMasterDBInstanceId(const std::string& _masterDBInstanceId);

                    /**
                     * 判断参数 MasterDBInstanceId 是否已赋值
                     * @return MasterDBInstanceId 是否已赋值
                     * 
                     */
                    bool MasterDBInstanceIdHasBeenSet() const;

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
                    uint64_t GetStorage() const;

                    /**
                     * 设置实例容量大小，单位：GB。
                     * @param _storage 实例容量大小，单位：GB。
                     * 
                     */
                    void SetStorage(const uint64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取购买实例数量，取值范围：[1-10]。一次性购买支持最大数量10个，若超过该数量，可进行多次调用进行购买。
                     * @return InstanceCount 购买实例数量，取值范围：[1-10]。一次性购买支持最大数量10个，若超过该数量，可进行多次调用进行购买。
                     * 
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置购买实例数量，取值范围：[1-10]。一次性购买支持最大数量10个，若超过该数量，可进行多次调用进行购买。
                     * @param _instanceCount 购买实例数量，取值范围：[1-10]。一次性购买支持最大数量10个，若超过该数量，可进行多次调用进行购买。
                     * 
                     */
                    void SetInstanceCount(const uint64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取购买时长，单位：月。
<li>预付费：支持1,2,3,4,5,6,7,8,9,10,11,12,24,36</li>
<li>后付费：只支持1</li>
                     * @return Period 购买时长，单位：月。
<li>预付费：支持1,2,3,4,5,6,7,8,9,10,11,12,24,36</li>
<li>后付费：只支持1</li>
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置购买时长，单位：月。
<li>预付费：支持1,2,3,4,5,6,7,8,9,10,11,12,24,36</li>
<li>后付费：只支持1</li>
                     * @param _period 购买时长，单位：月。
<li>预付费：支持1,2,3,4,5,6,7,8,9,10,11,12,24,36</li>
<li>后付费：只支持1</li>
                     * 
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取私有网络ID，形如vpc-xxxxxxxx（该参数当前必传）。有效的VpcId可通过登录控制台查询；也可以调用接口 [DescribeVpcEx](https://cloud.tencent.com/document/api/215/1372) ，从接口返回中的unVpcId字段获取。
                     * @return VpcId 私有网络ID，形如vpc-xxxxxxxx（该参数当前必传）。有效的VpcId可通过登录控制台查询；也可以调用接口 [DescribeVpcEx](https://cloud.tencent.com/document/api/215/1372) ，从接口返回中的unVpcId字段获取。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID，形如vpc-xxxxxxxx（该参数当前必传）。有效的VpcId可通过登录控制台查询；也可以调用接口 [DescribeVpcEx](https://cloud.tencent.com/document/api/215/1372) ，从接口返回中的unVpcId字段获取。
                     * @param _vpcId 私有网络ID，形如vpc-xxxxxxxx（该参数当前必传）。有效的VpcId可通过登录控制台查询；也可以调用接口 [DescribeVpcEx](https://cloud.tencent.com/document/api/215/1372) ，从接口返回中的unVpcId字段获取。
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
                     * 获取私有网络子网ID，形如subnet-xxxxxxxx（该参数当前必传）。有效的私有网络子网ID可通过登录控制台查询；也可以调用接口 [DescribeSubnets ](https://cloud.tencent.com/document/api/215/15784)，从接口返回中的unSubnetId字段获取。
                     * @return SubnetId 私有网络子网ID，形如subnet-xxxxxxxx（该参数当前必传）。有效的私有网络子网ID可通过登录控制台查询；也可以调用接口 [DescribeSubnets ](https://cloud.tencent.com/document/api/215/15784)，从接口返回中的unSubnetId字段获取。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置私有网络子网ID，形如subnet-xxxxxxxx（该参数当前必传）。有效的私有网络子网ID可通过登录控制台查询；也可以调用接口 [DescribeSubnets ](https://cloud.tencent.com/document/api/215/15784)，从接口返回中的unSubnetId字段获取。
                     * @param _subnetId 私有网络子网ID，形如subnet-xxxxxxxx（该参数当前必传）。有效的私有网络子网ID可通过登录控制台查询；也可以调用接口 [DescribeSubnets ](https://cloud.tencent.com/document/api/215/15784)，从接口返回中的unSubnetId字段获取。
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
                     * 获取实例计费类型，目前支持：
<li>PREPAID：预付费，即包年包月。</li>
<li>POSTPAID_BY_HOUR：后付费，即按量计费。</li>
默认值：PREPAID。如果主实例为后付费，只读实例必须也为后付费。
                     * @return InstanceChargeType 实例计费类型，目前支持：
<li>PREPAID：预付费，即包年包月。</li>
<li>POSTPAID_BY_HOUR：后付费，即按量计费。</li>
默认值：PREPAID。如果主实例为后付费，只读实例必须也为后付费。
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置实例计费类型，目前支持：
<li>PREPAID：预付费，即包年包月。</li>
<li>POSTPAID_BY_HOUR：后付费，即按量计费。</li>
默认值：PREPAID。如果主实例为后付费，只读实例必须也为后付费。
                     * @param _instanceChargeType 实例计费类型，目前支持：
<li>PREPAID：预付费，即包年包月。</li>
<li>POSTPAID_BY_HOUR：后付费，即按量计费。</li>
默认值：PREPAID。如果主实例为后付费，只读实例必须也为后付费。
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
                     * 获取是否自动使用代金券：
<li>0：否</li>
<li>1：是</li>
默认值：0
                     * @return AutoVoucher 是否自动使用代金券：
<li>0：否</li>
<li>1：是</li>
默认值：0
                     * 
                     */
                    uint64_t GetAutoVoucher() const;

                    /**
                     * 设置是否自动使用代金券：
<li>0：否</li>
<li>1：是</li>
默认值：0
                     * @param _autoVoucher 是否自动使用代金券：
<li>0：否</li>
<li>1：是</li>
默认值：0
                     * 
                     */
                    void SetAutoVoucher(const uint64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取代金券ID列表，目前仅支持指定一张代金券。
                     * @return VoucherIds 代金券ID列表，目前仅支持指定一张代金券。
                     * 
                     */
                    std::vector<std::string> GetVoucherIds() const;

                    /**
                     * 设置代金券ID列表，目前仅支持指定一张代金券。
                     * @param _voucherIds 代金券ID列表，目前仅支持指定一张代金券。
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
                     * 获取续费标记：
<li>0：手动续费</li>
<li>1：自动续费</li>
默认值：0
                     * @return AutoRenewFlag 续费标记：
<li>0：手动续费</li>
<li>1：自动续费</li>
默认值：0
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置续费标记：
<li>0：手动续费</li>
<li>1：自动续费</li>
默认值：0
                     * @param _autoRenewFlag 续费标记：
<li>0：手动续费</li>
<li>1：自动续费</li>
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
                     * 获取项目ID。
                     * @return ProjectId 项目ID。
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置项目ID。
                     * @param _projectId 项目ID。
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
                     * 获取优惠活动ID
                     * @return ActivityId 优惠活动ID
                     * 
                     */
                    int64_t GetActivityId() const;

                    /**
                     * 设置优惠活动ID
                     * @param _activityId 优惠活动ID
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
                     * 获取只读组ID。
                     * @return ReadOnlyGroupId 只读组ID。
                     * 
                     */
                    std::string GetReadOnlyGroupId() const;

                    /**
                     * 设置只读组ID。
                     * @param _readOnlyGroupId 只读组ID。
                     * 
                     */
                    void SetReadOnlyGroupId(const std::string& _readOnlyGroupId);

                    /**
                     * 判断参数 ReadOnlyGroupId 是否已赋值
                     * @return ReadOnlyGroupId 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupIdHasBeenSet() const;

                    /**
                     * 获取实例需要绑定的Tag信息，默认为空；可以通过调用 [DescribeTags](https://cloud.tencent.com/document/api/651/35316) 返回值中的 Tags 字段来获取。
                     * @return TagList 实例需要绑定的Tag信息，默认为空；可以通过调用 [DescribeTags](https://cloud.tencent.com/document/api/651/35316) 返回值中的 Tags 字段来获取。
                     * 
                     */
                    Tag GetTagList() const;

                    /**
                     * 设置实例需要绑定的Tag信息，默认为空；可以通过调用 [DescribeTags](https://cloud.tencent.com/document/api/651/35316) 返回值中的 Tags 字段来获取。
                     * @param _tagList 实例需要绑定的Tag信息，默认为空；可以通过调用 [DescribeTags](https://cloud.tencent.com/document/api/651/35316) 返回值中的 Tags 字段来获取。
                     * 
                     */
                    void SetTagList(const Tag& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

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
                     * 获取是否需要支持Ipv6：
<li>0：否</li>
<li>1：是</li>
默认值：0
                     * @return NeedSupportIpv6 是否需要支持Ipv6：
<li>0：否</li>
<li>1：是</li>
默认值：0
                     * 
                     */
                    uint64_t GetNeedSupportIpv6() const;

                    /**
                     * 设置是否需要支持Ipv6：
<li>0：否</li>
<li>1：是</li>
默认值：0
                     * @param _needSupportIpv6 是否需要支持Ipv6：
<li>0：否</li>
<li>1：是</li>
默认值：0
                     * 
                     */
                    void SetNeedSupportIpv6(const uint64_t& _needSupportIpv6);

                    /**
                     * 判断参数 NeedSupportIpv6 是否已赋值
                     * @return NeedSupportIpv6 是否已赋值
                     * 
                     */
                    bool NeedSupportIpv6HasBeenSet() const;

                    /**
                     * 获取实例名(后续支持)
                     * @return Name 实例名(后续支持)
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置实例名(后续支持)
                     * @param _name 实例名(后续支持)
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
                     * 获取不再需要指定，内核版本号与主实例保持一致
                     * @return DBVersion 不再需要指定，内核版本号与主实例保持一致
                     * @deprecated
                     */
                    std::string GetDBVersion() const;

                    /**
                     * 设置不再需要指定，内核版本号与主实例保持一致
                     * @param _dBVersion 不再需要指定，内核版本号与主实例保持一致
                     * @deprecated
                     */
                    void SetDBVersion(const std::string& _dBVersion);

                    /**
                     * 判断参数 DBVersion 是否已赋值
                     * @return DBVersion 是否已赋值
                     * @deprecated
                     */
                    bool DBVersionHasBeenSet() const;

                    /**
                     * 获取专属集群ID
                     * @return DedicatedClusterId 专属集群ID
                     * 
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置专属集群ID
                     * @param _dedicatedClusterId 专属集群ID
                     * 
                     */
                    void SetDedicatedClusterId(const std::string& _dedicatedClusterId);

                    /**
                     * 判断参数 DedicatedClusterId 是否已赋值
                     * @return DedicatedClusterId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterIdHasBeenSet() const;

                private:

                    /**
                     * 实例所属主可用区， 如：ap-guangzhou-3；
可用区信息可以通过调用 [DescribeZones](https://cloud.tencent.com/document/api/409/16769) 接口的返回值中的Zone字段来获取。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 只读实例的主实例ID。
                     */
                    std::string m_masterDBInstanceId;
                    bool m_masterDBInstanceIdHasBeenSet;

                    /**
                     * 售卖规格码。该参数可以通过调用[DescribeClasses](https://cloud.tencent.com/document/api/409/89019)的返回值中的SpecCode字段来获取。
                     */
                    std::string m_specCode;
                    bool m_specCodeHasBeenSet;

                    /**
                     * 实例容量大小，单位：GB。
                     */
                    uint64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 购买实例数量，取值范围：[1-10]。一次性购买支持最大数量10个，若超过该数量，可进行多次调用进行购买。
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * 购买时长，单位：月。
<li>预付费：支持1,2,3,4,5,6,7,8,9,10,11,12,24,36</li>
<li>后付费：只支持1</li>
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 私有网络ID，形如vpc-xxxxxxxx（该参数当前必传）。有效的VpcId可通过登录控制台查询；也可以调用接口 [DescribeVpcEx](https://cloud.tencent.com/document/api/215/1372) ，从接口返回中的unVpcId字段获取。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 私有网络子网ID，形如subnet-xxxxxxxx（该参数当前必传）。有效的私有网络子网ID可通过登录控制台查询；也可以调用接口 [DescribeSubnets ](https://cloud.tencent.com/document/api/215/15784)，从接口返回中的unSubnetId字段获取。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 实例计费类型，目前支持：
<li>PREPAID：预付费，即包年包月。</li>
<li>POSTPAID_BY_HOUR：后付费，即按量计费。</li>
默认值：PREPAID。如果主实例为后付费，只读实例必须也为后付费。
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * 是否自动使用代金券：
<li>0：否</li>
<li>1：是</li>
默认值：0
                     */
                    uint64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * 代金券ID列表，目前仅支持指定一张代金券。
                     */
                    std::vector<std::string> m_voucherIds;
                    bool m_voucherIdsHasBeenSet;

                    /**
                     * 续费标记：
<li>0：手动续费</li>
<li>1：自动续费</li>
默认值：0
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 项目ID。
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 优惠活动ID
                     */
                    int64_t m_activityId;
                    bool m_activityIdHasBeenSet;

                    /**
                     * 只读组ID。
                     */
                    std::string m_readOnlyGroupId;
                    bool m_readOnlyGroupIdHasBeenSet;

                    /**
                     * 实例需要绑定的Tag信息，默认为空；可以通过调用 [DescribeTags](https://cloud.tencent.com/document/api/651/35316) 返回值中的 Tags 字段来获取。
                     */
                    Tag m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * 实例所属安全组，该参数可以通过调用 [DescribeSecurityGroups](https://cloud.tencent.com/document/api/215/15808) 的返回值中的sgId字段来获取。若不指定该参数，则绑定默认安全组。

                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * 是否需要支持Ipv6：
<li>0：否</li>
<li>1：是</li>
默认值：0
                     */
                    uint64_t m_needSupportIpv6;
                    bool m_needSupportIpv6HasBeenSet;

                    /**
                     * 实例名(后续支持)
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 不再需要指定，内核版本号与主实例保持一致
                     */
                    std::string m_dBVersion;
                    bool m_dBVersionHasBeenSet;

                    /**
                     * 专属集群ID
                     */
                    std::string m_dedicatedClusterId;
                    bool m_dedicatedClusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEREADONLYDBINSTANCEREQUEST_H_
