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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_ITEMPOLYGONINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_ITEMPOLYGONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/Polygon.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 发票字段坐标信息。包括字段英文名称、字段值所在位置的四点坐标、字段所属行号，具体内容请点击左侧链接。
                */
                class ItemPolygonInfo : public AbstractModel
                {
                public:
                    ItemPolygonInfo();
                    ~ItemPolygonInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取发票的英文字段名称（如Title）
                     * @return Key 发票的英文字段名称（如Title）
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置发票的英文字段名称（如Title）
                     * @param _key 发票的英文字段名称（如Title）
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取字段值所在位置的四点坐标
                     * @return Polygon 字段值所在位置的四点坐标
                     * 
                     */
                    Polygon GetPolygon() const;

                    /**
                     * 设置字段值所在位置的四点坐标
                     * @param _polygon 字段值所在位置的四点坐标
                     * 
                     */
                    void SetPolygon(const Polygon& _polygon);

                    /**
                     * 判断参数 Polygon 是否已赋值
                     * @return Polygon 是否已赋值
                     * 
                     */
                    bool PolygonHasBeenSet() const;

                    /**
                     * 获取字段属于第几行，用于相同字段的排版，如发票明细表格项目，普通字段使用默认值为-1，表示无列排版。
                     * @return Row 字段属于第几行，用于相同字段的排版，如发票明细表格项目，普通字段使用默认值为-1，表示无列排版。
                     * 
                     */
                    int64_t GetRow() const;

                    /**
                     * 设置字段属于第几行，用于相同字段的排版，如发票明细表格项目，普通字段使用默认值为-1，表示无列排版。
                     * @param _row 字段属于第几行，用于相同字段的排版，如发票明细表格项目，普通字段使用默认值为-1，表示无列排版。
                     * 
                     */
                    void SetRow(const int64_t& _row);

                    /**
                     * 判断参数 Row 是否已赋值
                     * @return Row 是否已赋值
                     * 
                     */
                    bool RowHasBeenSet() const;

                private:

                    /**
                     * 发票的英文字段名称（如Title）
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 字段值所在位置的四点坐标
                     */
                    Polygon m_polygon;
                    bool m_polygonHasBeenSet;

                    /**
                     * 字段属于第几行，用于相同字段的排版，如发票明细表格项目，普通字段使用默认值为-1，表示无列排版。
                     */
                    int64_t m_row;
                    bool m_rowHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_ITEMPOLYGONINFO_H_
