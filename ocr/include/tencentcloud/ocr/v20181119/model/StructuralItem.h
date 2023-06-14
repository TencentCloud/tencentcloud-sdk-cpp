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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_STRUCTURALITEM_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_STRUCTURALITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/ItemCoord.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 智能结构化识别
                */
                class StructuralItem : public AbstractModel
                {
                public:
                    StructuralItem();
                    ~StructuralItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取识别出的字段名称(关键字)。
                     * @return Name 识别出的字段名称(关键字)。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置识别出的字段名称(关键字)。
                     * @param _name 识别出的字段名称(关键字)。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取识别出的字段名称对应的值。
                     * @return Value 识别出的字段名称对应的值。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置识别出的字段名称对应的值。
                     * @param _value 识别出的字段名称对应的值。
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取置信度 0 ~100。
                     * @return Confidence 置信度 0 ~100。
                     * 
                     */
                    int64_t GetConfidence() const;

                    /**
                     * 设置置信度 0 ~100。
                     * @param _confidence 置信度 0 ~100。
                     * 
                     */
                    void SetConfidence(const int64_t& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取文本行在旋转纠正之后的图像中的像素
坐标。
                     * @return ItemCoord 文本行在旋转纠正之后的图像中的像素
坐标。
                     * 
                     */
                    ItemCoord GetItemCoord() const;

                    /**
                     * 设置文本行在旋转纠正之后的图像中的像素
坐标。
                     * @param _itemCoord 文本行在旋转纠正之后的图像中的像素
坐标。
                     * 
                     */
                    void SetItemCoord(const ItemCoord& _itemCoord);

                    /**
                     * 判断参数 ItemCoord 是否已赋值
                     * @return ItemCoord 是否已赋值
                     * 
                     */
                    bool ItemCoordHasBeenSet() const;

                    /**
                     * 获取字段所在行号，下标从0开始，非行字段或未能识别行号的该值返回-1。
                     * @return Row 字段所在行号，下标从0开始，非行字段或未能识别行号的该值返回-1。
                     * 
                     */
                    int64_t GetRow() const;

                    /**
                     * 设置字段所在行号，下标从0开始，非行字段或未能识别行号的该值返回-1。
                     * @param _row 字段所在行号，下标从0开始，非行字段或未能识别行号的该值返回-1。
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
                     * 识别出的字段名称(关键字)。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 识别出的字段名称对应的值。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 置信度 0 ~100。
                     */
                    int64_t m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 文本行在旋转纠正之后的图像中的像素
坐标。
                     */
                    ItemCoord m_itemCoord;
                    bool m_itemCoordHasBeenSet;

                    /**
                     * 字段所在行号，下标从0开始，非行字段或未能识别行号的该值返回-1。
                     */
                    int64_t m_row;
                    bool m_rowHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_STRUCTURALITEM_H_
