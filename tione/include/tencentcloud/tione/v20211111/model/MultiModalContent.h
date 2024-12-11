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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_MULTIMODALCONTENT_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_MULTIMODALCONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/ImageUrl.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 多模态对话内容,支持图片与文字信息
                */
                class MultiModalContent : public AbstractModel
                {
                public:
                    MultiModalContent();
                    ~MultiModalContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取对话类型，text表示文本对话内容，image_url表示图片对话内容
                     * @return Type 对话类型，text表示文本对话内容，image_url表示图片对话内容
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置对话类型，text表示文本对话内容，image_url表示图片对话内容
                     * @param _type 对话类型，text表示文本对话内容，image_url表示图片对话内容
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
                     * 获取文本对话内容，当Type为text时需要填写该值
                     * @return Text 文本对话内容，当Type为text时需要填写该值
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置文本对话内容，当Type为text时需要填写该值
                     * @param _text 文本对话内容，当Type为text时需要填写该值
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
                     * 获取图片对话内容，当Type为image_url时需要填写该值
                     * @return ImageUrl 图片对话内容，当Type为image_url时需要填写该值
                     * 
                     */
                    ImageUrl GetImageUrl() const;

                    /**
                     * 设置图片对话内容，当Type为image_url时需要填写该值
                     * @param _imageUrl 图片对话内容，当Type为image_url时需要填写该值
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
                     * 对话类型，text表示文本对话内容，image_url表示图片对话内容
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 文本对话内容，当Type为text时需要填写该值
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 图片对话内容，当Type为image_url时需要填写该值
                     */
                    ImageUrl m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_MULTIMODALCONTENT_H_
