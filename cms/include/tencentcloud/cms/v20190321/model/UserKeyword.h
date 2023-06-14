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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_USERKEYWORD_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_USERKEYWORD_H_

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
                * 添加关键词。
                */
                class UserKeyword : public AbstractModel
                {
                public:
                    UserKeyword();
                    ~UserKeyword() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取关键词内容：最多40个字符，并且符合词类型的规则
                     * @return Content 关键词内容：最多40个字符，并且符合词类型的规则
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置关键词内容：最多40个字符，并且符合词类型的规则
                     * @param _content 关键词内容：最多40个字符，并且符合词类型的规则
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
                     * 获取关键词类型，取值范围为："Normal","Polity","Porn","Ad","Illegal","Abuse","Terror","Spam"
                     * @return Label 关键词类型，取值范围为："Normal","Polity","Porn","Ad","Illegal","Abuse","Terror","Spam"
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置关键词类型，取值范围为："Normal","Polity","Porn","Ad","Illegal","Abuse","Terror","Spam"
                     * @param _label 关键词类型，取值范围为："Normal","Polity","Porn","Ad","Illegal","Abuse","Terror","Spam"
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取关键词备注：最多100个字符。
                     * @return Remark 关键词备注：最多100个字符。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置关键词备注：最多100个字符。
                     * @param _remark 关键词备注：最多100个字符。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取词类型：Default,Pinyin,English,CompoundWord,ExclusionWord,AffixWord
                     * @return WordType 词类型：Default,Pinyin,English,CompoundWord,ExclusionWord,AffixWord
                     * 
                     */
                    std::string GetWordType() const;

                    /**
                     * 设置词类型：Default,Pinyin,English,CompoundWord,ExclusionWord,AffixWord
                     * @param _wordType 词类型：Default,Pinyin,English,CompoundWord,ExclusionWord,AffixWord
                     * 
                     */
                    void SetWordType(const std::string& _wordType);

                    /**
                     * 判断参数 WordType 是否已赋值
                     * @return WordType 是否已赋值
                     * 
                     */
                    bool WordTypeHasBeenSet() const;

                private:

                    /**
                     * 关键词内容：最多40个字符，并且符合词类型的规则
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 关键词类型，取值范围为："Normal","Polity","Porn","Ad","Illegal","Abuse","Terror","Spam"
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 关键词备注：最多100个字符。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 词类型：Default,Pinyin,English,CompoundWord,ExclusionWord,AffixWord
                     */
                    std::string m_wordType;
                    bool m_wordTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_USERKEYWORD_H_
