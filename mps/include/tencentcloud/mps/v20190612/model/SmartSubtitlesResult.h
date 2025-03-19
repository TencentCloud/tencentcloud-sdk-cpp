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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLESRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLESRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SmartSubtitleTaskAsrFullTextResult.h>
#include <tencentcloud/mps/v20190612/model/SmartSubtitleTaskTransTextResult.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 智能字幕结果。
                */
                class SmartSubtitlesResult : public AbstractModel
                {
                public:
                    SmartSubtitlesResult();
                    ~SmartSubtitlesResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务的类型，取值范围：
<li>AsrFullTextRecognition：语音全文识别，</li>
<li>TransTextRecognition：语音翻译。</li>
                     * @return Type 任务的类型，取值范围：
<li>AsrFullTextRecognition：语音全文识别，</li>
<li>TransTextRecognition：语音翻译。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置任务的类型，取值范围：
<li>AsrFullTextRecognition：语音全文识别，</li>
<li>TransTextRecognition：语音翻译。</li>
                     * @param _type 任务的类型，取值范围：
<li>AsrFullTextRecognition：语音全文识别，</li>
<li>TransTextRecognition：语音翻译。</li>
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
                     * 获取语音全文识别结果，当 Type 为
 AsrFullTextRecognition 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AsrFullTextTask 语音全文识别结果，当 Type 为
 AsrFullTextRecognition 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SmartSubtitleTaskAsrFullTextResult GetAsrFullTextTask() const;

                    /**
                     * 设置语音全文识别结果，当 Type 为
 AsrFullTextRecognition 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _asrFullTextTask 语音全文识别结果，当 Type 为
 AsrFullTextRecognition 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAsrFullTextTask(const SmartSubtitleTaskAsrFullTextResult& _asrFullTextTask);

                    /**
                     * 判断参数 AsrFullTextTask 是否已赋值
                     * @return AsrFullTextTask 是否已赋值
                     * 
                     */
                    bool AsrFullTextTaskHasBeenSet() const;

                    /**
                     * 获取翻译结果，当 Type 为

TransTextRecognition 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TransTextTask 翻译结果，当 Type 为

TransTextRecognition 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SmartSubtitleTaskTransTextResult GetTransTextTask() const;

                    /**
                     * 设置翻译结果，当 Type 为

TransTextRecognition 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _transTextTask 翻译结果，当 Type 为

TransTextRecognition 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTransTextTask(const SmartSubtitleTaskTransTextResult& _transTextTask);

                    /**
                     * 判断参数 TransTextTask 是否已赋值
                     * @return TransTextTask 是否已赋值
                     * 
                     */
                    bool TransTextTaskHasBeenSet() const;

                private:

                    /**
                     * 任务的类型，取值范围：
<li>AsrFullTextRecognition：语音全文识别，</li>
<li>TransTextRecognition：语音翻译。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 语音全文识别结果，当 Type 为
 AsrFullTextRecognition 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SmartSubtitleTaskAsrFullTextResult m_asrFullTextTask;
                    bool m_asrFullTextTaskHasBeenSet;

                    /**
                     * 翻译结果，当 Type 为

TransTextRecognition 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SmartSubtitleTaskTransTextResult m_transTextTask;
                    bool m_transTextTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLESRESULT_H_
