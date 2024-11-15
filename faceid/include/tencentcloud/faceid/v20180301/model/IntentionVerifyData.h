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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_INTENTIONVERIFYDATA_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_INTENTIONVERIFYDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * 意愿核身相关结果。
                */
                class IntentionVerifyData : public AbstractModel
                {
                public:
                    IntentionVerifyData();
                    ~IntentionVerifyData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取意愿确认环节中录制的视频（base64）。
- 若不存在则为空字符串。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IntentionVerifyVideo 意愿确认环节中录制的视频（base64）。
- 若不存在则为空字符串。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIntentionVerifyVideo() const;

                    /**
                     * 设置意愿确认环节中录制的视频（base64）。
- 若不存在则为空字符串。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _intentionVerifyVideo 意愿确认环节中录制的视频（base64）。
- 若不存在则为空字符串。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIntentionVerifyVideo(const std::string& _intentionVerifyVideo);

                    /**
                     * 判断参数 IntentionVerifyVideo 是否已赋值
                     * @return IntentionVerifyVideo 是否已赋值
                     * 
                     */
                    bool IntentionVerifyVideoHasBeenSet() const;

                    /**
                     * 获取意愿确认环节中用户语音转文字的识别结果。
- 若不存在则为空字符串。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AsrResult 意愿确认环节中用户语音转文字的识别结果。
- 若不存在则为空字符串。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAsrResult() const;

                    /**
                     * 设置意愿确认环节中用户语音转文字的识别结果。
- 若不存在则为空字符串。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _asrResult 意愿确认环节中用户语音转文字的识别结果。
- 若不存在则为空字符串。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAsrResult(const std::string& _asrResult);

                    /**
                     * 判断参数 AsrResult 是否已赋值
                     * @return AsrResult 是否已赋值
                     * 
                     */
                    bool AsrResultHasBeenSet() const;

                    /**
                     * 获取意愿确认环节的结果码。
- 当该结果码为0时，语音朗读的视频与语音识别结果才会返回。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorCode 意愿确认环节的结果码。
- 当该结果码为0时，语音朗读的视频与语音识别结果才会返回。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetErrorCode() const;

                    /**
                     * 设置意愿确认环节的结果码。
- 当该结果码为0时，语音朗读的视频与语音识别结果才会返回。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorCode 意愿确认环节的结果码。
- 当该结果码为0时，语音朗读的视频与语音识别结果才会返回。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorCode(const int64_t& _errorCode);

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取意愿确认环节的结果信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorMessage 意愿确认环节的结果信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置意愿确认环节的结果信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorMessage 意愿确认环节的结果信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取意愿确认环节中录制视频的最佳帧（base64）。
- 若不存在则为空字符串。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IntentionVerifyBestFrame 意愿确认环节中录制视频的最佳帧（base64）。
- 若不存在则为空字符串。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIntentionVerifyBestFrame() const;

                    /**
                     * 设置意愿确认环节中录制视频的最佳帧（base64）。
- 若不存在则为空字符串。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _intentionVerifyBestFrame 意愿确认环节中录制视频的最佳帧（base64）。
- 若不存在则为空字符串。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIntentionVerifyBestFrame(const std::string& _intentionVerifyBestFrame);

                    /**
                     * 判断参数 IntentionVerifyBestFrame 是否已赋值
                     * @return IntentionVerifyBestFrame 是否已赋值
                     * 
                     */
                    bool IntentionVerifyBestFrameHasBeenSet() const;

                    /**
                     * 获取本次流程用户语音与传入文本比对的相似度分值，取值范围 [0.00, 100.00]。只有配置了相似度阈值后才进行语音校验并返回相似度分值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AsrResultSimilarity 本次流程用户语音与传入文本比对的相似度分值，取值范围 [0.00, 100.00]。只有配置了相似度阈值后才进行语音校验并返回相似度分值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetAsrResultSimilarity() const;

                    /**
                     * 设置本次流程用户语音与传入文本比对的相似度分值，取值范围 [0.00, 100.00]。只有配置了相似度阈值后才进行语音校验并返回相似度分值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _asrResultSimilarity 本次流程用户语音与传入文本比对的相似度分值，取值范围 [0.00, 100.00]。只有配置了相似度阈值后才进行语音校验并返回相似度分值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetAsrResultSimilarity(const std::string& _asrResultSimilarity);

                    /**
                     * 判断参数 AsrResultSimilarity 是否已赋值
                     * @return AsrResultSimilarity 是否已赋值
                     * @deprecated
                     */
                    bool AsrResultSimilarityHasBeenSet() const;

                private:

                    /**
                     * 意愿确认环节中录制的视频（base64）。
- 若不存在则为空字符串。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_intentionVerifyVideo;
                    bool m_intentionVerifyVideoHasBeenSet;

                    /**
                     * 意愿确认环节中用户语音转文字的识别结果。
- 若不存在则为空字符串。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_asrResult;
                    bool m_asrResultHasBeenSet;

                    /**
                     * 意愿确认环节的结果码。
- 当该结果码为0时，语音朗读的视频与语音识别结果才会返回。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * 意愿确认环节的结果信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * 意愿确认环节中录制视频的最佳帧（base64）。
- 若不存在则为空字符串。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_intentionVerifyBestFrame;
                    bool m_intentionVerifyBestFrameHasBeenSet;

                    /**
                     * 本次流程用户语音与传入文本比对的相似度分值，取值范围 [0.00, 100.00]。只有配置了相似度阈值后才进行语音校验并返回相似度分值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_asrResultSimilarity;
                    bool m_asrResultSimilarityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_INTENTIONVERIFYDATA_H_
