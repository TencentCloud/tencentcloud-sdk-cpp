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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_NODETYPERESOURCE_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_NODETYPERESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/NodeTypeInfo.h>
#include <tencentcloud/es/v20180416/model/DiskSizeRange.h>
#include <tencentcloud/es/v20180416/model/LocalDiskInfo.h>
#include <tencentcloud/es/v20180416/model/DiskCountRange.h>
#include <tencentcloud/es/v20180416/model/GpuInfo.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 节点规格资源描述
                */
                class NodeTypeResource : public AbstractModel
                {
                public:
                    NodeTypeResource();
                    ~NodeTypeResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规格名称
                     * @return NodeTypeName 规格名称
                     * 
                     */
                    std::string GetNodeTypeName() const;

                    /**
                     * 设置规格名称
                     * @param _nodeTypeName 规格名称
                     * 
                     */
                    void SetNodeTypeName(const std::string& _nodeTypeName);

                    /**
                     * 判断参数 NodeTypeName 是否已赋值
                     * @return NodeTypeName 是否已赋值
                     * 
                     */
                    bool NodeTypeNameHasBeenSet() const;

                    /**
                     * 获取是否可售
                     * @return Available 是否可售
                     * 
                     */
                    bool GetAvailable() const;

                    /**
                     * 设置是否可售
                     * @param _available 是否可售
                     * 
                     */
                    void SetAvailable(const bool& _available);

                    /**
                     * 判断参数 Available 是否已赋值
                     * @return Available 是否已赋值
                     * 
                     */
                    bool AvailableHasBeenSet() const;

                    /**
                     * 获取规格信息
                     * @return NodeTypeInfo 规格信息
                     * 
                     */
                    NodeTypeInfo GetNodeTypeInfo() const;

                    /**
                     * 设置规格信息
                     * @param _nodeTypeInfo 规格信息
                     * 
                     */
                    void SetNodeTypeInfo(const NodeTypeInfo& _nodeTypeInfo);

                    /**
                     * 判断参数 NodeTypeInfo 是否已赋值
                     * @return NodeTypeInfo 是否已赋值
                     * 
                     */
                    bool NodeTypeInfoHasBeenSet() const;

                    /**
                     * 获取SSD盘是否可售
                     * @return SsdAvailable SSD盘是否可售
                     * 
                     */
                    bool GetSsdAvailable() const;

                    /**
                     * 设置SSD盘是否可售
                     * @param _ssdAvailable SSD盘是否可售
                     * 
                     */
                    void SetSsdAvailable(const bool& _ssdAvailable);

                    /**
                     * 判断参数 SsdAvailable 是否已赋值
                     * @return SsdAvailable 是否已赋值
                     * 
                     */
                    bool SsdAvailableHasBeenSet() const;

                    /**
                     * 获取SSD磁盘取值范围
                     * @return SsdDiskSizeRange SSD磁盘取值范围
                     * 
                     */
                    DiskSizeRange GetSsdDiskSizeRange() const;

                    /**
                     * 设置SSD磁盘取值范围
                     * @param _ssdDiskSizeRange SSD磁盘取值范围
                     * 
                     */
                    void SetSsdDiskSizeRange(const DiskSizeRange& _ssdDiskSizeRange);

                    /**
                     * 判断参数 SsdDiskSizeRange 是否已赋值
                     * @return SsdDiskSizeRange 是否已赋值
                     * 
                     */
                    bool SsdDiskSizeRangeHasBeenSet() const;

                    /**
                     * 获取SATA盘是否可售
                     * @return SataAvailable SATA盘是否可售
                     * 
                     */
                    bool GetSataAvailable() const;

                    /**
                     * 设置SATA盘是否可售
                     * @param _sataAvailable SATA盘是否可售
                     * 
                     */
                    void SetSataAvailable(const bool& _sataAvailable);

                    /**
                     * 判断参数 SataAvailable 是否已赋值
                     * @return SataAvailable 是否已赋值
                     * 
                     */
                    bool SataAvailableHasBeenSet() const;

                    /**
                     * 获取SATA磁盘取值范围
                     * @return SataDiskSizeRange SATA磁盘取值范围
                     * 
                     */
                    DiskSizeRange GetSataDiskSizeRange() const;

                    /**
                     * 设置SATA磁盘取值范围
                     * @param _sataDiskSizeRange SATA磁盘取值范围
                     * 
                     */
                    void SetSataDiskSizeRange(const DiskSizeRange& _sataDiskSizeRange);

                    /**
                     * 判断参数 SataDiskSizeRange 是否已赋值
                     * @return SataDiskSizeRange 是否已赋值
                     * 
                     */
                    bool SataDiskSizeRangeHasBeenSet() const;

                    /**
                     * 获取SSD机型售罄原因
                     * @return SsdSoldOutReason SSD机型售罄原因
                     * 
                     */
                    std::string GetSsdSoldOutReason() const;

                    /**
                     * 设置SSD机型售罄原因
                     * @param _ssdSoldOutReason SSD机型售罄原因
                     * 
                     */
                    void SetSsdSoldOutReason(const std::string& _ssdSoldOutReason);

                    /**
                     * 判断参数 SsdSoldOutReason 是否已赋值
                     * @return SsdSoldOutReason 是否已赋值
                     * 
                     */
                    bool SsdSoldOutReasonHasBeenSet() const;

                    /**
                     * 获取SATA机型售罄原因
                     * @return SataSoldOutReason SATA机型售罄原因
                     * 
                     */
                    std::string GetSataSoldOutReason() const;

                    /**
                     * 设置SATA机型售罄原因
                     * @param _sataSoldOutReason SATA机型售罄原因
                     * 
                     */
                    void SetSataSoldOutReason(const std::string& _sataSoldOutReason);

                    /**
                     * 判断参数 SataSoldOutReason 是否已赋值
                     * @return SataSoldOutReason 是否已赋值
                     * 
                     */
                    bool SataSoldOutReasonHasBeenSet() const;

                    /**
                     * 获取本地盘信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LocalDiskInfo 本地盘信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LocalDiskInfo GetLocalDiskInfo() const;

                    /**
                     * 设置本地盘信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _localDiskInfo 本地盘信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLocalDiskInfo(const LocalDiskInfo& _localDiskInfo);

                    /**
                     * 判断参数 LocalDiskInfo 是否已赋值
                     * @return LocalDiskInfo 是否已赋值
                     * 
                     */
                    bool LocalDiskInfoHasBeenSet() const;

                    /**
                     * 获取云盘块数取值范围
                     * @return DiskCountRange 云盘块数取值范围
                     * 
                     */
                    DiskCountRange GetDiskCountRange() const;

                    /**
                     * 设置云盘块数取值范围
                     * @param _diskCountRange 云盘块数取值范围
                     * 
                     */
                    void SetDiskCountRange(const DiskCountRange& _diskCountRange);

                    /**
                     * 判断参数 DiskCountRange 是否已赋值
                     * @return DiskCountRange 是否已赋值
                     * 
                     */
                    bool DiskCountRangeHasBeenSet() const;

                    /**
                     * 获取HSSD盘是否可售
                     * @return HSsdAvailable HSSD盘是否可售
                     * 
                     */
                    bool GetHSsdAvailable() const;

                    /**
                     * 设置HSSD盘是否可售
                     * @param _hSsdAvailable HSSD盘是否可售
                     * 
                     */
                    void SetHSsdAvailable(const bool& _hSsdAvailable);

                    /**
                     * 判断参数 HSsdAvailable 是否已赋值
                     * @return HSsdAvailable 是否已赋值
                     * 
                     */
                    bool HSsdAvailableHasBeenSet() const;

                    /**
                     * 获取HSSD机型售罄原因
                     * @return HSsdSoldOutReason HSSD机型售罄原因
                     * 
                     */
                    std::string GetHSsdSoldOutReason() const;

                    /**
                     * 设置HSSD机型售罄原因
                     * @param _hSsdSoldOutReason HSSD机型售罄原因
                     * 
                     */
                    void SetHSsdSoldOutReason(const std::string& _hSsdSoldOutReason);

                    /**
                     * 判断参数 HSsdSoldOutReason 是否已赋值
                     * @return HSsdSoldOutReason 是否已赋值
                     * 
                     */
                    bool HSsdSoldOutReasonHasBeenSet() const;

                    /**
                     * 获取HSSD磁盘取值范围
                     * @return HSsdDiskSizeRange HSSD磁盘取值范围
                     * 
                     */
                    DiskSizeRange GetHSsdDiskSizeRange() const;

                    /**
                     * 设置HSSD磁盘取值范围
                     * @param _hSsdDiskSizeRange HSSD磁盘取值范围
                     * 
                     */
                    void SetHSsdDiskSizeRange(const DiskSizeRange& _hSsdDiskSizeRange);

                    /**
                     * 判断参数 HSsdDiskSizeRange 是否已赋值
                     * @return HSsdDiskSizeRange 是否已赋值
                     * 
                     */
                    bool HSsdDiskSizeRangeHasBeenSet() const;

                    /**
                     * 获取Throughput盘是否可售
                     * @return ThroughputAvailable Throughput盘是否可售
                     * 
                     */
                    bool GetThroughputAvailable() const;

                    /**
                     * 设置Throughput盘是否可售
                     * @param _throughputAvailable Throughput盘是否可售
                     * 
                     */
                    void SetThroughputAvailable(const bool& _throughputAvailable);

                    /**
                     * 判断参数 ThroughputAvailable 是否已赋值
                     * @return ThroughputAvailable 是否已赋值
                     * 
                     */
                    bool ThroughputAvailableHasBeenSet() const;

                    /**
                     * 获取Throughput机型售罄原因
                     * @return ThroughputSoldOutReason Throughput机型售罄原因
                     * 
                     */
                    std::string GetThroughputSoldOutReason() const;

                    /**
                     * 设置Throughput机型售罄原因
                     * @param _throughputSoldOutReason Throughput机型售罄原因
                     * 
                     */
                    void SetThroughputSoldOutReason(const std::string& _throughputSoldOutReason);

                    /**
                     * 判断参数 ThroughputSoldOutReason 是否已赋值
                     * @return ThroughputSoldOutReason 是否已赋值
                     * 
                     */
                    bool ThroughputSoldOutReasonHasBeenSet() const;

                    /**
                     * 获取Throughput磁盘取值范围
                     * @return ThroughputDiskSizeRange Throughput磁盘取值范围
                     * 
                     */
                    DiskSizeRange GetThroughputDiskSizeRange() const;

                    /**
                     * 设置Throughput磁盘取值范围
                     * @param _throughputDiskSizeRange Throughput磁盘取值范围
                     * 
                     */
                    void SetThroughputDiskSizeRange(const DiskSizeRange& _throughputDiskSizeRange);

                    /**
                     * 判断参数 ThroughputDiskSizeRange 是否已赋值
                     * @return ThroughputDiskSizeRange 是否已赋值
                     * 
                     */
                    bool ThroughputDiskSizeRangeHasBeenSet() const;

                    /**
                     * 获取BigData盘是否可售
                     * @return BigDataAvailable BigData盘是否可售
                     * 
                     */
                    bool GetBigDataAvailable() const;

                    /**
                     * 设置BigData盘是否可售
                     * @param _bigDataAvailable BigData盘是否可售
                     * 
                     */
                    void SetBigDataAvailable(const bool& _bigDataAvailable);

                    /**
                     * 判断参数 BigDataAvailable 是否已赋值
                     * @return BigDataAvailable 是否已赋值
                     * 
                     */
                    bool BigDataAvailableHasBeenSet() const;

                    /**
                     * 获取BigData盘售罄原因
                     * @return BigDataSoldOutReason BigData盘售罄原因
                     * 
                     */
                    std::string GetBigDataSoldOutReason() const;

                    /**
                     * 设置BigData盘售罄原因
                     * @param _bigDataSoldOutReason BigData盘售罄原因
                     * 
                     */
                    void SetBigDataSoldOutReason(const std::string& _bigDataSoldOutReason);

                    /**
                     * 判断参数 BigDataSoldOutReason 是否已赋值
                     * @return BigDataSoldOutReason 是否已赋值
                     * 
                     */
                    bool BigDataSoldOutReasonHasBeenSet() const;

                    /**
                     * 获取BigData磁盘取值范围
                     * @return BigDataDiskSizeRange BigData磁盘取值范围
                     * 
                     */
                    DiskSizeRange GetBigDataDiskSizeRange() const;

                    /**
                     * 设置BigData磁盘取值范围
                     * @param _bigDataDiskSizeRange BigData磁盘取值范围
                     * 
                     */
                    void SetBigDataDiskSizeRange(const DiskSizeRange& _bigDataDiskSizeRange);

                    /**
                     * 判断参数 BigDataDiskSizeRange 是否已赋值
                     * @return BigDataDiskSizeRange 是否已赋值
                     * 
                     */
                    bool BigDataDiskSizeRangeHasBeenSet() const;

                    /**
                     * 获取HighIO盘是否可售
                     * @return HighIOAvailable HighIO盘是否可售
                     * 
                     */
                    bool GetHighIOAvailable() const;

                    /**
                     * 设置HighIO盘是否可售
                     * @param _highIOAvailable HighIO盘是否可售
                     * 
                     */
                    void SetHighIOAvailable(const bool& _highIOAvailable);

                    /**
                     * 判断参数 HighIOAvailable 是否已赋值
                     * @return HighIOAvailable 是否已赋值
                     * 
                     */
                    bool HighIOAvailableHasBeenSet() const;

                    /**
                     * 获取HighIO盘售罄原因
                     * @return HighIOSoldOutReason HighIO盘售罄原因
                     * 
                     */
                    std::string GetHighIOSoldOutReason() const;

                    /**
                     * 设置HighIO盘售罄原因
                     * @param _highIOSoldOutReason HighIO盘售罄原因
                     * 
                     */
                    void SetHighIOSoldOutReason(const std::string& _highIOSoldOutReason);

                    /**
                     * 判断参数 HighIOSoldOutReason 是否已赋值
                     * @return HighIOSoldOutReason 是否已赋值
                     * 
                     */
                    bool HighIOSoldOutReasonHasBeenSet() const;

                    /**
                     * 获取HighIO磁盘取值范围
                     * @return HighIODiskSizeRange HighIO磁盘取值范围
                     * 
                     */
                    DiskSizeRange GetHighIODiskSizeRange() const;

                    /**
                     * 设置HighIO磁盘取值范围
                     * @param _highIODiskSizeRange HighIO磁盘取值范围
                     * 
                     */
                    void SetHighIODiskSizeRange(const DiskSizeRange& _highIODiskSizeRange);

                    /**
                     * 判断参数 HighIODiskSizeRange 是否已赋值
                     * @return HighIODiskSizeRange 是否已赋值
                     * 
                     */
                    bool HighIODiskSizeRangeHasBeenSet() const;

                    /**
                     * 获取Bssd盘是否可售
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BssdAvailable Bssd盘是否可售
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetBssdAvailable() const;

                    /**
                     * 设置Bssd盘是否可售
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bssdAvailable Bssd盘是否可售
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBssdAvailable(const bool& _bssdAvailable);

                    /**
                     * 判断参数 BssdAvailable 是否已赋值
                     * @return BssdAvailable 是否已赋值
                     * 
                     */
                    bool BssdAvailableHasBeenSet() const;

                    /**
                     * 获取Bssd盘售罄原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BssdSoldOutReason Bssd盘售罄原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBssdSoldOutReason() const;

                    /**
                     * 设置Bssd盘售罄原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bssdSoldOutReason Bssd盘售罄原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBssdSoldOutReason(const std::string& _bssdSoldOutReason);

                    /**
                     * 判断参数 BssdSoldOutReason 是否已赋值
                     * @return BssdSoldOutReason 是否已赋值
                     * 
                     */
                    bool BssdSoldOutReasonHasBeenSet() const;

                    /**
                     * 获取Bssd盘取值范围
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BssdDiskSizeRange Bssd盘取值范围
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DiskSizeRange GetBssdDiskSizeRange() const;

                    /**
                     * 设置Bssd盘取值范围
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bssdDiskSizeRange Bssd盘取值范围
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBssdDiskSizeRange(const DiskSizeRange& _bssdDiskSizeRange);

                    /**
                     * 判断参数 BssdDiskSizeRange 是否已赋值
                     * @return BssdDiskSizeRange 是否已赋值
                     * 
                     */
                    bool BssdDiskSizeRangeHasBeenSet() const;

                    /**
                     * 获取节点Gpu信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GpuInfo 节点Gpu信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    GpuInfo GetGpuInfo() const;

                    /**
                     * 设置节点Gpu信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gpuInfo 节点Gpu信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGpuInfo(const GpuInfo& _gpuInfo);

                    /**
                     * 判断参数 GpuInfo 是否已赋值
                     * @return GpuInfo 是否已赋值
                     * 
                     */
                    bool GpuInfoHasBeenSet() const;

                private:

                    /**
                     * 规格名称
                     */
                    std::string m_nodeTypeName;
                    bool m_nodeTypeNameHasBeenSet;

                    /**
                     * 是否可售
                     */
                    bool m_available;
                    bool m_availableHasBeenSet;

                    /**
                     * 规格信息
                     */
                    NodeTypeInfo m_nodeTypeInfo;
                    bool m_nodeTypeInfoHasBeenSet;

                    /**
                     * SSD盘是否可售
                     */
                    bool m_ssdAvailable;
                    bool m_ssdAvailableHasBeenSet;

                    /**
                     * SSD磁盘取值范围
                     */
                    DiskSizeRange m_ssdDiskSizeRange;
                    bool m_ssdDiskSizeRangeHasBeenSet;

                    /**
                     * SATA盘是否可售
                     */
                    bool m_sataAvailable;
                    bool m_sataAvailableHasBeenSet;

                    /**
                     * SATA磁盘取值范围
                     */
                    DiskSizeRange m_sataDiskSizeRange;
                    bool m_sataDiskSizeRangeHasBeenSet;

                    /**
                     * SSD机型售罄原因
                     */
                    std::string m_ssdSoldOutReason;
                    bool m_ssdSoldOutReasonHasBeenSet;

                    /**
                     * SATA机型售罄原因
                     */
                    std::string m_sataSoldOutReason;
                    bool m_sataSoldOutReasonHasBeenSet;

                    /**
                     * 本地盘信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LocalDiskInfo m_localDiskInfo;
                    bool m_localDiskInfoHasBeenSet;

                    /**
                     * 云盘块数取值范围
                     */
                    DiskCountRange m_diskCountRange;
                    bool m_diskCountRangeHasBeenSet;

                    /**
                     * HSSD盘是否可售
                     */
                    bool m_hSsdAvailable;
                    bool m_hSsdAvailableHasBeenSet;

                    /**
                     * HSSD机型售罄原因
                     */
                    std::string m_hSsdSoldOutReason;
                    bool m_hSsdSoldOutReasonHasBeenSet;

                    /**
                     * HSSD磁盘取值范围
                     */
                    DiskSizeRange m_hSsdDiskSizeRange;
                    bool m_hSsdDiskSizeRangeHasBeenSet;

                    /**
                     * Throughput盘是否可售
                     */
                    bool m_throughputAvailable;
                    bool m_throughputAvailableHasBeenSet;

                    /**
                     * Throughput机型售罄原因
                     */
                    std::string m_throughputSoldOutReason;
                    bool m_throughputSoldOutReasonHasBeenSet;

                    /**
                     * Throughput磁盘取值范围
                     */
                    DiskSizeRange m_throughputDiskSizeRange;
                    bool m_throughputDiskSizeRangeHasBeenSet;

                    /**
                     * BigData盘是否可售
                     */
                    bool m_bigDataAvailable;
                    bool m_bigDataAvailableHasBeenSet;

                    /**
                     * BigData盘售罄原因
                     */
                    std::string m_bigDataSoldOutReason;
                    bool m_bigDataSoldOutReasonHasBeenSet;

                    /**
                     * BigData磁盘取值范围
                     */
                    DiskSizeRange m_bigDataDiskSizeRange;
                    bool m_bigDataDiskSizeRangeHasBeenSet;

                    /**
                     * HighIO盘是否可售
                     */
                    bool m_highIOAvailable;
                    bool m_highIOAvailableHasBeenSet;

                    /**
                     * HighIO盘售罄原因
                     */
                    std::string m_highIOSoldOutReason;
                    bool m_highIOSoldOutReasonHasBeenSet;

                    /**
                     * HighIO磁盘取值范围
                     */
                    DiskSizeRange m_highIODiskSizeRange;
                    bool m_highIODiskSizeRangeHasBeenSet;

                    /**
                     * Bssd盘是否可售
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_bssdAvailable;
                    bool m_bssdAvailableHasBeenSet;

                    /**
                     * Bssd盘售罄原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bssdSoldOutReason;
                    bool m_bssdSoldOutReasonHasBeenSet;

                    /**
                     * Bssd盘取值范围
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiskSizeRange m_bssdDiskSizeRange;
                    bool m_bssdDiskSizeRangeHasBeenSet;

                    /**
                     * 节点Gpu信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    GpuInfo m_gpuInfo;
                    bool m_gpuInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_NODETYPERESOURCE_H_
