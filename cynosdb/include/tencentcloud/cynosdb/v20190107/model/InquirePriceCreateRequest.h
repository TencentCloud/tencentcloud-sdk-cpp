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
                     * 获取可用区,每个地域提供最佳实践
                     * @return Zone 可用区,每个地域提供最佳实践
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区,每个地域提供最佳实践
                     * @param _zone 可用区,每个地域提供最佳实践
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
                     * 获取购买计算节点个数
                     * @return GoodsNum 购买计算节点个数
                     * 
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置购买计算节点个数
                     * @param _goodsNum 购买计算节点个数
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
                     * 获取实例购买类型，可选值为：PREPAID, POSTPAID, SERVERLESS
                     * @return InstancePayMode 实例购买类型，可选值为：PREPAID, POSTPAID, SERVERLESS
                     * 
                     */
                    std::string GetInstancePayMode() const;

                    /**
                     * 设置实例购买类型，可选值为：PREPAID, POSTPAID, SERVERLESS
                     * @param _instancePayMode 实例购买类型，可选值为：PREPAID, POSTPAID, SERVERLESS
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
                     * 获取存储购买类型，可选值为：PREPAID, POSTPAID
                     * @return StoragePayMode 存储购买类型，可选值为：PREPAID, POSTPAID
                     * 
                     */
                    std::string GetStoragePayMode() const;

                    /**
                     * 设置存储购买类型，可选值为：PREPAID, POSTPAID
                     * @param _storagePayMode 存储购买类型，可选值为：PREPAID, POSTPAID
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
                     * 获取实例设备类型
                     * @return DeviceType 实例设备类型
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置实例设备类型
                     * @param _deviceType 实例设备类型
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
                     * 获取CPU核数，PREPAID与POSTPAID实例类型必传
                     * @return Cpu CPU核数，PREPAID与POSTPAID实例类型必传
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置CPU核数，PREPAID与POSTPAID实例类型必传
                     * @param _cpu CPU核数，PREPAID与POSTPAID实例类型必传
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
                     * 获取内存大小，单位G，PREPAID与POSTPAID实例类型必传
                     * @return Memory 内存大小，单位G，PREPAID与POSTPAID实例类型必传
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置内存大小，单位G，PREPAID与POSTPAID实例类型必传
                     * @param _memory 内存大小，单位G，PREPAID与POSTPAID实例类型必传
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
                     * 获取Ccu大小，serverless类型必传
                     * @return Ccu Ccu大小，serverless类型必传
                     * 
                     */
                    double GetCcu() const;

                    /**
                     * 设置Ccu大小，serverless类型必传
                     * @param _ccu Ccu大小，serverless类型必传
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
                     * 获取存储大小，PREPAID存储类型必传
                     * @return StorageLimit 存储大小，PREPAID存储类型必传
                     * 
                     */
                    int64_t GetStorageLimit() const;

                    /**
                     * 设置存储大小，PREPAID存储类型必传
                     * @param _storageLimit 存储大小，PREPAID存储类型必传
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
                     * 获取购买时长，PREPAID购买类型必传
                     * @return TimeSpan 购买时长，PREPAID购买类型必传
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置购买时长，PREPAID购买类型必传
                     * @param _timeSpan 购买时长，PREPAID购买类型必传
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
                     * 获取时长单位，可选值为：m,d。PREPAID购买类型必传
                     * @return TimeUnit 时长单位，可选值为：m,d。PREPAID购买类型必传
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置时长单位，可选值为：m,d。PREPAID购买类型必传
                     * @param _timeUnit 时长单位，可选值为：m,d。PREPAID购买类型必传
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                private:

                    /**
                     * 可用区,每个地域提供最佳实践
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 购买计算节点个数
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * 实例购买类型，可选值为：PREPAID, POSTPAID, SERVERLESS
                     */
                    std::string m_instancePayMode;
                    bool m_instancePayModeHasBeenSet;

                    /**
                     * 存储购买类型，可选值为：PREPAID, POSTPAID
                     */
                    std::string m_storagePayMode;
                    bool m_storagePayModeHasBeenSet;

                    /**
                     * 实例设备类型
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * CPU核数，PREPAID与POSTPAID实例类型必传
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存大小，单位G，PREPAID与POSTPAID实例类型必传
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Ccu大小，serverless类型必传
                     */
                    double m_ccu;
                    bool m_ccuHasBeenSet;

                    /**
                     * 存储大小，PREPAID存储类型必传
                     */
                    int64_t m_storageLimit;
                    bool m_storageLimitHasBeenSet;

                    /**
                     * 购买时长，PREPAID购买类型必传
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 时长单位，可选值为：m,d。PREPAID购买类型必传
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INQUIREPRICECREATEREQUEST_H_
