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

#include <tencentcloud/waf/v20180125/model/ApiParameterType.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ApiParameterType::ApiParameterType() :
    m_parameterNameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_isPanHasBeenSet(false),
    m_isAuthHasBeenSet(false)
{
}

CoreInternalOutcome ApiParameterType::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ParameterName") && !value["ParameterName"].IsNull())
    {
        if (!value["ParameterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiParameterType.ParameterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parameterName = string(value["ParameterName"].GetString());
        m_parameterNameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiParameterType.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiParameterType.Location` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_location = string(value["Location"].GetString());
        m_locationHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiParameterType.Label` is not array type"));

        const rapidjson::Value &tmpValue = value["Label"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_label.push_back((*itr).GetString());
        }
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiParameterType.Timestamp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetUint64();
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiParameterType.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiParameterType.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("IsPan") && !value["IsPan"].IsNull())
    {
        if (!value["IsPan"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiParameterType.IsPan` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isPan = value["IsPan"].GetInt64();
        m_isPanHasBeenSet = true;
    }

    if (value.HasMember("IsAuth") && !value["IsAuth"].IsNull())
    {
        if (!value["IsAuth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiParameterType.IsAuth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isAuth = value["IsAuth"].GetInt64();
        m_isAuthHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApiParameterType::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_parameterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParameterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parameterName.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_location.c_str(), allocator).Move(), allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_label.begin(); itr != m_label.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_isPanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPan, allocator);
    }

    if (m_isAuthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAuth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAuth, allocator);
    }

}


string ApiParameterType::GetParameterName() const
{
    return m_parameterName;
}

void ApiParameterType::SetParameterName(const string& _parameterName)
{
    m_parameterName = _parameterName;
    m_parameterNameHasBeenSet = true;
}

bool ApiParameterType::ParameterNameHasBeenSet() const
{
    return m_parameterNameHasBeenSet;
}

string ApiParameterType::GetType() const
{
    return m_type;
}

void ApiParameterType::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ApiParameterType::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ApiParameterType::GetLocation() const
{
    return m_location;
}

void ApiParameterType::SetLocation(const string& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool ApiParameterType::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

vector<string> ApiParameterType::GetLabel() const
{
    return m_label;
}

void ApiParameterType::SetLabel(const vector<string>& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool ApiParameterType::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

uint64_t ApiParameterType::GetTimestamp() const
{
    return m_timestamp;
}

void ApiParameterType::SetTimestamp(const uint64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool ApiParameterType::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

string ApiParameterType::GetRemark() const
{
    return m_remark;
}

void ApiParameterType::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ApiParameterType::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string ApiParameterType::GetSource() const
{
    return m_source;
}

void ApiParameterType::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool ApiParameterType::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

int64_t ApiParameterType::GetIsPan() const
{
    return m_isPan;
}

void ApiParameterType::SetIsPan(const int64_t& _isPan)
{
    m_isPan = _isPan;
    m_isPanHasBeenSet = true;
}

bool ApiParameterType::IsPanHasBeenSet() const
{
    return m_isPanHasBeenSet;
}

int64_t ApiParameterType::GetIsAuth() const
{
    return m_isAuth;
}

void ApiParameterType::SetIsAuth(const int64_t& _isAuth)
{
    m_isAuth = _isAuth;
    m_isAuthHasBeenSet = true;
}

bool ApiParameterType::IsAuthHasBeenSet() const
{
    return m_isAuthHasBeenSet;
}

