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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_TASKSTATUS_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_TASKSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/asr/v20190614/model/SentenceDetail.h>
#include <tencentcloud/asr/v20190614/model/LlmResult.h>


namespace TencentCloud
{
    namespace Asr
    {
        namespace V20190614
        {
            namespace Model
            {
                /**
                * [获取录音识别结果的返回参数](https://cloud.tencent.com/document/product/1093/37822#3.-.E8.BE.93.E5.87.BA.E5.8F.82.E6.95.B0)
                */
                class TaskStatus : public AbstractModel
                {
                public:
                    TaskStatus();
                    ~TaskStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务标识。注意：TaskId数据类型为uint64。</p>
                     * @return TaskId <p>任务标识。注意：TaskId数据类型为uint64。</p>
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置<p>任务标识。注意：TaskId数据类型为uint64。</p>
                     * @param _taskId <p>任务标识。注意：TaskId数据类型为uint64。</p>
                     * 
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>任务状态码，0：任务等待，1：任务执行中，2：任务成功，3：任务失败。</p>
                     * @return Status <p>任务状态码，0：任务等待，1：任务执行中，2：任务成功，3：任务失败。</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>任务状态码，0：任务等待，1：任务执行中，2：任务成功，3：任务失败。</p>
                     * @param _status <p>任务状态码，0：任务等待，1：任务执行中，2：任务成功，3：任务失败。</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>任务状态，waiting：任务等待，doing：任务执行中，success：任务成功，failed：任务失败。</p>
                     * @return StatusStr <p>任务状态，waiting：任务等待，doing：任务执行中，success：任务成功，failed：任务失败。</p>
                     * 
                     */
                    std::string GetStatusStr() const;

                    /**
                     * 设置<p>任务状态，waiting：任务等待，doing：任务执行中，success：任务成功，failed：任务失败。</p>
                     * @param _statusStr <p>任务状态，waiting：任务等待，doing：任务执行中，success：任务成功，failed：任务失败。</p>
                     * 
                     */
                    void SetStatusStr(const std::string& _statusStr);

                    /**
                     * 判断参数 StatusStr 是否已赋值
                     * @return StatusStr 是否已赋值
                     * 
                     */
                    bool StatusStrHasBeenSet() const;

                    /**
                     * 获取<p>识别结果。</p>
                     * @return Result <p>识别结果。</p>
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置<p>识别结果。</p>
                     * @param _result <p>识别结果。</p>
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取<p>失败原因说明。</p>
                     * @return ErrorMsg <p>失败原因说明。</p>
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 设置<p>失败原因说明。</p>
                     * @param _errorMsg <p>失败原因说明。</p>
                     * 
                     */
                    void SetErrorMsg(const std::string& _errorMsg);

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                    /**
                     * 获取<p>识别结果详情，包含每个句子中的词时间偏移，一般用于生成字幕的场景。(录音识别请求中ResTextFormat=1时该字段不为空)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultDetail <p>识别结果详情，包含每个句子中的词时间偏移，一般用于生成字幕的场景。(录音识别请求中ResTextFormat=1时该字段不为空)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SentenceDetail> GetResultDetail() const;

                    /**
                     * 设置<p>识别结果详情，包含每个句子中的词时间偏移，一般用于生成字幕的场景。(录音识别请求中ResTextFormat=1时该字段不为空)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resultDetail <p>识别结果详情，包含每个句子中的词时间偏移，一般用于生成字幕的场景。(录音识别请求中ResTextFormat=1时该字段不为空)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResultDetail(const std::vector<SentenceDetail>& _resultDetail);

                    /**
                     * 判断参数 ResultDetail 是否已赋值
                     * @return ResultDetail 是否已赋值
                     * 
                     */
                    bool ResultDetailHasBeenSet() const;

                    /**
                     * 获取<p>音频时长(秒)。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AudioDuration <p>音频时长(秒)。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetAudioDuration() const;

                    /**
                     * 设置<p>音频时长(秒)。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _audioDuration <p>音频时长(秒)。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAudioDuration(const double& _audioDuration);

                    /**
                     * 判断参数 AudioDuration 是否已赋值
                     * @return AudioDuration 是否已赋值
                     * 
                     */
                    bool AudioDurationHasBeenSet() const;

                    /**
                     * 获取<p>大模型后处理结果</p>
                     * @return LlmResults <p>大模型后处理结果</p>
                     * 
                     */
                    std::vector<LlmResult> GetLlmResults() const;

                    /**
                     * 设置<p>大模型后处理结果</p>
                     * @param _llmResults <p>大模型后处理结果</p>
                     * 
                     */
                    void SetLlmResults(const std::vector<LlmResult>& _llmResults);

                    /**
                     * 判断参数 LlmResults 是否已赋值
                     * @return LlmResults 是否已赋值
                     * 
                     */
                    bool LlmResultsHasBeenSet() const;

                    /**
                     * 获取<p>说话人上下文 ID</p>
                     * @return SpeakerContextId <p>说话人上下文 ID</p>
                     * 
                     */
                    std::string GetSpeakerContextId() const;

                    /**
                     * 设置<p>说话人上下文 ID</p>
                     * @param _speakerContextId <p>说话人上下文 ID</p>
                     * 
                     */
                    void SetSpeakerContextId(const std::string& _speakerContextId);

                    /**
                     * 判断参数 SpeakerContextId 是否已赋值
                     * @return SpeakerContextId 是否已赋值
                     * 
                     */
                    bool SpeakerContextIdHasBeenSet() const;

                private:

                    /**
                     * <p>任务标识。注意：TaskId数据类型为uint64。</p>
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务状态码，0：任务等待，1：任务执行中，2：任务成功，3：任务失败。</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>任务状态，waiting：任务等待，doing：任务执行中，success：任务成功，failed：任务失败。</p>
                     */
                    std::string m_statusStr;
                    bool m_statusStrHasBeenSet;

                    /**
                     * <p>识别结果。</p>
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * <p>失败原因说明。</p>
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                    /**
                     * <p>识别结果详情，包含每个句子中的词时间偏移，一般用于生成字幕的场景。(录音识别请求中ResTextFormat=1时该字段不为空)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SentenceDetail> m_resultDetail;
                    bool m_resultDetailHasBeenSet;

                    /**
                     * <p>音频时长(秒)。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_audioDuration;
                    bool m_audioDurationHasBeenSet;

                    /**
                     * <p>大模型后处理结果</p>
                     */
                    std::vector<LlmResult> m_llmResults;
                    bool m_llmResultsHasBeenSet;

                    /**
                     * <p>说话人上下文 ID</p>
                     */
                    std::string m_speakerContextId;
                    bool m_speakerContextIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_TASKSTATUS_H_
