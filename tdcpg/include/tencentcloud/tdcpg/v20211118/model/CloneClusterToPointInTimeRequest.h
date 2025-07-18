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

#ifndef TENCENTCLOUD_TDCPG_V20211118_MODEL_CLONECLUSTERTOPOINTINTIMEREQUEST_H_
#define TENCENTCLOUD_TDCPG_V20211118_MODEL_CLONECLUSTERTOPOINTINTIMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdcpg
    {
        namespace V20211118
        {
            namespace Model
            {
                /**
                * CloneClusterToPointInTime请求参数结构体
                */
                class CloneClusterToPointInTimeRequest : public AbstractModel
                {
                public:
                    CloneClusterToPointInTimeRequest();
                    ~CloneClusterToPointInTimeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取可用区
                     * @return Zone 可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param _zone 可用区
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
                     * 获取数据库版本，目前仅支持 10.17
                     * @return DBVersion 数据库版本，目前仅支持 10.17
                     * 
                     */
                    std::string GetDBVersion() const;

                    /**
                     * 设置数据库版本，目前仅支持 10.17
                     * @param _dBVersion 数据库版本，目前仅支持 10.17
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
                     * 获取CPU核数。取值参考文档【购买指南】
                     * @return CPU CPU核数。取值参考文档【购买指南】
                     * 
                     */
                    uint64_t GetCPU() const;

                    /**
                     * 设置CPU核数。取值参考文档【购买指南】
                     * @param _cPU CPU核数。取值参考文档【购买指南】
                     * 
                     */
                    void SetCPU(const uint64_t& _cPU);

                    /**
                     * 判断参数 CPU 是否已赋值
                     * @return CPU 是否已赋值
                     * 
                     */
                    bool CPUHasBeenSet() const;

                    /**
                     * 获取内存大小，单位GiB。取值参考文档【购买指南】
                     * @return Memory 内存大小，单位GiB。取值参考文档【购买指南】
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置内存大小，单位GiB。取值参考文档【购买指南】
                     * @param _memory 内存大小，单位GiB。取值参考文档【购买指南】
                     * 
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取私有网络ID
                     * @return VpcId 私有网络ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID
                     * @param _vpcId 私有网络ID
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
                     * 获取已配置的私有网络中的子网ID
                     * @return SubnetId 已配置的私有网络中的子网ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置已配置的私有网络中的子网ID
                     * @param _subnetId 已配置的私有网络中的子网ID
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
                     * 获取集群付费模式
- PREPAID：预付费，即包年包月
- POSTPAID_BY_HOUR：按小时后付费
                     * @return PayMode 集群付费模式
- PREPAID：预付费，即包年包月
- POSTPAID_BY_HOUR：按小时后付费
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置集群付费模式
- PREPAID：预付费，即包年包月
- POSTPAID_BY_HOUR：按小时后付费
                     * @param _payMode 集群付费模式
- PREPAID：预付费，即包年包月
- POSTPAID_BY_HOUR：按小时后付费
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取对应的备份数据来源集群ID
                     * @return SourceClusterId 对应的备份数据来源集群ID
                     * 
                     */
                    std::string GetSourceClusterId() const;

                    /**
                     * 设置对应的备份数据来源集群ID
                     * @param _sourceClusterId 对应的备份数据来源集群ID
                     * 
                     */
                    void SetSourceClusterId(const std::string& _sourceClusterId);

                    /**
                     * 判断参数 SourceClusterId 是否已赋值
                     * @return SourceClusterId 是否已赋值
                     * 
                     */
                    bool SourceClusterIdHasBeenSet() const;

                    /**
                     * 获取对应的备份数据时间点。按照RFC3339标准表示，并且使用东八区时区时间。格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     * @return SourceDataPoint 对应的备份数据时间点。按照RFC3339标准表示，并且使用东八区时区时间。格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     * 
                     */
                    std::string GetSourceDataPoint() const;

                    /**
                     * 设置对应的备份数据时间点。按照RFC3339标准表示，并且使用东八区时区时间。格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     * @param _sourceDataPoint 对应的备份数据时间点。按照RFC3339标准表示，并且使用东八区时区时间。格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     * 
                     */
                    void SetSourceDataPoint(const std::string& _sourceDataPoint);

                    /**
                     * 判断参数 SourceDataPoint 是否已赋值
                     * @return SourceDataPoint 是否已赋值
                     * 
                     */
                    bool SourceDataPointHasBeenSet() const;

                    /**
                     * 获取集群名，1-60个字符，可以包含中文、英文、数字和符号"-"、"_"、"."。不输入此参数时默认与ClusterId保持一致。
                     * @return ClusterName 集群名，1-60个字符，可以包含中文、英文、数字和符号"-"、"_"、"."。不输入此参数时默认与ClusterId保持一致。
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名，1-60个字符，可以包含中文、英文、数字和符号"-"、"_"、"."。不输入此参数时默认与ClusterId保持一致。
                     * @param _clusterName 集群名，1-60个字符，可以包含中文、英文、数字和符号"-"、"_"、"."。不输入此参数时默认与ClusterId保持一致。
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取项目Id，默认为0表示默认项目
                     * @return ProjectId 项目Id，默认为0表示默认项目
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置项目Id，默认为0表示默认项目
                     * @param _projectId 项目Id，默认为0表示默认项目
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
                     * 获取连接数据库时，Endpoint使用的端口。取值范围为[1,65534]，默认值为5432
                     * @return Port 连接数据库时，Endpoint使用的端口。取值范围为[1,65534]，默认值为5432
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置连接数据库时，Endpoint使用的端口。取值范围为[1,65534]，默认值为5432
                     * @param _port 连接数据库时，Endpoint使用的端口。取值范围为[1,65534]，默认值为5432
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取集群下实例数量。取值范围为[1,4]，默认值为1
                     * @return InstanceCount 集群下实例数量。取值范围为[1,4]，默认值为1
                     * 
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置集群下实例数量。取值范围为[1,4]，默认值为1
                     * @param _instanceCount 集群下实例数量。取值范围为[1,4]，默认值为1
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
                     * 获取购买时长，单位：月。取值范围为[1,60]，默认值为1。
只有当PayMode为PREPAID时生效。
                     * @return Period 购买时长，单位：月。取值范围为[1,60]，默认值为1。
只有当PayMode为PREPAID时生效。
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置购买时长，单位：月。取值范围为[1,60]，默认值为1。
只有当PayMode为PREPAID时生效。
                     * @param _period 购买时长，单位：月。取值范围为[1,60]，默认值为1。
只有当PayMode为PREPAID时生效。
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
                     * 获取是否自动续费，0-不 1-是。默认为0，只有当PayMode为PREPAID时生效。
                     * @return AutoRenewFlag 是否自动续费，0-不 1-是。默认为0，只有当PayMode为PREPAID时生效。
                     * 
                     */
                    uint64_t GetAutoRenewFlag() const;

                    /**
                     * 设置是否自动续费，0-不 1-是。默认为0，只有当PayMode为PREPAID时生效。
                     * @param _autoRenewFlag 是否自动续费，0-不 1-是。默认为0，只有当PayMode为PREPAID时生效。
                     * 
                     */
                    void SetAutoRenewFlag(const uint64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取存储付费模式
 - PREPAID：预付费，即包年包月
 - POSTPAID_BY_HOUR：按小时后付费
默认为POSTPAID_BY_HOUR，实例付费模式为按小时付费时，存储付费模式不支持包年包月
                     * @return StoragePayMode 存储付费模式
 - PREPAID：预付费，即包年包月
 - POSTPAID_BY_HOUR：按小时后付费
默认为POSTPAID_BY_HOUR，实例付费模式为按小时付费时，存储付费模式不支持包年包月
                     * 
                     */
                    std::string GetStoragePayMode() const;

                    /**
                     * 设置存储付费模式
 - PREPAID：预付费，即包年包月
 - POSTPAID_BY_HOUR：按小时后付费
默认为POSTPAID_BY_HOUR，实例付费模式为按小时付费时，存储付费模式不支持包年包月
                     * @param _storagePayMode 存储付费模式
 - PREPAID：预付费，即包年包月
 - POSTPAID_BY_HOUR：按小时后付费
默认为POSTPAID_BY_HOUR，实例付费模式为按小时付费时，存储付费模式不支持包年包月
                     * 
                     */
                    void SetStoragePayMode(const std::string& _storagePayMode);

                    /**
                     * 判断参数 StoragePayMode 是否已赋值
                     * @return StoragePayMode 是否已赋值
                     * 
                     */
                    bool StoragePayModeHasBeenSet() const;

                    /**
                     * 获取存储最大使用量，单位GB。取值参考文档【购买指南】。存储使用预付费模式时必须设置，存储使用按小时后付费时不可设置
                     * @return Storage 存储最大使用量，单位GB。取值参考文档【购买指南】。存储使用预付费模式时必须设置，存储使用按小时后付费时不可设置
                     * 
                     */
                    uint64_t GetStorage() const;

                    /**
                     * 设置存储最大使用量，单位GB。取值参考文档【购买指南】。存储使用预付费模式时必须设置，存储使用按小时后付费时不可设置
                     * @param _storage 存储最大使用量，单位GB。取值参考文档【购买指南】。存储使用预付费模式时必须设置，存储使用按小时后付费时不可设置
                     * 
                     */
                    void SetStorage(const uint64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                private:

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 数据库版本，目前仅支持 10.17
                     */
                    std::string m_dBVersion;
                    bool m_dBVersionHasBeenSet;

                    /**
                     * CPU核数。取值参考文档【购买指南】
                     */
                    uint64_t m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * 内存大小，单位GiB。取值参考文档【购买指南】
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 私有网络ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 已配置的私有网络中的子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 集群付费模式
- PREPAID：预付费，即包年包月
- POSTPAID_BY_HOUR：按小时后付费
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 对应的备份数据来源集群ID
                     */
                    std::string m_sourceClusterId;
                    bool m_sourceClusterIdHasBeenSet;

                    /**
                     * 对应的备份数据时间点。按照RFC3339标准表示，并且使用东八区时区时间。格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     */
                    std::string m_sourceDataPoint;
                    bool m_sourceDataPointHasBeenSet;

                    /**
                     * 集群名，1-60个字符，可以包含中文、英文、数字和符号"-"、"_"、"."。不输入此参数时默认与ClusterId保持一致。
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 项目Id，默认为0表示默认项目
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 连接数据库时，Endpoint使用的端口。取值范围为[1,65534]，默认值为5432
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 集群下实例数量。取值范围为[1,4]，默认值为1
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * 购买时长，单位：月。取值范围为[1,60]，默认值为1。
只有当PayMode为PREPAID时生效。
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 是否自动续费，0-不 1-是。默认为0，只有当PayMode为PREPAID时生效。
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 存储付费模式
 - PREPAID：预付费，即包年包月
 - POSTPAID_BY_HOUR：按小时后付费
默认为POSTPAID_BY_HOUR，实例付费模式为按小时付费时，存储付费模式不支持包年包月
                     */
                    std::string m_storagePayMode;
                    bool m_storagePayModeHasBeenSet;

                    /**
                     * 存储最大使用量，单位GB。取值参考文档【购买指南】。存储使用预付费模式时必须设置，存储使用按小时后付费时不可设置
                     */
                    uint64_t m_storage;
                    bool m_storageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDCPG_V20211118_MODEL_CLONECLUSTERTOPOINTINTIMEREQUEST_H_
