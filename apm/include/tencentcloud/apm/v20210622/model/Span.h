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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_SPAN_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_SPAN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/SpanLog.h>
#include <tencentcloud/apm/v20210622/model/SpanTag.h>
#include <tencentcloud/apm/v20210622/model/SpanProcess.h>
#include <tencentcloud/apm/v20210622/model/SpanReference.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * Span 对象
                */
                class Span : public AbstractModel
                {
                public:
                    Span();
                    ~Span() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Trace ID
                     * @return TraceID Trace ID
                     * 
                     */
                    std::string GetTraceID() const;

                    /**
                     * 设置Trace ID
                     * @param _traceID Trace ID
                     * 
                     */
                    void SetTraceID(const std::string& _traceID);

                    /**
                     * 判断参数 TraceID 是否已赋值
                     * @return TraceID 是否已赋值
                     * 
                     */
                    bool TraceIDHasBeenSet() const;

                    /**
                     * 获取日志
                     * @return Logs 日志
                     * 
                     */
                    std::vector<SpanLog> GetLogs() const;

                    /**
                     * 设置日志
                     * @param _logs 日志
                     * 
                     */
                    void SetLogs(const std::vector<SpanLog>& _logs);

                    /**
                     * 判断参数 Logs 是否已赋值
                     * @return Logs 是否已赋值
                     * 
                     */
                    bool LogsHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return Tags 标签
                     * 
                     */
                    std::vector<SpanTag> GetTags() const;

                    /**
                     * 设置标签
                     * @param _tags 标签
                     * 
                     */
                    void SetTags(const std::vector<SpanTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取上报应用服务信息
                     * @return Process 上报应用服务信息
                     * 
                     */
                    SpanProcess GetProcess() const;

                    /**
                     * 设置上报应用服务信息
                     * @param _process 上报应用服务信息
                     * 
                     */
                    void SetProcess(const SpanProcess& _process);

                    /**
                     * 判断参数 Process 是否已赋值
                     * @return Process 是否已赋值
                     * 
                     */
                    bool ProcessHasBeenSet() const;

                    /**
                     * 获取产生时间戳(毫秒)
                     * @return Timestamp 产生时间戳(毫秒)
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置产生时间戳(毫秒)
                     * @param _timestamp 产生时间戳(毫秒)
                     * 
                     */
                    void SetTimestamp(const int64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取Span 名称
                     * @return OperationName Span 名称
                     * 
                     */
                    std::string GetOperationName() const;

                    /**
                     * 设置Span 名称
                     * @param _operationName Span 名称
                     * 
                     */
                    void SetOperationName(const std::string& _operationName);

                    /**
                     * 判断参数 OperationName 是否已赋值
                     * @return OperationName 是否已赋值
                     * 
                     */
                    bool OperationNameHasBeenSet() const;

                    /**
                     * 获取关联关系
                     * @return References 关联关系
                     * 
                     */
                    std::vector<SpanReference> GetReferences() const;

                    /**
                     * 设置关联关系
                     * @param _references 关联关系
                     * 
                     */
                    void SetReferences(const std::vector<SpanReference>& _references);

                    /**
                     * 判断参数 References 是否已赋值
                     * @return References 是否已赋值
                     * 
                     */
                    bool ReferencesHasBeenSet() const;

                    /**
                     * 获取产生时间戳(微秒)
                     * @return StartTime 产生时间戳(微秒)
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置产生时间戳(微秒)
                     * @param _startTime 产生时间戳(微秒)
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取持续耗时(微妙)
                     * @return Duration 持续耗时(微妙)
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置持续耗时(微妙)
                     * @param _duration 持续耗时(微妙)
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取Span ID
                     * @return SpanID Span ID
                     * 
                     */
                    std::string GetSpanID() const;

                    /**
                     * 设置Span ID
                     * @param _spanID Span ID
                     * 
                     */
                    void SetSpanID(const std::string& _spanID);

                    /**
                     * 判断参数 SpanID 是否已赋值
                     * @return SpanID 是否已赋值
                     * 
                     */
                    bool SpanIDHasBeenSet() const;

                    /**
                     * 获取产生时间戳(毫秒)
                     * @return StartTimeMillis 产生时间戳(毫秒)
                     * 
                     */
                    int64_t GetStartTimeMillis() const;

                    /**
                     * 设置产生时间戳(毫秒)
                     * @param _startTimeMillis 产生时间戳(毫秒)
                     * 
                     */
                    void SetStartTimeMillis(const int64_t& _startTimeMillis);

                    /**
                     * 判断参数 StartTimeMillis 是否已赋值
                     * @return StartTimeMillis 是否已赋值
                     * 
                     */
                    bool StartTimeMillisHasBeenSet() const;

                    /**
                     * 获取Parent Span ID
                     * @return ParentSpanID Parent Span ID
                     * 
                     */
                    std::string GetParentSpanID() const;

                    /**
                     * 设置Parent Span ID
                     * @param _parentSpanID Parent Span ID
                     * 
                     */
                    void SetParentSpanID(const std::string& _parentSpanID);

                    /**
                     * 判断参数 ParentSpanID 是否已赋值
                     * @return ParentSpanID 是否已赋值
                     * 
                     */
                    bool ParentSpanIDHasBeenSet() const;

                private:

                    /**
                     * Trace ID
                     */
                    std::string m_traceID;
                    bool m_traceIDHasBeenSet;

                    /**
                     * 日志
                     */
                    std::vector<SpanLog> m_logs;
                    bool m_logsHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<SpanTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 上报应用服务信息
                     */
                    SpanProcess m_process;
                    bool m_processHasBeenSet;

                    /**
                     * 产生时间戳(毫秒)
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * Span 名称
                     */
                    std::string m_operationName;
                    bool m_operationNameHasBeenSet;

                    /**
                     * 关联关系
                     */
                    std::vector<SpanReference> m_references;
                    bool m_referencesHasBeenSet;

                    /**
                     * 产生时间戳(微秒)
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 持续耗时(微妙)
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Span ID
                     */
                    std::string m_spanID;
                    bool m_spanIDHasBeenSet;

                    /**
                     * 产生时间戳(毫秒)
                     */
                    int64_t m_startTimeMillis;
                    bool m_startTimeMillisHasBeenSet;

                    /**
                     * Parent Span ID
                     */
                    std::string m_parentSpanID;
                    bool m_parentSpanIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_SPAN_H_
