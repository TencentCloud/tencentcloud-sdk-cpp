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

#include <tencentcloud/ciam/v20220331/model/Job.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ciam::V20220331::Model;
using namespace std;

Job::Job() :
    m_idHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_errorDetailsHasBeenSet(false),
    m_failedUsersHasBeenSet(false)
{
}

CoreInternalOutcome Job::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("CreatedDate") && !value["CreatedDate"].IsNull())
    {
        if (!value["CreatedDate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Job.CreatedDate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createdDate = value["CreatedDate"].GetInt64();
        m_createdDateHasBeenSet = true;
    }

    if (value.HasMember("Format") && !value["Format"].IsNull())
    {
        if (!value["Format"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.Format` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_format = string(value["Format"].GetString());
        m_formatHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.Location` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_location = string(value["Location"].GetString());
        m_locationHasBeenSet = true;
    }

    if (value.HasMember("ErrorDetails") && !value["ErrorDetails"].IsNull())
    {
        if (!value["ErrorDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Job.ErrorDetails` is not array type"));

        const rapidjson::Value &tmpValue = value["ErrorDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ErrorDetails item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_errorDetails.push_back(item);
        }
        m_errorDetailsHasBeenSet = true;
    }

    if (value.HasMember("FailedUsers") && !value["FailedUsers"].IsNull())
    {
        if (!value["FailedUsers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Job.FailedUsers` is not array type"));

        const rapidjson::Value &tmpValue = value["FailedUsers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FailedUsers item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_failedUsers.push_back(item);
        }
        m_failedUsersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Job::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_createdDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdDate, allocator);
    }

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_location.c_str(), allocator).Move(), allocator);
    }

    if (m_errorDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_errorDetails.begin(); itr != m_errorDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_failedUsersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedUsers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_failedUsers.begin(); itr != m_failedUsers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string Job::GetId() const
{
    return m_id;
}

void Job::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Job::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string Job::GetStatus() const
{
    return m_status;
}

void Job::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Job::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string Job::GetType() const
{
    return m_type;
}

void Job::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Job::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t Job::GetCreatedDate() const
{
    return m_createdDate;
}

void Job::SetCreatedDate(const int64_t& _createdDate)
{
    m_createdDate = _createdDate;
    m_createdDateHasBeenSet = true;
}

bool Job::CreatedDateHasBeenSet() const
{
    return m_createdDateHasBeenSet;
}

string Job::GetFormat() const
{
    return m_format;
}

void Job::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool Job::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

string Job::GetLocation() const
{
    return m_location;
}

void Job::SetLocation(const string& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool Job::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

vector<ErrorDetails> Job::GetErrorDetails() const
{
    return m_errorDetails;
}

void Job::SetErrorDetails(const vector<ErrorDetails>& _errorDetails)
{
    m_errorDetails = _errorDetails;
    m_errorDetailsHasBeenSet = true;
}

bool Job::ErrorDetailsHasBeenSet() const
{
    return m_errorDetailsHasBeenSet;
}

vector<FailedUsers> Job::GetFailedUsers() const
{
    return m_failedUsers;
}

void Job::SetFailedUsers(const vector<FailedUsers>& _failedUsers)
{
    m_failedUsers = _failedUsers;
    m_failedUsersHasBeenSet = true;
}

bool Job::FailedUsersHasBeenSet() const
{
    return m_failedUsersHasBeenSet;
}

