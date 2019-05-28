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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PULLFILETASK_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PULLFILETASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 视频转拉任务信息
                */
                class PullFileTask : public AbstractModel
                {
                public:
                    PullFileTask();
                    ~PullFileTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转拉上传任务 ID。
                     * @return TaskId 转拉上传任务 ID。
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置转拉上传任务 ID。
                     * @param TaskId 转拉上传任务 ID。
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取错误码
<li>0：成功；</li>
<li>其他值：失败。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrCode 错误码
<li>0：成功；</li>
<li>其他值：失败。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置错误码
<li>0：成功；</li>
<li>其他值：失败。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ErrCode 错误码
<li>0：成功；</li>
<li>其他值：失败。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取错误信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Message 错误信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置错误信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Message 错误信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取转拉上传完成后生成的视频 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileId 转拉上传完成后生成的视频 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置转拉上传完成后生成的视频 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FileId 转拉上传完成后生成的视频 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取转拉上传完成后生成的播放地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileUrl 转拉上传完成后生成的播放地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置转拉上传完成后生成的播放地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FileUrl 转拉上传完成后生成的播放地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFileUrl(const std::string& _fileUrl);

                    /**
                     * 判断参数 FileUrl 是否已赋值
                     * @return FileUrl 是否已赋值
                     */
                    bool FileUrlHasBeenSet() const;

                    /**
                     * 获取若转拉上传时指定了视频处理流程，则该参数为流程任务 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcedureTaskId 若转拉上传时指定了视频处理流程，则该参数为流程任务 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProcedureTaskId() const;

                    /**
                     * 设置若转拉上传时指定了视频处理流程，则该参数为流程任务 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProcedureTaskId 若转拉上传时指定了视频处理流程，则该参数为流程任务 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProcedureTaskId(const std::string& _procedureTaskId);

                    /**
                     * 判断参数 ProcedureTaskId 是否已赋值
                     * @return ProcedureTaskId 是否已赋值
                     */
                    bool ProcedureTaskIdHasBeenSet() const;

                private:

                    /**
                     * 转拉上传任务 ID。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 错误码
<li>0：成功；</li>
<li>其他值：失败。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * 错误信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 转拉上传完成后生成的视频 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 转拉上传完成后生成的播放地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * 若转拉上传时指定了视频处理流程，则该参数为流程任务 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_procedureTaskId;
                    bool m_procedureTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PULLFILETASK_H_
