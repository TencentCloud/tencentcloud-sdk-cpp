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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_USERKEYWORDINFO_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_USERKEYWORDINFO_H_

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
                * 关键词信息
                */
                class UserKeywordInfo : public AbstractModel
                {
                public:
                    UserKeywordInfo();
                    ~UserKeywordInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取关键词条ID
                     * @return ID 关键词条ID
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置关键词条ID
                     * @param _iD 关键词条ID
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取关键词内容
                     * @return Content 关键词内容
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置关键词内容
                     * @param _content 关键词内容
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
                     * 获取关键词标签；取值范围为："Normal","Polity","Porn","Sexy","Ad","Illegal","Abuse","Terror","Spam","Moan"
                     * @return Label 关键词标签；取值范围为："Normal","Polity","Porn","Sexy","Ad","Illegal","Abuse","Terror","Spam","Moan"
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置关键词标签；取值范围为："Normal","Polity","Porn","Sexy","Ad","Illegal","Abuse","Terror","Spam","Moan"
                     * @param _label 关键词标签；取值范围为："Normal","Polity","Porn","Sexy","Ad","Illegal","Abuse","Terror","Spam","Moan"
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
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 备注
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WordType 词类型：Default,Pinyin,English,CompoundWord,ExclusionWord,AffixWord
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWordType() const;

                    /**
                     * 设置词类型：Default,Pinyin,English,CompoundWord,ExclusionWord,AffixWord
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _wordType 词类型：Default,Pinyin,English,CompoundWord,ExclusionWord,AffixWord
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 关键词条ID
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 关键词内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 关键词标签；取值范围为："Normal","Polity","Porn","Sexy","Ad","Illegal","Abuse","Terror","Spam","Moan"
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 词类型：Default,Pinyin,English,CompoundWord,ExclusionWord,AffixWord
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_wordType;
                    bool m_wordTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_USERKEYWORDINFO_H_
