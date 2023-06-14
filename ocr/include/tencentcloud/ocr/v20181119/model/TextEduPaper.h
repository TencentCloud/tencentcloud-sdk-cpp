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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_TEXTEDUPAPER_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_TEXTEDUPAPER_H_

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
                * 数学试题识别结果
                */
                class TextEduPaper : public AbstractModel
                {
                public:
                    TextEduPaper();
                    ~TextEduPaper() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取识别出的字段名称（关键字）
                     * @return Item 识别出的字段名称（关键字）
                     * 
                     */
                    std::string GetItem() const;

                    /**
                     * 设置识别出的字段名称（关键字）
                     * @param _item 识别出的字段名称（关键字）
                     * 
                     */
                    void SetItem(const std::string& _item);

                    /**
                     * 判断参数 Item 是否已赋值
                     * @return Item 是否已赋值
                     * 
                     */
                    bool ItemHasBeenSet() const;

                    /**
                     * 获取识别出的字段名称对应的值，也就是字段Item对应的字符串结果
                     * @return DetectedText 识别出的字段名称对应的值，也就是字段Item对应的字符串结果
                     * 
                     */
                    std::string GetDetectedText() const;

                    /**
                     * 设置识别出的字段名称对应的值，也就是字段Item对应的字符串结果
                     * @param _detectedText 识别出的字段名称对应的值，也就是字段Item对应的字符串结果
                     * 
                     */
                    void SetDetectedText(const std::string& _detectedText);

                    /**
                     * 判断参数 DetectedText 是否已赋值
                     * @return DetectedText 是否已赋值
                     * 
                     */
                    bool DetectedTextHasBeenSet() const;

                    /**
                     * 获取文本行在旋转纠正之后的图像中的像素坐标，表示为（左上角x, 左上角y，宽width，高height）
                     * @return Itemcoord 文本行在旋转纠正之后的图像中的像素坐标，表示为（左上角x, 左上角y，宽width，高height）
                     * 
                     */
                    ItemCoord GetItemcoord() const;

                    /**
                     * 设置文本行在旋转纠正之后的图像中的像素坐标，表示为（左上角x, 左上角y，宽width，高height）
                     * @param _itemcoord 文本行在旋转纠正之后的图像中的像素坐标，表示为（左上角x, 左上角y，宽width，高height）
                     * 
                     */
                    void SetItemcoord(const ItemCoord& _itemcoord);

                    /**
                     * 判断参数 Itemcoord 是否已赋值
                     * @return Itemcoord 是否已赋值
                     * 
                     */
                    bool ItemcoordHasBeenSet() const;

                private:

                    /**
                     * 识别出的字段名称（关键字）
                     */
                    std::string m_item;
                    bool m_itemHasBeenSet;

                    /**
                     * 识别出的字段名称对应的值，也就是字段Item对应的字符串结果
                     */
                    std::string m_detectedText;
                    bool m_detectedTextHasBeenSet;

                    /**
                     * 文本行在旋转纠正之后的图像中的像素坐标，表示为（左上角x, 左上角y，宽width，高height）
                     */
                    ItemCoord m_itemcoord;
                    bool m_itemcoordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_TEXTEDUPAPER_H_
