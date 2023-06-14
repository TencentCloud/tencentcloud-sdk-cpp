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

#ifndef TENCENTCLOUD_SOLAR_V20181011_MODEL_RESOURCETEMPLATEHEADER_H_
#define TENCENTCLOUD_SOLAR_V20181011_MODEL_RESOURCETEMPLATEHEADER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Solar
    {
        namespace V20181011
        {
            namespace Model
            {
                /**
                * 素材模板消息标题的样例列表
                */
                class ResourceTemplateHeader : public AbstractModel
                {
                public:
                    ResourceTemplateHeader();
                    ~ResourceTemplateHeader() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模板预览区内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content 模板预览区内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置模板预览区内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _content 模板预览区内容
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

                    /**
                     * 获取模板预览示例
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Example 模板预览示例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExample() const;

                    /**
                     * 设置模板预览示例
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _example 模板预览示例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExample(const std::string& _example);

                    /**
                     * 判断参数 Example 是否已赋值
                     * @return Example 是否已赋值
                     * 
                     */
                    bool ExampleHasBeenSet() const;

                    /**
                     * 获取模板预览区域键数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KeyArray 模板预览区域键数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKeyArray() const;

                    /**
                     * 设置模板预览区域键数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keyArray 模板预览区域键数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKeyArray(const std::string& _keyArray);

                    /**
                     * 判断参数 KeyArray 是否已赋值
                     * @return KeyArray 是否已赋值
                     * 
                     */
                    bool KeyArrayHasBeenSet() const;

                    /**
                     * 获取模板id
                     * @return TemplateId 模板id
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置模板id
                     * @param _templateId 模板id
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取模板标题
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Title 模板标题
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置模板标题
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _title 模板标题
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                private:

                    /**
                     * 模板预览区内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 模板预览示例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_example;
                    bool m_exampleHasBeenSet;

                    /**
                     * 模板预览区域键数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_keyArray;
                    bool m_keyArrayHasBeenSet;

                    /**
                     * 模板id
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 模板标题
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SOLAR_V20181011_MODEL_RESOURCETEMPLATEHEADER_H_
