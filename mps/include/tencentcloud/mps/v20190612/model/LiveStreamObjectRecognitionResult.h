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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMOBJECTRECOGNITIONRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMOBJECTRECOGNITIONRESULT_H_

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
                * 直播 AI 物体识别结果
                */
                class LiveStreamObjectRecognitionResult : public AbstractModel
                {
                public:
                    LiveStreamObjectRecognitionResult();
                    ~LiveStreamObjectRecognitionResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取识别的物体名称。
                     * @return Name 识别的物体名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置识别的物体名称。
                     * @param _name 识别的物体名称。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取识别片段起始的 PTS 时间，单位：秒。
                     * @return StartPtsOffset 识别片段起始的 PTS 时间，单位：秒。
                     * 
                     */
                    double GetStartPtsOffset() const;

                    /**
                     * 设置识别片段起始的 PTS 时间，单位：秒。
                     * @param _startPtsOffset 识别片段起始的 PTS 时间，单位：秒。
                     * 
                     */
                    void SetStartPtsOffset(const double& _startPtsOffset);

                    /**
                     * 判断参数 StartPtsOffset 是否已赋值
                     * @return StartPtsOffset 是否已赋值
                     * 
                     */
                    bool StartPtsOffsetHasBeenSet() const;

                    /**
                     * 获取识别片段终止的 PTS 时间，单位：秒。
                     * @return EndPtsOffset 识别片段终止的 PTS 时间，单位：秒。
                     * 
                     */
                    double GetEndPtsOffset() const;

                    /**
                     * 设置识别片段终止的 PTS 时间，单位：秒。
                     * @param _endPtsOffset 识别片段终止的 PTS 时间，单位：秒。
                     * 
                     */
                    void SetEndPtsOffset(const double& _endPtsOffset);

                    /**
                     * 判断参数 EndPtsOffset 是否已赋值
                     * @return EndPtsOffset 是否已赋值
                     * 
                     */
                    bool EndPtsOffsetHasBeenSet() const;

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

                    /**
                     * 获取截图链接。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Url 截图链接。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置截图链接。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _url 截图链接。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * 识别的物体名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 识别片段起始的 PTS 时间，单位：秒。
                     */
                    double m_startPtsOffset;
                    bool m_startPtsOffsetHasBeenSet;

                    /**
                     * 识别片段终止的 PTS 时间，单位：秒。
                     */
                    double m_endPtsOffset;
                    bool m_endPtsOffsetHasBeenSet;

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

                    /**
                     * 截图链接。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMOBJECTRECOGNITIONRESULT_H_
