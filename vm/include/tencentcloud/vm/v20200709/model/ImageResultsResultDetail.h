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

#ifndef TENCENTCLOUD_VM_V20200709_MODEL_IMAGERESULTSRESULTDETAIL_H_
#define TENCENTCLOUD_VM_V20200709_MODEL_IMAGERESULTSRESULTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vm/v20200709/model/ImageResultsResultDetailLocation.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20200709
        {
            namespace Model
            {
                /**
                * 具体场景下的图片识别结果
                */
                class ImageResultsResultDetail : public AbstractModel
                {
                public:
                    ImageResultsResultDetail();
                    ~ImageResultsResultDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 任务名称
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
                     * 获取OCR识别文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Text OCR识别文本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置OCR识别文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _text OCR识别文本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取位置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Location 位置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImageResultsResultDetailLocation GetLocation() const;

                    /**
                     * 设置位置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _location 位置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLocation(const ImageResultsResultDetailLocation& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Label 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _label 标签
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取库ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LibId 库ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLibId() const;

                    /**
                     * 设置库ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _libId 库ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLibId(const std::string& _libId);

                    /**
                     * 判断参数 LibId 是否已赋值
                     * @return LibId 是否已赋值
                     * 
                     */
                    bool LibIdHasBeenSet() const;

                    /**
                     * 获取库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LibName 库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLibName() const;

                    /**
                     * 设置库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _libName 库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLibName(const std::string& _libName);

                    /**
                     * 判断参数 LibName 是否已赋值
                     * @return LibName 是否已赋值
                     * 
                     */
                    bool LibNameHasBeenSet() const;

                    /**
                     * 获取命中的关键词
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Keywords 命中的关键词
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetKeywords() const;

                    /**
                     * 设置命中的关键词
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keywords 命中的关键词
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKeywords(const std::vector<std::string>& _keywords);

                    /**
                     * 判断参数 Keywords 是否已赋值
                     * @return Keywords 是否已赋值
                     * 
                     */
                    bool KeywordsHasBeenSet() const;

                    /**
                     * 获取建议
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Suggestion 建议
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置建议
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _suggestion 建议
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取得分
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Score 得分
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置得分
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _score 得分
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScore(const int64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取子标签码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubLabelCode 子标签码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubLabelCode() const;

                    /**
                     * 设置子标签码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subLabelCode 子标签码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubLabelCode(const std::string& _subLabelCode);

                    /**
                     * 判断参数 SubLabelCode 是否已赋值
                     * @return SubLabelCode 是否已赋值
                     * 
                     */
                    bool SubLabelCodeHasBeenSet() const;

                private:

                    /**
                     * 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * OCR识别文本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 位置信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageResultsResultDetailLocation m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 库ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_libId;
                    bool m_libIdHasBeenSet;

                    /**
                     * 库名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_libName;
                    bool m_libNameHasBeenSet;

                    /**
                     * 命中的关键词
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * 建议
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 得分
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 子标签码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subLabelCode;
                    bool m_subLabelCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20200709_MODEL_IMAGERESULTSRESULTDETAIL_H_
