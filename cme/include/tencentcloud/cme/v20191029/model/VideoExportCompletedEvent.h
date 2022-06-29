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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_VIDEOEXPORTCOMPLETEDEVENT_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_VIDEOEXPORTCOMPLETEDEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/VideoEditProjectOutput.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 视频导出完成事件。
                */
                class VideoExportCompletedEvent : public AbstractModel
                {
                public:
                    VideoExportCompletedEvent();
                    ~VideoExportCompletedEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务 Id。
                     * @return TaskId 任务 Id。
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务 Id。
                     * @param TaskId 任务 Id。
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取任务状态，取值有：
<li>SUCCESS：成功；</li>
<li>FAIL：失败。</li>
                     * @return Status 任务状态，取值有：
<li>SUCCESS：成功；</li>
<li>FAIL：失败。</li>
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态，取值有：
<li>SUCCESS：成功；</li>
<li>FAIL：失败。</li>
                     * @param Status 任务状态，取值有：
<li>SUCCESS：成功；</li>
<li>FAIL：失败。</li>
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取错误码，取值有：
<li>0：成功；</li>
<li>其他值：失败。</li>
                     * @return ErrCode 错误码，取值有：
<li>0：成功；</li>
<li>其他值：失败。</li>
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置错误码，取值有：
<li>0：成功；</li>
<li>其他值：失败。</li>
                     * @param ErrCode 错误码，取值有：
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
                     * @return ErrMsg 错误信息。
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置错误信息。
                     * @param ErrMsg 错误信息。
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     */
                    bool ErrMsgHasBeenSet() const;

                    /**
                     * 获取任务输出。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Output 任务输出。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VideoEditProjectOutput GetOutput() const;

                    /**
                     * 设置任务输出。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Output 任务输出。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOutput(const VideoEditProjectOutput& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     */
                    bool OutputHasBeenSet() const;

                private:

                    /**
                     * 任务 Id。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务状态，取值有：
<li>SUCCESS：成功；</li>
<li>FAIL：失败。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 错误码，取值有：
<li>0：成功；</li>
<li>其他值：失败。</li>
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * 错误信息。
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * 任务输出。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VideoEditProjectOutput m_output;
                    bool m_outputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_VIDEOEXPORTCOMPLETEDEVENT_H_
