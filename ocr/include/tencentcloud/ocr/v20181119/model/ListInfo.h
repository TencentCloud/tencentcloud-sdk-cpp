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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_LISTINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_LISTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/FieldsInfo.h>
#include <tencentcloud/ocr/v20181119/model/TextDetection.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 用于展示结构化提取出的结果与输入给模型的提示词和模型的输出
                */
                class ListInfo : public AbstractModel
                {
                public:
                    ListInfo();
                    ~ListInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>推理任务的完整提示词。注：仅当QueryType=1/2/3时有效，否则返回为null。</p>
                     * @return QueryInfo <p>推理任务的完整提示词。注：仅当QueryType=1/2/3时有效，否则返回为null。</p>
                     * 
                     */
                    std::string GetQueryInfo() const;

                    /**
                     * 设置<p>推理任务的完整提示词。注：仅当QueryType=1/2/3时有效，否则返回为null。</p>
                     * @param _queryInfo <p>推理任务的完整提示词。注：仅当QueryType=1/2/3时有效，否则返回为null。</p>
                     * 
                     */
                    void SetQueryInfo(const std::string& _queryInfo);

                    /**
                     * 判断参数 QueryInfo 是否已赋值
                     * @return QueryInfo 是否已赋值
                     * 
                     */
                    bool QueryInfoHasBeenSet() const;

                    /**
                     * 获取<p>根据QueryType对应任务的返回内容。注：仅当QueryType=1/2/3时有效，其他情况为null。</p>
                     * @return Answer <p>根据QueryType对应任务的返回内容。注：仅当QueryType=1/2/3时有效，其他情况为null。</p>
                     * 
                     */
                    std::string GetAnswer() const;

                    /**
                     * 设置<p>根据QueryType对应任务的返回内容。注：仅当QueryType=1/2/3时有效，其他情况为null。</p>
                     * @param _answer <p>根据QueryType对应任务的返回内容。注：仅当QueryType=1/2/3时有效，其他情况为null。</p>
                     * 
                     */
                    void SetAnswer(const std::string& _answer);

                    /**
                     * 判断参数 Answer 是否已赋值
                     * @return Answer 是否已赋值
                     * 
                     */
                    bool AnswerHasBeenSet() const;

                    /**
                     * 获取<p>结构化提取结果。注：仅当QueryType=4时有效，否则返回null。</p>
                     * @return ExtractFields <p>结构化提取结果。注：仅当QueryType=4时有效，否则返回null。</p>
                     * 
                     */
                    std::vector<FieldsInfo> GetExtractFields() const;

                    /**
                     * 设置<p>结构化提取结果。注：仅当QueryType=4时有效，否则返回null。</p>
                     * @param _extractFields <p>结构化提取结果。注：仅当QueryType=4时有效，否则返回null。</p>
                     * 
                     */
                    void SetExtractFields(const std::vector<FieldsInfo>& _extractFields);

                    /**
                     * 判断参数 ExtractFields 是否已赋值
                     * @return ExtractFields 是否已赋值
                     * 
                     */
                    bool ExtractFieldsHasBeenSet() const;

                    /**
                     * 获取<p>检测到的文本信息，包括内容、坐标以及旋转纠正后的坐标等，具体内容请参见 TextDetection。注：仅当QueryType=0时TextDetections不为空，否则返回null。</p>
                     * @return TextDetections <p>检测到的文本信息，包括内容、坐标以及旋转纠正后的坐标等，具体内容请参见 TextDetection。注：仅当QueryType=0时TextDetections不为空，否则返回null。</p>
                     * 
                     */
                    std::vector<TextDetection> GetTextDetections() const;

                    /**
                     * 设置<p>检测到的文本信息，包括内容、坐标以及旋转纠正后的坐标等，具体内容请参见 TextDetection。注：仅当QueryType=0时TextDetections不为空，否则返回null。</p>
                     * @param _textDetections <p>检测到的文本信息，包括内容、坐标以及旋转纠正后的坐标等，具体内容请参见 TextDetection。注：仅当QueryType=0时TextDetections不为空，否则返回null。</p>
                     * 
                     */
                    void SetTextDetections(const std::vector<TextDetection>& _textDetections);

                    /**
                     * 判断参数 TextDetections 是否已赋值
                     * @return TextDetections 是否已赋值
                     * 
                     */
                    bool TextDetectionsHasBeenSet() const;

                private:

                    /**
                     * <p>推理任务的完整提示词。注：仅当QueryType=1/2/3时有效，否则返回为null。</p>
                     */
                    std::string m_queryInfo;
                    bool m_queryInfoHasBeenSet;

                    /**
                     * <p>根据QueryType对应任务的返回内容。注：仅当QueryType=1/2/3时有效，其他情况为null。</p>
                     */
                    std::string m_answer;
                    bool m_answerHasBeenSet;

                    /**
                     * <p>结构化提取结果。注：仅当QueryType=4时有效，否则返回null。</p>
                     */
                    std::vector<FieldsInfo> m_extractFields;
                    bool m_extractFieldsHasBeenSet;

                    /**
                     * <p>检测到的文本信息，包括内容、坐标以及旋转纠正后的坐标等，具体内容请参见 TextDetection。注：仅当QueryType=0时TextDetections不为空，否则返回null。</p>
                     */
                    std::vector<TextDetection> m_textDetections;
                    bool m_textDetectionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_LISTINFO_H_
