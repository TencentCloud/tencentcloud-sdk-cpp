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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INQUIREPRICECREATEREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INQUIREPRICECREATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * InquirePriceCreate请求参数结构体
                */
                class InquirePriceCreateRequest : public AbstractModel
                {
                public:
                    InquirePriceCreateRequest();
                    ~InquirePriceCreateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>可用区,每个地域提供最佳实践</p>
                     * @return Zone <p>可用区,每个地域提供最佳实践</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区,每个地域提供最佳实践</p>
                     * @param _zone <p>可用区,每个地域提供最佳实践</p>
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
                     * 获取<p>购买计算节点个数</p>
                     * @return GoodsNum <p>购买计算节点个数</p>
                     * 
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置<p>购买计算节点个数</p>
                     * @param _goodsNum <p>购买计算节点个数</p>
                     * 
                     */
                    void SetGoodsNum(const int64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     * 
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取<p>实例购买类型，可选值为：PREPAID, POSTPAID, SERVERLESS</p>
                     * @return InstancePayMode <p>实例购买类型，可选值为：PREPAID, POSTPAID, SERVERLESS</p>
                     * 
                     */
                    std::string GetInstancePayMode() const;

                    /**
                     * 设置<p>实例购买类型，可选值为：PREPAID, POSTPAID, SERVERLESS</p>
                     * @param _instancePayMode <p>实例购买类型，可选值为：PREPAID, POSTPAID, SERVERLESS</p>
                     * 
                     */
                    void SetInstancePayMode(const std::string& _instancePayMode);

                    /**
                     * 判断参数 InstancePayMode 是否已赋值
                     * @return InstancePayMode 是否已赋值
                     * 
                     */
                    bool InstancePayModeHasBeenSet() const;

                    /**
                     * 获取<p>存储购买类型，可选值为：PREPAID, POSTPAID</p>
                     * @return StoragePayMode <p>存储购买类型，可选值为：PREPAID, POSTPAID</p>
                     * 
                     */
                    std::string GetStoragePayMode() const;

                    /**
                     * 设置<p>存储购买类型，可选值为：PREPAID, POSTPAID</p>
                     * @param _storagePayMode <p>存储购买类型，可选值为：PREPAID, POSTPAID</p>
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
                     * 获取<p>实例设备类型，支持值如下：</p><ul><li>common：表示通用型</li><li>exclusive：表示独享型</li></ul>
                     * @return DeviceType <p>实例设备类型，支持值如下：</p><ul><li>common：表示通用型</li><li>exclusive：表示独享型</li></ul>
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置<p>实例设备类型，支持值如下：</p><ul><li>common：表示通用型</li><li>exclusive：表示独享型</li></ul>
                     * @param _deviceType <p>实例设备类型，支持值如下：</p><ul><li>common：表示通用型</li><li>exclusive：表示独享型</li></ul>
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取<p>CPU核数，PREPAID与POSTPAID实例类型必传</p>
                     * @return Cpu <p>CPU核数，PREPAID与POSTPAID实例类型必传</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>CPU核数，PREPAID与POSTPAID实例类型必传</p>
                     * @param _cpu <p>CPU核数，PREPAID与POSTPAID实例类型必传</p>
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取<p>内存大小，单位G，PREPAID与POSTPAID实例类型必传</p>
                     * @return Memory <p>内存大小，单位G，PREPAID与POSTPAID实例类型必传</p>
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置<p>内存大小，单位G，PREPAID与POSTPAID实例类型必传</p>
                     * @param _memory <p>内存大小，单位G，PREPAID与POSTPAID实例类型必传</p>
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
                     * 获取<p>Ccu大小，serverless类型必传</p>
                     * @return Ccu <p>Ccu大小，serverless类型必传</p>
                     * 
                     */
                    double GetCcu() const;

                    /**
                     * 设置<p>Ccu大小，serverless类型必传</p>
                     * @param _ccu <p>Ccu大小，serverless类型必传</p>
                     * 
                     */
                    void SetCcu(const double& _ccu);

                    /**
                     * 判断参数 Ccu 是否已赋值
                     * @return Ccu 是否已赋值
                     * 
                     */
                    bool CcuHasBeenSet() const;

                    /**
                     * 获取<p>存储大小，PREPAID存储类型必传</p>
                     * @return StorageLimit <p>存储大小，PREPAID存储类型必传</p>
                     * 
                     */
                    int64_t GetStorageLimit() const;

                    /**
                     * 设置<p>存储大小，PREPAID存储类型必传</p>
                     * @param _storageLimit <p>存储大小，PREPAID存储类型必传</p>
                     * 
                     */
                    void SetStorageLimit(const int64_t& _storageLimit);

                    /**
                     * 判断参数 StorageLimit 是否已赋值
                     * @return StorageLimit 是否已赋值
                     * 
                     */
                    bool StorageLimitHasBeenSet() const;

                    /**
                     * 获取<p>购买时长，PREPAID购买类型必传</p>
                     * @return TimeSpan <p>购买时长，PREPAID购买类型必传</p>
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置<p>购买时长，PREPAID购买类型必传</p>
                     * @param _timeSpan <p>购买时长，PREPAID购买类型必传</p>
                     * 
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取<p>时长单位，可选值为：m,d。PREPAID购买类型必传</p>
                     * @return TimeUnit <p>时长单位，可选值为：m,d。PREPAID购买类型必传</p>
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置<p>时长单位，可选值为：m,d。PREPAID购买类型必传</p>
                     * @param _timeUnit <p>时长单位，可选值为：m,d。PREPAID购买类型必传</p>
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取<p>存储架构类型。 枚举值：1.0/2.0 默认值：1.0</p>
                     * @return StorageVersion <p>存储架构类型。 枚举值：1.0/2.0 默认值：1.0</p>
                     * 
                     */
                    std::string GetStorageVersion() const;

                    /**
                     * 设置<p>存储架构类型。 枚举值：1.0/2.0 默认值：1.0</p>
                     * @param _storageVersion <p>存储架构类型。 枚举值：1.0/2.0 默认值：1.0</p>
                     * 
                     */
                    void SetStorageVersion(const std::string& _storageVersion);

                    /**
                     * 判断参数 StorageVersion 是否已赋值
                     * @return StorageVersion 是否已赋值
                     * 
                     */
                    bool StorageVersionHasBeenSet() const;

                    /**
                     * 获取<p>存储是否跨AZ，2.0存储架构下有效</p>
                     * @return IsMultiAz <p>存储是否跨AZ，2.0存储架构下有效</p>
                     * 
                     */
                    bool GetIsMultiAz() const;

                    /**
                     * 设置<p>存储是否跨AZ，2.0存储架构下有效</p>
                     * @param _isMultiAz <p>存储是否跨AZ，2.0存储架构下有效</p>
                     * 
                     */
                    void SetIsMultiAz(const bool& _isMultiAz);

                    /**
                     * 判断参数 IsMultiAz 是否已赋值
                     * @return IsMultiAz 是否已赋值
                     * 
                     */
                    bool IsMultiAzHasBeenSet() const;

                private:

                    /**
                     * <p>可用区,每个地域提供最佳实践</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>购买计算节点个数</p>
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * <p>实例购买类型，可选值为：PREPAID, POSTPAID, SERVERLESS</p>
                     */
                    std::string m_instancePayMode;
                    bool m_instancePayModeHasBeenSet;

                    /**
                     * <p>存储购买类型，可选值为：PREPAID, POSTPAID</p>
                     */
                    std::string m_storagePayMode;
                    bool m_storagePayModeHasBeenSet;

                    /**
                     * <p>实例设备类型，支持值如下：</p><ul><li>common：表示通用型</li><li>exclusive：表示独享型</li></ul>
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * <p>CPU核数，PREPAID与POSTPAID实例类型必传</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>内存大小，单位G，PREPAID与POSTPAID实例类型必传</p>
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>Ccu大小，serverless类型必传</p>
                     */
                    double m_ccu;
                    bool m_ccuHasBeenSet;

                    /**
                     * <p>存储大小，PREPAID存储类型必传</p>
                     */
                    int64_t m_storageLimit;
                    bool m_storageLimitHasBeenSet;

                    /**
                     * <p>购买时长，PREPAID购买类型必传</p>
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * <p>时长单位，可选值为：m,d。PREPAID购买类型必传</p>
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * <p>存储架构类型。 枚举值：1.0/2.0 默认值：1.0</p>
                     */
                    std::string m_storageVersion;
                    bool m_storageVersionHasBeenSet;

                    /**
                     * <p>存储是否跨AZ，2.0存储架构下有效</p>
                     */
                    bool m_isMultiAz;
                    bool m_isMultiAzHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INQUIREPRICECREATEREQUEST_H_
