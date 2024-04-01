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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKHEADTAILOUTPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKHEADTAILOUTPUT_H_

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
                * 片头片尾结果信息
                */
                class AiAnalysisTaskHeadTailOutput : public AbstractModel
                {
                public:
                    AiAnalysisTaskHeadTailOutput();
                    ~AiAnalysisTaskHeadTailOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取片头pts。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HeadTimeOffset 片头pts。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetHeadTimeOffset() const;

                    /**
                     * 设置片头pts。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _headTimeOffset 片头pts。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHeadTimeOffset(const double& _headTimeOffset);

                    /**
                     * 判断参数 HeadTimeOffset 是否已赋值
                     * @return HeadTimeOffset 是否已赋值
                     * 
                     */
                    bool HeadTimeOffsetHasBeenSet() const;

                    /**
                     * 获取片尾pts。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TailTimeOffset 片尾pts。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetTailTimeOffset() const;

                    /**
                     * 设置片尾pts。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tailTimeOffset 片尾pts。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTailTimeOffset(const double& _tailTimeOffset);

                    /**
                     * 判断参数 TailTimeOffset 是否已赋值
                     * @return TailTimeOffset 是否已赋值
                     * 
                     */
                    bool TailTimeOffsetHasBeenSet() const;

                private:

                    /**
                     * 片头pts。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_headTimeOffset;
                    bool m_headTimeOffsetHasBeenSet;

                    /**
                     * 片尾pts。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_tailTimeOffset;
                    bool m_tailTimeOffsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKHEADTAILOUTPUT_H_
