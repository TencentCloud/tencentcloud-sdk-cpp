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

#include <tencentcloud/mps/v20190612/model/DiagnoseResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

DiagnoseResult::DiagnoseResult() :
    m_categoryHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_dateTimeHasBeenSet(false),
    m_severityLevelHasBeenSet(false)
{
}

CoreInternalOutcome DiagnoseResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiagnoseResult.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiagnoseResult.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DiagnoseResult.Timestamp` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetDouble();
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiagnoseResult.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("DateTime") && !value["DateTime"].IsNull())
    {
        if (!value["DateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiagnoseResult.DateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateTime = string(value["DateTime"].GetString());
        m_dateTimeHasBeenSet = true;
    }

    if (value.HasMember("SeverityLevel") && !value["SeverityLevel"].IsNull())
    {
        if (!value["SeverityLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiagnoseResult.SeverityLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_severityLevel = string(value["SeverityLevel"].GetString());
        m_severityLevelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiagnoseResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_dateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_severityLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeverityLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_severityLevel.c_str(), allocator).Move(), allocator);
    }

}


string DiagnoseResult::GetCategory() const
{
    return m_category;
}

void DiagnoseResult::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool DiagnoseResult::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string DiagnoseResult::GetType() const
{
    return m_type;
}

void DiagnoseResult::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DiagnoseResult::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

double DiagnoseResult::GetTimestamp() const
{
    return m_timestamp;
}

void DiagnoseResult::SetTimestamp(const double& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool DiagnoseResult::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

string DiagnoseResult::GetDescription() const
{
    return m_description;
}

void DiagnoseResult::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DiagnoseResult::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DiagnoseResult::GetDateTime() const
{
    return m_dateTime;
}

void DiagnoseResult::SetDateTime(const string& _dateTime)
{
    m_dateTime = _dateTime;
    m_dateTimeHasBeenSet = true;
}

bool DiagnoseResult::DateTimeHasBeenSet() const
{
    return m_dateTimeHasBeenSet;
}

string DiagnoseResult::GetSeverityLevel() const
{
    return m_severityLevel;
}

void DiagnoseResult::SetSeverityLevel(const string& _severityLevel)
{
    m_severityLevel = _severityLevel;
    m_severityLevelHasBeenSet = true;
}

bool DiagnoseResult::SeverityLevelHasBeenSet() const
{
    return m_severityLevelHasBeenSet;
}

