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

#ifndef TENCENTCLOUD_TIIA_V20190529_MODEL_OBJECTINFO_H_
#define TENCENTCLOUD_TIIA_V20190529_MODEL_OBJECTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiia/v20190529/model/Box.h>
#include <tencentcloud/tiia/v20190529/model/ColorInfo.h>
#include <tencentcloud/tiia/v20190529/model/Attribute.h>


namespace TencentCloud
{
    namespace Tiia
    {
        namespace V20190529
        {
            namespace Model
            {
                /**
                * 图像的主体信息。
                */
                class ObjectInfo : public AbstractModel
                {
                public:
                    ObjectInfo();
                    ~ObjectInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取图像主体区域。
                     * @return Box 图像主体区域。
                     * 
                     */
                    Box GetBox() const;

                    /**
                     * 设置图像主体区域。
                     * @param _box 图像主体区域。
                     * 
                     */
                    void SetBox(const Box& _box);

                    /**
                     * 判断参数 Box 是否已赋值
                     * @return Box 是否已赋值
                     * 
                     */
                    bool BoxHasBeenSet() const;

                    /**
                     * 获取主体类别ID。
                     * @return CategoryId 主体类别ID。
                     * 
                     */
                    int64_t GetCategoryId() const;

                    /**
                     * 设置主体类别ID。
                     * @param _categoryId 主体类别ID。
                     * 
                     */
                    void SetCategoryId(const int64_t& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     * 
                     */
                    bool CategoryIdHasBeenSet() const;

                    /**
                     * 获取整张图颜色信息。
                     * @return Colors 整张图颜色信息。
                     * 
                     */
                    std::vector<ColorInfo> GetColors() const;

                    /**
                     * 设置整张图颜色信息。
                     * @param _colors 整张图颜色信息。
                     * 
                     */
                    void SetColors(const std::vector<ColorInfo>& _colors);

                    /**
                     * 判断参数 Colors 是否已赋值
                     * @return Colors 是否已赋值
                     * 
                     */
                    bool ColorsHasBeenSet() const;

                    /**
                     * 获取属性信息。
                     * @return Attributes 属性信息。
                     * 
                     */
                    std::vector<Attribute> GetAttributes() const;

                    /**
                     * 设置属性信息。
                     * @param _attributes 属性信息。
                     * 
                     */
                    void SetAttributes(const std::vector<Attribute>& _attributes);

                    /**
                     * 判断参数 Attributes 是否已赋值
                     * @return Attributes 是否已赋值
                     * 
                     */
                    bool AttributesHasBeenSet() const;

                    /**
                     * 获取图像的所有主体区域，置信度，以及主体区域类别ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AllBox 图像的所有主体区域，置信度，以及主体区域类别ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Box> GetAllBox() const;

                    /**
                     * 设置图像的所有主体区域，置信度，以及主体区域类别ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _allBox 图像的所有主体区域，置信度，以及主体区域类别ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAllBox(const std::vector<Box>& _allBox);

                    /**
                     * 判断参数 AllBox 是否已赋值
                     * @return AllBox 是否已赋值
                     * 
                     */
                    bool AllBoxHasBeenSet() const;

                private:

                    /**
                     * 图像主体区域。
                     */
                    Box m_box;
                    bool m_boxHasBeenSet;

                    /**
                     * 主体类别ID。
                     */
                    int64_t m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * 整张图颜色信息。
                     */
                    std::vector<ColorInfo> m_colors;
                    bool m_colorsHasBeenSet;

                    /**
                     * 属性信息。
                     */
                    std::vector<Attribute> m_attributes;
                    bool m_attributesHasBeenSet;

                    /**
                     * 图像的所有主体区域，置信度，以及主体区域类别ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Box> m_allBox;
                    bool m_allBoxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIIA_V20190529_MODEL_OBJECTINFO_H_
