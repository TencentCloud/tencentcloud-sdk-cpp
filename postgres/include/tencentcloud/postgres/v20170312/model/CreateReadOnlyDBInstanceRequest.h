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
                     * 获取<p>实例所属主可用区， 如：ap-guangzhou-3；<br>可用区信息可以通过调用 <a href="https://cloud.tencent.com/document/api/409/16769">DescribeZones</a> 接口的返回值中的Zone字段来获取。</p>
                     * @return Zone <p>实例所属主可用区， 如：ap-guangzhou-3；<br>可用区信息可以通过调用 <a href="https://cloud.tencent.com/document/api/409/16769">DescribeZones</a> 接口的返回值中的Zone字段来获取。</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>实例所属主可用区， 如：ap-guangzhou-3；<br>可用区信息可以通过调用 <a href="https://cloud.tencent.com/document/api/409/16769">DescribeZones</a> 接口的返回值中的Zone字段来获取。</p>
                     * @param _zone <p>实例所属主可用区， 如：ap-guangzhou-3；<br>可用区信息可以通过调用 <a href="https://cloud.tencent.com/document/api/409/16769">DescribeZones</a> 接口的返回值中的Zone字段来获取。</p>
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
                     * 获取<p>只读实例的主实例ID。可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取</p>
                     * @return MasterDBInstanceId <p>只读实例的主实例ID。可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取</p>
                     * 
                     */
                    std::string GetMasterDBInstanceId() const;

                    /**
                     * 设置<p>只读实例的主实例ID。可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取</p>
                     * @param _masterDBInstanceId <p>只读实例的主实例ID。可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取</p>
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
                     * 获取<p>实例硬盘容量大小，单位：GB。该参数的设置步长为10。</p>
                     * @return Storage <p>实例硬盘容量大小，单位：GB。该参数的设置步长为10。</p>
                     * 
                     */
                    uint64_t GetStorage() const;

                    /**
                     * 设置<p>实例硬盘容量大小，单位：GB。该参数的设置步长为10。</p>
                     * @param _storage <p>实例硬盘容量大小，单位：GB。该参数的设置步长为10。</p>
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
                     * 获取<p>购买实例数量，取值范围：[1-6]。购买支持最大数量6个。</p>
                     * @return InstanceCount <p>购买实例数量，取值范围：[1-6]。购买支持最大数量6个。</p>
                     * 
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置<p>购买实例数量，取值范围：[1-6]。购买支持最大数量6个。</p>
                     * @param _instanceCount <p>购买实例数量，取值范围：[1-6]。购买支持最大数量6个。</p>
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
                     * 获取<p>购买时长，单位：月。</p><li>预付费：支持1,2,3,4,5,6,7,8,9,10,11,12,24,36</li><li>后付费：只支持1</li>
                     * @return Period <p>购买时长，单位：月。</p><li>预付费：支持1,2,3,4,5,6,7,8,9,10,11,12,24,36</li><li>后付费：只支持1</li>
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置<p>购买时长，单位：月。</p><li>预付费：支持1,2,3,4,5,6,7,8,9,10,11,12,24,36</li><li>后付费：只支持1</li>
                     * @param _period <p>购买时长，单位：月。</p><li>预付费：支持1,2,3,4,5,6,7,8,9,10,11,12,24,36</li><li>后付费：只支持1</li>
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
                     * 获取<p>私有网络ID，形如vpc-xxxxxxxx（该参数当前必传）。有效的VpcId可通过登录控制台查询；也可以调用接口 <a href="https://cloud.tencent.com/document/api/215/1372">DescribeVpcEx</a> ，从接口返回中的unVpcId字段获取。</p>
                     * @return VpcId <p>私有网络ID，形如vpc-xxxxxxxx（该参数当前必传）。有效的VpcId可通过登录控制台查询；也可以调用接口 <a href="https://cloud.tencent.com/document/api/215/1372">DescribeVpcEx</a> ，从接口返回中的unVpcId字段获取。</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>私有网络ID，形如vpc-xxxxxxxx（该参数当前必传）。有效的VpcId可通过登录控制台查询；也可以调用接口 <a href="https://cloud.tencent.com/document/api/215/1372">DescribeVpcEx</a> ，从接口返回中的unVpcId字段获取。</p>
                     * @param _vpcId <p>私有网络ID，形如vpc-xxxxxxxx（该参数当前必传）。有效的VpcId可通过登录控制台查询；也可以调用接口 <a href="https://cloud.tencent.com/document/api/215/1372">DescribeVpcEx</a> ，从接口返回中的unVpcId字段获取。</p>
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
                     * 获取<p>私有网络子网ID，形如subnet-xxxxxxxx（该参数当前必传）。有效的私有网络子网ID可通过登录控制台查询；也可以调用接口 <a href="https://cloud.tencent.com/document/api/215/15784">DescribeSubnets </a>，从接口返回中的unSubnetId字段获取。</p>
                     * @return SubnetId <p>私有网络子网ID，形如subnet-xxxxxxxx（该参数当前必传）。有效的私有网络子网ID可通过登录控制台查询；也可以调用接口 <a href="https://cloud.tencent.com/document/api/215/15784">DescribeSubnets </a>，从接口返回中的unSubnetId字段获取。</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>私有网络子网ID，形如subnet-xxxxxxxx（该参数当前必传）。有效的私有网络子网ID可通过登录控制台查询；也可以调用接口 <a href="https://cloud.tencent.com/document/api/215/15784">DescribeSubnets </a>，从接口返回中的unSubnetId字段获取。</p>
                     * @param _subnetId <p>私有网络子网ID，形如subnet-xxxxxxxx（该参数当前必传）。有效的私有网络子网ID可通过登录控制台查询；也可以调用接口 <a href="https://cloud.tencent.com/document/api/215/15784">DescribeSubnets </a>，从接口返回中的unSubnetId字段获取。</p>
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
                     * 获取<p>实例计费类型，目前支持：</p><li>PREPAID：预付费，即包年包月。</li><li>POSTPAID_BY_HOUR：后付费，即按量计费。</li>默认值：PREPAID。如果主实例为后付费，只读实例必须也为后付费。
                     * @return InstanceChargeType <p>实例计费类型，目前支持：</p><li>PREPAID：预付费，即包年包月。</li><li>POSTPAID_BY_HOUR：后付费，即按量计费。</li>默认值：PREPAID。如果主实例为后付费，只读实例必须也为后付费。
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置<p>实例计费类型，目前支持：</p><li>PREPAID：预付费，即包年包月。</li><li>POSTPAID_BY_HOUR：后付费，即按量计费。</li>默认值：PREPAID。如果主实例为后付费，只读实例必须也为后付费。
                     * @param _instanceChargeType <p>实例计费类型，目前支持：</p><li>PREPAID：预付费，即包年包月。</li><li>POSTPAID_BY_HOUR：后付费，即按量计费。</li>默认值：PREPAID。如果主实例为后付费，只读实例必须也为后付费。
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
                     * 获取<p>是否自动使用代金券：</p><li>0：否</li><li>1：是</li>默认值：0
                     * @return AutoVoucher <p>是否自动使用代金券：</p><li>0：否</li><li>1：是</li>默认值：0
                     * 
                     */
                    uint64_t GetAutoVoucher() const;

                    /**
                     * 设置<p>是否自动使用代金券：</p><li>0：否</li><li>1：是</li>默认值：0
                     * @param _autoVoucher <p>是否自动使用代金券：</p><li>0：否</li><li>1：是</li>默认值：0
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
                     * 获取<p>代金券ID列表，目前仅支持指定一张代金券。</p>
                     * @return VoucherIds <p>代金券ID列表，目前仅支持指定一张代金券。</p>
                     * 
                     */
                    std::vector<std::string> GetVoucherIds() const;

                    /**
                     * 设置<p>代金券ID列表，目前仅支持指定一张代金券。</p>
                     * @param _voucherIds <p>代金券ID列表，目前仅支持指定一张代金券。</p>
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
                     * 获取<p>续费标记：</p><li>0：手动续费</li><li>1：自动续费</li>默认值：0
                     * @return AutoRenewFlag <p>续费标记：</p><li>0：手动续费</li><li>1：自动续费</li>默认值：0
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置<p>续费标记：</p><li>0：手动续费</li><li>1：自动续费</li>默认值：0
                     * @param _autoRenewFlag <p>续费标记：</p><li>0：手动续费</li><li>1：自动续费</li>默认值：0
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
                     * 获取<p>项目ID。默认值为0，表示归属默认项目。</p>
                     * @return ProjectId <p>项目ID。默认值为0，表示归属默认项目。</p>
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置<p>项目ID。默认值为0，表示归属默认项目。</p>
                     * @param _projectId <p>项目ID。默认值为0，表示归属默认项目。</p>
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
                     * 获取<p>优惠活动ID</p>
                     * @return ActivityId <p>优惠活动ID</p>
                     * 
                     */
                    int64_t GetActivityId() const;

                    /**
                     * 设置<p>优惠活动ID</p>
                     * @param _activityId <p>优惠活动ID</p>
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
                     * 获取<p>只读组ID。</p>
                     * @return ReadOnlyGroupId <p>只读组ID。</p>
                     * 
                     */
                    std::string GetReadOnlyGroupId() const;

                    /**
                     * 设置<p>只读组ID。</p>
                     * @param _readOnlyGroupId <p>只读组ID。</p>
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
                     * 获取<p>实例需要绑定的Tag信息，默认为空；可以通过调用 <a href="https://cloud.tencent.com/document/api/651/35316">DescribeTags</a> 返回值中的 Tags 字段来获取。</p>
                     * @return TagList <p>实例需要绑定的Tag信息，默认为空；可以通过调用 <a href="https://cloud.tencent.com/document/api/651/35316">DescribeTags</a> 返回值中的 Tags 字段来获取。</p>
                     * 
                     */
                    Tag GetTagList() const;

                    /**
                     * 设置<p>实例需要绑定的Tag信息，默认为空；可以通过调用 <a href="https://cloud.tencent.com/document/api/651/35316">DescribeTags</a> 返回值中的 Tags 字段来获取。</p>
                     * @param _tagList <p>实例需要绑定的Tag信息，默认为空；可以通过调用 <a href="https://cloud.tencent.com/document/api/651/35316">DescribeTags</a> 返回值中的 Tags 字段来获取。</p>
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
                     * 获取<p>实例所属安全组，该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a> 的返回值中的sgId字段来获取。若不指定该参数，则绑定默认安全组。</p>
                     * @return SecurityGroupIds <p>实例所属安全组，该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a> 的返回值中的sgId字段来获取。若不指定该参数，则绑定默认安全组。</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置<p>实例所属安全组，该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a> 的返回值中的sgId字段来获取。若不指定该参数，则绑定默认安全组。</p>
                     * @param _securityGroupIds <p>实例所属安全组，该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a> 的返回值中的sgId字段来获取。若不指定该参数，则绑定默认安全组。</p>
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
                     * 获取<p>是否需要支持Ipv6：</p><li>0：否</li><li>1：是</li>默认值：0
                     * @return NeedSupportIpv6 <p>是否需要支持Ipv6：</p><li>0：否</li><li>1：是</li>默认值：0
                     * 
                     */
                    uint64_t GetNeedSupportIpv6() const;

                    /**
                     * 设置<p>是否需要支持Ipv6：</p><li>0：否</li><li>1：是</li>默认值：0
                     * @param _needSupportIpv6 <p>是否需要支持Ipv6：</p><li>0：否</li><li>1：是</li>默认值：0
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
                     * 获取<p>实例名。仅支持长度小于60的中文/英文/数字/&quot;_&quot;/&quot;-&quot;</p>
                     * @return Name <p>实例名。仅支持长度小于60的中文/英文/数字/&quot;_&quot;/&quot;-&quot;</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>实例名。仅支持长度小于60的中文/英文/数字/&quot;_&quot;/&quot;-&quot;</p>
                     * @param _name <p>实例名。仅支持长度小于60的中文/英文/数字/&quot;_&quot;/&quot;-&quot;</p>
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
                     * 获取<p>不再需要指定，内核版本号与主实例保持一致</p>
                     * @return DBVersion <p>不再需要指定，内核版本号与主实例保持一致</p>
                     * @deprecated
                     */
                    std::string GetDBVersion() const;

                    /**
                     * 设置<p>不再需要指定，内核版本号与主实例保持一致</p>
                     * @param _dBVersion <p>不再需要指定，内核版本号与主实例保持一致</p>
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
                     * 获取<p>专属集群ID</p>
                     * @return DedicatedClusterId <p>专属集群ID</p>
                     * 
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置<p>专属集群ID</p>
                     * @param _dedicatedClusterId <p>专属集群ID</p>
                     * 
                     */
                    void SetDedicatedClusterId(const std::string& _dedicatedClusterId);

                    /**
                     * 判断参数 DedicatedClusterId 是否已赋值
                     * @return DedicatedClusterId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterIdHasBeenSet() const;

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
                     * <p>实例所属主可用区， 如：ap-guangzhou-3；<br>可用区信息可以通过调用 <a href="https://cloud.tencent.com/document/api/409/16769">DescribeZones</a> 接口的返回值中的Zone字段来获取。</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>只读实例的主实例ID。可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取</p>
                     */
                    std::string m_masterDBInstanceId;
                    bool m_masterDBInstanceIdHasBeenSet;

                    /**
                     * <p>售卖规格码。该参数可以通过调用<a href="https://cloud.tencent.com/document/api/409/89019">DescribeClasses</a>的返回值中的SpecCode字段来获取。</p>
                     */
                    std::string m_specCode;
                    bool m_specCodeHasBeenSet;

                    /**
                     * <p>实例硬盘容量大小，单位：GB。该参数的设置步长为10。</p>
                     */
                    uint64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * <p>购买实例数量，取值范围：[1-6]。购买支持最大数量6个。</p>
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * <p>购买时长，单位：月。</p><li>预付费：支持1,2,3,4,5,6,7,8,9,10,11,12,24,36</li><li>后付费：只支持1</li>
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>私有网络ID，形如vpc-xxxxxxxx（该参数当前必传）。有效的VpcId可通过登录控制台查询；也可以调用接口 <a href="https://cloud.tencent.com/document/api/215/1372">DescribeVpcEx</a> ，从接口返回中的unVpcId字段获取。</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>私有网络子网ID，形如subnet-xxxxxxxx（该参数当前必传）。有效的私有网络子网ID可通过登录控制台查询；也可以调用接口 <a href="https://cloud.tencent.com/document/api/215/15784">DescribeSubnets </a>，从接口返回中的unSubnetId字段获取。</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>实例计费类型，目前支持：</p><li>PREPAID：预付费，即包年包月。</li><li>POSTPAID_BY_HOUR：后付费，即按量计费。</li>默认值：PREPAID。如果主实例为后付费，只读实例必须也为后付费。
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * <p>是否自动使用代金券：</p><li>0：否</li><li>1：是</li>默认值：0
                     */
                    uint64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * <p>代金券ID列表，目前仅支持指定一张代金券。</p>
                     */
                    std::vector<std::string> m_voucherIds;
                    bool m_voucherIdsHasBeenSet;

                    /**
                     * <p>续费标记：</p><li>0：手动续费</li><li>1：自动续费</li>默认值：0
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * <p>项目ID。默认值为0，表示归属默认项目。</p>
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>优惠活动ID</p>
                     */
                    int64_t m_activityId;
                    bool m_activityIdHasBeenSet;

                    /**
                     * <p>只读组ID。</p>
                     */
                    std::string m_readOnlyGroupId;
                    bool m_readOnlyGroupIdHasBeenSet;

                    /**
                     * <p>实例需要绑定的Tag信息，默认为空；可以通过调用 <a href="https://cloud.tencent.com/document/api/651/35316">DescribeTags</a> 返回值中的 Tags 字段来获取。</p>
                     */
                    Tag m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * <p>实例所属安全组，该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a> 的返回值中的sgId字段来获取。若不指定该参数，则绑定默认安全组。</p>
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * <p>是否需要支持Ipv6：</p><li>0：否</li><li>1：是</li>默认值：0
                     */
                    uint64_t m_needSupportIpv6;
                    bool m_needSupportIpv6HasBeenSet;

                    /**
                     * <p>实例名。仅支持长度小于60的中文/英文/数字/&quot;_&quot;/&quot;-&quot;</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>不再需要指定，内核版本号与主实例保持一致</p>
                     */
                    std::string m_dBVersion;
                    bool m_dBVersionHasBeenSet;

                    /**
                     * <p>专属集群ID</p>
                     */
                    std::string m_dedicatedClusterId;
                    bool m_dedicatedClusterIdHasBeenSet;

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

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEREADONLYDBINSTANCEREQUEST_H_
