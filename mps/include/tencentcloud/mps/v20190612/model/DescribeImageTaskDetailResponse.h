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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEIMAGETASKDETAILRESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEIMAGETASKDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ImageProcessTaskResult.h>
#include <tencentcloud/mps/v20190612/model/ImageTaskInput.h>
#include <tencentcloud/mps/v20190612/model/MediaInputInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeImageTaskDetail返回参数结构体
                */
                class DescribeImageTaskDetailResponse : public AbstractModel
                {
                public:
                    DescribeImageTaskDetailResponse();
                    ~DescribeImageTaskDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务类型，目前取值有：</p><li>WorkflowTask：工作流处理任务。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskType <p>任务类型，目前取值有：</p><li>WorkflowTask：工作流处理任务。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取<p>任务状态，取值：</p><li>WAITING：等待中；</li><li>PROCESSING：处理中；</li><li>FINISH：已完成。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>任务状态，取值：</p><li>WAITING：等待中；</li><li>PROCESSING：处理中；</li><li>FINISH：已完成。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>任务失败时的错误码。</p>
                     * @return ErrCode <p>任务失败时的错误码。</p>
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取<p>错误码，空字符串表示成功，其他值表示失败，取值请参考 <a href="https://cloud.tencent.com/document/product/862/50369#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81">媒体处理类错误码</a> 列表。</p>
                     * @return ErrMsg <p>错误码，空字符串表示成功，其他值表示失败，取值请参考 <a href="https://cloud.tencent.com/document/product/862/50369#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81">媒体处理类错误码</a> 列表。</p>
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                    /**
                     * 获取<p>任务异常Message。</p>
                     * @return Message <p>任务异常Message。</p>
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取<p>图片处理任务的执行状态与结果。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageProcessTaskResultSet <p>图片处理任务的执行状态与结果。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ImageProcessTaskResult> GetImageProcessTaskResultSet() const;

                    /**
                     * 判断参数 ImageProcessTaskResultSet 是否已赋值
                     * @return ImageProcessTaskResultSet 是否已赋值
                     * 
                     */
                    bool ImageProcessTaskResultSetHasBeenSet() const;

                    /**
                     * 获取<p>任务的创建时间，采用 <a href="https://cloud.tencent.com/document/product/862/37710#52">ISO 日期格式</a>。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>任务的创建时间，采用 <a href="https://cloud.tencent.com/document/product/862/37710#52">ISO 日期格式</a>。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>任务执行完毕的时间，采用 <a href="https://cloud.tencent.com/document/product/862/37710#52">ISO 日期格式</a>。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FinishTime <p>任务执行完毕的时间，采用 <a href="https://cloud.tencent.com/document/product/862/37710#52">ISO 日期格式</a>。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取<p>模板唯一标识。</p>
                     * @return Definition <p>模板唯一标识。</p>
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取<p>任务发起参数。</p>
                     * @return ImageTask <p>任务发起参数。</p>
                     * 
                     */
                    ImageTaskInput GetImageTask() const;

                    /**
                     * 判断参数 ImageTask 是否已赋值
                     * @return ImageTask 是否已赋值
                     * 
                     */
                    bool ImageTaskHasBeenSet() const;

                    /**
                     * 获取<p>图片任务输入信息。</p>
                     * @return InputInfo <p>图片任务输入信息。</p>
                     * 
                     */
                    MediaInputInfo GetInputInfo() const;

                    /**
                     * 判断参数 InputInfo 是否已赋值
                     * @return InputInfo 是否已赋值
                     * 
                     */
                    bool InputInfoHasBeenSet() const;

                private:

                    /**
                     * <p>任务类型，目前取值有：</p><li>WorkflowTask：工作流处理任务。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>任务状态，取值：</p><li>WAITING：等待中；</li><li>PROCESSING：处理中；</li><li>FINISH：已完成。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>任务失败时的错误码。</p>
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * <p>错误码，空字符串表示成功，其他值表示失败，取值请参考 <a href="https://cloud.tencent.com/document/product/862/50369#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81">媒体处理类错误码</a> 列表。</p>
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * <p>任务异常Message。</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>图片处理任务的执行状态与结果。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ImageProcessTaskResult> m_imageProcessTaskResultSet;
                    bool m_imageProcessTaskResultSetHasBeenSet;

                    /**
                     * <p>任务的创建时间，采用 <a href="https://cloud.tencent.com/document/product/862/37710#52">ISO 日期格式</a>。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>任务执行完毕的时间，采用 <a href="https://cloud.tencent.com/document/product/862/37710#52">ISO 日期格式</a>。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * <p>模板唯一标识。</p>
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>任务发起参数。</p>
                     */
                    ImageTaskInput m_imageTask;
                    bool m_imageTaskHasBeenSet;

                    /**
                     * <p>图片任务输入信息。</p>
                     */
                    MediaInputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEIMAGETASKDETAILRESPONSE_H_
