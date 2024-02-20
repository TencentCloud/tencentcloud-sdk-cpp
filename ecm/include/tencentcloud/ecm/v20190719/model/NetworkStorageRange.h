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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_NETWORKSTORAGERANGE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_NETWORKSTORAGERANGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 网络硬盘上下限数据
                */
                class NetworkStorageRange : public AbstractModel
                {
                public:
                    NetworkStorageRange();
                    ~NetworkStorageRange() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取网络带宽上限
                     * @return MaxBandwidth 网络带宽上限
                     * 
                     */
                    int64_t GetMaxBandwidth() const;

                    /**
                     * 设置网络带宽上限
                     * @param _maxBandwidth 网络带宽上限
                     * 
                     */
                    void SetMaxBandwidth(const int64_t& _maxBandwidth);

                    /**
                     * 判断参数 MaxBandwidth 是否已赋值
                     * @return MaxBandwidth 是否已赋值
                     * 
                     */
                    bool MaxBandwidthHasBeenSet() const;

                    /**
                     * 获取数据盘上限
                     * @return MaxSystemDiskSize 数据盘上限
                     * 
                     */
                    int64_t GetMaxSystemDiskSize() const;

                    /**
                     * 设置数据盘上限
                     * @param _maxSystemDiskSize 数据盘上限
                     * 
                     */
                    void SetMaxSystemDiskSize(const int64_t& _maxSystemDiskSize);

                    /**
                     * 判断参数 MaxSystemDiskSize 是否已赋值
                     * @return MaxSystemDiskSize 是否已赋值
                     * 
                     */
                    bool MaxSystemDiskSizeHasBeenSet() const;

                    /**
                     * 获取网络带宽下限
                     * @return MinBandwidth 网络带宽下限
                     * 
                     */
                    int64_t GetMinBandwidth() const;

                    /**
                     * 设置网络带宽下限
                     * @param _minBandwidth 网络带宽下限
                     * 
                     */
                    void SetMinBandwidth(const int64_t& _minBandwidth);

                    /**
                     * 判断参数 MinBandwidth 是否已赋值
                     * @return MinBandwidth 是否已赋值
                     * 
                     */
                    bool MinBandwidthHasBeenSet() const;

                    /**
                     * 获取数据盘下限
                     * @return MinSystemDiskSize 数据盘下限
                     * 
                     */
                    int64_t GetMinSystemDiskSize() const;

                    /**
                     * 设置数据盘下限
                     * @param _minSystemDiskSize 数据盘下限
                     * 
                     */
                    void SetMinSystemDiskSize(const int64_t& _minSystemDiskSize);

                    /**
                     * 判断参数 MinSystemDiskSize 是否已赋值
                     * @return MinSystemDiskSize 是否已赋值
                     * 
                     */
                    bool MinSystemDiskSizeHasBeenSet() const;

                    /**
                     * 获取最大数据盘大小
                     * @return MaxDataDiskSize 最大数据盘大小
                     * 
                     */
                    int64_t GetMaxDataDiskSize() const;

                    /**
                     * 设置最大数据盘大小
                     * @param _maxDataDiskSize 最大数据盘大小
                     * 
                     */
                    void SetMaxDataDiskSize(const int64_t& _maxDataDiskSize);

                    /**
                     * 判断参数 MaxDataDiskSize 是否已赋值
                     * @return MaxDataDiskSize 是否已赋值
                     * 
                     */
                    bool MaxDataDiskSizeHasBeenSet() const;

                    /**
                     * 获取最小数据盘大小
                     * @return MinDataDiskSize 最小数据盘大小
                     * 
                     */
                    int64_t GetMinDataDiskSize() const;

                    /**
                     * 设置最小数据盘大小
                     * @param _minDataDiskSize 最小数据盘大小
                     * 
                     */
                    void SetMinDataDiskSize(const int64_t& _minDataDiskSize);

                    /**
                     * 判断参数 MinDataDiskSize 是否已赋值
                     * @return MinDataDiskSize 是否已赋值
                     * 
                     */
                    bool MinDataDiskSizeHasBeenSet() const;

                    /**
                     * 获取建议带宽
                     * @return SuggestBandwidth 建议带宽
                     * 
                     */
                    int64_t GetSuggestBandwidth() const;

                    /**
                     * 设置建议带宽
                     * @param _suggestBandwidth 建议带宽
                     * 
                     */
                    void SetSuggestBandwidth(const int64_t& _suggestBandwidth);

                    /**
                     * 判断参数 SuggestBandwidth 是否已赋值
                     * @return SuggestBandwidth 是否已赋值
                     * 
                     */
                    bool SuggestBandwidthHasBeenSet() const;

                    /**
                     * 获取建议硬盘大小
                     * @return SuggestDataDiskSize 建议硬盘大小
                     * 
                     */
                    int64_t GetSuggestDataDiskSize() const;

                    /**
                     * 设置建议硬盘大小
                     * @param _suggestDataDiskSize 建议硬盘大小
                     * 
                     */
                    void SetSuggestDataDiskSize(const int64_t& _suggestDataDiskSize);

                    /**
                     * 判断参数 SuggestDataDiskSize 是否已赋值
                     * @return SuggestDataDiskSize 是否已赋值
                     * 
                     */
                    bool SuggestDataDiskSizeHasBeenSet() const;

                    /**
                     * 获取建议系统盘大小
                     * @return SuggestSystemDiskSize 建议系统盘大小
                     * 
                     */
                    int64_t GetSuggestSystemDiskSize() const;

                    /**
                     * 设置建议系统盘大小
                     * @param _suggestSystemDiskSize 建议系统盘大小
                     * 
                     */
                    void SetSuggestSystemDiskSize(const int64_t& _suggestSystemDiskSize);

                    /**
                     * 判断参数 SuggestSystemDiskSize 是否已赋值
                     * @return SuggestSystemDiskSize 是否已赋值
                     * 
                     */
                    bool SuggestSystemDiskSizeHasBeenSet() const;

                    /**
                     * 获取Cpu核数峰值
                     * @return MaxVcpu Cpu核数峰值
                     * 
                     */
                    int64_t GetMaxVcpu() const;

                    /**
                     * 设置Cpu核数峰值
                     * @param _maxVcpu Cpu核数峰值
                     * 
                     */
                    void SetMaxVcpu(const int64_t& _maxVcpu);

                    /**
                     * 判断参数 MaxVcpu 是否已赋值
                     * @return MaxVcpu 是否已赋值
                     * 
                     */
                    bool MaxVcpuHasBeenSet() const;

                    /**
                     * 获取Cpu核最小值
                     * @return MinVcpu Cpu核最小值
                     * 
                     */
                    int64_t GetMinVcpu() const;

                    /**
                     * 设置Cpu核最小值
                     * @param _minVcpu Cpu核最小值
                     * 
                     */
                    void SetMinVcpu(const int64_t& _minVcpu);

                    /**
                     * 判断参数 MinVcpu 是否已赋值
                     * @return MinVcpu 是否已赋值
                     * 
                     */
                    bool MinVcpuHasBeenSet() const;

                    /**
                     * 获取单次请求最大cpu核数
                     * @return MaxVcpuPerReq 单次请求最大cpu核数
                     * 
                     */
                    int64_t GetMaxVcpuPerReq() const;

                    /**
                     * 设置单次请求最大cpu核数
                     * @param _maxVcpuPerReq 单次请求最大cpu核数
                     * 
                     */
                    void SetMaxVcpuPerReq(const int64_t& _maxVcpuPerReq);

                    /**
                     * 判断参数 MaxVcpuPerReq 是否已赋值
                     * @return MaxVcpuPerReq 是否已赋值
                     * 
                     */
                    bool MaxVcpuPerReqHasBeenSet() const;

                    /**
                     * 获取带宽步长
                     * @return PerBandwidth 带宽步长
                     * 
                     */
                    int64_t GetPerBandwidth() const;

                    /**
                     * 设置带宽步长
                     * @param _perBandwidth 带宽步长
                     * 
                     */
                    void SetPerBandwidth(const int64_t& _perBandwidth);

                    /**
                     * 判断参数 PerBandwidth 是否已赋值
                     * @return PerBandwidth 是否已赋值
                     * 
                     */
                    bool PerBandwidthHasBeenSet() const;

                    /**
                     * 获取数据盘步长
                     * @return PerDataDisk 数据盘步长
                     * 
                     */
                    int64_t GetPerDataDisk() const;

                    /**
                     * 设置数据盘步长
                     * @param _perDataDisk 数据盘步长
                     * 
                     */
                    void SetPerDataDisk(const int64_t& _perDataDisk);

                    /**
                     * 判断参数 PerDataDisk 是否已赋值
                     * @return PerDataDisk 是否已赋值
                     * 
                     */
                    bool PerDataDiskHasBeenSet() const;

                    /**
                     * 获取总模块数量
                     * @return MaxModuleNum 总模块数量
                     * 
                     */
                    int64_t GetMaxModuleNum() const;

                    /**
                     * 设置总模块数量
                     * @param _maxModuleNum 总模块数量
                     * 
                     */
                    void SetMaxModuleNum(const int64_t& _maxModuleNum);

                    /**
                     * 判断参数 MaxModuleNum 是否已赋值
                     * @return MaxModuleNum 是否已赋值
                     * 
                     */
                    bool MaxModuleNumHasBeenSet() const;

                    /**
                     * 获取是否支持cbs
                     * @return CBSSupported 是否支持cbs
                     * 
                     */
                    bool GetCBSSupported() const;

                    /**
                     * 设置是否支持cbs
                     * @param _cBSSupported 是否支持cbs
                     * 
                     */
                    void SetCBSSupported(const bool& _cBSSupported);

                    /**
                     * 判断参数 CBSSupported 是否已赋值
                     * @return CBSSupported 是否已赋值
                     * 
                     */
                    bool CBSSupportedHasBeenSet() const;

                    /**
                     * 获取磁盘数量限制
                     * @return DiskNumLimit 磁盘数量限制
                     * 
                     */
                    int64_t GetDiskNumLimit() const;

                    /**
                     * 设置磁盘数量限制
                     * @param _diskNumLimit 磁盘数量限制
                     * 
                     */
                    void SetDiskNumLimit(const int64_t& _diskNumLimit);

                    /**
                     * 判断参数 DiskNumLimit 是否已赋值
                     * @return DiskNumLimit 是否已赋值
                     * 
                     */
                    bool DiskNumLimitHasBeenSet() const;

                private:

                    /**
                     * 网络带宽上限
                     */
                    int64_t m_maxBandwidth;
                    bool m_maxBandwidthHasBeenSet;

                    /**
                     * 数据盘上限
                     */
                    int64_t m_maxSystemDiskSize;
                    bool m_maxSystemDiskSizeHasBeenSet;

                    /**
                     * 网络带宽下限
                     */
                    int64_t m_minBandwidth;
                    bool m_minBandwidthHasBeenSet;

                    /**
                     * 数据盘下限
                     */
                    int64_t m_minSystemDiskSize;
                    bool m_minSystemDiskSizeHasBeenSet;

                    /**
                     * 最大数据盘大小
                     */
                    int64_t m_maxDataDiskSize;
                    bool m_maxDataDiskSizeHasBeenSet;

                    /**
                     * 最小数据盘大小
                     */
                    int64_t m_minDataDiskSize;
                    bool m_minDataDiskSizeHasBeenSet;

                    /**
                     * 建议带宽
                     */
                    int64_t m_suggestBandwidth;
                    bool m_suggestBandwidthHasBeenSet;

                    /**
                     * 建议硬盘大小
                     */
                    int64_t m_suggestDataDiskSize;
                    bool m_suggestDataDiskSizeHasBeenSet;

                    /**
                     * 建议系统盘大小
                     */
                    int64_t m_suggestSystemDiskSize;
                    bool m_suggestSystemDiskSizeHasBeenSet;

                    /**
                     * Cpu核数峰值
                     */
                    int64_t m_maxVcpu;
                    bool m_maxVcpuHasBeenSet;

                    /**
                     * Cpu核最小值
                     */
                    int64_t m_minVcpu;
                    bool m_minVcpuHasBeenSet;

                    /**
                     * 单次请求最大cpu核数
                     */
                    int64_t m_maxVcpuPerReq;
                    bool m_maxVcpuPerReqHasBeenSet;

                    /**
                     * 带宽步长
                     */
                    int64_t m_perBandwidth;
                    bool m_perBandwidthHasBeenSet;

                    /**
                     * 数据盘步长
                     */
                    int64_t m_perDataDisk;
                    bool m_perDataDiskHasBeenSet;

                    /**
                     * 总模块数量
                     */
                    int64_t m_maxModuleNum;
                    bool m_maxModuleNumHasBeenSet;

                    /**
                     * 是否支持cbs
                     */
                    bool m_cBSSupported;
                    bool m_cBSSupportedHasBeenSet;

                    /**
                     * 磁盘数量限制
                     */
                    int64_t m_diskNumLimit;
                    bool m_diskNumLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_NETWORKSTORAGERANGE_H_
