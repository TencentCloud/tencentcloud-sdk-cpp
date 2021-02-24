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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_COMPOSEMEDIATASK_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_COMPOSEMEDIATASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ComposeMediaTaskInput.h>
#include <tencentcloud/vod/v20180717/model/ComposeMediaTaskOutput.h>
#include <tencentcloud/vod/v20180717/model/MediaMetaData.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 制作媒体文件任务信息
                */
                class ComposeMediaTask : public AbstractModel
                {
                public:
                    ComposeMediaTask();
                    ~ComposeMediaTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务 ID。
                     * @return TaskId 任务 ID。
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务 ID。
                     * @param TaskId 任务 ID。
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取任务流状态，取值：
<li>PROCESSING：处理中；</li>
<li>FINISH：已完成。</li>
                     * @return Status 任务流状态，取值：
<li>PROCESSING：处理中；</li>
<li>FINISH：已完成。</li>
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务流状态，取值：
<li>PROCESSING：处理中；</li>
<li>FINISH：已完成。</li>
                     * @param Status 任务流状态，取值：
<li>PROCESSING：处理中；</li>
<li>FINISH：已完成。</li>
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取错误码
<li>0：成功；</li>
<li>其他值：失败。</li>
                     * @return ErrCode 错误码
<li>0：成功；</li>
<li>其他值：失败。</li>
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置错误码
<li>0：成功；</li>
<li>其他值：失败。</li>
                     * @param ErrCode 错误码
<li>0：成功；</li>
<li>其他值：失败。</li>
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取错误信息。
                     * @return Message 错误信息。
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置错误信息。
                     * @param Message 错误信息。
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取制作媒体文件任务的输入。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Input 制作媒体文件任务的输入。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ComposeMediaTaskInput GetInput() const;

                    /**
                     * 设置制作媒体文件任务的输入。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Input 制作媒体文件任务的输入。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInput(const ComposeMediaTaskInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取制作媒体文件任务的输出。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Output 制作媒体文件任务的输出。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ComposeMediaTaskOutput GetOutput() const;

                    /**
                     * 设置制作媒体文件任务的输出。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Output 制作媒体文件任务的输出。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOutput(const ComposeMediaTaskOutput& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取原始视频的元信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetaData 原始视频的元信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaMetaData GetMetaData() const;

                    /**
                     * 设置原始视频的元信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MetaData 原始视频的元信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMetaData(const MediaMetaData& _metaData);

                    /**
                     * 判断参数 MetaData 是否已赋值
                     * @return MetaData 是否已赋值
                     */
                    bool MetaDataHasBeenSet() const;

                private:

                    /**
                     * 任务 ID。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务流状态，取值：
<li>PROCESSING：处理中；</li>
<li>FINISH：已完成。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 错误码
<li>0：成功；</li>
<li>其他值：失败。</li>
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * 错误信息。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 制作媒体文件任务的输入。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ComposeMediaTaskInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * 制作媒体文件任务的输出。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ComposeMediaTaskOutput m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * 原始视频的元信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_COMPOSEMEDIATASK_H_
