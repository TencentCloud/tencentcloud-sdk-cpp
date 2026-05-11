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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_SERIALREGIONINFO_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_SERIALREGIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 防火墙串行地域带宽分配情况
                */
                class SerialRegionInfo : public AbstractModel
                {
                public:
                    SerialRegionInfo();
                    ~SerialRegionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 地域
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取分配带宽值 单位Mbps
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Width 分配带宽值 单位Mbps
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置分配带宽值 单位Mbps
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _width 分配带宽值 单位Mbps
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取弹性开关
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ElasticSwitch 弹性开关
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetElasticSwitch() const;

                    /**
                     * 设置弹性开关
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _elasticSwitch 弹性开关
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetElasticSwitch(const int64_t& _elasticSwitch);

                    /**
                     * 判断参数 ElasticSwitch 是否已赋值
                     * @return ElasticSwitch 是否已赋值
                     * 
                     */
                    bool ElasticSwitchHasBeenSet() const;

                    /**
                     * 获取弹性带宽上限，单位Mbps
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ElasticBandwidth 弹性带宽上限，单位Mbps
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetElasticBandwidth() const;

                    /**
                     * 设置弹性带宽上限，单位Mbps
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _elasticBandwidth 弹性带宽上限，单位Mbps
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetElasticBandwidth(const int64_t& _elasticBandwidth);

                    /**
                     * 判断参数 ElasticBandwidth 是否已赋值
                     * @return ElasticBandwidth 是否已赋值
                     * 
                     */
                    bool ElasticBandwidthHasBeenSet() const;

                    /**
                     * 获取七天入向峰值带宽，单位bps
                     * @return InFlowMax 七天入向峰值带宽，单位bps
                     * 
                     */
                    int64_t GetInFlowMax() const;

                    /**
                     * 设置七天入向峰值带宽，单位bps
                     * @param _inFlowMax 七天入向峰值带宽，单位bps
                     * 
                     */
                    void SetInFlowMax(const int64_t& _inFlowMax);

                    /**
                     * 判断参数 InFlowMax 是否已赋值
                     * @return InFlowMax 是否已赋值
                     * 
                     */
                    bool InFlowMaxHasBeenSet() const;

                    /**
                     * 获取七天出向峰值带宽，单位bps
                     * @return OutFlowMax 七天出向峰值带宽，单位bps
                     * 
                     */
                    int64_t GetOutFlowMax() const;

                    /**
                     * 设置七天出向峰值带宽，单位bps
                     * @param _outFlowMax 七天出向峰值带宽，单位bps
                     * 
                     */
                    void SetOutFlowMax(const int64_t& _outFlowMax);

                    /**
                     * 判断参数 OutFlowMax 是否已赋值
                     * @return OutFlowMax 是否已赋值
                     * 
                     */
                    bool OutFlowMaxHasBeenSet() const;

                private:

                    /**
                     * 地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 分配带宽值 单位Mbps
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 弹性开关
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_elasticSwitch;
                    bool m_elasticSwitchHasBeenSet;

                    /**
                     * 弹性带宽上限，单位Mbps
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_elasticBandwidth;
                    bool m_elasticBandwidthHasBeenSet;

                    /**
                     * 七天入向峰值带宽，单位bps
                     */
                    int64_t m_inFlowMax;
                    bool m_inFlowMaxHasBeenSet;

                    /**
                     * 七天出向峰值带宽，单位bps
                     */
                    int64_t m_outFlowMax;
                    bool m_outFlowMaxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_SERIALREGIONINFO_H_
