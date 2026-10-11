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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_TRACEOVERVIEW_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_TRACEOVERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/ErrorSpan.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * Trace概览查询
                */
                class TraceOverview : public AbstractModel
                {
                public:
                    TraceOverview();
                    ~TraceOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>traceID调用状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>traceID调用状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>traceID调用状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>traceID调用状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>TraceId查询</p>
                     * @return TraceID <p>TraceId查询</p>
                     * 
                     */
                    std::string GetTraceID() const;

                    /**
                     * 设置<p>TraceId查询</p>
                     * @param _traceID <p>TraceId查询</p>
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
                     * 获取<p>错误信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorMsg <p>错误信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 设置<p>错误信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorMsg <p>错误信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorMsg(const std::string& _errorMsg);

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                    /**
                     * 获取<p>服务名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceName <p>服务名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置<p>服务名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceName <p>服务名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取<p>耗时</p>
                     * @return Duration <p>耗时</p>
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置<p>耗时</p>
                     * @param _duration <p>耗时</p>
                     * 
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取<p>接口名</p>
                     * @return Operation <p>接口名</p>
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置<p>接口名</p>
                     * @param _operation <p>接口名</p>
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取<p>开始时间（微秒）</p>
                     * @return StartTime <p>开始时间（微秒）</p>
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置<p>开始时间（微秒）</p>
                     * @param _startTime <p>开始时间（微秒）</p>
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>应用数</p>
                     * @return ApplicationCount <p>应用数</p>
                     * 
                     */
                    int64_t GetApplicationCount() const;

                    /**
                     * 设置<p>应用数</p>
                     * @param _applicationCount <p>应用数</p>
                     * 
                     */
                    void SetApplicationCount(const int64_t& _applicationCount);

                    /**
                     * 判断参数 ApplicationCount 是否已赋值
                     * @return ApplicationCount 是否已赋值
                     * 
                     */
                    bool ApplicationCountHasBeenSet() const;

                    /**
                     * 获取<p>异常Span列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorSpans <p>异常Span列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ErrorSpan> GetErrorSpans() const;

                    /**
                     * 设置<p>异常Span列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorSpans <p>异常Span列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorSpans(const std::vector<ErrorSpan>& _errorSpans);

                    /**
                     * 判断参数 ErrorSpans 是否已赋值
                     * @return ErrorSpans 是否已赋值
                     * 
                     */
                    bool ErrorSpansHasBeenSet() const;

                private:

                    /**
                     * <p>traceID调用状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>TraceId查询</p>
                     */
                    std::string m_traceID;
                    bool m_traceIDHasBeenSet;

                    /**
                     * <p>错误信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                    /**
                     * <p>服务名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * <p>耗时</p>
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>接口名</p>
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * <p>开始时间（微秒）</p>
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>应用数</p>
                     */
                    int64_t m_applicationCount;
                    bool m_applicationCountHasBeenSet;

                    /**
                     * <p>异常Span列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ErrorSpan> m_errorSpans;
                    bool m_errorSpansHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_TRACEOVERVIEW_H_
