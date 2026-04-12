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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLETASKBATCHOUTPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLETASKBATCHOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SmartSubtitleTaskTransTextResultOutput.h>
#include <tencentcloud/mps/v20190612/model/SmartSubtitleTaskAsrFullTextResultOutput.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 智能字幕输出信息
                */
                class SmartSubtitleTaskBatchOutput : public AbstractModel
                {
                public:
                    SmartSubtitleTaskBatchOutput();
                    ~SmartSubtitleTaskBatchOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务进度。</p>
                     * @return Progress <p>任务进度。</p>
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 设置<p>任务进度。</p>
                     * @param _progress <p>任务进度。</p>
                     * 
                     */
                    void SetProgress(const uint64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取<p>任务状态，有 PROCESSING，SUCCESS，WAITING 和 FAIL 四种。</p>
                     * @return Status <p>任务状态，有 PROCESSING，SUCCESS，WAITING 和 FAIL 四种。</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>任务状态，有 PROCESSING，SUCCESS，WAITING 和 FAIL 四种。</p>
                     * @param _status <p>任务状态，有 PROCESSING，SUCCESS，WAITING 和 FAIL 四种。</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>错误码，空字符串表示成功，其他值表示失败，取值请参考 <a href="https://cloud.tencent.com/document/product/862/50369#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81">媒体处理类错误码</a> 列表。</p>
                     * @return ErrCodeExt <p>错误码，空字符串表示成功，其他值表示失败，取值请参考 <a href="https://cloud.tencent.com/document/product/862/50369#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81">媒体处理类错误码</a> 列表。</p>
                     * 
                     */
                    std::string GetErrCodeExt() const;

                    /**
                     * 设置<p>错误码，空字符串表示成功，其他值表示失败，取值请参考 <a href="https://cloud.tencent.com/document/product/862/50369#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81">媒体处理类错误码</a> 列表。</p>
                     * @param _errCodeExt <p>错误码，空字符串表示成功，其他值表示失败，取值请参考 <a href="https://cloud.tencent.com/document/product/862/50369#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81">媒体处理类错误码</a> 列表。</p>
                     * 
                     */
                    void SetErrCodeExt(const std::string& _errCodeExt);

                    /**
                     * 判断参数 ErrCodeExt 是否已赋值
                     * @return ErrCodeExt 是否已赋值
                     * 
                     */
                    bool ErrCodeExtHasBeenSet() const;

                    /**
                     * 获取<p>错误信息。</p>
                     * @return Message <p>错误信息。</p>
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置<p>错误信息。</p>
                     * @param _message <p>错误信息。</p>
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取<p>翻译任务输出信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TransTextTask <p>翻译任务输出信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SmartSubtitleTaskTransTextResultOutput GetTransTextTask() const;

                    /**
                     * 设置<p>翻译任务输出信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _transTextTask <p>翻译任务输出信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTransTextTask(const SmartSubtitleTaskTransTextResultOutput& _transTextTask);

                    /**
                     * 判断参数 TransTextTask 是否已赋值
                     * @return TransTextTask 是否已赋值
                     * 
                     */
                    bool TransTextTaskHasBeenSet() const;

                    /**
                     * 获取<p>语音全文识别任务输出信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AsrFullTextTask <p>语音全文识别任务输出信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SmartSubtitleTaskAsrFullTextResultOutput GetAsrFullTextTask() const;

                    /**
                     * 设置<p>语音全文识别任务输出信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _asrFullTextTask <p>语音全文识别任务输出信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAsrFullTextTask(const SmartSubtitleTaskAsrFullTextResultOutput& _asrFullTextTask);

                    /**
                     * 判断参数 AsrFullTextTask 是否已赋值
                     * @return AsrFullTextTask 是否已赋值
                     * 
                     */
                    bool AsrFullTextTaskHasBeenSet() const;

                private:

                    /**
                     * <p>任务进度。</p>
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * <p>任务状态，有 PROCESSING，SUCCESS，WAITING 和 FAIL 四种。</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>错误码，空字符串表示成功，其他值表示失败，取值请参考 <a href="https://cloud.tencent.com/document/product/862/50369#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81">媒体处理类错误码</a> 列表。</p>
                     */
                    std::string m_errCodeExt;
                    bool m_errCodeExtHasBeenSet;

                    /**
                     * <p>错误信息。</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>翻译任务输出信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SmartSubtitleTaskTransTextResultOutput m_transTextTask;
                    bool m_transTextTaskHasBeenSet;

                    /**
                     * <p>语音全文识别任务输出信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SmartSubtitleTaskAsrFullTextResultOutput m_asrFullTextTask;
                    bool m_asrFullTextTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLETASKBATCHOUTPUT_H_
