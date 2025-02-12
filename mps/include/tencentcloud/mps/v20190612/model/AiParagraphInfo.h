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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIPARAGRAPHINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIPARAGRAPHINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 分段信息。
                */
                class AiParagraphInfo : public AbstractModel
                {
                public:
                    AiParagraphInfo();
                    ~AiParagraphInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分段摘要
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Summary 分段摘要
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSummary() const;

                    /**
                     * 设置分段摘要
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _summary 分段摘要
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSummary(const std::string& _summary);

                    /**
                     * 判断参数 Summary 是否已赋值
                     * @return Summary 是否已赋值
                     * 
                     */
                    bool SummaryHasBeenSet() const;

                    /**
                     * 获取分段标题
                     * @return Title 分段标题
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置分段标题
                     * @param _title 分段标题
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取分段关键词
                     * @return Keywords 分段关键词
                     * 
                     */
                    std::vector<std::string> GetKeywords() const;

                    /**
                     * 设置分段关键词
                     * @param _keywords 分段关键词
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
                     * 获取分段起始时间点，秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTimeOffset 分段起始时间点，秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置分段起始时间点，秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTimeOffset 分段起始时间点，秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartTimeOffset(const double& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     * 
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取分段结束时间点，秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTimeOffset 分段结束时间点，秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置分段结束时间点，秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTimeOffset 分段结束时间点，秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     * 
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                private:

                    /**
                     * 分段摘要
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_summary;
                    bool m_summaryHasBeenSet;

                    /**
                     * 分段标题
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 分段关键词
                     */
                    std::vector<std::string> m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * 分段起始时间点，秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * 分段结束时间点，秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIPARAGRAPHINFO_H_
