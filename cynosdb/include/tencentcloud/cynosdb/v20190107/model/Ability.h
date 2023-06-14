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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ABILITY_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ABILITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 集群支持的功能
                */
                class Ability : public AbstractModel
                {
                public:
                    Ability();
                    ~Ability() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否支持从可用区
                     * @return IsSupportSlaveZone 是否支持从可用区
                     * 
                     */
                    std::string GetIsSupportSlaveZone() const;

                    /**
                     * 设置是否支持从可用区
                     * @param _isSupportSlaveZone 是否支持从可用区
                     * 
                     */
                    void SetIsSupportSlaveZone(const std::string& _isSupportSlaveZone);

                    /**
                     * 判断参数 IsSupportSlaveZone 是否已赋值
                     * @return IsSupportSlaveZone 是否已赋值
                     * 
                     */
                    bool IsSupportSlaveZoneHasBeenSet() const;

                    /**
                     * 获取不支持从可用区的原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NonsupportSlaveZoneReason 不支持从可用区的原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNonsupportSlaveZoneReason() const;

                    /**
                     * 设置不支持从可用区的原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nonsupportSlaveZoneReason 不支持从可用区的原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNonsupportSlaveZoneReason(const std::string& _nonsupportSlaveZoneReason);

                    /**
                     * 判断参数 NonsupportSlaveZoneReason 是否已赋值
                     * @return NonsupportSlaveZoneReason 是否已赋值
                     * 
                     */
                    bool NonsupportSlaveZoneReasonHasBeenSet() const;

                    /**
                     * 获取是否支持RO实例
                     * @return IsSupportRo 是否支持RO实例
                     * 
                     */
                    std::string GetIsSupportRo() const;

                    /**
                     * 设置是否支持RO实例
                     * @param _isSupportRo 是否支持RO实例
                     * 
                     */
                    void SetIsSupportRo(const std::string& _isSupportRo);

                    /**
                     * 判断参数 IsSupportRo 是否已赋值
                     * @return IsSupportRo 是否已赋值
                     * 
                     */
                    bool IsSupportRoHasBeenSet() const;

                    /**
                     * 获取不支持RO实例的原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NonsupportRoReason 不支持RO实例的原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNonsupportRoReason() const;

                    /**
                     * 设置不支持RO实例的原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nonsupportRoReason 不支持RO实例的原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNonsupportRoReason(const std::string& _nonsupportRoReason);

                    /**
                     * 判断参数 NonsupportRoReason 是否已赋值
                     * @return NonsupportRoReason 是否已赋值
                     * 
                     */
                    bool NonsupportRoReasonHasBeenSet() const;

                private:

                    /**
                     * 是否支持从可用区
                     */
                    std::string m_isSupportSlaveZone;
                    bool m_isSupportSlaveZoneHasBeenSet;

                    /**
                     * 不支持从可用区的原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nonsupportSlaveZoneReason;
                    bool m_nonsupportSlaveZoneReasonHasBeenSet;

                    /**
                     * 是否支持RO实例
                     */
                    std::string m_isSupportRo;
                    bool m_isSupportRoHasBeenSet;

                    /**
                     * 不支持RO实例的原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nonsupportRoReason;
                    bool m_nonsupportRoReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ABILITY_H_
