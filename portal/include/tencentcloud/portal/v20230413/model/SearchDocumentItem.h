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

#ifndef TENCENTCLOUD_PORTAL_V20230413_MODEL_SEARCHDOCUMENTITEM_H_
#define TENCENTCLOUD_PORTAL_V20230413_MODEL_SEARCHDOCUMENTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Portal
    {
        namespace V20230413
        {
            namespace Model
            {
                /**
                * 搜索文档结果
                */
                class SearchDocumentItem : public AbstractModel
                {
                public:
                    SearchDocumentItem();
                    ~SearchDocumentItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>文档URL</p>
                     * @return Url <p>文档URL</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>文档URL</p>
                     * @param _url <p>文档URL</p>
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取<p>文档标题</p>
                     * @return Title <p>文档标题</p>
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置<p>文档标题</p>
                     * @param _title <p>文档标题</p>
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取<p>产品名称</p>
                     * @return ProductName <p>产品名称</p>
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置<p>产品名称</p>
                     * @param _productName <p>产品名称</p>
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取<p>文档片段</p>
                     * @return Snippet <p>文档片段</p>
                     * 
                     */
                    std::string GetSnippet() const;

                    /**
                     * 设置<p>文档片段</p>
                     * @param _snippet <p>文档片段</p>
                     * 
                     */
                    void SetSnippet(const std::string& _snippet);

                    /**
                     * 判断参数 Snippet 是否已赋值
                     * @return Snippet 是否已赋值
                     * 
                     */
                    bool SnippetHasBeenSet() const;

                private:

                    /**
                     * <p>文档URL</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>文档标题</p>
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * <p>产品名称</p>
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * <p>文档片段</p>
                     */
                    std::string m_snippet;
                    bool m_snippetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PORTAL_V20230413_MODEL_SEARCHDOCUMENTITEM_H_
