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

#include <tencentcloud/rum/v20210622/model/EventRankItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

EventRankItem::EventRankItem() :
    m_fingerprintHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_crashTypeHasBeenSet(false),
    m_errorTypeHasBeenSet(false),
    m_errorValueHasBeenSet(false),
    m_issueIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_uRLHasBeenSet(false),
    m_countHasBeenSet(false),
    m_affectedUserHasBeenSet(false),
    m_failHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_connectTimeHasBeenSet(false),
    m_domainLookupTimeHasBeenSet(false),
    m_seriesHasBeenSet(false)
{
}

CoreInternalOutcome EventRankItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Fingerprint") && !value["Fingerprint"].IsNull())
    {
        if (!value["Fingerprint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventRankItem.Fingerprint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fingerprint = string(value["Fingerprint"].GetString());
        m_fingerprintHasBeenSet = true;
    }

    if (value.HasMember("EventType") && !value["EventType"].IsNull())
    {
        if (!value["EventType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventRankItem.EventType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = string(value["EventType"].GetString());
        m_eventTypeHasBeenSet = true;
    }

    if (value.HasMember("CrashType") && !value["CrashType"].IsNull())
    {
        if (!value["CrashType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventRankItem.CrashType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_crashType = string(value["CrashType"].GetString());
        m_crashTypeHasBeenSet = true;
    }

    if (value.HasMember("ErrorType") && !value["ErrorType"].IsNull())
    {
        if (!value["ErrorType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventRankItem.ErrorType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorType = string(value["ErrorType"].GetString());
        m_errorTypeHasBeenSet = true;
    }

    if (value.HasMember("ErrorValue") && !value["ErrorValue"].IsNull())
    {
        if (!value["ErrorValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventRankItem.ErrorValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorValue = string(value["ErrorValue"].GetString());
        m_errorValueHasBeenSet = true;
    }

    if (value.HasMember("IssueId") && !value["IssueId"].IsNull())
    {
        if (!value["IssueId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventRankItem.IssueId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issueId = string(value["IssueId"].GetString());
        m_issueIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventRankItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("URL") && !value["URL"].IsNull())
    {
        if (!value["URL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventRankItem.URL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uRL = string(value["URL"].GetString());
        m_uRLHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EventRankItem.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("AffectedUser") && !value["AffectedUser"].IsNull())
    {
        if (!value["AffectedUser"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EventRankItem.AffectedUser` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_affectedUser = value["AffectedUser"].GetInt64();
        m_affectedUserHasBeenSet = true;
    }

    if (value.HasMember("Fail") && !value["Fail"].IsNull())
    {
        if (!value["Fail"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EventRankItem.Fail` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fail = value["Fail"].GetInt64();
        m_failHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `EventRankItem.Duration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetDouble();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("ConnectTime") && !value["ConnectTime"].IsNull())
    {
        if (!value["ConnectTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `EventRankItem.ConnectTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_connectTime = value["ConnectTime"].GetDouble();
        m_connectTimeHasBeenSet = true;
    }

    if (value.HasMember("DomainLookupTime") && !value["DomainLookupTime"].IsNull())
    {
        if (!value["DomainLookupTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `EventRankItem.DomainLookupTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_domainLookupTime = value["DomainLookupTime"].GetDouble();
        m_domainLookupTimeHasBeenSet = true;
    }

    if (value.HasMember("Series") && !value["Series"].IsNull())
    {
        if (!value["Series"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EventRankItem.Series` is not array type"));

        const rapidjson::Value &tmpValue = value["Series"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EventRankPoint item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_series.push_back(item);
        }
        m_seriesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventRankItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fingerprintHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fingerprint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fingerprint.c_str(), allocator).Move(), allocator);
    }

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventType.c_str(), allocator).Move(), allocator);
    }

    if (m_crashTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrashType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_crashType.c_str(), allocator).Move(), allocator);
    }

    if (m_errorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorType.c_str(), allocator).Move(), allocator);
    }

    if (m_errorValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorValue.c_str(), allocator).Move(), allocator);
    }

    if (m_issueIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssueId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issueId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_uRLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "URL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uRL.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_affectedUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectedUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_affectedUser, allocator);
    }

    if (m_failHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fail, allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_connectTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_connectTime, allocator);
    }

    if (m_domainLookupTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainLookupTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_domainLookupTime, allocator);
    }

    if (m_seriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Series";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_series.begin(); itr != m_series.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string EventRankItem::GetFingerprint() const
{
    return m_fingerprint;
}

void EventRankItem::SetFingerprint(const string& _fingerprint)
{
    m_fingerprint = _fingerprint;
    m_fingerprintHasBeenSet = true;
}

bool EventRankItem::FingerprintHasBeenSet() const
{
    return m_fingerprintHasBeenSet;
}

string EventRankItem::GetEventType() const
{
    return m_eventType;
}

void EventRankItem::SetEventType(const string& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool EventRankItem::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

string EventRankItem::GetCrashType() const
{
    return m_crashType;
}

void EventRankItem::SetCrashType(const string& _crashType)
{
    m_crashType = _crashType;
    m_crashTypeHasBeenSet = true;
}

bool EventRankItem::CrashTypeHasBeenSet() const
{
    return m_crashTypeHasBeenSet;
}

string EventRankItem::GetErrorType() const
{
    return m_errorType;
}

void EventRankItem::SetErrorType(const string& _errorType)
{
    m_errorType = _errorType;
    m_errorTypeHasBeenSet = true;
}

bool EventRankItem::ErrorTypeHasBeenSet() const
{
    return m_errorTypeHasBeenSet;
}

string EventRankItem::GetErrorValue() const
{
    return m_errorValue;
}

void EventRankItem::SetErrorValue(const string& _errorValue)
{
    m_errorValue = _errorValue;
    m_errorValueHasBeenSet = true;
}

bool EventRankItem::ErrorValueHasBeenSet() const
{
    return m_errorValueHasBeenSet;
}

string EventRankItem::GetIssueId() const
{
    return m_issueId;
}

void EventRankItem::SetIssueId(const string& _issueId)
{
    m_issueId = _issueId;
    m_issueIdHasBeenSet = true;
}

bool EventRankItem::IssueIdHasBeenSet() const
{
    return m_issueIdHasBeenSet;
}

string EventRankItem::GetStatus() const
{
    return m_status;
}

void EventRankItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool EventRankItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string EventRankItem::GetURL() const
{
    return m_uRL;
}

void EventRankItem::SetURL(const string& _uRL)
{
    m_uRL = _uRL;
    m_uRLHasBeenSet = true;
}

bool EventRankItem::URLHasBeenSet() const
{
    return m_uRLHasBeenSet;
}

int64_t EventRankItem::GetCount() const
{
    return m_count;
}

void EventRankItem::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool EventRankItem::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

int64_t EventRankItem::GetAffectedUser() const
{
    return m_affectedUser;
}

void EventRankItem::SetAffectedUser(const int64_t& _affectedUser)
{
    m_affectedUser = _affectedUser;
    m_affectedUserHasBeenSet = true;
}

bool EventRankItem::AffectedUserHasBeenSet() const
{
    return m_affectedUserHasBeenSet;
}

int64_t EventRankItem::GetFail() const
{
    return m_fail;
}

void EventRankItem::SetFail(const int64_t& _fail)
{
    m_fail = _fail;
    m_failHasBeenSet = true;
}

bool EventRankItem::FailHasBeenSet() const
{
    return m_failHasBeenSet;
}

double EventRankItem::GetDuration() const
{
    return m_duration;
}

void EventRankItem::SetDuration(const double& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool EventRankItem::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

double EventRankItem::GetConnectTime() const
{
    return m_connectTime;
}

void EventRankItem::SetConnectTime(const double& _connectTime)
{
    m_connectTime = _connectTime;
    m_connectTimeHasBeenSet = true;
}

bool EventRankItem::ConnectTimeHasBeenSet() const
{
    return m_connectTimeHasBeenSet;
}

double EventRankItem::GetDomainLookupTime() const
{
    return m_domainLookupTime;
}

void EventRankItem::SetDomainLookupTime(const double& _domainLookupTime)
{
    m_domainLookupTime = _domainLookupTime;
    m_domainLookupTimeHasBeenSet = true;
}

bool EventRankItem::DomainLookupTimeHasBeenSet() const
{
    return m_domainLookupTimeHasBeenSet;
}

vector<EventRankPoint> EventRankItem::GetSeries() const
{
    return m_series;
}

void EventRankItem::SetSeries(const vector<EventRankPoint>& _series)
{
    m_series = _series;
    m_seriesHasBeenSet = true;
}

bool EventRankItem::SeriesHasBeenSet() const
{
    return m_seriesHasBeenSet;
}

