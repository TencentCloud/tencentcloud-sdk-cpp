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

#include <tencentcloud/cls/v20201016/model/ConsoleSharingConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ConsoleSharingConfig::ConsoleSharingConfig() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_durationMillisecondsHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_verifyCodeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_nowTimeHasBeenSet(false),
    m_paramsHasBeenSet(false),
    m_isLockTimeRangeHasBeenSet(false),
    m_isLockQueryHasBeenSet(false),
    m_isSupportLogExportHasBeenSet(false)
{
}

CoreInternalOutcome ConsoleSharingConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsoleSharingConfig.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConsoleSharingConfig.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("DurationMilliseconds") && !value["DurationMilliseconds"].IsNull())
    {
        if (!value["DurationMilliseconds"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConsoleSharingConfig.DurationMilliseconds` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_durationMilliseconds = value["DurationMilliseconds"].GetUint64();
        m_durationMillisecondsHasBeenSet = true;
    }

    if (value.HasMember("Resources") && !value["Resources"].IsNull())
    {
        if (!value["Resources"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConsoleSharingConfig.Resources` is not array type"));

        const rapidjson::Value &tmpValue = value["Resources"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_resources.push_back((*itr).GetString());
        }
        m_resourcesHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsoleSharingConfig.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("VerifyCode") && !value["VerifyCode"].IsNull())
    {
        if (!value["VerifyCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsoleSharingConfig.VerifyCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verifyCode = string(value["VerifyCode"].GetString());
        m_verifyCodeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsoleSharingConfig.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsoleSharingConfig.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("NowTime") && !value["NowTime"].IsNull())
    {
        if (!value["NowTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConsoleSharingConfig.NowTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nowTime = value["NowTime"].GetUint64();
        m_nowTimeHasBeenSet = true;
    }

    if (value.HasMember("Params") && !value["Params"].IsNull())
    {
        if (!value["Params"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConsoleSharingConfig.Params` is not array type"));

        const rapidjson::Value &tmpValue = value["Params"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConsoleSharingParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_params.push_back(item);
        }
        m_paramsHasBeenSet = true;
    }

    if (value.HasMember("IsLockTimeRange") && !value["IsLockTimeRange"].IsNull())
    {
        if (!value["IsLockTimeRange"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ConsoleSharingConfig.IsLockTimeRange` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isLockTimeRange = value["IsLockTimeRange"].GetBool();
        m_isLockTimeRangeHasBeenSet = true;
    }

    if (value.HasMember("IsLockQuery") && !value["IsLockQuery"].IsNull())
    {
        if (!value["IsLockQuery"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ConsoleSharingConfig.IsLockQuery` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isLockQuery = value["IsLockQuery"].GetBool();
        m_isLockQueryHasBeenSet = true;
    }

    if (value.HasMember("IsSupportLogExport") && !value["IsSupportLogExport"].IsNull())
    {
        if (!value["IsSupportLogExport"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ConsoleSharingConfig.IsSupportLogExport` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportLogExport = value["IsSupportLogExport"].GetBool();
        m_isSupportLogExportHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConsoleSharingConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_durationMillisecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DurationMilliseconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_durationMilliseconds, allocator);
    }

    if (m_resourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resources";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resources.begin(); itr != m_resources.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_verifyCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verifyCode.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_nowTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NowTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nowTime, allocator);
    }

    if (m_paramsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Params";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_params.begin(); itr != m_params.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_isLockTimeRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLockTimeRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isLockTimeRange, allocator);
    }

    if (m_isLockQueryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLockQuery";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isLockQuery, allocator);
    }

    if (m_isSupportLogExportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportLogExport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSupportLogExport, allocator);
    }

}


string ConsoleSharingConfig::GetName() const
{
    return m_name;
}

void ConsoleSharingConfig::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ConsoleSharingConfig::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t ConsoleSharingConfig::GetType() const
{
    return m_type;
}

void ConsoleSharingConfig::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ConsoleSharingConfig::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t ConsoleSharingConfig::GetDurationMilliseconds() const
{
    return m_durationMilliseconds;
}

void ConsoleSharingConfig::SetDurationMilliseconds(const uint64_t& _durationMilliseconds)
{
    m_durationMilliseconds = _durationMilliseconds;
    m_durationMillisecondsHasBeenSet = true;
}

bool ConsoleSharingConfig::DurationMillisecondsHasBeenSet() const
{
    return m_durationMillisecondsHasBeenSet;
}

vector<string> ConsoleSharingConfig::GetResources() const
{
    return m_resources;
}

void ConsoleSharingConfig::SetResources(const vector<string>& _resources)
{
    m_resources = _resources;
    m_resourcesHasBeenSet = true;
}

bool ConsoleSharingConfig::ResourcesHasBeenSet() const
{
    return m_resourcesHasBeenSet;
}

string ConsoleSharingConfig::GetDomain() const
{
    return m_domain;
}

void ConsoleSharingConfig::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ConsoleSharingConfig::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string ConsoleSharingConfig::GetVerifyCode() const
{
    return m_verifyCode;
}

void ConsoleSharingConfig::SetVerifyCode(const string& _verifyCode)
{
    m_verifyCode = _verifyCode;
    m_verifyCodeHasBeenSet = true;
}

bool ConsoleSharingConfig::VerifyCodeHasBeenSet() const
{
    return m_verifyCodeHasBeenSet;
}

string ConsoleSharingConfig::GetStartTime() const
{
    return m_startTime;
}

void ConsoleSharingConfig::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ConsoleSharingConfig::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ConsoleSharingConfig::GetEndTime() const
{
    return m_endTime;
}

void ConsoleSharingConfig::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ConsoleSharingConfig::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t ConsoleSharingConfig::GetNowTime() const
{
    return m_nowTime;
}

void ConsoleSharingConfig::SetNowTime(const uint64_t& _nowTime)
{
    m_nowTime = _nowTime;
    m_nowTimeHasBeenSet = true;
}

bool ConsoleSharingConfig::NowTimeHasBeenSet() const
{
    return m_nowTimeHasBeenSet;
}

vector<ConsoleSharingParam> ConsoleSharingConfig::GetParams() const
{
    return m_params;
}

void ConsoleSharingConfig::SetParams(const vector<ConsoleSharingParam>& _params)
{
    m_params = _params;
    m_paramsHasBeenSet = true;
}

bool ConsoleSharingConfig::ParamsHasBeenSet() const
{
    return m_paramsHasBeenSet;
}

bool ConsoleSharingConfig::GetIsLockTimeRange() const
{
    return m_isLockTimeRange;
}

void ConsoleSharingConfig::SetIsLockTimeRange(const bool& _isLockTimeRange)
{
    m_isLockTimeRange = _isLockTimeRange;
    m_isLockTimeRangeHasBeenSet = true;
}

bool ConsoleSharingConfig::IsLockTimeRangeHasBeenSet() const
{
    return m_isLockTimeRangeHasBeenSet;
}

bool ConsoleSharingConfig::GetIsLockQuery() const
{
    return m_isLockQuery;
}

void ConsoleSharingConfig::SetIsLockQuery(const bool& _isLockQuery)
{
    m_isLockQuery = _isLockQuery;
    m_isLockQueryHasBeenSet = true;
}

bool ConsoleSharingConfig::IsLockQueryHasBeenSet() const
{
    return m_isLockQueryHasBeenSet;
}

bool ConsoleSharingConfig::GetIsSupportLogExport() const
{
    return m_isSupportLogExport;
}

void ConsoleSharingConfig::SetIsSupportLogExport(const bool& _isSupportLogExport)
{
    m_isSupportLogExport = _isSupportLogExport;
    m_isSupportLogExportHasBeenSet = true;
}

bool ConsoleSharingConfig::IsSupportLogExportHasBeenSet() const
{
    return m_isSupportLogExportHasBeenSet;
}

