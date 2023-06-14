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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMAIANALYSISRESULTITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMAIANALYSISRESULTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SegmentRecognitionItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 直播流 AI 分析结果
                */
                class LiveStreamAiAnalysisResultItem : public AbstractModel
                {
                public:
                    LiveStreamAiAnalysisResultItem();
                    ~LiveStreamAiAnalysisResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取结果的类型，取值范围：
<li>SegmentRecognition：拆条。</li>
                     * @return Type 结果的类型，取值范围：
<li>SegmentRecognition：拆条。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置结果的类型，取值范围：
<li>SegmentRecognition：拆条。</li>
                     * @param _type 结果的类型，取值范围：
<li>SegmentRecognition：拆条。</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取拆条结果，当 Type 为
SegmentRecognition 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SegmentResultSet 拆条结果，当 Type 为
SegmentRecognition 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SegmentRecognitionItem> GetSegmentResultSet() const;

                    /**
                     * 设置拆条结果，当 Type 为
SegmentRecognition 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _segmentResultSet 拆条结果，当 Type 为
SegmentRecognition 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSegmentResultSet(const std::vector<SegmentRecognitionItem>& _segmentResultSet);

                    /**
                     * 判断参数 SegmentResultSet 是否已赋值
                     * @return SegmentResultSet 是否已赋值
                     * 
                     */
                    bool SegmentResultSetHasBeenSet() const;

                private:

                    /**
                     * 结果的类型，取值范围：
<li>SegmentRecognition：拆条。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 拆条结果，当 Type 为
SegmentRecognition 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SegmentRecognitionItem> m_segmentResultSet;
                    bool m_segmentResultSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMAIANALYSISRESULTITEM_H_
