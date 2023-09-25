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
                     * 获取任务标识。注意：TaskId数据类型为uint64。
                     * @return TaskId 任务标识。注意：TaskId数据类型为uint64。
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置任务标识。注意：TaskId数据类型为uint64。
                     * @param _taskId 任务标识。注意：TaskId数据类型为uint64。
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
                     * 获取任务状态码，0：任务等待，1：任务执行中，2：任务成功，3：任务失败。
                     * @return Status 任务状态码，0：任务等待，1：任务执行中，2：任务成功，3：任务失败。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置任务状态码，0：任务等待，1：任务执行中，2：任务成功，3：任务失败。
                     * @param _status 任务状态码，0：任务等待，1：任务执行中，2：任务成功，3：任务失败。
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
                     * 获取任务状态，waiting：任务等待，doing：任务执行中，success：任务成功，failed：任务失败。
                     * @return StatusStr 任务状态，waiting：任务等待，doing：任务执行中，success：任务成功，failed：任务失败。
                     * 
                     */
                    std::string GetStatusStr() const;

                    /**
                     * 设置任务状态，waiting：任务等待，doing：任务执行中，success：任务成功，failed：任务失败。
                     * @param _statusStr 任务状态，waiting：任务等待，doing：任务执行中，success：任务成功，failed：任务失败。
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
                     * 获取识别结果。
                     * @return Result 识别结果。
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置识别结果。
                     * @param _result 识别结果。
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
                     * 获取失败原因说明。
                     * @return ErrorMsg 失败原因说明。
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 设置失败原因说明。
                     * @param _errorMsg 失败原因说明。
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
                     * 获取识别结果详情，包含每个句子中的词时间偏移，一般用于生成字幕的场景。(录音识别请求中ResTextFormat=1时该字段不为空)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultDetail 识别结果详情，包含每个句子中的词时间偏移，一般用于生成字幕的场景。(录音识别请求中ResTextFormat=1时该字段不为空)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SentenceDetail> GetResultDetail() const;

                    /**
                     * 设置识别结果详情，包含每个句子中的词时间偏移，一般用于生成字幕的场景。(录音识别请求中ResTextFormat=1时该字段不为空)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resultDetail 识别结果详情，包含每个句子中的词时间偏移，一般用于生成字幕的场景。(录音识别请求中ResTextFormat=1时该字段不为空)
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
                     * 获取音频时长(秒)。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AudioDuration 音频时长(秒)。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetAudioDuration() const;

                    /**
                     * 设置音频时长(秒)。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _audioDuration 音频时长(秒)。
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

                private:

                    /**
                     * 任务标识。注意：TaskId数据类型为uint64。
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务状态码，0：任务等待，1：任务执行中，2：任务成功，3：任务失败。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务状态，waiting：任务等待，doing：任务执行中，success：任务成功，failed：任务失败。
                     */
                    std::string m_statusStr;
                    bool m_statusStrHasBeenSet;

                    /**
                     * 识别结果。
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 失败原因说明。
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                    /**
                     * 识别结果详情，包含每个句子中的词时间偏移，一般用于生成字幕的场景。(录音识别请求中ResTextFormat=1时该字段不为空)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SentenceDetail> m_resultDetail;
                    bool m_resultDetailHasBeenSet;

                    /**
                     * 音频时长(秒)。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_audioDuration;
                    bool m_audioDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_TASKSTATUS_H_
