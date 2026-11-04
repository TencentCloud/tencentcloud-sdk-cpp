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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_GENERATEVLEMBEDDINGREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_GENERATEVLEMBEDDINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * GenerateVLEmbedding请求参数结构体
                */
                class GenerateVLEmbeddingRequest : public AbstractModel
                {
                public:
                    GenerateVLEmbeddingRequest();
                    ~GenerateVLEmbeddingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>选择生成向量的模型。取值：</p><ul><li>0：vl-embedding-4b</li><li>1：vl-embedding-8b</li><li>2：vl-embedding-2b</li></ul>
                     * @return Model <p>选择生成向量的模型。取值：</p><ul><li>0：vl-embedding-4b</li><li>1：vl-embedding-8b</li><li>2：vl-embedding-2b</li></ul>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>选择生成向量的模型。取值：</p><ul><li>0：vl-embedding-4b</li><li>1：vl-embedding-8b</li><li>2：vl-embedding-2b</li></ul>
                     * @param _model <p>选择生成向量的模型。取值：</p><ul><li>0：vl-embedding-4b</li><li>1：vl-embedding-8b</li><li>2：vl-embedding-2b</li></ul>
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取<p>内容类型标识。取值：</p><ul><li>1：文本</li><li>2：图像 URL</li><li>3：视频 URL</li><li>4：图文混合</li></ul>
                     * @return Type <p>内容类型标识。取值：</p><ul><li>1：文本</li><li>2：图像 URL</li><li>3：视频 URL</li><li>4：图文混合</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>内容类型标识。取值：</p><ul><li>1：文本</li><li>2：图像 URL</li><li>3：视频 URL</li><li>4：图文混合</li></ul>
                     * @param _type <p>内容类型标识。取值：</p><ul><li>1：文本</li><li>2：图像 URL</li><li>3：视频 URL</li><li>4：图文混合</li></ul>
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
                     * 获取<p>文本内容。仅当 Type 为 1 或 4 时必填，单条文本不超过 2000 字符。</p>
                     * @return Text <p>文本内容。仅当 Type 为 1 或 4 时必填，单条文本不超过 2000 字符。</p>
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p>文本内容。仅当 Type 为 1 或 4 时必填，单条文本不超过 2000 字符。</p>
                     * @param _text <p>文本内容。仅当 Type 为 1 或 4 时必填，单条文本不超过 2000 字符。</p>
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
                     * 获取<p>图像地址，支持公网 http/https 链接或 base64 内容。仅当 Type 为 2 或 4 时必填。</p>
                     * @return ImageUrl <p>图像地址，支持公网 http/https 链接或 base64 内容。仅当 Type 为 2 或 4 时必填。</p>
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置<p>图像地址，支持公网 http/https 链接或 base64 内容。仅当 Type 为 2 或 4 时必填。</p>
                     * @param _imageUrl <p>图像地址，支持公网 http/https 链接或 base64 内容。仅当 Type 为 2 或 4 时必填。</p>
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
                     * 获取<p>视频地址，支持公网 http/https 链接或 base64 内容。仅当 Type 为 3 时必填。</p>
                     * @return VideoUrl <p>视频地址，支持公网 http/https 链接或 base64 内容。仅当 Type 为 3 时必填。</p>
                     * 
                     */
                    std::string GetVideoUrl() const;

                    /**
                     * 设置<p>视频地址，支持公网 http/https 链接或 base64 内容。仅当 Type 为 3 时必填。</p>
                     * @param _videoUrl <p>视频地址，支持公网 http/https 链接或 base64 内容。仅当 Type 为 3 时必填。</p>
                     * 
                     */
                    void SetVideoUrl(const std::string& _videoUrl);

                    /**
                     * 判断参数 VideoUrl 是否已赋值
                     * @return VideoUrl 是否已赋值
                     * 
                     */
                    bool VideoUrlHasBeenSet() const;

                    /**
                     * 获取<p>检索场景，未传入该参数时将自动匹配。取值：</p><ul><li>0：自动匹配</li><li>1：图搜图（找同款、相似图），仅 Type 为 2 或 4 时可用</li><li>2：图文搜图（图 + 问题），仅 Type 为 4 时可用</li><li>3：文搜图（纯文本搜图），仅 Type 为 1 或 4 时可用</li><li>4：文搜视频（纯文本搜视频），仅 Type 为 1 或 4 时可用</li><li>5：图搜视频、图文搜视频，仅 Type 为 2 或 4 时可用</li></ul>
                     * @return SearchMode <p>检索场景，未传入该参数时将自动匹配。取值：</p><ul><li>0：自动匹配</li><li>1：图搜图（找同款、相似图），仅 Type 为 2 或 4 时可用</li><li>2：图文搜图（图 + 问题），仅 Type 为 4 时可用</li><li>3：文搜图（纯文本搜图），仅 Type 为 1 或 4 时可用</li><li>4：文搜视频（纯文本搜视频），仅 Type 为 1 或 4 时可用</li><li>5：图搜视频、图文搜视频，仅 Type 为 2 或 4 时可用</li></ul>
                     * 
                     */
                    std::string GetSearchMode() const;

                    /**
                     * 设置<p>检索场景，未传入该参数时将自动匹配。取值：</p><ul><li>0：自动匹配</li><li>1：图搜图（找同款、相似图），仅 Type 为 2 或 4 时可用</li><li>2：图文搜图（图 + 问题），仅 Type 为 4 时可用</li><li>3：文搜图（纯文本搜图），仅 Type 为 1 或 4 时可用</li><li>4：文搜视频（纯文本搜视频），仅 Type 为 1 或 4 时可用</li><li>5：图搜视频、图文搜视频，仅 Type 为 2 或 4 时可用</li></ul>
                     * @param _searchMode <p>检索场景，未传入该参数时将自动匹配。取值：</p><ul><li>0：自动匹配</li><li>1：图搜图（找同款、相似图），仅 Type 为 2 或 4 时可用</li><li>2：图文搜图（图 + 问题），仅 Type 为 4 时可用</li><li>3：文搜图（纯文本搜图），仅 Type 为 1 或 4 时可用</li><li>4：文搜视频（纯文本搜视频），仅 Type 为 1 或 4 时可用</li><li>5：图搜视频、图文搜视频，仅 Type 为 2 或 4 时可用</li></ul>
                     * 
                     */
                    void SetSearchMode(const std::string& _searchMode);

                    /**
                     * 判断参数 SearchMode 是否已赋值
                     * @return SearchMode 是否已赋值
                     * 
                     */
                    bool SearchModeHasBeenSet() const;

                private:

                    /**
                     * <p>选择生成向量的模型。取值：</p><ul><li>0：vl-embedding-4b</li><li>1：vl-embedding-8b</li><li>2：vl-embedding-2b</li></ul>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>内容类型标识。取值：</p><ul><li>1：文本</li><li>2：图像 URL</li><li>3：视频 URL</li><li>4：图文混合</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>文本内容。仅当 Type 为 1 或 4 时必填，单条文本不超过 2000 字符。</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p>图像地址，支持公网 http/https 链接或 base64 内容。仅当 Type 为 2 或 4 时必填。</p>
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * <p>视频地址，支持公网 http/https 链接或 base64 内容。仅当 Type 为 3 时必填。</p>
                     */
                    std::string m_videoUrl;
                    bool m_videoUrlHasBeenSet;

                    /**
                     * <p>检索场景，未传入该参数时将自动匹配。取值：</p><ul><li>0：自动匹配</li><li>1：图搜图（找同款、相似图），仅 Type 为 2 或 4 时可用</li><li>2：图文搜图（图 + 问题），仅 Type 为 4 时可用</li><li>3：文搜图（纯文本搜图），仅 Type 为 1 或 4 时可用</li><li>4：文搜视频（纯文本搜视频），仅 Type 为 1 或 4 时可用</li><li>5：图搜视频、图文搜视频，仅 Type 为 2 或 4 时可用</li></ul>
                     */
                    std::string m_searchMode;
                    bool m_searchModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_GENERATEVLEMBEDDINGREQUEST_H_
