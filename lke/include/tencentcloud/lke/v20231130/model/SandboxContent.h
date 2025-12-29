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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_SANDBOXCONTENT_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_SANDBOXCONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 沙盒信息内容
                */
                class SandboxContent : public AbstractModel
                {
                public:
                    SandboxContent();
                    ~SandboxContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取沙盒的URL地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Url 沙盒的URL地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置沙盒的URL地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _url 沙盒的URL地址
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
                     * 获取沙盒通过浏览器打开的URL地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DisplayUrl 沙盒通过浏览器打开的URL地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDisplayUrl() const;

                    /**
                     * 设置沙盒通过浏览器打开的URL地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _displayUrl 沙盒通过浏览器打开的URL地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDisplayUrl(const std::string& _displayUrl);

                    /**
                     * 判断参数 DisplayUrl 是否已赋值
                     * @return DisplayUrl 是否已赋值
                     * 
                     */
                    bool DisplayUrlHasBeenSet() const;

                    /**
                     * 获取沙盒输出内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content 沙盒输出内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置沙盒输出内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _content 沙盒输出内容
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
                     * 沙盒的URL地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 沙盒通过浏览器打开的URL地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_displayUrl;
                    bool m_displayUrlHasBeenSet;

                    /**
                     * 沙盒输出内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_SANDBOXCONTENT_H_
