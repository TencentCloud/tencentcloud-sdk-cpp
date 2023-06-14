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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_TASKBASEINFO_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_TASKBASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 任务基础信息。
                */
                class TaskBaseInfo : public AbstractModel
                {
                public:
                    TaskBaseInfo();
                    ~TaskBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务 Id。
                     * @return TaskId 任务 Id。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务 Id。
                     * @param _taskId 任务 Id。
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
                     * 获取任务类型，取值有：
<li>VIDEO_EDIT_PROJECT_EXPORT：项目导出。</li>
                     * @return TaskType 任务类型，取值有：
<li>VIDEO_EDIT_PROJECT_EXPORT：项目导出。</li>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置任务类型，取值有：
<li>VIDEO_EDIT_PROJECT_EXPORT：项目导出。</li>
                     * @param _taskType 任务类型，取值有：
<li>VIDEO_EDIT_PROJECT_EXPORT：项目导出。</li>
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

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
                     * 设置任务状态，取值有：
<li>PROCESSING：处理中：</li>
<li>SUCCESS：成功；</li>
<li>FAIL：失败。</li>
                     * @param _status 任务状态，取值有：
<li>PROCESSING：处理中：</li>
<li>SUCCESS：成功；</li>
<li>FAIL：失败。</li>
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
                     * 获取任务进度，取值为：0~100。
                     * @return Progress 任务进度，取值为：0~100。
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 设置任务进度，取值为：0~100。
                     * @param _progress 任务进度，取值为：0~100。
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
                     * 获取错误码。
<li>0：成功；</li>
<li>其他值：失败。</li>
                     * @return ErrCode 错误码。
<li>0：成功；</li>
<li>其他值：失败。</li>
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置错误码。
<li>0：成功；</li>
<li>其他值：失败。</li>
                     * @param _errCode 错误码。
<li>0：成功；</li>
<li>其他值：失败。</li>
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
                     * 获取错误信息。
                     * @return ErrMsg 错误信息。
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置错误信息。
                     * @param _errMsg 错误信息。
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                    /**
                     * 获取创建时间，格式按照 ISO 8601 标准表示。
                     * @return CreateTime 创建时间，格式按照 ISO 8601 标准表示。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间，格式按照 ISO 8601 标准表示。
                     * @param _createTime 创建时间，格式按照 ISO 8601 标准表示。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 任务 Id。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务类型，取值有：
<li>VIDEO_EDIT_PROJECT_EXPORT：项目导出。</li>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

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
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * 错误信息。
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

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

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_TASKBASEINFO_H_
