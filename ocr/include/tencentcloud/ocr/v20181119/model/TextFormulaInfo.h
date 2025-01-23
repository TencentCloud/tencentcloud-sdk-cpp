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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_TEXTFORMULAINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_TEXTFORMULAINFO_H_

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
                * 公式识别结果
                */
                class TextFormulaInfo : public AbstractModel
                {
                public:
                    TextFormulaInfo();
                    ~TextFormulaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取识别出的文本行内容
                     * @return DetectedText 识别出的文本行内容
                     * 
                     */
                    std::string GetDetectedText() const;

                    /**
                     * 设置识别出的文本行内容
                     * @param _detectedText 识别出的文本行内容
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
                     * 获取识别出的文本行内容坐标
                     * @return Coord 识别出的文本行内容坐标
                     * 
                     */
                    Polygon GetCoord() const;

                    /**
                     * 设置识别出的文本行内容坐标
                     * @param _coord 识别出的文本行内容坐标
                     * 
                     */
                    void SetCoord(const Polygon& _coord);

                    /**
                     * 判断参数 Coord 是否已赋值
                     * @return Coord 是否已赋值
                     * 
                     */
                    bool CoordHasBeenSet() const;

                private:

                    /**
                     * 识别出的文本行内容
                     */
                    std::string m_detectedText;
                    bool m_detectedTextHasBeenSet;

                    /**
                     * 识别出的文本行内容坐标
                     */
                    Polygon m_coord;
                    bool m_coordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_TEXTFORMULAINFO_H_
