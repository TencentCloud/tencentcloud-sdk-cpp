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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMERRORPAGE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMERRORPAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/ErrorPageReference.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 自定义错误码页面结构体。
                */
                class CustomErrorPage : public AbstractModel
                {
                public:
                    CustomErrorPage();
                    ~CustomErrorPage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自定义错误页面 ID。
                     * @return PageId 自定义错误页面 ID。
                     * 
                     */
                    std::string GetPageId() const;

                    /**
                     * 设置自定义错误页面 ID。
                     * @param _pageId 自定义错误页面 ID。
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
                     * 获取自定义错误页面名称。
                     * @return Name 自定义错误页面名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置自定义错误页面名称。
                     * @param _name 自定义错误页面名称。
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
                     * 获取自定义错误页面类型。
                     * @return ContentType 自定义错误页面类型。
                     * 
                     */
                    std::string GetContentType() const;

                    /**
                     * 设置自定义错误页面类型。
                     * @param _contentType 自定义错误页面类型。
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
                     * 获取自定义错误页面描述。
                     * @return Description 自定义错误页面描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置自定义错误页面描述。
                     * @param _description 自定义错误页面描述。
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
                     * 获取自定义错误页面内容。
                     * @return Content 自定义错误页面内容。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置自定义错误页面内容。
                     * @param _content 自定义错误页面内容。
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取自定义错误页面引用。
                     * @return References 自定义错误页面引用。
                     * 
                     */
                    std::vector<ErrorPageReference> GetReferences() const;

                    /**
                     * 设置自定义错误页面引用。
                     * @param _references 自定义错误页面引用。
                     * 
                     */
                    void SetReferences(const std::vector<ErrorPageReference>& _references);

                    /**
                     * 判断参数 References 是否已赋值
                     * @return References 是否已赋值
                     * 
                     */
                    bool ReferencesHasBeenSet() const;

                private:

                    /**
                     * 自定义错误页面 ID。
                     */
                    std::string m_pageId;
                    bool m_pageIdHasBeenSet;

                    /**
                     * 站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 自定义错误页面名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 自定义错误页面类型。
                     */
                    std::string m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * 自定义错误页面描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 自定义错误页面内容。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 自定义错误页面引用。
                     */
                    std::vector<ErrorPageReference> m_references;
                    bool m_referencesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMERRORPAGE_H_
