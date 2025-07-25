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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATECUSTOMIZEERRORPAGEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATECUSTOMIZEERRORPAGEREQUEST_H_

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
                * CreateCustomizeErrorPage请求参数结构体
                */
                class CreateCustomizeErrorPageRequest : public AbstractModel
                {
                public:
                    CreateCustomizeErrorPageRequest();
                    ~CreateCustomizeErrorPageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点 ID。
                     * @return ZoneId 站点 ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点 ID。
                     * @param _zoneId 站点 ID。
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
                     * 获取自定义错误页名称，名称为 2-30 个字符。
                     * @return Name 自定义错误页名称，名称为 2-30 个字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置自定义错误页名称，名称为 2-30 个字符。
                     * @param _name 自定义错误页名称，名称为 2-30 个字符。
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
                     * 获取自定义错误页面类型，取值有：<li>text/html； </li><li>application/json；</li><li>text/plain；</li><li>text/xml。</li>
                     * @return ContentType 自定义错误页面类型，取值有：<li>text/html； </li><li>application/json；</li><li>text/plain；</li><li>text/xml。</li>
                     * 
                     */
                    std::string GetContentType() const;

                    /**
                     * 设置自定义错误页面类型，取值有：<li>text/html； </li><li>application/json；</li><li>text/plain；</li><li>text/xml。</li>
                     * @param _contentType 自定义错误页面类型，取值有：<li>text/html； </li><li>application/json；</li><li>text/plain；</li><li>text/xml。</li>
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
                     * 获取自定义错误页面描述，描述不超过 60 个字符。
                     * @return Description 自定义错误页面描述，描述不超过 60 个字符。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置自定义错误页面描述，描述不超过 60 个字符。
                     * @param _description 自定义错误页面描述，描述不超过 60 个字符。
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
                     * 获取自定义错误页面内容，内容不超过 2KB。
                     * @return Content 自定义错误页面内容，内容不超过 2KB。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置自定义错误页面内容，内容不超过 2KB。
                     * @param _content 自定义错误页面内容，内容不超过 2KB。
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
                     * 站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 自定义错误页名称，名称为 2-30 个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 自定义错误页面类型，取值有：<li>text/html； </li><li>application/json；</li><li>text/plain；</li><li>text/xml。</li>
                     */
                    std::string m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * 自定义错误页面描述，描述不超过 60 个字符。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 自定义错误页面内容，内容不超过 2KB。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATECUSTOMIZEERRORPAGEREQUEST_H_
