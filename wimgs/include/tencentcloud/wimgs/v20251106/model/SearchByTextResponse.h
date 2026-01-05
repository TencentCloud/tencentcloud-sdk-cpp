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

#ifndef TENCENTCLOUD_WIMGS_V20251106_MODEL_SEARCHBYTEXTRESPONSE_H_
#define TENCENTCLOUD_WIMGS_V20251106_MODEL_SEARCHBYTEXTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wimgs
    {
        namespace V20251106
        {
            namespace Model
            {
                /**
                * SearchByText返回参数结构体
                */
                class SearchByTextResponse : public AbstractModel
                {
                public:
                    SearchByTextResponse();
                    ~SearchByTextResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取原始查询词
                     * @return Query 原始查询词
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取搜索结果图片列表，格式为json字符串。

- thumbnailUrl：缩略图地址。
- thumbnailWidth：缩略图宽度。
- thumbnailHeight：缩略图高度。
- origPicUrl：原图地址。
-  origPicWidth：原图宽度。
- siteUrl：站点地址，原图来源网页URL。
- siteName：站点名称。
- title：标题，原图标题或原图来源网页标题。
- date：内容发布时间。
                     * @return Images 搜索结果图片列表，格式为json字符串。

- thumbnailUrl：缩略图地址。
- thumbnailWidth：缩略图宽度。
- thumbnailHeight：缩略图高度。
- origPicUrl：原图地址。
-  origPicWidth：原图宽度。
- siteUrl：站点地址，原图来源网页URL。
- siteName：站点名称。
- title：标题，原图标题或原图来源网页标题。
- date：内容发布时间。
                     * 
                     */
                    std::vector<std::string> GetImages() const;

                    /**
                     * 判断参数 Images 是否已赋值
                     * @return Images 是否已赋值
                     * 
                     */
                    bool ImagesHasBeenSet() const;

                private:

                    /**
                     * 原始查询词
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 搜索结果图片列表，格式为json字符串。

- thumbnailUrl：缩略图地址。
- thumbnailWidth：缩略图宽度。
- thumbnailHeight：缩略图高度。
- origPicUrl：原图地址。
-  origPicWidth：原图宽度。
- siteUrl：站点地址，原图来源网页URL。
- siteName：站点名称。
- title：标题，原图标题或原图来源网页标题。
- date：内容发布时间。
                     */
                    std::vector<std::string> m_images;
                    bool m_imagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WIMGS_V20251106_MODEL_SEARCHBYTEXTRESPONSE_H_
