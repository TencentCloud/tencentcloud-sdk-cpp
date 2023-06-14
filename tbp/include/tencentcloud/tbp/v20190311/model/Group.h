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

#ifndef TENCENTCLOUD_TBP_V20190311_MODEL_GROUP_H_
#define TENCENTCLOUD_TBP_V20190311_MODEL_GROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tbp
    {
        namespace V20190311
        {
            namespace Model
            {
                /**
                * Group是消息组的具体定义，当前包含ContentType、Url、Content三个字段。其中，具体的ContentType字段定义，参考互联网MIME类型标准。
                */
                class Group : public AbstractModel
                {
                public:
                    Group();
                    ~Group() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取消息类型参考互联网MIME类型标准，当前仅支持"text/plain"。	
                     * @return ContentType 消息类型参考互联网MIME类型标准，当前仅支持"text/plain"。	
                     * 
                     */
                    std::string GetContentType() const;

                    /**
                     * 设置消息类型参考互联网MIME类型标准，当前仅支持"text/plain"。	
                     * @param _contentType 消息类型参考互联网MIME类型标准，当前仅支持"text/plain"。	
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
                     * 获取返回内容以链接形式提供。	
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Url 返回内容以链接形式提供。	
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置返回内容以链接形式提供。	
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _url 返回内容以链接形式提供。	
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取普通文本。	
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content 普通文本。	
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置普通文本。	
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _content 普通文本。	
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 消息类型参考互联网MIME类型标准，当前仅支持"text/plain"。	
                     */
                    std::string m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * 返回内容以链接形式提供。	
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 普通文本。	
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBP_V20190311_MODEL_GROUP_H_
