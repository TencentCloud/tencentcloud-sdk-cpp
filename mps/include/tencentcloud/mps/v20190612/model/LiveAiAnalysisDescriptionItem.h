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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_LIVEAIANALYSISDESCRIPTIONITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_LIVEAIANALYSISDESCRIPTIONITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/LiveAiParagraphInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 直播摘要结果信息。
                */
                class LiveAiAnalysisDescriptionItem : public AbstractModel
                {
                public:
                    LiveAiAnalysisDescriptionItem();
                    ~LiveAiAnalysisDescriptionItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分段结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Paragraphs 分段结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LiveAiParagraphInfo> GetParagraphs() const;

                    /**
                     * 设置分段结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paragraphs 分段结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParagraphs(const std::vector<LiveAiParagraphInfo>& _paragraphs);

                    /**
                     * 判断参数 Paragraphs 是否已赋值
                     * @return Paragraphs 是否已赋值
                     * 
                     */
                    bool ParagraphsHasBeenSet() const;

                private:

                    /**
                     * 分段结果。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LiveAiParagraphInfo> m_paragraphs;
                    bool m_paragraphsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LIVEAIANALYSISDESCRIPTIONITEM_H_
