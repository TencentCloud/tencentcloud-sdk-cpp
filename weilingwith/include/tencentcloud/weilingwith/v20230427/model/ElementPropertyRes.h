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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ELEMENTPROPERTYRES_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ELEMENTPROPERTYRES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/weilingwith/v20230427/model/ElementProperty.h>
#include <tencentcloud/weilingwith/v20230427/model/ElementCoordinates.h>
#include <tencentcloud/weilingwith/v20230427/model/ElementTranslate.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 构件属性信息响应体
                */
                class ElementPropertyRes : public AbstractModel
                {
                public:
                    ElementPropertyRes();
                    ~ElementPropertyRes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取建筑id
                     * @return BuildingId 建筑id
                     * 
                     */
                    std::string GetBuildingId() const;

                    /**
                     * 设置建筑id
                     * @param _buildingId 建筑id
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
                     * @return ElementId 构件id
                     * 
                     */
                    std::string GetElementId() const;

                    /**
                     * 设置构件id
                     * @param _elementId 构件id
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
                     * 获取构件属性集合
                     * @return PropertySet 构件属性集合
                     * 
                     */
                    std::vector<ElementProperty> GetPropertySet() const;

                    /**
                     * 设置构件属性集合
                     * @param _propertySet 构件属性集合
                     * 
                     */
                    void SetPropertySet(const std::vector<ElementProperty>& _propertySet);

                    /**
                     * 判断参数 PropertySet 是否已赋值
                     * @return PropertySet 是否已赋值
                     * 
                     */
                    bool PropertySetHasBeenSet() const;

                    /**
                     * 获取构件地理坐标
                     * @return Coordinates 构件地理坐标
                     * 
                     */
                    ElementCoordinates GetCoordinates() const;

                    /**
                     * 设置构件地理坐标
                     * @param _coordinates 构件地理坐标
                     * 
                     */
                    void SetCoordinates(const ElementCoordinates& _coordinates);

                    /**
                     * 判断参数 Coordinates 是否已赋值
                     * @return Coordinates 是否已赋值
                     * 
                     */
                    bool CoordinatesHasBeenSet() const;

                    /**
                     * 获取构件偏移量
                     * @return Translate 构件偏移量
                     * 
                     */
                    ElementTranslate GetTranslate() const;

                    /**
                     * 设置构件偏移量
                     * @param _translate 构件偏移量
                     * 
                     */
                    void SetTranslate(const ElementTranslate& _translate);

                    /**
                     * 判断参数 Translate 是否已赋值
                     * @return Translate 是否已赋值
                     * 
                     */
                    bool TranslateHasBeenSet() const;

                    /**
                     * 获取构件名称
                     * @return ElementName 构件名称
                     * 
                     */
                    std::string GetElementName() const;

                    /**
                     * 设置构件名称
                     * @param _elementName 构件名称
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
                     * 获取构件类型代码
                     * @return EntityTypeCode 构件类型代码
                     * 
                     */
                    std::string GetEntityTypeCode() const;

                    /**
                     * 设置构件类型代码
                     * @param _entityTypeCode 构件类型代码
                     * 
                     */
                    void SetEntityTypeCode(const std::string& _entityTypeCode);

                    /**
                     * 判断参数 EntityTypeCode 是否已赋值
                     * @return EntityTypeCode 是否已赋值
                     * 
                     */
                    bool EntityTypeCodeHasBeenSet() const;

                    /**
                     * 获取构件类型名称
                     * @return EntityTypeName 构件类型名称
                     * 
                     */
                    std::string GetEntityTypeName() const;

                    /**
                     * 设置构件类型名称
                     * @param _entityTypeName 构件类型名称
                     * 
                     */
                    void SetEntityTypeName(const std::string& _entityTypeName);

                    /**
                     * 判断参数 EntityTypeName 是否已赋值
                     * @return EntityTypeName 是否已赋值
                     * 
                     */
                    bool EntityTypeNameHasBeenSet() const;

                private:

                    /**
                     * 建筑id
                     */
                    std::string m_buildingId;
                    bool m_buildingIdHasBeenSet;

                    /**
                     * 构件id
                     */
                    std::string m_elementId;
                    bool m_elementIdHasBeenSet;

                    /**
                     * 构件属性集合
                     */
                    std::vector<ElementProperty> m_propertySet;
                    bool m_propertySetHasBeenSet;

                    /**
                     * 构件地理坐标
                     */
                    ElementCoordinates m_coordinates;
                    bool m_coordinatesHasBeenSet;

                    /**
                     * 构件偏移量
                     */
                    ElementTranslate m_translate;
                    bool m_translateHasBeenSet;

                    /**
                     * 构件名称
                     */
                    std::string m_elementName;
                    bool m_elementNameHasBeenSet;

                    /**
                     * 构件类型代码
                     */
                    std::string m_entityTypeCode;
                    bool m_entityTypeCodeHasBeenSet;

                    /**
                     * 构件类型名称
                     */
                    std::string m_entityTypeName;
                    bool m_entityTypeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ELEMENTPROPERTYRES_H_
