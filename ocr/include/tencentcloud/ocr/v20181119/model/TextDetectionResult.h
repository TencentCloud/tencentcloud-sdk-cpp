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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_TEXTDETECTIONRESULT_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_TEXTDETECTIONRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/Coord.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 识别结果
                */
                class TextDetectionResult : public AbstractModel
                {
                public:
                    TextDetectionResult();
                    ~TextDetectionResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取识别出的文本行内容
                     * @return Value 识别出的文本行内容
                     */
                    std::string GetValue() const;

                    /**
                     * 设置识别出的文本行内容
                     * @param Value 识别出的文本行内容
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取坐标，以四个顶点坐标表示
                     * @return Polygon 坐标，以四个顶点坐标表示
                     */
                    std::vector<Coord> GetPolygon() const;

                    /**
                     * 设置坐标，以四个顶点坐标表示
                     * @param Polygon 坐标，以四个顶点坐标表示
                     */
                    void SetPolygon(const std::vector<Coord>& _polygon);

                    /**
                     * 判断参数 Polygon 是否已赋值
                     * @return Polygon 是否已赋值
                     */
                    bool PolygonHasBeenSet() const;

                private:

                    /**
                     * 识别出的文本行内容
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 坐标，以四个顶点坐标表示
                     */
                    std::vector<Coord> m_polygon;
                    bool m_polygonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_TEXTDETECTIONRESULT_H_
