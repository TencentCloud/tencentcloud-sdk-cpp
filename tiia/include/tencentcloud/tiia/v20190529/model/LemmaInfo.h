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

#ifndef TENCENTCLOUD_TIIA_V20190529_MODEL_LEMMAINFO_H_
#define TENCENTCLOUD_TIIA_V20190529_MODEL_LEMMAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiia
    {
        namespace V20190529
        {
            namespace Model
            {
                /**
                * 百科词条信息
                */
                class LemmaInfo : public AbstractModel
                {
                public:
                    LemmaInfo();
                    ~LemmaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取词条
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LemmaTitle 词条
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLemmaTitle() const;

                    /**
                     * 设置词条
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lemmaTitle 词条
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLemmaTitle(const std::string& _lemmaTitle);

                    /**
                     * 判断参数 LemmaTitle 是否已赋值
                     * @return LemmaTitle 是否已赋值
                     * 
                     */
                    bool LemmaTitleHasBeenSet() const;

                    /**
                     * 获取词条描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LemmaAbstract 词条描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLemmaAbstract() const;

                    /**
                     * 设置词条描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lemmaAbstract 词条描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLemmaAbstract(const std::string& _lemmaAbstract);

                    /**
                     * 判断参数 LemmaAbstract 是否已赋值
                     * @return LemmaAbstract 是否已赋值
                     * 
                     */
                    bool LemmaAbstractHasBeenSet() const;

                    /**
                     * 获取标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tag 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tag 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                private:

                    /**
                     * 词条
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lemmaTitle;
                    bool m_lemmaTitleHasBeenSet;

                    /**
                     * 词条描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lemmaAbstract;
                    bool m_lemmaAbstractHasBeenSet;

                    /**
                     * 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIIA_V20190529_MODEL_LEMMAINFO_H_
