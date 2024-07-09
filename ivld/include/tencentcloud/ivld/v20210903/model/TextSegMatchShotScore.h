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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_TEXTSEGMATCHSHOTSCORE_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_TEXTSEGMATCHSHOTSCORE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * 单个文本摘要分割结果和所有镜头的匹配度信息
                */
                class TextSegMatchShotScore : public AbstractModel
                {
                public:
                    TextSegMatchShotScore();
                    ~TextSegMatchShotScore() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数组第 i 个值表示该文本摘要和第 i 个镜头的匹配度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScoreSet 数组第 i 个值表示该文本摘要和第 i 个镜头的匹配度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<double> GetScoreSet() const;

                    /**
                     * 设置数组第 i 个值表示该文本摘要和第 i 个镜头的匹配度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scoreSet 数组第 i 个值表示该文本摘要和第 i 个镜头的匹配度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScoreSet(const std::vector<double>& _scoreSet);

                    /**
                     * 判断参数 ScoreSet 是否已赋值
                     * @return ScoreSet 是否已赋值
                     * 
                     */
                    bool ScoreSetHasBeenSet() const;

                private:

                    /**
                     * 数组第 i 个值表示该文本摘要和第 i 个镜头的匹配度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<double> m_scoreSet;
                    bool m_scoreSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_TEXTSEGMATCHSHOTSCORE_H_
