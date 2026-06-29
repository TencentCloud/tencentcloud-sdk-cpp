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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSZONEITEM_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSZONEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * PrometheusZoneItem 响应结构体内的地域信息
                */
                class PrometheusZoneItem : public AbstractModel
                {
                public:
                    PrometheusZoneItem();
                    ~PrometheusZoneItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>可用区</p>
                     * @return Zone <p>可用区</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区</p>
                     * @param _zone <p>可用区</p>
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
                     * 获取<p>可用区 ID</p>
                     * @return ZoneId <p>可用区 ID</p>
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置<p>可用区 ID</p>
                     * @param _zoneId <p>可用区 ID</p>
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>可用区状态( 0: 不可用；1: 可用)</p>
                     * @return ZoneState <p>可用区状态( 0: 不可用；1: 可用)</p>
                     * 
                     */
                    int64_t GetZoneState() const;

                    /**
                     * 设置<p>可用区状态( 0: 不可用；1: 可用)</p>
                     * @param _zoneState <p>可用区状态( 0: 不可用；1: 可用)</p>
                     * 
                     */
                    void SetZoneState(const int64_t& _zoneState);

                    /**
                     * 判断参数 ZoneState 是否已赋值
                     * @return ZoneState 是否已赋值
                     * 
                     */
                    bool ZoneStateHasBeenSet() const;

                    /**
                     * 获取<p>地域 ID</p>
                     * @return RegionId <p>地域 ID</p>
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置<p>地域 ID</p>
                     * @param _regionId <p>地域 ID</p>
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取<p>可用区名（目前为中文）</p>
                     * @return ZoneName <p>可用区名（目前为中文）</p>
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置<p>可用区名（目前为中文）</p>
                     * @param _zoneName <p>可用区名（目前为中文）</p>
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
                     * 获取<p>可用区资源状态(0:资源不足，不可使用；1:资源足够)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneResourceState <p>可用区资源状态(0:资源不足，不可使用；1:资源足够)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetZoneResourceState() const;

                    /**
                     * 设置<p>可用区资源状态(0:资源不足，不可使用；1:资源足够)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zoneResourceState <p>可用区资源状态(0:资源不足，不可使用；1:资源足够)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetZoneResourceState(const int64_t& _zoneResourceState);

                    /**
                     * 判断参数 ZoneResourceState 是否已赋值
                     * @return ZoneResourceState 是否已赋值
                     * 
                     */
                    bool ZoneResourceStateHasBeenSet() const;

                private:

                    /**
                     * <p>可用区</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>可用区 ID</p>
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>可用区状态( 0: 不可用；1: 可用)</p>
                     */
                    int64_t m_zoneState;
                    bool m_zoneStateHasBeenSet;

                    /**
                     * <p>地域 ID</p>
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * <p>可用区名（目前为中文）</p>
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * <p>可用区资源状态(0:资源不足，不可使用；1:资源足够)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_zoneResourceState;
                    bool m_zoneResourceStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSZONEITEM_H_
