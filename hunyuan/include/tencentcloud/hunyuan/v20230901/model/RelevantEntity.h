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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_RELEVANTENTITY_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_RELEVANTENTITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * 相关组织及人物
                */
                class RelevantEntity : public AbstractModel
                {
                public:
                    RelevantEntity();
                    ~RelevantEntity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取相关组织及人物名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 相关组织及人物名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置相关组织及人物名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 相关组织及人物名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取相关组织及人物内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content 相关组织及人物内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置相关组织及人物内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _content 相关组织及人物内容
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
                     * 获取相关事件引用文章标号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Reference 相关事件引用文章标号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetReference() const;

                    /**
                     * 设置相关事件引用文章标号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reference 相关事件引用文章标号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReference(const std::vector<int64_t>& _reference);

                    /**
                     * 判断参数 Reference 是否已赋值
                     * @return Reference 是否已赋值
                     * 
                     */
                    bool ReferenceHasBeenSet() const;

                private:

                    /**
                     * 相关组织及人物名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 相关组织及人物内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 相关事件引用文章标号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_reference;
                    bool m_referenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_RELEVANTENTITY_H_
