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

#include <tencentcloud/apm/v20210622/model/ApmInstanceDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

ApmInstanceDetail::ApmInstanceDetail() :
    m_amountOfUsedStorageHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_createUinHasBeenSet(false),
    m_serviceCountHasBeenSet(false),
    m_countOfReportSpanPerDayHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_traceDurationHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_spanDailyCountersHasBeenSet(false),
    m_billingInstanceHasBeenSet(false),
    m_errRateThresholdHasBeenSet(false),
    m_sampleRateHasBeenSet(false),
    m_errorSampleHasBeenSet(false),
    m_slowRequestSavedThresholdHasBeenSet(false),
    m_logRegionHasBeenSet(false),
    m_logSourceHasBeenSet(false),
    m_isRelatedLogHasBeenSet(false),
    m_logTopicIDHasBeenSet(false),
    m_clientCountHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_logSetHasBeenSet(false),
    m_metricDurationHasBeenSet(false),
    m_customShowTagsHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_payModeEffectiveHasBeenSet(false)
{
}

CoreInternalOutcome ApmInstanceDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AmountOfUsedStorage") && !value["AmountOfUsedStorage"].IsNull())
    {
        if (!value["AmountOfUsedStorage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ApmInstanceDetail.AmountOfUsedStorage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_amountOfUsedStorage = value["AmountOfUsedStorage"].GetDouble();
        m_amountOfUsedStorageHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmInstanceDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApmInstanceDetail.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApmTag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmInstanceDetail.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("CreateUin") && !value["CreateUin"].IsNull())
    {
        if (!value["CreateUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmInstanceDetail.CreateUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUin = string(value["CreateUin"].GetString());
        m_createUinHasBeenSet = true;
    }

    if (value.HasMember("ServiceCount") && !value["ServiceCount"].IsNull())
    {
        if (!value["ServiceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmInstanceDetail.ServiceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_serviceCount = value["ServiceCount"].GetInt64();
        m_serviceCountHasBeenSet = true;
    }

    if (value.HasMember("CountOfReportSpanPerDay") && !value["CountOfReportSpanPerDay"].IsNull())
    {
        if (!value["CountOfReportSpanPerDay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmInstanceDetail.CountOfReportSpanPerDay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_countOfReportSpanPerDay = value["CountOfReportSpanPerDay"].GetInt64();
        m_countOfReportSpanPerDayHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmInstanceDetail.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("TraceDuration") && !value["TraceDuration"].IsNull())
    {
        if (!value["TraceDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmInstanceDetail.TraceDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_traceDuration = value["TraceDuration"].GetInt64();
        m_traceDurationHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmInstanceDetail.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmInstanceDetail.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmInstanceDetail.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("SpanDailyCounters") && !value["SpanDailyCounters"].IsNull())
    {
        if (!value["SpanDailyCounters"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmInstanceDetail.SpanDailyCounters` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_spanDailyCounters = value["SpanDailyCounters"].GetInt64();
        m_spanDailyCountersHasBeenSet = true;
    }

    if (value.HasMember("BillingInstance") && !value["BillingInstance"].IsNull())
    {
        if (!value["BillingInstance"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmInstanceDetail.BillingInstance` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_billingInstance = value["BillingInstance"].GetInt64();
        m_billingInstanceHasBeenSet = true;
    }

    if (value.HasMember("ErrRateThreshold") && !value["ErrRateThreshold"].IsNull())
    {
        if (!value["ErrRateThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmInstanceDetail.ErrRateThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errRateThreshold = value["ErrRateThreshold"].GetInt64();
        m_errRateThresholdHasBeenSet = true;
    }

    if (value.HasMember("SampleRate") && !value["SampleRate"].IsNull())
    {
        if (!value["SampleRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmInstanceDetail.SampleRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sampleRate = value["SampleRate"].GetInt64();
        m_sampleRateHasBeenSet = true;
    }

    if (value.HasMember("ErrorSample") && !value["ErrorSample"].IsNull())
    {
        if (!value["ErrorSample"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmInstanceDetail.ErrorSample` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errorSample = value["ErrorSample"].GetInt64();
        m_errorSampleHasBeenSet = true;
    }

    if (value.HasMember("SlowRequestSavedThreshold") && !value["SlowRequestSavedThreshold"].IsNull())
    {
        if (!value["SlowRequestSavedThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmInstanceDetail.SlowRequestSavedThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_slowRequestSavedThreshold = value["SlowRequestSavedThreshold"].GetInt64();
        m_slowRequestSavedThresholdHasBeenSet = true;
    }

    if (value.HasMember("LogRegion") && !value["LogRegion"].IsNull())
    {
        if (!value["LogRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmInstanceDetail.LogRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logRegion = string(value["LogRegion"].GetString());
        m_logRegionHasBeenSet = true;
    }

    if (value.HasMember("LogSource") && !value["LogSource"].IsNull())
    {
        if (!value["LogSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmInstanceDetail.LogSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logSource = string(value["LogSource"].GetString());
        m_logSourceHasBeenSet = true;
    }

    if (value.HasMember("IsRelatedLog") && !value["IsRelatedLog"].IsNull())
    {
        if (!value["IsRelatedLog"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmInstanceDetail.IsRelatedLog` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isRelatedLog = value["IsRelatedLog"].GetInt64();
        m_isRelatedLogHasBeenSet = true;
    }

    if (value.HasMember("LogTopicID") && !value["LogTopicID"].IsNull())
    {
        if (!value["LogTopicID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmInstanceDetail.LogTopicID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logTopicID = string(value["LogTopicID"].GetString());
        m_logTopicIDHasBeenSet = true;
    }

    if (value.HasMember("ClientCount") && !value["ClientCount"].IsNull())
    {
        if (!value["ClientCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmInstanceDetail.ClientCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clientCount = value["ClientCount"].GetInt64();
        m_clientCountHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmInstanceDetail.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("LogSet") && !value["LogSet"].IsNull())
    {
        if (!value["LogSet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmInstanceDetail.LogSet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logSet = string(value["LogSet"].GetString());
        m_logSetHasBeenSet = true;
    }

    if (value.HasMember("MetricDuration") && !value["MetricDuration"].IsNull())
    {
        if (!value["MetricDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmInstanceDetail.MetricDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_metricDuration = value["MetricDuration"].GetInt64();
        m_metricDurationHasBeenSet = true;
    }

    if (value.HasMember("CustomShowTags") && !value["CustomShowTags"].IsNull())
    {
        if (!value["CustomShowTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApmInstanceDetail.CustomShowTags` is not array type"));

        const rapidjson::Value &tmpValue = value["CustomShowTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_customShowTags.push_back((*itr).GetString());
        }
        m_customShowTagsHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmInstanceDetail.PayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetInt64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("PayModeEffective") && !value["PayModeEffective"].IsNull())
    {
        if (!value["PayModeEffective"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApmInstanceDetail.PayModeEffective` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_payModeEffective = value["PayModeEffective"].GetBool();
        m_payModeEffectiveHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApmInstanceDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_amountOfUsedStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AmountOfUsedStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_amountOfUsedStorage, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_createUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createUin.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serviceCount, allocator);
    }

    if (m_countOfReportSpanPerDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountOfReportSpanPerDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_countOfReportSpanPerDay, allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_traceDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_traceDuration, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_spanDailyCountersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpanDailyCounters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_spanDailyCounters, allocator);
    }

    if (m_billingInstanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingInstance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_billingInstance, allocator);
    }

    if (m_errRateThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrRateThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errRateThreshold, allocator);
    }

    if (m_sampleRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sampleRate, allocator);
    }

    if (m_errorSampleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorSample";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errorSample, allocator);
    }

    if (m_slowRequestSavedThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlowRequestSavedThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_slowRequestSavedThreshold, allocator);
    }

    if (m_logRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_logSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logSource.c_str(), allocator).Move(), allocator);
    }

    if (m_isRelatedLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRelatedLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRelatedLog, allocator);
    }

    if (m_logTopicIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogTopicID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logTopicID.c_str(), allocator).Move(), allocator);
    }

    if (m_clientCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clientCount, allocator);
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_logSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logSet.c_str(), allocator).Move(), allocator);
    }

    if (m_metricDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_metricDuration, allocator);
    }

    if (m_customShowTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomShowTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_customShowTags.begin(); itr != m_customShowTags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payMode, allocator);
    }

    if (m_payModeEffectiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayModeEffective";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payModeEffective, allocator);
    }

}


double ApmInstanceDetail::GetAmountOfUsedStorage() const
{
    return m_amountOfUsedStorage;
}

void ApmInstanceDetail::SetAmountOfUsedStorage(const double& _amountOfUsedStorage)
{
    m_amountOfUsedStorage = _amountOfUsedStorage;
    m_amountOfUsedStorageHasBeenSet = true;
}

bool ApmInstanceDetail::AmountOfUsedStorageHasBeenSet() const
{
    return m_amountOfUsedStorageHasBeenSet;
}

string ApmInstanceDetail::GetName() const
{
    return m_name;
}

void ApmInstanceDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ApmInstanceDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<ApmTag> ApmInstanceDetail::GetTags() const
{
    return m_tags;
}

void ApmInstanceDetail::SetTags(const vector<ApmTag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ApmInstanceDetail::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string ApmInstanceDetail::GetInstanceId() const
{
    return m_instanceId;
}

void ApmInstanceDetail::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ApmInstanceDetail::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ApmInstanceDetail::GetCreateUin() const
{
    return m_createUin;
}

void ApmInstanceDetail::SetCreateUin(const string& _createUin)
{
    m_createUin = _createUin;
    m_createUinHasBeenSet = true;
}

bool ApmInstanceDetail::CreateUinHasBeenSet() const
{
    return m_createUinHasBeenSet;
}

int64_t ApmInstanceDetail::GetServiceCount() const
{
    return m_serviceCount;
}

void ApmInstanceDetail::SetServiceCount(const int64_t& _serviceCount)
{
    m_serviceCount = _serviceCount;
    m_serviceCountHasBeenSet = true;
}

bool ApmInstanceDetail::ServiceCountHasBeenSet() const
{
    return m_serviceCountHasBeenSet;
}

int64_t ApmInstanceDetail::GetCountOfReportSpanPerDay() const
{
    return m_countOfReportSpanPerDay;
}

void ApmInstanceDetail::SetCountOfReportSpanPerDay(const int64_t& _countOfReportSpanPerDay)
{
    m_countOfReportSpanPerDay = _countOfReportSpanPerDay;
    m_countOfReportSpanPerDayHasBeenSet = true;
}

bool ApmInstanceDetail::CountOfReportSpanPerDayHasBeenSet() const
{
    return m_countOfReportSpanPerDayHasBeenSet;
}

int64_t ApmInstanceDetail::GetAppId() const
{
    return m_appId;
}

void ApmInstanceDetail::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool ApmInstanceDetail::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

int64_t ApmInstanceDetail::GetTraceDuration() const
{
    return m_traceDuration;
}

void ApmInstanceDetail::SetTraceDuration(const int64_t& _traceDuration)
{
    m_traceDuration = _traceDuration;
    m_traceDurationHasBeenSet = true;
}

bool ApmInstanceDetail::TraceDurationHasBeenSet() const
{
    return m_traceDurationHasBeenSet;
}

string ApmInstanceDetail::GetDescription() const
{
    return m_description;
}

void ApmInstanceDetail::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ApmInstanceDetail::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t ApmInstanceDetail::GetStatus() const
{
    return m_status;
}

void ApmInstanceDetail::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ApmInstanceDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ApmInstanceDetail::GetRegion() const
{
    return m_region;
}

void ApmInstanceDetail::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ApmInstanceDetail::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t ApmInstanceDetail::GetSpanDailyCounters() const
{
    return m_spanDailyCounters;
}

void ApmInstanceDetail::SetSpanDailyCounters(const int64_t& _spanDailyCounters)
{
    m_spanDailyCounters = _spanDailyCounters;
    m_spanDailyCountersHasBeenSet = true;
}

bool ApmInstanceDetail::SpanDailyCountersHasBeenSet() const
{
    return m_spanDailyCountersHasBeenSet;
}

int64_t ApmInstanceDetail::GetBillingInstance() const
{
    return m_billingInstance;
}

void ApmInstanceDetail::SetBillingInstance(const int64_t& _billingInstance)
{
    m_billingInstance = _billingInstance;
    m_billingInstanceHasBeenSet = true;
}

bool ApmInstanceDetail::BillingInstanceHasBeenSet() const
{
    return m_billingInstanceHasBeenSet;
}

int64_t ApmInstanceDetail::GetErrRateThreshold() const
{
    return m_errRateThreshold;
}

void ApmInstanceDetail::SetErrRateThreshold(const int64_t& _errRateThreshold)
{
    m_errRateThreshold = _errRateThreshold;
    m_errRateThresholdHasBeenSet = true;
}

bool ApmInstanceDetail::ErrRateThresholdHasBeenSet() const
{
    return m_errRateThresholdHasBeenSet;
}

int64_t ApmInstanceDetail::GetSampleRate() const
{
    return m_sampleRate;
}

void ApmInstanceDetail::SetSampleRate(const int64_t& _sampleRate)
{
    m_sampleRate = _sampleRate;
    m_sampleRateHasBeenSet = true;
}

bool ApmInstanceDetail::SampleRateHasBeenSet() const
{
    return m_sampleRateHasBeenSet;
}

int64_t ApmInstanceDetail::GetErrorSample() const
{
    return m_errorSample;
}

void ApmInstanceDetail::SetErrorSample(const int64_t& _errorSample)
{
    m_errorSample = _errorSample;
    m_errorSampleHasBeenSet = true;
}

bool ApmInstanceDetail::ErrorSampleHasBeenSet() const
{
    return m_errorSampleHasBeenSet;
}

int64_t ApmInstanceDetail::GetSlowRequestSavedThreshold() const
{
    return m_slowRequestSavedThreshold;
}

void ApmInstanceDetail::SetSlowRequestSavedThreshold(const int64_t& _slowRequestSavedThreshold)
{
    m_slowRequestSavedThreshold = _slowRequestSavedThreshold;
    m_slowRequestSavedThresholdHasBeenSet = true;
}

bool ApmInstanceDetail::SlowRequestSavedThresholdHasBeenSet() const
{
    return m_slowRequestSavedThresholdHasBeenSet;
}

string ApmInstanceDetail::GetLogRegion() const
{
    return m_logRegion;
}

void ApmInstanceDetail::SetLogRegion(const string& _logRegion)
{
    m_logRegion = _logRegion;
    m_logRegionHasBeenSet = true;
}

bool ApmInstanceDetail::LogRegionHasBeenSet() const
{
    return m_logRegionHasBeenSet;
}

string ApmInstanceDetail::GetLogSource() const
{
    return m_logSource;
}

void ApmInstanceDetail::SetLogSource(const string& _logSource)
{
    m_logSource = _logSource;
    m_logSourceHasBeenSet = true;
}

bool ApmInstanceDetail::LogSourceHasBeenSet() const
{
    return m_logSourceHasBeenSet;
}

int64_t ApmInstanceDetail::GetIsRelatedLog() const
{
    return m_isRelatedLog;
}

void ApmInstanceDetail::SetIsRelatedLog(const int64_t& _isRelatedLog)
{
    m_isRelatedLog = _isRelatedLog;
    m_isRelatedLogHasBeenSet = true;
}

bool ApmInstanceDetail::IsRelatedLogHasBeenSet() const
{
    return m_isRelatedLogHasBeenSet;
}

string ApmInstanceDetail::GetLogTopicID() const
{
    return m_logTopicID;
}

void ApmInstanceDetail::SetLogTopicID(const string& _logTopicID)
{
    m_logTopicID = _logTopicID;
    m_logTopicIDHasBeenSet = true;
}

bool ApmInstanceDetail::LogTopicIDHasBeenSet() const
{
    return m_logTopicIDHasBeenSet;
}

int64_t ApmInstanceDetail::GetClientCount() const
{
    return m_clientCount;
}

void ApmInstanceDetail::SetClientCount(const int64_t& _clientCount)
{
    m_clientCount = _clientCount;
    m_clientCountHasBeenSet = true;
}

bool ApmInstanceDetail::ClientCountHasBeenSet() const
{
    return m_clientCountHasBeenSet;
}

int64_t ApmInstanceDetail::GetTotalCount() const
{
    return m_totalCount;
}

void ApmInstanceDetail::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool ApmInstanceDetail::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

string ApmInstanceDetail::GetLogSet() const
{
    return m_logSet;
}

void ApmInstanceDetail::SetLogSet(const string& _logSet)
{
    m_logSet = _logSet;
    m_logSetHasBeenSet = true;
}

bool ApmInstanceDetail::LogSetHasBeenSet() const
{
    return m_logSetHasBeenSet;
}

int64_t ApmInstanceDetail::GetMetricDuration() const
{
    return m_metricDuration;
}

void ApmInstanceDetail::SetMetricDuration(const int64_t& _metricDuration)
{
    m_metricDuration = _metricDuration;
    m_metricDurationHasBeenSet = true;
}

bool ApmInstanceDetail::MetricDurationHasBeenSet() const
{
    return m_metricDurationHasBeenSet;
}

vector<string> ApmInstanceDetail::GetCustomShowTags() const
{
    return m_customShowTags;
}

void ApmInstanceDetail::SetCustomShowTags(const vector<string>& _customShowTags)
{
    m_customShowTags = _customShowTags;
    m_customShowTagsHasBeenSet = true;
}

bool ApmInstanceDetail::CustomShowTagsHasBeenSet() const
{
    return m_customShowTagsHasBeenSet;
}

int64_t ApmInstanceDetail::GetPayMode() const
{
    return m_payMode;
}

void ApmInstanceDetail::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool ApmInstanceDetail::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

bool ApmInstanceDetail::GetPayModeEffective() const
{
    return m_payModeEffective;
}

void ApmInstanceDetail::SetPayModeEffective(const bool& _payModeEffective)
{
    m_payModeEffective = _payModeEffective;
    m_payModeEffectiveHasBeenSet = true;
}

bool ApmInstanceDetail::PayModeEffectiveHasBeenSet() const
{
    return m_payModeEffectiveHasBeenSet;
}

