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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBESIGNFACEVIDEORESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBESIGNFACEVIDEORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/DetectInfoVideoData.h>
#include <tencentcloud/ess/v20201111/model/IntentionQuestionResult.h>
#include <tencentcloud/ess/v20201111/model/IntentionActionResult.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * DescribeSignFaceVideo返回参数结构体
                */
                class DescribeSignFaceVideoResponse : public AbstractModel
                {
                public:
                    DescribeSignFaceVideoResponse();
                    ~DescribeSignFaceVideoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取核身视频结果。
                     * @return VideoData 核身视频结果。
                     * 
                     */
                    DetectInfoVideoData GetVideoData() const;

                    /**
                     * 判断参数 VideoData 是否已赋值
                     * @return VideoData 是否已赋值
                     * 
                     */
                    bool VideoDataHasBeenSet() const;

                    /**
                     * 获取意愿核身问答模式结果。若未使用该意愿核身功能，该字段返回值可以不处理。
                     * @return IntentionQuestionResult 意愿核身问答模式结果。若未使用该意愿核身功能，该字段返回值可以不处理。
                     * 
                     */
                    IntentionQuestionResult GetIntentionQuestionResult() const;

                    /**
                     * 判断参数 IntentionQuestionResult 是否已赋值
                     * @return IntentionQuestionResult 是否已赋值
                     * 
                     */
                    bool IntentionQuestionResultHasBeenSet() const;

                    /**
                     * 获取意愿核身点头确认模式的结果信息，若未使用该意愿核身功能，该字段返回值可以不处理。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IntentionActionResult 意愿核身点头确认模式的结果信息，若未使用该意愿核身功能，该字段返回值可以不处理。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    IntentionActionResult GetIntentionActionResult() const;

                    /**
                     * 判断参数 IntentionActionResult 是否已赋值
                     * @return IntentionActionResult 是否已赋值
                     * 
                     */
                    bool IntentionActionResultHasBeenSet() const;

                private:

                    /**
                     * 核身视频结果。
                     */
                    DetectInfoVideoData m_videoData;
                    bool m_videoDataHasBeenSet;

                    /**
                     * 意愿核身问答模式结果。若未使用该意愿核身功能，该字段返回值可以不处理。
                     */
                    IntentionQuestionResult m_intentionQuestionResult;
                    bool m_intentionQuestionResultHasBeenSet;

                    /**
                     * 意愿核身点头确认模式的结果信息，若未使用该意愿核身功能，该字段返回值可以不处理。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IntentionActionResult m_intentionActionResult;
                    bool m_intentionActionResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBESIGNFACEVIDEORESPONSE_H_
