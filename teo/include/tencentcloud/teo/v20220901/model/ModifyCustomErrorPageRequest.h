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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYCUSTOMERRORPAGEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYCUSTOMERRORPAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyCustomErrorPage请求参数结构体
                */
                class ModifyCustomErrorPageRequest : public AbstractModel
                {
                public:
                    ModifyCustomErrorPageRequest();
                    ~ModifyCustomErrorPageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>自定义响应页面 ID。</p>
                     * @return PageId <p>自定义响应页面 ID。</p>
                     * 
                     */
                    std::string GetPageId() const;

                    /**
                     * 设置<p>自定义响应页面 ID。</p>
                     * @param _pageId <p>自定义响应页面 ID。</p>
                     * 
                     */
                    void SetPageId(const std::string& _pageId);

                    /**
                     * 判断参数 PageId 是否已赋值
                     * @return PageId 是否已赋值
                     * 
                     */
                    bool PageIdHasBeenSet() const;

                    /**
                     * 获取<p>站点 ID。</p>
                     * @return ZoneId <p>站点 ID。</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>站点 ID。</p>
                     * @param _zoneId <p>站点 ID。</p>
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>自定义响应页面名称，名称为 2 - 60 个字符。</p>
                     * @return Name <p>自定义响应页面名称，名称为 2 - 60 个字符。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>自定义响应页面名称，名称为 2 - 60 个字符。</p>
                     * @param _name <p>自定义响应页面名称，名称为 2 - 60 个字符。</p>
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
                     * 获取<p>自定义响应页面描述，描述内容不超过 60 个字符。</p>
                     * @return Description <p>自定义响应页面描述，描述内容不超过 60 个字符。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>自定义响应页面描述，描述内容不超过 60 个字符。</p>
                     * @param _description <p>自定义响应页面描述，描述内容不超过 60 个字符。</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>自定义响应页面类型，取值有：</p><ul><li>text/html</li><li>application/json</li><li>plain/text</li><li>text/xml</li><li>text/css</li><li>text/javascript</li><li>application/javascript</li><li>text/markdown</li></ul>
                     * @return ContentType <p>自定义响应页面类型，取值有：</p><ul><li>text/html</li><li>application/json</li><li>plain/text</li><li>text/xml</li><li>text/css</li><li>text/javascript</li><li>application/javascript</li><li>text/markdown</li></ul>
                     * 
                     */
                    std::string GetContentType() const;

                    /**
                     * 设置<p>自定义响应页面类型，取值有：</p><ul><li>text/html</li><li>application/json</li><li>plain/text</li><li>text/xml</li><li>text/css</li><li>text/javascript</li><li>application/javascript</li><li>text/markdown</li></ul>
                     * @param _contentType <p>自定义响应页面类型，取值有：</p><ul><li>text/html</li><li>application/json</li><li>plain/text</li><li>text/xml</li><li>text/css</li><li>text/javascript</li><li>application/javascript</li><li>text/markdown</li></ul>
                     * 
                     */
                    void SetContentType(const std::string& _contentType);

                    /**
                     * 判断参数 ContentType 是否已赋值
                     * @return ContentType 是否已赋值
                     * 
                     */
                    bool ContentTypeHasBeenSet() const;

                    /**
                     * 获取<p>自定义响应页面内容。内容不超过 16KB。</p>
                     * @return Content <p>自定义响应页面内容。内容不超过 16KB。</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>自定义响应页面内容。内容不超过 16KB。</p>
                     * @param _content <p>自定义响应页面内容。内容不超过 16KB。</p>
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * <p>自定义响应页面 ID。</p>
                     */
                    std::string m_pageId;
                    bool m_pageIdHasBeenSet;

                    /**
                     * <p>站点 ID。</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>自定义响应页面名称，名称为 2 - 60 个字符。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>自定义响应页面描述，描述内容不超过 60 个字符。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>自定义响应页面类型，取值有：</p><ul><li>text/html</li><li>application/json</li><li>plain/text</li><li>text/xml</li><li>text/css</li><li>text/javascript</li><li>application/javascript</li><li>text/markdown</li></ul>
                     */
                    std::string m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * <p>自定义响应页面内容。内容不超过 16KB。</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYCUSTOMERRORPAGEREQUEST_H_
