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

#ifndef TENCENTCLOUD_REGION_V20220627_MODEL_ZONEINFO_H_
#define TENCENTCLOUD_REGION_V20220627_MODEL_ZONEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Region
    {
        namespace V20220627
        {
            namespace Model
            {
                /**
                * 可用区信息
                */
                class ZoneInfo : public AbstractModel
                {
                public:
                    ZoneInfo();
                    ~ZoneInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取可用区名称，例如，ap-guangzhou-3
全网可用区名称如下：
<li> ap-chongqing-1 </li>
<li> ap-seoul-1 </li>
<li> ap-seoul-2 </li>
<li> ap-chengdu-1 </li>
<li> ap-chengdu-2 </li>
<li> ap-hongkong-1 </li>
<li> ap-hongkong-2 </li>
<li> ap-shenzhen-fsi-1 </li>
<li> ap-shenzhen-fsi-2 </li>
<li> ap-shenzhen-fsi-3 </li>
<li> ap-guangzhou-1（售罄）</li>
<li> ap-guangzhou-2（售罄）</li>
<li> ap-guangzhou-3 </li>
<li> ap-guangzhou-4 </li>
<li> ap-guangzhou-6 </li>
<li> ap-tokyo-1 </li>
<li> ap-singapore-1 </li>
<li> ap-singapore-2 </li>
<li> ap-shanghai-fsi-1 </li>
<li> ap-shanghai-fsi-2 </li>
<li> ap-shanghai-fsi-3 </li>
<li> ap-bangkok-1 </li>
<li> ap-shanghai-1（售罄） </li>
<li> ap-shanghai-2 </li>
<li> ap-shanghai-3 </li>
<li> ap-shanghai-4 </li>
<li> ap-shanghai-5 </li>
<li> ap-mumbai-1 </li>
<li> ap-mumbai-2 </li>
<li> ap-beijing-1 </li>
<li> ap-beijing-2 </li>
<li> ap-beijing-3 </li>
<li> ap-beijing-4 </li>
<li> ap-beijing-5 </li>
<li> na-siliconvalley-1 </li>
<li> na-siliconvalley-2 </li>
<li> eu-frankfurt-1 </li>
<li> na-ashburn-1 </li>
<li> na-ashburn-2 </li>
<li> ap-nanjing-1 </li>
<li> ap-nanjing-2 </li>
                     * @return Zone 可用区名称，例如，ap-guangzhou-3
全网可用区名称如下：
<li> ap-chongqing-1 </li>
<li> ap-seoul-1 </li>
<li> ap-seoul-2 </li>
<li> ap-chengdu-1 </li>
<li> ap-chengdu-2 </li>
<li> ap-hongkong-1 </li>
<li> ap-hongkong-2 </li>
<li> ap-shenzhen-fsi-1 </li>
<li> ap-shenzhen-fsi-2 </li>
<li> ap-shenzhen-fsi-3 </li>
<li> ap-guangzhou-1（售罄）</li>
<li> ap-guangzhou-2（售罄）</li>
<li> ap-guangzhou-3 </li>
<li> ap-guangzhou-4 </li>
<li> ap-guangzhou-6 </li>
<li> ap-tokyo-1 </li>
<li> ap-singapore-1 </li>
<li> ap-singapore-2 </li>
<li> ap-shanghai-fsi-1 </li>
<li> ap-shanghai-fsi-2 </li>
<li> ap-shanghai-fsi-3 </li>
<li> ap-bangkok-1 </li>
<li> ap-shanghai-1（售罄） </li>
<li> ap-shanghai-2 </li>
<li> ap-shanghai-3 </li>
<li> ap-shanghai-4 </li>
<li> ap-shanghai-5 </li>
<li> ap-mumbai-1 </li>
<li> ap-mumbai-2 </li>
<li> ap-beijing-1 </li>
<li> ap-beijing-2 </li>
<li> ap-beijing-3 </li>
<li> ap-beijing-4 </li>
<li> ap-beijing-5 </li>
<li> na-siliconvalley-1 </li>
<li> na-siliconvalley-2 </li>
<li> eu-frankfurt-1 </li>
<li> na-ashburn-1 </li>
<li> na-ashburn-2 </li>
<li> ap-nanjing-1 </li>
<li> ap-nanjing-2 </li>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区名称，例如，ap-guangzhou-3
全网可用区名称如下：
<li> ap-chongqing-1 </li>
<li> ap-seoul-1 </li>
<li> ap-seoul-2 </li>
<li> ap-chengdu-1 </li>
<li> ap-chengdu-2 </li>
<li> ap-hongkong-1 </li>
<li> ap-hongkong-2 </li>
<li> ap-shenzhen-fsi-1 </li>
<li> ap-shenzhen-fsi-2 </li>
<li> ap-shenzhen-fsi-3 </li>
<li> ap-guangzhou-1（售罄）</li>
<li> ap-guangzhou-2（售罄）</li>
<li> ap-guangzhou-3 </li>
<li> ap-guangzhou-4 </li>
<li> ap-guangzhou-6 </li>
<li> ap-tokyo-1 </li>
<li> ap-singapore-1 </li>
<li> ap-singapore-2 </li>
<li> ap-shanghai-fsi-1 </li>
<li> ap-shanghai-fsi-2 </li>
<li> ap-shanghai-fsi-3 </li>
<li> ap-bangkok-1 </li>
<li> ap-shanghai-1（售罄） </li>
<li> ap-shanghai-2 </li>
<li> ap-shanghai-3 </li>
<li> ap-shanghai-4 </li>
<li> ap-shanghai-5 </li>
<li> ap-mumbai-1 </li>
<li> ap-mumbai-2 </li>
<li> ap-beijing-1 </li>
<li> ap-beijing-2 </li>
<li> ap-beijing-3 </li>
<li> ap-beijing-4 </li>
<li> ap-beijing-5 </li>
<li> na-siliconvalley-1 </li>
<li> na-siliconvalley-2 </li>
<li> eu-frankfurt-1 </li>
<li> na-ashburn-1 </li>
<li> na-ashburn-2 </li>
<li> ap-nanjing-1 </li>
<li> ap-nanjing-2 </li>
                     * @param _zone 可用区名称，例如，ap-guangzhou-3
全网可用区名称如下：
<li> ap-chongqing-1 </li>
<li> ap-seoul-1 </li>
<li> ap-seoul-2 </li>
<li> ap-chengdu-1 </li>
<li> ap-chengdu-2 </li>
<li> ap-hongkong-1 </li>
<li> ap-hongkong-2 </li>
<li> ap-shenzhen-fsi-1 </li>
<li> ap-shenzhen-fsi-2 </li>
<li> ap-shenzhen-fsi-3 </li>
<li> ap-guangzhou-1（售罄）</li>
<li> ap-guangzhou-2（售罄）</li>
<li> ap-guangzhou-3 </li>
<li> ap-guangzhou-4 </li>
<li> ap-guangzhou-6 </li>
<li> ap-tokyo-1 </li>
<li> ap-singapore-1 </li>
<li> ap-singapore-2 </li>
<li> ap-shanghai-fsi-1 </li>
<li> ap-shanghai-fsi-2 </li>
<li> ap-shanghai-fsi-3 </li>
<li> ap-bangkok-1 </li>
<li> ap-shanghai-1（售罄） </li>
<li> ap-shanghai-2 </li>
<li> ap-shanghai-3 </li>
<li> ap-shanghai-4 </li>
<li> ap-shanghai-5 </li>
<li> ap-mumbai-1 </li>
<li> ap-mumbai-2 </li>
<li> ap-beijing-1 </li>
<li> ap-beijing-2 </li>
<li> ap-beijing-3 </li>
<li> ap-beijing-4 </li>
<li> ap-beijing-5 </li>
<li> na-siliconvalley-1 </li>
<li> na-siliconvalley-2 </li>
<li> eu-frankfurt-1 </li>
<li> na-ashburn-1 </li>
<li> na-ashburn-2 </li>
<li> ap-nanjing-1 </li>
<li> ap-nanjing-2 </li>
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
                     * 获取可用区描述，例如，广州三区
                     * @return ZoneName 可用区描述，例如，广州三区
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置可用区描述，例如，广州三区
                     * @param _zoneName 可用区描述，例如，广州三区
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
                     * 获取可用区ID
                     * @return ZoneId 可用区ID
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置可用区ID
                     * @param _zoneId 可用区ID
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
                     * 获取可用区状态，包含AVAILABLE和UNAVAILABLE。AVAILABLE代表可用，UNAVAILABLE代表不可用。
                     * @return ZoneState 可用区状态，包含AVAILABLE和UNAVAILABLE。AVAILABLE代表可用，UNAVAILABLE代表不可用。
                     * 
                     */
                    std::string GetZoneState() const;

                    /**
                     * 设置可用区状态，包含AVAILABLE和UNAVAILABLE。AVAILABLE代表可用，UNAVAILABLE代表不可用。
                     * @param _zoneState 可用区状态，包含AVAILABLE和UNAVAILABLE。AVAILABLE代表可用，UNAVAILABLE代表不可用。
                     * 
                     */
                    void SetZoneState(const std::string& _zoneState);

                    /**
                     * 判断参数 ZoneState 是否已赋值
                     * @return ZoneState 是否已赋值
                     * 
                     */
                    bool ZoneStateHasBeenSet() const;

                    /**
                     * 获取父级zone
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentZone 父级zone
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParentZone() const;

                    /**
                     * 设置父级zone
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentZone 父级zone
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParentZone(const std::string& _parentZone);

                    /**
                     * 判断参数 ParentZone 是否已赋值
                     * @return ParentZone 是否已赋值
                     * 
                     */
                    bool ParentZoneHasBeenSet() const;

                    /**
                     * 获取父级可用区ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentZoneId 父级可用区ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParentZoneId() const;

                    /**
                     * 设置父级可用区ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentZoneId 父级可用区ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParentZoneId(const std::string& _parentZoneId);

                    /**
                     * 判断参数 ParentZoneId 是否已赋值
                     * @return ParentZoneId 是否已赋值
                     * 
                     */
                    bool ParentZoneIdHasBeenSet() const;

                    /**
                     * 获取父级可用区描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentZoneName 父级可用区描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParentZoneName() const;

                    /**
                     * 设置父级可用区描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentZoneName 父级可用区描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParentZoneName(const std::string& _parentZoneName);

                    /**
                     * 判断参数 ParentZoneName 是否已赋值
                     * @return ParentZoneName 是否已赋值
                     * 
                     */
                    bool ParentZoneNameHasBeenSet() const;

                    /**
                     * 获取zone类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneType zone类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetZoneType() const;

                    /**
                     * 设置zone类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zoneType zone类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetZoneType(const std::string& _zoneType);

                    /**
                     * 判断参数 ZoneType 是否已赋值
                     * @return ZoneType 是否已赋值
                     * 
                     */
                    bool ZoneTypeHasBeenSet() const;

                    /**
                     * 获取控制台类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MachineRoomTypeMC 控制台类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMachineRoomTypeMC() const;

                    /**
                     * 设置控制台类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _machineRoomTypeMC 控制台类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMachineRoomTypeMC(const std::string& _machineRoomTypeMC);

                    /**
                     * 判断参数 MachineRoomTypeMC 是否已赋值
                     * @return MachineRoomTypeMC 是否已赋值
                     * 
                     */
                    bool MachineRoomTypeMCHasBeenSet() const;

                    /**
                     * 获取和ZoneId一样，适用于控制台调用。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneIdMC 和ZoneId一样，适用于控制台调用。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetZoneIdMC() const;

                    /**
                     * 设置和ZoneId一样，适用于控制台调用。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zoneIdMC 和ZoneId一样，适用于控制台调用。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetZoneIdMC(const std::string& _zoneIdMC);

                    /**
                     * 判断参数 ZoneIdMC 是否已赋值
                     * @return ZoneIdMC 是否已赋值
                     * 
                     */
                    bool ZoneIdMCHasBeenSet() const;

                private:

                    /**
                     * 可用区名称，例如，ap-guangzhou-3
全网可用区名称如下：
<li> ap-chongqing-1 </li>
<li> ap-seoul-1 </li>
<li> ap-seoul-2 </li>
<li> ap-chengdu-1 </li>
<li> ap-chengdu-2 </li>
<li> ap-hongkong-1 </li>
<li> ap-hongkong-2 </li>
<li> ap-shenzhen-fsi-1 </li>
<li> ap-shenzhen-fsi-2 </li>
<li> ap-shenzhen-fsi-3 </li>
<li> ap-guangzhou-1（售罄）</li>
<li> ap-guangzhou-2（售罄）</li>
<li> ap-guangzhou-3 </li>
<li> ap-guangzhou-4 </li>
<li> ap-guangzhou-6 </li>
<li> ap-tokyo-1 </li>
<li> ap-singapore-1 </li>
<li> ap-singapore-2 </li>
<li> ap-shanghai-fsi-1 </li>
<li> ap-shanghai-fsi-2 </li>
<li> ap-shanghai-fsi-3 </li>
<li> ap-bangkok-1 </li>
<li> ap-shanghai-1（售罄） </li>
<li> ap-shanghai-2 </li>
<li> ap-shanghai-3 </li>
<li> ap-shanghai-4 </li>
<li> ap-shanghai-5 </li>
<li> ap-mumbai-1 </li>
<li> ap-mumbai-2 </li>
<li> ap-beijing-1 </li>
<li> ap-beijing-2 </li>
<li> ap-beijing-3 </li>
<li> ap-beijing-4 </li>
<li> ap-beijing-5 </li>
<li> na-siliconvalley-1 </li>
<li> na-siliconvalley-2 </li>
<li> eu-frankfurt-1 </li>
<li> na-ashburn-1 </li>
<li> na-ashburn-2 </li>
<li> ap-nanjing-1 </li>
<li> ap-nanjing-2 </li>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 可用区描述，例如，广州三区
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * 可用区ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 可用区状态，包含AVAILABLE和UNAVAILABLE。AVAILABLE代表可用，UNAVAILABLE代表不可用。
                     */
                    std::string m_zoneState;
                    bool m_zoneStateHasBeenSet;

                    /**
                     * 父级zone
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parentZone;
                    bool m_parentZoneHasBeenSet;

                    /**
                     * 父级可用区ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parentZoneId;
                    bool m_parentZoneIdHasBeenSet;

                    /**
                     * 父级可用区描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parentZoneName;
                    bool m_parentZoneNameHasBeenSet;

                    /**
                     * zone类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zoneType;
                    bool m_zoneTypeHasBeenSet;

                    /**
                     * 控制台类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_machineRoomTypeMC;
                    bool m_machineRoomTypeMCHasBeenSet;

                    /**
                     * 和ZoneId一样，适用于控制台调用。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zoneIdMC;
                    bool m_zoneIdMCHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REGION_V20220627_MODEL_ZONEINFO_H_
