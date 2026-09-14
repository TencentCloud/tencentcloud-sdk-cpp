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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CONTENTFILTER_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CONTENTFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 内容过滤配置（图片名称正则/最小宽高），缺省时不启用过滤
                */
                class ContentFilter : public AbstractModel
                {
                public:
                    ContentFilter();
                    ~ContentFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>图片最小高度（像素），小于则过滤；&lt;=0 表示不启用</p>
                     * @return ImageMinHeight <p>图片最小高度（像素），小于则过滤；&lt;=0 表示不启用</p>
                     * 
                     */
                    int64_t GetImageMinHeight() const;

                    /**
                     * 设置<p>图片最小高度（像素），小于则过滤；&lt;=0 表示不启用</p>
                     * @param _imageMinHeight <p>图片最小高度（像素），小于则过滤；&lt;=0 表示不启用</p>
                     * 
                     */
                    void SetImageMinHeight(const int64_t& _imageMinHeight);

                    /**
                     * 判断参数 ImageMinHeight 是否已赋值
                     * @return ImageMinHeight 是否已赋值
                     * 
                     */
                    bool ImageMinHeightHasBeenSet() const;

                    /**
                     * 获取<p>图片最小宽度（像素），小于则过滤；&lt;=0 表示不启用</p>
                     * @return ImageMinWidth <p>图片最小宽度（像素），小于则过滤；&lt;=0 表示不启用</p>
                     * 
                     */
                    int64_t GetImageMinWidth() const;

                    /**
                     * 设置<p>图片最小宽度（像素），小于则过滤；&lt;=0 表示不启用</p>
                     * @param _imageMinWidth <p>图片最小宽度（像素），小于则过滤；&lt;=0 表示不启用</p>
                     * 
                     */
                    void SetImageMinWidth(const int64_t& _imageMinWidth);

                    /**
                     * 判断参数 ImageMinWidth 是否已赋值
                     * @return ImageMinWidth 是否已赋值
                     * 
                     */
                    bool ImageMinWidthHasBeenSet() const;

                    /**
                     * 获取<p>图片名称过滤规则（用分号 &#39;;&#39; 分隔的多条正则，如 &#39;icon;notice;warning;info.*&#39;）</p>
                     * @return ImageNamePatterns <p>图片名称过滤规则（用分号 &#39;;&#39; 分隔的多条正则，如 &#39;icon;notice;warning;info.*&#39;）</p>
                     * 
                     */
                    std::string GetImageNamePatterns() const;

                    /**
                     * 设置<p>图片名称过滤规则（用分号 &#39;;&#39; 分隔的多条正则，如 &#39;icon;notice;warning;info.*&#39;）</p>
                     * @param _imageNamePatterns <p>图片名称过滤规则（用分号 &#39;;&#39; 分隔的多条正则，如 &#39;icon;notice;warning;info.*&#39;）</p>
                     * 
                     */
                    void SetImageNamePatterns(const std::string& _imageNamePatterns);

                    /**
                     * 判断参数 ImageNamePatterns 是否已赋值
                     * @return ImageNamePatterns 是否已赋值
                     * 
                     */
                    bool ImageNamePatternsHasBeenSet() const;

                private:

                    /**
                     * <p>图片最小高度（像素），小于则过滤；&lt;=0 表示不启用</p>
                     */
                    int64_t m_imageMinHeight;
                    bool m_imageMinHeightHasBeenSet;

                    /**
                     * <p>图片最小宽度（像素），小于则过滤；&lt;=0 表示不启用</p>
                     */
                    int64_t m_imageMinWidth;
                    bool m_imageMinWidthHasBeenSet;

                    /**
                     * <p>图片名称过滤规则（用分号 &#39;;&#39; 分隔的多条正则，如 &#39;icon;notice;warning;info.*&#39;）</p>
                     */
                    std::string m_imageNamePatterns;
                    bool m_imageNamePatternsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CONTENTFILTER_H_
