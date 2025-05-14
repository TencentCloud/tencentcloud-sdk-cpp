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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEENCODECONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEENCODECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 图片编码格式参数
                */
                class ImageEncodeConfig : public AbstractModel
                {
                public:
                    ImageEncodeConfig();
                    ~ImageEncodeConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取图片格式，取值范围：JPEG、PNG、BMP、WebP，缺省为原图格式。不支持动画。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Format 图片格式，取值范围：JPEG、PNG、BMP、WebP，缺省为原图格式。不支持动画。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置图片格式，取值范围：JPEG、PNG、BMP、WebP，缺省为原图格式。不支持动画。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _format 图片格式，取值范围：JPEG、PNG、BMP、WebP，缺省为原图格式。不支持动画。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取图片的相对质量，取值范围：1 - 100，数值以原图质量为标准，缺省为原图质量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Quality 图片的相对质量，取值范围：1 - 100，数值以原图质量为标准，缺省为原图质量。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetQuality() const;

                    /**
                     * 设置图片的相对质量，取值范围：1 - 100，数值以原图质量为标准，缺省为原图质量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _quality 图片的相对质量，取值范围：1 - 100，数值以原图质量为标准，缺省为原图质量。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQuality(const int64_t& _quality);

                    /**
                     * 判断参数 Quality 是否已赋值
                     * @return Quality 是否已赋值
                     * 
                     */
                    bool QualityHasBeenSet() const;

                private:

                    /**
                     * 图片格式，取值范围：JPEG、PNG、BMP、WebP，缺省为原图格式。不支持动画。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * 图片的相对质量，取值范围：1 - 100，数值以原图质量为标准，缺省为原图质量。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_quality;
                    bool m_qualityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEENCODECONFIG_H_
