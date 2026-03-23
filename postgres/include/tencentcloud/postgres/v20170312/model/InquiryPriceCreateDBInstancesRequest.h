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
                     * 获取<p>可用区名称。该参数可以通过调用<a href="https://cloud.tencent.com/document/product/409/16769"> DescribeZones</a> 接口的返回值中的Zone字段来获取。</p>
                     * @return Zone <p>可用区名称。该参数可以通过调用<a href="https://cloud.tencent.com/document/product/409/16769"> DescribeZones</a> 接口的返回值中的Zone字段来获取。</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区名称。该参数可以通过调用<a href="https://cloud.tencent.com/document/product/409/16769"> DescribeZones</a> 接口的返回值中的Zone字段来获取。</p>
                     * @param _zone <p>可用区名称。该参数可以通过调用<a href="https://cloud.tencent.com/document/product/409/16769"> DescribeZones</a> 接口的返回值中的Zone字段来获取。</p>
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
                     * 获取<p>规格ID。该参数可以通过调用<a href="https://cloud.tencent.com/document/product/409/89019">DescribeClasses</a>接口的返回值中的SpecCode字段来获取。</p>
                     * @return SpecCode <p>规格ID。该参数可以通过调用<a href="https://cloud.tencent.com/document/product/409/89019">DescribeClasses</a>接口的返回值中的SpecCode字段来获取。</p>
                     * 
                     */
                    std::string GetSpecCode() const;

                    /**
                     * 设置<p>规格ID。该参数可以通过调用<a href="https://cloud.tencent.com/document/product/409/89019">DescribeClasses</a>接口的返回值中的SpecCode字段来获取。</p>
                     * @param _specCode <p>规格ID。该参数可以通过调用<a href="https://cloud.tencent.com/document/product/409/89019">DescribeClasses</a>接口的返回值中的SpecCode字段来获取。</p>
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
                     * 获取<p>存储容量大小，单位：GB。该参数的设置步长为10。</p>
                     * @return Storage <p>存储容量大小，单位：GB。该参数的设置步长为10。</p>
                     * 
                     */
                    uint64_t GetStorage() const;

                    /**
                     * 设置<p>存储容量大小，单位：GB。该参数的设置步长为10。</p>
                     * @param _storage <p>存储容量大小，单位：GB。该参数的设置步长为10。</p>
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
                     * 获取<p>实例数量。目前最大数量不超过100，如需一次性创建更多实例，请联系客服支持。</p>
                     * @return InstanceCount <p>实例数量。目前最大数量不超过100，如需一次性创建更多实例，请联系客服支持。</p>
                     * 
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置<p>实例数量。目前最大数量不超过100，如需一次性创建更多实例，请联系客服支持。</p>
                     * @param _instanceCount <p>实例数量。目前最大数量不超过100，如需一次性创建更多实例，请联系客服支持。</p>
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
                     * 获取<p>购买时长，单位：月。目前只支持1,2,3,4,5,6,7,8,9,10,11,12,24,36这些值。</p>
                     * @return Period <p>购买时长，单位：月。目前只支持1,2,3,4,5,6,7,8,9,10,11,12,24,36这些值。</p>
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置<p>购买时长，单位：月。目前只支持1,2,3,4,5,6,7,8,9,10,11,12,24,36这些值。</p>
                     * @param _period <p>购买时长，单位：月。目前只支持1,2,3,4,5,6,7,8,9,10,11,12,24,36这些值。</p>
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
                     * 获取<p>【弃字段，不再生效】，计费ID。该参数可以通过调用DescribeProductConfig接口的返回值中的Pid字段来获取。</p>
                     * @return Pid <p>【弃字段，不再生效】，计费ID。该参数可以通过调用DescribeProductConfig接口的返回值中的Pid字段来获取。</p>
                     * 
                     */
                    uint64_t GetPid() const;

                    /**
                     * 设置<p>【弃字段，不再生效】，计费ID。该参数可以通过调用DescribeProductConfig接口的返回值中的Pid字段来获取。</p>
                     * @param _pid <p>【弃字段，不再生效】，计费ID。该参数可以通过调用DescribeProductConfig接口的返回值中的Pid字段来获取。</p>
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
                     * 获取<p>实例计费类型。目前支持：PREPAID（预付费，即包年包月）和 POSTPAID（按量计费）。<br>默认值：PREPAID</p>
                     * @return InstanceChargeType <p>实例计费类型。目前支持：PREPAID（预付费，即包年包月）和 POSTPAID（按量计费）。<br>默认值：PREPAID</p>
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置<p>实例计费类型。目前支持：PREPAID（预付费，即包年包月）和 POSTPAID（按量计费）。<br>默认值：PREPAID</p>
                     * @param _instanceChargeType <p>实例计费类型。目前支持：PREPAID（预付费，即包年包月）和 POSTPAID（按量计费）。<br>默认值：PREPAID</p>
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
                     * 获取<p>实例类型，默认primary，支持如下：<br>primary（双机高可用（一主一从））<br>readonly（只读实例）</p>
                     * @return InstanceType <p>实例类型，默认primary，支持如下：<br>primary（双机高可用（一主一从））<br>readonly（只读实例）</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>实例类型，默认primary，支持如下：<br>primary（双机高可用（一主一从））<br>readonly（只读实例）</p>
                     * @param _instanceType <p>实例类型，默认primary，支持如下：<br>primary（双机高可用（一主一从））<br>readonly（只读实例）</p>
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
                     * 获取<p>DB引擎，默认postgresql，支持如下：<br>postgresql（云数据库PostgreSQL）<br>mssql_compatible（MSSQL兼容-云数据库PostgreSQL）</p>
                     * @return DBEngine <p>DB引擎，默认postgresql，支持如下：<br>postgresql（云数据库PostgreSQL）<br>mssql_compatible（MSSQL兼容-云数据库PostgreSQL）</p>
                     * 
                     */
                    std::string GetDBEngine() const;

                    /**
                     * 设置<p>DB引擎，默认postgresql，支持如下：<br>postgresql（云数据库PostgreSQL）<br>mssql_compatible（MSSQL兼容-云数据库PostgreSQL）</p>
                     * @param _dBEngine <p>DB引擎，默认postgresql，支持如下：<br>postgresql（云数据库PostgreSQL）<br>mssql_compatible（MSSQL兼容-云数据库PostgreSQL）</p>
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
                     * 获取<p>实例存储类型，可选值：PHYSICAL_LOCAL_SSD：物理机本地ssd硬盘 CLOUD_PREMIUM：高性能云硬盘 CLOUD_SSD：ssd云硬盘 CLOUD_HSSD：增强型ssd云硬盘</p>
                     * @return StorageType <p>实例存储类型，可选值：PHYSICAL_LOCAL_SSD：物理机本地ssd硬盘 CLOUD_PREMIUM：高性能云硬盘 CLOUD_SSD：ssd云硬盘 CLOUD_HSSD：增强型ssd云硬盘</p>
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置<p>实例存储类型，可选值：PHYSICAL_LOCAL_SSD：物理机本地ssd硬盘 CLOUD_PREMIUM：高性能云硬盘 CLOUD_SSD：ssd云硬盘 CLOUD_HSSD：增强型ssd云硬盘</p>
                     * @param _storageType <p>实例存储类型，可选值：PHYSICAL_LOCAL_SSD：物理机本地ssd硬盘 CLOUD_PREMIUM：高性能云硬盘 CLOUD_SSD：ssd云硬盘 CLOUD_HSSD：增强型ssd云硬盘</p>
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                private:

                    /**
                     * <p>可用区名称。该参数可以通过调用<a href="https://cloud.tencent.com/document/product/409/16769"> DescribeZones</a> 接口的返回值中的Zone字段来获取。</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>规格ID。该参数可以通过调用<a href="https://cloud.tencent.com/document/product/409/89019">DescribeClasses</a>接口的返回值中的SpecCode字段来获取。</p>
                     */
                    std::string m_specCode;
                    bool m_specCodeHasBeenSet;

                    /**
                     * <p>存储容量大小，单位：GB。该参数的设置步长为10。</p>
                     */
                    uint64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * <p>实例数量。目前最大数量不超过100，如需一次性创建更多实例，请联系客服支持。</p>
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * <p>购买时长，单位：月。目前只支持1,2,3,4,5,6,7,8,9,10,11,12,24,36这些值。</p>
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>【弃字段，不再生效】，计费ID。该参数可以通过调用DescribeProductConfig接口的返回值中的Pid字段来获取。</p>
                     */
                    uint64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * <p>实例计费类型。目前支持：PREPAID（预付费，即包年包月）和 POSTPAID（按量计费）。<br>默认值：PREPAID</p>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * <p>实例类型，默认primary，支持如下：<br>primary（双机高可用（一主一从））<br>readonly（只读实例）</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>DB引擎，默认postgresql，支持如下：<br>postgresql（云数据库PostgreSQL）<br>mssql_compatible（MSSQL兼容-云数据库PostgreSQL）</p>
                     */
                    std::string m_dBEngine;
                    bool m_dBEngineHasBeenSet;

                    /**
                     * <p>实例存储类型，可选值：PHYSICAL_LOCAL_SSD：物理机本地ssd硬盘 CLOUD_PREMIUM：高性能云硬盘 CLOUD_SSD：ssd云硬盘 CLOUD_HSSD：增强型ssd云硬盘</p>
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_INQUIRYPRICECREATEDBINSTANCESREQUEST_H_
