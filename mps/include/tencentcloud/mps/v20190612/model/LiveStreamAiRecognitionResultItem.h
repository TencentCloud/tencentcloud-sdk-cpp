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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMAIRECOGNITIONRESULTITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMAIRECOGNITIONRESULTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/LiveStreamFaceRecognitionResult.h>
#include <tencentcloud/mps/v20190612/model/LiveStreamAsrWordsRecognitionResult.h>
#include <tencentcloud/mps/v20190612/model/LiveStreamOcrWordsRecognitionResult.h>
#include <tencentcloud/mps/v20190612/model/LiveStreamAsrFullTextRecognitionResult.h>
#include <tencentcloud/mps/v20190612/model/LiveStreamOcrFullTextRecognitionResult.h>
#include <tencentcloud/mps/v20190612/model/LiveStreamTransTextRecognitionResult.h>
#include <tencentcloud/mps/v20190612/model/LiveStreamObjectRecognitionResult.h>
#include <tencentcloud/mps/v20190612/model/LiveStreamTagRecognitionResult.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 直播流 AI 识别结果
                */
                class LiveStreamAiRecognitionResultItem : public AbstractModel
                {
                public:
                    LiveStreamAiRecognitionResultItem();
                    ~LiveStreamAiRecognitionResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取结果的类型，取值范围：
<li>FaceRecognition：人脸识别，</li>
<li>AsrWordsRecognition：语音关键词识别，</li>
<li>OcrWordsRecognition：文本关键词识别，</li>
<li>AsrFullTextRecognition：语音全文识别，</li>
<li>OcrFullTextRecognition：文本全文识别。</li>
<li>TransTextRecognition：语音翻译。</li>
<li>ObjectRecognition：目标检测。</li>
<li>TagRecognition：精彩打点。</li>
                     * @return Type 结果的类型，取值范围：
<li>FaceRecognition：人脸识别，</li>
<li>AsrWordsRecognition：语音关键词识别，</li>
<li>OcrWordsRecognition：文本关键词识别，</li>
<li>AsrFullTextRecognition：语音全文识别，</li>
<li>OcrFullTextRecognition：文本全文识别。</li>
<li>TransTextRecognition：语音翻译。</li>
<li>ObjectRecognition：目标检测。</li>
<li>TagRecognition：精彩打点。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置结果的类型，取值范围：
<li>FaceRecognition：人脸识别，</li>
<li>AsrWordsRecognition：语音关键词识别，</li>
<li>OcrWordsRecognition：文本关键词识别，</li>
<li>AsrFullTextRecognition：语音全文识别，</li>
<li>OcrFullTextRecognition：文本全文识别。</li>
<li>TransTextRecognition：语音翻译。</li>
<li>ObjectRecognition：目标检测。</li>
<li>TagRecognition：精彩打点。</li>
                     * @param _type 结果的类型，取值范围：
<li>FaceRecognition：人脸识别，</li>
<li>AsrWordsRecognition：语音关键词识别，</li>
<li>OcrWordsRecognition：文本关键词识别，</li>
<li>AsrFullTextRecognition：语音全文识别，</li>
<li>OcrFullTextRecognition：文本全文识别。</li>
<li>TransTextRecognition：语音翻译。</li>
<li>ObjectRecognition：目标检测。</li>
<li>TagRecognition：精彩打点。</li>
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
                     * 获取人脸识别结果，当 Type 为
FaceRecognition 时有效。
                     * @return FaceRecognitionResultSet 人脸识别结果，当 Type 为
FaceRecognition 时有效。
                     * 
                     */
                    std::vector<LiveStreamFaceRecognitionResult> GetFaceRecognitionResultSet() const;

                    /**
                     * 设置人脸识别结果，当 Type 为
FaceRecognition 时有效。
                     * @param _faceRecognitionResultSet 人脸识别结果，当 Type 为
FaceRecognition 时有效。
                     * 
                     */
                    void SetFaceRecognitionResultSet(const std::vector<LiveStreamFaceRecognitionResult>& _faceRecognitionResultSet);

                    /**
                     * 判断参数 FaceRecognitionResultSet 是否已赋值
                     * @return FaceRecognitionResultSet 是否已赋值
                     * 
                     */
                    bool FaceRecognitionResultSetHasBeenSet() const;

                    /**
                     * 获取语音关键词识别结果，当 Type 为
AsrWordsRecognition 时有效。
                     * @return AsrWordsRecognitionResultSet 语音关键词识别结果，当 Type 为
AsrWordsRecognition 时有效。
                     * 
                     */
                    std::vector<LiveStreamAsrWordsRecognitionResult> GetAsrWordsRecognitionResultSet() const;

                    /**
                     * 设置语音关键词识别结果，当 Type 为
AsrWordsRecognition 时有效。
                     * @param _asrWordsRecognitionResultSet 语音关键词识别结果，当 Type 为
AsrWordsRecognition 时有效。
                     * 
                     */
                    void SetAsrWordsRecognitionResultSet(const std::vector<LiveStreamAsrWordsRecognitionResult>& _asrWordsRecognitionResultSet);

                    /**
                     * 判断参数 AsrWordsRecognitionResultSet 是否已赋值
                     * @return AsrWordsRecognitionResultSet 是否已赋值
                     * 
                     */
                    bool AsrWordsRecognitionResultSetHasBeenSet() const;

                    /**
                     * 获取文本关键词识别结果，当 Type 为
OcrWordsRecognition 时有效。
                     * @return OcrWordsRecognitionResultSet 文本关键词识别结果，当 Type 为
OcrWordsRecognition 时有效。
                     * 
                     */
                    std::vector<LiveStreamOcrWordsRecognitionResult> GetOcrWordsRecognitionResultSet() const;

                    /**
                     * 设置文本关键词识别结果，当 Type 为
OcrWordsRecognition 时有效。
                     * @param _ocrWordsRecognitionResultSet 文本关键词识别结果，当 Type 为
OcrWordsRecognition 时有效。
                     * 
                     */
                    void SetOcrWordsRecognitionResultSet(const std::vector<LiveStreamOcrWordsRecognitionResult>& _ocrWordsRecognitionResultSet);

                    /**
                     * 判断参数 OcrWordsRecognitionResultSet 是否已赋值
                     * @return OcrWordsRecognitionResultSet 是否已赋值
                     * 
                     */
                    bool OcrWordsRecognitionResultSetHasBeenSet() const;

                    /**
                     * 获取语音全文识别结果，当 Type 为
AsrFullTextRecognition 时有效。
                     * @return AsrFullTextRecognitionResultSet 语音全文识别结果，当 Type 为
AsrFullTextRecognition 时有效。
                     * 
                     */
                    std::vector<LiveStreamAsrFullTextRecognitionResult> GetAsrFullTextRecognitionResultSet() const;

                    /**
                     * 设置语音全文识别结果，当 Type 为
AsrFullTextRecognition 时有效。
                     * @param _asrFullTextRecognitionResultSet 语音全文识别结果，当 Type 为
AsrFullTextRecognition 时有效。
                     * 
                     */
                    void SetAsrFullTextRecognitionResultSet(const std::vector<LiveStreamAsrFullTextRecognitionResult>& _asrFullTextRecognitionResultSet);

                    /**
                     * 判断参数 AsrFullTextRecognitionResultSet 是否已赋值
                     * @return AsrFullTextRecognitionResultSet 是否已赋值
                     * 
                     */
                    bool AsrFullTextRecognitionResultSetHasBeenSet() const;

                    /**
                     * 获取文本全文识别结果，当 Type 为
OcrFullTextRecognition 时有效。
                     * @return OcrFullTextRecognitionResultSet 文本全文识别结果，当 Type 为
OcrFullTextRecognition 时有效。
                     * 
                     */
                    std::vector<LiveStreamOcrFullTextRecognitionResult> GetOcrFullTextRecognitionResultSet() const;

                    /**
                     * 设置文本全文识别结果，当 Type 为
OcrFullTextRecognition 时有效。
                     * @param _ocrFullTextRecognitionResultSet 文本全文识别结果，当 Type 为
OcrFullTextRecognition 时有效。
                     * 
                     */
                    void SetOcrFullTextRecognitionResultSet(const std::vector<LiveStreamOcrFullTextRecognitionResult>& _ocrFullTextRecognitionResultSet);

                    /**
                     * 判断参数 OcrFullTextRecognitionResultSet 是否已赋值
                     * @return OcrFullTextRecognitionResultSet 是否已赋值
                     * 
                     */
                    bool OcrFullTextRecognitionResultSetHasBeenSet() const;

                    /**
                     * 获取翻译结果，当Type 为 TransTextRecognition 时有效。
                     * @return TransTextRecognitionResultSet 翻译结果，当Type 为 TransTextRecognition 时有效。
                     * 
                     */
                    std::vector<LiveStreamTransTextRecognitionResult> GetTransTextRecognitionResultSet() const;

                    /**
                     * 设置翻译结果，当Type 为 TransTextRecognition 时有效。
                     * @param _transTextRecognitionResultSet 翻译结果，当Type 为 TransTextRecognition 时有效。
                     * 
                     */
                    void SetTransTextRecognitionResultSet(const std::vector<LiveStreamTransTextRecognitionResult>& _transTextRecognitionResultSet);

                    /**
                     * 判断参数 TransTextRecognitionResultSet 是否已赋值
                     * @return TransTextRecognitionResultSet 是否已赋值
                     * 
                     */
                    bool TransTextRecognitionResultSetHasBeenSet() const;

                    /**
                     * 获取目标检测结果，当Type为 ObjectRecognition 时有效。
                     * @return ObjectRecognitionResultSet 目标检测结果，当Type为 ObjectRecognition 时有效。
                     * 
                     */
                    std::vector<LiveStreamObjectRecognitionResult> GetObjectRecognitionResultSet() const;

                    /**
                     * 设置目标检测结果，当Type为 ObjectRecognition 时有效。
                     * @param _objectRecognitionResultSet 目标检测结果，当Type为 ObjectRecognition 时有效。
                     * 
                     */
                    void SetObjectRecognitionResultSet(const std::vector<LiveStreamObjectRecognitionResult>& _objectRecognitionResultSet);

                    /**
                     * 判断参数 ObjectRecognitionResultSet 是否已赋值
                     * @return ObjectRecognitionResultSet 是否已赋值
                     * 
                     */
                    bool ObjectRecognitionResultSetHasBeenSet() const;

                    /**
                     * 获取打点结果，当Type 为 TagRecognition 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagRecognitionResultSet 打点结果，当Type 为 TagRecognition 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LiveStreamTagRecognitionResult> GetTagRecognitionResultSet() const;

                    /**
                     * 设置打点结果，当Type 为 TagRecognition 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagRecognitionResultSet 打点结果，当Type 为 TagRecognition 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTagRecognitionResultSet(const std::vector<LiveStreamTagRecognitionResult>& _tagRecognitionResultSet);

                    /**
                     * 判断参数 TagRecognitionResultSet 是否已赋值
                     * @return TagRecognitionResultSet 是否已赋值
                     * 
                     */
                    bool TagRecognitionResultSetHasBeenSet() const;

                private:

                    /**
                     * 结果的类型，取值范围：
<li>FaceRecognition：人脸识别，</li>
<li>AsrWordsRecognition：语音关键词识别，</li>
<li>OcrWordsRecognition：文本关键词识别，</li>
<li>AsrFullTextRecognition：语音全文识别，</li>
<li>OcrFullTextRecognition：文本全文识别。</li>
<li>TransTextRecognition：语音翻译。</li>
<li>ObjectRecognition：目标检测。</li>
<li>TagRecognition：精彩打点。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 人脸识别结果，当 Type 为
FaceRecognition 时有效。
                     */
                    std::vector<LiveStreamFaceRecognitionResult> m_faceRecognitionResultSet;
                    bool m_faceRecognitionResultSetHasBeenSet;

                    /**
                     * 语音关键词识别结果，当 Type 为
AsrWordsRecognition 时有效。
                     */
                    std::vector<LiveStreamAsrWordsRecognitionResult> m_asrWordsRecognitionResultSet;
                    bool m_asrWordsRecognitionResultSetHasBeenSet;

                    /**
                     * 文本关键词识别结果，当 Type 为
OcrWordsRecognition 时有效。
                     */
                    std::vector<LiveStreamOcrWordsRecognitionResult> m_ocrWordsRecognitionResultSet;
                    bool m_ocrWordsRecognitionResultSetHasBeenSet;

                    /**
                     * 语音全文识别结果，当 Type 为
AsrFullTextRecognition 时有效。
                     */
                    std::vector<LiveStreamAsrFullTextRecognitionResult> m_asrFullTextRecognitionResultSet;
                    bool m_asrFullTextRecognitionResultSetHasBeenSet;

                    /**
                     * 文本全文识别结果，当 Type 为
OcrFullTextRecognition 时有效。
                     */
                    std::vector<LiveStreamOcrFullTextRecognitionResult> m_ocrFullTextRecognitionResultSet;
                    bool m_ocrFullTextRecognitionResultSetHasBeenSet;

                    /**
                     * 翻译结果，当Type 为 TransTextRecognition 时有效。
                     */
                    std::vector<LiveStreamTransTextRecognitionResult> m_transTextRecognitionResultSet;
                    bool m_transTextRecognitionResultSetHasBeenSet;

                    /**
                     * 目标检测结果，当Type为 ObjectRecognition 时有效。
                     */
                    std::vector<LiveStreamObjectRecognitionResult> m_objectRecognitionResultSet;
                    bool m_objectRecognitionResultSetHasBeenSet;

                    /**
                     * 打点结果，当Type 为 TagRecognition 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LiveStreamTagRecognitionResult> m_tagRecognitionResultSet;
                    bool m_tagRecognitionResultSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMAIRECOGNITIONRESULTITEM_H_
