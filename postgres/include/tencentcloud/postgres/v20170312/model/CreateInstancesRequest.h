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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEINSTANCESREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEINSTANCESREQUEST_H_

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
                * CreateInstances请求参数结构体
                */
                class CreateInstancesRequest : public AbstractModel
                {
                public:
                    CreateInstancesRequest();
                    ~CreateInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取售卖规格ID。该参数可以通过调用DescribeClasses的返回值中的SpecCode字段来获取。
                     * @return SpecCode 售卖规格ID。该参数可以通过调用DescribeClasses的返回值中的SpecCode字段来获取。
                     * 
                     */
                    std::string GetSpecCode() const;

                    /**
                     * 设置售卖规格ID。该参数可以通过调用DescribeClasses的返回值中的SpecCode字段来获取。
                     * @param _specCode 售卖规格ID。该参数可以通过调用DescribeClasses的返回值中的SpecCode字段来获取。
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
                     * 获取一次性购买的实例数量。取值1-10。
                     * @return InstanceCount 一次性购买的实例数量。取值1-10。
                     * 
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置一次性购买的实例数量。取值1-10。
                     * @param _instanceCount 一次性购买的实例数量。取值1-10。
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
                     * 获取购买时长，单位：月。目前只支持1,2,3,4,5,6,7,8,9,10,11,12,24,36这些值，按量计费模式下该参数传1。
                     * @return Period 购买时长，单位：月。目前只支持1,2,3,4,5,6,7,8,9,10,11,12,24,36这些值，按量计费模式下该参数传1。
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置购买时长，单位：月。目前只支持1,2,3,4,5,6,7,8,9,10,11,12,24,36这些值，按量计费模式下该参数传1。
                     * @param _period 购买时长，单位：月。目前只支持1,2,3,4,5,6,7,8,9,10,11,12,24,36这些值，按量计费模式下该参数传1。
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
                     * 获取可用区ID。该参数可以通过调用 DescribeZones 接口的返回值中的Zone字段来获取。
                     * @return Zone 可用区ID。该参数可以通过调用 DescribeZones 接口的返回值中的Zone字段来获取。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区ID。该参数可以通过调用 DescribeZones 接口的返回值中的Zone字段来获取。
                     * @param _zone 可用区ID。该参数可以通过调用 DescribeZones 接口的返回值中的Zone字段来获取。
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
                     * 获取实例字符集，目前只支持：UTF8、LATIN1。
                     * @return Charset 实例字符集，目前只支持：UTF8、LATIN1。
                     * 
                     */
                    std::string GetCharset() const;

                    /**
                     * 设置实例字符集，目前只支持：UTF8、LATIN1。
                     * @param _charset 实例字符集，目前只支持：UTF8、LATIN1。
                     * 
                     */
                    void SetCharset(const std::string& _charset);

                    /**
                     * 判断参数 Charset 是否已赋值
                     * @return Charset 是否已赋值
                     * 
                     */
                    bool CharsetHasBeenSet() const;

                    /**
                     * 获取实例根账号用户名。
                     * @return AdminName 实例根账号用户名。
                     * 
                     */
                    std::string GetAdminName() const;

                    /**
                     * 设置实例根账号用户名。
                     * @param _adminName 实例根账号用户名。
                     * 
                     */
                    void SetAdminName(const std::string& _adminName);

                    /**
                     * 判断参数 AdminName 是否已赋值
                     * @return AdminName 是否已赋值
                     * 
                     */
                    bool AdminNameHasBeenSet() const;

                    /**
                     * 获取实例根账号用户名对应的密码。
                     * @return AdminPassword 实例根账号用户名对应的密码。
                     * 
                     */
                    std::string GetAdminPassword() const;

                    /**
                     * 设置实例根账号用户名对应的密码。
                     * @param _adminPassword 实例根账号用户名对应的密码。
                     * 
                     */
                    void SetAdminPassword(const std::string& _adminPassword);

                    /**
                     * 判断参数 AdminPassword 是否已赋值
                     * @return AdminPassword 是否已赋值
                     * 
                     */
                    bool AdminPasswordHasBeenSet() const;

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
                     * 获取PostgreSQL版本。当输入该参数时，会基于此版本创建对应的最新内核版本号实例。该参数和DBMajorVersion、DBKernelVersion至少需要传递一个。
                     * @return DBVersion PostgreSQL版本。当输入该参数时，会基于此版本创建对应的最新内核版本号实例。该参数和DBMajorVersion、DBKernelVersion至少需要传递一个。
                     * 
                     */
                    std::string GetDBVersion() const;

                    /**
                     * 设置PostgreSQL版本。当输入该参数时，会基于此版本创建对应的最新内核版本号实例。该参数和DBMajorVersion、DBKernelVersion至少需要传递一个。
                     * @param _dBVersion PostgreSQL版本。当输入该参数时，会基于此版本创建对应的最新内核版本号实例。该参数和DBMajorVersion、DBKernelVersion至少需要传递一个。
                     * 
                     */
                    void SetDBVersion(const std::string& _dBVersion);

                    /**
                     * 判断参数 DBVersion 是否已赋值
                     * @return DBVersion 是否已赋值
                     * 
                     */
                    bool DBVersionHasBeenSet() const;

                    /**
                     * 获取实例计费类型。目前支持：PREPAID（预付费，即包年包月），POSTPAID_BY_HOUR（后付费，即按量计费）。默认值：PREPAID。
                     * @return InstanceChargeType 实例计费类型。目前支持：PREPAID（预付费，即包年包月），POSTPAID_BY_HOUR（后付费，即按量计费）。默认值：PREPAID。
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置实例计费类型。目前支持：PREPAID（预付费，即包年包月），POSTPAID_BY_HOUR（后付费，即按量计费）。默认值：PREPAID。
                     * @param _instanceChargeType 实例计费类型。目前支持：PREPAID（预付费，即包年包月），POSTPAID_BY_HOUR（后付费，即按量计费）。默认值：PREPAID。
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
                     * 获取是否自动使用代金券。1（是），0（否），默认不使用。
                     * @return AutoVoucher 是否自动使用代金券。1（是），0（否），默认不使用。
                     * 
                     */
                    uint64_t GetAutoVoucher() const;

                    /**
                     * 设置是否自动使用代金券。1（是），0（否），默认不使用。
                     * @param _autoVoucher 是否自动使用代金券。1（是），0（否），默认不使用。
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
                     * 获取私有网络ID。
                     * @return VpcId 私有网络ID。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID。
                     * @param _vpcId 私有网络ID。
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
                     * 获取已配置的私有网络中的子网ID。
                     * @return SubnetId 已配置的私有网络中的子网ID。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置已配置的私有网络中的子网ID。
                     * @param _subnetId 已配置的私有网络中的子网ID。
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
                     * 获取续费标记：0-正常续费（默认）；1-自动续费。
                     * @return AutoRenewFlag 续费标记：0-正常续费（默认）；1-自动续费。
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置续费标记：0-正常续费（默认）；1-自动续费。
                     * @param _autoRenewFlag 续费标记：0-正常续费（默认）；1-自动续费。
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
                     * 获取实例名。
                     * @return Name 实例名。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置实例名。
                     * @param _name 实例名。
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
                     * 获取是否需要支持Ipv6，1：是，0：否（默认）。
                     * @return NeedSupportIpv6 是否需要支持Ipv6，1：是，0：否（默认）。
                     * 
                     */
                    uint64_t GetNeedSupportIpv6() const;

                    /**
                     * 设置是否需要支持Ipv6，1：是，0：否（默认）。
                     * @param _needSupportIpv6 是否需要支持Ipv6，1：是，0：否（默认）。
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
                     * 获取实例需要绑定的Tag信息，默认为空。
                     * @return TagList 实例需要绑定的Tag信息，默认为空。
                     * 
                     */
                    std::vector<Tag> GetTagList() const;

                    /**
                     * 设置实例需要绑定的Tag信息，默认为空。
                     * @param _tagList 实例需要绑定的Tag信息，默认为空。
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
                     * 获取安全组ID。
                     * @return SecurityGroupIds 安全组ID。
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置安全组ID。
                     * @param _securityGroupIds 安全组ID。
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
                     * 获取PostgreSQL主要版本。目前支持10，11，12，13这几个版本。当输入该参数时，会基于此版本创建对应的最新内核版本号实例。该参数和DBVersion、DBKernelVersion至少需要传递一个。
                     * @return DBMajorVersion PostgreSQL主要版本。目前支持10，11，12，13这几个版本。当输入该参数时，会基于此版本创建对应的最新内核版本号实例。该参数和DBVersion、DBKernelVersion至少需要传递一个。
                     * 
                     */
                    std::string GetDBMajorVersion() const;

                    /**
                     * 设置PostgreSQL主要版本。目前支持10，11，12，13这几个版本。当输入该参数时，会基于此版本创建对应的最新内核版本号实例。该参数和DBVersion、DBKernelVersion至少需要传递一个。
                     * @param _dBMajorVersion PostgreSQL主要版本。目前支持10，11，12，13这几个版本。当输入该参数时，会基于此版本创建对应的最新内核版本号实例。该参数和DBVersion、DBKernelVersion至少需要传递一个。
                     * 
                     */
                    void SetDBMajorVersion(const std::string& _dBMajorVersion);

                    /**
                     * 判断参数 DBMajorVersion 是否已赋值
                     * @return DBMajorVersion 是否已赋值
                     * 
                     */
                    bool DBMajorVersionHasBeenSet() const;

                    /**
                     * 获取PostgreSQL内核版本。当输入该参数时，会创建该内核版本号实例。该参数和DBVersion、DBMajorVersion至少需要传递一个。
                     * @return DBKernelVersion PostgreSQL内核版本。当输入该参数时，会创建该内核版本号实例。该参数和DBVersion、DBMajorVersion至少需要传递一个。
                     * 
                     */
                    std::string GetDBKernelVersion() const;

                    /**
                     * 设置PostgreSQL内核版本。当输入该参数时，会创建该内核版本号实例。该参数和DBVersion、DBMajorVersion至少需要传递一个。
                     * @param _dBKernelVersion PostgreSQL内核版本。当输入该参数时，会创建该内核版本号实例。该参数和DBVersion、DBMajorVersion至少需要传递一个。
                     * 
                     */
                    void SetDBKernelVersion(const std::string& _dBKernelVersion);

                    /**
                     * 判断参数 DBKernelVersion 是否已赋值
                     * @return DBKernelVersion 是否已赋值
                     * 
                     */
                    bool DBKernelVersionHasBeenSet() const;

                    /**
                     * 获取实例节点信息，购买跨可用区实例时填写。
                     * @return DBNodeSet 实例节点信息，购买跨可用区实例时填写。
                     * 
                     */
                    std::vector<DBNode> GetDBNodeSet() const;

                    /**
                     * 设置实例节点信息，购买跨可用区实例时填写。
                     * @param _dBNodeSet 实例节点信息，购买跨可用区实例时填写。
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
                     * 获取是否需要支持数据透明加密，1：是，0：否（默认）。
                     * @return NeedSupportTDE 是否需要支持数据透明加密，1：是，0：否（默认）。
                     * 
                     */
                    uint64_t GetNeedSupportTDE() const;

                    /**
                     * 设置是否需要支持数据透明加密，1：是，0：否（默认）。
                     * @param _needSupportTDE 是否需要支持数据透明加密，1：是，0：否（默认）。
                     * 
                     */
                    void SetNeedSupportTDE(const uint64_t& _needSupportTDE);

                    /**
                     * 判断参数 NeedSupportTDE 是否已赋值
                     * @return NeedSupportTDE 是否已赋值
                     * 
                     */
                    bool NeedSupportTDEHasBeenSet() const;

                    /**
                     * 获取自定义密钥的KeyId，若选择自定义密匙加密，则需要传入自定义密匙的KeyId，KeyId是CMK的唯一标识。
                     * @return KMSKeyId 自定义密钥的KeyId，若选择自定义密匙加密，则需要传入自定义密匙的KeyId，KeyId是CMK的唯一标识。
                     * 
                     */
                    std::string GetKMSKeyId() const;

                    /**
                     * 设置自定义密钥的KeyId，若选择自定义密匙加密，则需要传入自定义密匙的KeyId，KeyId是CMK的唯一标识。
                     * @param _kMSKeyId 自定义密钥的KeyId，若选择自定义密匙加密，则需要传入自定义密匙的KeyId，KeyId是CMK的唯一标识。
                     * 
                     */
                    void SetKMSKeyId(const std::string& _kMSKeyId);

                    /**
                     * 判断参数 KMSKeyId 是否已赋值
                     * @return KMSKeyId 是否已赋值
                     * 
                     */
                    bool KMSKeyIdHasBeenSet() const;

                    /**
                     * 获取使用KMS服务的地域，KMSRegion为空默认使用本地域的KMS，本地域不支持的情况下需自选其他KMS支持的地域。
                     * @return KMSRegion 使用KMS服务的地域，KMSRegion为空默认使用本地域的KMS，本地域不支持的情况下需自选其他KMS支持的地域。
                     * 
                     */
                    std::string GetKMSRegion() const;

                    /**
                     * 设置使用KMS服务的地域，KMSRegion为空默认使用本地域的KMS，本地域不支持的情况下需自选其他KMS支持的地域。
                     * @param _kMSRegion 使用KMS服务的地域，KMSRegion为空默认使用本地域的KMS，本地域不支持的情况下需自选其他KMS支持的地域。
                     * 
                     */
                    void SetKMSRegion(const std::string& _kMSRegion);

                    /**
                     * 判断参数 KMSRegion 是否已赋值
                     * @return KMSRegion 是否已赋值
                     * 
                     */
                    bool KMSRegionHasBeenSet() const;

                    /**
                     * 获取数据库引擎，支持：
1、postgresql（云数据库PostgreSQL）；
2、mssql_compatible（MSSQL兼容-云数据库PostgreSQL）；
如不指定默认使用postgresql。
                     * @return DBEngine 数据库引擎，支持：
1、postgresql（云数据库PostgreSQL）；
2、mssql_compatible（MSSQL兼容-云数据库PostgreSQL）；
如不指定默认使用postgresql。
                     * 
                     */
                    std::string GetDBEngine() const;

                    /**
                     * 设置数据库引擎，支持：
1、postgresql（云数据库PostgreSQL）；
2、mssql_compatible（MSSQL兼容-云数据库PostgreSQL）；
如不指定默认使用postgresql。
                     * @param _dBEngine 数据库引擎，支持：
1、postgresql（云数据库PostgreSQL）；
2、mssql_compatible（MSSQL兼容-云数据库PostgreSQL）；
如不指定默认使用postgresql。
                     * 
                     */
                    void SetDBEngine(const std::string& _dBEngine);

                    /**
                     * 判断参数 DBEngine 是否已赋值
                     * @return DBEngine 是否已赋值
                     * 
                     */
                    bool DBEngineHasBeenSet() const;

                    /**
                     * 获取数据库引擎的配置信息，配置格式如下：
{"$key1":"$value1", "$key2":"$value2"}

各引擎支持如下：
1、mssql_compatible引擎：
migrationMode：数据库模式，可选参数，可取值：single-db（单数据库模式），multi-db（多数据库模式）。默认为single-db。
defaultLocale：排序区域规则，可选参数，在初始化后不可修改，默认为en_US，可选值如下：
"af_ZA", "sq_AL", "ar_DZ", "ar_BH", "ar_EG", "ar_IQ", "ar_JO", "ar_KW", "ar_LB", "ar_LY", "ar_MA", "ar_OM", "ar_QA", "ar_SA", "ar_SY", "ar_TN", "ar_AE", "ar_YE", "hy_AM", "az_Cyrl_AZ", "az_Latn_AZ", "eu_ES", "be_BY", "bg_BG", "ca_ES", "zh_HK", "zh_MO", "zh_CN", "zh_SG", "zh_TW", "hr_HR", "cs_CZ", "da_DK", "nl_BE", "nl_NL", "en_AU", "en_BZ", "en_CA", "en_IE", "en_JM", "en_NZ", "en_PH", "en_ZA", "en_TT", "en_GB", "en_US", "en_ZW", "et_EE", "fo_FO", "fa_IR", "fi_FI", "fr_BE", "fr_CA", "fr_FR", "fr_LU", "fr_MC", "fr_CH", "mk_MK", "ka_GE", "de_AT", "de_DE", "de_LI", "de_LU", "de_CH", "el_GR", "gu_IN", "he_IL", "hi_IN", "hu_HU", "is_IS", "id_ID", "it_IT", "it_CH", "ja_JP", "kn_IN", "kok_IN", "ko_KR", "ky_KG", "lv_LV", "lt_LT", "ms_BN", "ms_MY", "mr_IN", "mn_MN", "nb_NO", "nn_NO", "pl_PL", "pt_BR", "pt_PT", "pa_IN", "ro_RO", "ru_RU", "sa_IN", "sr_Cyrl_RS", "sr_Latn_RS", "sk_SK", "sl_SI", "es_AR", "es_BO", "es_CL", "es_CO", "es_CR", "es_DO", "es_EC", "es_SV", "es_GT", "es_HN", "es_MX", "es_NI", "es_PA", "es_PY","es_PE", "es_PR", "es_ES", "es_TRADITIONAL", "es_UY", "es_VE", "sw_KE", "sv_FI", "sv_SE", "tt_RU", "te_IN", "th_TH", "tr_TR", "uk_UA", "ur_IN", "ur_PK", "uz_Cyrl_UZ", "uz_Latn_UZ", "vi_VN"。
serverCollationName：排序规则名称，可选参数，在初始化后不可修改，默认为sql_latin1_general_cp1_ci_as，可选值如下：
"bbf_unicode_general_ci_as", "bbf_unicode_cp1_ci_as", "bbf_unicode_CP1250_ci_as", "bbf_unicode_CP1251_ci_as", "bbf_unicode_cp1253_ci_as", "bbf_unicode_cp1254_ci_as", "bbf_unicode_cp1255_ci_as", "bbf_unicode_cp1256_ci_as", "bbf_unicode_cp1257_ci_as", "bbf_unicode_cp1258_ci_as", "bbf_unicode_cp874_ci_as", "sql_latin1_general_cp1250_ci_as", "sql_latin1_general_cp1251_ci_as", "sql_latin1_general_cp1_ci_as", "sql_latin1_general_cp1253_ci_as", "sql_latin1_general_cp1254_ci_as", "sql_latin1_general_cp1255_ci_as","sql_latin1_general_cp1256_ci_as", "sql_latin1_general_cp1257_ci_as", "sql_latin1_general_cp1258_ci_as", "chinese_prc_ci_as", "cyrillic_general_ci_as", "finnish_swedish_ci_as", "french_ci_as", "japanese_ci_as", "korean_wansung_ci_as", "latin1_general_ci_as", "modern_spanish_ci_as", "polish_ci_as", "thai_ci_as", "traditional_spanish_ci_as", "turkish_ci_as", "ukrainian_ci_as", "vietnamese_ci_as"。
                     * @return DBEngineConfig 数据库引擎的配置信息，配置格式如下：
{"$key1":"$value1", "$key2":"$value2"}

各引擎支持如下：
1、mssql_compatible引擎：
migrationMode：数据库模式，可选参数，可取值：single-db（单数据库模式），multi-db（多数据库模式）。默认为single-db。
defaultLocale：排序区域规则，可选参数，在初始化后不可修改，默认为en_US，可选值如下：
"af_ZA", "sq_AL", "ar_DZ", "ar_BH", "ar_EG", "ar_IQ", "ar_JO", "ar_KW", "ar_LB", "ar_LY", "ar_MA", "ar_OM", "ar_QA", "ar_SA", "ar_SY", "ar_TN", "ar_AE", "ar_YE", "hy_AM", "az_Cyrl_AZ", "az_Latn_AZ", "eu_ES", "be_BY", "bg_BG", "ca_ES", "zh_HK", "zh_MO", "zh_CN", "zh_SG", "zh_TW", "hr_HR", "cs_CZ", "da_DK", "nl_BE", "nl_NL", "en_AU", "en_BZ", "en_CA", "en_IE", "en_JM", "en_NZ", "en_PH", "en_ZA", "en_TT", "en_GB", "en_US", "en_ZW", "et_EE", "fo_FO", "fa_IR", "fi_FI", "fr_BE", "fr_CA", "fr_FR", "fr_LU", "fr_MC", "fr_CH", "mk_MK", "ka_GE", "de_AT", "de_DE", "de_LI", "de_LU", "de_CH", "el_GR", "gu_IN", "he_IL", "hi_IN", "hu_HU", "is_IS", "id_ID", "it_IT", "it_CH", "ja_JP", "kn_IN", "kok_IN", "ko_KR", "ky_KG", "lv_LV", "lt_LT", "ms_BN", "ms_MY", "mr_IN", "mn_MN", "nb_NO", "nn_NO", "pl_PL", "pt_BR", "pt_PT", "pa_IN", "ro_RO", "ru_RU", "sa_IN", "sr_Cyrl_RS", "sr_Latn_RS", "sk_SK", "sl_SI", "es_AR", "es_BO", "es_CL", "es_CO", "es_CR", "es_DO", "es_EC", "es_SV", "es_GT", "es_HN", "es_MX", "es_NI", "es_PA", "es_PY","es_PE", "es_PR", "es_ES", "es_TRADITIONAL", "es_UY", "es_VE", "sw_KE", "sv_FI", "sv_SE", "tt_RU", "te_IN", "th_TH", "tr_TR", "uk_UA", "ur_IN", "ur_PK", "uz_Cyrl_UZ", "uz_Latn_UZ", "vi_VN"。
serverCollationName：排序规则名称，可选参数，在初始化后不可修改，默认为sql_latin1_general_cp1_ci_as，可选值如下：
"bbf_unicode_general_ci_as", "bbf_unicode_cp1_ci_as", "bbf_unicode_CP1250_ci_as", "bbf_unicode_CP1251_ci_as", "bbf_unicode_cp1253_ci_as", "bbf_unicode_cp1254_ci_as", "bbf_unicode_cp1255_ci_as", "bbf_unicode_cp1256_ci_as", "bbf_unicode_cp1257_ci_as", "bbf_unicode_cp1258_ci_as", "bbf_unicode_cp874_ci_as", "sql_latin1_general_cp1250_ci_as", "sql_latin1_general_cp1251_ci_as", "sql_latin1_general_cp1_ci_as", "sql_latin1_general_cp1253_ci_as", "sql_latin1_general_cp1254_ci_as", "sql_latin1_general_cp1255_ci_as","sql_latin1_general_cp1256_ci_as", "sql_latin1_general_cp1257_ci_as", "sql_latin1_general_cp1258_ci_as", "chinese_prc_ci_as", "cyrillic_general_ci_as", "finnish_swedish_ci_as", "french_ci_as", "japanese_ci_as", "korean_wansung_ci_as", "latin1_general_ci_as", "modern_spanish_ci_as", "polish_ci_as", "thai_ci_as", "traditional_spanish_ci_as", "turkish_ci_as", "ukrainian_ci_as", "vietnamese_ci_as"。
                     * 
                     */
                    std::string GetDBEngineConfig() const;

                    /**
                     * 设置数据库引擎的配置信息，配置格式如下：
{"$key1":"$value1", "$key2":"$value2"}

各引擎支持如下：
1、mssql_compatible引擎：
migrationMode：数据库模式，可选参数，可取值：single-db（单数据库模式），multi-db（多数据库模式）。默认为single-db。
defaultLocale：排序区域规则，可选参数，在初始化后不可修改，默认为en_US，可选值如下：
"af_ZA", "sq_AL", "ar_DZ", "ar_BH", "ar_EG", "ar_IQ", "ar_JO", "ar_KW", "ar_LB", "ar_LY", "ar_MA", "ar_OM", "ar_QA", "ar_SA", "ar_SY", "ar_TN", "ar_AE", "ar_YE", "hy_AM", "az_Cyrl_AZ", "az_Latn_AZ", "eu_ES", "be_BY", "bg_BG", "ca_ES", "zh_HK", "zh_MO", "zh_CN", "zh_SG", "zh_TW", "hr_HR", "cs_CZ", "da_DK", "nl_BE", "nl_NL", "en_AU", "en_BZ", "en_CA", "en_IE", "en_JM", "en_NZ", "en_PH", "en_ZA", "en_TT", "en_GB", "en_US", "en_ZW", "et_EE", "fo_FO", "fa_IR", "fi_FI", "fr_BE", "fr_CA", "fr_FR", "fr_LU", "fr_MC", "fr_CH", "mk_MK", "ka_GE", "de_AT", "de_DE", "de_LI", "de_LU", "de_CH", "el_GR", "gu_IN", "he_IL", "hi_IN", "hu_HU", "is_IS", "id_ID", "it_IT", "it_CH", "ja_JP", "kn_IN", "kok_IN", "ko_KR", "ky_KG", "lv_LV", "lt_LT", "ms_BN", "ms_MY", "mr_IN", "mn_MN", "nb_NO", "nn_NO", "pl_PL", "pt_BR", "pt_PT", "pa_IN", "ro_RO", "ru_RU", "sa_IN", "sr_Cyrl_RS", "sr_Latn_RS", "sk_SK", "sl_SI", "es_AR", "es_BO", "es_CL", "es_CO", "es_CR", "es_DO", "es_EC", "es_SV", "es_GT", "es_HN", "es_MX", "es_NI", "es_PA", "es_PY","es_PE", "es_PR", "es_ES", "es_TRADITIONAL", "es_UY", "es_VE", "sw_KE", "sv_FI", "sv_SE", "tt_RU", "te_IN", "th_TH", "tr_TR", "uk_UA", "ur_IN", "ur_PK", "uz_Cyrl_UZ", "uz_Latn_UZ", "vi_VN"。
serverCollationName：排序规则名称，可选参数，在初始化后不可修改，默认为sql_latin1_general_cp1_ci_as，可选值如下：
"bbf_unicode_general_ci_as", "bbf_unicode_cp1_ci_as", "bbf_unicode_CP1250_ci_as", "bbf_unicode_CP1251_ci_as", "bbf_unicode_cp1253_ci_as", "bbf_unicode_cp1254_ci_as", "bbf_unicode_cp1255_ci_as", "bbf_unicode_cp1256_ci_as", "bbf_unicode_cp1257_ci_as", "bbf_unicode_cp1258_ci_as", "bbf_unicode_cp874_ci_as", "sql_latin1_general_cp1250_ci_as", "sql_latin1_general_cp1251_ci_as", "sql_latin1_general_cp1_ci_as", "sql_latin1_general_cp1253_ci_as", "sql_latin1_general_cp1254_ci_as", "sql_latin1_general_cp1255_ci_as","sql_latin1_general_cp1256_ci_as", "sql_latin1_general_cp1257_ci_as", "sql_latin1_general_cp1258_ci_as", "chinese_prc_ci_as", "cyrillic_general_ci_as", "finnish_swedish_ci_as", "french_ci_as", "japanese_ci_as", "korean_wansung_ci_as", "latin1_general_ci_as", "modern_spanish_ci_as", "polish_ci_as", "thai_ci_as", "traditional_spanish_ci_as", "turkish_ci_as", "ukrainian_ci_as", "vietnamese_ci_as"。
                     * @param _dBEngineConfig 数据库引擎的配置信息，配置格式如下：
{"$key1":"$value1", "$key2":"$value2"}

各引擎支持如下：
1、mssql_compatible引擎：
migrationMode：数据库模式，可选参数，可取值：single-db（单数据库模式），multi-db（多数据库模式）。默认为single-db。
defaultLocale：排序区域规则，可选参数，在初始化后不可修改，默认为en_US，可选值如下：
"af_ZA", "sq_AL", "ar_DZ", "ar_BH", "ar_EG", "ar_IQ", "ar_JO", "ar_KW", "ar_LB", "ar_LY", "ar_MA", "ar_OM", "ar_QA", "ar_SA", "ar_SY", "ar_TN", "ar_AE", "ar_YE", "hy_AM", "az_Cyrl_AZ", "az_Latn_AZ", "eu_ES", "be_BY", "bg_BG", "ca_ES", "zh_HK", "zh_MO", "zh_CN", "zh_SG", "zh_TW", "hr_HR", "cs_CZ", "da_DK", "nl_BE", "nl_NL", "en_AU", "en_BZ", "en_CA", "en_IE", "en_JM", "en_NZ", "en_PH", "en_ZA", "en_TT", "en_GB", "en_US", "en_ZW", "et_EE", "fo_FO", "fa_IR", "fi_FI", "fr_BE", "fr_CA", "fr_FR", "fr_LU", "fr_MC", "fr_CH", "mk_MK", "ka_GE", "de_AT", "de_DE", "de_LI", "de_LU", "de_CH", "el_GR", "gu_IN", "he_IL", "hi_IN", "hu_HU", "is_IS", "id_ID", "it_IT", "it_CH", "ja_JP", "kn_IN", "kok_IN", "ko_KR", "ky_KG", "lv_LV", "lt_LT", "ms_BN", "ms_MY", "mr_IN", "mn_MN", "nb_NO", "nn_NO", "pl_PL", "pt_BR", "pt_PT", "pa_IN", "ro_RO", "ru_RU", "sa_IN", "sr_Cyrl_RS", "sr_Latn_RS", "sk_SK", "sl_SI", "es_AR", "es_BO", "es_CL", "es_CO", "es_CR", "es_DO", "es_EC", "es_SV", "es_GT", "es_HN", "es_MX", "es_NI", "es_PA", "es_PY","es_PE", "es_PR", "es_ES", "es_TRADITIONAL", "es_UY", "es_VE", "sw_KE", "sv_FI", "sv_SE", "tt_RU", "te_IN", "th_TH", "tr_TR", "uk_UA", "ur_IN", "ur_PK", "uz_Cyrl_UZ", "uz_Latn_UZ", "vi_VN"。
serverCollationName：排序规则名称，可选参数，在初始化后不可修改，默认为sql_latin1_general_cp1_ci_as，可选值如下：
"bbf_unicode_general_ci_as", "bbf_unicode_cp1_ci_as", "bbf_unicode_CP1250_ci_as", "bbf_unicode_CP1251_ci_as", "bbf_unicode_cp1253_ci_as", "bbf_unicode_cp1254_ci_as", "bbf_unicode_cp1255_ci_as", "bbf_unicode_cp1256_ci_as", "bbf_unicode_cp1257_ci_as", "bbf_unicode_cp1258_ci_as", "bbf_unicode_cp874_ci_as", "sql_latin1_general_cp1250_ci_as", "sql_latin1_general_cp1251_ci_as", "sql_latin1_general_cp1_ci_as", "sql_latin1_general_cp1253_ci_as", "sql_latin1_general_cp1254_ci_as", "sql_latin1_general_cp1255_ci_as","sql_latin1_general_cp1256_ci_as", "sql_latin1_general_cp1257_ci_as", "sql_latin1_general_cp1258_ci_as", "chinese_prc_ci_as", "cyrillic_general_ci_as", "finnish_swedish_ci_as", "french_ci_as", "japanese_ci_as", "korean_wansung_ci_as", "latin1_general_ci_as", "modern_spanish_ci_as", "polish_ci_as", "thai_ci_as", "traditional_spanish_ci_as", "turkish_ci_as", "ukrainian_ci_as", "vietnamese_ci_as"。
                     * 
                     */
                    void SetDBEngineConfig(const std::string& _dBEngineConfig);

                    /**
                     * 判断参数 DBEngineConfig 是否已赋值
                     * @return DBEngineConfig 是否已赋值
                     * 
                     */
                    bool DBEngineConfigHasBeenSet() const;

                    /**
                     * 获取主从同步方式，取值： 1)Semi-sync：半同步 2)Async：异步 默认为Async
                     * @return SyncMode 主从同步方式，取值： 1)Semi-sync：半同步 2)Async：异步 默认为Async
                     * 
                     */
                    std::string GetSyncMode() const;

                    /**
                     * 设置主从同步方式，取值： 1)Semi-sync：半同步 2)Async：异步 默认为Async
                     * @param _syncMode 主从同步方式，取值： 1)Semi-sync：半同步 2)Async：异步 默认为Async
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
                     * 售卖规格ID。该参数可以通过调用DescribeClasses的返回值中的SpecCode字段来获取。
                     */
                    std::string m_specCode;
                    bool m_specCodeHasBeenSet;

                    /**
                     * 实例容量大小，单位：GB。
                     */
                    uint64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 一次性购买的实例数量。取值1-10。
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
                     * 实例字符集，目前只支持：UTF8、LATIN1。
                     */
                    std::string m_charset;
                    bool m_charsetHasBeenSet;

                    /**
                     * 实例根账号用户名。
                     */
                    std::string m_adminName;
                    bool m_adminNameHasBeenSet;

                    /**
                     * 实例根账号用户名对应的密码。
                     */
                    std::string m_adminPassword;
                    bool m_adminPasswordHasBeenSet;

                    /**
                     * 项目ID。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * PostgreSQL版本。当输入该参数时，会基于此版本创建对应的最新内核版本号实例。该参数和DBMajorVersion、DBKernelVersion至少需要传递一个。
                     */
                    std::string m_dBVersion;
                    bool m_dBVersionHasBeenSet;

                    /**
                     * 实例计费类型。目前支持：PREPAID（预付费，即包年包月），POSTPAID_BY_HOUR（后付费，即按量计费）。默认值：PREPAID。
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
                     * 已配置的私有网络中的子网ID。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 续费标记：0-正常续费（默认）；1-自动续费。
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 活动ID。
                     */
                    int64_t m_activityId;
                    bool m_activityIdHasBeenSet;

                    /**
                     * 实例名。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 是否需要支持Ipv6，1：是，0：否（默认）。
                     */
                    uint64_t m_needSupportIpv6;
                    bool m_needSupportIpv6HasBeenSet;

                    /**
                     * 实例需要绑定的Tag信息，默认为空。
                     */
                    std::vector<Tag> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * 安全组ID。
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * PostgreSQL主要版本。目前支持10，11，12，13这几个版本。当输入该参数时，会基于此版本创建对应的最新内核版本号实例。该参数和DBVersion、DBKernelVersion至少需要传递一个。
                     */
                    std::string m_dBMajorVersion;
                    bool m_dBMajorVersionHasBeenSet;

                    /**
                     * PostgreSQL内核版本。当输入该参数时，会创建该内核版本号实例。该参数和DBVersion、DBMajorVersion至少需要传递一个。
                     */
                    std::string m_dBKernelVersion;
                    bool m_dBKernelVersionHasBeenSet;

                    /**
                     * 实例节点信息，购买跨可用区实例时填写。
                     */
                    std::vector<DBNode> m_dBNodeSet;
                    bool m_dBNodeSetHasBeenSet;

                    /**
                     * 是否需要支持数据透明加密，1：是，0：否（默认）。
                     */
                    uint64_t m_needSupportTDE;
                    bool m_needSupportTDEHasBeenSet;

                    /**
                     * 自定义密钥的KeyId，若选择自定义密匙加密，则需要传入自定义密匙的KeyId，KeyId是CMK的唯一标识。
                     */
                    std::string m_kMSKeyId;
                    bool m_kMSKeyIdHasBeenSet;

                    /**
                     * 使用KMS服务的地域，KMSRegion为空默认使用本地域的KMS，本地域不支持的情况下需自选其他KMS支持的地域。
                     */
                    std::string m_kMSRegion;
                    bool m_kMSRegionHasBeenSet;

                    /**
                     * 数据库引擎，支持：
1、postgresql（云数据库PostgreSQL）；
2、mssql_compatible（MSSQL兼容-云数据库PostgreSQL）；
如不指定默认使用postgresql。
                     */
                    std::string m_dBEngine;
                    bool m_dBEngineHasBeenSet;

                    /**
                     * 数据库引擎的配置信息，配置格式如下：
{"$key1":"$value1", "$key2":"$value2"}

各引擎支持如下：
1、mssql_compatible引擎：
migrationMode：数据库模式，可选参数，可取值：single-db（单数据库模式），multi-db（多数据库模式）。默认为single-db。
defaultLocale：排序区域规则，可选参数，在初始化后不可修改，默认为en_US，可选值如下：
"af_ZA", "sq_AL", "ar_DZ", "ar_BH", "ar_EG", "ar_IQ", "ar_JO", "ar_KW", "ar_LB", "ar_LY", "ar_MA", "ar_OM", "ar_QA", "ar_SA", "ar_SY", "ar_TN", "ar_AE", "ar_YE", "hy_AM", "az_Cyrl_AZ", "az_Latn_AZ", "eu_ES", "be_BY", "bg_BG", "ca_ES", "zh_HK", "zh_MO", "zh_CN", "zh_SG", "zh_TW", "hr_HR", "cs_CZ", "da_DK", "nl_BE", "nl_NL", "en_AU", "en_BZ", "en_CA", "en_IE", "en_JM", "en_NZ", "en_PH", "en_ZA", "en_TT", "en_GB", "en_US", "en_ZW", "et_EE", "fo_FO", "fa_IR", "fi_FI", "fr_BE", "fr_CA", "fr_FR", "fr_LU", "fr_MC", "fr_CH", "mk_MK", "ka_GE", "de_AT", "de_DE", "de_LI", "de_LU", "de_CH", "el_GR", "gu_IN", "he_IL", "hi_IN", "hu_HU", "is_IS", "id_ID", "it_IT", "it_CH", "ja_JP", "kn_IN", "kok_IN", "ko_KR", "ky_KG", "lv_LV", "lt_LT", "ms_BN", "ms_MY", "mr_IN", "mn_MN", "nb_NO", "nn_NO", "pl_PL", "pt_BR", "pt_PT", "pa_IN", "ro_RO", "ru_RU", "sa_IN", "sr_Cyrl_RS", "sr_Latn_RS", "sk_SK", "sl_SI", "es_AR", "es_BO", "es_CL", "es_CO", "es_CR", "es_DO", "es_EC", "es_SV", "es_GT", "es_HN", "es_MX", "es_NI", "es_PA", "es_PY","es_PE", "es_PR", "es_ES", "es_TRADITIONAL", "es_UY", "es_VE", "sw_KE", "sv_FI", "sv_SE", "tt_RU", "te_IN", "th_TH", "tr_TR", "uk_UA", "ur_IN", "ur_PK", "uz_Cyrl_UZ", "uz_Latn_UZ", "vi_VN"。
serverCollationName：排序规则名称，可选参数，在初始化后不可修改，默认为sql_latin1_general_cp1_ci_as，可选值如下：
"bbf_unicode_general_ci_as", "bbf_unicode_cp1_ci_as", "bbf_unicode_CP1250_ci_as", "bbf_unicode_CP1251_ci_as", "bbf_unicode_cp1253_ci_as", "bbf_unicode_cp1254_ci_as", "bbf_unicode_cp1255_ci_as", "bbf_unicode_cp1256_ci_as", "bbf_unicode_cp1257_ci_as", "bbf_unicode_cp1258_ci_as", "bbf_unicode_cp874_ci_as", "sql_latin1_general_cp1250_ci_as", "sql_latin1_general_cp1251_ci_as", "sql_latin1_general_cp1_ci_as", "sql_latin1_general_cp1253_ci_as", "sql_latin1_general_cp1254_ci_as", "sql_latin1_general_cp1255_ci_as","sql_latin1_general_cp1256_ci_as", "sql_latin1_general_cp1257_ci_as", "sql_latin1_general_cp1258_ci_as", "chinese_prc_ci_as", "cyrillic_general_ci_as", "finnish_swedish_ci_as", "french_ci_as", "japanese_ci_as", "korean_wansung_ci_as", "latin1_general_ci_as", "modern_spanish_ci_as", "polish_ci_as", "thai_ci_as", "traditional_spanish_ci_as", "turkish_ci_as", "ukrainian_ci_as", "vietnamese_ci_as"。
                     */
                    std::string m_dBEngineConfig;
                    bool m_dBEngineConfigHasBeenSet;

                    /**
                     * 主从同步方式，取值： 1)Semi-sync：半同步 2)Async：异步 默认为Async
                     */
                    std::string m_syncMode;
                    bool m_syncModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEINSTANCESREQUEST_H_
