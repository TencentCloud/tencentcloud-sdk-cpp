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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEDBINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateDBInstances请求参数结构体
                */
                class CreateDBInstancesRequest : public AbstractModel
                {
                public:
                    CreateDBInstancesRequest();
                    ~CreateDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取售卖规格ID。该参数可以通过调用DescribeProductConfig的返回值中的SpecCode字段来获取。
                     * @return SpecCode 售卖规格ID。该参数可以通过调用DescribeProductConfig的返回值中的SpecCode字段来获取。
                     */
                    std::string GetSpecCode() const;

                    /**
                     * 设置售卖规格ID。该参数可以通过调用DescribeProductConfig的返回值中的SpecCode字段来获取。
                     * @param SpecCode 售卖规格ID。该参数可以通过调用DescribeProductConfig的返回值中的SpecCode字段来获取。
                     */
                    void SetSpecCode(const std::string& _specCode);

                    /**
                     * 判断参数 SpecCode 是否已赋值
                     * @return SpecCode 是否已赋值
                     */
                    bool SpecCodeHasBeenSet() const;

                    /**
                     * 获取PostgreSQL内核版本，目前支持：9.3.5、9.5.4、10.4三种版本。
                     * @return DBVersion PostgreSQL内核版本，目前支持：9.3.5、9.5.4、10.4三种版本。
                     */
                    std::string GetDBVersion() const;

                    /**
                     * 设置PostgreSQL内核版本，目前支持：9.3.5、9.5.4、10.4三种版本。
                     * @param DBVersion PostgreSQL内核版本，目前支持：9.3.5、9.5.4、10.4三种版本。
                     */
                    void SetDBVersion(const std::string& _dBVersion);

                    /**
                     * 判断参数 DBVersion 是否已赋值
                     * @return DBVersion 是否已赋值
                     */
                    bool DBVersionHasBeenSet() const;

                    /**
                     * 获取实例容量大小，单位：GB。
                     * @return Storage 实例容量大小，单位：GB。
                     */
                    uint64_t GetStorage() const;

                    /**
                     * 设置实例容量大小，单位：GB。
                     * @param Storage 实例容量大小，单位：GB。
                     */
                    void SetStorage(const uint64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取一次性购买的实例数量。取值1-100
                     * @return InstanceCount 一次性购买的实例数量。取值1-100
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置一次性购买的实例数量。取值1-100
                     * @param InstanceCount 一次性购买的实例数量。取值1-100
                     */
                    void SetInstanceCount(const uint64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取购买时长，单位：月。目前只支持1,2,3,4,5,6,7,8,9,10,11,12,24,36这些值，按量计费模式下该参数传1。
                     * @return Period 购买时长，单位：月。目前只支持1,2,3,4,5,6,7,8,9,10,11,12,24,36这些值，按量计费模式下该参数传1。
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置购买时长，单位：月。目前只支持1,2,3,4,5,6,7,8,9,10,11,12,24,36这些值，按量计费模式下该参数传1。
                     * @param Period 购买时长，单位：月。目前只支持1,2,3,4,5,6,7,8,9,10,11,12,24,36这些值，按量计费模式下该参数传1。
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取可用区ID。该参数可以通过调用 DescribeZones 接口的返回值中的Zone字段来获取。
                     * @return Zone 可用区ID。该参数可以通过调用 DescribeZones 接口的返回值中的Zone字段来获取。
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区ID。该参数可以通过调用 DescribeZones 接口的返回值中的Zone字段来获取。
                     * @param Zone 可用区ID。该参数可以通过调用 DescribeZones 接口的返回值中的Zone字段来获取。
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取项目ID。
                     * @return ProjectId 项目ID。
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目ID。
                     * @param ProjectId 项目ID。
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取实例计费类型。目前支持：PREPAID（预付费，即包年包月），POSTPAID_BY_HOUR（后付费，即按量计费）。
                     * @return InstanceChargeType 实例计费类型。目前支持：PREPAID（预付费，即包年包月），POSTPAID_BY_HOUR（后付费，即按量计费）。
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置实例计费类型。目前支持：PREPAID（预付费，即包年包月），POSTPAID_BY_HOUR（后付费，即按量计费）。
                     * @param InstanceChargeType 实例计费类型。目前支持：PREPAID（预付费，即包年包月），POSTPAID_BY_HOUR（后付费，即按量计费）。
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取是否自动使用代金券。1（是），0（否），默认不使用。
                     * @return AutoVoucher 是否自动使用代金券。1（是），0（否），默认不使用。
                     */
                    uint64_t GetAutoVoucher() const;

                    /**
                     * 设置是否自动使用代金券。1（是），0（否），默认不使用。
                     * @param AutoVoucher 是否自动使用代金券。1（是），0（否），默认不使用。
                     */
                    void SetAutoVoucher(const uint64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取代金券ID列表，目前仅支持指定一张代金券。
                     * @return VoucherIds 代金券ID列表，目前仅支持指定一张代金券。
                     */
                    std::vector<std::string> GetVoucherIds() const;

                    /**
                     * 设置代金券ID列表，目前仅支持指定一张代金券。
                     * @param VoucherIds 代金券ID列表，目前仅支持指定一张代金券。
                     */
                    void SetVoucherIds(const std::vector<std::string>& _voucherIds);

                    /**
                     * 判断参数 VoucherIds 是否已赋值
                     * @return VoucherIds 是否已赋值
                     */
                    bool VoucherIdsHasBeenSet() const;

                    /**
                     * 获取私有网络ID。
                     * @return VpcId 私有网络ID。
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID。
                     * @param VpcId 私有网络ID。
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取私有网络子网ID。
                     * @return SubnetId 私有网络子网ID。
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置私有网络子网ID。
                     * @param SubnetId 私有网络子网ID。
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取续费标记：0-正常续费（默认）；1-自动续费；
                     * @return AutoRenewFlag 续费标记：0-正常续费（默认）；1-自动续费；
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置续费标记：0-正常续费（默认）；1-自动续费；
                     * @param AutoRenewFlag 续费标记：0-正常续费（默认）；1-自动续费；
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取活动ID
                     * @return ActivityId 活动ID
                     */
                    int64_t GetActivityId() const;

                    /**
                     * 设置活动ID
                     * @param ActivityId 活动ID
                     */
                    void SetActivityId(const int64_t& _activityId);

                    /**
                     * 判断参数 ActivityId 是否已赋值
                     * @return ActivityId 是否已赋值
                     */
                    bool ActivityIdHasBeenSet() const;

                    /**
                     * 获取实例名(后续支持)
                     * @return Name 实例名(后续支持)
                     */
                    std::string GetName() const;

                    /**
                     * 设置实例名(后续支持)
                     * @param Name 实例名(后续支持)
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 售卖规格ID。该参数可以通过调用DescribeProductConfig的返回值中的SpecCode字段来获取。
                     */
                    std::string m_specCode;
                    bool m_specCodeHasBeenSet;

                    /**
                     * PostgreSQL内核版本，目前支持：9.3.5、9.5.4、10.4三种版本。
                     */
                    std::string m_dBVersion;
                    bool m_dBVersionHasBeenSet;

                    /**
                     * 实例容量大小，单位：GB。
                     */
                    uint64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 一次性购买的实例数量。取值1-100
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * 购买时长，单位：月。目前只支持1,2,3,4,5,6,7,8,9,10,11,12,24,36这些值，按量计费模式下该参数传1。
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 可用区ID。该参数可以通过调用 DescribeZones 接口的返回值中的Zone字段来获取。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 项目ID。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 实例计费类型。目前支持：PREPAID（预付费，即包年包月），POSTPAID_BY_HOUR（后付费，即按量计费）。
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * 是否自动使用代金券。1（是），0（否），默认不使用。
                     */
                    uint64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * 代金券ID列表，目前仅支持指定一张代金券。
                     */
                    std::vector<std::string> m_voucherIds;
                    bool m_voucherIdsHasBeenSet;

                    /**
                     * 私有网络ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 私有网络子网ID。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 续费标记：0-正常续费（默认）；1-自动续费；
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 活动ID
                     */
                    int64_t m_activityId;
                    bool m_activityIdHasBeenSet;

                    /**
                     * 实例名(后续支持)
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEDBINSTANCESREQUEST_H_
