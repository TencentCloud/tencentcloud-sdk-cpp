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
    m_slowRequestSavedThresholdHasBeenSet(false)
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

