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

#include <tencentcloud/mvj/v20190926/model/Data.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mvj::V20190926::Model;
using namespace std;

Data::Data() :
    m_postTimeHasBeenSet(false),
    m_uidHasBeenSet(false),
    m_userIpHasBeenSet(false),
    m_valueScoreHasBeenSet(false)
{
}

CoreInternalOutcome Data::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PostTime") && !value["PostTime"].IsNull())
    {
        if (!value["PostTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Data.PostTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_postTime = value["PostTime"].GetUint64();
        m_postTimeHasBeenSet = true;
    }

    if (value.HasMember("Uid") && !value["Uid"].IsNull())
    {
        if (!value["Uid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Data.Uid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uid = string(value["Uid"].GetString());
        m_uidHasBeenSet = true;
    }

    if (value.HasMember("UserIp") && !value["UserIp"].IsNull())
    {
        if (!value["UserIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Data.UserIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userIp = string(value["UserIp"].GetString());
        m_userIpHasBeenSet = true;
    }

    if (value.HasMember("ValueScore") && !value["ValueScore"].IsNull())
    {
        if (!value["ValueScore"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Data.ValueScore` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_valueScore = value["ValueScore"].GetUint64();
        m_valueScoreHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Data::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_postTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_postTime, allocator);
    }

    if (m_uidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uid.c_str(), allocator).Move(), allocator);
    }

    if (m_userIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userIp.c_str(), allocator).Move(), allocator);
    }

    if (m_valueScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_valueScore, allocator);
    }

}


uint64_t Data::GetPostTime() const
{
    return m_postTime;
}

void Data::SetPostTime(const uint64_t& _postTime)
{
    m_postTime = _postTime;
    m_postTimeHasBeenSet = true;
}

bool Data::PostTimeHasBeenSet() const
{
    return m_postTimeHasBeenSet;
}

string Data::GetUid() const
{
    return m_uid;
}

void Data::SetUid(const string& _uid)
{
    m_uid = _uid;
    m_uidHasBeenSet = true;
}

bool Data::UidHasBeenSet() const
{
    return m_uidHasBeenSet;
}

string Data::GetUserIp() const
{
    return m_userIp;
}

void Data::SetUserIp(const string& _userIp)
{
    m_userIp = _userIp;
    m_userIpHasBeenSet = true;
}

bool Data::UserIpHasBeenSet() const
{
    return m_userIpHasBeenSet;
}

uint64_t Data::GetValueScore() const
{
    return m_valueScore;
}

void Data::SetValueScore(const uint64_t& _valueScore)
{
    m_valueScore = _valueScore;
    m_valueScoreHasBeenSet = true;
}

bool Data::ValueScoreHasBeenSet() const
{
    return m_valueScoreHasBeenSet;
}

