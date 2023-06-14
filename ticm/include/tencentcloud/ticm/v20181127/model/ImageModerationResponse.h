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

#ifndef TENCENTCLOUD_TICM_V20181127_MODEL_IMAGEMODERATIONRESPONSE_H_
#define TENCENTCLOUD_TICM_V20181127_MODEL_IMAGEMODERATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ticm/v20181127/model/PornResult.h>
#include <tencentcloud/ticm/v20181127/model/TerrorismResult.h>
#include <tencentcloud/ticm/v20181127/model/PoliticsResult.h>
#include <tencentcloud/ticm/v20181127/model/DisgustResult.h>


namespace TencentCloud
{
    namespace Ticm
    {
        namespace V20181127
        {
            namespace Model
            {
                /**
                * ImageModeration返回参数结构体
                */
                class ImageModerationResponse : public AbstractModel
                {
                public:
                    ImageModerationResponse();
                    ~ImageModerationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取识别场景的审核结论：
PASS：正常
REVIEW：疑似
BLOCK：违规
                     * @return Suggestion 识别场景的审核结论：
PASS：正常
REVIEW：疑似
BLOCK：违规
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取色情识别结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PornResult 色情识别结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PornResult GetPornResult() const;

                    /**
                     * 判断参数 PornResult 是否已赋值
                     * @return PornResult 是否已赋值
                     * 
                     */
                    bool PornResultHasBeenSet() const;

                    /**
                     * 获取暴恐识别结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TerrorismResult 暴恐识别结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TerrorismResult GetTerrorismResult() const;

                    /**
                     * 判断参数 TerrorismResult 是否已赋值
                     * @return TerrorismResult 是否已赋值
                     * 
                     */
                    bool TerrorismResultHasBeenSet() const;

                    /**
                     * 获取政治敏感识别结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PoliticsResult 政治敏感识别结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PoliticsResult GetPoliticsResult() const;

                    /**
                     * 判断参数 PoliticsResult 是否已赋值
                     * @return PoliticsResult 是否已赋值
                     * 
                     */
                    bool PoliticsResultHasBeenSet() const;

                    /**
                     * 获取透传字段，透传简单信息。
                     * @return Extra 透传字段，透传简单信息。
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     * 
                     */
                    bool ExtraHasBeenSet() const;

                    /**
                     * 获取恶心内容识别结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DisgustResult 恶心内容识别结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DisgustResult GetDisgustResult() const;

                    /**
                     * 判断参数 DisgustResult 是否已赋值
                     * @return DisgustResult 是否已赋值
                     * 
                     */
                    bool DisgustResultHasBeenSet() const;

                private:

                    /**
                     * 识别场景的审核结论：
PASS：正常
REVIEW：疑似
BLOCK：违规
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 色情识别结果。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PornResult m_pornResult;
                    bool m_pornResultHasBeenSet;

                    /**
                     * 暴恐识别结果。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TerrorismResult m_terrorismResult;
                    bool m_terrorismResultHasBeenSet;

                    /**
                     * 政治敏感识别结果。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PoliticsResult m_politicsResult;
                    bool m_politicsResultHasBeenSet;

                    /**
                     * 透传字段，透传简单信息。
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                    /**
                     * 恶心内容识别结果。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DisgustResult m_disgustResult;
                    bool m_disgustResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TICM_V20181127_MODEL_IMAGEMODERATIONRESPONSE_H_
