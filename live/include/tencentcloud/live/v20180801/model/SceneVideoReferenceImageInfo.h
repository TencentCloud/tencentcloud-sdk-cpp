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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_SCENEVIDEOREFERENCEIMAGEINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_SCENEVIDEOREFERENCEIMAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 用于场景化生视频创作的参考图片信息。
                */
                class SceneVideoReferenceImageInfo : public AbstractModel
                {
                public:
                    SceneVideoReferenceImageInfo();
                    ~SceneVideoReferenceImageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>输入的参考图Url，需外网可访问。</p>
                     * @return ImageUrl <p>输入的参考图Url，需外网可访问。</p>
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置<p>输入的参考图Url，需外网可访问。</p>
                     * @param _imageUrl <p>输入的参考图Url，需外网可访问。</p>
                     * 
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

                    /**
                     * 获取<p>针对该参考图的Prompt描述，仅部分模型是支持。</p>
                     * @return Text <p>针对该参考图的Prompt描述，仅部分模型是支持。</p>
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p>针对该参考图的Prompt描述，仅部分模型是支持。</p>
                     * @param _text <p>针对该参考图的Prompt描述，仅部分模型是支持。</p>
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
                     * 获取<p>参考类型。</p>
                     * @return ReferenceType <p>参考类型。</p>
                     * 
                     */
                    std::string GetReferenceType() const;

                    /**
                     * 设置<p>参考类型。</p>
                     * @param _referenceType <p>参考类型。</p>
                     * 
                     */
                    void SetReferenceType(const std::string& _referenceType);

                    /**
                     * 判断参数 ReferenceType 是否已赋值
                     * @return ReferenceType 是否已赋值
                     * 
                     */
                    bool ReferenceTypeHasBeenSet() const;

                private:

                    /**
                     * <p>输入的参考图Url，需外网可访问。</p>
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * <p>针对该参考图的Prompt描述，仅部分模型是支持。</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p>参考类型。</p>
                     */
                    std::string m_referenceType;
                    bool m_referenceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_SCENEVIDEOREFERENCEIMAGEINFO_H_
