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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_EVENTRANKITEM_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_EVENTRANKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rum/v20210622/model/EventRankPoint.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 事件排行。Kind=error 填指纹字段；URL 排行填 URL/Fail/Duration。
                */
                class EventRankItem : public AbstractModel
                {
                public:
                    EventRankItem();
                    ~EventRankItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>错误指纹</p>
                     * @return Fingerprint <p>错误指纹</p>
                     * 
                     */
                    std::string GetFingerprint() const;

                    /**
                     * 设置<p>错误指纹</p>
                     * @param _fingerprint <p>错误指纹</p>
                     * 
                     */
                    void SetFingerprint(const std::string& _fingerprint);

                    /**
                     * 判断参数 Fingerprint 是否已赋值
                     * @return Fingerprint 是否已赋值
                     * 
                     */
                    bool FingerprintHasBeenSet() const;

                    /**
                     * 获取<p>事件类型</p>
                     * @return EventType <p>事件类型</p>
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置<p>事件类型</p>
                     * @param _eventType <p>事件类型</p>
                     * 
                     */
                    void SetEventType(const std::string& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取<p>崩溃类型</p>
                     * @return CrashType <p>崩溃类型</p>
                     * 
                     */
                    std::string GetCrashType() const;

                    /**
                     * 设置<p>崩溃类型</p>
                     * @param _crashType <p>崩溃类型</p>
                     * 
                     */
                    void SetCrashType(const std::string& _crashType);

                    /**
                     * 判断参数 CrashType 是否已赋值
                     * @return CrashType 是否已赋值
                     * 
                     */
                    bool CrashTypeHasBeenSet() const;

                    /**
                     * 获取<p>错误类型</p>
                     * @return ErrorType <p>错误类型</p>
                     * 
                     */
                    std::string GetErrorType() const;

                    /**
                     * 设置<p>错误类型</p>
                     * @param _errorType <p>错误类型</p>
                     * 
                     */
                    void SetErrorType(const std::string& _errorType);

                    /**
                     * 判断参数 ErrorType 是否已赋值
                     * @return ErrorType 是否已赋值
                     * 
                     */
                    bool ErrorTypeHasBeenSet() const;

                    /**
                     * 获取<p>错误值</p>
                     * @return ErrorValue <p>错误值</p>
                     * 
                     */
                    std::string GetErrorValue() const;

                    /**
                     * 设置<p>错误值</p>
                     * @param _errorValue <p>错误值</p>
                     * 
                     */
                    void SetErrorValue(const std::string& _errorValue);

                    /**
                     * 判断参数 ErrorValue 是否已赋值
                     * @return ErrorValue 是否已赋值
                     * 
                     */
                    bool ErrorValueHasBeenSet() const;

                    /**
                     * 获取<p>问题单 ID</p>
                     * @return IssueId <p>问题单 ID</p>
                     * 
                     */
                    std::string GetIssueId() const;

                    /**
                     * 设置<p>问题单 ID</p>
                     * @param _issueId <p>问题单 ID</p>
                     * 
                     */
                    void SetIssueId(const std::string& _issueId);

                    /**
                     * 判断参数 IssueId 是否已赋值
                     * @return IssueId 是否已赋值
                     * 
                     */
                    bool IssueIdHasBeenSet() const;

                    /**
                     * 获取<p>问题单状态</p>
                     * @return Status <p>问题单状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>问题单状态</p>
                     * @param _status <p>问题单状态</p>
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
                     * 获取<p>API 或资源 URL</p>
                     * @return URL <p>API 或资源 URL</p>
                     * 
                     */
                    std::string GetURL() const;

                    /**
                     * 设置<p>API 或资源 URL</p>
                     * @param _uRL <p>API 或资源 URL</p>
                     * 
                     */
                    void SetURL(const std::string& _uRL);

                    /**
                     * 判断参数 URL 是否已赋值
                     * @return URL 是否已赋值
                     * 
                     */
                    bool URLHasBeenSet() const;

                    /**
                     * 获取<p>次数</p>
                     * @return Count <p>次数</p>
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置<p>次数</p>
                     * @param _count <p>次数</p>
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取<p>影响用户数</p>
                     * @return AffectedUser <p>影响用户数</p>
                     * 
                     */
                    int64_t GetAffectedUser() const;

                    /**
                     * 设置<p>影响用户数</p>
                     * @param _affectedUser <p>影响用户数</p>
                     * 
                     */
                    void SetAffectedUser(const int64_t& _affectedUser);

                    /**
                     * 判断参数 AffectedUser 是否已赋值
                     * @return AffectedUser 是否已赋值
                     * 
                     */
                    bool AffectedUserHasBeenSet() const;

                    /**
                     * 获取<p>失败次数</p>
                     * @return Fail <p>失败次数</p>
                     * 
                     */
                    int64_t GetFail() const;

                    /**
                     * 设置<p>失败次数</p>
                     * @param _fail <p>失败次数</p>
                     * 
                     */
                    void SetFail(const int64_t& _fail);

                    /**
                     * 判断参数 Fail 是否已赋值
                     * @return Fail 是否已赋值
                     * 
                     */
                    bool FailHasBeenSet() const;

                    /**
                     * 获取<p>耗时</p>
                     * @return Duration <p>耗时</p>
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置<p>耗时</p>
                     * @param _duration <p>耗时</p>
                     * 
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取<p>连接时长</p>
                     * @return ConnectTime <p>连接时长</p>
                     * 
                     */
                    double GetConnectTime() const;

                    /**
                     * 设置<p>连接时长</p>
                     * @param _connectTime <p>连接时长</p>
                     * 
                     */
                    void SetConnectTime(const double& _connectTime);

                    /**
                     * 判断参数 ConnectTime 是否已赋值
                     * @return ConnectTime 是否已赋值
                     * 
                     */
                    bool ConnectTimeHasBeenSet() const;

                    /**
                     * 获取<p>DNS 时长</p>
                     * @return DomainLookupTime <p>DNS 时长</p>
                     * 
                     */
                    double GetDomainLookupTime() const;

                    /**
                     * 设置<p>DNS 时长</p>
                     * @param _domainLookupTime <p>DNS 时长</p>
                     * 
                     */
                    void SetDomainLookupTime(const double& _domainLookupTime);

                    /**
                     * 判断参数 DomainLookupTime 是否已赋值
                     * @return DomainLookupTime 是否已赋值
                     * 
                     */
                    bool DomainLookupTimeHasBeenSet() const;

                    /**
                     * 获取<p>时序</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Series <p>时序</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<EventRankPoint> GetSeries() const;

                    /**
                     * 设置<p>时序</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _series <p>时序</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSeries(const std::vector<EventRankPoint>& _series);

                    /**
                     * 判断参数 Series 是否已赋值
                     * @return Series 是否已赋值
                     * 
                     */
                    bool SeriesHasBeenSet() const;

                private:

                    /**
                     * <p>错误指纹</p>
                     */
                    std::string m_fingerprint;
                    bool m_fingerprintHasBeenSet;

                    /**
                     * <p>事件类型</p>
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * <p>崩溃类型</p>
                     */
                    std::string m_crashType;
                    bool m_crashTypeHasBeenSet;

                    /**
                     * <p>错误类型</p>
                     */
                    std::string m_errorType;
                    bool m_errorTypeHasBeenSet;

                    /**
                     * <p>错误值</p>
                     */
                    std::string m_errorValue;
                    bool m_errorValueHasBeenSet;

                    /**
                     * <p>问题单 ID</p>
                     */
                    std::string m_issueId;
                    bool m_issueIdHasBeenSet;

                    /**
                     * <p>问题单状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>API 或资源 URL</p>
                     */
                    std::string m_uRL;
                    bool m_uRLHasBeenSet;

                    /**
                     * <p>次数</p>
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * <p>影响用户数</p>
                     */
                    int64_t m_affectedUser;
                    bool m_affectedUserHasBeenSet;

                    /**
                     * <p>失败次数</p>
                     */
                    int64_t m_fail;
                    bool m_failHasBeenSet;

                    /**
                     * <p>耗时</p>
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>连接时长</p>
                     */
                    double m_connectTime;
                    bool m_connectTimeHasBeenSet;

                    /**
                     * <p>DNS 时长</p>
                     */
                    double m_domainLookupTime;
                    bool m_domainLookupTimeHasBeenSet;

                    /**
                     * <p>时序</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EventRankPoint> m_series;
                    bool m_seriesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_EVENTRANKITEM_H_
