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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_CONTENT_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_CONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hunyuan/v20230901/model/ImageUrl.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * 可以传入多种类型的内容，如图片、文本。
                */
                class Content : public AbstractModel
                {
                public:
                    Content();
                    ~Content() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取内容类型
注意：
需包含至少一个 Type 为"text"的参数。
参数值可选范围：[text", "image_url"]
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 内容类型
注意：
需包含至少一个 Type 为"text"的参数。
参数值可选范围：[text", "image_url"]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置内容类型
注意：
需包含至少一个 Type 为"text"的参数。
参数值可选范围：[text", "image_url"]
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 内容类型
注意：
需包含至少一个 Type 为"text"的参数。
参数值可选范围：[text", "image_url"]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取当 Type 为 text 时使用，表示具体的文本内容。当 Type 为 image_url 时，当前字段内容需保持为空，传递内容不生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Text 当 Type 为 text 时使用，表示具体的文本内容。当 Type 为 image_url 时，当前字段内容需保持为空，传递内容不生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置当 Type 为 text 时使用，表示具体的文本内容。当 Type 为 image_url 时，当前字段内容需保持为空，传递内容不生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _text 当 Type 为 text 时使用，表示具体的文本内容。当 Type 为 image_url 时，当前字段内容需保持为空，传递内容不生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取图片的url，当 Type 为 image_url 时使用，表示具体的图片内容
如"https://example.com/1.png" 或 图片的base64（注意 "data:image/jpeg;base64," 为必要部分）："data:image/jpeg;base64,/9j/4AAQSkZJRgABAQAA......"。当 Type 为 text 时，当前字段内容需保持为空，传递内容不生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageUrl 图片的url，当 Type 为 image_url 时使用，表示具体的图片内容
如"https://example.com/1.png" 或 图片的base64（注意 "data:image/jpeg;base64," 为必要部分）："data:image/jpeg;base64,/9j/4AAQSkZJRgABAQAA......"。当 Type 为 text 时，当前字段内容需保持为空，传递内容不生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImageUrl GetImageUrl() const;

                    /**
                     * 设置图片的url，当 Type 为 image_url 时使用，表示具体的图片内容
如"https://example.com/1.png" 或 图片的base64（注意 "data:image/jpeg;base64," 为必要部分）："data:image/jpeg;base64,/9j/4AAQSkZJRgABAQAA......"。当 Type 为 text 时，当前字段内容需保持为空，传递内容不生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageUrl 图片的url，当 Type 为 image_url 时使用，表示具体的图片内容
如"https://example.com/1.png" 或 图片的base64（注意 "data:image/jpeg;base64," 为必要部分）："data:image/jpeg;base64,/9j/4AAQSkZJRgABAQAA......"。当 Type 为 text 时，当前字段内容需保持为空，传递内容不生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImageUrl(const ImageUrl& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

                private:

                    /**
                     * 内容类型
注意：
需包含至少一个 Type 为"text"的参数。
参数值可选范围：[text", "image_url"]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 当 Type 为 text 时使用，表示具体的文本内容。当 Type 为 image_url 时，当前字段内容需保持为空，传递内容不生效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 图片的url，当 Type 为 image_url 时使用，表示具体的图片内容
如"https://example.com/1.png" 或 图片的base64（注意 "data:image/jpeg;base64," 为必要部分）："data:image/jpeg;base64,/9j/4AAQSkZJRgABAQAA......"。当 Type 为 text 时，当前字段内容需保持为空，传递内容不生效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageUrl m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_CONTENT_H_
