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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DOCTOVIDEOWATERMARKINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DOCTOVIDEOWATERMARKINFO_H_

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
                * AIGC 文档生成视频水印图片信息
                */
                class DocToVideoWatermarkInfo : public AbstractModel
                {
                public:
                    DocToVideoWatermarkInfo();
                    ~DocToVideoWatermarkInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>用于生成视频的水印图片 URL。</p>
                     * @return ImageUrl <p>用于生成视频的水印图片 URL。</p>
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置<p>用于生成视频的水印图片 URL。</p>
                     * @param _imageUrl <p>用于生成视频的水印图片 URL。</p>
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
                     * 获取<p>水印图片位置。</p><p>枚举值：</p><ul><li>top-left： 左上角</li><li>top-right： 右上角</li><li>bottom-left： 左下角</li><li>bottom-right： 右下角</li></ul>
                     * @return Position <p>水印图片位置。</p><p>枚举值：</p><ul><li>top-left： 左上角</li><li>top-right： 右上角</li><li>bottom-left： 左下角</li><li>bottom-right： 右下角</li></ul>
                     * 
                     */
                    std::string GetPosition() const;

                    /**
                     * 设置<p>水印图片位置。</p><p>枚举值：</p><ul><li>top-left： 左上角</li><li>top-right： 右上角</li><li>bottom-left： 左下角</li><li>bottom-right： 右下角</li></ul>
                     * @param _position <p>水印图片位置。</p><p>枚举值：</p><ul><li>top-left： 左上角</li><li>top-right： 右上角</li><li>bottom-left： 左下角</li><li>bottom-right： 右下角</li></ul>
                     * 
                     */
                    void SetPosition(const std::string& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                private:

                    /**
                     * <p>用于生成视频的水印图片 URL。</p>
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * <p>水印图片位置。</p><p>枚举值：</p><ul><li>top-left： 左上角</li><li>top-right： 右上角</li><li>bottom-left： 左下角</li><li>bottom-right： 右下角</li></ul>
                     */
                    std::string m_position;
                    bool m_positionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DOCTOVIDEOWATERMARKINFO_H_
