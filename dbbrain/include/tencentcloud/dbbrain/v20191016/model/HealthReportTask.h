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

#ifndef TENCENTCLOUD_DBBRAIN_V20191016_MODEL_HEALTHREPORTTASK_H_
#define TENCENTCLOUD_DBBRAIN_V20191016_MODEL_HEALTHREPORTTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20191016/model/InstanceBasicInfo.h>
#include <tencentcloud/dbbrain/v20191016/model/HealthStatus.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20191016
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
                     * 获取异步任务请求 ID。
                     * @return AsyncRequestId 异步任务请求 ID。
                     * 
                     */
                    int64_t GetAsyncRequestId() const;

                    /**
                     * 设置异步任务请求 ID。
                     * @param _asyncRequestId 异步任务请求 ID。
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
                     * 获取任务的触发来源，支持的取值包括："DAILY_INSPECTION" - 实例巡检；"SCHEDULED" - 定时生成；"MANUAL" - 手动触发。
                     * @return Source 任务的触发来源，支持的取值包括："DAILY_INSPECTION" - 实例巡检；"SCHEDULED" - 定时生成；"MANUAL" - 手动触发。
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置任务的触发来源，支持的取值包括："DAILY_INSPECTION" - 实例巡检；"SCHEDULED" - 定时生成；"MANUAL" - 手动触发。
                     * @param _source 任务的触发来源，支持的取值包括："DAILY_INSPECTION" - 实例巡检；"SCHEDULED" - 定时生成；"MANUAL" - 手动触发。
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
                     * 获取任务完成进度，单位%。
                     * @return Progress 任务完成进度，单位%。
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置任务完成进度，单位%。
                     * @param _progress 任务完成进度，单位%。
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
                     * 获取任务创建时间。
                     * @return CreateTime 任务创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置任务创建时间。
                     * @param _createTime 任务创建时间。
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
                     * 获取任务开始执行时间。
                     * @return StartTime 任务开始执行时间。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置任务开始执行时间。
                     * @param _startTime 任务开始执行时间。
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
                     * 获取任务完成执行时间。
                     * @return EndTime 任务完成执行时间。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置任务完成执行时间。
                     * @param _endTime 任务完成执行时间。
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
                     * 获取任务所属实例的基础信息。
                     * @return InstanceInfo 任务所属实例的基础信息。
                     * 
                     */
                    InstanceBasicInfo GetInstanceInfo() const;

                    /**
                     * 设置任务所属实例的基础信息。
                     * @param _instanceInfo 任务所属实例的基础信息。
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
                     * 获取健康报告中的健康信息。
                     * @return HealthStatus 健康报告中的健康信息。
                     * 
                     */
                    HealthStatus GetHealthStatus() const;

                    /**
                     * 设置健康报告中的健康信息。
                     * @param _healthStatus 健康报告中的健康信息。
                     * 
                     */
                    void SetHealthStatus(const HealthStatus& _healthStatus);

                    /**
                     * 判断参数 HealthStatus 是否已赋值
                     * @return HealthStatus 是否已赋值
                     * 
                     */
                    bool HealthStatusHasBeenSet() const;

                private:

                    /**
                     * 异步任务请求 ID。
                     */
                    int64_t m_asyncRequestId;
                    bool m_asyncRequestIdHasBeenSet;

                    /**
                     * 任务的触发来源，支持的取值包括："DAILY_INSPECTION" - 实例巡检；"SCHEDULED" - 定时生成；"MANUAL" - 手动触发。
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 任务完成进度，单位%。
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 任务创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 任务开始执行时间。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 任务完成执行时间。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 任务所属实例的基础信息。
                     */
                    InstanceBasicInfo m_instanceInfo;
                    bool m_instanceInfoHasBeenSet;

                    /**
                     * 健康报告中的健康信息。
                     */
                    HealthStatus m_healthStatus;
                    bool m_healthStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20191016_MODEL_HEALTHREPORTTASK_H_
