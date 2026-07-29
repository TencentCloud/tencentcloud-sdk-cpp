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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_HEALTHREPORTTASK_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_HEALTHREPORTTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/InstanceBasicInfo.h>
#include <tencentcloud/dbbrain/v20210527/model/HealthStatus.h>
#include <tencentcloud/dbbrain/v20210527/model/TagInfo.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * 健康报告任务详情。
                */
                class HealthReportTask : public AbstractModel
                {
                public:
                    HealthReportTask();
                    ~HealthReportTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>异步任务请求 ID。</p>
                     * @return AsyncRequestId <p>异步任务请求 ID。</p>
                     * 
                     */
                    int64_t GetAsyncRequestId() const;

                    /**
                     * 设置<p>异步任务请求 ID。</p>
                     * @param _asyncRequestId <p>异步任务请求 ID。</p>
                     * 
                     */
                    void SetAsyncRequestId(const int64_t& _asyncRequestId);

                    /**
                     * 判断参数 AsyncRequestId 是否已赋值
                     * @return AsyncRequestId 是否已赋值
                     * 
                     */
                    bool AsyncRequestIdHasBeenSet() const;

                    /**
                     * 获取<p>任务的触发来源，支持的取值包括：&quot;DAILY_INSPECTION&quot; - 实例巡检；&quot;SCHEDULED&quot; - 定时生成；&quot;MANUAL&quot; - 手动触发。</p>
                     * @return Source <p>任务的触发来源，支持的取值包括：&quot;DAILY_INSPECTION&quot; - 实例巡检；&quot;SCHEDULED&quot; - 定时生成；&quot;MANUAL&quot; - 手动触发。</p>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>任务的触发来源，支持的取值包括：&quot;DAILY_INSPECTION&quot; - 实例巡检；&quot;SCHEDULED&quot; - 定时生成；&quot;MANUAL&quot; - 手动触发。</p>
                     * @param _source <p>任务的触发来源，支持的取值包括：&quot;DAILY_INSPECTION&quot; - 实例巡检；&quot;SCHEDULED&quot; - 定时生成；&quot;MANUAL&quot; - 手动触发。</p>
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
                     * 获取<p>任务完成进度，单位%。</p>
                     * @return Progress <p>任务完成进度，单位%。</p>
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置<p>任务完成进度，单位%。</p>
                     * @param _progress <p>任务完成进度，单位%。</p>
                     * 
                     */
                    void SetProgress(const int64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取<p>任务创建时间，如“2025-09-30 12:13:14”。</p>
                     * @return CreateTime <p>任务创建时间，如“2025-09-30 12:13:14”。</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>任务创建时间，如“2025-09-30 12:13:14”。</p>
                     * @param _createTime <p>任务创建时间，如“2025-09-30 12:13:14”。</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>任务开始执行时间，如“2025-09-30 13:13:14”。</p>
                     * @return StartTime <p>任务开始执行时间，如“2025-09-30 13:13:14”。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>任务开始执行时间，如“2025-09-30 13:13:14”。</p>
                     * @param _startTime <p>任务开始执行时间，如“2025-09-30 13:13:14”。</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>任务完成执行时间，如“2025-09-30 14:13:14”。</p>
                     * @return EndTime <p>任务完成执行时间，如“2025-09-30 14:13:14”。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>任务完成执行时间，如“2025-09-30 14:13:14”。</p>
                     * @param _endTime <p>任务完成执行时间，如“2025-09-30 14:13:14”。</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>任务所属实例的基础信息。</p>
                     * @return InstanceInfo <p>任务所属实例的基础信息。</p>
                     * 
                     */
                    InstanceBasicInfo GetInstanceInfo() const;

                    /**
                     * 设置<p>任务所属实例的基础信息。</p>
                     * @param _instanceInfo <p>任务所属实例的基础信息。</p>
                     * 
                     */
                    void SetInstanceInfo(const InstanceBasicInfo& _instanceInfo);

                    /**
                     * 判断参数 InstanceInfo 是否已赋值
                     * @return InstanceInfo 是否已赋值
                     * 
                     */
                    bool InstanceInfoHasBeenSet() const;

                    /**
                     * 获取<p>健康报告中的健康信息。</p>
                     * @return HealthStatus <p>健康报告中的健康信息。</p>
                     * 
                     */
                    HealthStatus GetHealthStatus() const;

                    /**
                     * 设置<p>健康报告中的健康信息。</p>
                     * @param _healthStatus <p>健康报告中的健康信息。</p>
                     * 
                     */
                    void SetHealthStatus(const HealthStatus& _healthStatus);

                    /**
                     * 判断参数 HealthStatus 是否已赋值
                     * @return HealthStatus 是否已赋值
                     * 
                     */
                    bool HealthStatusHasBeenSet() const;

                    /**
                     * 获取<p>任务所属实例的标签信息</p>
                     * @return Tags <p>任务所属实例的标签信息</p>
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置<p>任务所属实例的标签信息</p>
                     * @param _tags <p>任务所属实例的标签信息</p>
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>异步任务请求 ID。</p>
                     */
                    int64_t m_asyncRequestId;
                    bool m_asyncRequestIdHasBeenSet;

                    /**
                     * <p>任务的触发来源，支持的取值包括：&quot;DAILY_INSPECTION&quot; - 实例巡检；&quot;SCHEDULED&quot; - 定时生成；&quot;MANUAL&quot; - 手动触发。</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>任务完成进度，单位%。</p>
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * <p>任务创建时间，如“2025-09-30 12:13:14”。</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>任务开始执行时间，如“2025-09-30 13:13:14”。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>任务完成执行时间，如“2025-09-30 14:13:14”。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>任务所属实例的基础信息。</p>
                     */
                    InstanceBasicInfo m_instanceInfo;
                    bool m_instanceInfoHasBeenSet;

                    /**
                     * <p>健康报告中的健康信息。</p>
                     */
                    HealthStatus m_healthStatus;
                    bool m_healthStatusHasBeenSet;

                    /**
                     * <p>任务所属实例的标签信息</p>
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_HEALTHREPORTTASK_H_
