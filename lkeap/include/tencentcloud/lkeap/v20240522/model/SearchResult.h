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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_SEARCHRESULT_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_SEARCHRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
        {
            namespace Model
            {
                /**
                * 搜索结果
                */
                class SearchResult : public AbstractModel
                {
                public:
                    SearchResult();
                    ~SearchResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取索引
                     * @return Index 索引
                     * 
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置索引
                     * @param _index 索引
                     * 
                     */
                    void SetIndex(const int64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取链接地址
                     * @return Url 链接地址
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置链接地址
                     * @param _url 链接地址
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
                     * 获取标题
                     * @return Name 标题
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置标题
                     * @param _name 标题
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取摘要
                     * @return Snippet 摘要
                     * 
                     */
                    std::string GetSnippet() const;

                    /**
                     * 设置摘要
                     * @param _snippet 摘要
                     * 
                     */
                    void SetSnippet(const std::string& _snippet);

                    /**
                     * 判断参数 Snippet 是否已赋值
                     * @return Snippet 是否已赋值
                     * 
                     */
                    bool SnippetHasBeenSet() const;

                    /**
                     * 获取图标
                     * @return Icon 图标
                     * 
                     */
                    std::string GetIcon() const;

                    /**
                     * 设置图标
                     * @param _icon 图标
                     * 
                     */
                    void SetIcon(const std::string& _icon);

                    /**
                     * 判断参数 Icon 是否已赋值
                     * @return Icon 是否已赋值
                     * 
                     */
                    bool IconHasBeenSet() const;

                    /**
                     * 获取站点
                     * @return Site 站点
                     * 
                     */
                    std::string GetSite() const;

                    /**
                     * 设置站点
                     * @param _site 站点
                     * 
                     */
                    void SetSite(const std::string& _site);

                    /**
                     * 判断参数 Site 是否已赋值
                     * @return Site 是否已赋值
                     * 
                     */
                    bool SiteHasBeenSet() const;

                    /**
                     * 获取1740412800
                     * @return PublishedTime 1740412800
                     * 
                     */
                    int64_t GetPublishedTime() const;

                    /**
                     * 设置1740412800
                     * @param _publishedTime 1740412800
                     * 
                     */
                    void SetPublishedTime(const int64_t& _publishedTime);

                    /**
                     * 判断参数 PublishedTime 是否已赋值
                     * @return PublishedTime 是否已赋值
                     * 
                     */
                    bool PublishedTimeHasBeenSet() const;

                private:

                    /**
                     * 索引
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * 链接地址
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 标题
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 摘要
                     */
                    std::string m_snippet;
                    bool m_snippetHasBeenSet;

                    /**
                     * 图标
                     */
                    std::string m_icon;
                    bool m_iconHasBeenSet;

                    /**
                     * 站点
                     */
                    std::string m_site;
                    bool m_siteHasBeenSet;

                    /**
                     * 1740412800
                     */
                    int64_t m_publishedTime;
                    bool m_publishedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_SEARCHRESULT_H_
