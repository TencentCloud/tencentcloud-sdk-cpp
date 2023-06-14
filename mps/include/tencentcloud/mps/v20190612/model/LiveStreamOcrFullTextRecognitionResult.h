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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMOCRFULLTEXTRECOGNITIONRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMOCRFULLTEXTRECOGNITIONRESULT_H_

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
                * 直播识别 Ocr 全文识别
                */
                class LiveStreamOcrFullTextRecognitionResult : public AbstractModel
                {
                public:
                    LiveStreamOcrFullTextRecognitionResult();
                    ~LiveStreamOcrFullTextRecognitionResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取语音文本。
                     * @return Text 语音文本。
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置语音文本。
                     * @param _text 语音文本。
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取识别片段起始的 PTS 时间，单位：秒。
                     * @return StartPtsTime 识别片段起始的 PTS 时间，单位：秒。
                     * 
                     */
                    double GetStartPtsTime() const;

                    /**
                     * 设置识别片段起始的 PTS 时间，单位：秒。
                     * @param _startPtsTime 识别片段起始的 PTS 时间，单位：秒。
                     * 
                     */
                    void SetStartPtsTime(const double& _startPtsTime);

                    /**
                     * 判断参数 StartPtsTime 是否已赋值
                     * @return StartPtsTime 是否已赋值
                     * 
                     */
                    bool StartPtsTimeHasBeenSet() const;

                    /**
                     * 获取识别片段终止的 PTS 时间，单位：秒。
                     * @return EndPtsTime 识别片段终止的 PTS 时间，单位：秒。
                     * 
                     */
                    double GetEndPtsTime() const;

                    /**
                     * 设置识别片段终止的 PTS 时间，单位：秒。
                     * @param _endPtsTime 识别片段终止的 PTS 时间，单位：秒。
                     * 
                     */
                    void SetEndPtsTime(const double& _endPtsTime);

                    /**
                     * 判断参数 EndPtsTime 是否已赋值
                     * @return EndPtsTime 是否已赋值
                     * 
                     */
                    bool EndPtsTimeHasBeenSet() const;

                    /**
                     * 获取识别片段置信度。取值：0~100。
                     * @return Confidence 识别片段置信度。取值：0~100。
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置识别片段置信度。取值：0~100。
                     * @param _confidence 识别片段置信度。取值：0~100。
                     * 
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取识别结果的区域坐标。数组包含 4 个元素 [x1,y1,x2,y2]，依次表示区域左上点、右下点的横纵坐标。
                     * @return AreaCoordSet 识别结果的区域坐标。数组包含 4 个元素 [x1,y1,x2,y2]，依次表示区域左上点、右下点的横纵坐标。
                     * 
                     */
                    std::vector<int64_t> GetAreaCoordSet() const;

                    /**
                     * 设置识别结果的区域坐标。数组包含 4 个元素 [x1,y1,x2,y2]，依次表示区域左上点、右下点的横纵坐标。
                     * @param _areaCoordSet 识别结果的区域坐标。数组包含 4 个元素 [x1,y1,x2,y2]，依次表示区域左上点、右下点的横纵坐标。
                     * 
                     */
                    void SetAreaCoordSet(const std::vector<int64_t>& _areaCoordSet);

                    /**
                     * 判断参数 AreaCoordSet 是否已赋值
                     * @return AreaCoordSet 是否已赋值
                     * 
                     */
                    bool AreaCoordSetHasBeenSet() const;

                private:

                    /**
                     * 语音文本。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 识别片段起始的 PTS 时间，单位：秒。
                     */
                    double m_startPtsTime;
                    bool m_startPtsTimeHasBeenSet;

                    /**
                     * 识别片段终止的 PTS 时间，单位：秒。
                     */
                    double m_endPtsTime;
                    bool m_endPtsTimeHasBeenSet;

                    /**
                     * 识别片段置信度。取值：0~100。
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 识别结果的区域坐标。数组包含 4 个元素 [x1,y1,x2,y2]，依次表示区域左上点、右下点的横纵坐标。
                     */
                    std::vector<int64_t> m_areaCoordSet;
                    bool m_areaCoordSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMOCRFULLTEXTRECOGNITIONRESULT_H_
