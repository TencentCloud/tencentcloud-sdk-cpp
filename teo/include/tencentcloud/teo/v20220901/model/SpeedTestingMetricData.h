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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SPEEDTESTINGMETRICDATA_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SPEEDTESTINGMETRICDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SpeedTestingInfo.h>
#include <tencentcloud/teo/v20220901/model/SpeedTestingStatus.h>
#include <tencentcloud/teo/v20220901/model/OptimizeAction.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 不同维度的测速数据。
                */
                class SpeedTestingMetricData : public AbstractModel
                {
                public:
                    SpeedTestingMetricData();
                    ~SpeedTestingMetricData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取站点ID。
                     * @return ZoneId 站点ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点ID。
                     * @param _zoneId 站点ID。
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取站点名称。
                     * @return ZoneName 站点名称。
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置站点名称。
                     * @param _zoneName 站点名称。
                     * 
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取源站拨测信息。
                     * @return OriginSpeedTestingInfo 源站拨测信息。
                     * 
                     */
                    std::vector<SpeedTestingInfo> GetOriginSpeedTestingInfo() const;

                    /**
                     * 设置源站拨测信息。
                     * @param _originSpeedTestingInfo 源站拨测信息。
                     * 
                     */
                    void SetOriginSpeedTestingInfo(const std::vector<SpeedTestingInfo>& _originSpeedTestingInfo);

                    /**
                     * 判断参数 OriginSpeedTestingInfo 是否已赋值
                     * @return OriginSpeedTestingInfo 是否已赋值
                     * 
                     */
                    bool OriginSpeedTestingInfoHasBeenSet() const;

                    /**
                     * 获取EO 拨测信息。
                     * @return ProxySpeedTestingInfo EO 拨测信息。
                     * 
                     */
                    std::vector<SpeedTestingInfo> GetProxySpeedTestingInfo() const;

                    /**
                     * 设置EO 拨测信息。
                     * @param _proxySpeedTestingInfo EO 拨测信息。
                     * 
                     */
                    void SetProxySpeedTestingInfo(const std::vector<SpeedTestingInfo>& _proxySpeedTestingInfo);

                    /**
                     * 判断参数 ProxySpeedTestingInfo 是否已赋值
                     * @return ProxySpeedTestingInfo 是否已赋值
                     * 
                     */
                    bool ProxySpeedTestingInfoHasBeenSet() const;

                    /**
                     * 获取站点状态。
                     * @return SpeedTestingStatus 站点状态。
                     * 
                     */
                    SpeedTestingStatus GetSpeedTestingStatus() const;

                    /**
                     * 设置站点状态。
                     * @param _speedTestingStatus 站点状态。
                     * 
                     */
                    void SetSpeedTestingStatus(const SpeedTestingStatus& _speedTestingStatus);

                    /**
                     * 判断参数 SpeedTestingStatus 是否已赋值
                     * @return SpeedTestingStatus 是否已赋值
                     * 
                     */
                    bool SpeedTestingStatusHasBeenSet() const;

                    /**
                     * 获取优化建议。
                     * @return OptimizeAction 优化建议。
                     * 
                     */
                    std::vector<OptimizeAction> GetOptimizeAction() const;

                    /**
                     * 设置优化建议。
                     * @param _optimizeAction 优化建议。
                     * 
                     */
                    void SetOptimizeAction(const std::vector<OptimizeAction>& _optimizeAction);

                    /**
                     * 判断参数 OptimizeAction 是否已赋值
                     * @return OptimizeAction 是否已赋值
                     * 
                     */
                    bool OptimizeActionHasBeenSet() const;

                    /**
                     * 获取EO 整体性能，单位ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProxyLoadTime EO 整体性能，单位ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetProxyLoadTime() const;

                    /**
                     * 设置EO 整体性能，单位ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _proxyLoadTime EO 整体性能，单位ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProxyLoadTime(const int64_t& _proxyLoadTime);

                    /**
                     * 判断参数 ProxyLoadTime 是否已赋值
                     * @return ProxyLoadTime 是否已赋值
                     * 
                     */
                    bool ProxyLoadTimeHasBeenSet() const;

                    /**
                     * 获取源站整体性能，单位ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginLoadTime 源站整体性能，单位ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOriginLoadTime() const;

                    /**
                     * 设置源站整体性能，单位ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _originLoadTime 源站整体性能，单位ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOriginLoadTime(const int64_t& _originLoadTime);

                    /**
                     * 判断参数 OriginLoadTime 是否已赋值
                     * @return OriginLoadTime 是否已赋值
                     * 
                     */
                    bool OriginLoadTimeHasBeenSet() const;

                private:

                    /**
                     * 站点ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 站点名称。
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * 源站拨测信息。
                     */
                    std::vector<SpeedTestingInfo> m_originSpeedTestingInfo;
                    bool m_originSpeedTestingInfoHasBeenSet;

                    /**
                     * EO 拨测信息。
                     */
                    std::vector<SpeedTestingInfo> m_proxySpeedTestingInfo;
                    bool m_proxySpeedTestingInfoHasBeenSet;

                    /**
                     * 站点状态。
                     */
                    SpeedTestingStatus m_speedTestingStatus;
                    bool m_speedTestingStatusHasBeenSet;

                    /**
                     * 优化建议。
                     */
                    std::vector<OptimizeAction> m_optimizeAction;
                    bool m_optimizeActionHasBeenSet;

                    /**
                     * EO 整体性能，单位ms。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_proxyLoadTime;
                    bool m_proxyLoadTimeHasBeenSet;

                    /**
                     * 源站整体性能，单位ms。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_originLoadTime;
                    bool m_originLoadTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SPEEDTESTINGMETRICDATA_H_
