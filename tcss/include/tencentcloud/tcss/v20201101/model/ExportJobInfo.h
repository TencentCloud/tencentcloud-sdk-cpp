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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_EXPORTJOBINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_EXPORTJOBINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 导出任务详情
                */
                class ExportJobInfo : public AbstractModel
                {
                public:
                    ExportJobInfo();
                    ~ExportJobInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务ID
                     * @return JobID 任务ID
                     * 
                     */
                    std::string GetJobID() const;

                    /**
                     * 设置任务ID
                     * @param _jobID 任务ID
                     * 
                     */
                    void SetJobID(const std::string& _jobID);

                    /**
                     * 判断参数 JobID 是否已赋值
                     * @return JobID 是否已赋值
                     * 
                     */
                    bool JobIDHasBeenSet() const;

                    /**
                     * 获取任务名称
                     * @return JobName 任务名称
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置任务名称
                     * @param _jobName 任务名称
                     * 
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     * 
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取来源
                     * @return Source 来源
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置来源
                     * @param _source 来源
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取导出状态
                     * @return ExportStatus 导出状态
                     * 
                     */
                    std::string GetExportStatus() const;

                    /**
                     * 设置导出状态
                     * @param _exportStatus 导出状态
                     * 
                     */
                    void SetExportStatus(const std::string& _exportStatus);

                    /**
                     * 判断参数 ExportStatus 是否已赋值
                     * @return ExportStatus 是否已赋值
                     * 
                     */
                    bool ExportStatusHasBeenSet() const;

                    /**
                     * 获取导出进度
                     * @return ExportProgress 导出进度
                     * 
                     */
                    int64_t GetExportProgress() const;

                    /**
                     * 设置导出进度
                     * @param _exportProgress 导出进度
                     * 
                     */
                    void SetExportProgress(const int64_t& _exportProgress);

                    /**
                     * 判断参数 ExportProgress 是否已赋值
                     * @return ExportProgress 是否已赋值
                     * 
                     */
                    bool ExportProgressHasBeenSet() const;

                    /**
                     * 获取失败原因
                     * @return FailureMsg 失败原因
                     * 
                     */
                    std::string GetFailureMsg() const;

                    /**
                     * 设置失败原因
                     * @param _failureMsg 失败原因
                     * 
                     */
                    void SetFailureMsg(const std::string& _failureMsg);

                    /**
                     * 判断参数 FailureMsg 是否已赋值
                     * @return FailureMsg 是否已赋值
                     * 
                     */
                    bool FailureMsgHasBeenSet() const;

                    /**
                     * 获取超时时间
                     * @return Timeout 超时时间
                     * 
                     */
                    std::string GetTimeout() const;

                    /**
                     * 设置超时时间
                     * @param _timeout 超时时间
                     * 
                     */
                    void SetTimeout(const std::string& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取插入时间
                     * @return InsertTime 插入时间
                     * 
                     */
                    std::string GetInsertTime() const;

                    /**
                     * 设置插入时间
                     * @param _insertTime 插入时间
                     * 
                     */
                    void SetInsertTime(const std::string& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     * 
                     */
                    bool InsertTimeHasBeenSet() const;

                private:

                    /**
                     * 任务ID
                     */
                    std::string m_jobID;
                    bool m_jobIDHasBeenSet;

                    /**
                     * 任务名称
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * 来源
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 导出状态
                     */
                    std::string m_exportStatus;
                    bool m_exportStatusHasBeenSet;

                    /**
                     * 导出进度
                     */
                    int64_t m_exportProgress;
                    bool m_exportProgressHasBeenSet;

                    /**
                     * 失败原因
                     */
                    std::string m_failureMsg;
                    bool m_failureMsgHasBeenSet;

                    /**
                     * 超时时间
                     */
                    std::string m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * 插入时间
                     */
                    std::string m_insertTime;
                    bool m_insertTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_EXPORTJOBINFO_H_
