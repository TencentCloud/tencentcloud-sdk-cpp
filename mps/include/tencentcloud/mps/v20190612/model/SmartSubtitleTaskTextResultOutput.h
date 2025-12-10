/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLETASKTEXTRESULTOUTPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLETASKTEXTRESULTOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SubtitleResult.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 智能字幕识别结果。
                */
                class SmartSubtitleTaskTextResultOutput : public AbstractModel
                {
                public:
                    SmartSubtitleTaskTextResultOutput();
                    ~SmartSubtitleTaskTextResultOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取识别字幕结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecognizeSubtitleResult 识别字幕结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SubtitleResult> GetRecognizeSubtitleResult() const;

                    /**
                     * 设置识别字幕结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recognizeSubtitleResult 识别字幕结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRecognizeSubtitleResult(const std::vector<SubtitleResult>& _recognizeSubtitleResult);

                    /**
                     * 判断参数 RecognizeSubtitleResult 是否已赋值
                     * @return RecognizeSubtitleResult 是否已赋值
                     * 
                     */
                    bool RecognizeSubtitleResultHasBeenSet() const;

                    /**
                     * 获取翻译字幕结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TransSubtitleResult 翻译字幕结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SubtitleResult> GetTransSubtitleResult() const;

                    /**
                     * 设置翻译字幕结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _transSubtitleResult 翻译字幕结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTransSubtitleResult(const std::vector<SubtitleResult>& _transSubtitleResult);

                    /**
                     * 判断参数 TransSubtitleResult 是否已赋值
                     * @return TransSubtitleResult 是否已赋值
                     * 
                     */
                    bool TransSubtitleResultHasBeenSet() const;

                    /**
                     * 获取字幕文件存储位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutputStorage 字幕文件存储位置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置字幕文件存储位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outputStorage 字幕文件存储位置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutputStorage(const TaskOutputStorage& _outputStorage);

                    /**
                     * 判断参数 OutputStorage 是否已赋值
                     * @return OutputStorage 是否已赋值
                     * 
                     */
                    bool OutputStorageHasBeenSet() const;

                private:

                    /**
                     * 识别字幕结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SubtitleResult> m_recognizeSubtitleResult;
                    bool m_recognizeSubtitleResultHasBeenSet;

                    /**
                     * 翻译字幕结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SubtitleResult> m_transSubtitleResult;
                    bool m_transSubtitleResultHasBeenSet;

                    /**
                     * 字幕文件存储位置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLETASKTEXTRESULTOUTPUT_H_
