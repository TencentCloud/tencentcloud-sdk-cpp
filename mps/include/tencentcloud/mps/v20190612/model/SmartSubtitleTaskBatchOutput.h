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
                     * 获取任务进度。
                     * @return Progress 任务进度。
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 设置任务进度。
                     * @param _progress 任务进度。
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
                     * 获取任务状态，有 PROCESSING，SUCCESS 和 FAIL 三种。
                     * @return Status 任务状态，有 PROCESSING，SUCCESS 和 FAIL 三种。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态，有 PROCESSING，SUCCESS 和 FAIL 三种。
                     * @param _status 任务状态，有 PROCESSING，SUCCESS 和 FAIL 三种。
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
                     * 获取错误码，空字符串表示成功，其他值表示失败，取值请参考 [媒体处理类错误码](https://cloud.tencent.com/document/product/862/50369#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81) 列表。
                     * @return ErrCodeExt 错误码，空字符串表示成功，其他值表示失败，取值请参考 [媒体处理类错误码](https://cloud.tencent.com/document/product/862/50369#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81) 列表。
                     * 
                     */
                    std::string GetErrCodeExt() const;

                    /**
                     * 设置错误码，空字符串表示成功，其他值表示失败，取值请参考 [媒体处理类错误码](https://cloud.tencent.com/document/product/862/50369#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81) 列表。
                     * @param _errCodeExt 错误码，空字符串表示成功，其他值表示失败，取值请参考 [媒体处理类错误码](https://cloud.tencent.com/document/product/862/50369#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81) 列表。
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
                     * 获取错误信息。
                     * @return Message 错误信息。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置错误信息。
                     * @param _message 错误信息。
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
                     * 获取翻译任务输出信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TransTextTask 翻译任务输出信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SmartSubtitleTaskTransTextResultOutput GetTransTextTask() const;

                    /**
                     * 设置翻译任务输出信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _transTextTask 翻译任务输出信息。
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
                     * 获取语音全文识别任务输出信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AsrFullTextTask 语音全文识别任务输出信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SmartSubtitleTaskAsrFullTextResultOutput GetAsrFullTextTask() const;

                    /**
                     * 设置语音全文识别任务输出信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _asrFullTextTask 语音全文识别任务输出信息。
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
                     * 任务进度。
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 任务状态，有 PROCESSING，SUCCESS 和 FAIL 三种。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 错误码，空字符串表示成功，其他值表示失败，取值请参考 [媒体处理类错误码](https://cloud.tencent.com/document/product/862/50369#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81) 列表。
                     */
                    std::string m_errCodeExt;
                    bool m_errCodeExtHasBeenSet;

                    /**
                     * 错误信息。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 翻译任务输出信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SmartSubtitleTaskTransTextResultOutput m_transTextTask;
                    bool m_transTextTaskHasBeenSet;

                    /**
                     * 语音全文识别任务输出信息。
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
