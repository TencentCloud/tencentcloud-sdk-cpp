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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_STANDARDPACKAGECONFIG_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_STANDARDPACKAGECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * {
    "Region": "ap-guangzhou",
    "ProtectIpCount": 1,
    "Bandwidth": 100,
    "ElasticBandwidthFlag": true
}
                */
                class StandardPackageConfig : public AbstractModel
                {
                public:
                    StandardPackageConfig();
                    ~StandardPackageConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取高防包购买地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 高防包购买地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置高防包购买地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 高防包购买地域
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
                     * 获取防护IP数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProtectIpCount 防护IP数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetProtectIpCount() const;

                    /**
                     * 设置防护IP数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _protectIpCount 防护IP数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProtectIpCount(const uint64_t& _protectIpCount);

                    /**
                     * 判断参数 ProtectIpCount 是否已赋值
                     * @return ProtectIpCount 是否已赋值
                     * 
                     */
                    bool ProtectIpCountHasBeenSet() const;

                    /**
                     * 获取防护业务带宽 50Mbps
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Bandwidth 防护业务带宽 50Mbps
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 设置防护业务带宽 50Mbps
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bandwidth 防护业务带宽 50Mbps
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBandwidth(const uint64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取是否开启弹性防护带宽 true 开启 
默认为false 不开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ElasticBandwidthFlag 是否开启弹性防护带宽 true 开启 
默认为false 不开启
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetElasticBandwidthFlag() const;

                    /**
                     * 设置是否开启弹性防护带宽 true 开启 
默认为false 不开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _elasticBandwidthFlag 是否开启弹性防护带宽 true 开启 
默认为false 不开启
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetElasticBandwidthFlag(const bool& _elasticBandwidthFlag);

                    /**
                     * 判断参数 ElasticBandwidthFlag 是否已赋值
                     * @return ElasticBandwidthFlag 是否已赋值
                     * 
                     */
                    bool ElasticBandwidthFlagHasBeenSet() const;

                private:

                    /**
                     * 高防包购买地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 防护IP数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_protectIpCount;
                    bool m_protectIpCountHasBeenSet;

                    /**
                     * 防护业务带宽 50Mbps
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 是否开启弹性防护带宽 true 开启 
默认为false 不开启
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_elasticBandwidthFlag;
                    bool m_elasticBandwidthFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_STANDARDPACKAGECONFIG_H_
