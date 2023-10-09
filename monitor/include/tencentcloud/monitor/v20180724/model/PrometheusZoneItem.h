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
                     * 获取可用区
                     * @return Zone 可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param _zone 可用区
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
                     * 获取可用区 ID
                     * @return ZoneId 可用区 ID
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置可用区 ID
                     * @param _zoneId 可用区 ID
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
                     * 获取可用区状态( 0: 不可用；1: 可用)
                     * @return ZoneState 可用区状态( 0: 不可用；1: 可用)
                     * 
                     */
                    int64_t GetZoneState() const;

                    /**
                     * 设置可用区状态( 0: 不可用；1: 可用)
                     * @param _zoneState 可用区状态( 0: 不可用；1: 可用)
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
                     * 获取地域 ID
                     * @return RegionId 地域 ID
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置地域 ID
                     * @param _regionId 地域 ID
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
                     * 获取可用区名（目前为中文）
                     * @return ZoneName 可用区名（目前为中文）
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置可用区名（目前为中文）
                     * @param _zoneName 可用区名（目前为中文）
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
                     * 获取可用区资源状态(0:资源不足，不可使用；1:资源足够)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneResourceState 可用区资源状态(0:资源不足，不可使用；1:资源足够)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetZoneResourceState() const;

                    /**
                     * 设置可用区资源状态(0:资源不足，不可使用；1:资源足够)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zoneResourceState 可用区资源状态(0:资源不足，不可使用；1:资源足够)
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
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 可用区 ID
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 可用区状态( 0: 不可用；1: 可用)
                     */
                    int64_t m_zoneState;
                    bool m_zoneStateHasBeenSet;

                    /**
                     * 地域 ID
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 可用区名（目前为中文）
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * 可用区资源状态(0:资源不足，不可使用；1:资源足够)
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
