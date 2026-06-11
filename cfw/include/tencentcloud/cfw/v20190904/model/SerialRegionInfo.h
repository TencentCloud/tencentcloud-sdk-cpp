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
                     * 获取<p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region <p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region <p>地域</p>
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
                     * 获取<p>分配带宽值 单位Mbps</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Width <p>分配带宽值 单位Mbps</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置<p>分配带宽值 单位Mbps</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _width <p>分配带宽值 单位Mbps</p>
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
                     * 获取<p>弹性开关</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ElasticSwitch <p>弹性开关</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetElasticSwitch() const;

                    /**
                     * 设置<p>弹性开关</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _elasticSwitch <p>弹性开关</p>
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
                     * 获取<p>弹性带宽上限，单位Mbps</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ElasticBandwidth <p>弹性带宽上限，单位Mbps</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetElasticBandwidth() const;

                    /**
                     * 设置<p>弹性带宽上限，单位Mbps</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _elasticBandwidth <p>弹性带宽上限，单位Mbps</p>
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
                     * 获取<p>七天入向峰值带宽，单位bps</p>
                     * @return InFlowMax <p>七天入向峰值带宽，单位bps</p>
                     * 
                     */
                    int64_t GetInFlowMax() const;

                    /**
                     * 设置<p>七天入向峰值带宽，单位bps</p>
                     * @param _inFlowMax <p>七天入向峰值带宽，单位bps</p>
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
                     * 获取<p>七天出向峰值带宽，单位bps</p>
                     * @return OutFlowMax <p>七天出向峰值带宽，单位bps</p>
                     * 
                     */
                    int64_t GetOutFlowMax() const;

                    /**
                     * 设置<p>七天出向峰值带宽，单位bps</p>
                     * @param _outFlowMax <p>七天出向峰值带宽，单位bps</p>
                     * 
                     */
                    void SetOutFlowMax(const int64_t& _outFlowMax);

                    /**
                     * 判断参数 OutFlowMax 是否已赋值
                     * @return OutFlowMax 是否已赋值
                     * 
                     */
                    bool OutFlowMaxHasBeenSet() const;

                    /**
                     * 获取<p>边界按流量弹性开关</p><p>取值范围：[0, 1]</p><p>默认值：0</p>
                     * @return ElasticTrafficSwitch <p>边界按流量弹性开关</p><p>取值范围：[0, 1]</p><p>默认值：0</p>
                     * 
                     */
                    int64_t GetElasticTrafficSwitch() const;

                    /**
                     * 设置<p>边界按流量弹性开关</p><p>取值范围：[0, 1]</p><p>默认值：0</p>
                     * @param _elasticTrafficSwitch <p>边界按流量弹性开关</p><p>取值范围：[0, 1]</p><p>默认值：0</p>
                     * 
                     */
                    void SetElasticTrafficSwitch(const int64_t& _elasticTrafficSwitch);

                    /**
                     * 判断参数 ElasticTrafficSwitch 是否已赋值
                     * @return ElasticTrafficSwitch 是否已赋值
                     * 
                     */
                    bool ElasticTrafficSwitchHasBeenSet() const;

                private:

                    /**
                     * <p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>分配带宽值 单位Mbps</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * <p>弹性开关</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_elasticSwitch;
                    bool m_elasticSwitchHasBeenSet;

                    /**
                     * <p>弹性带宽上限，单位Mbps</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_elasticBandwidth;
                    bool m_elasticBandwidthHasBeenSet;

                    /**
                     * <p>七天入向峰值带宽，单位bps</p>
                     */
                    int64_t m_inFlowMax;
                    bool m_inFlowMaxHasBeenSet;

                    /**
                     * <p>七天出向峰值带宽，单位bps</p>
                     */
                    int64_t m_outFlowMax;
                    bool m_outFlowMaxHasBeenSet;

                    /**
                     * <p>边界按流量弹性开关</p><p>取值范围：[0, 1]</p><p>默认值：0</p>
                     */
                    int64_t m_elasticTrafficSwitch;
                    bool m_elasticTrafficSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_SERIALREGIONINFO_H_
