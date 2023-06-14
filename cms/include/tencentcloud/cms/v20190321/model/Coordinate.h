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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_COORDINATE_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_COORDINATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * 坐标
                */
                class Coordinate : public AbstractModel
                {
                public:
                    Coordinate();
                    ~Coordinate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取宽度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Width 宽度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置宽度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _width 宽度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取左上角纵坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cy 左上角纵坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCy() const;

                    /**
                     * 设置左上角纵坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cy 左上角纵坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCy(const int64_t& _cy);

                    /**
                     * 判断参数 Cy 是否已赋值
                     * @return Cy 是否已赋值
                     * 
                     */
                    bool CyHasBeenSet() const;

                    /**
                     * 获取左上角横坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cx 左上角横坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCx() const;

                    /**
                     * 设置左上角横坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cx 左上角横坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCx(const int64_t& _cx);

                    /**
                     * 判断参数 Cx 是否已赋值
                     * @return Cx 是否已赋值
                     * 
                     */
                    bool CxHasBeenSet() const;

                    /**
                     * 获取高度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Height 高度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置高度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _height 高度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                private:

                    /**
                     * 宽度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 左上角纵坐标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cy;
                    bool m_cyHasBeenSet;

                    /**
                     * 左上角横坐标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cx;
                    bool m_cxHasBeenSet;

                    /**
                     * 高度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_COORDINATE_H_
