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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONRESULT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskHeadTailResult.h>
#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskSegmentResult.h>
#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskFaceResult.h>
#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskAsrWordsResult.h>
#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskAsrFullTextResult.h>
#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskAsrTranslateResult.h>
#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskOcrWordsResult.h>
#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskOcrFullTextResult.h>
#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskObjectResult.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 智能识别结果。
                */
                class AiRecognitionResult : public AbstractModel
                {
                public:
                    AiRecognitionResult();
                    ~AiRecognitionResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务的类型，取值范围：
<li>FaceRecognition：人脸识别，</li>
<li>AsrWordsRecognition：语音关键词识别，</li>
<li>OcrWordsRecognition：文本关键词识别，</li>
<li>AsrFullTextRecognition：语音全文识别，</li>
<li>AsrTranslateRecognition：语音翻译识别，</li>
<li>OcrFullTextRecognition：文本全文识别，</li>
<li>HeadTailRecognition：视频片头片尾识别，</li>
<li>ObjectRecognition：物体识别。</li>
                     * @return Type 任务的类型，取值范围：
<li>FaceRecognition：人脸识别，</li>
<li>AsrWordsRecognition：语音关键词识别，</li>
<li>OcrWordsRecognition：文本关键词识别，</li>
<li>AsrFullTextRecognition：语音全文识别，</li>
<li>AsrTranslateRecognition：语音翻译识别，</li>
<li>OcrFullTextRecognition：文本全文识别，</li>
<li>HeadTailRecognition：视频片头片尾识别，</li>
<li>ObjectRecognition：物体识别。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置任务的类型，取值范围：
<li>FaceRecognition：人脸识别，</li>
<li>AsrWordsRecognition：语音关键词识别，</li>
<li>OcrWordsRecognition：文本关键词识别，</li>
<li>AsrFullTextRecognition：语音全文识别，</li>
<li>AsrTranslateRecognition：语音翻译识别，</li>
<li>OcrFullTextRecognition：文本全文识别，</li>
<li>HeadTailRecognition：视频片头片尾识别，</li>
<li>ObjectRecognition：物体识别。</li>
                     * @param _type 任务的类型，取值范围：
<li>FaceRecognition：人脸识别，</li>
<li>AsrWordsRecognition：语音关键词识别，</li>
<li>OcrWordsRecognition：文本关键词识别，</li>
<li>AsrFullTextRecognition：语音全文识别，</li>
<li>AsrTranslateRecognition：语音翻译识别，</li>
<li>OcrFullTextRecognition：文本全文识别，</li>
<li>HeadTailRecognition：视频片头片尾识别，</li>
<li>ObjectRecognition：物体识别。</li>
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
                     * 获取视频片头片尾识别结果，当 Type 为
 HeadTailRecognition 时有效。
                     * @return HeadTailTask 视频片头片尾识别结果，当 Type 为
 HeadTailRecognition 时有效。
                     * 
                     */
                    AiRecognitionTaskHeadTailResult GetHeadTailTask() const;

                    /**
                     * 设置视频片头片尾识别结果，当 Type 为
 HeadTailRecognition 时有效。
                     * @param _headTailTask 视频片头片尾识别结果，当 Type 为
 HeadTailRecognition 时有效。
                     * 
                     */
                    void SetHeadTailTask(const AiRecognitionTaskHeadTailResult& _headTailTask);

                    /**
                     * 判断参数 HeadTailTask 是否已赋值
                     * @return HeadTailTask 是否已赋值
                     * 
                     */
                    bool HeadTailTaskHasBeenSet() const;

                    /**
                     * 获取视频拆条识别结果，当 Type 为
 SegmentRecognition 时有效。
                     * @return SegmentTask 视频拆条识别结果，当 Type 为
 SegmentRecognition 时有效。
                     * 
                     */
                    AiRecognitionTaskSegmentResult GetSegmentTask() const;

                    /**
                     * 设置视频拆条识别结果，当 Type 为
 SegmentRecognition 时有效。
                     * @param _segmentTask 视频拆条识别结果，当 Type 为
 SegmentRecognition 时有效。
                     * 
                     */
                    void SetSegmentTask(const AiRecognitionTaskSegmentResult& _segmentTask);

                    /**
                     * 判断参数 SegmentTask 是否已赋值
                     * @return SegmentTask 是否已赋值
                     * 
                     */
                    bool SegmentTaskHasBeenSet() const;

                    /**
                     * 获取人脸识别结果，当 Type 为 
 FaceRecognition 时有效。
                     * @return FaceTask 人脸识别结果，当 Type 为 
 FaceRecognition 时有效。
                     * 
                     */
                    AiRecognitionTaskFaceResult GetFaceTask() const;

                    /**
                     * 设置人脸识别结果，当 Type 为 
 FaceRecognition 时有效。
                     * @param _faceTask 人脸识别结果，当 Type 为 
 FaceRecognition 时有效。
                     * 
                     */
                    void SetFaceTask(const AiRecognitionTaskFaceResult& _faceTask);

                    /**
                     * 判断参数 FaceTask 是否已赋值
                     * @return FaceTask 是否已赋值
                     * 
                     */
                    bool FaceTaskHasBeenSet() const;

                    /**
                     * 获取语音关键词识别结果，当 Type 为
 AsrWordsRecognition 时有效。
                     * @return AsrWordsTask 语音关键词识别结果，当 Type 为
 AsrWordsRecognition 时有效。
                     * 
                     */
                    AiRecognitionTaskAsrWordsResult GetAsrWordsTask() const;

                    /**
                     * 设置语音关键词识别结果，当 Type 为
 AsrWordsRecognition 时有效。
                     * @param _asrWordsTask 语音关键词识别结果，当 Type 为
 AsrWordsRecognition 时有效。
                     * 
                     */
                    void SetAsrWordsTask(const AiRecognitionTaskAsrWordsResult& _asrWordsTask);

                    /**
                     * 判断参数 AsrWordsTask 是否已赋值
                     * @return AsrWordsTask 是否已赋值
                     * 
                     */
                    bool AsrWordsTaskHasBeenSet() const;

                    /**
                     * 获取语音全文识别结果，当 Type 为
 AsrFullTextRecognition 时有效。
                     * @return AsrFullTextTask 语音全文识别结果，当 Type 为
 AsrFullTextRecognition 时有效。
                     * 
                     */
                    AiRecognitionTaskAsrFullTextResult GetAsrFullTextTask() const;

                    /**
                     * 设置语音全文识别结果，当 Type 为
 AsrFullTextRecognition 时有效。
                     * @param _asrFullTextTask 语音全文识别结果，当 Type 为
 AsrFullTextRecognition 时有效。
                     * 
                     */
                    void SetAsrFullTextTask(const AiRecognitionTaskAsrFullTextResult& _asrFullTextTask);

                    /**
                     * 判断参数 AsrFullTextTask 是否已赋值
                     * @return AsrFullTextTask 是否已赋值
                     * 
                     */
                    bool AsrFullTextTaskHasBeenSet() const;

                    /**
                     * 获取语音翻译结果，当 Type 为 AsrTranslateRecognition 时有效。
                     * @return AsrTranslateTask 语音翻译结果，当 Type 为 AsrTranslateRecognition 时有效。
                     * 
                     */
                    AiRecognitionTaskAsrTranslateResult GetAsrTranslateTask() const;

                    /**
                     * 设置语音翻译结果，当 Type 为 AsrTranslateRecognition 时有效。
                     * @param _asrTranslateTask 语音翻译结果，当 Type 为 AsrTranslateRecognition 时有效。
                     * 
                     */
                    void SetAsrTranslateTask(const AiRecognitionTaskAsrTranslateResult& _asrTranslateTask);

                    /**
                     * 判断参数 AsrTranslateTask 是否已赋值
                     * @return AsrTranslateTask 是否已赋值
                     * 
                     */
                    bool AsrTranslateTaskHasBeenSet() const;

                    /**
                     * 获取文本关键词识别结果，当 Type 为
 OcrWordsRecognition 时有效。
                     * @return OcrWordsTask 文本关键词识别结果，当 Type 为
 OcrWordsRecognition 时有效。
                     * 
                     */
                    AiRecognitionTaskOcrWordsResult GetOcrWordsTask() const;

                    /**
                     * 设置文本关键词识别结果，当 Type 为
 OcrWordsRecognition 时有效。
                     * @param _ocrWordsTask 文本关键词识别结果，当 Type 为
 OcrWordsRecognition 时有效。
                     * 
                     */
                    void SetOcrWordsTask(const AiRecognitionTaskOcrWordsResult& _ocrWordsTask);

                    /**
                     * 判断参数 OcrWordsTask 是否已赋值
                     * @return OcrWordsTask 是否已赋值
                     * 
                     */
                    bool OcrWordsTaskHasBeenSet() const;

                    /**
                     * 获取文本全文识别结果，当 Type 为
 OcrFullTextRecognition 时有效。
                     * @return OcrFullTextTask 文本全文识别结果，当 Type 为
 OcrFullTextRecognition 时有效。
                     * 
                     */
                    AiRecognitionTaskOcrFullTextResult GetOcrFullTextTask() const;

                    /**
                     * 设置文本全文识别结果，当 Type 为
 OcrFullTextRecognition 时有效。
                     * @param _ocrFullTextTask 文本全文识别结果，当 Type 为
 OcrFullTextRecognition 时有效。
                     * 
                     */
                    void SetOcrFullTextTask(const AiRecognitionTaskOcrFullTextResult& _ocrFullTextTask);

                    /**
                     * 判断参数 OcrFullTextTask 是否已赋值
                     * @return OcrFullTextTask 是否已赋值
                     * 
                     */
                    bool OcrFullTextTaskHasBeenSet() const;

                    /**
                     * 获取物体识别结果，当 Type 为
 ObjectRecognition 时有效。
                     * @return ObjectTask 物体识别结果，当 Type 为
 ObjectRecognition 时有效。
                     * 
                     */
                    AiRecognitionTaskObjectResult GetObjectTask() const;

                    /**
                     * 设置物体识别结果，当 Type 为
 ObjectRecognition 时有效。
                     * @param _objectTask 物体识别结果，当 Type 为
 ObjectRecognition 时有效。
                     * 
                     */
                    void SetObjectTask(const AiRecognitionTaskObjectResult& _objectTask);

                    /**
                     * 判断参数 ObjectTask 是否已赋值
                     * @return ObjectTask 是否已赋值
                     * 
                     */
                    bool ObjectTaskHasBeenSet() const;

                private:

                    /**
                     * 任务的类型，取值范围：
<li>FaceRecognition：人脸识别，</li>
<li>AsrWordsRecognition：语音关键词识别，</li>
<li>OcrWordsRecognition：文本关键词识别，</li>
<li>AsrFullTextRecognition：语音全文识别，</li>
<li>AsrTranslateRecognition：语音翻译识别，</li>
<li>OcrFullTextRecognition：文本全文识别，</li>
<li>HeadTailRecognition：视频片头片尾识别，</li>
<li>ObjectRecognition：物体识别。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 视频片头片尾识别结果，当 Type 为
 HeadTailRecognition 时有效。
                     */
                    AiRecognitionTaskHeadTailResult m_headTailTask;
                    bool m_headTailTaskHasBeenSet;

                    /**
                     * 视频拆条识别结果，当 Type 为
 SegmentRecognition 时有效。
                     */
                    AiRecognitionTaskSegmentResult m_segmentTask;
                    bool m_segmentTaskHasBeenSet;

                    /**
                     * 人脸识别结果，当 Type 为 
 FaceRecognition 时有效。
                     */
                    AiRecognitionTaskFaceResult m_faceTask;
                    bool m_faceTaskHasBeenSet;

                    /**
                     * 语音关键词识别结果，当 Type 为
 AsrWordsRecognition 时有效。
                     */
                    AiRecognitionTaskAsrWordsResult m_asrWordsTask;
                    bool m_asrWordsTaskHasBeenSet;

                    /**
                     * 语音全文识别结果，当 Type 为
 AsrFullTextRecognition 时有效。
                     */
                    AiRecognitionTaskAsrFullTextResult m_asrFullTextTask;
                    bool m_asrFullTextTaskHasBeenSet;

                    /**
                     * 语音翻译结果，当 Type 为 AsrTranslateRecognition 时有效。
                     */
                    AiRecognitionTaskAsrTranslateResult m_asrTranslateTask;
                    bool m_asrTranslateTaskHasBeenSet;

                    /**
                     * 文本关键词识别结果，当 Type 为
 OcrWordsRecognition 时有效。
                     */
                    AiRecognitionTaskOcrWordsResult m_ocrWordsTask;
                    bool m_ocrWordsTaskHasBeenSet;

                    /**
                     * 文本全文识别结果，当 Type 为
 OcrFullTextRecognition 时有效。
                     */
                    AiRecognitionTaskOcrFullTextResult m_ocrFullTextTask;
                    bool m_ocrFullTextTaskHasBeenSet;

                    /**
                     * 物体识别结果，当 Type 为
 ObjectRecognition 时有效。
                     */
                    AiRecognitionTaskObjectResult m_objectTask;
                    bool m_objectTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONRESULT_H_
