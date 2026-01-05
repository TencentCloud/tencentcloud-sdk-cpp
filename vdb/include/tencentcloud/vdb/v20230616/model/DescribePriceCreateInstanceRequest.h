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

#ifndef TENCENTCLOUD_VDB_V20230616_MODEL_DESCRIBEPRICECREATEINSTANCEREQUEST_H_
#define TENCENTCLOUD_VDB_V20230616_MODEL_DESCRIBEPRICECREATEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vdb
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * DescribePriceCreateInstance请求参数结构体
                */
                class DescribePriceCreateInstanceRequest : public AbstractModel
                {
                public:
                    DescribePriceCreateInstanceRequest();
                    ~DescribePriceCreateInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例类型。
- base：免费测试版。
- single：单机版。
- cluster：高可用版。
                     * @return InstanceType 实例类型。
- base：免费测试版。
- single：单机版。
- cluster：高可用版。
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例类型。
- base：免费测试版。
- single：单机版。
- cluster：高可用版。
                     * @param _instanceType 实例类型。
- base：免费测试版。
- single：单机版。
- cluster：高可用版。
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
                     * 获取指定实例所需的 CPU 核数。实例类型不同，支持的 CPU 核数存在差异。
- 计算型： 1、2、4、8、16、24、32。
- 标准型： 1、2、4、8、12、16。
- 存储型： 1、2、4、6、8。
                     * @return Cpu 指定实例所需的 CPU 核数。实例类型不同，支持的 CPU 核数存在差异。
- 计算型： 1、2、4、8、16、24、32。
- 标准型： 1、2、4、8、12、16。
- 存储型： 1、2、4、6、8。
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置指定实例所需的 CPU 核数。实例类型不同，支持的 CPU 核数存在差异。
- 计算型： 1、2、4、8、16、24、32。
- 标准型： 1、2、4、8、12、16。
- 存储型： 1、2、4、6、8。
                     * @param _cpu 指定实例所需的 CPU 核数。实例类型不同，支持的 CPU 核数存在差异。
- 计算型： 1、2、4、8、16、24、32。
- 标准型： 1、2、4、8、12、16。
- 存储型： 1、2、4、6、8。
                     * 
                     */
                    void SetCpu(const uint64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取指定实例所需的内存大小。单位：GB。选择具体规格，请参见[配置规格（选型）](https://cloud.tencent.com/document/product/1709/113399)。
                     * @return Memory 指定实例所需的内存大小。单位：GB。选择具体规格，请参见[配置规格（选型）](https://cloud.tencent.com/document/product/1709/113399)。
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置指定实例所需的内存大小。单位：GB。选择具体规格，请参见[配置规格（选型）](https://cloud.tencent.com/document/product/1709/113399)。
                     * @param _memory 指定实例所需的内存大小。单位：GB。选择具体规格，请参见[配置规格（选型）](https://cloud.tencent.com/document/product/1709/113399)。
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
                     * 获取指定实例所需的磁盘大小，单位：GB。选择具体规格，请参见[配置规格（选型）](https://cloud.tencent.com/document/product/1709/113399)。
                     * @return DiskSize 指定实例所需的磁盘大小，单位：GB。选择具体规格，请参见[配置规格（选型）](https://cloud.tencent.com/document/product/1709/113399)。
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置指定实例所需的磁盘大小，单位：GB。选择具体规格，请参见[配置规格（选型）](https://cloud.tencent.com/document/product/1709/113399)。
                     * @param _diskSize 指定实例所需的磁盘大小，单位：GB。选择具体规格，请参见[配置规格（选型）](https://cloud.tencent.com/document/product/1709/113399)。
                     * 
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取指定实例所需配置的节点数量。选择方法，请参见[配置规格（选型）](https://cloud.tencent.com/document/product/1709/113399)。
                     * @return WorkerNodeNum 指定实例所需配置的节点数量。选择方法，请参见[配置规格（选型）](https://cloud.tencent.com/document/product/1709/113399)。
                     * 
                     */
                    uint64_t GetWorkerNodeNum() const;

                    /**
                     * 设置指定实例所需配置的节点数量。选择方法，请参见[配置规格（选型）](https://cloud.tencent.com/document/product/1709/113399)。
                     * @param _workerNodeNum 指定实例所需配置的节点数量。选择方法，请参见[配置规格（选型）](https://cloud.tencent.com/document/product/1709/113399)。
                     * 
                     */
                    void SetWorkerNodeNum(const uint64_t& _workerNodeNum);

                    /**
                     * 判断参数 WorkerNodeNum 是否已赋值
                     * @return WorkerNodeNum 是否已赋值
                     * 
                     */
                    bool WorkerNodeNumHasBeenSet() const;

                    /**
                     * 获取指定实例计费方式。
- 0：按量付费。
- 1：包年包月。
                     * @return PayMode 指定实例计费方式。
- 0：按量付费。
- 1：包年包月。
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置指定实例计费方式。
- 0：按量付费。
- 1：包年包月。
                     * @param _payMode 指定实例计费方式。
- 0：按量付费。
- 1：包年包月。
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取购买实例数量。
                     * @return GoodsNum 购买实例数量。
                     * 
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置购买实例数量。
                     * @param _goodsNum 购买实例数量。
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
                     * 获取产品版本，0-标准版，1-容量增强版
                     * @return ProductType 产品版本，0-标准版，1-容量增强版
                     * 
                     */
                    int64_t GetProductType() const;

                    /**
                     * 设置产品版本，0-标准版，1-容量增强版
                     * @param _productType 产品版本，0-标准版，1-容量增强版
                     * 
                     */
                    void SetProductType(const int64_t& _productType);

                    /**
                     * 判断参数 ProductType 是否已赋值
                     * @return ProductType 是否已赋值
                     * 
                     */
                    bool ProductTypeHasBeenSet() const;

                    /**
                     * 获取实例类型为高可用版，需指定可用区选项。
- two：两可用区。
- three：三可用区。
                     * @return Mode 实例类型为高可用版，需指定可用区选项。
- two：两可用区。
- three：三可用区。
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置实例类型为高可用版，需指定可用区选项。
- two：两可用区。
- three：三可用区。
                     * @param _mode 实例类型为高可用版，需指定可用区选项。
- two：两可用区。
- three：三可用区。
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取若计费方式为包年包月，指定包年包月续费的时长。
- 单位：月。
- 取值范围：1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36。默认为1。
                     * @return PayPeriod 若计费方式为包年包月，指定包年包月续费的时长。
- 单位：月。
- 取值范围：1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36。默认为1。
                     * 
                     */
                    int64_t GetPayPeriod() const;

                    /**
                     * 设置若计费方式为包年包月，指定包年包月续费的时长。
- 单位：月。
- 取值范围：1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36。默认为1。
                     * @param _payPeriod 若计费方式为包年包月，指定包年包月续费的时长。
- 单位：月。
- 取值范围：1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36。默认为1。
                     * 
                     */
                    void SetPayPeriod(const int64_t& _payPeriod);

                    /**
                     * 判断参数 PayPeriod 是否已赋值
                     * @return PayPeriod 是否已赋值
                     * 
                     */
                    bool PayPeriodHasBeenSet() const;

                private:

                    /**
                     * 实例类型。
- base：免费测试版。
- single：单机版。
- cluster：高可用版。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 指定实例所需的 CPU 核数。实例类型不同，支持的 CPU 核数存在差异。
- 计算型： 1、2、4、8、16、24、32。
- 标准型： 1、2、4、8、12、16。
- 存储型： 1、2、4、6、8。
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 指定实例所需的内存大小。单位：GB。选择具体规格，请参见[配置规格（选型）](https://cloud.tencent.com/document/product/1709/113399)。
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 指定实例所需的磁盘大小，单位：GB。选择具体规格，请参见[配置规格（选型）](https://cloud.tencent.com/document/product/1709/113399)。
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 指定实例所需配置的节点数量。选择方法，请参见[配置规格（选型）](https://cloud.tencent.com/document/product/1709/113399)。
                     */
                    uint64_t m_workerNodeNum;
                    bool m_workerNodeNumHasBeenSet;

                    /**
                     * 指定实例计费方式。
- 0：按量付费。
- 1：包年包月。
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 购买实例数量。
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * 产品版本，0-标准版，1-容量增强版
                     */
                    int64_t m_productType;
                    bool m_productTypeHasBeenSet;

                    /**
                     * 实例类型为高可用版，需指定可用区选项。
- two：两可用区。
- three：三可用区。
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 若计费方式为包年包月，指定包年包月续费的时长。
- 单位：月。
- 取值范围：1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36。默认为1。
                     */
                    int64_t m_payPeriod;
                    bool m_payPeriodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VDB_V20230616_MODEL_DESCRIBEPRICECREATEINSTANCEREQUEST_H_
