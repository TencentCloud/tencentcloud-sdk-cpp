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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBETASKDETAILRESPONSE_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBETASKDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeTaskDetail返回参数结构体
                */
                class DescribeTaskDetailResponse : public AbstractModel
                {
                public:
                    DescribeTaskDetailResponse();
                    ~DescribeTaskDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务状态，取值有：
<li>PROCESSING：处理中：</li>
<li>SUCCESS：成功；</li>
<li>FAIL：失败。</li>
                     * @return Status 任务状态，取值有：
<li>PROCESSING：处理中：</li>
<li>SUCCESS：成功；</li>
<li>FAIL：失败。</li>
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
                     * 获取任务进度，取值为：0~100。
                     * @return Progress 任务进度，取值为：0~100。
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取错误码。
<li>0：成功；</li>
<li>其他值：失败。</li>
                     * @return ErrCode 错误码。
<li>0：成功；</li>
<li>其他值：失败。</li>
                     * 
                     */
                    uint64_t GetErrCode() const;

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取错误信息。
                     * @return ErrMsg 错误信息。
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
                     * 获取任务类型，取值有：
<li>VIDEO_EDIT_PROJECT_EXPORT：视频编辑项目导出。</li>
                     * @return TaskType 任务类型，取值有：
<li>VIDEO_EDIT_PROJECT_EXPORT：视频编辑项目导出。</li>
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
                     * 获取导出项目输出信息。仅当 TaskType 为 VIDEO_EDIT_PROJECT_EXPORT 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VideoEditProjectOutput 导出项目输出信息。仅当 TaskType 为 VIDEO_EDIT_PROJECT_EXPORT 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    VideoEditProjectOutput GetVideoEditProjectOutput() const;

                    /**
                     * 判断参数 VideoEditProjectOutput 是否已赋值
                     * @return VideoEditProjectOutput 是否已赋值
                     * 
                     */
                    bool VideoEditProjectOutputHasBeenSet() const;

                    /**
                     * 获取创建时间，格式按照 ISO 8601 标准表示。
                     * @return CreateTime 创建时间，格式按照 ISO 8601 标准表示。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 任务状态，取值有：
<li>PROCESSING：处理中：</li>
<li>SUCCESS：成功；</li>
<li>FAIL：失败。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务进度，取值为：0~100。
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 错误码。
<li>0：成功；</li>
<li>其他值：失败。</li>
                     */
                    uint64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * 错误信息。
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * 任务类型，取值有：
<li>VIDEO_EDIT_PROJECT_EXPORT：视频编辑项目导出。</li>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 导出项目输出信息。仅当 TaskType 为 VIDEO_EDIT_PROJECT_EXPORT 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VideoEditProjectOutput m_videoEditProjectOutput;
                    bool m_videoEditProjectOutputHasBeenSet;

                    /**
                     * 创建时间，格式按照 ISO 8601 标准表示。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBETASKDETAILRESPONSE_H_
