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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DEVICESPACEINFORES_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DEVICESPACEINFORES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 设备挂接的空间信息
                */
                class DeviceSpaceInfoRes : public AbstractModel
                {
                public:
                    DeviceSpaceInfoRes();
                    ~DeviceSpaceInfoRes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取建筑id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BuildingId 建筑id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBuildingId() const;

                    /**
                     * 设置建筑id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _buildingId 建筑id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBuildingId(const std::string& _buildingId);

                    /**
                     * 判断参数 BuildingId 是否已赋值
                     * @return BuildingId 是否已赋值
                     * 
                     */
                    bool BuildingIdHasBeenSet() const;

                    /**
                     * 获取构件id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ElementId 构件id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetElementId() const;

                    /**
                     * 设置构件id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _elementId 构件id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetElementId(const std::string& _elementId);

                    /**
                     * 判断参数 ElementId 是否已赋值
                     * @return ElementId 是否已赋值
                     * 
                     */
                    bool ElementIdHasBeenSet() const;

                    /**
                     * 获取构件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EntityType 构件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEntityType() const;

                    /**
                     * 设置构件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _entityType 构件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEntityType(const std::string& _entityType);

                    /**
                     * 判断参数 EntityType 是否已赋值
                     * @return EntityType 是否已赋值
                     * 
                     */
                    bool EntityTypeHasBeenSet() const;

                    /**
                     * 获取构件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ElementName 构件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetElementName() const;

                    /**
                     * 设置构件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _elementName 构件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetElementName(const std::string& _elementName);

                    /**
                     * 判断参数 ElementName 是否已赋值
                     * @return ElementName 是否已赋值
                     * 
                     */
                    bool ElementNameHasBeenSet() const;

                    /**
                     * 获取构件级别
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Level 构件级别
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置构件级别
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _level 构件级别
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取底部标高（单位mm）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BottomHeight 底部标高（单位mm）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBottomHeight() const;

                    /**
                     * 设置底部标高（单位mm）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bottomHeight 底部标高（单位mm）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBottomHeight(const int64_t& _bottomHeight);

                    /**
                     * 判断参数 BottomHeight 是否已赋值
                     * @return BottomHeight 是否已赋值
                     * 
                     */
                    bool BottomHeightHasBeenSet() const;

                    /**
                     * 获取空间编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpaceCode 空间编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSpaceCode() const;

                    /**
                     * 设置空间编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _spaceCode 空间编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpaceCode(const std::string& _spaceCode);

                    /**
                     * 判断参数 SpaceCode 是否已赋值
                     * @return SpaceCode 是否已赋值
                     * 
                     */
                    bool SpaceCodeHasBeenSet() const;

                private:

                    /**
                     * 建筑id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_buildingId;
                    bool m_buildingIdHasBeenSet;

                    /**
                     * 构件id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_elementId;
                    bool m_elementIdHasBeenSet;

                    /**
                     * 构件类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_entityType;
                    bool m_entityTypeHasBeenSet;

                    /**
                     * 构件名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_elementName;
                    bool m_elementNameHasBeenSet;

                    /**
                     * 构件级别
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 底部标高（单位mm）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_bottomHeight;
                    bool m_bottomHeightHasBeenSet;

                    /**
                     * 空间编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_spaceCode;
                    bool m_spaceCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DEVICESPACEINFORES_H_
