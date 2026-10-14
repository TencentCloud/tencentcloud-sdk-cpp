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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_LOGSTASHNODETYPERESOURCE_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_LOGSTASHNODETYPERESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/NodeTypeInfo.h>
#include <tencentcloud/es/v20180416/model/DiskSizeRange.h>
#include <tencentcloud/es/v20180416/model/FamilyResourceStat.h>
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
                * Logstash节点规格资源描述
                */
                class LogstashNodeTypeResource : public AbstractModel
                {
                public:
                    LogstashNodeTypeResource();
                    ~LogstashNodeTypeResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>规格名称</p>
                     * @return NodeTypeName <p>规格名称</p>
                     * 
                     */
                    std::string GetNodeTypeName() const;

                    /**
                     * 设置<p>规格名称</p>
                     * @param _nodeTypeName <p>规格名称</p>
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
                     * 获取<p>是否可售</p>
                     * @return Available <p>是否可售</p>
                     * 
                     */
                    bool GetAvailable() const;

                    /**
                     * 设置<p>是否可售</p>
                     * @param _available <p>是否可售</p>
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
                     * 获取<p>规格信息</p>
                     * @return NodeTypeInfo <p>规格信息</p>
                     * 
                     */
                    NodeTypeInfo GetNodeTypeInfo() const;

                    /**
                     * 设置<p>规格信息</p>
                     * @param _nodeTypeInfo <p>规格信息</p>
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
                     * 获取<p>SSD盘是否可售</p>
                     * @return SsdAvailable <p>SSD盘是否可售</p>
                     * 
                     */
                    bool GetSsdAvailable() const;

                    /**
                     * 设置<p>SSD盘是否可售</p>
                     * @param _ssdAvailable <p>SSD盘是否可售</p>
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
                     * 获取<p>SSD磁盘取值范围</p>
                     * @return SsdDiskSizeRange <p>SSD磁盘取值范围</p>
                     * 
                     */
                    DiskSizeRange GetSsdDiskSizeRange() const;

                    /**
                     * 设置<p>SSD磁盘取值范围</p>
                     * @param _ssdDiskSizeRange <p>SSD磁盘取值范围</p>
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
                     * 获取<p>SSD云硬盘售罄明细</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SsdSoldOutDetail <p>SSD云硬盘售罄明细</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FamilyResourceStat> GetSsdSoldOutDetail() const;

                    /**
                     * 设置<p>SSD云硬盘售罄明细</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ssdSoldOutDetail <p>SSD云硬盘售罄明细</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSsdSoldOutDetail(const std::vector<FamilyResourceStat>& _ssdSoldOutDetail);

                    /**
                     * 判断参数 SsdSoldOutDetail 是否已赋值
                     * @return SsdSoldOutDetail 是否已赋值
                     * 
                     */
                    bool SsdSoldOutDetailHasBeenSet() const;

                    /**
                     * 获取<p>SATA盘是否可售</p>
                     * @return SataAvailable <p>SATA盘是否可售</p>
                     * 
                     */
                    bool GetSataAvailable() const;

                    /**
                     * 设置<p>SATA盘是否可售</p>
                     * @param _sataAvailable <p>SATA盘是否可售</p>
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
                     * 获取<p>SATA磁盘取值范围</p>
                     * @return SataDiskSizeRange <p>SATA磁盘取值范围</p>
                     * 
                     */
                    DiskSizeRange GetSataDiskSizeRange() const;

                    /**
                     * 设置<p>SATA磁盘取值范围</p>
                     * @param _sataDiskSizeRange <p>SATA磁盘取值范围</p>
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
                     * 获取<p>SSD机型售罄原因</p>
                     * @return SsdSoldOutReason <p>SSD机型售罄原因</p>
                     * 
                     */
                    std::string GetSsdSoldOutReason() const;

                    /**
                     * 设置<p>SSD机型售罄原因</p>
                     * @param _ssdSoldOutReason <p>SSD机型售罄原因</p>
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
                     * 获取<p>SATA机型售罄原因</p>
                     * @return SataSoldOutReason <p>SATA机型售罄原因</p>
                     * 
                     */
                    std::string GetSataSoldOutReason() const;

                    /**
                     * 设置<p>SATA机型售罄原因</p>
                     * @param _sataSoldOutReason <p>SATA机型售罄原因</p>
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
                     * 获取<p>高性能云硬盘售罄明细</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SataSoldOutDetail <p>高性能云硬盘售罄明细</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FamilyResourceStat> GetSataSoldOutDetail() const;

                    /**
                     * 设置<p>高性能云硬盘售罄明细</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sataSoldOutDetail <p>高性能云硬盘售罄明细</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSataSoldOutDetail(const std::vector<FamilyResourceStat>& _sataSoldOutDetail);

                    /**
                     * 判断参数 SataSoldOutDetail 是否已赋值
                     * @return SataSoldOutDetail 是否已赋值
                     * 
                     */
                    bool SataSoldOutDetailHasBeenSet() const;

                    /**
                     * 获取<p>本地盘信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LocalDiskInfo <p>本地盘信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LocalDiskInfo GetLocalDiskInfo() const;

                    /**
                     * 设置<p>本地盘信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _localDiskInfo <p>本地盘信息</p>
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
                     * 获取<p>云盘块数取值范围</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiskCountRange <p>云盘块数取值范围</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DiskCountRange GetDiskCountRange() const;

                    /**
                     * 设置<p>云盘块数取值范围</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diskCountRange <p>云盘块数取值范围</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>增强型SSD是否可用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HSsdAvailable <p>增强型SSD是否可用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetHSsdAvailable() const;

                    /**
                     * 设置<p>增强型SSD是否可用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hSsdAvailable <p>增强型SSD是否可用</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>增强型SSD机型售罄原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HSsdSoldOutReason <p>增强型SSD机型售罄原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHSsdSoldOutReason() const;

                    /**
                     * 设置<p>增强型SSD机型售罄原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hSsdSoldOutReason <p>增强型SSD机型售罄原因</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>增强型SSD售罄明细</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HSsdSoldOutDetail <p>增强型SSD售罄明细</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FamilyResourceStat> GetHSsdSoldOutDetail() const;

                    /**
                     * 设置<p>增强型SSD售罄明细</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hSsdSoldOutDetail <p>增强型SSD售罄明细</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHSsdSoldOutDetail(const std::vector<FamilyResourceStat>& _hSsdSoldOutDetail);

                    /**
                     * 判断参数 HSsdSoldOutDetail 是否已赋值
                     * @return HSsdSoldOutDetail 是否已赋值
                     * 
                     */
                    bool HSsdSoldOutDetailHasBeenSet() const;

                    /**
                     * 获取<p>增强型SSD磁盘取值范围</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HSsdDiskSizeRange <p>增强型SSD磁盘取值范围</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DiskSizeRange GetHSsdDiskSizeRange() const;

                    /**
                     * 设置<p>增强型SSD磁盘取值范围</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hSsdDiskSizeRange <p>增强型SSD磁盘取值范围</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>吞吐型云盘是否可用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ThroughputAvailable <p>吞吐型云盘是否可用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetThroughputAvailable() const;

                    /**
                     * 设置<p>吞吐型云盘是否可用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _throughputAvailable <p>吞吐型云盘是否可用</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>吞吐型云盘售罄原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ThroughputSoldOutReason <p>吞吐型云盘售罄原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetThroughputSoldOutReason() const;

                    /**
                     * 设置<p>吞吐型云盘售罄原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _throughputSoldOutReason <p>吞吐型云盘售罄原因</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>吞吐型云硬盘售罄</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ThroughputSoldOutDetail <p>吞吐型云硬盘售罄</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FamilyResourceStat> GetThroughputSoldOutDetail() const;

                    /**
                     * 设置<p>吞吐型云硬盘售罄</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _throughputSoldOutDetail <p>吞吐型云硬盘售罄</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetThroughputSoldOutDetail(const std::vector<FamilyResourceStat>& _throughputSoldOutDetail);

                    /**
                     * 判断参数 ThroughputSoldOutDetail 是否已赋值
                     * @return ThroughputSoldOutDetail 是否已赋值
                     * 
                     */
                    bool ThroughputSoldOutDetailHasBeenSet() const;

                    /**
                     * 获取<p>吞吐型云盘取值范围</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ThroughputDiskSizeRange <p>吞吐型云盘取值范围</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DiskSizeRange GetThroughputDiskSizeRange() const;

                    /**
                     * 设置<p>吞吐型云盘取值范围</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _throughputDiskSizeRange <p>吞吐型云盘取值范围</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>BigData盘是否可售</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BigDataAvailable <p>BigData盘是否可售</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetBigDataAvailable() const;

                    /**
                     * 设置<p>BigData盘是否可售</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bigDataAvailable <p>BigData盘是否可售</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>BigData盘售罄原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BigDataSoldOutReason <p>BigData盘售罄原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBigDataSoldOutReason() const;

                    /**
                     * 设置<p>BigData盘售罄原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bigDataSoldOutReason <p>BigData盘售罄原因</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>大数据型云硬盘售罄明细</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BigDataSoldOutDetail <p>大数据型云硬盘售罄明细</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FamilyResourceStat> GetBigDataSoldOutDetail() const;

                    /**
                     * 设置<p>大数据型云硬盘售罄明细</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bigDataSoldOutDetail <p>大数据型云硬盘售罄明细</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBigDataSoldOutDetail(const std::vector<FamilyResourceStat>& _bigDataSoldOutDetail);

                    /**
                     * 判断参数 BigDataSoldOutDetail 是否已赋值
                     * @return BigDataSoldOutDetail 是否已赋值
                     * 
                     */
                    bool BigDataSoldOutDetailHasBeenSet() const;

                    /**
                     * 获取<p>BigData磁盘取值范围</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BigDataDiskSizeRange <p>BigData磁盘取值范围</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DiskSizeRange GetBigDataDiskSizeRange() const;

                    /**
                     * 设置<p>BigData磁盘取值范围</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bigDataDiskSizeRange <p>BigData磁盘取值范围</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>HighIO盘是否可售</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HighIOAvailable <p>HighIO盘是否可售</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetHighIOAvailable() const;

                    /**
                     * 设置<p>HighIO盘是否可售</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _highIOAvailable <p>HighIO盘是否可售</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>HighIO盘售罄原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HighIOSoldOutReason <p>HighIO盘售罄原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHighIOSoldOutReason() const;

                    /**
                     * 设置<p>HighIO盘售罄原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _highIOSoldOutReason <p>HighIO盘售罄原因</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>高IO型云硬盘售罄明细</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HighIOSoldOutDetail <p>高IO型云硬盘售罄明细</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FamilyResourceStat> GetHighIOSoldOutDetail() const;

                    /**
                     * 设置<p>高IO型云硬盘售罄明细</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _highIOSoldOutDetail <p>高IO型云硬盘售罄明细</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHighIOSoldOutDetail(const std::vector<FamilyResourceStat>& _highIOSoldOutDetail);

                    /**
                     * 判断参数 HighIOSoldOutDetail 是否已赋值
                     * @return HighIOSoldOutDetail 是否已赋值
                     * 
                     */
                    bool HighIOSoldOutDetailHasBeenSet() const;

                    /**
                     * 获取<p>HighIO磁盘取值范围</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HighIODiskSizeRange <p>HighIO磁盘取值范围</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DiskSizeRange GetHighIODiskSizeRange() const;

                    /**
                     * 设置<p>HighIO磁盘取值范围</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _highIODiskSizeRange <p>HighIO磁盘取值范围</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>Bssd盘是否可售</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BssdAvailable <p>Bssd盘是否可售</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetBssdAvailable() const;

                    /**
                     * 设置<p>Bssd盘是否可售</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bssdAvailable <p>Bssd盘是否可售</p>
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
                     * 获取<p>Bssd盘售罄原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BssdSoldOutReason <p>Bssd盘售罄原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBssdSoldOutReason() const;

                    /**
                     * 设置<p>Bssd盘售罄原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bssdSoldOutReason <p>Bssd盘售罄原因</p>
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
                     * 获取<p>Bssd盘取值范围</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BssdDiskSizeRange <p>Bssd盘取值范围</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DiskSizeRange GetBssdDiskSizeRange() const;

                    /**
                     * 设置<p>Bssd盘取值范围</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bssdDiskSizeRange <p>Bssd盘取值范围</p>
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
                     * 获取<p>通用型SSD云硬盘售罄明细</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BssdSoldOutDetail <p>通用型SSD云硬盘售罄明细</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FamilyResourceStat> GetBssdSoldOutDetail() const;

                    /**
                     * 设置<p>通用型SSD云硬盘售罄明细</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bssdSoldOutDetail <p>通用型SSD云硬盘售罄明细</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBssdSoldOutDetail(const std::vector<FamilyResourceStat>& _bssdSoldOutDetail);

                    /**
                     * 判断参数 BssdSoldOutDetail 是否已赋值
                     * @return BssdSoldOutDetail 是否已赋值
                     * 
                     */
                    bool BssdSoldOutDetailHasBeenSet() const;

                    /**
                     * 获取<p>GpuInfo</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GpuInfo <p>GpuInfo</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    GpuInfo GetGpuInfo() const;

                    /**
                     * 设置<p>GpuInfo</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gpuInfo <p>GpuInfo</p>
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
                     * <p>规格名称</p>
                     */
                    std::string m_nodeTypeName;
                    bool m_nodeTypeNameHasBeenSet;

                    /**
                     * <p>是否可售</p>
                     */
                    bool m_available;
                    bool m_availableHasBeenSet;

                    /**
                     * <p>规格信息</p>
                     */
                    NodeTypeInfo m_nodeTypeInfo;
                    bool m_nodeTypeInfoHasBeenSet;

                    /**
                     * <p>SSD盘是否可售</p>
                     */
                    bool m_ssdAvailable;
                    bool m_ssdAvailableHasBeenSet;

                    /**
                     * <p>SSD磁盘取值范围</p>
                     */
                    DiskSizeRange m_ssdDiskSizeRange;
                    bool m_ssdDiskSizeRangeHasBeenSet;

                    /**
                     * <p>SSD云硬盘售罄明细</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FamilyResourceStat> m_ssdSoldOutDetail;
                    bool m_ssdSoldOutDetailHasBeenSet;

                    /**
                     * <p>SATA盘是否可售</p>
                     */
                    bool m_sataAvailable;
                    bool m_sataAvailableHasBeenSet;

                    /**
                     * <p>SATA磁盘取值范围</p>
                     */
                    DiskSizeRange m_sataDiskSizeRange;
                    bool m_sataDiskSizeRangeHasBeenSet;

                    /**
                     * <p>SSD机型售罄原因</p>
                     */
                    std::string m_ssdSoldOutReason;
                    bool m_ssdSoldOutReasonHasBeenSet;

                    /**
                     * <p>SATA机型售罄原因</p>
                     */
                    std::string m_sataSoldOutReason;
                    bool m_sataSoldOutReasonHasBeenSet;

                    /**
                     * <p>高性能云硬盘售罄明细</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FamilyResourceStat> m_sataSoldOutDetail;
                    bool m_sataSoldOutDetailHasBeenSet;

                    /**
                     * <p>本地盘信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LocalDiskInfo m_localDiskInfo;
                    bool m_localDiskInfoHasBeenSet;

                    /**
                     * <p>云盘块数取值范围</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiskCountRange m_diskCountRange;
                    bool m_diskCountRangeHasBeenSet;

                    /**
                     * <p>增强型SSD是否可用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_hSsdAvailable;
                    bool m_hSsdAvailableHasBeenSet;

                    /**
                     * <p>增强型SSD机型售罄原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hSsdSoldOutReason;
                    bool m_hSsdSoldOutReasonHasBeenSet;

                    /**
                     * <p>增强型SSD售罄明细</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FamilyResourceStat> m_hSsdSoldOutDetail;
                    bool m_hSsdSoldOutDetailHasBeenSet;

                    /**
                     * <p>增强型SSD磁盘取值范围</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiskSizeRange m_hSsdDiskSizeRange;
                    bool m_hSsdDiskSizeRangeHasBeenSet;

                    /**
                     * <p>吞吐型云盘是否可用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_throughputAvailable;
                    bool m_throughputAvailableHasBeenSet;

                    /**
                     * <p>吞吐型云盘售罄原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_throughputSoldOutReason;
                    bool m_throughputSoldOutReasonHasBeenSet;

                    /**
                     * <p>吞吐型云硬盘售罄</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FamilyResourceStat> m_throughputSoldOutDetail;
                    bool m_throughputSoldOutDetailHasBeenSet;

                    /**
                     * <p>吞吐型云盘取值范围</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiskSizeRange m_throughputDiskSizeRange;
                    bool m_throughputDiskSizeRangeHasBeenSet;

                    /**
                     * <p>BigData盘是否可售</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_bigDataAvailable;
                    bool m_bigDataAvailableHasBeenSet;

                    /**
                     * <p>BigData盘售罄原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bigDataSoldOutReason;
                    bool m_bigDataSoldOutReasonHasBeenSet;

                    /**
                     * <p>大数据型云硬盘售罄明细</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FamilyResourceStat> m_bigDataSoldOutDetail;
                    bool m_bigDataSoldOutDetailHasBeenSet;

                    /**
                     * <p>BigData磁盘取值范围</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiskSizeRange m_bigDataDiskSizeRange;
                    bool m_bigDataDiskSizeRangeHasBeenSet;

                    /**
                     * <p>HighIO盘是否可售</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_highIOAvailable;
                    bool m_highIOAvailableHasBeenSet;

                    /**
                     * <p>HighIO盘售罄原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_highIOSoldOutReason;
                    bool m_highIOSoldOutReasonHasBeenSet;

                    /**
                     * <p>高IO型云硬盘售罄明细</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FamilyResourceStat> m_highIOSoldOutDetail;
                    bool m_highIOSoldOutDetailHasBeenSet;

                    /**
                     * <p>HighIO磁盘取值范围</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiskSizeRange m_highIODiskSizeRange;
                    bool m_highIODiskSizeRangeHasBeenSet;

                    /**
                     * <p>Bssd盘是否可售</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_bssdAvailable;
                    bool m_bssdAvailableHasBeenSet;

                    /**
                     * <p>Bssd盘售罄原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bssdSoldOutReason;
                    bool m_bssdSoldOutReasonHasBeenSet;

                    /**
                     * <p>Bssd盘取值范围</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiskSizeRange m_bssdDiskSizeRange;
                    bool m_bssdDiskSizeRangeHasBeenSet;

                    /**
                     * <p>通用型SSD云硬盘售罄明细</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FamilyResourceStat> m_bssdSoldOutDetail;
                    bool m_bssdSoldOutDetailHasBeenSet;

                    /**
                     * <p>GpuInfo</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    GpuInfo m_gpuInfo;
                    bool m_gpuInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_LOGSTASHNODETYPERESOURCE_H_
