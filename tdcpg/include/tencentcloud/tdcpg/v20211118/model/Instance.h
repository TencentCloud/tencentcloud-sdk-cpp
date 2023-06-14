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

#ifndef TENCENTCLOUD_TDCPG_V20211118_MODEL_INSTANCE_H_
#define TENCENTCLOUD_TDCPG_V20211118_MODEL_INSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 集群下的实例信息
                */
                class Instance : public AbstractModel
                {
                public:
                    Instance();
                    ~Instance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID，集群下唯一
                     * @return InstanceId 实例ID，集群下唯一
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，集群下唯一
                     * @param _instanceId 实例ID，集群下唯一
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例名字，默认和实例ID一致
                     * @return InstanceName 实例名字，默认和实例ID一致
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名字，默认和实例ID一致
                     * @param _instanceName 实例名字，默认和实例ID一致
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
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
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
                     * 获取实例所在的访问点ID
                     * @return EndpointId 实例所在的访问点ID
                     * 
                     */
                    std::string GetEndpointId() const;

                    /**
                     * 设置实例所在的访问点ID
                     * @param _endpointId 实例所在的访问点ID
                     * 
                     */
                    void SetEndpointId(const std::string& _endpointId);

                    /**
                     * 判断参数 EndpointId 是否已赋值
                     * @return EndpointId 是否已赋值
                     * 
                     */
                    bool EndpointIdHasBeenSet() const;

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
                     * 获取数据库版本
                     * @return DBVersion 数据库版本
                     * 
                     */
                    std::string GetDBVersion() const;

                    /**
                     * 设置数据库版本
                     * @param _dBVersion 数据库版本
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
                     * 获取实例状态
                     * @return Status 实例状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置实例状态
                     * @param _status 实例状态
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
                     * 获取实例状态中文含义
                     * @return StatusDesc 实例状态中文含义
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置实例状态中文含义
                     * @param _statusDesc 实例状态中文含义
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
                     * 获取实例创建时间。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     * @return CreateTime 实例创建时间。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置实例创建时间。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     * @param _createTime 实例创建时间。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
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
                     * 获取付费模式：
- PREPAID : 预付费
- POSTPAID_BY_HOUR : 按小时结算后付费

同一集群下付费模式需要保持一致。
                     * @return PayMode 付费模式：
- PREPAID : 预付费
- POSTPAID_BY_HOUR : 按小时结算后付费

同一集群下付费模式需要保持一致。
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置付费模式：
- PREPAID : 预付费
- POSTPAID_BY_HOUR : 按小时结算后付费

同一集群下付费模式需要保持一致。
                     * @param _payMode 付费模式：
- PREPAID : 预付费
- POSTPAID_BY_HOUR : 按小时结算后付费

同一集群下付费模式需要保持一致。
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
                     * 获取实例到期时间。同一集群下到期时间需要保持一致。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     * @return PayPeriodEndTime 实例到期时间。同一集群下到期时间需要保持一致。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     * 
                     */
                    std::string GetPayPeriodEndTime() const;

                    /**
                     * 设置实例到期时间。同一集群下到期时间需要保持一致。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     * @param _payPeriodEndTime 实例到期时间。同一集群下到期时间需要保持一致。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
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
                     * 获取CPU核数
                     * @return CPU CPU核数
                     * 
                     */
                    uint64_t GetCPU() const;

                    /**
                     * 设置CPU核数
                     * @param _cPU CPU核数
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
                     * 获取内存大小，单位GiB
                     * @return Memory 内存大小，单位GiB
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置内存大小，单位GiB
                     * @param _memory 内存大小，单位GiB
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
                     * 获取实例类型
 - RW：读写实例
 - RO：只读实例
                     * @return InstanceType 实例类型
 - RW：读写实例
 - RO：只读实例
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例类型
 - RW：读写实例
 - RO：只读实例
                     * @param _instanceType 实例类型
 - RW：读写实例
 - RO：只读实例
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

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

                private:

                    /**
                     * 实例ID，集群下唯一
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名字，默认和实例ID一致
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 实例所在的访问点ID
                     */
                    std::string m_endpointId;
                    bool m_endpointIdHasBeenSet;

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
                     * 数据库版本
                     */
                    std::string m_dBVersion;
                    bool m_dBVersionHasBeenSet;

                    /**
                     * 实例状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例状态中文含义
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * 实例创建时间。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 付费模式：
- PREPAID : 预付费
- POSTPAID_BY_HOUR : 按小时结算后付费

同一集群下付费模式需要保持一致。
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 实例到期时间。同一集群下到期时间需要保持一致。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     */
                    std::string m_payPeriodEndTime;
                    bool m_payPeriodEndTimeHasBeenSet;

                    /**
                     * CPU核数
                     */
                    uint64_t m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * 内存大小，单位GiB
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 实例类型
 - RW：读写实例
 - RO：只读实例
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDCPG_V20211118_MODEL_INSTANCE_H_
