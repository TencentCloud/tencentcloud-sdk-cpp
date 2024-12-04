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

#include <tencentcloud/ivld/v20210903/model/PersonInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

PersonInfo::PersonInfo() :
    m_nameHasBeenSet(false),
    m_jobHasBeenSet(false),
    m_firstAppearHasBeenSet(false),
    m_appearInfoHasBeenSet(false),
    m_appearRectHasBeenSet(false),
    m_personIdHasBeenSet(false)
{
}

CoreInternalOutcome PersonInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersonInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Job") && !value["Job"].IsNull())
    {
        if (!value["Job"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersonInfo.Job` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_job = string(value["Job"].GetString());
        m_jobHasBeenSet = true;
    }

    if (value.HasMember("FirstAppear") && !value["FirstAppear"].IsNull())
    {
        if (!value["FirstAppear"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PersonInfo.FirstAppear` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_firstAppear = value["FirstAppear"].GetInt64();
        m_firstAppearHasBeenSet = true;
    }

    if (value.HasMember("AppearInfo") && !value["AppearInfo"].IsNull())
    {
        if (!value["AppearInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PersonInfo.AppearInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_appearInfo.Deserialize(value["AppearInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_appearInfoHasBeenSet = true;
    }

    if (value.HasMember("AppearRect") && !value["AppearRect"].IsNull())
    {
        if (!value["AppearRect"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PersonInfo.AppearRect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_appearRect.Deserialize(value["AppearRect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_appearRectHasBeenSet = true;
    }

    if (value.HasMember("PersonId") && !value["PersonId"].IsNull())
    {
        if (!value["PersonId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersonInfo.PersonId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personId = string(value["PersonId"].GetString());
        m_personIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PersonInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_jobHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Job";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_job.c_str(), allocator).Move(), allocator);
    }

    if (m_firstAppearHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstAppear";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_firstAppear, allocator);
    }

    if (m_appearInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppearInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_appearInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_appearRectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppearRect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_appearRect.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_personIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_personId.c_str(), allocator).Move(), allocator);
    }

}


string PersonInfo::GetName() const
{
    return m_name;
}

void PersonInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PersonInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string PersonInfo::GetJob() const
{
    return m_job;
}

void PersonInfo::SetJob(const string& _job)
{
    m_job = _job;
    m_jobHasBeenSet = true;
}

bool PersonInfo::JobHasBeenSet() const
{
    return m_jobHasBeenSet;
}

int64_t PersonInfo::GetFirstAppear() const
{
    return m_firstAppear;
}

void PersonInfo::SetFirstAppear(const int64_t& _firstAppear)
{
    m_firstAppear = _firstAppear;
    m_firstAppearHasBeenSet = true;
}

bool PersonInfo::FirstAppearHasBeenSet() const
{
    return m_firstAppearHasBeenSet;
}

AppearInfo PersonInfo::GetAppearInfo() const
{
    return m_appearInfo;
}

void PersonInfo::SetAppearInfo(const AppearInfo& _appearInfo)
{
    m_appearInfo = _appearInfo;
    m_appearInfoHasBeenSet = true;
}

bool PersonInfo::AppearInfoHasBeenSet() const
{
    return m_appearInfoHasBeenSet;
}

Rectf PersonInfo::GetAppearRect() const
{
    return m_appearRect;
}

void PersonInfo::SetAppearRect(const Rectf& _appearRect)
{
    m_appearRect = _appearRect;
    m_appearRectHasBeenSet = true;
}

bool PersonInfo::AppearRectHasBeenSet() const
{
    return m_appearRectHasBeenSet;
}

string PersonInfo::GetPersonId() const
{
    return m_personId;
}

void PersonInfo::SetPersonId(const string& _personId)
{
    m_personId = _personId;
    m_personIdHasBeenSet = true;
}

bool PersonInfo::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

