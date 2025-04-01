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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_CREATEHOURDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_CREATEHOURDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mariadb/v20170312/model/ResourceTag.h>
#include <tencentcloud/mariadb/v20170312/model/DBParamValue.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateHourDBInstance请求参数结构体
                */
                class CreateHourDBInstanceRequest : public AbstractModel
                {
                public:
                    CreateHourDBInstanceRequest();
                    ~CreateHourDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取节点可用区分布，可填写多个可用区。
                     * @return Zones 节点可用区分布，可填写多个可用区。
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置节点可用区分布，可填写多个可用区。
                     * @param _zones 节点可用区分布，可填写多个可用区。
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
                     * 获取节点个数
                     * @return NodeCount 节点个数
                     * 
                     */
                    int64_t GetNodeCount() const;

                    /**
                     * 设置节点个数
                     * @param _nodeCount 节点个数
                     * 
                     */
                    void SetNodeCount(const int64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取内存大小，单位：GB
                     * @return Memory 内存大小，单位：GB
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置内存大小，单位：GB
                     * @param _memory 内存大小，单位：GB
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取储存大小，单位：GB
                     * @return Storage 储存大小，单位：GB
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置储存大小，单位：GB
                     * @param _storage 储存大小，单位：GB
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
                     * 获取购买实例数量
                     * @return Count 购买实例数量
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置购买实例数量
                     * @param _count 购买实例数量
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
                     * 获取项目ID，不传表示默认项目
                     * @return ProjectId 项目ID，不传表示默认项目
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目ID，不传表示默认项目
                     * @param _projectId 项目ID，不传表示默认项目
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
                     * 获取统一网络ID，不传表示基础网络
                     * @return VpcId 统一网络ID，不传表示基础网络
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置统一网络ID，不传表示基础网络
                     * @param _vpcId 统一网络ID，不传表示基础网络
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
                     * 获取统一子网ID，VpcId有值时需填写
                     * @return SubnetId 统一子网ID，VpcId有值时需填写
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置统一子网ID，VpcId有值时需填写
                     * @param _subnetId 统一子网ID，VpcId有值时需填写
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
                     * 获取数据库引擎版本，当前可选：8.0，5.7，10.1。
                     * @return DbVersionId 数据库引擎版本，当前可选：8.0，5.7，10.1。
                     * 
                     */
                    std::string GetDbVersionId() const;

                    /**
                     * 设置数据库引擎版本，当前可选：8.0，5.7，10.1。
                     * @param _dbVersionId 数据库引擎版本，当前可选：8.0，5.7，10.1。
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
                     * 获取自定义实例名称
                     * @return InstanceName 自定义实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置自定义实例名称
                     * @param _instanceName 自定义实例名称
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
                     * 获取安全组ID，不传表示不绑定安全组
                     * @return SecurityGroupIds 安全组ID，不传表示不绑定安全组
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置安全组ID，不传表示不绑定安全组
                     * @param _securityGroupIds 安全组ID，不传表示不绑定安全组
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
                     * 获取参数列表。本接口的可选值为：
character_set_server（字符集，必传），lower_case_table_names（表名大小写敏感，必传，0 - 敏感；1-不敏感），
innodb_page_size（innodb数据页，默认16K），sync_mode（同步模式：0 - 异步； 1 - 强同步；2 - 强同步可退化，默认为强同步可退化）。
                     * @return InitParams 参数列表。本接口的可选值为：
character_set_server（字符集，必传），lower_case_table_names（表名大小写敏感，必传，0 - 敏感；1-不敏感），
innodb_page_size（innodb数据页，默认16K），sync_mode（同步模式：0 - 异步； 1 - 强同步；2 - 强同步可退化，默认为强同步可退化）。
                     * 
                     */
                    std::vector<DBParamValue> GetInitParams() const;

                    /**
                     * 设置参数列表。本接口的可选值为：
character_set_server（字符集，必传），lower_case_table_names（表名大小写敏感，必传，0 - 敏感；1-不敏感），
innodb_page_size（innodb数据页，默认16K），sync_mode（同步模式：0 - 异步； 1 - 强同步；2 - 强同步可退化，默认为强同步可退化）。
                     * @param _initParams 参数列表。本接口的可选值为：
character_set_server（字符集，必传），lower_case_table_names（表名大小写敏感，必传，0 - 敏感；1-不敏感），
innodb_page_size（innodb数据页，默认16K），sync_mode（同步模式：0 - 异步； 1 - 强同步；2 - 强同步可退化，默认为强同步可退化）。
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
                     * 获取回档源实例ID，例如“2021-11-22 00:00:00”
                     * @return RollbackInstanceId 回档源实例ID，例如“2021-11-22 00:00:00”
                     * 
                     */
                    std::string GetRollbackInstanceId() const;

                    /**
                     * 设置回档源实例ID，例如“2021-11-22 00:00:00”
                     * @param _rollbackInstanceId 回档源实例ID，例如“2021-11-22 00:00:00”
                     * 
                     */
                    void SetRollbackInstanceId(const std::string& _rollbackInstanceId);

                    /**
                     * 判断参数 RollbackInstanceId 是否已赋值
                     * @return RollbackInstanceId 是否已赋值
                     * 
                     */
                    bool RollbackInstanceIdHasBeenSet() const;

                    /**
                     * 获取回档时间
                     * @return RollbackTime 回档时间
                     * 
                     */
                    std::string GetRollbackTime() const;

                    /**
                     * 设置回档时间
                     * @param _rollbackTime 回档时间
                     * 
                     */
                    void SetRollbackTime(const std::string& _rollbackTime);

                    /**
                     * 判断参数 RollbackTime 是否已赋值
                     * @return RollbackTime 是否已赋值
                     * 
                     */
                    bool RollbackTimeHasBeenSet() const;

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
                     * 获取cpu类型，英特尔：Intel/AMD，海光：Hygon，默认Intel/AMD
                     * @return CpuType cpu类型，英特尔：Intel/AMD，海光：Hygon，默认Intel/AMD
                     * 
                     */
                    std::string GetCpuType() const;

                    /**
                     * 设置cpu类型，英特尔：Intel/AMD，海光：Hygon，默认Intel/AMD
                     * @param _cpuType cpu类型，英特尔：Intel/AMD，海光：Hygon，默认Intel/AMD
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
                     * 节点可用区分布，可填写多个可用区。
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * 节点个数
                     */
                    int64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * 内存大小，单位：GB
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 储存大小，单位：GB
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 购买实例数量
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 项目ID，不传表示默认项目
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 统一网络ID，不传表示基础网络
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 统一子网ID，VpcId有值时需填写
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 数据库引擎版本，当前可选：8.0，5.7，10.1。
                     */
                    std::string m_dbVersionId;
                    bool m_dbVersionIdHasBeenSet;

                    /**
                     * 自定义实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 安全组ID，不传表示不绑定安全组
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

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
                     * 参数列表。本接口的可选值为：
character_set_server（字符集，必传），lower_case_table_names（表名大小写敏感，必传，0 - 敏感；1-不敏感），
innodb_page_size（innodb数据页，默认16K），sync_mode（同步模式：0 - 异步； 1 - 强同步；2 - 强同步可退化，默认为强同步可退化）。
                     */
                    std::vector<DBParamValue> m_initParams;
                    bool m_initParamsHasBeenSet;

                    /**
                     * 回档源实例ID，例如“2021-11-22 00:00:00”
                     */
                    std::string m_rollbackInstanceId;
                    bool m_rollbackInstanceIdHasBeenSet;

                    /**
                     * 回档时间
                     */
                    std::string m_rollbackTime;
                    bool m_rollbackTimeHasBeenSet;

                    /**
                     * DCN同步模式，0：异步， 1：强同步
                     */
                    int64_t m_dcnSyncMode;
                    bool m_dcnSyncModeHasBeenSet;

                    /**
                     * cpu类型，英特尔：Intel/AMD，海光：Hygon，默认Intel/AMD
                     */
                    std::string m_cpuType;
                    bool m_cpuTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_CREATEHOURDBINSTANCEREQUEST_H_
