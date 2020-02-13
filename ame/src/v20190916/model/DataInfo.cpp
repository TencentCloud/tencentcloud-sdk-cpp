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

#include <tencentcloud/ame/v20190916/model/DataInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ame::V20190916::Model;
using namespace rapidjson;
using namespace std;

DataInfo::DataInfo() :
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_auditionBeginHasBeenSet(false),
    m_auditionEndHasBeenSet(false)
{
}

CoreInternalOutcome DataInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataInfo.Duration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_duration = string(value["Duration"].GetString());
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("AuditionBegin") && !value["AuditionBegin"].IsNull())
    {
        if (!value["AuditionBegin"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `DataInfo.AuditionBegin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_auditionBegin = value["AuditionBegin"].GetUint64();
        m_auditionBeginHasBeenSet = true;
    }

    if (value.HasMember("AuditionEnd") && !value["AuditionEnd"].IsNull())
    {
        if (!value["AuditionEnd"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `DataInfo.AuditionEnd` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_auditionEnd = value["AuditionEnd"].GetUint64();
        m_auditionEndHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_duration.c_str(), allocator).Move(), allocator);
    }

    if (m_auditionBeginHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AuditionBegin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_auditionBegin, allocator);
    }

    if (m_auditionEndHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AuditionEnd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_auditionEnd, allocator);
    }

}


string DataInfo::GetName() const
{
    return m_name;
}

void DataInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DataInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DataInfo::GetVersion() const
{
    return m_version;
}

void DataInfo::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool DataInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string DataInfo::GetDuration() const
{
    return m_duration;
}

void DataInfo::SetDuration(const string& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool DataInfo::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

uint64_t DataInfo::GetAuditionBegin() const
{
    return m_auditionBegin;
}

void DataInfo::SetAuditionBegin(const uint64_t& _auditionBegin)
{
    m_auditionBegin = _auditionBegin;
    m_auditionBeginHasBeenSet = true;
}

bool DataInfo::AuditionBeginHasBeenSet() const
{
    return m_auditionBeginHasBeenSet;
}

uint64_t DataInfo::GetAuditionEnd() const
{
    return m_auditionEnd;
}

void DataInfo::SetAuditionEnd(const uint64_t& _auditionEnd)
{
    m_auditionEnd = _auditionEnd;
    m_auditionEndHasBeenSet = true;
}

bool DataInfo::AuditionEndHasBeenSet() const
{
    return m_auditionEndHasBeenSet;
}

