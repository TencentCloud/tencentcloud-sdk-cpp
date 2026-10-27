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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DNATASK_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DNATASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/DNATaskOutput.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DNA查重估计任务信息。
                */
                class DNATask : public AbstractModel
                {
                public:
                    DNATask();
                    ~DNATask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务 ID。</p>
                     * @return TaskId <p>任务 ID。</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务 ID。</p>
                     * @param _taskId <p>任务 ID。</p>
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>任务状态。</p><p>枚举值：</p><ul><li>WAITING： 等待中</li><li>PROCESSING： 处理中</li><li>FINISH： 已完成</li></ul>
                     * @return Status <p>任务状态。</p><p>枚举值：</p><ul><li>WAITING： 等待中</li><li>PROCESSING： 处理中</li><li>FINISH： 已完成</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>任务状态。</p><p>枚举值：</p><ul><li>WAITING： 等待中</li><li>PROCESSING： 处理中</li><li>FINISH： 已完成</li></ul>
                     * @param _status <p>任务状态。</p><p>枚举值：</p><ul><li>WAITING： 等待中</li><li>PROCESSING： 处理中</li><li>FINISH： 已完成</li></ul>
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
                     * 获取<p>错误码，0 表示成功，其他值表示失败：</p><p>40000：输入参数不合法，请检查输入参数；<br>60000：源文件错误（如视频数据损坏），请确认源文件是否正常；<br>70000：内部服务错误，建议重试。</p>
                     * @return ErrCode <p>错误码，0 表示成功，其他值表示失败：</p><p>40000：输入参数不合法，请检查输入参数；<br>60000：源文件错误（如视频数据损坏），请确认源文件是否正常；<br>70000：内部服务错误，建议重试。</p>
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置<p>错误码，0 表示成功，其他值表示失败：</p><p>40000：输入参数不合法，请检查输入参数；<br>60000：源文件错误（如视频数据损坏），请确认源文件是否正常；<br>70000：内部服务错误，建议重试。</p>
                     * @param _errCode <p>错误码，0 表示成功，其他值表示失败：</p><p>40000：输入参数不合法，请检查输入参数；<br>60000：源文件错误（如视频数据损坏），请确认源文件是否正常；<br>70000：内部服务错误，建议重试。</p>
                     * 
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取<p>错误码，空字符串表示成功，其他值表示失败，取值请参考 <a href="https://cloud.tencent.com/document/product/266/50368#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81">视频处理类错误码</a> 列表。</p>
                     * @return ErrCodeExt <p>错误码，空字符串表示成功，其他值表示失败，取值请参考 <a href="https://cloud.tencent.com/document/product/266/50368#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81">视频处理类错误码</a> 列表。</p>
                     * 
                     */
                    std::string GetErrCodeExt() const;

                    /**
                     * 设置<p>错误码，空字符串表示成功，其他值表示失败，取值请参考 <a href="https://cloud.tencent.com/document/product/266/50368#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81">视频处理类错误码</a> 列表。</p>
                     * @param _errCodeExt <p>错误码，空字符串表示成功，其他值表示失败，取值请参考 <a href="https://cloud.tencent.com/document/product/266/50368#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81">视频处理类错误码</a> 列表。</p>
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
                     * 获取<p>被检测的媒资 FileId。</p>
                     * @return FileId <p>被检测的媒资 FileId。</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>被检测的媒资 FileId。</p>
                     * @param _fileId <p>被检测的媒资 FileId。</p>
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取<p>查重命中列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Output <p>查重命中列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DNATaskOutput> GetOutput() const;

                    /**
                     * 设置<p>查重命中列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _output <p>查重命中列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutput(const std::vector<DNATaskOutput>& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                private:

                    /**
                     * <p>任务 ID。</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务状态。</p><p>枚举值：</p><ul><li>WAITING： 等待中</li><li>PROCESSING： 处理中</li><li>FINISH： 已完成</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>错误码，0 表示成功，其他值表示失败：</p><p>40000：输入参数不合法，请检查输入参数；<br>60000：源文件错误（如视频数据损坏），请确认源文件是否正常；<br>70000：内部服务错误，建议重试。</p>
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * <p>错误码，空字符串表示成功，其他值表示失败，取值请参考 <a href="https://cloud.tencent.com/document/product/266/50368#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81">视频处理类错误码</a> 列表。</p>
                     */
                    std::string m_errCodeExt;
                    bool m_errCodeExtHasBeenSet;

                    /**
                     * <p>错误信息。</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>被检测的媒资 FileId。</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>查重命中列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DNATaskOutput> m_output;
                    bool m_outputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DNATASK_H_
