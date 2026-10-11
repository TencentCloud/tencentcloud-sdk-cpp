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

#include <tencentcloud/ctem/v20231128/model/DisplaySensitiveInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

DisplaySensitiveInfo::DisplaySensitiveInfo() :
    m_idHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_displayToolCommonHasBeenSet(false),
    m_isCloudAssetHasBeenSet(false),
    m_cloudAssetStatusHasBeenSet(false),
    m_aggregationCountHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_lastCheckTimeHasBeenSet(false)
{
}

CoreInternalOutcome DisplaySensitiveInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySensitiveInfo.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySensitiveInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySensitiveInfo.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySensitiveInfo.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("DisplayToolCommon") && !value["DisplayToolCommon"].IsNull())
    {
        if (!value["DisplayToolCommon"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySensitiveInfo.DisplayToolCommon` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_displayToolCommon.Deserialize(value["DisplayToolCommon"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_displayToolCommonHasBeenSet = true;
    }

    if (value.HasMember("IsCloudAsset") && !value["IsCloudAsset"].IsNull())
    {
        if (!value["IsCloudAsset"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySensitiveInfo.IsCloudAsset` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isCloudAsset = value["IsCloudAsset"].GetInt64();
        m_isCloudAssetHasBeenSet = true;
    }

    if (value.HasMember("CloudAssetStatus") && !value["CloudAssetStatus"].IsNull())
    {
        if (!value["CloudAssetStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySensitiveInfo.CloudAssetStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cloudAssetStatus = value["CloudAssetStatus"].GetInt64();
        m_cloudAssetStatusHasBeenSet = true;
    }

    if (value.HasMember("AggregationCount") && !value["AggregationCount"].IsNull())
    {
        if (!value["AggregationCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySensitiveInfo.AggregationCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_aggregationCount = value["AggregationCount"].GetInt64();
        m_aggregationCountHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySensitiveInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("LastCheckTime") && !value["LastCheckTime"].IsNull())
    {
        if (!value["LastCheckTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplaySensitiveInfo.LastCheckTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastCheckTime = string(value["LastCheckTime"].GetString());
        m_lastCheckTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DisplaySensitiveInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_displayToolCommonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayToolCommon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_displayToolCommon.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_isCloudAssetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCloudAsset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCloudAsset, allocator);
    }

    if (m_cloudAssetStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudAssetStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cloudAssetStatus, allocator);
    }

    if (m_aggregationCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AggregationCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aggregationCount, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_lastCheckTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastCheckTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastCheckTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t DisplaySensitiveInfo::GetId() const
{
    return m_id;
}

void DisplaySensitiveInfo::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DisplaySensitiveInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DisplaySensitiveInfo::GetType() const
{
    return m_type;
}

void DisplaySensitiveInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DisplaySensitiveInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DisplaySensitiveInfo::GetSource() const
{
    return m_source;
}

void DisplaySensitiveInfo::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool DisplaySensitiveInfo::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string DisplaySensitiveInfo::GetValue() const
{
    return m_value;
}

void DisplaySensitiveInfo::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool DisplaySensitiveInfo::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

DisplayToolCommon DisplaySensitiveInfo::GetDisplayToolCommon() const
{
    return m_displayToolCommon;
}

void DisplaySensitiveInfo::SetDisplayToolCommon(const DisplayToolCommon& _displayToolCommon)
{
    m_displayToolCommon = _displayToolCommon;
    m_displayToolCommonHasBeenSet = true;
}

bool DisplaySensitiveInfo::DisplayToolCommonHasBeenSet() const
{
    return m_displayToolCommonHasBeenSet;
}

int64_t DisplaySensitiveInfo::GetIsCloudAsset() const
{
    return m_isCloudAsset;
}

void DisplaySensitiveInfo::SetIsCloudAsset(const int64_t& _isCloudAsset)
{
    m_isCloudAsset = _isCloudAsset;
    m_isCloudAssetHasBeenSet = true;
}

bool DisplaySensitiveInfo::IsCloudAssetHasBeenSet() const
{
    return m_isCloudAssetHasBeenSet;
}

int64_t DisplaySensitiveInfo::GetCloudAssetStatus() const
{
    return m_cloudAssetStatus;
}

void DisplaySensitiveInfo::SetCloudAssetStatus(const int64_t& _cloudAssetStatus)
{
    m_cloudAssetStatus = _cloudAssetStatus;
    m_cloudAssetStatusHasBeenSet = true;
}

bool DisplaySensitiveInfo::CloudAssetStatusHasBeenSet() const
{
    return m_cloudAssetStatusHasBeenSet;
}

int64_t DisplaySensitiveInfo::GetAggregationCount() const
{
    return m_aggregationCount;
}

void DisplaySensitiveInfo::SetAggregationCount(const int64_t& _aggregationCount)
{
    m_aggregationCount = _aggregationCount;
    m_aggregationCountHasBeenSet = true;
}

bool DisplaySensitiveInfo::AggregationCountHasBeenSet() const
{
    return m_aggregationCountHasBeenSet;
}

string DisplaySensitiveInfo::GetStatus() const
{
    return m_status;
}

void DisplaySensitiveInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DisplaySensitiveInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DisplaySensitiveInfo::GetLastCheckTime() const
{
    return m_lastCheckTime;
}

void DisplaySensitiveInfo::SetLastCheckTime(const string& _lastCheckTime)
{
    m_lastCheckTime = _lastCheckTime;
    m_lastCheckTimeHasBeenSet = true;
}

bool DisplaySensitiveInfo::LastCheckTimeHasBeenSet() const
{
    return m_lastCheckTimeHasBeenSet;
}

