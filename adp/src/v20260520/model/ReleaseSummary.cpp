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

#include <tencentcloud/adp/v20260520/model/ReleaseSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ReleaseSummary::ReleaseSummary() :
    m_createTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_releaseIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusDescriptionHasBeenSet(false),
    m_channelIdListHasBeenSet(false)
{
}

CoreInternalOutcome ReleaseSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseSummary.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseSummary.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ReleaseId") && !value["ReleaseId"].IsNull())
    {
        if (!value["ReleaseId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseSummary.ReleaseId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_releaseId = string(value["ReleaseId"].GetString());
        m_releaseIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseSummary.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusDescription") && !value["StatusDescription"].IsNull())
    {
        if (!value["StatusDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseSummary.StatusDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDescription = string(value["StatusDescription"].GetString());
        m_statusDescriptionHasBeenSet = true;
    }

    if (value.HasMember("ChannelIdList") && !value["ChannelIdList"].IsNull())
    {
        if (!value["ChannelIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReleaseSummary.ChannelIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["ChannelIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_channelIdList.push_back((*itr).GetString());
        }
        m_channelIdListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReleaseSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_releaseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_releaseId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_statusDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_channelIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_channelIdList.begin(); itr != m_channelIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ReleaseSummary::GetCreateTime() const
{
    return m_createTime;
}

void ReleaseSummary::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ReleaseSummary::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ReleaseSummary::GetDescription() const
{
    return m_description;
}

void ReleaseSummary::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ReleaseSummary::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ReleaseSummary::GetReleaseId() const
{
    return m_releaseId;
}

void ReleaseSummary::SetReleaseId(const string& _releaseId)
{
    m_releaseId = _releaseId;
    m_releaseIdHasBeenSet = true;
}

bool ReleaseSummary::ReleaseIdHasBeenSet() const
{
    return m_releaseIdHasBeenSet;
}

int64_t ReleaseSummary::GetStatus() const
{
    return m_status;
}

void ReleaseSummary::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ReleaseSummary::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ReleaseSummary::GetStatusDescription() const
{
    return m_statusDescription;
}

void ReleaseSummary::SetStatusDescription(const string& _statusDescription)
{
    m_statusDescription = _statusDescription;
    m_statusDescriptionHasBeenSet = true;
}

bool ReleaseSummary::StatusDescriptionHasBeenSet() const
{
    return m_statusDescriptionHasBeenSet;
}

vector<string> ReleaseSummary::GetChannelIdList() const
{
    return m_channelIdList;
}

void ReleaseSummary::SetChannelIdList(const vector<string>& _channelIdList)
{
    m_channelIdList = _channelIdList;
    m_channelIdListHasBeenSet = true;
}

bool ReleaseSummary::ChannelIdListHasBeenSet() const
{
    return m_channelIdListHasBeenSet;
}

