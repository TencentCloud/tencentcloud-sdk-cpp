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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_EDREXPORTJOBITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_EDREXPORTJOBITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * EDR任务列表
                */
                class EDRExportJobItem : public AbstractModel
                {
                public:
                    EDRExportJobItem();
                    ~EDRExportJobItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务ID</p>
                     * @return JobId <p>任务ID</p>
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置<p>任务ID</p>
                     * @param _jobId <p>任务ID</p>
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取<p>任务名</p>
                     * @return JobName <p>任务名</p>
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置<p>任务名</p>
                     * @param _jobName <p>任务名</p>
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
                     * 获取<p>数据源</p>
                     * @return Source <p>数据源</p>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>数据源</p>
                     * @param _source <p>数据源</p>
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
                     * 获取<p>导出状态</p>
                     * @return ExportStatus <p>导出状态</p>
                     * 
                     */
                    std::string GetExportStatus() const;

                    /**
                     * 设置<p>导出状态</p>
                     * @param _exportStatus <p>导出状态</p>
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
                     * 获取<p>导出进度</p>
                     * @return ExportProgress <p>导出进度</p>
                     * 
                     */
                    int64_t GetExportProgress() const;

                    /**
                     * 设置<p>导出进度</p>
                     * @param _exportProgress <p>导出进度</p>
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
                     * 获取<p>失败信息</p>
                     * @return FailureMsg <p>失败信息</p>
                     * 
                     */
                    std::string GetFailureMsg() const;

                    /**
                     * 设置<p>失败信息</p>
                     * @param _failureMsg <p>失败信息</p>
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
                     * 获取<p>超时时间</p>
                     * @return Timeout <p>超时时间</p>
                     * 
                     */
                    std::string GetTimeout() const;

                    /**
                     * 设置<p>超时时间</p>
                     * @param _timeout <p>超时时间</p>
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
                     * 获取<p>插入时间</p>
                     * @return InsertTime <p>插入时间</p>
                     * 
                     */
                    std::string GetInsertTime() const;

                    /**
                     * 设置<p>插入时间</p>
                     * @param _insertTime <p>插入时间</p>
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
                     * <p>任务ID</p>
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * <p>任务名</p>
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * <p>数据源</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>导出状态</p>
                     */
                    std::string m_exportStatus;
                    bool m_exportStatusHasBeenSet;

                    /**
                     * <p>导出进度</p>
                     */
                    int64_t m_exportProgress;
                    bool m_exportProgressHasBeenSet;

                    /**
                     * <p>失败信息</p>
                     */
                    std::string m_failureMsg;
                    bool m_failureMsgHasBeenSet;

                    /**
                     * <p>超时时间</p>
                     */
                    std::string m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>插入时间</p>
                     */
                    std::string m_insertTime;
                    bool m_insertTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_EDREXPORTJOBITEM_H_
