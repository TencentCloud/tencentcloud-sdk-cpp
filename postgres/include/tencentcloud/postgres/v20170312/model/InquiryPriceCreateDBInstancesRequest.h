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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_INQUIRYPRICECREATEDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_INQUIRYPRICECREATEDBINSTANCESREQUEST_H_

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
                * InquiryPriceCreateDBInstances请求参数结构体
                */
                class InquiryPriceCreateDBInstancesRequest : public AbstractModel
                {
                public:
                    InquiryPriceCreateDBInstancesRequest();
                    ~InquiryPriceCreateDBInstancesRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取规格ID。该参数可以通过调用DescribeClasses接口的返回值中的SpecCode字段来获取。
                     * @return SpecCode 规格ID。该参数可以通过调用DescribeClasses接口的返回值中的SpecCode字段来获取。
                     * 
                     */
                    std::string GetSpecCode() const;

                    /**
                     * 设置规格ID。该参数可以通过调用DescribeClasses接口的返回值中的SpecCode字段来获取。
                     * @param _specCode 规格ID。该参数可以通过调用DescribeClasses接口的返回值中的SpecCode字段来获取。
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
                     * 获取存储容量大小，单位：GB。
                     * @return Storage 存储容量大小，单位：GB。
                     * 
                     */
                    uint64_t GetStorage() const;

                    /**
                     * 设置存储容量大小，单位：GB。
                     * @param _storage 存储容量大小，单位：GB。
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
                     * 获取实例数量。目前最大数量不超过100，如需一次性创建更多实例，请联系客服支持。
                     * @return InstanceCount 实例数量。目前最大数量不超过100，如需一次性创建更多实例，请联系客服支持。
                     * 
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置实例数量。目前最大数量不超过100，如需一次性创建更多实例，请联系客服支持。
                     * @param _instanceCount 实例数量。目前最大数量不超过100，如需一次性创建更多实例，请联系客服支持。
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
                     * 获取购买时长，单位：月。目前只支持1,2,3,4,5,6,7,8,9,10,11,12,24,36这些值。
                     * @return Period 购买时长，单位：月。目前只支持1,2,3,4,5,6,7,8,9,10,11,12,24,36这些值。
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置购买时长，单位：月。目前只支持1,2,3,4,5,6,7,8,9,10,11,12,24,36这些值。
                     * @param _period 购买时长，单位：月。目前只支持1,2,3,4,5,6,7,8,9,10,11,12,24,36这些值。
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
                     * 获取【弃字段，不再生效】，计费ID。该参数可以通过调用DescribeProductConfig接口的返回值中的Pid字段来获取。
                     * @return Pid 【弃字段，不再生效】，计费ID。该参数可以通过调用DescribeProductConfig接口的返回值中的Pid字段来获取。
                     * 
                     */
                    uint64_t GetPid() const;

                    /**
                     * 设置【弃字段，不再生效】，计费ID。该参数可以通过调用DescribeProductConfig接口的返回值中的Pid字段来获取。
                     * @param _pid 【弃字段，不再生效】，计费ID。该参数可以通过调用DescribeProductConfig接口的返回值中的Pid字段来获取。
                     * 
                     */
                    void SetPid(const uint64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取实例计费类型。目前只支持：PREPAID（预付费，即包年包月）。
                     * @return InstanceChargeType 实例计费类型。目前只支持：PREPAID（预付费，即包年包月）。
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置实例计费类型。目前只支持：PREPAID（预付费，即包年包月）。
                     * @param _instanceChargeType 实例计费类型。目前只支持：PREPAID（预付费，即包年包月）。
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
                     * 获取实例类型，默认primary，支持如下：
primary（双机高可用（一主一从））
readonly（只读实例）
                     * @return InstanceType 实例类型，默认primary，支持如下：
primary（双机高可用（一主一从））
readonly（只读实例）
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例类型，默认primary，支持如下：
primary（双机高可用（一主一从））
readonly（只读实例）
                     * @param _instanceType 实例类型，默认primary，支持如下：
primary（双机高可用（一主一从））
readonly（只读实例）
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
                     * 获取DB引擎，默认postgresql，支持如下：
postgresql（云数据库PostgreSQL）
mssql_compatible（MSSQL兼容-云数据库PostgreSQL）
                     * @return DBEngine DB引擎，默认postgresql，支持如下：
postgresql（云数据库PostgreSQL）
mssql_compatible（MSSQL兼容-云数据库PostgreSQL）
                     * 
                     */
                    std::string GetDBEngine() const;

                    /**
                     * 设置DB引擎，默认postgresql，支持如下：
postgresql（云数据库PostgreSQL）
mssql_compatible（MSSQL兼容-云数据库PostgreSQL）
                     * @param _dBEngine DB引擎，默认postgresql，支持如下：
postgresql（云数据库PostgreSQL）
mssql_compatible（MSSQL兼容-云数据库PostgreSQL）
                     * 
                     */
                    void SetDBEngine(const std::string& _dBEngine);

                    /**
                     * 判断参数 DBEngine 是否已赋值
                     * @return DBEngine 是否已赋值
                     * 
                     */
                    bool DBEngineHasBeenSet() const;

                private:

                    /**
                     * 可用区ID。该参数可以通过调用 DescribeZones 接口的返回值中的Zone字段来获取。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 规格ID。该参数可以通过调用DescribeClasses接口的返回值中的SpecCode字段来获取。
                     */
                    std::string m_specCode;
                    bool m_specCodeHasBeenSet;

                    /**
                     * 存储容量大小，单位：GB。
                     */
                    uint64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 实例数量。目前最大数量不超过100，如需一次性创建更多实例，请联系客服支持。
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * 购买时长，单位：月。目前只支持1,2,3,4,5,6,7,8,9,10,11,12,24,36这些值。
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 【弃字段，不再生效】，计费ID。该参数可以通过调用DescribeProductConfig接口的返回值中的Pid字段来获取。
                     */
                    uint64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * 实例计费类型。目前只支持：PREPAID（预付费，即包年包月）。
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * 实例类型，默认primary，支持如下：
primary（双机高可用（一主一从））
readonly（只读实例）
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * DB引擎，默认postgresql，支持如下：
postgresql（云数据库PostgreSQL）
mssql_compatible（MSSQL兼容-云数据库PostgreSQL）
                     */
                    std::string m_dBEngine;
                    bool m_dBEngineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_INQUIRYPRICECREATEDBINSTANCESREQUEST_H_
