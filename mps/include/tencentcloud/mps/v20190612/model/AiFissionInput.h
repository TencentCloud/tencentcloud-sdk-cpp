/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIFISSIONINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIFISSIONINPUT_H_

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
                * 视频裂变输入
                */
                class AiFissionInput : public AbstractModel
                {
                public:
                    AiFissionInput();
                    ~AiFissionInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>视频裂变参考图url</p>
                     * @return ImageUrls <p>视频裂变参考图url</p>
                     * 
                     */
                    std::vector<std::string> GetImageUrls() const;

                    /**
                     * 设置<p>视频裂变参考图url</p>
                     * @param _imageUrls <p>视频裂变参考图url</p>
                     * 
                     */
                    void SetImageUrls(const std::vector<std::string>& _imageUrls);

                    /**
                     * 判断参数 ImageUrls 是否已赋值
                     * @return ImageUrls 是否已赋值
                     * 
                     */
                    bool ImageUrlsHasBeenSet() const;

                    /**
                     * 获取<p>视频裂变商品信息参考文案</p>
                     * @return Text <p>视频裂变商品信息参考文案</p>
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p>视频裂变商品信息参考文案</p>
                     * @param _text <p>视频裂变商品信息参考文案</p>
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                private:

                    /**
                     * <p>视频裂变参考图url</p>
                     */
                    std::vector<std::string> m_imageUrls;
                    bool m_imageUrlsHasBeenSet;

                    /**
                     * <p>视频裂变商品信息参考文案</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIFISSIONINPUT_H_
