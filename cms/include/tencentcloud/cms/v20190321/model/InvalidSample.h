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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_INVALIDSAMPLE_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_INVALIDSAMPLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * 无效关键词
                */
                class InvalidSample : public AbstractModel
                {
                public:
                    InvalidSample();
                    ~InvalidSample() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取关键词
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content 关键词
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置关键词
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _content 关键词
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
                     * 获取无效代码:1-标签不存在;2-词过长;3-词类型不匹配;4-备注超长
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InvalidCode 无效代码:1-标签不存在;2-词过长;3-词类型不匹配;4-备注超长
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetInvalidCode() const;

                    /**
                     * 设置无效代码:1-标签不存在;2-词过长;3-词类型不匹配;4-备注超长
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _invalidCode 无效代码:1-标签不存在;2-词过长;3-词类型不匹配;4-备注超长
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInvalidCode(const int64_t& _invalidCode);

                    /**
                     * 判断参数 InvalidCode 是否已赋值
                     * @return InvalidCode 是否已赋值
                     * 
                     */
                    bool InvalidCodeHasBeenSet() const;

                    /**
                     * 获取无效描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InvalidMessage 无效描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInvalidMessage() const;

                    /**
                     * 设置无效描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _invalidMessage 无效描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInvalidMessage(const std::string& _invalidMessage);

                    /**
                     * 判断参数 InvalidMessage 是否已赋值
                     * @return InvalidMessage 是否已赋值
                     * 
                     */
                    bool InvalidMessageHasBeenSet() const;

                private:

                    /**
                     * 关键词
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 无效代码:1-标签不存在;2-词过长;3-词类型不匹配;4-备注超长
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_invalidCode;
                    bool m_invalidCodeHasBeenSet;

                    /**
                     * 无效描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_invalidMessage;
                    bool m_invalidMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_INVALIDSAMPLE_H_
