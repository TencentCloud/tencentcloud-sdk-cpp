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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DBINSTANCE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DBINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/DBInstanceNetInfo.h>
#include <tencentcloud/postgres/v20170312/model/Tag.h>
#include <tencentcloud/postgres/v20170312/model/DBNode.h>
#include <tencentcloud/postgres/v20170312/model/NetworkAccess.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 描述实例的详细信息
                */
                class DBInstance : public AbstractModel
                {
                public:
                    DBInstance();
                    ~DBInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实例所属地域，如: ap-guangzhou，对应RegionSet的Region字段。</p>
                     * @return Region <p>实例所属地域，如: ap-guangzhou，对应RegionSet的Region字段。</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>实例所属地域，如: ap-guangzhou，对应RegionSet的Region字段。</p>
                     * @param _region <p>实例所属地域，如: ap-guangzhou，对应RegionSet的Region字段。</p>
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
                     * 获取<p>实例所属可用区， 如：ap-guangzhou-3，对应ZoneSet的Zone字段。</p>
                     * @return Zone <p>实例所属可用区， 如：ap-guangzhou-3，对应ZoneSet的Zone字段。</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>实例所属可用区， 如：ap-guangzhou-3，对应ZoneSet的Zone字段。</p>
                     * @param _zone <p>实例所属可用区， 如：ap-guangzhou-3，对应ZoneSet的Zone字段。</p>
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
                     * 获取<p>私有网络ID，形如vpc-e6w23k31。有效的VpcId可通过登录控制台查询；也可以调用接口 <a href="https://cloud.tencent.com/document/api/215/15778">DescribeVpcs</a> ，从接口返回中的unVpcId字段获取。</p>
                     * @return VpcId <p>私有网络ID，形如vpc-e6w23k31。有效的VpcId可通过登录控制台查询；也可以调用接口 <a href="https://cloud.tencent.com/document/api/215/15778">DescribeVpcs</a> ，从接口返回中的unVpcId字段获取。</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>私有网络ID，形如vpc-e6w23k31。有效的VpcId可通过登录控制台查询；也可以调用接口 <a href="https://cloud.tencent.com/document/api/215/15778">DescribeVpcs</a> ，从接口返回中的unVpcId字段获取。</p>
                     * @param _vpcId <p>私有网络ID，形如vpc-e6w23k31。有效的VpcId可通过登录控制台查询；也可以调用接口 <a href="https://cloud.tencent.com/document/api/215/15778">DescribeVpcs</a> ，从接口返回中的unVpcId字段获取。</p>
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
                     * 获取<p>私有网络子网ID，形如subnet-51lcif9y。有效的私有网络子网ID可通过登录控制台查询；也可以调用接口 <a href="https://cloud.tencent.com/document/api/215/15784">DescribeSubnets </a>，从接口返回中的unSubnetId字段获取。</p>
                     * @return SubnetId <p>私有网络子网ID，形如subnet-51lcif9y。有效的私有网络子网ID可通过登录控制台查询；也可以调用接口 <a href="https://cloud.tencent.com/document/api/215/15784">DescribeSubnets </a>，从接口返回中的unSubnetId字段获取。</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>私有网络子网ID，形如subnet-51lcif9y。有效的私有网络子网ID可通过登录控制台查询；也可以调用接口 <a href="https://cloud.tencent.com/document/api/215/15784">DescribeSubnets </a>，从接口返回中的unSubnetId字段获取。</p>
                     * @param _subnetId <p>私有网络子网ID，形如subnet-51lcif9y。有效的私有网络子网ID可通过登录控制台查询；也可以调用接口 <a href="https://cloud.tencent.com/document/api/215/15784">DescribeSubnets </a>，从接口返回中的unSubnetId字段获取。</p>
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
                     * 获取<p>实例ID。</p>
                     * @return DBInstanceId <p>实例ID。</p>
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置<p>实例ID。</p>
                     * @param _dBInstanceId <p>实例ID。</p>
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
                     * 获取<p>实例名称。</p>
                     * @return DBInstanceName <p>实例名称。</p>
                     * 
                     */
                    std::string GetDBInstanceName() const;

                    /**
                     * 设置<p>实例名称。</p>
                     * @param _dBInstanceName <p>实例名称。</p>
                     * 
                     */
                    void SetDBInstanceName(const std::string& _dBInstanceName);

                    /**
                     * 判断参数 DBInstanceName 是否已赋值
                     * @return DBInstanceName 是否已赋值
                     * 
                     */
                    bool DBInstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>实例状态，分别为：applying（申请中）、init(待初始化)、initing(初始化中)、running(运行中)、limited run（受限运行）、isolating（隔离中）、isolated（已隔离）、disisolating（解隔离中）、recycling（回收中）、recycled（已回收）、job running（任务执行中）、offline（下线）、migrating（迁移中）、expanding（扩容中）、waitSwitch（等待切换）、switching（切换中）、readonly（只读）、restarting（重启中）、network changing（网络变更中）、upgrading（内核版本升级中）、audit-switching（审计状态变更中）、primary-switching（主备切换中）、offlining(下线中)、deployment changing（可用区变更中）、cloning（恢复数据中）、parameter modifying（参数修改中）、log-switching（日志状态变更中）、restoring（恢复中）、expanding（变配中）</p>
                     * @return DBInstanceStatus <p>实例状态，分别为：applying（申请中）、init(待初始化)、initing(初始化中)、running(运行中)、limited run（受限运行）、isolating（隔离中）、isolated（已隔离）、disisolating（解隔离中）、recycling（回收中）、recycled（已回收）、job running（任务执行中）、offline（下线）、migrating（迁移中）、expanding（扩容中）、waitSwitch（等待切换）、switching（切换中）、readonly（只读）、restarting（重启中）、network changing（网络变更中）、upgrading（内核版本升级中）、audit-switching（审计状态变更中）、primary-switching（主备切换中）、offlining(下线中)、deployment changing（可用区变更中）、cloning（恢复数据中）、parameter modifying（参数修改中）、log-switching（日志状态变更中）、restoring（恢复中）、expanding（变配中）</p>
                     * 
                     */
                    std::string GetDBInstanceStatus() const;

                    /**
                     * 设置<p>实例状态，分别为：applying（申请中）、init(待初始化)、initing(初始化中)、running(运行中)、limited run（受限运行）、isolating（隔离中）、isolated（已隔离）、disisolating（解隔离中）、recycling（回收中）、recycled（已回收）、job running（任务执行中）、offline（下线）、migrating（迁移中）、expanding（扩容中）、waitSwitch（等待切换）、switching（切换中）、readonly（只读）、restarting（重启中）、network changing（网络变更中）、upgrading（内核版本升级中）、audit-switching（审计状态变更中）、primary-switching（主备切换中）、offlining(下线中)、deployment changing（可用区变更中）、cloning（恢复数据中）、parameter modifying（参数修改中）、log-switching（日志状态变更中）、restoring（恢复中）、expanding（变配中）</p>
                     * @param _dBInstanceStatus <p>实例状态，分别为：applying（申请中）、init(待初始化)、initing(初始化中)、running(运行中)、limited run（受限运行）、isolating（隔离中）、isolated（已隔离）、disisolating（解隔离中）、recycling（回收中）、recycled（已回收）、job running（任务执行中）、offline（下线）、migrating（迁移中）、expanding（扩容中）、waitSwitch（等待切换）、switching（切换中）、readonly（只读）、restarting（重启中）、network changing（网络变更中）、upgrading（内核版本升级中）、audit-switching（审计状态变更中）、primary-switching（主备切换中）、offlining(下线中)、deployment changing（可用区变更中）、cloning（恢复数据中）、parameter modifying（参数修改中）、log-switching（日志状态变更中）、restoring（恢复中）、expanding（变配中）</p>
                     * 
                     */
                    void SetDBInstanceStatus(const std::string& _dBInstanceStatus);

                    /**
                     * 判断参数 DBInstanceStatus 是否已赋值
                     * @return DBInstanceStatus 是否已赋值
                     * 
                     */
                    bool DBInstanceStatusHasBeenSet() const;

                    /**
                     * 获取<p>实例分配的内存大小，单位：GB</p>
                     * @return DBInstanceMemory <p>实例分配的内存大小，单位：GB</p>
                     * 
                     */
                    uint64_t GetDBInstanceMemory() const;

                    /**
                     * 设置<p>实例分配的内存大小，单位：GB</p>
                     * @param _dBInstanceMemory <p>实例分配的内存大小，单位：GB</p>
                     * 
                     */
                    void SetDBInstanceMemory(const uint64_t& _dBInstanceMemory);

                    /**
                     * 判断参数 DBInstanceMemory 是否已赋值
                     * @return DBInstanceMemory 是否已赋值
                     * 
                     */
                    bool DBInstanceMemoryHasBeenSet() const;

                    /**
                     * 获取<p>实例分配的存储空间大小，单位：GB</p>
                     * @return DBInstanceStorage <p>实例分配的存储空间大小，单位：GB</p>
                     * 
                     */
                    uint64_t GetDBInstanceStorage() const;

                    /**
                     * 设置<p>实例分配的存储空间大小，单位：GB</p>
                     * @param _dBInstanceStorage <p>实例分配的存储空间大小，单位：GB</p>
                     * 
                     */
                    void SetDBInstanceStorage(const uint64_t& _dBInstanceStorage);

                    /**
                     * 判断参数 DBInstanceStorage 是否已赋值
                     * @return DBInstanceStorage 是否已赋值
                     * 
                     */
                    bool DBInstanceStorageHasBeenSet() const;

                    /**
                     * 获取<p>实例分配的CPU数量，单位：个</p>
                     * @return DBInstanceCpu <p>实例分配的CPU数量，单位：个</p>
                     * 
                     */
                    uint64_t GetDBInstanceCpu() const;

                    /**
                     * 设置<p>实例分配的CPU数量，单位：个</p>
                     * @param _dBInstanceCpu <p>实例分配的CPU数量，单位：个</p>
                     * 
                     */
                    void SetDBInstanceCpu(const uint64_t& _dBInstanceCpu);

                    /**
                     * 判断参数 DBInstanceCpu 是否已赋值
                     * @return DBInstanceCpu 是否已赋值
                     * 
                     */
                    bool DBInstanceCpuHasBeenSet() const;

                    /**
                     * 获取<p>售卖规格ID</p>
                     * @return DBInstanceClass <p>售卖规格ID</p>
                     * 
                     */
                    std::string GetDBInstanceClass() const;

                    /**
                     * 设置<p>售卖规格ID</p>
                     * @param _dBInstanceClass <p>售卖规格ID</p>
                     * 
                     */
                    void SetDBInstanceClass(const std::string& _dBInstanceClass);

                    /**
                     * 判断参数 DBInstanceClass 是否已赋值
                     * @return DBInstanceClass 是否已赋值
                     * 
                     */
                    bool DBInstanceClassHasBeenSet() const;

                    /**
                     * 获取<p>PostgreSQL大版本号，版本信息可从<a href="https://cloud.tencent.com/document/api/409/89018">DescribeDBVersions</a>获取，目前支持10，11，12，13，14，15这几个大版本。</p>
                     * @return DBMajorVersion <p>PostgreSQL大版本号，版本信息可从<a href="https://cloud.tencent.com/document/api/409/89018">DescribeDBVersions</a>获取，目前支持10，11，12，13，14，15这几个大版本。</p>
                     * 
                     */
                    std::string GetDBMajorVersion() const;

                    /**
                     * 设置<p>PostgreSQL大版本号，版本信息可从<a href="https://cloud.tencent.com/document/api/409/89018">DescribeDBVersions</a>获取，目前支持10，11，12，13，14，15这几个大版本。</p>
                     * @param _dBMajorVersion <p>PostgreSQL大版本号，版本信息可从<a href="https://cloud.tencent.com/document/api/409/89018">DescribeDBVersions</a>获取，目前支持10，11，12，13，14，15这几个大版本。</p>
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
                     * 获取<p>PostgreSQL社区大版本+小版本号，如12.4，版本信息可从<a href="https://cloud.tencent.com/document/api/409/89018">DescribeDBVersions</a>获取。</p>
                     * @return DBVersion <p>PostgreSQL社区大版本+小版本号，如12.4，版本信息可从<a href="https://cloud.tencent.com/document/api/409/89018">DescribeDBVersions</a>获取。</p>
                     * 
                     */
                    std::string GetDBVersion() const;

                    /**
                     * 设置<p>PostgreSQL社区大版本+小版本号，如12.4，版本信息可从<a href="https://cloud.tencent.com/document/api/409/89018">DescribeDBVersions</a>获取。</p>
                     * @param _dBVersion <p>PostgreSQL社区大版本+小版本号，如12.4，版本信息可从<a href="https://cloud.tencent.com/document/api/409/89018">DescribeDBVersions</a>获取。</p>
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
                     * 获取<p>PostgreSQL内核版本号，如v12.7_r1.8，版本信息可从<a href="https://cloud.tencent.com/document/api/409/89018">DescribeDBVersions</a>获取。</p>
                     * @return DBKernelVersion <p>PostgreSQL内核版本号，如v12.7_r1.8，版本信息可从<a href="https://cloud.tencent.com/document/api/409/89018">DescribeDBVersions</a>获取。</p>
                     * 
                     */
                    std::string GetDBKernelVersion() const;

                    /**
                     * 设置<p>PostgreSQL内核版本号，如v12.7_r1.8，版本信息可从<a href="https://cloud.tencent.com/document/api/409/89018">DescribeDBVersions</a>获取。</p>
                     * @param _dBKernelVersion <p>PostgreSQL内核版本号，如v12.7_r1.8，版本信息可从<a href="https://cloud.tencent.com/document/api/409/89018">DescribeDBVersions</a>获取。</p>
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
                     * 获取<p>实例类型，类型有：</p><li>primary：主实例</li><li>readonly：只读实例</li><li>guard：灾备实例</li><li>temp：临时实例</li>
                     * @return DBInstanceType <p>实例类型，类型有：</p><li>primary：主实例</li><li>readonly：只读实例</li><li>guard：灾备实例</li><li>temp：临时实例</li>
                     * 
                     */
                    std::string GetDBInstanceType() const;

                    /**
                     * 设置<p>实例类型，类型有：</p><li>primary：主实例</li><li>readonly：只读实例</li><li>guard：灾备实例</li><li>temp：临时实例</li>
                     * @param _dBInstanceType <p>实例类型，类型有：</p><li>primary：主实例</li><li>readonly：只读实例</li><li>guard：灾备实例</li><li>temp：临时实例</li>
                     * 
                     */
                    void SetDBInstanceType(const std::string& _dBInstanceType);

                    /**
                     * 判断参数 DBInstanceType 是否已赋值
                     * @return DBInstanceType 是否已赋值
                     * 
                     */
                    bool DBInstanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>实例版本，目前只支持standard（双机高可用版, 一主一从）。</p>
                     * @return DBInstanceVersion <p>实例版本，目前只支持standard（双机高可用版, 一主一从）。</p>
                     * 
                     */
                    std::string GetDBInstanceVersion() const;

                    /**
                     * 设置<p>实例版本，目前只支持standard（双机高可用版, 一主一从）。</p>
                     * @param _dBInstanceVersion <p>实例版本，目前只支持standard（双机高可用版, 一主一从）。</p>
                     * 
                     */
                    void SetDBInstanceVersion(const std::string& _dBInstanceVersion);

                    /**
                     * 判断参数 DBInstanceVersion 是否已赋值
                     * @return DBInstanceVersion 是否已赋值
                     * 
                     */
                    bool DBInstanceVersionHasBeenSet() const;

                    /**
                     * 获取<p>实例字符集，目前只支持：</p><li> UTF8</li><li> LATIN1</li>
                     * @return DBCharset <p>实例字符集，目前只支持：</p><li> UTF8</li><li> LATIN1</li>
                     * 
                     */
                    std::string GetDBCharset() const;

                    /**
                     * 设置<p>实例字符集，目前只支持：</p><li> UTF8</li><li> LATIN1</li>
                     * @param _dBCharset <p>实例字符集，目前只支持：</p><li> UTF8</li><li> LATIN1</li>
                     * 
                     */
                    void SetDBCharset(const std::string& _dBCharset);

                    /**
                     * 判断参数 DBCharset 是否已赋值
                     * @return DBCharset 是否已赋值
                     * 
                     */
                    bool DBCharsetHasBeenSet() const;

                    /**
                     * 获取<p>实例创建时间。</p>
                     * @return CreateTime <p>实例创建时间。</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>实例创建时间。</p>
                     * @param _createTime <p>实例创建时间。</p>
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
                     * 获取<p>实例执行最后一次更新的时间。</p>
                     * @return UpdateTime <p>实例执行最后一次更新的时间。</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>实例执行最后一次更新的时间。</p>
                     * @param _updateTime <p>实例执行最后一次更新的时间。</p>
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
                     * 获取<p>实例到期时间。</p>
                     * @return ExpireTime <p>实例到期时间。</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>实例到期时间。</p>
                     * @param _expireTime <p>实例到期时间。</p>
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
                     * 获取<p>实例隔离时间。</p>
                     * @return IsolatedTime <p>实例隔离时间。</p>
                     * 
                     */
                    std::string GetIsolatedTime() const;

                    /**
                     * 设置<p>实例隔离时间。</p>
                     * @param _isolatedTime <p>实例隔离时间。</p>
                     * 
                     */
                    void SetIsolatedTime(const std::string& _isolatedTime);

                    /**
                     * 判断参数 IsolatedTime 是否已赋值
                     * @return IsolatedTime 是否已赋值
                     * 
                     */
                    bool IsolatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>计费模式：</p><li>prepaid：包年包月,预付费</li><li>postpaid：按量计费，后付费</li>
                     * @return PayType <p>计费模式：</p><li>prepaid：包年包月,预付费</li><li>postpaid：按量计费，后付费</li>
                     * 
                     */
                    std::string GetPayType() const;

                    /**
                     * 设置<p>计费模式：</p><li>prepaid：包年包月,预付费</li><li>postpaid：按量计费，后付费</li>
                     * @param _payType <p>计费模式：</p><li>prepaid：包年包月,预付费</li><li>postpaid：按量计费，后付费</li>
                     * 
                     */
                    void SetPayType(const std::string& _payType);

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     * 
                     */
                    bool PayTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否自动续费：</p><li>0：手动续费</li><li>1：自动续费</li>默认值：0
                     * @return AutoRenew <p>是否自动续费：</p><li>0：手动续费</li><li>1：自动续费</li>默认值：0
                     * 
                     */
                    uint64_t GetAutoRenew() const;

                    /**
                     * 设置<p>是否自动续费：</p><li>0：手动续费</li><li>1：自动续费</li>默认值：0
                     * @param _autoRenew <p>是否自动续费：</p><li>0：手动续费</li><li>1：自动续费</li>默认值：0
                     * 
                     */
                    void SetAutoRenew(const uint64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * 
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取<p>实例网络连接信息。</p>
                     * @return DBInstanceNetInfo <p>实例网络连接信息。</p>
                     * 
                     */
                    std::vector<DBInstanceNetInfo> GetDBInstanceNetInfo() const;

                    /**
                     * 设置<p>实例网络连接信息。</p>
                     * @param _dBInstanceNetInfo <p>实例网络连接信息。</p>
                     * 
                     */
                    void SetDBInstanceNetInfo(const std::vector<DBInstanceNetInfo>& _dBInstanceNetInfo);

                    /**
                     * 判断参数 DBInstanceNetInfo 是否已赋值
                     * @return DBInstanceNetInfo 是否已赋值
                     * 
                     */
                    bool DBInstanceNetInfoHasBeenSet() const;

                    /**
                     * 获取<p>机器类型。</p>
                     * @return Type <p>机器类型。</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>机器类型。</p>
                     * @param _type <p>机器类型。</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>用户的AppId。</p>
                     * @return AppId <p>用户的AppId。</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>用户的AppId。</p>
                     * @param _appId <p>用户的AppId。</p>
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
                     * 获取<p>实例的Uid。</p>
                     * @return Uid <p>实例的Uid。</p>
                     * 
                     */
                    uint64_t GetUid() const;

                    /**
                     * 设置<p>实例的Uid。</p>
                     * @param _uid <p>实例的Uid。</p>
                     * 
                     */
                    void SetUid(const uint64_t& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * 
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取<p>项目ID。</p>
                     * @return ProjectId <p>项目ID。</p>
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置<p>项目ID。</p>
                     * @param _projectId <p>项目ID。</p>
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
                     * 获取<p>实例绑定的标签信息。</p>
                     * @return TagList <p>实例绑定的标签信息。</p>
                     * 
                     */
                    std::vector<Tag> GetTagList() const;

                    /**
                     * 设置<p>实例绑定的标签信息。</p>
                     * @param _tagList <p>实例绑定的标签信息。</p>
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
                     * 获取<p>主实例信息，仅在实例为只读实例时返回。</p>
                     * @return MasterDBInstanceId <p>主实例信息，仅在实例为只读实例时返回。</p>
                     * 
                     */
                    std::string GetMasterDBInstanceId() const;

                    /**
                     * 设置<p>主实例信息，仅在实例为只读实例时返回。</p>
                     * @param _masterDBInstanceId <p>主实例信息，仅在实例为只读实例时返回。</p>
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
                     * 获取<p>只读实例数量。</p>
                     * @return ReadOnlyInstanceNum <p>只读实例数量。</p>
                     * 
                     */
                    int64_t GetReadOnlyInstanceNum() const;

                    /**
                     * 设置<p>只读实例数量。</p>
                     * @param _readOnlyInstanceNum <p>只读实例数量。</p>
                     * 
                     */
                    void SetReadOnlyInstanceNum(const int64_t& _readOnlyInstanceNum);

                    /**
                     * 判断参数 ReadOnlyInstanceNum 是否已赋值
                     * @return ReadOnlyInstanceNum 是否已赋值
                     * 
                     */
                    bool ReadOnlyInstanceNumHasBeenSet() const;

                    /**
                     * 获取<p>只读实例在只读组中的状态。</p>
                     * @return StatusInReadonlyGroup <p>只读实例在只读组中的状态。</p>
                     * 
                     */
                    std::string GetStatusInReadonlyGroup() const;

                    /**
                     * 设置<p>只读实例在只读组中的状态。</p>
                     * @param _statusInReadonlyGroup <p>只读实例在只读组中的状态。</p>
                     * 
                     */
                    void SetStatusInReadonlyGroup(const std::string& _statusInReadonlyGroup);

                    /**
                     * 判断参数 StatusInReadonlyGroup 是否已赋值
                     * @return StatusInReadonlyGroup 是否已赋值
                     * 
                     */
                    bool StatusInReadonlyGroupHasBeenSet() const;

                    /**
                     * 获取<p>下线时间。</p>
                     * @return OfflineTime <p>下线时间。</p>
                     * 
                     */
                    std::string GetOfflineTime() const;

                    /**
                     * 设置<p>下线时间。</p>
                     * @param _offlineTime <p>下线时间。</p>
                     * 
                     */
                    void SetOfflineTime(const std::string& _offlineTime);

                    /**
                     * 判断参数 OfflineTime 是否已赋值
                     * @return OfflineTime 是否已赋值
                     * 
                     */
                    bool OfflineTimeHasBeenSet() const;

                    /**
                     * 获取<p>实例的节点信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DBNodeSet <p>实例的节点信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DBNode> GetDBNodeSet() const;

                    /**
                     * 设置<p>实例的节点信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dBNodeSet <p>实例的节点信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>实例是否支持TDE数据加密：</p><li>0：不支持</li><li>1：支持</li>默认值：0TDE数据加密可参考[数据透明加密概述](https://cloud.tencent.com/document/product/409/71748)
                     * @return IsSupportTDE <p>实例是否支持TDE数据加密：</p><li>0：不支持</li><li>1：支持</li>默认值：0TDE数据加密可参考[数据透明加密概述](https://cloud.tencent.com/document/product/409/71748)
                     * 
                     */
                    int64_t GetIsSupportTDE() const;

                    /**
                     * 设置<p>实例是否支持TDE数据加密：</p><li>0：不支持</li><li>1：支持</li>默认值：0TDE数据加密可参考[数据透明加密概述](https://cloud.tencent.com/document/product/409/71748)
                     * @param _isSupportTDE <p>实例是否支持TDE数据加密：</p><li>0：不支持</li><li>1：支持</li>默认值：0TDE数据加密可参考[数据透明加密概述](https://cloud.tencent.com/document/product/409/71748)
                     * 
                     */
                    void SetIsSupportTDE(const int64_t& _isSupportTDE);

                    /**
                     * 判断参数 IsSupportTDE 是否已赋值
                     * @return IsSupportTDE 是否已赋值
                     * 
                     */
                    bool IsSupportTDEHasBeenSet() const;

                    /**
                     * 获取<p>数据库引擎，支持：</p><li>postgresql：云数据库PostgreSQL</li><li>mssql_compatible：MSSQL兼容-云数据库PostgreSQL</li>默认值：postgresql
                     * @return DBEngine <p>数据库引擎，支持：</p><li>postgresql：云数据库PostgreSQL</li><li>mssql_compatible：MSSQL兼容-云数据库PostgreSQL</li>默认值：postgresql
                     * 
                     */
                    std::string GetDBEngine() const;

                    /**
                     * 设置<p>数据库引擎，支持：</p><li>postgresql：云数据库PostgreSQL</li><li>mssql_compatible：MSSQL兼容-云数据库PostgreSQL</li>默认值：postgresql
                     * @param _dBEngine <p>数据库引擎，支持：</p><li>postgresql：云数据库PostgreSQL</li><li>mssql_compatible：MSSQL兼容-云数据库PostgreSQL</li>默认值：postgresql
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
                     * 获取<p>数据库引擎的配置信息，配置格式如下：<br>{&quot;$key1&quot;:&quot;$value1&quot;, &quot;$key2&quot;:&quot;$value2&quot;}<br>各引擎支持如下：<br>mssql_compatible引擎：</p><li>migrationMode：数据库模式，可选参数，可取值：single-db（单数据库模式），multi-db（多数据库模式）。默认为single-db。</li><li>defaultLocale：排序区域规则，可选参数，在初始化后不可修改，默认为en_US，可选值如下："af_ZA", "sq_AL", "ar_DZ", "ar_BH", "ar_EG", "ar_IQ", "ar_JO", "ar_KW", "ar_LB", "ar_LY", "ar_MA", "ar_OM", "ar_QA", "ar_SA", "ar_SY", "ar_TN", "ar_AE", "ar_YE", "hy_AM", "az_Cyrl_AZ", "az_Latn_AZ", "eu_ES", "be_BY", "bg_BG", "ca_ES", "zh_HK", "zh_MO", "zh_CN", "zh_SG", "zh_TW", "hr_HR", "cs_CZ", "da_DK", "nl_BE", "nl_NL", "en_AU", "en_BZ", "en_CA", "en_IE", "en_JM", "en_NZ", "en_PH", "en_ZA", "en_TT", "en_GB", "en_US", "en_ZW", "et_EE", "fo_FO", "fa_IR", "fi_FI", "fr_BE", "fr_CA", "fr_FR", "fr_LU", "fr_MC", "fr_CH", "mk_MK", "ka_GE", "de_AT", "de_DE", "de_LI", "de_LU", "de_CH", "el_GR", "gu_IN", "he_IL", "hi_IN", "hu_HU", "is_IS", "id_ID", "it_IT", "it_CH", "ja_JP", "kn_IN", "kok_IN", "ko_KR", "ky_KG", "lv_LV", "lt_LT", "ms_BN", "ms_MY", "mr_IN", "mn_MN", "nb_NO", "nn_NO", "pl_PL", "pt_BR", "pt_PT", "pa_IN", "ro_RO", "ru_RU", "sa_IN", "sr_Cyrl_RS", "sr_Latn_RS", "sk_SK", "sl_SI", "es_AR", "es_BO", "es_CL", "es_CO", "es_CR", "es_DO", "es_EC", "es_SV", "es_GT", "es_HN", "es_MX", "es_NI", "es_PA", "es_PY","es_PE", "es_PR", "es_ES", "es_TRADITIONAL", "es_UY", "es_VE", "sw_KE", "sv_FI", "sv_SE", "tt_RU", "te_IN", "th_TH", "tr_TR", "uk_UA", "ur_IN", "ur_PK", "uz_Cyrl_UZ", "uz_Latn_UZ", "vi_VN"。</li><li>serverCollationName：排序规则名称，可选参数，在初始化后不可修改，默认为sql_latin1_general_cp1_ci_as，可选值如下："bbf_unicode_general_ci_as", "bbf_unicode_cp1_ci_as", "bbf_unicode_CP1250_ci_as", "bbf_unicode_CP1251_ci_as", "bbf_unicode_cp1253_ci_as", "bbf_unicode_cp1254_ci_as", "bbf_unicode_cp1255_ci_as", "bbf_unicode_cp1256_ci_as", "bbf_unicode_cp1257_ci_as", "bbf_unicode_cp1258_ci_as", "bbf_unicode_cp874_ci_as", "sql_latin1_general_cp1250_ci_as", "sql_latin1_general_cp1251_ci_as", "sql_latin1_general_cp1_ci_as", "sql_latin1_general_cp1253_ci_as", "sql_latin1_general_cp1254_ci_as", "sql_latin1_general_cp1255_ci_as","sql_latin1_general_cp1256_ci_as", "sql_latin1_general_cp1257_ci_as", "sql_latin1_general_cp1258_ci_as", "chinese_prc_ci_as", "cyrillic_general_ci_as", "finnish_swedish_ci_as", "french_ci_as", "japanese_ci_as", "korean_wansung_ci_as", "latin1_general_ci_as", "modern_spanish_ci_as", "polish_ci_as", "thai_ci_as", "traditional_spanish_ci_as", "turkish_ci_as", "ukrainian_ci_as", "vietnamese_ci_as"。</li>
                     * @return DBEngineConfig <p>数据库引擎的配置信息，配置格式如下：<br>{&quot;$key1&quot;:&quot;$value1&quot;, &quot;$key2&quot;:&quot;$value2&quot;}<br>各引擎支持如下：<br>mssql_compatible引擎：</p><li>migrationMode：数据库模式，可选参数，可取值：single-db（单数据库模式），multi-db（多数据库模式）。默认为single-db。</li><li>defaultLocale：排序区域规则，可选参数，在初始化后不可修改，默认为en_US，可选值如下："af_ZA", "sq_AL", "ar_DZ", "ar_BH", "ar_EG", "ar_IQ", "ar_JO", "ar_KW", "ar_LB", "ar_LY", "ar_MA", "ar_OM", "ar_QA", "ar_SA", "ar_SY", "ar_TN", "ar_AE", "ar_YE", "hy_AM", "az_Cyrl_AZ", "az_Latn_AZ", "eu_ES", "be_BY", "bg_BG", "ca_ES", "zh_HK", "zh_MO", "zh_CN", "zh_SG", "zh_TW", "hr_HR", "cs_CZ", "da_DK", "nl_BE", "nl_NL", "en_AU", "en_BZ", "en_CA", "en_IE", "en_JM", "en_NZ", "en_PH", "en_ZA", "en_TT", "en_GB", "en_US", "en_ZW", "et_EE", "fo_FO", "fa_IR", "fi_FI", "fr_BE", "fr_CA", "fr_FR", "fr_LU", "fr_MC", "fr_CH", "mk_MK", "ka_GE", "de_AT", "de_DE", "de_LI", "de_LU", "de_CH", "el_GR", "gu_IN", "he_IL", "hi_IN", "hu_HU", "is_IS", "id_ID", "it_IT", "it_CH", "ja_JP", "kn_IN", "kok_IN", "ko_KR", "ky_KG", "lv_LV", "lt_LT", "ms_BN", "ms_MY", "mr_IN", "mn_MN", "nb_NO", "nn_NO", "pl_PL", "pt_BR", "pt_PT", "pa_IN", "ro_RO", "ru_RU", "sa_IN", "sr_Cyrl_RS", "sr_Latn_RS", "sk_SK", "sl_SI", "es_AR", "es_BO", "es_CL", "es_CO", "es_CR", "es_DO", "es_EC", "es_SV", "es_GT", "es_HN", "es_MX", "es_NI", "es_PA", "es_PY","es_PE", "es_PR", "es_ES", "es_TRADITIONAL", "es_UY", "es_VE", "sw_KE", "sv_FI", "sv_SE", "tt_RU", "te_IN", "th_TH", "tr_TR", "uk_UA", "ur_IN", "ur_PK", "uz_Cyrl_UZ", "uz_Latn_UZ", "vi_VN"。</li><li>serverCollationName：排序规则名称，可选参数，在初始化后不可修改，默认为sql_latin1_general_cp1_ci_as，可选值如下："bbf_unicode_general_ci_as", "bbf_unicode_cp1_ci_as", "bbf_unicode_CP1250_ci_as", "bbf_unicode_CP1251_ci_as", "bbf_unicode_cp1253_ci_as", "bbf_unicode_cp1254_ci_as", "bbf_unicode_cp1255_ci_as", "bbf_unicode_cp1256_ci_as", "bbf_unicode_cp1257_ci_as", "bbf_unicode_cp1258_ci_as", "bbf_unicode_cp874_ci_as", "sql_latin1_general_cp1250_ci_as", "sql_latin1_general_cp1251_ci_as", "sql_latin1_general_cp1_ci_as", "sql_latin1_general_cp1253_ci_as", "sql_latin1_general_cp1254_ci_as", "sql_latin1_general_cp1255_ci_as","sql_latin1_general_cp1256_ci_as", "sql_latin1_general_cp1257_ci_as", "sql_latin1_general_cp1258_ci_as", "chinese_prc_ci_as", "cyrillic_general_ci_as", "finnish_swedish_ci_as", "french_ci_as", "japanese_ci_as", "korean_wansung_ci_as", "latin1_general_ci_as", "modern_spanish_ci_as", "polish_ci_as", "thai_ci_as", "traditional_spanish_ci_as", "turkish_ci_as", "ukrainian_ci_as", "vietnamese_ci_as"。</li>
                     * 
                     */
                    std::string GetDBEngineConfig() const;

                    /**
                     * 设置<p>数据库引擎的配置信息，配置格式如下：<br>{&quot;$key1&quot;:&quot;$value1&quot;, &quot;$key2&quot;:&quot;$value2&quot;}<br>各引擎支持如下：<br>mssql_compatible引擎：</p><li>migrationMode：数据库模式，可选参数，可取值：single-db（单数据库模式），multi-db（多数据库模式）。默认为single-db。</li><li>defaultLocale：排序区域规则，可选参数，在初始化后不可修改，默认为en_US，可选值如下："af_ZA", "sq_AL", "ar_DZ", "ar_BH", "ar_EG", "ar_IQ", "ar_JO", "ar_KW", "ar_LB", "ar_LY", "ar_MA", "ar_OM", "ar_QA", "ar_SA", "ar_SY", "ar_TN", "ar_AE", "ar_YE", "hy_AM", "az_Cyrl_AZ", "az_Latn_AZ", "eu_ES", "be_BY", "bg_BG", "ca_ES", "zh_HK", "zh_MO", "zh_CN", "zh_SG", "zh_TW", "hr_HR", "cs_CZ", "da_DK", "nl_BE", "nl_NL", "en_AU", "en_BZ", "en_CA", "en_IE", "en_JM", "en_NZ", "en_PH", "en_ZA", "en_TT", "en_GB", "en_US", "en_ZW", "et_EE", "fo_FO", "fa_IR", "fi_FI", "fr_BE", "fr_CA", "fr_FR", "fr_LU", "fr_MC", "fr_CH", "mk_MK", "ka_GE", "de_AT", "de_DE", "de_LI", "de_LU", "de_CH", "el_GR", "gu_IN", "he_IL", "hi_IN", "hu_HU", "is_IS", "id_ID", "it_IT", "it_CH", "ja_JP", "kn_IN", "kok_IN", "ko_KR", "ky_KG", "lv_LV", "lt_LT", "ms_BN", "ms_MY", "mr_IN", "mn_MN", "nb_NO", "nn_NO", "pl_PL", "pt_BR", "pt_PT", "pa_IN", "ro_RO", "ru_RU", "sa_IN", "sr_Cyrl_RS", "sr_Latn_RS", "sk_SK", "sl_SI", "es_AR", "es_BO", "es_CL", "es_CO", "es_CR", "es_DO", "es_EC", "es_SV", "es_GT", "es_HN", "es_MX", "es_NI", "es_PA", "es_PY","es_PE", "es_PR", "es_ES", "es_TRADITIONAL", "es_UY", "es_VE", "sw_KE", "sv_FI", "sv_SE", "tt_RU", "te_IN", "th_TH", "tr_TR", "uk_UA", "ur_IN", "ur_PK", "uz_Cyrl_UZ", "uz_Latn_UZ", "vi_VN"。</li><li>serverCollationName：排序规则名称，可选参数，在初始化后不可修改，默认为sql_latin1_general_cp1_ci_as，可选值如下："bbf_unicode_general_ci_as", "bbf_unicode_cp1_ci_as", "bbf_unicode_CP1250_ci_as", "bbf_unicode_CP1251_ci_as", "bbf_unicode_cp1253_ci_as", "bbf_unicode_cp1254_ci_as", "bbf_unicode_cp1255_ci_as", "bbf_unicode_cp1256_ci_as", "bbf_unicode_cp1257_ci_as", "bbf_unicode_cp1258_ci_as", "bbf_unicode_cp874_ci_as", "sql_latin1_general_cp1250_ci_as", "sql_latin1_general_cp1251_ci_as", "sql_latin1_general_cp1_ci_as", "sql_latin1_general_cp1253_ci_as", "sql_latin1_general_cp1254_ci_as", "sql_latin1_general_cp1255_ci_as","sql_latin1_general_cp1256_ci_as", "sql_latin1_general_cp1257_ci_as", "sql_latin1_general_cp1258_ci_as", "chinese_prc_ci_as", "cyrillic_general_ci_as", "finnish_swedish_ci_as", "french_ci_as", "japanese_ci_as", "korean_wansung_ci_as", "latin1_general_ci_as", "modern_spanish_ci_as", "polish_ci_as", "thai_ci_as", "traditional_spanish_ci_as", "turkish_ci_as", "ukrainian_ci_as", "vietnamese_ci_as"。</li>
                     * @param _dBEngineConfig <p>数据库引擎的配置信息，配置格式如下：<br>{&quot;$key1&quot;:&quot;$value1&quot;, &quot;$key2&quot;:&quot;$value2&quot;}<br>各引擎支持如下：<br>mssql_compatible引擎：</p><li>migrationMode：数据库模式，可选参数，可取值：single-db（单数据库模式），multi-db（多数据库模式）。默认为single-db。</li><li>defaultLocale：排序区域规则，可选参数，在初始化后不可修改，默认为en_US，可选值如下："af_ZA", "sq_AL", "ar_DZ", "ar_BH", "ar_EG", "ar_IQ", "ar_JO", "ar_KW", "ar_LB", "ar_LY", "ar_MA", "ar_OM", "ar_QA", "ar_SA", "ar_SY", "ar_TN", "ar_AE", "ar_YE", "hy_AM", "az_Cyrl_AZ", "az_Latn_AZ", "eu_ES", "be_BY", "bg_BG", "ca_ES", "zh_HK", "zh_MO", "zh_CN", "zh_SG", "zh_TW", "hr_HR", "cs_CZ", "da_DK", "nl_BE", "nl_NL", "en_AU", "en_BZ", "en_CA", "en_IE", "en_JM", "en_NZ", "en_PH", "en_ZA", "en_TT", "en_GB", "en_US", "en_ZW", "et_EE", "fo_FO", "fa_IR", "fi_FI", "fr_BE", "fr_CA", "fr_FR", "fr_LU", "fr_MC", "fr_CH", "mk_MK", "ka_GE", "de_AT", "de_DE", "de_LI", "de_LU", "de_CH", "el_GR", "gu_IN", "he_IL", "hi_IN", "hu_HU", "is_IS", "id_ID", "it_IT", "it_CH", "ja_JP", "kn_IN", "kok_IN", "ko_KR", "ky_KG", "lv_LV", "lt_LT", "ms_BN", "ms_MY", "mr_IN", "mn_MN", "nb_NO", "nn_NO", "pl_PL", "pt_BR", "pt_PT", "pa_IN", "ro_RO", "ru_RU", "sa_IN", "sr_Cyrl_RS", "sr_Latn_RS", "sk_SK", "sl_SI", "es_AR", "es_BO", "es_CL", "es_CO", "es_CR", "es_DO", "es_EC", "es_SV", "es_GT", "es_HN", "es_MX", "es_NI", "es_PA", "es_PY","es_PE", "es_PR", "es_ES", "es_TRADITIONAL", "es_UY", "es_VE", "sw_KE", "sv_FI", "sv_SE", "tt_RU", "te_IN", "th_TH", "tr_TR", "uk_UA", "ur_IN", "ur_PK", "uz_Cyrl_UZ", "uz_Latn_UZ", "vi_VN"。</li><li>serverCollationName：排序规则名称，可选参数，在初始化后不可修改，默认为sql_latin1_general_cp1_ci_as，可选值如下："bbf_unicode_general_ci_as", "bbf_unicode_cp1_ci_as", "bbf_unicode_CP1250_ci_as", "bbf_unicode_CP1251_ci_as", "bbf_unicode_cp1253_ci_as", "bbf_unicode_cp1254_ci_as", "bbf_unicode_cp1255_ci_as", "bbf_unicode_cp1256_ci_as", "bbf_unicode_cp1257_ci_as", "bbf_unicode_cp1258_ci_as", "bbf_unicode_cp874_ci_as", "sql_latin1_general_cp1250_ci_as", "sql_latin1_general_cp1251_ci_as", "sql_latin1_general_cp1_ci_as", "sql_latin1_general_cp1253_ci_as", "sql_latin1_general_cp1254_ci_as", "sql_latin1_general_cp1255_ci_as","sql_latin1_general_cp1256_ci_as", "sql_latin1_general_cp1257_ci_as", "sql_latin1_general_cp1258_ci_as", "chinese_prc_ci_as", "cyrillic_general_ci_as", "finnish_swedish_ci_as", "french_ci_as", "japanese_ci_as", "korean_wansung_ci_as", "latin1_general_ci_as", "modern_spanish_ci_as", "polish_ci_as", "thai_ci_as", "traditional_spanish_ci_as", "turkish_ci_as", "ukrainian_ci_as", "vietnamese_ci_as"。</li>
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
                     * 获取<p>实例网络信息列表（此字段已废弃）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NetworkAccessList <p>实例网络信息列表（此字段已废弃）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<NetworkAccess> GetNetworkAccessList() const;

                    /**
                     * 设置<p>实例网络信息列表（此字段已废弃）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _networkAccessList <p>实例网络信息列表（此字段已废弃）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNetworkAccessList(const std::vector<NetworkAccess>& _networkAccessList);

                    /**
                     * 判断参数 NetworkAccessList 是否已赋值
                     * @return NetworkAccessList 是否已赋值
                     * 
                     */
                    bool NetworkAccessListHasBeenSet() const;

                    /**
                     * 获取<p>实例是否支持Ipv6：</p><li>0：否</li><li>1：是</li>默认值：0
                     * @return SupportIpv6 <p>实例是否支持Ipv6：</p><li>0：否</li><li>1：是</li>默认值：0
                     * 
                     */
                    uint64_t GetSupportIpv6() const;

                    /**
                     * 设置<p>实例是否支持Ipv6：</p><li>0：否</li><li>1：是</li>默认值：0
                     * @param _supportIpv6 <p>实例是否支持Ipv6：</p><li>0：否</li><li>1：是</li>默认值：0
                     * 
                     */
                    void SetSupportIpv6(const uint64_t& _supportIpv6);

                    /**
                     * 判断参数 SupportIpv6 是否已赋值
                     * @return SupportIpv6 是否已赋值
                     * 
                     */
                    bool SupportIpv6HasBeenSet() const;

                    /**
                     * 获取<p>实例已经弹性扩容的cpu核数</p>
                     * @return ExpandedCpu <p>实例已经弹性扩容的cpu核数</p>
                     * 
                     */
                    uint64_t GetExpandedCpu() const;

                    /**
                     * 设置<p>实例已经弹性扩容的cpu核数</p>
                     * @param _expandedCpu <p>实例已经弹性扩容的cpu核数</p>
                     * 
                     */
                    void SetExpandedCpu(const uint64_t& _expandedCpu);

                    /**
                     * 判断参数 ExpandedCpu 是否已赋值
                     * @return ExpandedCpu 是否已赋值
                     * 
                     */
                    bool ExpandedCpuHasBeenSet() const;

                    /**
                     * 获取<p>实例是否开启删除保护，取值如下：</p><ul><li>true：开启删除保护</li><li>false：关闭删除保护</li></ul>
                     * @return DeletionProtection <p>实例是否开启删除保护，取值如下：</p><ul><li>true：开启删除保护</li><li>false：关闭删除保护</li></ul>
                     * 
                     */
                    bool GetDeletionProtection() const;

                    /**
                     * 设置<p>实例是否开启删除保护，取值如下：</p><ul><li>true：开启删除保护</li><li>false：关闭删除保护</li></ul>
                     * @param _deletionProtection <p>实例是否开启删除保护，取值如下：</p><ul><li>true：开启删除保护</li><li>false：关闭删除保护</li></ul>
                     * 
                     */
                    void SetDeletionProtection(const bool& _deletionProtection);

                    /**
                     * 判断参数 DeletionProtection 是否已赋值
                     * @return DeletionProtection 是否已赋值
                     * 
                     */
                    bool DeletionProtectionHasBeenSet() const;

                    /**
                     * 获取<p>实例存储类型，可选值：PHYSICAL_LOCAL_SSD：物理机本地ssd硬盘 CLOUD_PREMIUM：高性能云硬盘 CLOUD_SSD：ssd云硬盘 CLOUD_HSSD：增强型ssd云硬盘</p>
                     * @return DBInstanceStorageType <p>实例存储类型，可选值：PHYSICAL_LOCAL_SSD：物理机本地ssd硬盘 CLOUD_PREMIUM：高性能云硬盘 CLOUD_SSD：ssd云硬盘 CLOUD_HSSD：增强型ssd云硬盘</p>
                     * 
                     */
                    std::string GetDBInstanceStorageType() const;

                    /**
                     * 设置<p>实例存储类型，可选值：PHYSICAL_LOCAL_SSD：物理机本地ssd硬盘 CLOUD_PREMIUM：高性能云硬盘 CLOUD_SSD：ssd云硬盘 CLOUD_HSSD：增强型ssd云硬盘</p>
                     * @param _dBInstanceStorageType <p>实例存储类型，可选值：PHYSICAL_LOCAL_SSD：物理机本地ssd硬盘 CLOUD_PREMIUM：高性能云硬盘 CLOUD_SSD：ssd云硬盘 CLOUD_HSSD：增强型ssd云硬盘</p>
                     * 
                     */
                    void SetDBInstanceStorageType(const std::string& _dBInstanceStorageType);

                    /**
                     * 判断参数 DBInstanceStorageType 是否已赋值
                     * @return DBInstanceStorageType 是否已赋值
                     * 
                     */
                    bool DBInstanceStorageTypeHasBeenSet() const;

                private:

                    /**
                     * <p>实例所属地域，如: ap-guangzhou，对应RegionSet的Region字段。</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>实例所属可用区， 如：ap-guangzhou-3，对应ZoneSet的Zone字段。</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>私有网络ID，形如vpc-e6w23k31。有效的VpcId可通过登录控制台查询；也可以调用接口 <a href="https://cloud.tencent.com/document/api/215/15778">DescribeVpcs</a> ，从接口返回中的unVpcId字段获取。</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>私有网络子网ID，形如subnet-51lcif9y。有效的私有网络子网ID可通过登录控制台查询；也可以调用接口 <a href="https://cloud.tencent.com/document/api/215/15784">DescribeSubnets </a>，从接口返回中的unSubnetId字段获取。</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>实例ID。</p>
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * <p>实例名称。</p>
                     */
                    std::string m_dBInstanceName;
                    bool m_dBInstanceNameHasBeenSet;

                    /**
                     * <p>实例状态，分别为：applying（申请中）、init(待初始化)、initing(初始化中)、running(运行中)、limited run（受限运行）、isolating（隔离中）、isolated（已隔离）、disisolating（解隔离中）、recycling（回收中）、recycled（已回收）、job running（任务执行中）、offline（下线）、migrating（迁移中）、expanding（扩容中）、waitSwitch（等待切换）、switching（切换中）、readonly（只读）、restarting（重启中）、network changing（网络变更中）、upgrading（内核版本升级中）、audit-switching（审计状态变更中）、primary-switching（主备切换中）、offlining(下线中)、deployment changing（可用区变更中）、cloning（恢复数据中）、parameter modifying（参数修改中）、log-switching（日志状态变更中）、restoring（恢复中）、expanding（变配中）</p>
                     */
                    std::string m_dBInstanceStatus;
                    bool m_dBInstanceStatusHasBeenSet;

                    /**
                     * <p>实例分配的内存大小，单位：GB</p>
                     */
                    uint64_t m_dBInstanceMemory;
                    bool m_dBInstanceMemoryHasBeenSet;

                    /**
                     * <p>实例分配的存储空间大小，单位：GB</p>
                     */
                    uint64_t m_dBInstanceStorage;
                    bool m_dBInstanceStorageHasBeenSet;

                    /**
                     * <p>实例分配的CPU数量，单位：个</p>
                     */
                    uint64_t m_dBInstanceCpu;
                    bool m_dBInstanceCpuHasBeenSet;

                    /**
                     * <p>售卖规格ID</p>
                     */
                    std::string m_dBInstanceClass;
                    bool m_dBInstanceClassHasBeenSet;

                    /**
                     * <p>PostgreSQL大版本号，版本信息可从<a href="https://cloud.tencent.com/document/api/409/89018">DescribeDBVersions</a>获取，目前支持10，11，12，13，14，15这几个大版本。</p>
                     */
                    std::string m_dBMajorVersion;
                    bool m_dBMajorVersionHasBeenSet;

                    /**
                     * <p>PostgreSQL社区大版本+小版本号，如12.4，版本信息可从<a href="https://cloud.tencent.com/document/api/409/89018">DescribeDBVersions</a>获取。</p>
                     */
                    std::string m_dBVersion;
                    bool m_dBVersionHasBeenSet;

                    /**
                     * <p>PostgreSQL内核版本号，如v12.7_r1.8，版本信息可从<a href="https://cloud.tencent.com/document/api/409/89018">DescribeDBVersions</a>获取。</p>
                     */
                    std::string m_dBKernelVersion;
                    bool m_dBKernelVersionHasBeenSet;

                    /**
                     * <p>实例类型，类型有：</p><li>primary：主实例</li><li>readonly：只读实例</li><li>guard：灾备实例</li><li>temp：临时实例</li>
                     */
                    std::string m_dBInstanceType;
                    bool m_dBInstanceTypeHasBeenSet;

                    /**
                     * <p>实例版本，目前只支持standard（双机高可用版, 一主一从）。</p>
                     */
                    std::string m_dBInstanceVersion;
                    bool m_dBInstanceVersionHasBeenSet;

                    /**
                     * <p>实例字符集，目前只支持：</p><li> UTF8</li><li> LATIN1</li>
                     */
                    std::string m_dBCharset;
                    bool m_dBCharsetHasBeenSet;

                    /**
                     * <p>实例创建时间。</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>实例执行最后一次更新的时间。</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>实例到期时间。</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>实例隔离时间。</p>
                     */
                    std::string m_isolatedTime;
                    bool m_isolatedTimeHasBeenSet;

                    /**
                     * <p>计费模式：</p><li>prepaid：包年包月,预付费</li><li>postpaid：按量计费，后付费</li>
                     */
                    std::string m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * <p>是否自动续费：</p><li>0：手动续费</li><li>1：自动续费</li>默认值：0
                     */
                    uint64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * <p>实例网络连接信息。</p>
                     */
                    std::vector<DBInstanceNetInfo> m_dBInstanceNetInfo;
                    bool m_dBInstanceNetInfoHasBeenSet;

                    /**
                     * <p>机器类型。</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>用户的AppId。</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>实例的Uid。</p>
                     */
                    uint64_t m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * <p>项目ID。</p>
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>实例绑定的标签信息。</p>
                     */
                    std::vector<Tag> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * <p>主实例信息，仅在实例为只读实例时返回。</p>
                     */
                    std::string m_masterDBInstanceId;
                    bool m_masterDBInstanceIdHasBeenSet;

                    /**
                     * <p>只读实例数量。</p>
                     */
                    int64_t m_readOnlyInstanceNum;
                    bool m_readOnlyInstanceNumHasBeenSet;

                    /**
                     * <p>只读实例在只读组中的状态。</p>
                     */
                    std::string m_statusInReadonlyGroup;
                    bool m_statusInReadonlyGroupHasBeenSet;

                    /**
                     * <p>下线时间。</p>
                     */
                    std::string m_offlineTime;
                    bool m_offlineTimeHasBeenSet;

                    /**
                     * <p>实例的节点信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DBNode> m_dBNodeSet;
                    bool m_dBNodeSetHasBeenSet;

                    /**
                     * <p>实例是否支持TDE数据加密：</p><li>0：不支持</li><li>1：支持</li>默认值：0TDE数据加密可参考[数据透明加密概述](https://cloud.tencent.com/document/product/409/71748)
                     */
                    int64_t m_isSupportTDE;
                    bool m_isSupportTDEHasBeenSet;

                    /**
                     * <p>数据库引擎，支持：</p><li>postgresql：云数据库PostgreSQL</li><li>mssql_compatible：MSSQL兼容-云数据库PostgreSQL</li>默认值：postgresql
                     */
                    std::string m_dBEngine;
                    bool m_dBEngineHasBeenSet;

                    /**
                     * <p>数据库引擎的配置信息，配置格式如下：<br>{&quot;$key1&quot;:&quot;$value1&quot;, &quot;$key2&quot;:&quot;$value2&quot;}<br>各引擎支持如下：<br>mssql_compatible引擎：</p><li>migrationMode：数据库模式，可选参数，可取值：single-db（单数据库模式），multi-db（多数据库模式）。默认为single-db。</li><li>defaultLocale：排序区域规则，可选参数，在初始化后不可修改，默认为en_US，可选值如下："af_ZA", "sq_AL", "ar_DZ", "ar_BH", "ar_EG", "ar_IQ", "ar_JO", "ar_KW", "ar_LB", "ar_LY", "ar_MA", "ar_OM", "ar_QA", "ar_SA", "ar_SY", "ar_TN", "ar_AE", "ar_YE", "hy_AM", "az_Cyrl_AZ", "az_Latn_AZ", "eu_ES", "be_BY", "bg_BG", "ca_ES", "zh_HK", "zh_MO", "zh_CN", "zh_SG", "zh_TW", "hr_HR", "cs_CZ", "da_DK", "nl_BE", "nl_NL", "en_AU", "en_BZ", "en_CA", "en_IE", "en_JM", "en_NZ", "en_PH", "en_ZA", "en_TT", "en_GB", "en_US", "en_ZW", "et_EE", "fo_FO", "fa_IR", "fi_FI", "fr_BE", "fr_CA", "fr_FR", "fr_LU", "fr_MC", "fr_CH", "mk_MK", "ka_GE", "de_AT", "de_DE", "de_LI", "de_LU", "de_CH", "el_GR", "gu_IN", "he_IL", "hi_IN", "hu_HU", "is_IS", "id_ID", "it_IT", "it_CH", "ja_JP", "kn_IN", "kok_IN", "ko_KR", "ky_KG", "lv_LV", "lt_LT", "ms_BN", "ms_MY", "mr_IN", "mn_MN", "nb_NO", "nn_NO", "pl_PL", "pt_BR", "pt_PT", "pa_IN", "ro_RO", "ru_RU", "sa_IN", "sr_Cyrl_RS", "sr_Latn_RS", "sk_SK", "sl_SI", "es_AR", "es_BO", "es_CL", "es_CO", "es_CR", "es_DO", "es_EC", "es_SV", "es_GT", "es_HN", "es_MX", "es_NI", "es_PA", "es_PY","es_PE", "es_PR", "es_ES", "es_TRADITIONAL", "es_UY", "es_VE", "sw_KE", "sv_FI", "sv_SE", "tt_RU", "te_IN", "th_TH", "tr_TR", "uk_UA", "ur_IN", "ur_PK", "uz_Cyrl_UZ", "uz_Latn_UZ", "vi_VN"。</li><li>serverCollationName：排序规则名称，可选参数，在初始化后不可修改，默认为sql_latin1_general_cp1_ci_as，可选值如下："bbf_unicode_general_ci_as", "bbf_unicode_cp1_ci_as", "bbf_unicode_CP1250_ci_as", "bbf_unicode_CP1251_ci_as", "bbf_unicode_cp1253_ci_as", "bbf_unicode_cp1254_ci_as", "bbf_unicode_cp1255_ci_as", "bbf_unicode_cp1256_ci_as", "bbf_unicode_cp1257_ci_as", "bbf_unicode_cp1258_ci_as", "bbf_unicode_cp874_ci_as", "sql_latin1_general_cp1250_ci_as", "sql_latin1_general_cp1251_ci_as", "sql_latin1_general_cp1_ci_as", "sql_latin1_general_cp1253_ci_as", "sql_latin1_general_cp1254_ci_as", "sql_latin1_general_cp1255_ci_as","sql_latin1_general_cp1256_ci_as", "sql_latin1_general_cp1257_ci_as", "sql_latin1_general_cp1258_ci_as", "chinese_prc_ci_as", "cyrillic_general_ci_as", "finnish_swedish_ci_as", "french_ci_as", "japanese_ci_as", "korean_wansung_ci_as", "latin1_general_ci_as", "modern_spanish_ci_as", "polish_ci_as", "thai_ci_as", "traditional_spanish_ci_as", "turkish_ci_as", "ukrainian_ci_as", "vietnamese_ci_as"。</li>
                     */
                    std::string m_dBEngineConfig;
                    bool m_dBEngineConfigHasBeenSet;

                    /**
                     * <p>实例网络信息列表（此字段已废弃）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NetworkAccess> m_networkAccessList;
                    bool m_networkAccessListHasBeenSet;

                    /**
                     * <p>实例是否支持Ipv6：</p><li>0：否</li><li>1：是</li>默认值：0
                     */
                    uint64_t m_supportIpv6;
                    bool m_supportIpv6HasBeenSet;

                    /**
                     * <p>实例已经弹性扩容的cpu核数</p>
                     */
                    uint64_t m_expandedCpu;
                    bool m_expandedCpuHasBeenSet;

                    /**
                     * <p>实例是否开启删除保护，取值如下：</p><ul><li>true：开启删除保护</li><li>false：关闭删除保护</li></ul>
                     */
                    bool m_deletionProtection;
                    bool m_deletionProtectionHasBeenSet;

                    /**
                     * <p>实例存储类型，可选值：PHYSICAL_LOCAL_SSD：物理机本地ssd硬盘 CLOUD_PREMIUM：高性能云硬盘 CLOUD_SSD：ssd云硬盘 CLOUD_HSSD：增强型ssd云硬盘</p>
                     */
                    std::string m_dBInstanceStorageType;
                    bool m_dBInstanceStorageTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DBINSTANCE_H_
