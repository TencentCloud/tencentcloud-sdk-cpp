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

#ifndef TENCENTCLOUD_TICM_V20181127_MODEL_TERRORISMRESULT_H_
#define TENCENTCLOUD_TICM_V20181127_MODEL_TERRORISMRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ticm/v20181127/model/FaceResult.h>


namespace TencentCloud
{
    namespace Ticm
    {
        namespace V20181127
        {
            namespace Model
            {
                /**
                * 暴恐识别结果。
                */
                class TerrorismResult : public AbstractModel
                {
                public:
                    TerrorismResult();
                    ~TerrorismResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取该识别场景的错误码：
0表示成功，
-1表示系统错误，
-2表示引擎错误，
-1400表示图片解码失败。
                     * @return Code 该识别场景的错误码：
0表示成功，
-1表示系统错误，
-2表示引擎错误，
-1400表示图片解码失败。
                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置该识别场景的错误码：
0表示成功，
-1表示系统错误，
-2表示引擎错误，
-1400表示图片解码失败。
                     * @param _code 该识别场景的错误码：
0表示成功，
-1表示系统错误，
-2表示引擎错误，
-1400表示图片解码失败。
                     * 
                     */
                    void SetCode(const int64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取错误码描述信息。
                     * @return Msg 错误码描述信息。
                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 设置错误码描述信息。
                     * @param _msg 错误码描述信息。
                     * 
                     */
                    void SetMsg(const std::string& _msg);

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     * 
                     */
                    bool MsgHasBeenSet() const;

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
                     * 设置识别场景的审核结论：
PASS：正常
REVIEW：疑似
BLOCK：违规
                     * @param _suggestion 识别场景的审核结论：
PASS：正常
REVIEW：疑似
BLOCK：违规
                     * 
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取图像涉恐的分数，0-100之间，分数越高涉恐几率越大。
Type为LABEL时：
0到86，Suggestion建议为PASS
86到91，Suggestion建议为REVIEW
91到100，Suggestion建议为BLOCK
Type为FACE时：
0到55，Suggestion建议为PASS
55到60，Suggestion建议为REVIEW
60到100，Suggestion建议为BLOCK
                     * @return Confidence 图像涉恐的分数，0-100之间，分数越高涉恐几率越大。
Type为LABEL时：
0到86，Suggestion建议为PASS
86到91，Suggestion建议为REVIEW
91到100，Suggestion建议为BLOCK
Type为FACE时：
0到55，Suggestion建议为PASS
55到60，Suggestion建议为REVIEW
60到100，Suggestion建议为BLOCK
                     * 
                     */
                    int64_t GetConfidence() const;

                    /**
                     * 设置图像涉恐的分数，0-100之间，分数越高涉恐几率越大。
Type为LABEL时：
0到86，Suggestion建议为PASS
86到91，Suggestion建议为REVIEW
91到100，Suggestion建议为BLOCK
Type为FACE时：
0到55，Suggestion建议为PASS
55到60，Suggestion建议为REVIEW
60到100，Suggestion建议为BLOCK
                     * @param _confidence 图像涉恐的分数，0-100之间，分数越高涉恐几率越大。
Type为LABEL时：
0到86，Suggestion建议为PASS
86到91，Suggestion建议为REVIEW
91到100，Suggestion建议为BLOCK
Type为FACE时：
0到55，Suggestion建议为PASS
55到60，Suggestion建议为REVIEW
60到100，Suggestion建议为BLOCK
                     * 
                     */
                    void SetConfidence(const int64_t& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取Type取值为‘FACE’时，人脸识别的结果列表。基于图片中实际检测到的人脸数，返回数组最大值不超过5个。
                     * @return FaceResults Type取值为‘FACE’时，人脸识别的结果列表。基于图片中实际检测到的人脸数，返回数组最大值不超过5个。
                     * 
                     */
                    std::vector<FaceResult> GetFaceResults() const;

                    /**
                     * 设置Type取值为‘FACE’时，人脸识别的结果列表。基于图片中实际检测到的人脸数，返回数组最大值不超过5个。
                     * @param _faceResults Type取值为‘FACE’时，人脸识别的结果列表。基于图片中实际检测到的人脸数，返回数组最大值不超过5个。
                     * 
                     */
                    void SetFaceResults(const std::vector<FaceResult>& _faceResults);

                    /**
                     * 判断参数 FaceResults 是否已赋值
                     * @return FaceResults 是否已赋值
                     * 
                     */
                    bool FaceResultsHasBeenSet() const;

                    /**
                     * 获取暴恐识别返回的详细标签后期开放。
                     * @return AdvancedInfo 暴恐识别返回的详细标签后期开放。
                     * 
                     */
                    std::string GetAdvancedInfo() const;

                    /**
                     * 设置暴恐识别返回的详细标签后期开放。
                     * @param _advancedInfo 暴恐识别返回的详细标签后期开放。
                     * 
                     */
                    void SetAdvancedInfo(const std::string& _advancedInfo);

                    /**
                     * 判断参数 AdvancedInfo 是否已赋值
                     * @return AdvancedInfo 是否已赋值
                     * 
                     */
                    bool AdvancedInfoHasBeenSet() const;

                    /**
                     * 获取取值'LABEL' 或‘FACE’，LABEL表示结论和置信度来自标签分类，FACE表示结论和置信度来自人脸识别。
                     * @return Type 取值'LABEL' 或‘FACE’，LABEL表示结论和置信度来自标签分类，FACE表示结论和置信度来自人脸识别。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置取值'LABEL' 或‘FACE’，LABEL表示结论和置信度来自标签分类，FACE表示结论和置信度来自人脸识别。
                     * @param _type 取值'LABEL' 或‘FACE’，LABEL表示结论和置信度来自标签分类，FACE表示结论和置信度来自人脸识别。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 该识别场景的错误码：
0表示成功，
-1表示系统错误，
-2表示引擎错误，
-1400表示图片解码失败。
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 错误码描述信息。
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                    /**
                     * 识别场景的审核结论：
PASS：正常
REVIEW：疑似
BLOCK：违规
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 图像涉恐的分数，0-100之间，分数越高涉恐几率越大。
Type为LABEL时：
0到86，Suggestion建议为PASS
86到91，Suggestion建议为REVIEW
91到100，Suggestion建议为BLOCK
Type为FACE时：
0到55，Suggestion建议为PASS
55到60，Suggestion建议为REVIEW
60到100，Suggestion建议为BLOCK
                     */
                    int64_t m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * Type取值为‘FACE’时，人脸识别的结果列表。基于图片中实际检测到的人脸数，返回数组最大值不超过5个。
                     */
                    std::vector<FaceResult> m_faceResults;
                    bool m_faceResultsHasBeenSet;

                    /**
                     * 暴恐识别返回的详细标签后期开放。
                     */
                    std::string m_advancedInfo;
                    bool m_advancedInfoHasBeenSet;

                    /**
                     * 取值'LABEL' 或‘FACE’，LABEL表示结论和置信度来自标签分类，FACE表示结论和置信度来自人脸识别。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TICM_V20181127_MODEL_TERRORISMRESULT_H_
