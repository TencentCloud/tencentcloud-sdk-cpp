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

#include <tencentcloud/live/v20180801/model/AvatarTimbreInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

AvatarTimbreInfo::AvatarTimbreInfo() :
    m_timbreKeyHasBeenSet(false),
    m_timbreNameHasBeenSet(false),
    m_timbreDescHasBeenSet(false),
    m_timbreSampleHasBeenSet(false),
    m_timbreGenderHasBeenSet(false)
{
}

CoreInternalOutcome AvatarTimbreInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TimbreKey") && !value["TimbreKey"].IsNull())
    {
        if (!value["TimbreKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarTimbreInfo.TimbreKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timbreKey = string(value["TimbreKey"].GetString());
        m_timbreKeyHasBeenSet = true;
    }

    if (value.HasMember("TimbreName") && !value["TimbreName"].IsNull())
    {
        if (!value["TimbreName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarTimbreInfo.TimbreName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timbreName = string(value["TimbreName"].GetString());
        m_timbreNameHasBeenSet = true;
    }

    if (value.HasMember("TimbreDesc") && !value["TimbreDesc"].IsNull())
    {
        if (!value["TimbreDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarTimbreInfo.TimbreDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timbreDesc = string(value["TimbreDesc"].GetString());
        m_timbreDescHasBeenSet = true;
    }

    if (value.HasMember("TimbreSample") && !value["TimbreSample"].IsNull())
    {
        if (!value["TimbreSample"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarTimbreInfo.TimbreSample` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timbreSample = string(value["TimbreSample"].GetString());
        m_timbreSampleHasBeenSet = true;
    }

    if (value.HasMember("TimbreGender") && !value["TimbreGender"].IsNull())
    {
        if (!value["TimbreGender"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarTimbreInfo.TimbreGender` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timbreGender = string(value["TimbreGender"].GetString());
        m_timbreGenderHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AvatarTimbreInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timbreKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimbreKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timbreKey.c_str(), allocator).Move(), allocator);
    }

    if (m_timbreNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimbreName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timbreName.c_str(), allocator).Move(), allocator);
    }

    if (m_timbreDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimbreDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timbreDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_timbreSampleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimbreSample";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timbreSample.c_str(), allocator).Move(), allocator);
    }

    if (m_timbreGenderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimbreGender";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timbreGender.c_str(), allocator).Move(), allocator);
    }

}


string AvatarTimbreInfo::GetTimbreKey() const
{
    return m_timbreKey;
}

void AvatarTimbreInfo::SetTimbreKey(const string& _timbreKey)
{
    m_timbreKey = _timbreKey;
    m_timbreKeyHasBeenSet = true;
}

bool AvatarTimbreInfo::TimbreKeyHasBeenSet() const
{
    return m_timbreKeyHasBeenSet;
}

string AvatarTimbreInfo::GetTimbreName() const
{
    return m_timbreName;
}

void AvatarTimbreInfo::SetTimbreName(const string& _timbreName)
{
    m_timbreName = _timbreName;
    m_timbreNameHasBeenSet = true;
}

bool AvatarTimbreInfo::TimbreNameHasBeenSet() const
{
    return m_timbreNameHasBeenSet;
}

string AvatarTimbreInfo::GetTimbreDesc() const
{
    return m_timbreDesc;
}

void AvatarTimbreInfo::SetTimbreDesc(const string& _timbreDesc)
{
    m_timbreDesc = _timbreDesc;
    m_timbreDescHasBeenSet = true;
}

bool AvatarTimbreInfo::TimbreDescHasBeenSet() const
{
    return m_timbreDescHasBeenSet;
}

string AvatarTimbreInfo::GetTimbreSample() const
{
    return m_timbreSample;
}

void AvatarTimbreInfo::SetTimbreSample(const string& _timbreSample)
{
    m_timbreSample = _timbreSample;
    m_timbreSampleHasBeenSet = true;
}

bool AvatarTimbreInfo::TimbreSampleHasBeenSet() const
{
    return m_timbreSampleHasBeenSet;
}

string AvatarTimbreInfo::GetTimbreGender() const
{
    return m_timbreGender;
}

void AvatarTimbreInfo::SetTimbreGender(const string& _timbreGender)
{
    m_timbreGender = _timbreGender;
    m_timbreGenderHasBeenSet = true;
}

bool AvatarTimbreInfo::TimbreGenderHasBeenSet() const
{
    return m_timbreGenderHasBeenSet;
}

