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

#ifndef TENCENTCLOUD_TDCPG_V20211118_MODEL_CLUSTER_H_
#define TENCENTCLOUD_TDCPG_V20211118_MODEL_CLUSTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdcpg/v20211118/model/Endpoint.h>


namespace TencentCloud
{
    namespace Tdcpg
    {
        namespace V20211118
        {
            namespace Model
            {
                /**
                * 集群信息
                */
                class Cluster : public AbstractModel
                {
                public:
                    Cluster();
                    ~Cluster() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群ID，集群的唯一标识
                     * @return ClusterId 集群ID，集群的唯一标识
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID，集群的唯一标识
                     * @param _clusterId 集群ID，集群的唯一标识
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取集群名字，不修改时默认和集群ID相同
                     * @return ClusterName 集群名字，不修改时默认和集群ID相同
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名字，不修改时默认和集群ID相同
                     * @param _clusterName 集群名字，不修改时默认和集群ID相同
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
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
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
                     * 获取TDSQL-C PostgreSQL 合入的社区版本号
                     * @return DBVersion TDSQL-C PostgreSQL 合入的社区版本号
                     * 
                     */
                    std::string GetDBVersion() const;

                    /**
                     * 设置TDSQL-C PostgreSQL 合入的社区版本号
                     * @param _dBVersion TDSQL-C PostgreSQL 合入的社区版本号
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
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
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
                     * 获取集群状态。目前包括
 - creating ：创建中
 - running : 运行中
 - isolating : 隔离中
 - isolated : 已隔离
 - recovering : 恢复中
 - deleting : 删除中
 - deleted : 已删除
                     * @return Status 集群状态。目前包括
 - creating ：创建中
 - running : 运行中
 - isolating : 隔离中
 - isolated : 已隔离
 - recovering : 恢复中
 - deleting : 删除中
 - deleted : 已删除
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置集群状态。目前包括
 - creating ：创建中
 - running : 运行中
 - isolating : 隔离中
 - isolated : 已隔离
 - recovering : 恢复中
 - deleting : 删除中
 - deleted : 已删除
                     * @param _status 集群状态。目前包括
 - creating ：创建中
 - running : 运行中
 - isolating : 隔离中
 - isolated : 已隔离
 - recovering : 恢复中
 - deleting : 删除中
 - deleted : 已删除
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取集群状态中文含义
                     * @return StatusDesc 集群状态中文含义
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置集群状态中文含义
                     * @param _statusDesc 集群状态中文含义
                     * 
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取集群创建时间。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     * @return CreateTime 集群创建时间。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置集群创建时间。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     * @param _createTime 集群创建时间。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
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
                     * 获取存储当前使用量，单位GiB
                     * @return StorageUsed 存储当前使用量，单位GiB
                     * 
                     */
                    double GetStorageUsed() const;

                    /**
                     * 设置存储当前使用量，单位GiB
                     * @param _storageUsed 存储当前使用量，单位GiB
                     * 
                     */
                    void SetStorageUsed(const double& _storageUsed);

                    /**
                     * 判断参数 StorageUsed 是否已赋值
                     * @return StorageUsed 是否已赋值
                     * 
                     */
                    bool StorageUsedHasBeenSet() const;

                    /**
                     * 获取存储最大使用量，单位GiB
                     * @return StorageLimit 存储最大使用量，单位GiB
                     * 
                     */
                    uint64_t GetStorageLimit() const;

                    /**
                     * 设置存储最大使用量，单位GiB
                     * @param _storageLimit 存储最大使用量，单位GiB
                     * 
                     */
                    void SetStorageLimit(const uint64_t& _storageLimit);

                    /**
                     * 判断参数 StorageLimit 是否已赋值
                     * @return StorageLimit 是否已赋值
                     * 
                     */
                    bool StorageLimitHasBeenSet() const;

                    /**
                     * 获取付费模式：
 - PREPAID : 预付费，即包年包月
 - POSTPAID_BY_HOUR : 按小时结算后付费
                     * @return PayMode 付费模式：
 - PREPAID : 预付费，即包年包月
 - POSTPAID_BY_HOUR : 按小时结算后付费
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置付费模式：
 - PREPAID : 预付费，即包年包月
 - POSTPAID_BY_HOUR : 按小时结算后付费
                     * @param _payMode 付费模式：
 - PREPAID : 预付费，即包年包月
 - POSTPAID_BY_HOUR : 按小时结算后付费
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
                     * 获取预付费集群到期时间。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     * @return PayPeriodEndTime 预付费集群到期时间。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     * 
                     */
                    std::string GetPayPeriodEndTime() const;

                    /**
                     * 设置预付费集群到期时间。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     * @param _payPeriodEndTime 预付费集群到期时间。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     * 
                     */
                    void SetPayPeriodEndTime(const std::string& _payPeriodEndTime);

                    /**
                     * 判断参数 PayPeriodEndTime 是否已赋值
                     * @return PayPeriodEndTime 是否已赋值
                     * 
                     */
                    bool PayPeriodEndTimeHasBeenSet() const;

                    /**
                     * 获取预付费集群自动续费标签
 - 0 : 到期不自动续费
 - 1 : 到期自动续费
                     * @return AutoRenewFlag 预付费集群自动续费标签
 - 0 : 到期不自动续费
 - 1 : 到期自动续费
                     * 
                     */
                    uint64_t GetAutoRenewFlag() const;

                    /**
                     * 设置预付费集群自动续费标签
 - 0 : 到期不自动续费
 - 1 : 到期自动续费
                     * @param _autoRenewFlag 预付费集群自动续费标签
 - 0 : 到期不自动续费
 - 1 : 到期自动续费
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
                     * 获取数据库字符集
                     * @return DBCharset 数据库字符集
                     * 
                     */
                    std::string GetDBCharset() const;

                    /**
                     * 设置数据库字符集
                     * @param _dBCharset 数据库字符集
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
                     * 获取集群内实例的数量
                     * @return InstanceCount 集群内实例的数量
                     * 
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置集群内实例的数量
                     * @param _instanceCount 集群内实例的数量
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
                     * 获取集群内访问点信息
                     * @return EndpointSet 集群内访问点信息
                     * 
                     */
                    std::vector<Endpoint> GetEndpointSet() const;

                    /**
                     * 设置集群内访问点信息
                     * @param _endpointSet 集群内访问点信息
                     * 
                     */
                    void SetEndpointSet(const std::vector<Endpoint>& _endpointSet);

                    /**
                     * 判断参数 EndpointSet 是否已赋值
                     * @return EndpointSet 是否已赋值
                     * 
                     */
                    bool EndpointSetHasBeenSet() const;

                    /**
                     * 获取TDSQL-C PostgreSQL 合入的社区主要版本号
                     * @return DBMajorVersion TDSQL-C PostgreSQL 合入的社区主要版本号
                     * 
                     */
                    std::string GetDBMajorVersion() const;

                    /**
                     * 设置TDSQL-C PostgreSQL 合入的社区主要版本号
                     * @param _dBMajorVersion TDSQL-C PostgreSQL 合入的社区主要版本号
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
                     * 获取TDSQL-C PostgreSQL 内核版本号
                     * @return DBKernelVersion TDSQL-C PostgreSQL 内核版本号
                     * 
                     */
                    std::string GetDBKernelVersion() const;

                    /**
                     * 设置TDSQL-C PostgreSQL 内核版本号
                     * @param _dBKernelVersion TDSQL-C PostgreSQL 内核版本号
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
                     * 获取存储付费模式
 - PREPAID：预付费，即包年包月
 - POSTPAID_BY_HOUR：按小时后付费
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StoragePayMode 存储付费模式
 - PREPAID：预付费，即包年包月
 - POSTPAID_BY_HOUR：按小时后付费
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStoragePayMode() const;

                    /**
                     * 设置存储付费模式
 - PREPAID：预付费，即包年包月
 - POSTPAID_BY_HOUR：按小时后付费
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storagePayMode 存储付费模式
 - PREPAID：预付费，即包年包月
 - POSTPAID_BY_HOUR：按小时后付费
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStoragePayMode(const std::string& _storagePayMode);

                    /**
                     * 判断参数 StoragePayMode 是否已赋值
                     * @return StoragePayMode 是否已赋值
                     * 
                     */
                    bool StoragePayModeHasBeenSet() const;

                private:

                    /**
                     * 集群ID，集群的唯一标识
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群名字，不修改时默认和集群ID相同
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * TDSQL-C PostgreSQL 合入的社区版本号
                     */
                    std::string m_dBVersion;
                    bool m_dBVersionHasBeenSet;

                    /**
                     * 项目ID
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 集群状态。目前包括
 - creating ：创建中
 - running : 运行中
 - isolating : 隔离中
 - isolated : 已隔离
 - recovering : 恢复中
 - deleting : 删除中
 - deleted : 已删除
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 集群状态中文含义
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * 集群创建时间。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 存储当前使用量，单位GiB
                     */
                    double m_storageUsed;
                    bool m_storageUsedHasBeenSet;

                    /**
                     * 存储最大使用量，单位GiB
                     */
                    uint64_t m_storageLimit;
                    bool m_storageLimitHasBeenSet;

                    /**
                     * 付费模式：
 - PREPAID : 预付费，即包年包月
 - POSTPAID_BY_HOUR : 按小时结算后付费
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 预付费集群到期时间。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     */
                    std::string m_payPeriodEndTime;
                    bool m_payPeriodEndTimeHasBeenSet;

                    /**
                     * 预付费集群自动续费标签
 - 0 : 到期不自动续费
 - 1 : 到期自动续费
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 数据库字符集
                     */
                    std::string m_dBCharset;
                    bool m_dBCharsetHasBeenSet;

                    /**
                     * 集群内实例的数量
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * 集群内访问点信息
                     */
                    std::vector<Endpoint> m_endpointSet;
                    bool m_endpointSetHasBeenSet;

                    /**
                     * TDSQL-C PostgreSQL 合入的社区主要版本号
                     */
                    std::string m_dBMajorVersion;
                    bool m_dBMajorVersionHasBeenSet;

                    /**
                     * TDSQL-C PostgreSQL 内核版本号
                     */
                    std::string m_dBKernelVersion;
                    bool m_dBKernelVersionHasBeenSet;

                    /**
                     * 存储付费模式
 - PREPAID：预付费，即包年包月
 - POSTPAID_BY_HOUR：按小时后付费
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_storagePayMode;
                    bool m_storagePayModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDCPG_V20211118_MODEL_CLUSTER_H_
