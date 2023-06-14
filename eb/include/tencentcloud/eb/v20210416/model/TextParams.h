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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_TEXTPARAMS_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_TEXTPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * 描述如何切分数据
                */
                class TextParams : public AbstractModel
                {
                public:
                    TextParams();
                    ~TextParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取逗号、| 、制表符、空格、换行符、%、#，限制长度为 1。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Separator 逗号、| 、制表符、空格、换行符、%、#，限制长度为 1。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSeparator() const;

                    /**
                     * 设置逗号、| 、制表符、空格、换行符、%、#，限制长度为 1。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _separator 逗号、| 、制表符、空格、换行符、%、#，限制长度为 1。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSeparator(const std::string& _separator);

                    /**
                     * 判断参数 Separator 是否已赋值
                     * @return Separator 是否已赋值
                     * 
                     */
                    bool SeparatorHasBeenSet() const;

                    /**
                     * 获取填写正则表达式：长度128
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Regex 填写正则表达式：长度128
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegex() const;

                    /**
                     * 设置填写正则表达式：长度128
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _regex 填写正则表达式：长度128
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegex(const std::string& _regex);

                    /**
                     * 判断参数 Regex 是否已赋值
                     * @return Regex 是否已赋值
                     * 
                     */
                    bool RegexHasBeenSet() const;

                private:

                    /**
                     * 逗号、| 、制表符、空格、换行符、%、#，限制长度为 1。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_separator;
                    bool m_separatorHasBeenSet;

                    /**
                     * 填写正则表达式：长度128
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_regex;
                    bool m_regexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_TEXTPARAMS_H_
