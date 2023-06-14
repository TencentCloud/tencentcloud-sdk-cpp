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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_IMAGEOCR_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_IMAGEOCR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ivld/v20210903/model/Rectf.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * 图片OCR识别结果
                */
                class ImageOcr : public AbstractModel
                {
                public:
                    ImageOcr();
                    ~ImageOcr() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取图片中可视文本识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content 图片中可视文本识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置图片中可视文本识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _content 图片中可视文本识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取可视文本在图片中的位置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppearRect 可视文本在图片中的位置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Rectf GetAppearRect() const;

                    /**
                     * 设置可视文本在图片中的位置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appearRect 可视文本在图片中的位置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppearRect(const Rectf& _appearRect);

                    /**
                     * 判断参数 AppearRect 是否已赋值
                     * @return AppearRect 是否已赋值
                     * 
                     */
                    bool AppearRectHasBeenSet() const;

                private:

                    /**
                     * 图片中可视文本识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 可视文本在图片中的位置信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Rectf m_appearRect;
                    bool m_appearRectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_IMAGEOCR_H_
