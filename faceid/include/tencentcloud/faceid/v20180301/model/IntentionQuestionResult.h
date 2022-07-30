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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_INTENTIONQUESTIONRESULT_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_INTENTIONQUESTIONRESULT_H_

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
                * 意愿核身问答模式结果
                */
                class IntentionQuestionResult : public AbstractModel
                {
                public:
                    IntentionQuestionResult();
                    ~IntentionQuestionResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取意愿核身最终结果：
0：通过，-1：未通过
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FinalResultCode 意愿核身最终结果：
0：通过，-1：未通过
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFinalResultCode() const;

                    /**
                     * 设置意愿核身最终结果：
0：通过，-1：未通过
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FinalResultCode 意愿核身最终结果：
0：通过，-1：未通过
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFinalResultCode(const std::string& _finalResultCode);

                    /**
                     * 判断参数 FinalResultCode 是否已赋值
                     * @return FinalResultCode 是否已赋值
                     */
                    bool FinalResultCodeHasBeenSet() const;

                    /**
                     * 获取视频base64（其中包含全程问题和回答音频，mp4格式）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Video 视频base64（其中包含全程问题和回答音频，mp4格式）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVideo() const;

                    /**
                     * 设置视频base64（其中包含全程问题和回答音频，mp4格式）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Video 视频base64（其中包含全程问题和回答音频，mp4格式）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVideo(const std::string& _video);

                    /**
                     * 判断参数 Video 是否已赋值
                     * @return Video 是否已赋值
                     */
                    bool VideoHasBeenSet() const;

                    /**
                     * 获取屏幕截图base64列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScreenShot 屏幕截图base64列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetScreenShot() const;

                    /**
                     * 设置屏幕截图base64列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ScreenShot 屏幕截图base64列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetScreenShot(const std::vector<std::string>& _screenShot);

                    /**
                     * 判断参数 ScreenShot 是否已赋值
                     * @return ScreenShot 是否已赋值
                     */
                    bool ScreenShotHasBeenSet() const;

                    /**
                     * 获取和答案匹配结果列表
0：成功，-1：不匹配
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultCode 和答案匹配结果列表
0：成功，-1：不匹配
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetResultCode() const;

                    /**
                     * 设置和答案匹配结果列表
0：成功，-1：不匹配
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ResultCode 和答案匹配结果列表
0：成功，-1：不匹配
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetResultCode(const std::vector<std::string>& _resultCode);

                    /**
                     * 判断参数 ResultCode 是否已赋值
                     * @return ResultCode 是否已赋值
                     */
                    bool ResultCodeHasBeenSet() const;

                    /**
                     * 获取回答问题语音识别结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AsrResult 回答问题语音识别结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetAsrResult() const;

                    /**
                     * 设置回答问题语音识别结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AsrResult 回答问题语音识别结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAsrResult(const std::vector<std::string>& _asrResult);

                    /**
                     * 判断参数 AsrResult 是否已赋值
                     * @return AsrResult 是否已赋值
                     */
                    bool AsrResultHasBeenSet() const;

                    /**
                     * 获取答案录音音频
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Audios 答案录音音频
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetAudios() const;

                    /**
                     * 设置答案录音音频
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Audios 答案录音音频
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAudios(const std::vector<std::string>& _audios);

                    /**
                     * 判断参数 Audios 是否已赋值
                     * @return Audios 是否已赋值
                     */
                    bool AudiosHasBeenSet() const;

                private:

                    /**
                     * 意愿核身最终结果：
0：通过，-1：未通过
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_finalResultCode;
                    bool m_finalResultCodeHasBeenSet;

                    /**
                     * 视频base64（其中包含全程问题和回答音频，mp4格式）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_video;
                    bool m_videoHasBeenSet;

                    /**
                     * 屏幕截图base64列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_screenShot;
                    bool m_screenShotHasBeenSet;

                    /**
                     * 和答案匹配结果列表
0：成功，-1：不匹配
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_resultCode;
                    bool m_resultCodeHasBeenSet;

                    /**
                     * 回答问题语音识别结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_asrResult;
                    bool m_asrResultHasBeenSet;

                    /**
                     * 答案录音音频
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_audios;
                    bool m_audiosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_INTENTIONQUESTIONRESULT_H_
