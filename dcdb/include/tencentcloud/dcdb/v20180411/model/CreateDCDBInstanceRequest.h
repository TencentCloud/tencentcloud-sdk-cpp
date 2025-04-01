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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_CREATEDCDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_CREATEDCDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dcdb/v20180411/model/ResourceTag.h>
#include <tencentcloud/dcdb/v20180411/model/DBParamValue.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * CreateDCDBInstance请求参数结构体
                */
                class CreateDCDBInstanceRequest : public AbstractModel
                {
                public:
                    CreateDCDBInstanceRequest();
                    ~CreateDCDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分片节点可用区分布，可填写多个可用区。
注意当前可售卖的可用区需要通过DescribeDCDBSaleInfo接口拉取。
                     * @return Zones 分片节点可用区分布，可填写多个可用区。
注意当前可售卖的可用区需要通过DescribeDCDBSaleInfo接口拉取。
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置分片节点可用区分布，可填写多个可用区。
注意当前可售卖的可用区需要通过DescribeDCDBSaleInfo接口拉取。
                     * @param _zones 分片节点可用区分布，可填写多个可用区。
注意当前可售卖的可用区需要通过DescribeDCDBSaleInfo接口拉取。
                     * 
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取欲购买的时长，单位：月。
                     * @return Period 欲购买的时长，单位：月。
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置欲购买的时长，单位：月。
                     * @param _period 欲购买的时长，单位：月。
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
                     * 获取分片内存大小，单位：GB，可以通过 DescribeShardSpec
 查询实例规格获得。
                     * @return ShardMemory 分片内存大小，单位：GB，可以通过 DescribeShardSpec
 查询实例规格获得。
                     * 
                     */
                    int64_t GetShardMemory() const;

                    /**
                     * 设置分片内存大小，单位：GB，可以通过 DescribeShardSpec
 查询实例规格获得。
                     * @param _shardMemory 分片内存大小，单位：GB，可以通过 DescribeShardSpec
 查询实例规格获得。
                     * 
                     */
                    void SetShardMemory(const int64_t& _shardMemory);

                    /**
                     * 判断参数 ShardMemory 是否已赋值
                     * @return ShardMemory 是否已赋值
                     * 
                     */
                    bool ShardMemoryHasBeenSet() const;

                    /**
                     * 获取分片存储空间大小，单位：GB，可以通过 DescribeShardSpec
 查询实例规格获得。
                     * @return ShardStorage 分片存储空间大小，单位：GB，可以通过 DescribeShardSpec
 查询实例规格获得。
                     * 
                     */
                    int64_t GetShardStorage() const;

                    /**
                     * 设置分片存储空间大小，单位：GB，可以通过 DescribeShardSpec
 查询实例规格获得。
                     * @param _shardStorage 分片存储空间大小，单位：GB，可以通过 DescribeShardSpec
 查询实例规格获得。
                     * 
                     */
                    void SetShardStorage(const int64_t& _shardStorage);

                    /**
                     * 判断参数 ShardStorage 是否已赋值
                     * @return ShardStorage 是否已赋值
                     * 
                     */
                    bool ShardStorageHasBeenSet() const;

                    /**
                     * 获取单个分片节点个数，可以通过 DescribeShardSpec
 查询实例规格获得。
                     * @return ShardNodeCount 单个分片节点个数，可以通过 DescribeShardSpec
 查询实例规格获得。
                     * 
                     */
                    int64_t GetShardNodeCount() const;

                    /**
                     * 设置单个分片节点个数，可以通过 DescribeShardSpec
 查询实例规格获得。
                     * @param _shardNodeCount 单个分片节点个数，可以通过 DescribeShardSpec
 查询实例规格获得。
                     * 
                     */
                    void SetShardNodeCount(const int64_t& _shardNodeCount);

                    /**
                     * 判断参数 ShardNodeCount 是否已赋值
                     * @return ShardNodeCount 是否已赋值
                     * 
                     */
                    bool ShardNodeCountHasBeenSet() const;

                    /**
                     * 获取实例分片个数，可选范围2-8，可以通过升级实例进行新增分片到最多64个分片。
                     * @return ShardCount 实例分片个数，可选范围2-8，可以通过升级实例进行新增分片到最多64个分片。
                     * 
                     */
                    int64_t GetShardCount() const;

                    /**
                     * 设置实例分片个数，可选范围2-8，可以通过升级实例进行新增分片到最多64个分片。
                     * @param _shardCount 实例分片个数，可选范围2-8，可以通过升级实例进行新增分片到最多64个分片。
                     * 
                     */
                    void SetShardCount(const int64_t& _shardCount);

                    /**
                     * 判断参数 ShardCount 是否已赋值
                     * @return ShardCount 是否已赋值
                     * 
                     */
                    bool ShardCountHasBeenSet() const;

                    /**
                     * 获取欲购买实例的数量
                     * @return Count 欲购买实例的数量
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置欲购买实例的数量
                     * @param _count 欲购买实例的数量
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取项目 ID，可以通过查看项目列表获取，不传则关联到默认项目
                     * @return ProjectId 项目 ID，可以通过查看项目列表获取，不传则关联到默认项目
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目 ID，可以通过查看项目列表获取，不传则关联到默认项目
                     * @param _projectId 项目 ID，可以通过查看项目列表获取，不传则关联到默认项目
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
                     * 获取虚拟私有网络 ID，不传或传空表示创建为基础网络
                     * @return VpcId 虚拟私有网络 ID，不传或传空表示创建为基础网络
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置虚拟私有网络 ID，不传或传空表示创建为基础网络
                     * @param _vpcId 虚拟私有网络 ID，不传或传空表示创建为基础网络
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
                     * 获取虚拟私有网络子网 ID，VpcId不为空时必填
                     * @return SubnetId 虚拟私有网络子网 ID，VpcId不为空时必填
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置虚拟私有网络子网 ID，VpcId不为空时必填
                     * @param _subnetId 虚拟私有网络子网 ID，VpcId不为空时必填
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
                     * 获取数据库引擎版本，当前可选：8.0，5.7，10.1，10.0。
                     * @return DbVersionId 数据库引擎版本，当前可选：8.0，5.7，10.1，10.0。
                     * 
                     */
                    std::string GetDbVersionId() const;

                    /**
                     * 设置数据库引擎版本，当前可选：8.0，5.7，10.1，10.0。
                     * @param _dbVersionId 数据库引擎版本，当前可选：8.0，5.7，10.1，10.0。
                     * 
                     */
                    void SetDbVersionId(const std::string& _dbVersionId);

                    /**
                     * 判断参数 DbVersionId 是否已赋值
                     * @return DbVersionId 是否已赋值
                     * 
                     */
                    bool DbVersionIdHasBeenSet() const;

                    /**
                     * 获取是否自动使用代金券进行支付，默认不使用。
                     * @return AutoVoucher 是否自动使用代金券进行支付，默认不使用。
                     * 
                     */
                    bool GetAutoVoucher() const;

                    /**
                     * 设置是否自动使用代金券进行支付，默认不使用。
                     * @param _autoVoucher 是否自动使用代金券进行支付，默认不使用。
                     * 
                     */
                    void SetAutoVoucher(const bool& _autoVoucher);

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
                     * 获取安全组id
                     * @return SecurityGroupId 安全组id
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置安全组id
                     * @param _securityGroupId 安全组id
                     * 
                     */
                    void SetSecurityGroupId(const std::string& _securityGroupId);

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                    /**
                     * 获取实例名称， 可以通过该字段自主的设置实例的名字
                     * @return InstanceName 实例名称， 可以通过该字段自主的设置实例的名字
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称， 可以通过该字段自主的设置实例的名字
                     * @param _instanceName 实例名称， 可以通过该字段自主的设置实例的名字
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
                     * 获取是否支持IPv6，0:不支持，1:支持
                     * @return Ipv6Flag 是否支持IPv6，0:不支持，1:支持
                     * 
                     */
                    int64_t GetIpv6Flag() const;

                    /**
                     * 设置是否支持IPv6，0:不支持，1:支持
                     * @param _ipv6Flag 是否支持IPv6，0:不支持，1:支持
                     * 
                     */
                    void SetIpv6Flag(const int64_t& _ipv6Flag);

                    /**
                     * 判断参数 Ipv6Flag 是否已赋值
                     * @return Ipv6Flag 是否已赋值
                     * 
                     */
                    bool Ipv6FlagHasBeenSet() const;

                    /**
                     * 获取标签键值对数组
                     * @return ResourceTags 标签键值对数组
                     * 
                     */
                    std::vector<ResourceTag> GetResourceTags() const;

                    /**
                     * 设置标签键值对数组
                     * @param _resourceTags 标签键值对数组
                     * 
                     */
                    void SetResourceTags(const std::vector<ResourceTag>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取参数列表。本接口的可选值为：character_set_server（字符集，必传），lower_case_table_names（表名大小写敏感，必传，0 - 敏感；1-不敏感），innodb_page_size（innodb数据页，默认16K），sync_mode（同步模式：0 - 异步； 1 - 强同步；2 - 强同步可退化。默认为强同步可退化）。
                     * @return InitParams 参数列表。本接口的可选值为：character_set_server（字符集，必传），lower_case_table_names（表名大小写敏感，必传，0 - 敏感；1-不敏感），innodb_page_size（innodb数据页，默认16K），sync_mode（同步模式：0 - 异步； 1 - 强同步；2 - 强同步可退化。默认为强同步可退化）。
                     * 
                     */
                    std::vector<DBParamValue> GetInitParams() const;

                    /**
                     * 设置参数列表。本接口的可选值为：character_set_server（字符集，必传），lower_case_table_names（表名大小写敏感，必传，0 - 敏感；1-不敏感），innodb_page_size（innodb数据页，默认16K），sync_mode（同步模式：0 - 异步； 1 - 强同步；2 - 强同步可退化。默认为强同步可退化）。
                     * @param _initParams 参数列表。本接口的可选值为：character_set_server（字符集，必传），lower_case_table_names（表名大小写敏感，必传，0 - 敏感；1-不敏感），innodb_page_size（innodb数据页，默认16K），sync_mode（同步模式：0 - 异步； 1 - 强同步；2 - 强同步可退化。默认为强同步可退化）。
                     * 
                     */
                    void SetInitParams(const std::vector<DBParamValue>& _initParams);

                    /**
                     * 判断参数 InitParams 是否已赋值
                     * @return InitParams 是否已赋值
                     * 
                     */
                    bool InitParamsHasBeenSet() const;

                    /**
                     * 获取DCN源地域
                     * @return DcnRegion DCN源地域
                     * 
                     */
                    std::string GetDcnRegion() const;

                    /**
                     * 设置DCN源地域
                     * @param _dcnRegion DCN源地域
                     * 
                     */
                    void SetDcnRegion(const std::string& _dcnRegion);

                    /**
                     * 判断参数 DcnRegion 是否已赋值
                     * @return DcnRegion 是否已赋值
                     * 
                     */
                    bool DcnRegionHasBeenSet() const;

                    /**
                     * 获取DCN源实例ID
                     * @return DcnInstanceId DCN源实例ID
                     * 
                     */
                    std::string GetDcnInstanceId() const;

                    /**
                     * 设置DCN源实例ID
                     * @param _dcnInstanceId DCN源实例ID
                     * 
                     */
                    void SetDcnInstanceId(const std::string& _dcnInstanceId);

                    /**
                     * 判断参数 DcnInstanceId 是否已赋值
                     * @return DcnInstanceId 是否已赋值
                     * 
                     */
                    bool DcnInstanceIdHasBeenSet() const;

                    /**
                     * 获取自动续费标记，0:默认状态(用户未设置，即初始状态即手动续费，用户开通了预付费不停服特权也会进行自动续费)， 1:自动续费，2:明确不自动续费(用户设置)。若业务无续费概念或无需自动续费，需要设置为0
                     * @return AutoRenewFlag 自动续费标记，0:默认状态(用户未设置，即初始状态即手动续费，用户开通了预付费不停服特权也会进行自动续费)， 1:自动续费，2:明确不自动续费(用户设置)。若业务无续费概念或无需自动续费，需要设置为0
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置自动续费标记，0:默认状态(用户未设置，即初始状态即手动续费，用户开通了预付费不停服特权也会进行自动续费)， 1:自动续费，2:明确不自动续费(用户设置)。若业务无续费概念或无需自动续费，需要设置为0
                     * @param _autoRenewFlag 自动续费标记，0:默认状态(用户未设置，即初始状态即手动续费，用户开通了预付费不停服特权也会进行自动续费)， 1:自动续费，2:明确不自动续费(用户设置)。若业务无续费概念或无需自动续费，需要设置为0
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
                     * 获取安全组ids，安全组可以传数组形式，兼容之前SecurityGroupId参数
                     * @return SecurityGroupIds 安全组ids，安全组可以传数组形式，兼容之前SecurityGroupId参数
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置安全组ids，安全组可以传数组形式，兼容之前SecurityGroupId参数
                     * @param _securityGroupIds 安全组ids，安全组可以传数组形式，兼容之前SecurityGroupId参数
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
                     * 获取DCN同步模式，0：异步， 1：强同步 
                     * @return DcnSyncMode DCN同步模式，0：异步， 1：强同步 
                     * 
                     */
                    int64_t GetDcnSyncMode() const;

                    /**
                     * 设置DCN同步模式，0：异步， 1：强同步 
                     * @param _dcnSyncMode DCN同步模式，0：异步， 1：强同步 
                     * 
                     */
                    void SetDcnSyncMode(const int64_t& _dcnSyncMode);

                    /**
                     * 判断参数 DcnSyncMode 是否已赋值
                     * @return DcnSyncMode 是否已赋值
                     * 
                     */
                    bool DcnSyncModeHasBeenSet() const;

                    /**
                     * 获取Cpu类型，如：英特尔：Intel/AMD，海光：Hygon，默认Intel/AMD
                     * @return CpuType Cpu类型，如：英特尔：Intel/AMD，海光：Hygon，默认Intel/AMD
                     * 
                     */
                    std::string GetCpuType() const;

                    /**
                     * 设置Cpu类型，如：英特尔：Intel/AMD，海光：Hygon，默认Intel/AMD
                     * @param _cpuType Cpu类型，如：英特尔：Intel/AMD，海光：Hygon，默认Intel/AMD
                     * 
                     */
                    void SetCpuType(const std::string& _cpuType);

                    /**
                     * 判断参数 CpuType 是否已赋值
                     * @return CpuType 是否已赋值
                     * 
                     */
                    bool CpuTypeHasBeenSet() const;

                private:

                    /**
                     * 分片节点可用区分布，可填写多个可用区。
注意当前可售卖的可用区需要通过DescribeDCDBSaleInfo接口拉取。
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * 欲购买的时长，单位：月。
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 分片内存大小，单位：GB，可以通过 DescribeShardSpec
 查询实例规格获得。
                     */
                    int64_t m_shardMemory;
                    bool m_shardMemoryHasBeenSet;

                    /**
                     * 分片存储空间大小，单位：GB，可以通过 DescribeShardSpec
 查询实例规格获得。
                     */
                    int64_t m_shardStorage;
                    bool m_shardStorageHasBeenSet;

                    /**
                     * 单个分片节点个数，可以通过 DescribeShardSpec
 查询实例规格获得。
                     */
                    int64_t m_shardNodeCount;
                    bool m_shardNodeCountHasBeenSet;

                    /**
                     * 实例分片个数，可选范围2-8，可以通过升级实例进行新增分片到最多64个分片。
                     */
                    int64_t m_shardCount;
                    bool m_shardCountHasBeenSet;

                    /**
                     * 欲购买实例的数量
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 项目 ID，可以通过查看项目列表获取，不传则关联到默认项目
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 虚拟私有网络 ID，不传或传空表示创建为基础网络
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 虚拟私有网络子网 ID，VpcId不为空时必填
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 数据库引擎版本，当前可选：8.0，5.7，10.1，10.0。
                     */
                    std::string m_dbVersionId;
                    bool m_dbVersionIdHasBeenSet;

                    /**
                     * 是否自动使用代金券进行支付，默认不使用。
                     */
                    bool m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * 代金券ID列表，目前仅支持指定一张代金券。
                     */
                    std::vector<std::string> m_voucherIds;
                    bool m_voucherIdsHasBeenSet;

                    /**
                     * 安全组id
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * 实例名称， 可以通过该字段自主的设置实例的名字
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 是否支持IPv6，0:不支持，1:支持
                     */
                    int64_t m_ipv6Flag;
                    bool m_ipv6FlagHasBeenSet;

                    /**
                     * 标签键值对数组
                     */
                    std::vector<ResourceTag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * 参数列表。本接口的可选值为：character_set_server（字符集，必传），lower_case_table_names（表名大小写敏感，必传，0 - 敏感；1-不敏感），innodb_page_size（innodb数据页，默认16K），sync_mode（同步模式：0 - 异步； 1 - 强同步；2 - 强同步可退化。默认为强同步可退化）。
                     */
                    std::vector<DBParamValue> m_initParams;
                    bool m_initParamsHasBeenSet;

                    /**
                     * DCN源地域
                     */
                    std::string m_dcnRegion;
                    bool m_dcnRegionHasBeenSet;

                    /**
                     * DCN源实例ID
                     */
                    std::string m_dcnInstanceId;
                    bool m_dcnInstanceIdHasBeenSet;

                    /**
                     * 自动续费标记，0:默认状态(用户未设置，即初始状态即手动续费，用户开通了预付费不停服特权也会进行自动续费)， 1:自动续费，2:明确不自动续费(用户设置)。若业务无续费概念或无需自动续费，需要设置为0
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 安全组ids，安全组可以传数组形式，兼容之前SecurityGroupId参数
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * DCN同步模式，0：异步， 1：强同步 
                     */
                    int64_t m_dcnSyncMode;
                    bool m_dcnSyncModeHasBeenSet;

                    /**
                     * Cpu类型，如：英特尔：Intel/AMD，海光：Hygon，默认Intel/AMD
                     */
                    std::string m_cpuType;
                    bool m_cpuTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_CREATEDCDBINSTANCEREQUEST_H_
