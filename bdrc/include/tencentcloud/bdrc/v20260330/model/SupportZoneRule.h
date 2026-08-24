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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_SUPPORTZONERULE_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_SUPPORTZONERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * 可用区级容灾规则，描述某个生产可用区可容灾到的目标可用区集合。
                */
                class SupportZoneRule : public AbstractModel
                {
                public:
                    SupportZoneRule();
                    ~SupportZoneRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取生产可用区。
                     * @return SourceZone 生产可用区。
                     * 
                     */
                    std::string GetSourceZone() const;

                    /**
                     * 设置生产可用区。
                     * @param _sourceZone 生产可用区。
                     * 
                     */
                    void SetSourceZone(const std::string& _sourceZone);

                    /**
                     * 判断参数 SourceZone 是否已赋值
                     * @return SourceZone 是否已赋值
                     * 
                     */
                    bool SourceZoneHasBeenSet() const;

                    /**
                     * 获取是否支持容灾到生产地域内的全部可用区。true 时 TargetZones 可忽略。
                     * @return IsAllZoneSupport 是否支持容灾到生产地域内的全部可用区。true 时 TargetZones 可忽略。
                     * 
                     */
                    bool GetIsAllZoneSupport() const;

                    /**
                     * 设置是否支持容灾到生产地域内的全部可用区。true 时 TargetZones 可忽略。
                     * @param _isAllZoneSupport 是否支持容灾到生产地域内的全部可用区。true 时 TargetZones 可忽略。
                     * 
                     */
                    void SetIsAllZoneSupport(const bool& _isAllZoneSupport);

                    /**
                     * 判断参数 IsAllZoneSupport 是否已赋值
                     * @return IsAllZoneSupport 是否已赋值
                     * 
                     */
                    bool IsAllZoneSupportHasBeenSet() const;

                    /**
                     * 获取目标可用区列表。当 IsAllZoneSupport=false 时枚举具体可容灾到的可用区。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetZones 目标可用区列表。当 IsAllZoneSupport=false 时枚举具体可容灾到的可用区。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetTargetZones() const;

                    /**
                     * 设置目标可用区列表。当 IsAllZoneSupport=false 时枚举具体可容灾到的可用区。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetZones 目标可用区列表。当 IsAllZoneSupport=false 时枚举具体可容灾到的可用区。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetZones(const std::vector<std::string>& _targetZones);

                    /**
                     * 判断参数 TargetZones 是否已赋值
                     * @return TargetZones 是否已赋值
                     * 
                     */
                    bool TargetZonesHasBeenSet() const;

                private:

                    /**
                     * 生产可用区。
                     */
                    std::string m_sourceZone;
                    bool m_sourceZoneHasBeenSet;

                    /**
                     * 是否支持容灾到生产地域内的全部可用区。true 时 TargetZones 可忽略。
                     */
                    bool m_isAllZoneSupport;
                    bool m_isAllZoneSupportHasBeenSet;

                    /**
                     * 目标可用区列表。当 IsAllZoneSupport=false 时枚举具体可容灾到的可用区。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_targetZones;
                    bool m_targetZonesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_SUPPORTZONERULE_H_
